/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107cd3608; end: 107cd360f; -[SCOperaSnapPlaybackPerformanceData viewSource] */

undefined8 FUN_107cd3608(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 107cd3610; end: 107cd3617; -[SCOperaSnapPlaybackPerformanceData setViewSource:] */

void FUN_107cd3610(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  return;
}



/* Entry: 107cd3618; end: 107cd361f; -[SCOperaSnapPlaybackPerformanceData viewTimeMs] */

undefined8 FUN_107cd3618(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 107cd3620; end: 107cd3627; -[SCOperaSnapPlaybackPerformanceData setViewTimeMs:] */

void FUN_107cd3620(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 200) = param_3;
  return;
}



/* Entry: 107cd3628; end: 107cd362f; -[SCOperaSnapPlaybackPerformanceData operaStalls] */

undefined8 FUN_107cd3628(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 107cd3630; end: 107cd3637; -[SCOperaSnapPlaybackPerformanceData setOperaStalls:] */

void FUN_107cd3630(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107cd3638; end: 107cd363f; -[SCOperaSnapPlaybackPerformanceData networkSnapshots] */

undefined8 FUN_107cd3638(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 107cd3640; end: 107cd3647; -[SCOperaSnapPlaybackPerformanceData setNetworkSnapshots:] */

void FUN_107cd3640(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107cd3648; end: 107cd364f; -[SCOperaSnapPlaybackPerformanceData playbackEvents] */

undefined8 FUN_107cd3648(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 107cd3650; end: 107cd3657; -[SCOperaSnapPlaybackPerformanceData setPlaybackEvents:] */

void FUN_107cd3650(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107cd3658; end: 107cd365f; -[SCOperaSnapPlaybackPerformanceData loadingIndicatorHistory] */

undefined8 FUN_107cd3658(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 107cd3660; end: 107cd3667; -[SCOperaSnapPlaybackPerformanceData setLoadingIndicatorHistory:] */

void FUN_107cd3660(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107cd3668; end: 107cd366f; -[SCOperaSnapPlaybackPerformanceData loadingIndicatorCount] */

undefined4 FUN_107cd3668(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 107cd3670; end: 107cd3677; -[SCOperaSnapPlaybackPerformanceData setLoadingIndicatorCount:] */

void FUN_107cd3670(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 107cd3678; end: 107cd367f; -[SCOperaSnapPlaybackPerformanceData exitedOnSpinner] */

undefined1 FUN_107cd3678(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107cd3680; end: 107cd3687; -[SCOperaSnapPlaybackPerformanceData setExitedOnSpinner:] */

void FUN_107cd3680(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 107cd3688; end: 107cd368f; -[SCOperaSnapPlaybackPerformanceData loadingIndicatorDurationMs] */

undefined8 FUN_107cd3688(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 107cd3690; end: 107cd3697; -[SCOperaSnapPlaybackPerformanceData setLoadingIndicatorDurationMs:] */

void FUN_107cd3690(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xf0) = param_3;
  return;
}



/* Entry: 107cd3698; end: 107cd369f; -[SCOperaSnapPlaybackPerformanceData loadingIndicatorOverlappingDurationMs] */

undefined8 FUN_107cd3698(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



/* Entry: 107cd36a0; end: 107cd36a7; -[SCOperaSnapPlaybackPerformanceData setLoadingIndicatorOverlappingDurationMs:] */

void FUN_107cd36a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xf8) = param_3;
  return;
}



/* Entry: 107cd36a8; end: 107cd36af; -[SCOperaSnapPlaybackPerformanceData navigationType] */

undefined8 FUN_107cd36a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 107cd36b0; end: 107cd36b7; -[SCOperaSnapPlaybackPerformanceData setNavigationType:] */

void FUN_107cd36b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x100) = param_3;
  return;
}



/* Entry: 107cd36b8; end: 107cd36bf; -[SCOperaSnapPlaybackPerformanceData productContextPerformanceData] */

undefined8 FUN_107cd36b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 107cd36c0; end: 107cd36ef; -[SCOperaSnapPlaybackPerformanceData setProductContextPerformanceData:] */

void FUN_107cd36c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cd36f0; end: 107cd36f7; -[SCOperaSnapPlaybackPerformanceData viewportWidthPx] */

undefined8 FUN_107cd36f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 107cd36f8; end: 107cd36ff; -[SCOperaSnapPlaybackPerformanceData setViewportWidthPx:] */

void FUN_107cd36f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x110) = param_3;
  return;
}



/* Entry: 107cd3700; end: 107cd3707; -[SCOperaSnapPlaybackPerformanceData viewportHeightPx] */

undefined8 FUN_107cd3700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}



/* Entry: 107cd3708; end: 107cd370f; -[SCOperaSnapPlaybackPerformanceData setViewportHeightPx:] */

void FUN_107cd3708(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x118) = param_3;
  return;
}



/* Entry: 107cd3710; end: 107cd3717; -[SCOperaSnapPlaybackPerformanceData resolutionWidthPx] */

undefined8 FUN_107cd3710(long param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



/* Entry: 107cd3718; end: 107cd371f; -[SCOperaSnapPlaybackPerformanceData setResolutionWidthPx:] */

void FUN_107cd3718(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x120) = param_3;
  return;
}



/* Entry: 107cd3720; end: 107cd3727; -[SCOperaSnapPlaybackPerformanceData resolutionHeightPx] */

undefined8 FUN_107cd3720(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 107cd3728; end: 107cd372f; -[SCOperaSnapPlaybackPerformanceData setResolutionHeightPx:] */

void FUN_107cd3728(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x128) = param_3;
  return;
}



/* Entry: 107cd3730; end: 107cd3737; -[SCOperaSnapPlaybackPerformanceData itemId] */

undefined8 FUN_107cd3730(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 107cd3738; end: 107cd373f; -[SCOperaSnapPlaybackPerformanceData setItemId:] */

void FUN_107cd3738(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107cd3740; end: 107cd3747; -[SCOperaSnapPlaybackPerformanceData itemTypeFeature] */

undefined8 FUN_107cd3740(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



/* Entry: 107cd3748; end: 107cd374f; -[SCOperaSnapPlaybackPerformanceData setItemTypeFeature:] */

void FUN_107cd3748(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107cd3750; end: 107cd3757; -[SCOperaSnapPlaybackPerformanceData itemTypeFeatureSpecific] */

undefined8 FUN_107cd3750(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 107cd3758; end: 107cd375f; -[SCOperaSnapPlaybackPerformanceData setItemTypeFeatureSpecific:] */

void FUN_107cd3758(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107cd3760; end: 107cd3767; -[SCOperaSnapPlaybackPerformanceData initialLoadDurationMs] */

undefined8 FUN_107cd3760(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



/* Entry: 107cd3768; end: 107cd376f; -[SCOperaSnapPlaybackPerformanceData setInitialLoadDurationMs:] */

void FUN_107cd3768(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x148) = param_3;
  return;
}



/* Entry: 107cd3770; end: 107cd3777; -[SCOperaSnapPlaybackPerformanceData waitMs] */

undefined8 FUN_107cd3770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* Entry: 107cd3778; end: 107cd377f; -[SCOperaSnapPlaybackPerformanceData setWaitMs:] */

void FUN_107cd3778(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x150) = param_3;
  return;
}



/* Entry: 107cd3780; end: 107cd3787; -[SCOperaSnapPlaybackPerformanceData playbackStartDisplayTs] */

undefined8 FUN_107cd3780(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



/* Entry: 107cd3788; end: 107cd378f; -[SCOperaSnapPlaybackPerformanceData setPlaybackStartDisplayTs:] */

void FUN_107cd3788(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x158) = param_3;
  return;
}



/* Entry: 107cd3790; end: 107cd3797; -[SCOperaSnapPlaybackPerformanceData bandwidthConnectionClassOnStart] */

undefined8 FUN_107cd3790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



/* Entry: 107cd3798; end: 107cd379f; -[SCOperaSnapPlaybackPerformanceData setBandwidthConnectionClassOnStart:] */

void FUN_107cd3798(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107cd37a0; end: 107cd37ab; -[SCOperaSnapPlaybackPerformanceData mediaVariants] */

void FUN_107cd37a0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x168,1);
  return;
}



/* Entry: 107cd37ac; end: 107cd37b3; -[SCOperaSnapPlaybackPerformanceData setMediaVariants:] */

void FUN_107cd37ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 107cd37b4; end: 107cd37bb; -[SCOperaSnapPlaybackPerformanceData framesDropped] */

undefined8 FUN_107cd37b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x170);
}



/* Entry: 107cd37bc; end: 107cd37c3; -[SCOperaSnapPlaybackPerformanceData setFramesDropped:] */

void FUN_107cd37bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x170) = param_3;
  return;
}



/* Entry: 107cd37c4; end: 107cd37cb; -[SCOperaSnapPlaybackPerformanceData playerType] */

undefined8 FUN_107cd37c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x178);
}



/* Entry: 107cd37cc; end: 107cd37d3; -[SCOperaSnapPlaybackPerformanceData setPlayerType:] */

void FUN_107cd37cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x178) = param_3;
  return;
}



/* Entry: 107cd37d4; end: 107cd37db; -[SCOperaSnapPlaybackPerformanceData mediaPlaybackSupport] */

undefined8 FUN_107cd37d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 107cd37dc; end: 107cd37e3; -[SCOperaSnapPlaybackPerformanceData setMediaPlaybackSupport:] */

void FUN_107cd37dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x180) = param_3;
  return;
}



/* Entry: 107cd37e4; end: 107cd37eb; -[SCOperaSnapPlaybackPerformanceData vsrAnalyticsData] */

undefined8 FUN_107cd37e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x188);
}



/* Entry: 107cd37ec; end: 107cd381b; -[SCOperaSnapPlaybackPerformanceData setVsrAnalyticsData:] */

void FUN_107cd37ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cd381c; end: 107cd3823; -[SCOperaSnapPlaybackPerformanceData playbackSummaryFuture] */

undefined8 FUN_107cd381c(long param_1)

{
  return *(undefined8 *)(param_1 + 400);
}



/* Entry: 107cd3824; end: 107cd3853; -[SCOperaSnapPlaybackPerformanceData setPlaybackSummaryFuture:] */

void FUN_107cd3824(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cd3854; end: 107cd385b; -[SCOperaSnapPlaybackPerformanceData resolvedVQA] */

undefined4 FUN_107cd3854(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 107cd385c; end: 107cd3863; -[SCOperaSnapPlaybackPerformanceData setResolvedVQA:] */

void FUN_107cd385c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 107cd3864; end: 107cd386b; -[SCOperaSnapPlaybackPerformanceData resolvedWidth] */

undefined8 FUN_107cd3864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 107cd386c; end: 107cd3873; -[SCOperaSnapPlaybackPerformanceData setResolvedWidth:] */

void FUN_107cd386c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x198) = param_3;
  return;
}



/* Entry: 107cd3874; end: 107cd387b; -[SCOperaSnapPlaybackPerformanceData resolvedHeight] */

undefined8 FUN_107cd3874(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* Entry: 107cd387c; end: 107cd3883; -[SCOperaSnapPlaybackPerformanceData setResolvedHeight:] */

void FUN_107cd387c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1a0) = param_3;
  return;
}



/* Entry: 107cd3884; end: 107cd388b; -[SCOperaSnapPlaybackPerformanceData resolvedBitrate] */

undefined8 FUN_107cd3884(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a8);
}



/* Entry: 107cd388c; end: 107cd3893; -[SCOperaSnapPlaybackPerformanceData setResolvedBitrate:] */

void FUN_107cd388c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1a8) = param_3;
  return;
}



/* Entry: 107cd3894; end: 107cd389b; -[SCOperaSnapPlaybackPerformanceData resolvedVariant] */

undefined8 FUN_107cd3894(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b0);
}



/* Entry: 107cd389c; end: 107cd38a3; -[SCOperaSnapPlaybackPerformanceData setResolvedVariant:] */

void FUN_107cd389c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1b0) = param_3;
  return;
}



/* Entry: 107cd38a4; end: 107cd38ab; -[SCOperaSnapPlaybackPerformanceData resolvedVideoCodec] */

undefined8 FUN_107cd38a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b8);
}



/* Entry: 107cd38ac; end: 107cd38b3; -[SCOperaSnapPlaybackPerformanceData setResolvedVideoCodec:] */

void FUN_107cd38ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1b8) = param_3;
  return;
}



/* Entry: 107cd38b4; end: 107cd38bb; -[SCOperaSnapPlaybackPerformanceData variantsAnalytics] */

undefined8 FUN_107cd38b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c0);
}



/* Entry: 107cd38bc; end: 107cd38c3; -[SCOperaSnapPlaybackPerformanceData setVariantsAnalytics:] */

void FUN_107cd38bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107cd38c4; end: 107cd38cb; -[SCOperaSnapPlaybackPerformanceData operaFrameDrops] */

undefined8 FUN_107cd38c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1c8);
}



/* Entry: 107cd38cc; end: 107cd38d3; -[SCOperaSnapPlaybackPerformanceData setOperaFrameDrops:] */

void FUN_107cd38cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107cd38d4; end: 107cd39e7; -[SCOperaSnapPlaybackPerformanceData .cxx_destruct] */

void FUN_107cd38d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,0);
  return;
}



/* Entry: 107cd39e8; end: 107cd3a2b; -[SCOperaSnapPlaybackSessionPerformanceData init] */

void FUN_107cd39e8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126fa770;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x58) = 0xffffffffffffffff;
  }
  return;
}



/* Entry: 107cd3a2c; end: 107cd3a33; -[SCOperaSnapPlaybackSessionPerformanceData exitEvent] */

undefined8 FUN_107cd3a2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cd3a34; end: 107cd3a3b; -[SCOperaSnapPlaybackSessionPerformanceData setExitEvent:] */

void FUN_107cd3a34(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 107cd3a3c; end: 107cd3a43; -[SCOperaSnapPlaybackSessionPerformanceData operaSessionId] */

undefined8 FUN_107cd3a3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107cd3a44; end: 107cd3a4b; -[SCOperaSnapPlaybackSessionPerformanceData setOperaSessionId:] */

void FUN_107cd3a44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107cd3a4c; end: 107cd3a53; -[SCOperaSnapPlaybackSessionPerformanceData sessionDurationMs] */

undefined8 FUN_107cd3a4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107cd3a54; end: 107cd3a5b; -[SCOperaSnapPlaybackSessionPerformanceData setSessionDurationMs:] */

void FUN_107cd3a54(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 107cd3a5c; end: 107cd3a63; -[SCOperaSnapPlaybackSessionPerformanceData snapCount] */

undefined8 FUN_107cd3a5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107cd3a64; end: 107cd3a6b; -[SCOperaSnapPlaybackSessionPerformanceData setSnapCount:] */

void FUN_107cd3a64(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 107cd3a6c; end: 107cd3a73; -[SCOperaSnapPlaybackSessionPerformanceData stallCount] */

undefined8 FUN_107cd3a6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107cd3a74; end: 107cd3a7b; -[SCOperaSnapPlaybackSessionPerformanceData setStallCount:] */

void FUN_107cd3a74(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 107cd3a7c; end: 107cd3a83; -[SCOperaSnapPlaybackSessionPerformanceData stallDurationMs] */

undefined8 FUN_107cd3a7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107cd3a84; end: 107cd3a8b; -[SCOperaSnapPlaybackSessionPerformanceData setStallDurationMs:] */

void FUN_107cd3a84(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 107cd3a8c; end: 107cd3a93; -[SCOperaSnapPlaybackSessionPerformanceData stalledOnExit] */

undefined1 FUN_107cd3a8c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107cd3a94; end: 107cd3a9b; -[SCOperaSnapPlaybackSessionPerformanceData setStalledOnExit:] */

void FUN_107cd3a94(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107cd3a9c; end: 107cd3aa3; -[SCOperaSnapPlaybackSessionPerformanceData stalledOnStart] */

undefined1 FUN_107cd3a9c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107cd3aa4; end: 107cd3aab; -[SCOperaSnapPlaybackSessionPerformanceData setStalledOnStart:] */

void FUN_107cd3aa4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 107cd3aac; end: 107cd3ab3; -[SCOperaSnapPlaybackSessionPerformanceData stallFreeSnapCount] */

undefined8 FUN_107cd3aac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107cd3ab4; end: 107cd3abb; -[SCOperaSnapPlaybackSessionPerformanceData setStallFreeSnapCount:] */

void FUN_107cd3ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 107cd3abc; end: 107cd3ac3; -[SCOperaSnapPlaybackSessionPerformanceData storyCount] */

undefined8 FUN_107cd3abc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107cd3ac4; end: 107cd3acb; -[SCOperaSnapPlaybackSessionPerformanceData setStoryCount:] */

void FUN_107cd3ac4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 107cd3acc; end: 107cd3ad3; -[SCOperaSnapPlaybackSessionPerformanceData viewSource] */

undefined8 FUN_107cd3acc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107cd3ad4; end: 107cd3adb; -[SCOperaSnapPlaybackSessionPerformanceData setViewSource:] */

void FUN_107cd3ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 107cd3adc; end: 107cd3ae3; -[SCOperaSnapPlaybackSessionPerformanceData navigationType] */

undefined8 FUN_107cd3adc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107cd3ae4; end: 107cd3aeb; -[SCOperaSnapPlaybackSessionPerformanceData setNavigationType:] */

void FUN_107cd3ae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}


