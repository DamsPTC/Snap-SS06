/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108562fb0; end: 108562fb7; -[SnapVideoFilter setSavesToCameraRoll:] */

void FUN_108562fb0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x14b) = param_3;
  return;
}



/* Entry: 108562fb8; end: 108562fc3; -[SnapVideoFilter videoTargetSize] */

undefined1  [16] FUN_108562fb8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x358);
}



/* Entry: 108562fc4; end: 108562fcb; -[SnapVideoFilter outputVideoCodec] */

undefined8 FUN_108562fc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x298);
}



/* Entry: 108562fcc; end: 108562fd3; -[SnapVideoFilter videoTrackedImages] */

undefined8 FUN_108562fcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2a0);
}



/* Entry: 108562fd4; end: 108562fdb; -[SnapVideoFilter setVideoTrackedImages:] */

void FUN_108562fd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108562fdc; end: 108562fe3; -[SnapVideoFilter captureSessionID] */

undefined8 FUN_108562fdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2a8);
}



/* Entry: 108562fe4; end: 108562feb; -[SnapVideoFilter setCaptureSessionID:] */

void FUN_108562fe4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108562fec; end: 108562ff3; -[SnapVideoFilter snapSessionID] */

undefined8 FUN_108562fec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2b0);
}



/* Entry: 108562ff4; end: 108562ffb; -[SnapVideoFilter setSnapSessionID:] */

void FUN_108562ff4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108562ffc; end: 108563003; -[SnapVideoFilter segmentIndex] */

undefined8 FUN_108562ffc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2b8);
}



/* Entry: 108563004; end: 10856300b; -[SnapVideoFilter setSegmentIndex:] */

void FUN_108563004(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2b8) = param_3;
  return;
}



/* Entry: 10856300c; end: 108563013; -[SnapVideoFilter progressBlock] */

undefined8 FUN_10856300c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2c0);
}



/* Entry: 108563014; end: 10856301b; -[SnapVideoFilter setProgressBlock:] */

void FUN_108563014(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10856301c; end: 108563023; -[SnapVideoFilter statusBlock] */

undefined8 FUN_10856301c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2c8);
}



/* Entry: 108563024; end: 10856302b; -[SnapVideoFilter setStatusBlock:] */

void FUN_108563024(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10856302c; end: 108563033; -[SnapVideoFilter frameHealthChecker] */

undefined8 FUN_10856302c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2d0);
}



/* Entry: 108563034; end: 108563063; -[SnapVideoFilter setFrameHealthChecker:] */

void FUN_108563034(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2d0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108563064; end: 10856306b; -[SnapVideoFilter snapSource] */

undefined8 FUN_108563064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2d8);
}



/* Entry: 10856306c; end: 108563073; -[SnapVideoFilter setSnapSource:] */

void FUN_10856306c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2d8) = param_3;
  return;
}



/* Entry: 108563074; end: 10856307b; -[SnapVideoFilter shouldClearOverlayDataForMultisnap] */

undefined1 FUN_108563074(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14c);
}



/* Entry: 10856307c; end: 108563083; -[SnapVideoFilter setShouldClearOverlayDataForMultisnap:] */

void FUN_10856307c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x14c) = param_3;
  return;
}



/* Entry: 108563084; end: 10856308b; -[SnapVideoFilter spotlightModes] */

undefined8 FUN_108563084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2e0);
}



/* Entry: 10856308c; end: 108563093; -[SnapVideoFilter setSpotlightModes:] */

void FUN_10856308c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108563094; end: 10856309b; -[SnapVideoFilter mediaId] */

undefined8 FUN_108563094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2e8);
}



/* Entry: 10856309c; end: 1085630a3; -[SnapVideoFilter setMediaId:] */

void FUN_10856309c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1085630a4; end: 1085630ab; -[SnapVideoFilter mediaOrchestrationId] */

undefined8 FUN_1085630a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2f0);
}



/* Entry: 1085630ac; end: 1085630b3; -[SnapVideoFilter setMediaOrchestrationId:] */

void FUN_1085630ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1085630b4; end: 1085630bb; -[SnapVideoFilter overlayFormat] */

undefined8 FUN_1085630b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2f8);
}



/* Entry: 1085630bc; end: 1085630c3; -[SnapVideoFilter snapDocManager] */

undefined8 FUN_1085630bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x300);
}



/* Entry: 1085630c4; end: 1085630cb; -[SnapVideoFilter lensCrashLogger] */

undefined8 FUN_1085630c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x308);
}



/* Entry: 1085630cc; end: 1085630d3; -[SnapVideoFilter cameraConfiguration] */

undefined8 FUN_1085630cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x310);
}



/* Entry: 1085630d4; end: 1085630db; -[SnapVideoFilter watermarkProfile] */

undefined8 FUN_1085630d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 1085630dc; end: 10856310b; -[SnapVideoFilter setWatermarkProfile:] */

void FUN_1085630dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10856310c; end: 108563113; -[SnapVideoFilter fileEmbeddedMetadata] */

undefined8 FUN_10856310c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x318);
}



/* Entry: 108563114; end: 10856311b; -[SnapVideoFilter setFileEmbeddedMetadata:] */

void FUN_108563114(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10856311c; end: 108563123; -[SnapVideoFilter backgroundColors] */

undefined8 FUN_10856311c(long param_1)

{
  return *(undefined8 *)(param_1 + 800);
}



/* Entry: 108563124; end: 108563153; -[SnapVideoFilter setBackgroundColors:] */

void FUN_108563124(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 800);
  *(undefined8 *)(param_1 + 800) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108563154; end: 10856315b; -[SnapVideoFilter watermarkGenerator] */

undefined8 FUN_108563154(long param_1)

{
  return *(undefined8 *)(param_1 + 0x328);
}



/* Entry: 10856315c; end: 10856318b; -[SnapVideoFilter setWatermarkGenerator:] */

void FUN_10856315c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x328);
  *(undefined8 *)(param_1 + 0x328) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10856318c; end: 108563193; -[SnapVideoFilter GPUCommands] */

undefined8 FUN_10856318c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x330);
}



/* Entry: 108563194; end: 10856319b; -[SnapVideoFilter setGPUCommands:] */

void FUN_108563194(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10856319c; end: 1085631a3; -[SnapVideoFilter CPUCommands] */

undefined8 FUN_10856319c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x338);
}



/* Entry: 1085631a4; end: 1085631ab; -[SnapVideoFilter setCPUCommands:] */

void FUN_1085631a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1085631ac; end: 1085631b3; -[SnapVideoFilter backgroundCommand] */

undefined8 FUN_1085631ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x340);
}



/* Entry: 1085631b4; end: 1085631e3; -[SnapVideoFilter setBackgroundCommand:] */

void FUN_1085631b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x340);
  *(undefined8 *)(param_1 + 0x340) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085631e4; end: 1085635f3; -[SnapVideoFilter .cxx_destruct] */

void FUN_1085631e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x340,0);
  _objc_storeStrong(param_1 + 0x338,0);
  _objc_storeStrong(param_1 + 0x330,0);
  _objc_storeStrong(param_1 + 0x328,0);
  _objc_storeStrong(param_1 + 800,0);
  _objc_storeStrong(param_1 + 0x318,0);
  _objc_storeStrong(param_1 + 0x310,0);
  _objc_storeStrong(param_1 + 0x308,0);
  _objc_storeStrong(param_1 + 0x300,0);
  _objc_storeStrong(param_1 + 0x2f8,0);
  _objc_storeStrong(param_1 + 0x2f0,0);
  _objc_storeStrong(param_1 + 0x2e8,0);
  _objc_storeStrong(param_1 + 0x2e0,0);
  _objc_storeStrong(param_1 + 0x2d0,0);
  _objc_storeStrong(param_1 + 0x2c8,0);
  _objc_storeStrong(param_1 + 0x2c0,0);
  _objc_storeStrong(param_1 + 0x2b0,0);
  _objc_storeStrong(param_1 + 0x2a8,0);
  _objc_storeStrong(param_1 + 0x2a0,0);
  _objc_storeStrong(param_1 + 0x290,0);
  _objc_storeStrong(param_1 + 0x288,0);
  _objc_storeStrong(param_1 + 0x268,0);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x230,0);
  _objc_storeStrong(param_1 + 0x220,0);
  _objc_storeStrong(param_1 + 0x218,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
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
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_destroyWeak(param_1 + 0x150);
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



/* Entry: 1085635f4; end: 1085636b3; -[SCSnapVideoFilterCacheImpl initWithContentDelivery:circumstanceEngine:] */

undefined1 *
FUN_1085635f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fcca8;
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
    puVar3 = PTR_PTR_1126bc420;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085636b4; end: 10856387b; -[SCSnapVideoFilterCacheImpl persistState:forMediaId:completion:] */

void FUN_1085636b4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_3 == 0) || (lVar1 = param_4, func_0x00010c08fa60(), lVar1 == 0)) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,0);
    }
  }
  else {
    lVar1 = param_1;
    func_0x00010bdf7d00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))(param_5,0);
      }
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_4;
      FUN_10856387c(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf64e40(0x412a5e0000000000);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_retain(param_4);
      _objc_retain(param_5);
      func_0x00010c14a860(uVar3);
      _objc_release(puVar5);
      _objc_release(lVar2);
      _objc_release(uVar3);
      _objc_release(param_5);
      _objc_release(param_4);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10856387c; end: 1085638eb;  */

void FUN_10856387c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110ee29d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1085638ec; end: 1085638ff;  */

void FUN_1085638ec(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001085638f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108563900; end: 108563aaf; -[SCSnapVideoFilterCacheImpl retrieveState:completion:] */

void FUN_108563900(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if (param_4 != 0) {
      FUN_108590a80(*(undefined8 *)(param_1 + 0x10),&PTR____CFConstantStringClassReference_110ee2938
                    ,1);
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    FUN_10856387c(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1060;
    _objc_alloc(PTR_PTR_1126b1060);
    func_0x00010c032f60();
    _objc_retain(param_3);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    func_0x00010c13e480(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108563ab0; end: 108563b2f;  */

void FUN_108563ab0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be60f60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108563b30; end: 108563b47; -[SCSnapVideoFilterCacheImpl _shouldOnlyReleaseAuthoritativeClaim] */

void FUN_108563b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110ee29b8,0,0);
  return;
}



/* Entry: 108563b48; end: 108563c9f; -[SCSnapVideoFilterCacheImpl removeStateForMediaId:completion:] */

void FUN_108563b48(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  FUN_10856387c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1285c0();
  _objc_release(uVar1);
  uVar2 = param_1;
  func_0x00010beb4a20();
  if ((uVar2 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010c12b940(uVar1);
    _objc_release(puVar3);
    _objc_release(uVar1);
    _objc_release(param_4);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = *(long *)(param_4 + 0x20);
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108563cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x10))(lVar4,1);
    return;
  }
  return;
}



/* Entry: 108563ca0; end: 108563cb7;  */

void FUN_108563ca0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108563cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 108563cb8; end: 108563d3b; -[SCSnapVideoFilterCacheImpl _dataFromModel:] */

void FUN_108563cb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c08fa60();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar1);
      puVar2 = puVar1;
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108563d3c; end: 108563e93; -[SCSnapVideoFilterCacheImpl _modelFromData:] */

/* WARNING: Removing unreachable block (ram,0x000108563dfc) */

void FUN_108563d3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    FUN_108590a80(*(undefined8 *)(param_1 + 0x10),&PTR____CFConstantStringClassReference_110ee2998,1
                 );
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    _objc_retain(0);
    func_0x00010c1ec620(puVar2);
    puVar3 = puVar2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126da100;
    _objc_opt_class(PTR_PTR_1126da100);
    puVar4 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar5);
    puVar5 = puVar3;
    if (((ulong)puVar4 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar3);
    if (puVar5 == (undefined *)0x0) {
      FUN_108590a80(*(undefined8 *)(param_1 + 0x10),&PTR____CFConstantStringClassReference_110ee2978
                    ,1);
    }
    _objc_retain(puVar5);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(0);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108563e94; end: 108563ecf; -[SCSnapVideoFilterCacheImpl .cxx_destruct] */

void FUN_108563e94(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108563ed0; end: 108563f5f; -[SCSnapVideoFilterMultiSnapOverlayStateHandlerImpl multiSnapOverlayStatesFromVideoFilter:] */

void FUN_108563ed0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x00010bef6760();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b1350;
  _objc_opt_class(PTR_PTR_1126b1350);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar3 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010c0d2300(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010bf51e00(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108563f60; end: 108563fff; -[SCSnapVideoFilterMultiSnapOverlayStateHandlerImpl setMultiSnapOverlayStates:forVideoFilter:] */

bool FUN_108563f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  func_0x00010bef6760();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1350;
  _objc_opt_class(PTR_PTR_1126b1350);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  if (uVar1 != 0) {
    func_0x00010c1c98e0(param_4);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar1 != 0;
}



/* Entry: 108564000; end: 1085640cb; -[SCSnapVideoFilterPersistenceConverterImpl initWithVideoFilterFactory:multiSnapOverlayHandler:validator:] */

undefined1 *
FUN_108564000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126fccb0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085640cc; end: 1085641fb; -[SCSnapVideoFilterPersistenceConverterImpl persistModelFromVideoFilter:retryCount:crossPostToStoryInfoData:] */

void FUN_1085640cc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c243ba0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d2320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126da100;
    _objc_alloc(PTR_PTR_1126da100);
    func_0x00010c013240();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c071580();
    _objc_release(uVar5);
    if ((int)uVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar4);
      puVar6 = puVar4;
    }
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1085641fc; end: 108564323; -[SCSnapVideoFilterPersistenceConverterImpl videoFilterFromPersistModel:] */

void FUN_1085641fc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfae4c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf59000(uVar1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010c0d2300();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0d2300(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar5;
    func_0x00010c1c9900(uVar5,param_2,lVar2,uVar3);
    _objc_release(lVar2);
    _objc_release(uVar5);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      goto LAB_1085642fc;
    }
  }
  _objc_retain(uVar3);
  uVar1 = uVar3;
LAB_1085642fc:
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108564324; end: 10856435f; -[SCSnapVideoFilterPersistenceConverterImpl .cxx_destruct] */

void FUN_108564324(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108564360; end: 1085643b7; -[SCSnapVideoFilterStateValidatorImpl initWithContentDelivery:] */

long FUN_108564360(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1085643b8; end: 108564573; -[SCSnapVideoFilterStateValidatorImpl isEligibleForPersistence:] */

uint FUN_1085643b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  func_0x00010c0d2300();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = &uStack_1b0;
  lVar5 = param_3;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar6 = *plStack_1a0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1a0 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        lVar1 = *(long *)(lStack_1a8 + lVar8 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        func_0x00010c2553e0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar1;
        puVar3 = &uStack_1f0;
        func_0x00010bf52a60();
        if (lVar7 != 0) {
          lVar9 = *plStack_1e0;
          do {
            lVar10 = 0;
            do {
              if (*plStack_1e0 != lVar9) {
                _objc_enumerationMutation(lVar1);
              }
              lVar2 = *(long *)(lStack_1e8 + lVar10 * 8);
              func_0x00010c27dde0();
              if (lVar2 == 0x3cedc99) {
                _objc_release(lVar1);
                uVar4 = 0;
                goto LAB_10856452c;
              }
              lVar10 = lVar10 + 1;
            } while (lVar7 != lVar10);
            lVar7 = lVar1;
            puVar3 = &uStack_1f0;
            func_0x00010bf52a60();
          } while (lVar7 != 0);
        }
        _objc_release(lVar1);
        lVar8 = lVar8 + 1;
      } while (lVar8 != lVar5);
      puVar3 = &uStack_1b0;
      lVar5 = param_3;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  uVar4 = 1;
LAB_10856452c:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar4;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  if (puVar3 == (undefined8 *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = puVar3[7];
  }
  _objc_retain(lVar5);
  _objc_release(lVar5);
  if (lVar5 == 0) {
    if (puVar3 == (undefined8 *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = puVar3[6];
    }
    lVar6 = lVar5;
    _objc_retain(lVar5);
    func_0x000107c31298();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar5;
    func_0x000108552df0(lVar5,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
  }
  else {
    if (puVar3 == (undefined8 *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = puVar3[7];
    }
    _objc_retain(lVar5);
    lVar8 = param_3;
    func_0x00010bee62e0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
  if (puVar3 == (undefined8 *)0x0) {
    _objc_retain(0);
    lVar5 = 0;
LAB_108564744:
    lVar6 = 0;
  }
  else {
    lVar5 = puVar3[0x1a];
    _objc_retain(lVar5);
    if (lVar5 == 0) goto LAB_108564744;
    lVar6 = *(long *)(lVar5 + 0x10);
  }
  _objc_retain(lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  if (puVar3 == (undefined8 *)0x0) {
    _objc_retain(0);
    lVar5 = 0;
    lVar7 = 0;
    if (lVar6 == 0) goto LAB_1085646a0;
  }
  else {
    lVar5 = puVar3[0x1a];
    _objc_retain(lVar5);
    if (lVar6 == 0) {
      if (lVar5 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(lVar5 + 8);
      }
LAB_1085646a0:
      lVar6 = lVar7;
      _objc_retain(lVar7);
      func_0x000107c31298();
      _objc_retainAutoreleasedReturnValue();
      param_3 = lVar7;
      func_0x000108552df0(lVar7,lVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      goto LAB_1085646d8;
    }
    if (lVar5 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(lVar5 + 0x10);
    }
  }
  _objc_retain(lVar7);
  func_0x00010bee62e0(param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_1085646d8:
  _objc_release(lVar7);
  _objc_release(lVar5);
  lVar5 = lVar8;
  FUN_108552f08(lVar8);
  lVar6 = param_3;
  FUN_108552f08(param_3);
  _objc_release(param_3);
  _objc_release(lVar8);
  _objc_release(puVar3);
  return ((uint)lVar5 | (uint)lVar6) & 1;
}



/* Entry: 108564574; end: 108564787; -[SCSnapVideoFilterStateValidatorImpl inputVideoExistsOnRetrieval:] */

uint FUN_108564574(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_3 + 0x38);
  }
  _objc_retain(lVar3);
  _objc_release(lVar3);
  if (lVar3 == 0) {
    if (param_3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_3 + 0x30);
    }
    uVar1 = uVar4;
    _objc_retain(uVar4);
    func_0x000107c31298();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x000108552df0(uVar4,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    if (param_3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_3 + 0x38);
    }
    _objc_retain(uVar4);
    uVar2 = param_1;
    func_0x00010bee62e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar4);
  if (param_3 == 0) {
    _objc_retain(0);
    lVar3 = 0;
LAB_108564744:
    lVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_3 + 0xd0);
    _objc_retain(lVar3);
    if (lVar3 == 0) goto LAB_108564744;
    lVar5 = *(long *)(lVar3 + 0x10);
  }
  _objc_retain(lVar5);
  _objc_release(lVar5);
  _objc_release(lVar3);
  if (param_3 == 0) {
    _objc_retain(0);
    lVar3 = 0;
    uVar4 = 0;
    if (lVar5 == 0) goto LAB_1085646a0;
  }
  else {
    lVar3 = *(long *)(param_3 + 0xd0);
    _objc_retain(lVar3);
    if (lVar5 == 0) {
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(lVar3 + 8);
      }
LAB_1085646a0:
      uVar1 = uVar4;
      _objc_retain(uVar4);
      func_0x000107c31298();
      _objc_retainAutoreleasedReturnValue();
      param_1 = uVar4;
      func_0x000108552df0(uVar4,uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      goto LAB_1085646d8;
    }
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar3 + 0x10);
    }
  }
  _objc_retain(uVar4);
  func_0x00010bee62e0(param_1);
  _objc_retainAutoreleasedReturnValue();
LAB_1085646d8:
  _objc_release(uVar4);
  _objc_release(lVar3);
  uVar4 = uVar2;
  FUN_108552f08(uVar2);
  uVar1 = param_1;
  FUN_108552f08(param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(param_3);
  return ((uint)uVar4 | (uint)uVar1) & 1;
}



/* Entry: 108564788; end: 108564887; -[SCSnapVideoFilterStateValidatorImpl _urlForContentKeyId:] */

void FUN_108564788(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  FUN_108553fc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  lVar3 = lVar1;
  func_0x00010c13e300(lVar1,param_2,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bfc5880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar4 = (undefined *)0x0;
  if (lVar1 != 0) {
    lVar1 = lVar3;
    func_0x00010bfc5880(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad300(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar4 = puVar2;
  }
  _objc_release(lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108564888; end: 108564893; -[SCSnapVideoFilterStateValidatorImpl .cxx_destruct] */

void FUN_108564888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108564894; end: 10856498f; -[SCUploadMediaQualityControllerImpl enableReUploadWithDestination:preUploadVideoTargetSize:featureProvidedSignals:] */

undefined *
FUN_108564894(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_5;
  func_0x00010c073440();
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)PTR__CGSizeZero_110347620;
    uVar4 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    uVar1 = *(undefined8 *)(param_3 + 8);
    func_0x00010c067f00(uVar1,param_4,&PTR____CFConstantStringClassReference_110ee3eb8,0,param_6);
    if (0 < (int)uVar1) {
      func_0x00010c29b660(uVar3,uVar4,PTR_PTR_1126da108,param_4,param_5,*(undefined8 *)(param_3 + 8)
                          ,param_6);
    }
    puVar2 = PTR_PTR_1126da108;
    func_0x00010bf914c0(param_1,param_2,uVar3,uVar4,PTR_PTR_1126da108,param_4,param_5,
                        *(undefined8 *)(param_3 + 8),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar2;
}



/* Entry: 108564990; end: 1085649a3; -[SCUploadMediaQualityControllerImpl enableSkipTranscodeWithDestination:mediaSource:isMultiSnap:] */

void FUN_108564990(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf91b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126da108,PTR_s_enableSkipTranscodeWithDestinati_1125c2070);
  return;
}



/* Entry: 1085649a4; end: 1085649af; -[SCUploadMediaQualityControllerImpl .cxx_destruct] */

void FUN_1085649a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085649b0; end: 1085649cb; -[SCUploadMediaQualitySelectorImpl qualityLevelForDestination:featureSignals:callbackPerformer:completion:] */

void FUN_1085649b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11cf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d34c8,PTR_s_qualityLevelForDestination_featu_112624de8,param_3,param_4,
             *(undefined8 *)(param_1 + 8),param_5,param_6);
  return;
}



/* Entry: 1085649cc; end: 1085649d7; -[SCUploadMediaQualitySelectorImpl .cxx_destruct] */

void FUN_1085649cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085649d8; end: 108564a03; +[SCGrapheneSnapvideofilterMetric videoThumbnailGeneration] */

void FUN_1085649d8(void)

{
  _objc_alloc(PTR_PTR_1126da0f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108564a04; end: 108564a2f; +[SCGrapheneSnapvideofilterMetric retainInputFileError] */

void FUN_108564a04(void)

{
  _objc_alloc(PTR_PTR_1126da0f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108564a30; end: 108564acf; -[SCGrapheneSnapvideofilterMetric description] */

void FUN_108564a30(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ee29f8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ee29f8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fccc8;
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



/* Entry: 108564ad0; end: 108564c1b; -[SCGrapheneRegistry snapvideofilterGraphene] */

void FUN_108564ad0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108564b58;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372c3d0 != -1) {
    func_0x000107c27d9c(0x11372c3d0,&puStack_48);
  }
  uVar1 = uRam000000011372c3c8;
  _objc_retain(uRam000000011372c3c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108564c1c; end: 108564c47; +[SCGrapheneSnapvideofilterCoordinatorMetric transcodingStart] */

void FUN_108564c1c(void)

{
  _objc_alloc(PTR_PTR_1126da008);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108564c48; end: 108564c73; +[SCGrapheneSnapvideofilterCoordinatorMetric transcodingEnd] */

void FUN_108564c48(void)

{
  _objc_alloc(PTR_PTR_1126da008);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108564c74; end: 108564c9f; +[SCGrapheneSnapvideofilterCoordinatorMetric serialize] */

void FUN_108564c74(void)

{
  _objc_alloc(PTR_PTR_1126da008);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108564ca0; end: 108564ccb; +[SCGrapheneSnapvideofilterCoordinatorMetric persist] */

void FUN_108564ca0(void)

{
  _objc_alloc(PTR_PTR_1126da008);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108564ccc; end: 108564cf7; +[SCGrapheneSnapvideofilterCoordinatorMetric persistInAdvance] */

void FUN_108564ccc(void)

{
  _objc_alloc(PTR_PTR_1126da008);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108564cf8; end: 108564d23; +[SCGrapheneSnapvideofilterCoordinatorMetric retrieve] */

void FUN_108564cf8(void)

{
  _objc_alloc(PTR_PTR_1126da008);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108564d24; end: 108564d4f; +[SCGrapheneSnapvideofilterCoordinatorMetric delete] */

void FUN_108564d24(void)

{
  _objc_alloc(PTR_PTR_1126da008);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108564d50; end: 108564d7b; +[SCGrapheneSnapvideofilterCoordinatorMetric retryDataSource] */

void FUN_108564d50(void)

{
  _objc_alloc(PTR_PTR_1126da008);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108564d7c; end: 108564da7; +[SCGrapheneSnapvideofilterCoordinatorMetric diskRetrieveErrorReason] */

void FUN_108564d7c(void)

{
  _objc_alloc(PTR_PTR_1126da008);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108564da8; end: 108564dd3; +[SCGrapheneSnapvideofilterCoordinatorMetric chainedFireBlockMissing] */

void FUN_108564da8(void)

{
  _objc_alloc(PTR_PTR_1126da008);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108564dd4; end: 108564dff; +[SCGrapheneSnapvideofilterCoordinatorMetric chainedFireInvoked] */

void FUN_108564dd4(void)

{
  _objc_alloc(PTR_PTR_1126da008);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108564e00; end: 108564e9f; -[SCGrapheneSnapvideofilterCoordinatorMetric description] */

void FUN_108564e00(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ee2a58;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ee2a58,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fccd0;
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



/* Entry: 108564ea0; end: 108565047; -[SCGrapheneRegistry snapvideofilterCoordinatorGraphene] */

void FUN_108564ea0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108564f28;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372c3e0 != -1) {
    func_0x000107c27d9c(0x11372c3e0,&puStack_48);
  }
  uVar1 = uRam000000011372c3d8;
  _objc_retain(uRam000000011372c3d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108565048; end: 108565073; +[SCGrapheneLegacySnapMetric snapState] */

void FUN_108565048(void)

{
  _objc_alloc(PTR_PTR_1126da110);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108565074; end: 10856509f; +[SCGrapheneLegacySnapMetric snapDelegates] */

void FUN_108565074(void)

{
  _objc_alloc(PTR_PTR_1126da110);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085650a0; end: 1085650cb; +[SCGrapheneLegacySnapMetric replyMedia] */

void FUN_1085650a0(void)

{
  _objc_alloc(PTR_PTR_1126da110);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085650cc; end: 1085650f7; +[SCGrapheneLegacySnapMetric ephemeralState] */

void FUN_1085650cc(void)

{
  _objc_alloc(PTR_PTR_1126da110);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1085650f8; end: 108565123; +[SCGrapheneLegacySnapMetric videoFilterResult] */

void FUN_1085650f8(void)

{
  _objc_alloc(PTR_PTR_1126da110);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108565124; end: 10856514f; +[SCGrapheneLegacySnapMetric videoFilterFailure] */

void FUN_108565124(void)

{
  _objc_alloc(PTR_PTR_1126da110);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108565150; end: 1085651ef; -[SCGrapheneLegacySnapMetric description] */

void FUN_108565150(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ee2bb8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ee2bb8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fccd8;
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



/* Entry: 1085651f0; end: 108565363; -[SCGrapheneRegistry legacySnapGraphene] */

void FUN_1085651f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108565278;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372c3f0 != -1) {
    func_0x000107c27d9c(0x11372c3f0,&puStack_48);
  }
  uVar1 = uRam000000011372c3e8;
  _objc_retain(uRam000000011372c3e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108565364; end: 10856538f; +[SCGrapheneSkipTranscodeMetric skipRate] */

void FUN_108565364(void)

{
  _objc_alloc(PTR_PTR_1126da078);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


