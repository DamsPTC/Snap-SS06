/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061fe894; end: 1061fe89b; -[SCLensLogger setCurrentLensOptionSourceType:] */

void FUN_1061fe894(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1f8) = param_3;
  return;
}



/* Entry: 1061fe89c; end: 1061fe8a3; -[SCLensLogger contextSessionId] */

undefined8 FUN_1061fe89c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x200);
}



/* Entry: 1061fe8a4; end: 1061fe8d3; -[SCLensLogger setContextSessionId:] */

void FUN_1061fe8a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061fe8d4; end: 1061fe8db; -[SCLensLogger setLensSessionId:] */

void FUN_1061fe8d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1061fe8dc; end: 1061fe8e3; -[SCLensLogger startViewingTime] */

undefined8 FUN_1061fe8dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x210);
}



/* Entry: 1061fe8e4; end: 1061fe913; -[SCLensLogger setStartViewingTime:] */

void FUN_1061fe8e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x210) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061fe914; end: 1061fe91b; -[SCLensLogger startViewingCpuTime] */

undefined8 FUN_1061fe914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x218);
}



/* Entry: 1061fe91c; end: 1061fe923; -[SCLensLogger setStartViewingCpuTime:] */

void FUN_1061fe91c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x218) = param_1;
  return;
}



/* Entry: 1061fe924; end: 1061fe92b; -[SCLensLogger currentInactiveTime] */

undefined8 FUN_1061fe924(long param_1)

{
  return *(undefined8 *)(param_1 + 0x220);
}



/* Entry: 1061fe92c; end: 1061fe933; -[SCLensLogger setCurrentInactiveTime:] */

void FUN_1061fe92c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x220) = param_1;
  return;
}



/* Entry: 1061fe934; end: 1061fe93b; -[SCLensLogger totalInactiveTime] */

undefined8 FUN_1061fe934(long param_1)

{
  return *(undefined8 *)(param_1 + 0x228);
}



/* Entry: 1061fe93c; end: 1061fe943; -[SCLensLogger setTotalInactiveTime:] */

void FUN_1061fe93c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x228) = param_1;
  return;
}



/* Entry: 1061fe944; end: 1061fe94b; -[SCLensLogger cameraStartViewingTime] */

undefined8 FUN_1061fe944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x230);
}



/* Entry: 1061fe94c; end: 1061fe953; -[SCLensLogger setCameraStartViewingTime:] */

void FUN_1061fe94c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x230) = param_1;
  return;
}



/* Entry: 1061fe954; end: 1061fe95b; -[SCLensLogger startRecordingTime] */

undefined8 FUN_1061fe954(long param_1)

{
  return *(undefined8 *)(param_1 + 0x238);
}



/* Entry: 1061fe95c; end: 1061fe98b; -[SCLensLogger setStartRecordingTime:] */

void FUN_1061fe95c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x238) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061fe98c; end: 1061fe993; -[SCLensLogger endRecordingTime] */

undefined8 FUN_1061fe98c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x240);
}



/* Entry: 1061fe994; end: 1061fe9c3; -[SCLensLogger setEndRecordingTime:] */

void FUN_1061fe994(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x240);
  *(undefined8 *)(param_1 + 0x240) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061fe9c4; end: 1061fe9cb; -[SCLensLogger spinStartTime] */

undefined8 FUN_1061fe9c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x248);
}



/* Entry: 1061fe9cc; end: 1061fe9d3; -[SCLensLogger setSpinStartTime:] */

void FUN_1061fe9cc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x248) = param_1;
  return;
}



/* Entry: 1061fe9d4; end: 1061fe9df; -[SCLensLogger currentViewingLens] */

void FUN_1061fe9d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x250,1);
  return;
}



/* Entry: 1061fe9e0; end: 1061fe9e7; -[SCLensLogger setCurrentViewingLens:] */

void FUN_1061fe9e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1061fe9e8; end: 1061fe9f3; -[SCLensLogger currentApplyContext] */

void FUN_1061fe9e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,600,1);
  return;
}



/* Entry: 1061fe9f4; end: 1061fe9fb; -[SCLensLogger setCurrentApplyContext:] */

void FUN_1061fe9f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1061fe9fc; end: 1061fea03; -[SCLensLogger prevViewingLens] */

undefined8 FUN_1061fe9fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x260);
}



/* Entry: 1061fea04; end: 1061fea33; -[SCLensLogger setPrevViewingLens:] */

void FUN_1061fea04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x260);
  *(undefined8 *)(param_1 + 0x260) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061fea34; end: 1061fea3f; -[SCLensLogger currentSpinningLens] */

void FUN_1061fea34(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x268,1);
  return;
}



/* Entry: 1061fea40; end: 1061fea47; -[SCLensLogger setCurrentSpinningLens:] */

void FUN_1061fea40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1061fea48; end: 1061fea4f; -[SCLensLogger withAttachmentOpen] */

undefined1 FUN_1061fea48(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1a4);
}



/* Entry: 1061fea50; end: 1061fea57; -[SCLensLogger setWithAttachmentOpen:] */

void FUN_1061fea50(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x1a4) = param_3;
  return;
}



/* Entry: 1061fea58; end: 1061fea5f; -[SCLensLogger lensCount] */

undefined8 FUN_1061fea58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x270);
}



/* Entry: 1061fea60; end: 1061fea67; -[SCLensLogger setLensCount:] */

void FUN_1061fea60(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x270) = param_3;
  return;
}



/* Entry: 1061fea68; end: 1061fea6f; -[SCLensLogger currentLensIndex] */

undefined8 FUN_1061fea68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x278);
}



/* Entry: 1061fea70; end: 1061fea77; -[SCLensLogger setCurrentLensIndex:] */

void FUN_1061fea70(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x278) = param_3;
  return;
}



/* Entry: 1061fea78; end: 1061fea7f; -[SCLensLogger startViewingTimeLensOption] */

undefined8 FUN_1061fea78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x280);
}



/* Entry: 1061fea80; end: 1061fea87; -[SCLensLogger setStartViewingTimeLensOption:] */

void FUN_1061fea80(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x280) = param_1;
  return;
}



/* Entry: 1061fea88; end: 1061fea8f; -[SCLensLogger lensOptionCount] */

undefined8 FUN_1061fea88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x288);
}



/* Entry: 1061fea90; end: 1061fea97; -[SCLensLogger setLensOptionCount:] */

void FUN_1061fea90(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x288) = param_3;
  return;
}



/* Entry: 1061fea98; end: 1061fea9f; -[SCLensLogger currentLensOptionIndex] */

undefined8 FUN_1061fea98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x290);
}



/* Entry: 1061feaa0; end: 1061feaa7; -[SCLensLogger lensOptionSwipeCount] */

undefined8 FUN_1061feaa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x298);
}



/* Entry: 1061feaa8; end: 1061feaaf; -[SCLensLogger setLensOptionSwipeCount:] */

void FUN_1061feaa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x298) = param_3;
  return;
}



/* Entry: 1061feab0; end: 1061feab7; -[SCLensLogger triggerFiredForCurrentLens] */

undefined8 FUN_1061feab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2a0);
}



/* Entry: 1061feab8; end: 1061feabf; -[SCLensLogger frontCameraMaxFacesCount] */

undefined8 FUN_1061feab8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2a8);
}



/* Entry: 1061feac0; end: 1061feac7; -[SCLensLogger setFrontCameraMaxFacesCount:] */

void FUN_1061feac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2a8) = param_3;
  return;
}



/* Entry: 1061feac8; end: 1061feacf; -[SCLensLogger backCameraMaxFacesCount] */

undefined8 FUN_1061feac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2b0);
}



/* Entry: 1061fead0; end: 1061fead7; -[SCLensLogger setBackCameraMaxFacesCount:] */

void FUN_1061fead0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2b0) = param_3;
  return;
}



/* Entry: 1061fead8; end: 1061feadf; -[SCLensLogger frontCameraSnapFacesCount] */

undefined8 FUN_1061fead8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2b8);
}



/* Entry: 1061feae0; end: 1061feae7; -[SCLensLogger setFrontCameraSnapFacesCount:] */

void FUN_1061feae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2b8) = param_3;
  return;
}



/* Entry: 1061feae8; end: 1061feaef; -[SCLensLogger backCameraSnapFacesCount] */

undefined8 FUN_1061feae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2c0);
}



/* Entry: 1061feaf0; end: 1061feaf7; -[SCLensLogger setBackCameraSnapFacesCount:] */

void FUN_1061feaf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x2c0) = param_3;
  return;
}



/* Entry: 1061feaf8; end: 1061feaff; -[SCLensLogger firstFaceRenderTimestampSec] */

undefined8 FUN_1061feaf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2c8);
}



/* Entry: 1061feb00; end: 1061feb07; -[SCLensLogger setFirstFaceRenderTimestampSec:] */

void FUN_1061feb00(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x2c8) = param_1;
  return;
}



/* Entry: 1061feb08; end: 1061feb0f; -[SCLensLogger firstTriggerTimestampSec] */

undefined8 FUN_1061feb08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x2d0);
}



/* Entry: 1061feb10; end: 1061feb17; -[SCLensLogger setFirstTriggerTimestampSec:] */

void FUN_1061feb10(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x2d0) = param_1;
  return;
}



/* Entry: 1061feb18; end: 1061feb23; -[SCLensLogger swipeFunnel] */

void FUN_1061feb18(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x2d8,1);
  return;
}



/* Entry: 1061feb24; end: 1061feb2b; -[SCLensLogger setSwipeFunnel:] */

void FUN_1061feb24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1061feb2c; end: 1061feb37; -[SCLensLogger swipeFunnelId] */

void FUN_1061feb2c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x2e0,1);
  return;
}



/* Entry: 1061feb38; end: 1061feb3f; -[SCLensLogger setSwipeFunnelId:] */

void FUN_1061feb38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1061feb40; end: 1061fee2f; -[SCLensLogger .cxx_destruct] */

void FUN_1061feb40(long param_1)

{
  _objc_storeStrong(param_1 + 0x2e0,0);
  _objc_storeStrong(param_1 + 0x2d8,0);
  _objc_storeStrong(param_1 + 0x2a0,0);
  _objc_storeStrong(param_1 + 0x268,0);
  _objc_storeStrong(param_1 + 0x260,0);
  _objc_storeStrong(param_1 + 600,0);
  _objc_storeStrong(param_1 + 0x250,0);
  _objc_storeStrong(param_1 + 0x240,0);
  _objc_storeStrong(param_1 + 0x238,0);
  _objc_storeStrong(param_1 + 0x210,0);
  _objc_storeStrong(param_1 + 0x208,0);
  _objc_storeStrong(param_1 + 0x200,0);
  _objc_storeStrong(param_1 + 0x1f0,0);
  _objc_storeStrong(param_1 + 0x1e8,0);
  _objc_destroyWeak(param_1 + 0x1e0);
  _objc_storeStrong(param_1 + 0x1d8,0);
  _objc_storeStrong(param_1 + 0x1d0,0);
  _objc_storeStrong(param_1 + 0x1c8,0);
  _objc_storeStrong(param_1 + 0x1c0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_destroyWeak(param_1 + 0xf8);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_destroyWeak(param_1 + 0xb8);
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
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061fee30; end: 1061feeb3; -[SCLensSideButtonLogger initWithCameraType:cameraUserLoggingServices:] */

undefined1 *
FUN_1061fee30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f05b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1061feeb4; end: 1061fef6b; -[SCLensSideButtonLogger logLensSideButtonShownWithButtonType:lensId:] */

void FUN_1061feeb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c8c90;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c19c240();
  _objc_release(param_4);
  func_0x00010c174ae0(puVar1,param_2,param_3);
  lVar2 = param_1;
  func_0x00010bdd9160(param_1);
  func_0x00010c177420(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf1cf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061fef6c; end: 1061ff023; -[SCLensSideButtonLogger logLensSideButtonTappedWithButtonType:lensId:] */

void FUN_1061fef6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c8c98;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c19c240();
  _objc_release(param_4);
  func_0x00010c174ae0(puVar1,param_2,param_3);
  lVar2 = param_1;
  func_0x00010bdd9160(param_1);
  func_0x00010c177420(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf1cf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061ff024; end: 1061ff04b; -[SCLensSideButtonLogger _cameraButtonType] */

undefined8 FUN_1061ff024(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 8) - 1;
  if (uVar1 < 3) {
    return *(undefined8 *)(&UNK_10ddda230 + uVar1 * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 1061ff04c; end: 1061ff057; -[SCLensSideButtonLogger .cxx_destruct] */

void FUN_1061ff04c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1061ff058; end: 1061ff087; -[SCLensSaveTextureLoggerImpl setActiveLensId:] */

void FUN_1061ff058(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1061ff088; end: 1061ff0b7; -[SCLensSaveTextureLoggerImpl setCurrentSwipeId:] */

void FUN_1061ff088(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1061ff0b8; end: 1061ff0bf; -[SCLensSaveTextureLoggerImpl setSnapSource:] */

void FUN_1061ff0b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1061ff0c0; end: 1061ff137; -[SCLensSaveTextureLoggerImpl logTextureSavedEvent] */

void FUN_1061ff0c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    puVar1 = PTR_PTR_1126bc038;
    _objc_opt_new(PTR_PTR_1126bc038);
    func_0x00010c19c240();
    func_0x00010c1ae1e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e455b8);
    func_0x00010c206c40(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
    func_0x00010c210680(puVar1,param_2,*(undefined8 *)(param_1 + 0x10));
    func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1061ff138; end: 1061ff173; -[SCLensSaveTextureLoggerImpl .cxx_destruct] */

void FUN_1061ff138(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061ff174; end: 1061ff187; -[SCLensScheduleDataLogger logLensScheduleDataUpdateDurationMs:] */

/* WARNING: Possible PIC construction at 0x00010b721e80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b721acc) */

void FUN_1061ff174(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined **param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **unaff_x22;
  undefined8 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puVar10;
  undefined *puVar11;
  double dVar12;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppuVar7 = (undefined **)(long)param_1;
  lVar1 = *(long *)(param_2 + 0x10);
  ppuVar6 = &PTR____CFConstantStringClassReference_110e455d8;
  ppuVar3 = &puStack_80;
  puVar10 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar6;
  ppuVar8 = ppuVar7;
  _objc_retain(&PTR____CFConstantStringClassReference_110e455d8);
  ppuVar9 = (undefined **)0x0;
  if (lVar1 != 0) {
    ppuVar9 = *(undefined ***)(lVar1 + 8);
    _objc_retain(&PTR____CFConstantStringClassReference_110e455d8);
    ppuVar2 = ppuVar6;
    _objc_retainAutorelease(&PTR____CFConstantStringClassReference_110e455d8);
    func_0x00010bdc3520();
    _objc_release(&PTR____CFConstantStringClassReference_110e455d8);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,ppuVar2);
    puStack_80 = (undefined *)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&puStack_80,auStack_60,&lStack_48,1);
    ppuVar2 = (undefined **)&UNK_110d5a288;
    (**(code **)(*ppuVar9 + 0x18))(ppuVar9,&UNK_110d5a288,&puStack_80,ppuVar7);
    puStack_68 = (undefined1 *)&puStack_80;
    func_0x000107c278ac(&puStack_68);
    ppuVar8 = ppuVar3;
    param_5 = ppuVar7;
    unaff_x22 = &puStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      ppuVar8 = ppuVar3;
      param_5 = ppuVar7;
      unaff_x22 = &puStack_80;
    }
  }
  ppuVar3 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(&PTR____CFConstantStringClassReference_110e455d8);
  _objc_release(&PTR____CFConstantStringClassReference_110e455d8);
  puVar11 = &UNK_10b721bdc;
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  ppuVar7 = &puStack_80;
  while( true ) {
    *(undefined1 **)((long)ppuVar7 + -0x40) = unaff_x24;
    *(undefined8 **)((long)ppuVar7 + -0x38) = unaff_x23;
    *(undefined ***)((long)ppuVar7 + -0x30) = unaff_x22;
    *(undefined ***)((long)ppuVar7 + -0x28) = ppuVar9;
    *(undefined ***)((long)ppuVar7 + -0x20) = ppuVar3;
    *(undefined ***)((long)ppuVar7 + -0x18) = ppuVar6;
    *(undefined1 **)((long)ppuVar7 + -0x10) = puVar10;
    *(undefined **)((long)ppuVar7 + -8) = puVar11;
    *(undefined8 *)((long)ppuVar7 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar6 = ppuVar2;
    ppuVar3 = ppuVar8;
    _objc_retain(ppuVar2);
    _objc_retain(ppuVar8);
    unaff_x22 = ppuVar4;
    if (ppuVar4 != (undefined **)0x0) {
      plVar5 = (long *)ppuVar4[1];
      ppuVar6 = (undefined **)&UNK_110d5a2d8;
      (**(code **)(*plVar5 + 0x28))();
      if ((int)plVar5 != 0) {
        plVar5 = (long *)ppuVar4[1];
        _objc_retain(ppuVar2);
        if (ppuVar2 == (undefined **)0x0) {
          ppuVar6 = (undefined **)&UNK_10f7a3498;
        }
        else {
          ppuVar6 = ppuVar2;
          _objc_retainAutorelease(ppuVar2);
          func_0x00010bdc3520();
        }
        _objc_release(ppuVar2);
        unaff_x24 = (undefined1 *)((long)ppuVar7 + -0x78);
        func_0x000107c278b8((undefined1 *)((long)ppuVar7 + -0x78),ppuVar6);
        _objc_retain(ppuVar8);
        if (ppuVar8 == (undefined **)0x0) {
          ppuVar6 = (undefined **)&UNK_10f7a3498;
        }
        else {
          _objc_retainAutorelease(ppuVar8);
          ppuVar6 = ppuVar8;
          func_0x00010bdc3520(ppuVar8);
        }
        _objc_release(ppuVar8);
        func_0x000107c278b8((undefined1 *)((long)ppuVar7 + -0x60),ppuVar6);
        *(undefined8 *)((long)ppuVar7 + -0x98) = 0;
        *(undefined8 *)((long)ppuVar7 + -0x90) = 0;
        *(undefined8 *)((long)ppuVar7 + -0x88) = 0;
        func_0x000107c27984((undefined1 *)((long)ppuVar7 + -0x98),
                            (undefined1 *)((long)ppuVar7 + -0x78),
                            (undefined1 *)((long)ppuVar7 + -0x48),2);
        ppuVar6 = (undefined **)&UNK_110d5a2d8;
        unaff_x23 = (undefined8 *)((long)ppuVar7 + -0x98);
        ppuVar3 = (undefined **)((long)ppuVar7 + -0x98);
        (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110d5a2d8,ppuVar3,param_5);
        *(undefined8 **)((long)ppuVar7 + -0x80) = unaff_x23;
        func_0x000107c278ac((undefined1 *)((long)ppuVar7 + -0x80));
        lVar1 = 0;
        unaff_x22 = (undefined **)((long)ppuVar7 + -0x78);
        do {
          if (*(char *)((long)unaff_x22 + lVar1 + 0x2f) < '\0') {
            __ZdlPv(*(undefined8 *)((long)unaff_x22 + lVar1 + 0x18));
          }
          lVar1 = lVar1 + -0x18;
        } while (lVar1 != -0x30);
      }
    }
    _objc_release(ppuVar8);
    ppuVar9 = ppuVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar7 + -0x48)) break;
    ___stack_chk_fail();
    _objc_release(ppuVar8);
    dVar12 = param_1;
    if (*(char *)((long)ppuVar7 + -0x61) < '\0') {
      __ZdlPv(*(undefined8 *)((long)ppuVar7 + -0x78));
      dVar12 = param_1;
    }
    _objc_release(ppuVar8);
    _objc_release(ppuVar2);
    ppuVar4 = ppuVar9;
    __Unwind_Resume();
    *(undefined8 *)((long)ppuVar7 + -0xe0) = unaff_d9;
    *(double *)((long)ppuVar7 + -0xd8) = unaff_d8;
    *(undefined ***)((long)ppuVar7 + -0xd0) = unaff_x22;
    *(undefined ***)((long)ppuVar7 + -200) = ppuVar9;
    *(undefined ***)((long)ppuVar7 + -0xc0) = ppuVar8;
    *(undefined ***)((long)ppuVar7 + -0xb8) = ppuVar2;
    *(undefined1 **)((long)ppuVar7 + -0xb0) = (undefined1 *)((long)ppuVar7 + -0x10);
    *(undefined **)((long)ppuVar7 + -0xa8) = &LAB_10b721e2c;
    puVar10 = (undefined1 *)((long)ppuVar7 + -0xb0);
    _objc_retain(ppuVar6);
    _objc_retain(ppuVar3);
    if (ppuVar4 == (undefined **)0x0) {
      _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
      return;
    }
    param_1 = dVar12 * 1000.0;
    param_5 = (undefined **)(long)param_1;
    puVar11 = &UNK_10b721e84;
    ppuVar7 = (undefined **)((long)ppuVar7 + -0xe0);
    ppuVar2 = ppuVar6;
    ppuVar8 = ppuVar3;
    ppuVar9 = ppuVar4;
    unaff_d8 = dVar12;
  }
  return;
}



/* Entry: 1061ff188; end: 1061ff1eb; -[SCLensScheduleDataLogger logScheduleRequestNamespace:providedChecksumsCount:] */

void FUN_1061ff188(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010b7220f0(uVar1,param_3,1);
  func_0x00010b721ec0(*(undefined8 *)(param_1 + 0x10),param_3,
                      &PTR____CFConstantStringClassReference_110e456b8,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061ff1ec; end: 1061ff3ab; -[SCLensScheduleDataLogger logScheduleResponseData:] */

void FUN_1061ff1ec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d5240(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c072fe0(param_3);
  uVar3 = param_3;
  func_0x00010bef0760(param_3);
  func_0x00010be58240(param_1,param_2,uVar1,uVar2,&PTR____CFConstantStringClassReference_110e455f8,
                      uVar3);
  uVar3 = param_3;
  func_0x00010c1060c0(param_3);
  func_0x00010be58240(param_1,param_2,uVar1,uVar2,&PTR____CFConstantStringClassReference_110e45618,
                      uVar3);
  uVar3 = param_3;
  func_0x00010c0cad80();
  if (uVar3 != 0x7fffffffffffffff) {
    uVar3 = param_3;
    func_0x00010c0cad80(param_3);
    func_0x00010be58240(param_1,param_2,uVar1,uVar2,&PTR____CFConstantStringClassReference_110e45638
                        ,uVar3);
  }
  uVar3 = param_3;
  func_0x00010c0cae60();
  if (uVar3 != 0x7fffffffffffffff) {
    uVar3 = param_3;
    func_0x00010c0cae60(param_3);
    func_0x00010be58240(param_1,param_2,uVar1,uVar2,&PTR____CFConstantStringClassReference_110e45658
                        ,uVar3);
  }
  uVar3 = param_3;
  func_0x00010c0ceac0(param_3);
  func_0x00010be58240(param_1,param_2,uVar1,uVar2,&PTR____CFConstantStringClassReference_110df2578,
                      uVar3);
  uVar3 = param_3;
  func_0x00010bef0760();
  uVar4 = param_3;
  func_0x00010c1060c0();
  if (uVar4 + uVar3 == 0) {
    lVar6 = 0;
  }
  else {
    uVar5 = param_3;
    func_0x00010c28d400(param_3);
    lVar6 = (long)(((double)uVar5 / (double)(uVar4 + uVar3)) * 1000.0);
  }
  func_0x00010be58240(param_1,param_2,uVar1,uVar2,&PTR____CFConstantStringClassReference_110e45698,
                      lVar6);
  uVar3 = param_3;
  func_0x00010c124d80(param_3);
  func_0x00010be58240(param_1,param_2,uVar1,uVar2,&PTR____CFConstantStringClassReference_110e45678,
                      uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061ff3ac; end: 1061ff3bf; -[SCLensScheduleDataLogger logScheduleLatency:scheduleNamespace:] */

void FUN_1061ff3ac(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x10);
  _objc_retain(param_4);
  _objc_retain(&PTR____CFConstantStringClassReference_110e1d3b8);
  if (lVar1 != 0) {
    func_0x00010b721bdc(lVar1,param_4,&PTR____CFConstantStringClassReference_110e1d3b8,
                        (long)(param_1 * 1000.0));
  }
  _objc_release(&PTR____CFConstantStringClassReference_110e1d3b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061ff3c0; end: 1061ff3cb; -[SCLensScheduleDataLogger logAverageParsingTime:scheduleNamespace:] */

void FUN_1061ff3c0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x10);
  _objc_retain(param_4);
  if (lVar1 != 0) {
    func_0x00010b720d4c(lVar1,param_4,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061ff3cc; end: 1061ff4b7; -[SCLensScheduleDataLogger logMixerLocationFreshness:age:accuracy:hasPermission:fetchStatus:] */

void FUN_1061ff3cc(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  int param_6)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_2;
  func_0x00010be4f5c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_6 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
  lVar3 = param_2;
  func_0x00010be14640(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b7210a0(*(undefined8 *)(param_2 + 0x10),lVar3,ppuVar1,lVar2,1);
  if (param_4 != 2) {
    func_0x00010b721590(*(undefined8 *)(param_2 + 0x10),lVar3,ppuVar1,param_5);
    func_0x00010b721360(*(undefined8 *)(param_2 + 0x10),lVar3,ppuVar1,(long)param_1);
  }
  _objc_release(lVar3);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1061ff4b8; end: 1061ff5bf; -[SCLensScheduleDataLogger logScheduleResponseStatusCode:updatingMode:scheduleNamespace:isFirstPage:] */

void FUN_1061ff4b8(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 in_x4;
  int in_w5;
  undefined8 uVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (in_w5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(ppuVar1);
  _objc_retain(in_x4);
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b722544(uVar6,ppuVar1,in_x4,puVar3,puVar5,1);
  _objc_release(ppuVar1);
  _objc_release(in_x4);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1061ff5c0; end: 1061ff68f; -[SCLensScheduleDataLogger logMixerCTItemsEnabledOldValue:newValue:] */

void FUN_1061ff5c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126bbb70;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  func_0x00010bec54e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bbb70;
  func_0x00010bec54e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010b720f2c(*(undefined8 *)(param_1 + 0x10),puVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1061ff690; end: 1061ff6a3; -[SCLensScheduleDataLogger logMixerBandwidthEstimation:bandwidthClass:reachability:] */

/* WARNING: Possible PIC construction at 0x00010b721e80: Changing call to branch */

void FUN_1061ff690(double param_1,long param_2,undefined8 param_3,long *param_4,long *param_5,
                  long *param_6)

{
  undefined1 *puVar1;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_x23;
  long *unaff_x24;
  undefined *puVar13;
  double dVar14;
  double unaff_d8;
  undefined8 unaff_d9;
  long alStack_120 [3];
  undefined1 *puStack_108;
  long alStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  long alStack_98 [3];
  long *plStack_80;
  long alStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  undefined1 *puVar2;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_5;
  plVar6 = param_6;
  plVar10 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  plVar12 = (long *)0x0;
  if (lVar3 != 0) {
    plVar12 = *(long **)(lVar3 + 8);
    _objc_retain(param_5);
    if (param_5 == (long *)0x0) {
      plVar4 = (long *)&UNK_10f7a3498;
    }
    else {
      plVar4 = param_5;
      _objc_retainAutorelease(param_5);
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    unaff_x24 = alStack_78;
    func_0x000107c278b8(alStack_78,plVar4);
    _objc_retain(param_6);
    if (param_6 == (long *)0x0) {
      plVar4 = (long *)&UNK_10f7a3498;
    }
    else {
      _objc_retainAutorelease(param_6);
      plVar4 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_60,plVar4);
    alStack_98[0] = 0;
    alStack_98[1] = 0;
    alStack_98[2] = 0;
    func_0x000107c27984(alStack_98,alStack_78,&lStack_48,2);
    plVar4 = (long *)&UNK_110d5a238;
    unaff_x23 = alStack_98;
    plVar6 = alStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110d5a238,plVar6,param_4);
    plStack_80 = unaff_x23;
    func_0x000107c278ac(&plStack_80);
    lVar3 = 0;
    plVar12 = alStack_78;
    plVar10 = param_4;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_6);
  plVar11 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  if (cStack_61 < '\0') {
    __ZdlPv(alStack_78[0]);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  plVar5 = plVar11;
  __Unwind_Resume();
  plVar7 = alStack_120;
  puStack_a8 = &LAB_10b721a68;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = plVar4;
  plVar9 = plVar6;
  plStack_e0 = unaff_x24;
  plStack_d8 = unaff_x23;
  plStack_d0 = plVar12;
  plStack_c8 = plVar11;
  plStack_c0 = param_6;
  plStack_b8 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(plVar4);
  plVar11 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    plVar11 = (long *)plVar5[1];
    _objc_retain(plVar4);
    if (plVar4 == (long *)0x0) {
      plVar12 = (long *)&UNK_10f7a3498;
    }
    else {
      plVar12 = plVar4;
      _objc_retainAutorelease(plVar4);
      func_0x00010bdc3520();
    }
    _objc_release(plVar4);
    unaff_x23 = alStack_100;
    func_0x000107c278b8(alStack_100,plVar12);
    alStack_120[0] = 0;
    alStack_120[1] = 0;
    alStack_120[2] = 0;
    func_0x000107c27984(alStack_120,alStack_100,&lStack_e8,1);
    plVar8 = (long *)&UNK_110d5a288;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110d5a288,alStack_120,plVar6);
    puStack_108 = (undefined1 *)alStack_120;
    func_0x000107c278ac(&puStack_108);
    plVar9 = plVar7;
    plVar10 = plVar6;
    plVar12 = alStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(alStack_100[0]);
      plVar9 = plVar7;
      plVar10 = plVar6;
      plVar12 = alStack_120;
    }
  }
  plVar6 = plVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(plVar4);
  _objc_release(plVar4);
  puVar13 = &UNK_10b721bdc;
  plVar7 = plVar6;
  __Unwind_Resume();
  plVar5 = alStack_120;
  puVar1 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar2 = (undefined1 *)plVar5;
    *(long **)(puVar2 + -0x40) = unaff_x24;
    *(long **)(puVar2 + -0x38) = unaff_x23;
    *(long **)(puVar2 + -0x30) = plVar12;
    *(long **)(puVar2 + -0x28) = plVar11;
    *(long **)(puVar2 + -0x20) = plVar6;
    *(long **)(puVar2 + -0x18) = plVar4;
    *(undefined1 **)(puVar2 + -0x10) = puVar1 + -0xb0;
    *(undefined **)(puVar2 + -8) = puVar13;
    *(undefined8 *)(puVar2 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    plVar4 = plVar8;
    plVar6 = plVar9;
    _objc_retain(plVar8);
    _objc_retain(plVar9);
    plVar12 = plVar7;
    if (plVar7 != (long *)0x0) {
      plVar11 = (long *)plVar7[1];
      plVar4 = (long *)&UNK_110d5a2d8;
      (**(code **)(*plVar11 + 0x28))();
      if ((int)plVar11 != 0) {
        plVar12 = (long *)plVar7[1];
        _objc_retain(plVar8);
        if (plVar8 == (long *)0x0) {
          plVar4 = (long *)&UNK_10f7a3498;
        }
        else {
          plVar4 = plVar8;
          _objc_retainAutorelease(plVar8);
          func_0x00010bdc3520();
        }
        _objc_release(plVar8);
        unaff_x24 = (long *)(puVar2 + -0x78);
        func_0x000107c278b8(puVar2 + -0x78,plVar4);
        _objc_retain(plVar9);
        if (plVar9 == (long *)0x0) {
          plVar4 = (long *)&UNK_10f7a3498;
        }
        else {
          _objc_retainAutorelease(plVar9);
          plVar4 = plVar9;
          func_0x00010bdc3520(plVar9);
        }
        _objc_release(plVar9);
        func_0x000107c278b8(puVar2 + -0x60,plVar4);
        *(undefined8 *)(puVar2 + -0x98) = 0;
        *(undefined8 *)(puVar2 + -0x90) = 0;
        *(undefined8 *)(puVar2 + -0x88) = 0;
        func_0x000107c27984(puVar2 + -0x98,puVar2 + -0x78,puVar2 + -0x48,2);
        plVar4 = (long *)&UNK_110d5a2d8;
        unaff_x23 = (long *)(puVar2 + -0x98);
        plVar6 = (long *)(puVar2 + -0x98);
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110d5a2d8,plVar6,plVar10);
        *(long **)(puVar2 + -0x80) = unaff_x23;
        func_0x000107c278ac(puVar2 + -0x80);
        lVar3 = 0;
        plVar12 = (long *)(puVar2 + -0x78);
        do {
          if (*(char *)((long)plVar12 + lVar3 + 0x2f) < '\0') {
            __ZdlPv(*(undefined8 *)((long)plVar12 + lVar3 + 0x18));
          }
          lVar3 = lVar3 + -0x18;
        } while (lVar3 != -0x30);
      }
    }
    _objc_release(plVar9);
    plVar10 = plVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x48)) break;
    ___stack_chk_fail();
    _objc_release(plVar9);
    dVar14 = param_1;
    if ((char)puVar2[-0x61] < '\0') {
      __ZdlPv(*(undefined8 *)(puVar2 + -0x78));
      dVar14 = param_1;
    }
    _objc_release(plVar9);
    _objc_release(plVar8);
    plVar7 = plVar10;
    __Unwind_Resume();
    *(undefined8 *)(puVar2 + -0xe0) = unaff_d9;
    *(double *)(puVar2 + -0xd8) = unaff_d8;
    *(long **)(puVar2 + -0xd0) = plVar12;
    *(long **)(puVar2 + -200) = plVar10;
    *(long **)(puVar2 + -0xc0) = plVar9;
    *(long **)(puVar2 + -0xb8) = plVar8;
    *(undefined1 **)(puVar2 + -0xb0) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0xa8) = &LAB_10b721e2c;
    _objc_retain(plVar4);
    _objc_retain(plVar6);
    if (plVar7 == (long *)0x0) {
      _objc_release(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(plVar4);
      return;
    }
    param_1 = dVar14 * 1000.0;
    plVar10 = (long *)(long)param_1;
    puVar13 = &UNK_10b721e84;
    plVar5 = (long *)(puVar2 + -0xe0);
    plVar8 = plVar4;
    plVar9 = plVar6;
    plVar11 = plVar7;
    unaff_d8 = dVar14;
    puVar1 = puVar2;
  }
  return;
}



/* Entry: 1061ff6a4; end: 1061ff6af; -[SCLensScheduleDataLogger logMixerAppStartDelta:] */

void FUN_1061ff6a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d5a1e8,&uStack_40,param_3);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 1061ff6b0; end: 1061ff703; +[SCLensScheduleDataLogger _stringBoolValue:] */

void FUN_1061ff6b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd2518;
  }
  else {
    func_0x00010bf1f3c0();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
    if ((int)param_3 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
    }
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1061ff704; end: 1061ff72b; -[SCLensScheduleDataLogger _logScheduleResponseForNamespace:isFirstPage:stat:value:] */

/* WARNING: Removing unreachable block (ram,0x00010b722504) */
/* WARNING: Removing unreachable block (ram,0x00010b72285c) */

undefined **
FUN_1061ff704(long param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5,
             undefined8 *param_6)

{
  long lVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined **ppuStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined **ppuStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined1 ***pppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined *apuStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [3];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  ppuVar6 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_4 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dad398;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  puVar7 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar4 = param_3;
  puVar12 = param_5;
  puVar14 = param_6;
  puVar10 = param_6;
  _objc_retain(ppuVar6);
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (lVar1 != 0) {
    plVar2 = *(long **)(lVar1 + 8);
    ppuVar3 = (undefined **)&UNK_110d5a3c8;
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(lVar1 + 8);
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar3 = (undefined **)&UNK_10f7a3498;
      }
      else {
        ppuVar3 = ppuVar6;
        _objc_retainAutorelease(ppuVar6);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar6);
      func_0x000107c278b8(auStack_a0,ppuVar3);
      _objc_retain(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar4 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_88,puVar4);
      _objc_retain(param_5);
      if (param_5 == (undefined8 *)0x0) {
        unaff_x25 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(param_5);
        unaff_x25 = param_5;
        func_0x00010bdc3520();
      }
      _objc_release(param_5);
      func_0x000107c278b8(auStack_70,unaff_x25);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
      ppuVar3 = (undefined **)&UNK_110d5a3c8;
      (**(code **)(*plVar2 + 0x18))(plVar2);
      puStack_a8 = (undefined1 *)&uStack_c0;
      func_0x000107c278ac(&puStack_a8);
      lVar1 = 0;
      puVar4 = puVar7;
      puVar12 = param_6;
      do {
        if ((&cStack_59)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
        unaff_x24 = &uStack_c0;
      } while (lVar1 != -0x48);
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  ppuVar5 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)auStack_a0);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(ppuVar6);
  __Unwind_Resume();
  puStack_c8 = &SUB_10b722544;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar3;
  puVar7 = puVar4;
  puVar13 = puVar12;
  puVar15 = puVar14;
  puVar16 = puVar10;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar3);
  _objc_retain(puVar4);
  _objc_retain(puVar12);
  _objc_retain(puVar14);
  if (ppuVar5 != (undefined **)0x0) {
    plVar2 = (long *)ppuVar5[1];
    ppuVar6 = (undefined **)&UNK_110d5a418;
    (**(code **)(*plVar2 + 0x28))();
    if ((int)plVar2 != 0) {
      plVar2 = (long *)ppuVar5[1];
      _objc_retain(ppuVar3);
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar6 = (undefined **)&UNK_10f7a3498;
      }
      else {
        ppuVar6 = ppuVar3;
        _objc_retainAutorelease(ppuVar3);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar3);
      func_0x000107c278b8(auStack_178,ppuVar6);
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar7 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x000107c278b8(auStack_160,puVar7);
      _objc_retain(puVar12);
      if (puVar12 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(puVar12);
        puVar7 = puVar12;
        func_0x00010bdc3520(puVar12);
      }
      _objc_release(puVar12);
      func_0x000107c278b8(auStack_148,puVar7);
      _objc_retain(puVar14);
      if (puVar14 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(puVar14);
        puVar7 = puVar14;
        func_0x00010bdc3520(puVar14);
      }
      _objc_release(puVar14);
      func_0x000107c278b8(auStack_130,puVar7);
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      func_0x000107c27984(&uStack_198,auStack_178,&lStack_118,4);
      puVar13 = (undefined8 *)((long)puVar10 * 10);
      ppuVar6 = (undefined **)&UNK_110d5a418;
      unaff_x25 = &uStack_198;
      puVar7 = &uStack_198;
      (**(code **)(*plVar2 + 0x18))(plVar2);
      puStack_180 = unaff_x25;
      func_0x000107c278ac(&puStack_180);
      lVar1 = 0;
      do {
        if ((&cStack_119)[lVar1] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar1));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != -0x60);
    }
  }
  _objc_release(puVar14);
  _objc_release(puVar12);
  _objc_release(puVar4);
  ppuVar5 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar14);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_178);
    _objc_release(puVar14);
    _objc_release(puVar12);
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    ppuVar8 = ppuVar5;
    __Unwind_Resume();
    puVar11 = &uStack_220;
    puStack_1a8 = &SUB_10b72289c;
    lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar10 = puVar7;
    puStack_1e0 = auStack_178;
    ppuStack_1d8 = ppuVar5;
    puStack_1d0 = puVar14;
    puStack_1c8 = puVar12;
    puStack_1c0 = puVar4;
    ppuStack_1b8 = ppuVar3;
    ppuStack_1b0 = &puStack_d0;
    _objc_retain(ppuVar6);
    plVar2 = (long *)0x0;
    if (ppuVar8 != (undefined **)0x0) {
      plVar2 = (long *)ppuVar8[1];
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined **)0x0) {
        ppuVar3 = (undefined **)&UNK_10f7a3498;
      }
      else {
        ppuVar3 = ppuVar6;
        _objc_retainAutorelease(ppuVar6);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar6);
      ppuVar5 = apuStack_200;
      func_0x000107c278b8(apuStack_200,ppuVar3);
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x000107c27984(&uStack_220,apuStack_200,&lStack_1e8,1);
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110d5a468);
      puStack_208 = (undefined1 *)&uStack_220;
      func_0x000107c278ac(&puStack_208);
      puVar10 = puVar11;
      puVar13 = puVar7;
      puVar14 = &uStack_220;
      if (cStack_1e9 < '\0') {
        __ZdlPv(apuStack_200[0]);
        puVar10 = puVar11;
        puVar13 = puVar7;
        puVar14 = &uStack_220;
      }
    }
    ppuVar3 = ppuVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
      ___stack_chk_fail();
      _objc_release(ppuVar6);
      _objc_release(ppuVar6);
      ppuVar8 = ppuVar3;
      __Unwind_Resume();
      pppuVar9 = &ppuStack_270;
      puStack_228 = &UNK_10b722a10;
      puStack_260 = auStack_178;
      ppuStack_258 = ppuVar5;
      puStack_250 = puVar14;
      plStack_248 = plVar2;
      ppuStack_240 = ppuVar3;
      ppuStack_238 = ppuVar6;
      pppuStack_230 = &ppuStack_1b0;
      _objc_retain(puVar10);
      _objc_retain(puVar13);
      _objc_retain(puVar15);
      _objc_retain(puVar16);
      puStack_268 = PTR_PTR_11270a268;
      ppuStack_270 = ppuVar8;
      _objc_msgSendSuper2(&ppuStack_270,PTR_s_init_1125d9248);
      if (pppuVar9 != (undefined ***)0x0) {
        puVar4 = puVar10;
        func_0x00010bf51e00();
        puVar17 = (undefined *)pppuVar9[1];
        pppuVar9[1] = (undefined **)puVar4;
        _objc_release(puVar17);
        puVar4 = puVar13;
        func_0x00010bf51e00();
        puVar17 = (undefined *)pppuVar9[2];
        pppuVar9[2] = (undefined **)puVar4;
        _objc_release(puVar17);
        puVar4 = puVar15;
        func_0x00010bf51e00();
        puVar17 = (undefined *)pppuVar9[3];
        pppuVar9[3] = (undefined **)puVar4;
        _objc_release(puVar17);
        puVar4 = puVar16;
        func_0x00010bf51e00();
        puVar17 = (undefined *)pppuVar9[4];
        pppuVar9[4] = (undefined **)puVar4;
        _objc_release(puVar17);
      }
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar13);
      _objc_release(puVar10);
      return (undefined **)pppuVar9;
    }
    return ppuVar3;
  }
  return ppuVar5;
}



/* Entry: 1061ff72c; end: 1061ff757; -[SCLensScheduleDataLogger _locationFreshnessStringFromLocationFreshness:] */

undefined ** FUN_1061ff72c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e456f8;
  if (param_3 != 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e45718;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e456d8;
  if (param_3 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 1061ff758; end: 1061ff77f; -[SCLensScheduleDataLogger _fetchStatusFromFetchType:] */

undefined ** FUN_1061ff758(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 5) {
    return (undefined **)(&PTR_PTR_110915a30)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e45778;
}



/* Entry: 1061ff780; end: 1061ff7bb; -[SCLensScheduleDataLogger .cxx_destruct] */

void FUN_1061ff780(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1061ff7bc; end: 1061ff8f7; -[SCLensCarouselLoggingWorkflow initWithLensCarouselSnapshotBlizzardLogger:lensCarouselManager:lensCarouselSessionLogger:lensScheduleServiceProvider:placement:performer:] */

undefined1 *
FUN_1061ff7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f05d0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    func_0x00010bec0980(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1061ff8f8; end: 1061ff943; -[SCLensCarouselLoggingWorkflow _startObserving] */

void FUN_1061ff8f8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar2);
  func_0x00010be65d80(param_1);
  func_0x00010be66500(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be664d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observeLensScheduleNamespaceDat_1125772d0);
  return;
}



/* Entry: 1061ff944; end: 1061ffa6b; -[SCLensCarouselLoggingWorkflow _observeCarouselLensOrder] */

void FUN_1061ff944(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c095ac0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1061ffa6c; end: 1061ffb4f;  */

void FUN_1061ffa6c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010be44fc0();
    uVar2 = param_2;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    _objc_release(uVar3);
    if ((int)lVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      _objc_retain(uVar4);
      uVar2 = uVar4;
      func_0x00010bf09180(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf09160(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      func_0x00010be17900(param_1);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061ffb50; end: 1061ffc77; -[SCLensCarouselLoggingWorkflow _observeLensSessionId] */

void FUN_1061ffb50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c096b80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1061ffc78; end: 1061ffcbf;  */

void FUN_1061ffc78(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69ce0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061ffcc0; end: 1061ffe6f; -[SCLensCarouselLoggingWorkflow _observeLensScheduleNamespaceData] */

void FUN_1061ffcc0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1;
  func_0x00010bdf6820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    lVar1 = param_1;
    func_0x00010bdf6820(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15f740();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar7;
    _objc_release(uVar6);
    _objc_release(lVar1);
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c0cae20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 1061ffe70; end: 1061ffeb7;  */

void FUN_1061ffe70(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69cc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061ffeb8; end: 1061fff73; -[SCLensCarouselLoggingWorkflow _onLensSessionChanged:] */

void FUN_1061ffeb8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c15ffa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    *(long *)(param_1 + 0x48) = lVar2;
    _objc_release(uVar3);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf09180(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf09160(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be17900(param_1,param_2,1,lVar1,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061fff74; end: 1061ffffb; -[SCLensCarouselLoggingWorkflow _onLensScheduleNamespaceDataChanged:] */

void FUN_1061fff74(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010be44fe0();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf09180(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf09160(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be17900(param_1,param_2,0,uVar2,uVar3);
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1061ffffc; end: 10620009f; -[SCLensCarouselLoggingWorkflow _currentCarouselNamespaces] */

void FUN_1061ffffc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x28) == 2) {
    ppuVar3 = &PTR_PTR_110d5b140;
  }
  else {
    if (*(long *)(param_1 + 0x28) != 1) goto LAB_106200068;
    ppuVar3 = &PTR_PTR_110d5b138;
    func_0x00010befa120(puVar1,param_2,&PTR____CFConstantStringClassReference_110f310d8);
  }
  func_0x00010befa120(puVar1,param_2,*ppuVar3);
LAB_106200068:
  puVar2 = puVar1;
  func_0x00010c0b8600(puVar1,param_2,&PTR___NSConcreteGlobalBlock_110915a58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062000a0; end: 1062000eb;  */

void FUN_1062000a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6868;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c02dd60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062000ec; end: 106200207; -[SCLensCarouselLoggingWorkflow _isUpdateNeededForCarouselLenses:lastCarouselLenses:] */

byte FUN_1062000ec(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  lVar2 = param_4;
  func_0x00010bf529e0();
  bVar3 = 1;
  if (lVar1 == lVar2) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 1;
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bf97e80(param_3);
    bVar3 = *(byte *)(puStack_48 + 3) ^ 1;
    _objc_release(param_4);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar3 & 1;
}



/* Entry: 106200208; end: 10620045b;  */

void FUN_106200208(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar7;
  
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x28);
  func_0x00010c0dfd40(lVar5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar4);
  _objc_retain(lVar6);
  if (lVar4 == lVar6) {
    uVar1 = 1;
  }
  else if (lVar6 == 0) {
    uVar1 = 0;
  }
  else {
    lVar7 = lVar4;
    func_0x00010c071ae0(lVar4,param_2,lVar6);
    uVar1 = (uint)lVar7;
  }
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c0dfd40(lVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x28);
  func_0x00010c0dfd40(lVar5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar4);
  _objc_retain(lVar6);
  if (lVar4 == lVar6) {
    uVar2 = 1;
  }
  else if (lVar6 == 0) {
    uVar2 = 0;
  }
  else {
    lVar7 = lVar4;
    func_0x00010c071ae0(lVar4,param_2,lVar6);
    uVar2 = (uint)lVar7;
  }
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar10 = PTR_PTR_1126ae6a8;
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dfd40(uVar8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c27dd80();
  func_0x00010c097840(puVar10,param_2,uVar9);
  puVar12 = PTR_PTR_1126ae6a8;
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dfd40(uVar11,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar11;
  func_0x00010c27dd80();
  func_0x00010c097840(puVar12,param_2,uVar9);
  _objc_release(uVar11);
  _objc_release(uVar8);
  if (((uVar1 & uVar2) != 1) || (puVar10 != puVar12)) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
    *param_4 = 1;
  }
  return;
}



/* Entry: 10620045c; end: 1062005e3; -[SCLensCarouselLoggingWorkflow _isUpdateNeededForNamespaceData:lastLensOrder:] */

bool FUN_10620045c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010bef0be0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0ba440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010050471c();
  lVar5 = lVar3;
  func_0x00010bf529e0();
  lVar6 = lVar4;
  func_0x00010bf529e0();
  if (lVar5 == lVar6) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    func_0x00010bf97ce0(lVar3);
    bVar1 = *(char *)(puStack_58 + 3) == '\0';
    __Block_object_dispose(&uStack_60,8);
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1062005e4; end: 10620062b;  */

void FUN_1062005e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c07f200();
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


