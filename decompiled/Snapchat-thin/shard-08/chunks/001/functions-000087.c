/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d3de10; end: 105d3de1f; -[SCPreviewFeatureCTLensAiModeImpl gestureRecognizer:shouldReceiveTouch:] */

bool FUN_105d3de10(long param_1,undefined8 param_2,long param_3)

{
  return param_3 == *(long *)(param_1 + 0x178);
}



/* Entry: 105d3de20; end: 105d3de27; -[SCPreviewFeatureCTLensAiModeImpl gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_105d3de20(void)

{
  return 0;
}



/* Entry: 105d3de28; end: 105d3de2f; -[SCPreviewFeatureCTLensAiModeImpl toolbarItemViewModel] */

undefined8 FUN_105d3de28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1f8);
}



/* Entry: 105d3de30; end: 105d3e0f7; -[SCPreviewFeatureCTLensAiModeImpl .cxx_destruct] */

void FUN_105d3de30(long param_1)

{
  _objc_storeStrong(param_1 + 0x1f8,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_destroyWeak(param_1 + 0x1e8);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
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
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d3e0f8; end: 105d3e19b; -[SCPreviewFeatureCTLensAiModeSessionLogger initWithLensId:withLensSessionId:] */

undefined1 *
FUN_105d3e0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ecfb0;
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



/* Entry: 105d3e19c; end: 105d3e1eb; -[SCPreviewFeatureCTLensAiModeSessionLogger lensSessionId] */

void FUN_105d3e19c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar2;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105d3e1ec; end: 105d3e21b; -[SCPreviewFeatureCTLensAiModeSessionLogger setLensSessionId:] */

void FUN_105d3e1ec(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105d3e21c; end: 105d3e21f; -[SCPreviewFeatureCTLensAiModeSessionLogger baseSessionId] */

void FUN_105d3e21c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c096b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_lensSessionId_1126034e8);
  return;
}



/* Entry: 105d3e220; end: 105d3e26f; -[SCPreviewFeatureCTLensAiModeSessionLogger lensSwipeId] */

void FUN_105d3e220(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = lVar2;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105d3e270; end: 105d3e29f; -[SCPreviewFeatureCTLensAiModeSessionLogger setLensSwipeId:] */

void FUN_105d3e270(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d3e2a0; end: 105d3e2a7; -[SCPreviewFeatureCTLensAiModeSessionLogger currentLensIndex] */

undefined8 FUN_105d3e2a0(void)

{
  return 0;
}



/* Entry: 105d3e2a8; end: 105d3e2af; -[SCPreviewFeatureCTLensAiModeSessionLogger lensCount] */

undefined8 FUN_105d3e2a8(void)

{
  return 1;
}



/* Entry: 105d3e2b0; end: 105d3e2b7; -[SCPreviewFeatureCTLensAiModeSessionLogger lensSourceType] */

undefined8 FUN_105d3e2b0(void)

{
  return 0x2a;
}



/* Entry: 105d3e2b8; end: 105d3e2bf; -[SCPreviewFeatureCTLensAiModeSessionLogger lensSource] */

undefined8 FUN_105d3e2b8(void)

{
  return 0x25;
}



/* Entry: 105d3e2c0; end: 105d3e2c7; -[SCPreviewFeatureCTLensAiModeSessionLogger snapSource] */

undefined8 FUN_105d3e2c0(void)

{
  return 8;
}



/* Entry: 105d3e2c8; end: 105d3e37f; -[SCPreviewFeatureCTLensAiModeSessionLogger currentLens] */

void FUN_105d3e2c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b0820;
  _objc_alloc_init(PTR_PTR_1126b0820);
  puVar2 = puVar1;
  func_0x00010c2b2880();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bb828;
  _objc_alloc(PTR_PTR_1126bb828);
  func_0x00010c055f00();
  puVar4 = puVar2;
  func_0x00010c2abc20(puVar2,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105d3e380; end: 105d3e3d3; -[SCPreviewFeatureCTLensAiModeSessionLogger lensSessionInfoObservable] */

void FUN_105d3e380(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR_PTR_1126c4378;
  _objc_alloc_init(PTR_PTR_1126c4378);
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d3e3d4; end: 105d3e427; -[SCPreviewFeatureCTLensAiModeSessionLogger lensSwipeIdObservable] */

void FUN_105d3e3d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0972c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d3e428; end: 105d3e42f; -[SCPreviewFeatureCTLensAiModeSessionLogger arBarTabSessionId] */

undefined8 FUN_105d3e428(void)

{
  return 0;
}



/* Entry: 105d3e430; end: 105d3e437; -[SCPreviewFeatureCTLensAiModeSessionLogger arBarTabCategoryId] */

undefined8 FUN_105d3e430(void)

{
  return 0;
}



/* Entry: 105d3e438; end: 105d3e43f; -[SCPreviewFeatureCTLensAiModeSessionLogger contextSessionId] */

undefined8 FUN_105d3e438(void)

{
  return 0;
}



/* Entry: 105d3e440; end: 105d3e443; -[SCPreviewFeatureCTLensAiModeSessionLogger setContextSessionId:] */

void FUN_105d3e440(void)

{
  return;
}



/* Entry: 105d3e444; end: 105d3e44b; -[SCPreviewFeatureCTLensAiModeSessionLogger currentLensOptionId] */

undefined8 FUN_105d3e444(void)

{
  return 0;
}



/* Entry: 105d3e44c; end: 105d3e453; -[SCPreviewFeatureCTLensAiModeSessionLogger currentLensOptionSourceType] */

undefined8 FUN_105d3e44c(void)

{
  return 0xffffffffffffffff;
}



/* Entry: 105d3e454; end: 105d3e45b; -[SCPreviewFeatureCTLensAiModeSessionLogger frontCameraSnapFacesCount] */

undefined8 FUN_105d3e454(void)

{
  return 0;
}



/* Entry: 105d3e45c; end: 105d3e463; -[SCPreviewFeatureCTLensAiModeSessionLogger backCameraSnapFacesCount] */

undefined8 FUN_105d3e45c(void)

{
  return 0;
}



/* Entry: 105d3e464; end: 105d3e49f; -[SCPreviewFeatureCTLensAiModeSessionLogger .cxx_destruct] */

void FUN_105d3e464(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d3e4a0; end: 105d3ea9b; -[SCPreviewFeatureCTLensImpl initWithPreviewABServices:creativeToolsABServices:toolLensController:previewConfiguration:previewScopeServices:previewCommonLoggingServices:minervaImageProcessing:imagePlayback:featureSettingsService:simpleContentFetcher:freemiumGate:] */

undefined8 *
FUN_105d3e4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
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
  _objc_retain(param_13);
  puStack_70 = PTR_PTR_1126ecfb8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[10] = 0;
    uVar2 = param_3;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar17);
    uVar2 = param_4;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar17);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_13;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar2;
    func_0x00010c112020();
    puVar1[0x15] = uVar17;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010befa300(param_6);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  puVar4 = param_6;
  func_0x00010bf5cf00(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = puVar1[6];
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar17;
  func_0x00010bf926c0();
  _objc_release(uVar17);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if ((int)uVar2 != 0) {
    uVar17 = puVar1[6];
    func_0x00010c240000(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar17;
    func_0x00010c0ff5a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar17);
    lVar5 = puVar1[6];
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    lVar6 = lVar5;
    func_0x00010c12fa80();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    puVar8 = puVar4;
    if (lVar7 != 0) {
      puVar8 = PTR_PTR_1126c4340;
      _objc_alloc();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar6 = lVar7;
      func_0x00010bf5cc00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar6;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar5;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c094540();
      func_0x00010c0df7c0(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar7;
      func_0x00010bf5cc00(lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar14;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c097820();
      func_0x00010c0241a0();
      _objc_release(puVar4);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar5);
      _objc_release(lVar6);
    }
    _objc_release(lVar7);
    _objc_release(puVar3);
    _objc_release(puVar3);
    puVar4 = puVar8;
  }
  puVar3 = param_6;
  func_0x00010bf5cf00(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdce3c0(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar4);
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



/* Entry: 105d3ea9c; end: 105d3eb0b;  */

void FUN_105d3ea9c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c129080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d3eb0c; end: 105d3ec2b;  */

bool FUN_105d3eb0c(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  iVar9 = (int)*(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c066480(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ff5c0();
  func_0x00010c0df820(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  if (iVar9 == 0) {
    bVar1 = false;
  }
  else {
    uVar5 = param_2;
    func_0x00010bf5cc00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf96ee0();
    bVar1 = (int)uVar8 == 0x19;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 105d3ec2c; end: 105d3ec8b; -[SCPreviewFeatureCTLensImpl isPreviewLensTypeMatchingCurrentLensConfig:currentLensConfigType:] */

undefined8 FUN_105d3ec2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  if (param_3 - 1U < 3) {
    uVar1 = param_4;
    func_0x00010c0720c0(param_4,param_2,(&PTR_PTR_1108e6a40)[param_3 - 1U]);
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 105d3ec8c; end: 105d3f007; -[SCPreviewFeatureCTLensImpl _applyLensIfNeededWithLensState:] */

/* WARNING: Possible PIC construction at 0x000105d3eec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105d3eecc) */
/* WARNING: Removing unreachable block (ram,0x000105d3eed0) */
/* WARNING: Removing unreachable block (ram,0x000105d3ef34) */

void FUN_105d3ec8c(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010c272ce0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_retain(lVar4);
    lVar5 = lVar4;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    if (lVar5 != 0) {
      lVar12 = 0;
      do {
        lVar13 = 0;
        lVar1 = lVar5 + lVar12;
        do {
          lVar12 = lVar12 + 1;
          if (lRam0000000000000000 != lVar3) {
            _objc_enumerationMutation(lVar4);
          }
          uVar14 = *(undefined8 *)(lVar13 * 8);
          func_0x00010c097820(param_3);
          uVar10 = uVar14;
          func_0x00010c097820(uVar14);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_1;
          func_0x00010c07aea0();
          if ((uVar6 & 1) == 0) {
            _objc_release(uVar10);
          }
          else {
            lVar7 = param_3;
            func_0x00010c094320();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar14;
            func_0x00010c094540(uVar14);
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar7;
            func_0x00010c0720c0();
            _objc_release(uVar8);
            _objc_release(lVar7);
            _objc_release(uVar10);
            if ((int)lVar9 != 0) {
              *(long *)(param_1 + 0x50) = lVar12;
              lVar3 = param_3;
              func_0x00010c094320(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c097820(uVar14);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bdce3a0(param_1);
              _objc_release(uVar14);
              _objc_release(lVar3);
              _objc_release(lVar4);
              goto LAB_105d3efbc;
            }
          }
          lVar13 = lVar13 + 1;
        } while (lVar5 != lVar13);
        lVar5 = lVar4;
        func_0x00010bf52a60();
        lVar12 = lVar1;
      } while (lVar5 != 0);
    }
    _objc_release(lVar4);
    iVar2 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c06dac0();
    if (iVar2 != 0) {
      uVar10 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf5cf20(uVar10);
      _objc_retainAutoreleasedReturnValue();
      param_2 = uVar10;
      func_0x00010bf08b20();
      _objc_release(uVar10);
      goto code_r0x00010beb6740;
    }
LAB_105d3efbc:
    _objc_release(lVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  param_1 = *(ulong *)(param_3 + 0x20);
  func_0x00010bf08b20(param_2);
code_r0x00010beb6740:
                    /* WARNING: Could not recover jumptable at 0x00010beb6750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__shouldShowToolWithApplyType__11258b378,param_2);
  return;
}



/* Entry: 105d3f008; end: 105d3f033;  */

void FUN_105d3f008(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf08b20(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010beb6750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s__shouldShowToolWithApplyType__11258b378,param_2);
  return;
}



/* Entry: 105d3f034; end: 105d3f1bf; -[SCPreviewFeatureCTLensImpl isFeatureEnabled] */

ulong FUN_105d3f034(ulong param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar6 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar6;
  func_0x00010c0811c0();
  if ((uVar2 & 1) == 0) {
    lVar7 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar3 = lVar7;
    func_0x00010c070a20();
    if ((int)lVar3 == 0) {
      uVar2 = param_1 + 0x28;
      _objc_loadWeakRetained();
      uVar4 = uVar2;
      func_0x00010c2440e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c07f160();
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(lVar7);
      _objc_release(uVar6);
      if (((uVar5 & 1) != 0) || (uVar6 = param_1, func_0x00010beb3f80(), (uVar6 & 1) != 0)) {
        return 0;
      }
      uVar6 = *(ulong *)(param_1 + 8);
      func_0x00010c272ce0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      func_0x00010bfaea20();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x58);
      *(ulong *)(param_1 + 0x58) = uVar2;
      _objc_release(uVar9);
      lVar7 = *(long *)(param_1 + 0x58);
      func_0x00010bf529e0();
      if (lVar7 != 0) {
        param_1 = 1;
        goto LAB_105d3f084;
      }
      iVar1 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010c06dac0();
      if (iVar1 != 0) {
        uVar8 = *(undefined8 *)(param_1 + 8);
        func_0x00010bf5cf20(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010bf08b20();
        _objc_release(uVar8);
        func_0x00010beb6740(param_1,param_2,uVar9);
        goto LAB_105d3f084;
      }
    }
    else {
      _objc_release(lVar7);
    }
  }
  param_1 = 0;
LAB_105d3f084:
  _objc_release(uVar6);
  return param_1;
}



/* Entry: 105d3f1c0; end: 105d3f1eb;  */

void FUN_105d3f1c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf08b20(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010beb6750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s__shouldShowToolWithApplyType__11258b378,param_2);
  return;
}



/* Entry: 105d3f1ec; end: 105d3f2b7; -[SCPreviewFeatureCTLensImpl _shouldHideCTLensForPerfectSelfie] */

undefined8 FUN_105d3f1ec(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = param_1;
  func_0x0001007f8afc();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c075080();
    if ((int)lVar3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar1 = param_1 + 0x28;
      _objc_loadWeakRetained();
      uVar4 = uVar1;
      func_0x00010c070a20();
      if ((uVar4 & 1) == 0) {
        lVar3 = param_1 + 0x28;
        _objc_loadWeakRetained();
        lVar5 = lVar3;
        func_0x00010c134300();
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 == 0) {
          uVar6 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c07af40(uVar6);
        }
        else {
          uVar6 = 0;
        }
        _objc_release(lVar5);
        _objc_release(lVar3);
      }
      else {
        uVar6 = 0;
      }
      _objc_release(uVar1);
    }
    _objc_release(lVar2);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 105d3f2b8; end: 105d3f31b; -[SCPreviewFeatureCTLensImpl _shouldShowToolWithApplyType:] */

long FUN_105d3f2b8(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  if (param_3 == 3) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c083340();
  }
  else {
    if (param_3 != 2) {
      return 1;
    }
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c075080();
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105d3f31c; end: 105d3f403; -[SCPreviewFeatureCTLensImpl toolbarItemConfiguration] */

void FUN_105d3f31c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x00010bed2000(param_1,param_2,&PTR____CFConstantStringClassReference_110e29038);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010bf5cf20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c097820();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0720c0();
  if ((uVar4 & 1) == 0) {
    func_0x000108edf278();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108edf2c0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126c4010;
  _objc_alloc(PTR_PTR_1126c4010);
  func_0x00010c020380();
  _objc_release(uVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105d3f404; end: 105d3f46b; -[SCPreviewFeatureCTLensImpl state] */

void FUN_105d3f404(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    puVar1 = PTR_PTR_1126c4340;
    _objc_alloc(PTR_PTR_1126c4340);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010be9df40(param_1);
    func_0x00010c0241a0(puVar1,param_2,uVar2,param_1,1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d3f46c; end: 105d3f50b; -[SCPreviewFeatureCTLensImpl _ctpLensTypeFromTypeString:] */

undefined4 FUN_105d3f46c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e29278);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e29298);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e292d8);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e292b8);
        uVar2 = 4;
        if ((int)uVar1 == 0) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105d3f50c; end: 105d3f5ab; -[SCPreviewFeatureCTLensImpl _lensTypeFromTypeString:] */

undefined8 FUN_105d3f50c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e29278);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e29298);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e292d8);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e292b8);
        uVar2 = 3;
        if ((int)uVar1 == 0) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 4;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105d3f5ac; end: 105d3f5cf; -[SCPreviewFeatureCTLensImpl _ctpLensTypeFromPreviewToolLensType:] */

undefined4 FUN_105d3f5ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    return *(undefined4 *)(&UNK_10ddd05c0 + (param_3 - 1U) * 4);
  }
  return 0;
}



/* Entry: 105d3f5d0; end: 105d3f60f; -[SCPreviewFeatureCTLensImpl configureWithView:] */

void FUN_105d3f5d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108cc6364(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x20,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d3f610; end: 105d3f773; -[SCPreviewFeatureCTLensImpl handleCTLensButtonTap] */

/* WARNING: Possible PIC construction at 0x000105d3f650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105d3f654) */
/* WARNING: Removing unreachable block (ram,0x000105d3f6e0) */
/* WARNING: Removing unreachable block (ram,0x000105d3f65c) */

void FUN_105d3f610(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    if (*(char *)(param_1 + 0x38) != '\x01') {
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf5cf20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      uVar7 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf5cf20(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c097820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdce3a0(param_1);
      _objc_release(uVar5);
      _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar6);
      return;
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0x58);
    uVar1 = *(long *)(param_1 + 0x50) + 1;
    func_0x00010bf529e0();
    uVar2 = lVar4 + 1;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    *(ulong *)(param_1 + 0x50) = uVar1 - uVar3 * uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be8b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeAppliedLens_112580718);
  return;
}



/* Entry: 105d3f774; end: 105d3f89f; -[SCPreviewFeatureCTLensImpl _handleRemoteInference] */

void FUN_105d3f774(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c293120();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010becceb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__toggleRemoteInference_112590d50);
    return;
  }
  _objc_initWeak(auStack_38,param_1);
  func_0x00010be110c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = auStack_40;
  _objc_copyWeak(puVar3,auStack_38);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_1);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105d3f8a0; end: 105d3f8ef;  */

void FUN_105d3f8a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beb9080(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d3f8f0; end: 105d3fa83; -[SCPreviewFeatureCTLensImpl fetchRetouchedImageForOriginalImage:withCompletion:] */

void FUN_105d3f8f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c4380;
  _objc_alloc(PTR_PTR_1126c4380);
  func_0x00010c01cd80();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  uVar4 = uVar2;
  func_0x00010c114c00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d3fa84; end: 105d3faeb;  */

void FUN_105d3fa84(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar2 != 0) && (lVar3 = *(long *)(param_1 + 0x20), lVar3 != 0)) {
    uVar1 = param_2;
    if (param_3 != 0) {
      uVar1 = 0;
    }
    (**(code **)(lVar3 + 0x10))(lVar3,uVar1);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d3faec; end: 105d3fb57; -[SCPreviewFeatureCTLensImpl downscaleImage:withScaleFactor:] */

void FUN_105d3faec(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = param_1;
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_5);
  func_0x00010c23d0a0(param_5);
  uVar1 = param_5;
  func_0x00010c14e280(param_1 * dVar2,param_1 * param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d3fb58; end: 105d3fd3f; -[SCPreviewFeatureCTLensImpl _toggleRemoteInference] */

void FUN_105d3fb58(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0xb8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be30d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleStateChange_112569ce8);
    return;
  }
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105d3fd40;
  uStack_40 = 0x105d3fd50;
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  lStack_38 = lVar4;
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c1bedc0(puStack_58[5]);
  _objc_initWeak(auStack_68,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bfa9dc0(param_1);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(lStack_38);
  return;
}



/* Entry: 105d3fd40; end: 105d3fd57;  */

void FUN_105d3fd40(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105d3fd58; end: 105d3ff3f;  */

void FUN_105d3fd58(undefined *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  func_0x00010c1bedc0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  if (puVar1 != (undefined *)0x0) {
    if (param_2 == 0) {
      func_0x00010bddf340(puVar1);
    }
    else {
      uVar2 = *(undefined8 *)(puVar1 + 0x70);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfe6ac0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(puVar1 + 0xa0);
      *(undefined8 *)(puVar1 + 0xa0) = uVar3;
      _objc_release(uVar8);
      _objc_release(uVar2);
      uVar3 = *(undefined8 *)(puVar1 + 0x70);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00();
      _objc_release(uVar3);
      puVar1[0x38] = 1;
      puVar1[0xb8] = 1;
      func_0x00010be30d20(puVar1);
      unaff_x22 = PTR_PTR_1126c4320;
      _objc_alloc();
      func_0x00010c0246c0();
      unaff_x23 = *(undefined8 *)(puVar1 + 0x60);
      func_0x00010c0b3920();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x23;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = unaff_x24;
      func_0x00010c0f3940();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_68 = &PTR____CFConstantStringClassReference_110e29338;
      param_1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_60 = unaff_x22;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bb4a0(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(uVar3);
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      _objc_release(unaff_x22);
    }
  }
  _objc_release(puVar1);
  lVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_105d3ff40;
  puVar5 = PTR_PTR_1126ae560;
  uStack_b0 = unaff_x24;
  uStack_a8 = unaff_x23;
  puStack_a0 = unaff_x22;
  puStack_98 = param_1;
  puStack_90 = puVar1;
  lStack_88 = param_2;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_alloc_init();
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  _objc_initWeak(auStack_b8,lVar4);
  uVar3 = *(undefined8 *)(lVar4 + 0x98);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_c0,auStack_b8);
  _objc_retain(puVar5);
  func_0x00010c13e600(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar7 = puVar5;
  func_0x00010bfbc3e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105d3ff40; end: 105d400c3; -[SCPreviewFeatureCTLensImpl _fetchFTUXImage] */

void FUN_105d3ff40(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar1);
  func_0x00010c13e600(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar5 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105d400c4; end: 105d401a3;  */

void FUN_105d400c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bfcaaa0();
    if (lVar2 == 0) {
      lVar2 = param_2;
      func_0x00010c13e900(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
      _objc_release(lVar2);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
      func_0x00010c00e2e0();
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d401a4; end: 105d40473; -[SCPreviewFeatureCTLensImpl _showFTUXWithImage:] */

void FUN_105d401a4(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = auStack_80;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  FUN_105d48218();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = auStack_80;
  _objc_copyWeak(auStack_88,puVar12);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed70;
  func_0x000105d48230();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar2;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar6 = puVar5;
  func_0x000105d48248();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000105d48260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c480(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c240640();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar11;
  func_0x00010c27ed00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c0cfd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(uVar8);
  func_0x00010bf0c980(uVar10);
  _objc_release(uVar10);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  _objc_retain(puVar12);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    func_0x00010bf84b00(puVar12);
    uVar11 = *(undefined8 *)(param_3 + 0x90);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ede0();
    _objc_release(uVar11);
    func_0x00010beccea0(param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 105d40474; end: 105d404fb;  */

void FUN_105d40474(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf84b00(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21ede0();
    _objc_release(uVar1);
    func_0x00010beccea0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d404fc; end: 105d4050b;  */

void FUN_105d404fc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105d4050c; end: 105d406b3; -[SCPreviewFeatureCTLensImpl _removeAppliedLens] */

void FUN_105d4050c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0xb8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010becceb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__toggleRemoteInference_112590d50);
    return;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x00010bf2dba0();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010c27f1c0(*(undefined8 *)(param_1 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c0b3920(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar2);
    uVar1 = uVar4;
    func_0x00010c2736c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0d3c80();
    _objc_release(uVar1);
    func_0x00010c1d0640(uVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c0b3920(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb4a0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar5);
    func_0x00010bea5420(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x38) = 0;
    func_0x00010be30d20(param_1);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 105d406b4; end: 105d4087b; -[SCPreviewFeatureCTLensImpl _applyLens:withToolType:] */

void FUN_105d406b4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010be4c040();
  lVar3 = param_3;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    func_0x00010bddf340(param_1);
  }
  else {
    if (lVar2 == 1) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
      func_0x00010c07b000();
      if (iVar1 != 0) {
        func_0x00010bdce160(param_1);
        goto LAB_105d40830;
      }
      iVar1 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010c06daa0();
      if (iVar1 != 0) {
        lVar2 = param_1 + 0x28;
        _objc_loadWeakRetained();
        lVar3 = lVar2;
        func_0x00010c075080();
        _objc_release(lVar2);
        if ((int)lVar3 != 0) {
          func_0x00010be2ede0(param_1);
          goto LAB_105d40830;
        }
      }
    }
    _objc_initWeak(auStack_48,param_1);
    puVar4 = PTR_PTR_1126c3c78;
    _objc_alloc(PTR_PTR_1126c3c78);
    func_0x00010c0258c0();
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    func_0x00010bf08a00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    _objc_release(uVar5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_48);
  }
LAB_105d40830:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d4087c; end: 105d408d3;  */

void FUN_105d4087c(long param_1,ulong param_2)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if ((param_2 & 1) == 0) {
      func_0x00010bddf340(param_1);
    }
    else {
      func_0x00010be2b340(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d408d4; end: 105d40947; -[SCPreviewFeatureCTLensImpl _handleLensAppliedWithId:] */

void FUN_105d408d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bea5420(param_1);
  _objc_release(param_3);
  *(undefined1 *)(param_1 + 0x38) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be30d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleStateChange_112569ce8);
  return;
}



/* Entry: 105d40948; end: 105d40a77; -[SCPreviewFeatureCTLensImpl _applyExclusiveGatedLens:withLensType:] */

void FUN_105d40948(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126c3c78;
  _objc_alloc(PTR_PTR_1126c3c78);
  func_0x00010c0258c0();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010bf08a20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105d40a78; end: 105d40b03;  */

void FUN_105d40a78(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      func_0x00010bddf340(param_1);
    }
    else {
      lVar1 = param_2;
      func_0x00010c094fa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be2a220(param_1);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d40b04; end: 105d40b9f; -[SCPreviewFeatureCTLensImpl _handleGatedLensApplied:lensMetadata:] */

void FUN_105d40b04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0xb0);
  func_0x00010bf8d340(lVar1,param_2,param_4);
  if (lVar1 == 0) {
LAB_105d40b74:
    func_0x00010be97340(param_1,param_2,param_3,param_4);
  }
  else {
    if (lVar1 == 2) {
      uVar2 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010bf39b40(uVar2,param_2,param_4);
      if ((int)uVar2 == 0) goto LAB_105d40b74;
    }
    else if (lVar1 != 1) goto LAB_105d40b84;
    func_0x00010be2b340(param_1,param_2,param_3);
  }
LAB_105d40b84:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d40ba0; end: 105d40c27; -[SCPreviewFeatureCTLensImpl _revertGatedLens:lensMetadata:] */

void FUN_105d40ba0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c27f1c0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x38) = 0;
  func_0x00010be30d20(param_1);
  func_0x00010c10cd00(*(undefined8 *)(param_1 + 0xb0),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d40c28; end: 105d40e7f; -[SCPreviewFeatureCTLensImpl _handleStateChange] */

void FUN_105d40c28(undefined *param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar3 = param_1 + 0x20;
  _objc_loadWeakRetained(puVar3);
  puVar4 = puVar3;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c084f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar6 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  if (lVar6 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e29218;
    if (param_1[0x38] == '\0') {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e29038;
    }
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = param_1;
    if (*(long *)(param_1 + 0x50) == 0) {
      func_0x00010bed2000(param_1,param_2,&PTR____CFConstantStringClassReference_110e29038);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c0dfd40(uVar7,param_2,*(long *)(param_1 + 0x50) + -1);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c097820();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be37240(param_1,param_2,uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
  }
  func_0x00010c2865c0(puVar5,param_2,puVar3,1);
  if (*(long *)(param_1 + 0xa8) != 0) {
    lVar6 = *(long *)(param_1 + 0x58);
    func_0x00010bf529e0();
    if (lVar6 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(long *)(param_1 + 0x50) != 0;
    }
    func_0x00010c289a80(puVar5,param_2,puVar3);
    func_0x00010c13a1a0(0x3ff0000000000000,puVar5,param_2,bVar2);
  }
  lVar6 = *(long *)(param_1 + 0x58);
  func_0x00010bf529e0();
  puVar4 = param_1 + 0x20;
  _objc_loadWeakRetained(puVar4);
  if (lVar6 == 0) {
    puVar10 = param_1;
    func_0x00010be36240(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237c00(puVar4,param_2,0,puVar10);
  }
  else {
    puVar10 = puVar4;
    func_0x00010c273c20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010becd3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10e860(puVar10,param_2,puVar5,puVar9);
    _objc_release(puVar9);
  }
  _objc_release(puVar10);
  _objc_release(puVar4);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c08f640(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(uVar8);
  _objc_release(uVar7);
  func_0x00010c129080(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105d40e80; end: 105d40f6b; -[SCPreviewFeatureCTLensImpl _tooltipTitle] */

void FUN_105d40e80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    func_0x000108edf368();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = *(long *)(param_1 + 0x58);
    func_0x00010c0dfd40(lVar1,param_2,*(long *)(param_1 + 0x50) + -1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar1;
    func_0x00010c097820();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0720c0();
    _objc_release(param_1);
    if ((int)lVar2 == 0) {
      param_1 = lVar1;
      func_0x00010c097820();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0720c0();
      _objc_release(param_1);
      if ((int)lVar2 == 0) {
        func_0x000108edf2d8();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000108edf380();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x000108edf290();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d40f6c; end: 105d4107b; -[SCPreviewFeatureCTLensImpl _imageForToolType:] */

void FUN_105d40f6c(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0xa8) - 1U < 2) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e29278);
    if ((int)uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e292b8);
      if ((int)uVar1 == 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e29238;
      }
      else {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e29258;
      }
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e29218;
    }
    func_0x00010bed2000(param_1,param_2,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (*(long *)(param_1 + 0xa8) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e29278);
    if ((int)uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e292b8);
      if ((int)uVar1 == 0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e29238;
      }
      else {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e29258;
      }
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e29218;
    }
    param_1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d4107c; end: 105d410eb; -[SCPreviewFeatureCTLensImpl _hintText] */

void FUN_105d4107c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be9df40();
  if (lVar1 == 2) {
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      func_0x000108edf2f0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108edf2d8();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    func_0x000108edf2a8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108edf290();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d410ec; end: 105d41177; -[SCPreviewFeatureCTLensImpl _selectedLensType] */

long FUN_105d410ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf5cf20(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c0dfd40(uVar1,param_2,*(long *)(param_1 + 0x50) + -1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = uVar1;
  func_0x00010c097820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be4c040(param_1,param_2,uVar2);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 105d41178; end: 105d412d7; -[SCPreviewFeatureCTLensImpl _cleanUpWithError] */

void FUN_105d41178(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126aed70;
  func_0x00010beff4c0(PTR_PTR_1126aed70,param_2,&PTR____CFConstantStringClassReference_110dd6e18,
                      &PTR___NSConcreteGlobalBlock_1108e6a00);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c4e0(puVar2);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c240640(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c27ed00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0cfd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x00010bf0c980(uVar7);
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105d412d8; end: 105d412e7;  */

void FUN_105d412d8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 105d412e8; end: 105d41753; -[SCPreviewFeatureCTLensImpl _setLensWithId:] */

ulong FUN_105d412e8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c240000();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf926c0();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if ((int)uVar4 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c240000(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0ff5a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c240000(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    func_0x00010c12dfe0(uVar4);
    _objc_release(uVar4);
    if (param_3 != 0) {
      _objc_retain(puVar3);
      puVar5 = puVar3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar5 != (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar3);
          }
          uVar4 = *(undefined8 *)((long)puVar12 * 8);
          puVar6 = PTR_PTR_1126bcd28;
          _objc_opt_new(PTR_PTR_1126bcd28);
          func_0x00010c0b4ca0(param_3);
          puVar7 = puVar6;
          func_0x00010bf5cc00(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010c08fb40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bbd60();
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          puVar7 = puVar6;
          func_0x00010bf5cc00(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010c08fb40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a71c0();
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          func_0x00010be9df40(param_1);
          func_0x00010bdf65a0(param_1);
          puVar7 = puVar6;
          func_0x00010bf5cc00(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010c08fb40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bd160();
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          puVar7 = puVar6;
          func_0x00010bf5cc00(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c097680();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1b15a0();
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar7);
          puVar7 = PTR_PTR_1126bcd38;
          _objc_opt_new(PTR_PTR_1126bcd38);
          func_0x00010c2827c0(uVar4);
          func_0x00010c1dd680(puVar7);
          puVar8 = puVar6;
          func_0x00010c066480(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar8);
          uVar4 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010c240000(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befae60();
          _objc_release(uVar4);
          _objc_release(puVar7);
          _objc_release(puVar6);
          puVar12 = puVar12 + 1;
        } while (puVar5 != puVar12);
        puVar5 = puVar3;
        func_0x00010bf52a60();
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (ulong)((int)uVar4 == 5);
}



/* Entry: 105d41754; end: 105d41797;  */

bool FUN_105d41754(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 5;
}



/* Entry: 105d41798; end: 105d4192b;  */

bool FUN_105d41798(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c097820();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  iVar10 = (int)*(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c066480(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ff5c0();
  func_0x00010c0df820(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  if (iVar10 == 0) {
    bVar9 = false;
  }
  else {
    uVar3 = param_2;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf96ee0();
    bVar9 = (int)uVar8 == 0x19 && (int)uVar5 - 2U < 3;
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return bVar9;
}



/* Entry: 105d4192c; end: 105d41a1f; -[SCPreviewFeatureCTLensImpl _unselectedIconForIconName:] */

void FUN_105d4192c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b0c40;
  lVar2 = *(long *)(param_1 + 0xa8);
  if (lVar2 == 2) {
    func_0x00010bebbfe0(param_1,param_2,param_3);
  }
  else {
    if (lVar2 != 1) {
      if (lVar2 == 0) {
        puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar3 = (undefined *)0x0;
      }
      goto LAB_105d41a04;
    }
    func_0x00010bebbfc0(param_1,param_2,param_3);
  }
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar3,param_2,param_1,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
LAB_105d41a04:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105d41a20; end: 105d41ab7; -[SCPreviewFeatureCTLensImpl _sigIconTypeFillForIconName:] */

undefined8 FUN_105d41a20(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e29038);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e29218),
     (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e29238);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e29258);
      uVar2 = 0x23b;
      if ((int)uVar1 == 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0x211;
    }
  }
  else {
    uVar2 = 0x2e5;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105d41ab8; end: 105d41b4f; -[SCPreviewFeatureCTLensImpl _sigIconTypeStrokeForIconName:] */

undefined8 FUN_105d41ab8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e29038);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e29218),
     (uVar1 & 1) == 0)) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e29238);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e29258);
      uVar2 = 0x23c;
      if ((int)uVar1 == 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0x212;
    }
  }
  else {
    uVar2 = 0x2e6;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105d41b50; end: 105d41bef; -[SCPreviewFeatureCTLensImpl setToolbarItemViewModel:] */

void FUN_105d41b50(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0xc0);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    *(long *)(param_1 + 0xc0) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    puVar3 = PTR_PTR_1126ae750;
    if (param_3 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d41bf0; end: 105d41d7f; -[SCPreviewFeatureCTLensImpl reloadToolbarItemViewModel] */

/* WARNING: Possible PIC construction at 0x000105d41cd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105d41d58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105d41cdc) */
/* WARNING: Removing unreachable block (ram,0x000105d41d5c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_105d41bf0(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  
  if ((*(long *)(param_1 + 0x80) == 0) || (uVar1 = param_1, func_0x00010c072ba0(), (uVar1 & 1) == 0)
     ) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf5cf60(PTR_PTR_1126c4330);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c273aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR_PTR_1126c4388;
    if (uVar1 == 0) {
      puVar2 = PTR_PTR_1126c3cc0;
      _objc_alloc(PTR_PTR_1126c3cc0);
      func_0x00010c039d00();
    }
    else {
      func_0x00010c273aa0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c112060(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b0b00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b4fc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c216fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setToolbarItemViewModel__112663610,puVar2);
  return;
}



/* Entry: 105d41d80; end: 105d41da7; -[SCPreviewFeatureCTLensImpl toolbarItemViewModelObservable] */

void FUN_105d41d80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d41da8; end: 105d41db7; -[SCPreviewFeatureCTLensImpl editCount] */

bool FUN_105d41da8(long param_1)

{
  return *(long *)(param_1 + 0x50) != 0;
}



/* Entry: 105d41db8; end: 105d41dbf; -[SCPreviewFeatureCTLensImpl isRemoteInferenceLensApplied] */

undefined1 FUN_105d41db8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb8);
}



/* Entry: 105d41dc0; end: 105d41dc7; -[SCPreviewFeatureCTLensImpl toolbarItemViewModel] */

undefined8 FUN_105d41dc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 105d41dc8; end: 105d41ebb; -[SCPreviewFeatureCTLensImpl .cxx_destruct] */

void FUN_105d41dc8(long param_1)

{
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 105d41ebc; end: 105d422cf; -[SCPreviewFeatureCTLensMagicEraserImpl initWithPreviewABServices:creativeToolsABServices:dirtyFrameProvider:toolLensController:previewConfiguration:previewScopeServices:imagePlayback:viewportController:filterOverlayComposition:filterUIContainer:interactionStateLogger:captionFeature:stickerContainer:snapCrop:previewCommonLoggingServices:ctLensCoordinator:] */

undefined8 *
FUN_105d41ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

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
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126ecfc0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar4);
    uVar2 = param_4;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar4);
    _objc_storeWeak(puVar1 + 6,param_5);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_7);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    puVar1[0x18] = 1;
    _objc_retain(param_17);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_18;
    _objc_release(uVar2);
    func_0x00010be65ca0(puVar1);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010befa300(param_7);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_18);
  _objc_release(param_17);
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105d422d0; end: 105d422fb;  */

void FUN_105d422d0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c129080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d422fc; end: 105d42343; -[SCPreviewFeatureCTLensMagicEraserImpl configureWithView:] */

void FUN_105d422fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108cc6364(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x20,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010beab1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupBottomComponent_112588618);
  return;
}



/* Entry: 105d42344; end: 105d4242b; -[SCPreviewFeatureCTLensMagicEraserImpl snapEditor:didTapBackFromTool:] */

bool FUN_105d42344(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if ((param_4 == 0x15) && (*(char *)(param_1 + 0x78) == '\x01')) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105d4242c;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return param_4 == 0x15;
}



/* Entry: 105d4242c; end: 105d42573;  */

ulong FUN_105d4242c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    *(undefined8 *)(uVar1 + 0xc0) = 1;
    puVar2 = PTR_PTR_1126c4320;
    _objc_alloc();
    func_0x00010c0246c0();
    uVar3 = *(undefined8 *)(uVar1 + 200);
    func_0x00010c0b3920(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_58 = &PTR____CFConstantStringClassReference_110f02a18;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb4a0(uVar5,param_2,puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010be0c260(uVar1);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return uVar1;
  }
  ___stack_chk_fail();
  return (ulong)*(byte *)(uVar1 + 0xa8);
}



/* Entry: 105d42574; end: 105d4257b; -[SCPreviewFeatureCTLensMagicEraserImpl editCount] */

undefined1 FUN_105d42574(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa8);
}



/* Entry: 105d4257c; end: 105d42583; -[SCPreviewFeatureCTLensMagicEraserImpl isMagicLensApplied] */

undefined1 FUN_105d4257c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xa8);
}



/* Entry: 105d42584; end: 105d4263f; -[SCPreviewFeatureCTLensMagicEraserImpl isFeatureEnabled] */

uint FUN_105d42584(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = param_1;
  func_0x0001007f8afc();
  if ((uVar1 & 1) == 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c070a20();
    if ((int)lVar3 == 0) {
      uVar1 = param_1 + 0x28;
      _objc_loadWeakRetained();
      uVar4 = uVar1;
      func_0x00010c075080();
      if ((uVar4 & 1) != 0) {
        lVar3 = param_1 + 0x28;
        _objc_loadWeakRetained();
        lVar5 = lVar3;
        func_0x00010c134300();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar3);
        _objc_release(uVar1);
        _objc_release(lVar2);
        if (lVar5 != 0) {
          return 0;
        }
        uVar6 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c07af80(uVar6);
        return (uint)uVar6 ^ 1;
      }
      _objc_release(uVar1);
    }
    _objc_release(lVar2);
  }
  return 0;
}



/* Entry: 105d42640; end: 105d4278b; -[SCPreviewFeatureCTLensMagicEraserImpl toolbarItemConfiguration] */

void FUN_105d42640(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c112020();
  puVar5 = PTR_PTR_1126b0c40;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (lVar1 == 2) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0xe5;
  }
  else {
    if (lVar1 != 1) {
      if (lVar1 == 0) {
        puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                            &PTR____CFConstantStringClassReference_110e293b8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar5 = (undefined *)0x0;
      }
      goto LAB_105d42720;
    }
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0xe4;
  }
  func_0x00010bfe7aa0(0x4038000000000000,0x4038000000000000,puVar5,param_2,uVar4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
LAB_105d42720:
  puVar2 = PTR_PTR_1126c4010;
  _objc_alloc(PTR_PTR_1126c4010);
  puVar3 = puVar2;
  func_0x000108edf308();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020380(puVar2,param_2,0x15,puVar5,puVar5,
                      &PTR____CFConstantStringClassReference_110e29398,
                      &PTR____CFConstantStringClassReference_110e29398,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d4278c; end: 105d42833; -[SCPreviewFeatureCTLensMagicEraserImpl handleCTLensButtonTap] */

void FUN_105d4278c(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105d42834;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105d42834; end: 105d42897;  */

void FUN_105d42834(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x78) == '\x01') {
      func_0x00010be0c260(param_1);
    }
    else {
      func_0x00010c293a40(*(undefined8 *)(param_1 + 0xb8),param_2,0xc,
                          &PTR____CFConstantStringClassReference_110e2a958);
      func_0x00010be0a820(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d42898; end: 105d4289f; -[SCPreviewFeatureCTLensMagicEraserImpl state] */

undefined8 FUN_105d42898(void)

{
  return 0;
}



/* Entry: 105d428a0; end: 105d428a7; -[SCPreviewFeatureCTLensMagicEraserImpl isMagicLensEditing] */

undefined1 FUN_105d428a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x78);
}



/* Entry: 105d428a8; end: 105d42907; -[SCPreviewFeatureCTLensMagicEraserImpl ctLensBottomComponent:didTapButtonWithType:] */

void FUN_105d428a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  if (param_4 == 0) {
    func_0x00010bdf6400(param_1,param_2,param_3);
  }
  else if (param_4 == 1) {
    func_0x00010bdf63e0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d42908; end: 105d42913; -[SCPreviewFeatureCTLensMagicEraserImpl _ctLensBottomComponentDidTapCancel:] */

void FUN_105d42908(long param_1)

{
  *(undefined8 *)(param_1 + 0xc0) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdda670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelCurrentEditingSession_112554338);
  return;
}


