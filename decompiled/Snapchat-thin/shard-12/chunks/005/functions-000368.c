/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10922a3c0; end: 10922a3c7; -[LCVCalibrationData leftAlignmentComp] */

undefined8 FUN_10922a3c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10922a3c8; end: 10922a3f7; -[LCVCalibrationData setLeftAlignmentComp:] */

void FUN_10922a3c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10922a3f8; end: 10922a3ff; -[LCVCalibrationData rightAlignmentComp] */

undefined8 FUN_10922a3f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10922a400; end: 10922a42f; -[LCVCalibrationData setRightAlignmentComp:] */

void FUN_10922a400(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10922a430; end: 10922a477; -[LCVCalibrationData .cxx_destruct] */

void FUN_10922a430(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10922a478; end: 10922a53b; -[LCVCameraData init] */

undefined1 * FUN_10922a478(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112701238;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0;
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10922a53c; end: 10922a543; -[LCVCameraData width] */

undefined4 FUN_10922a53c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10922a544; end: 10922a54b; -[LCVCameraData setWidth:] */

void FUN_10922a544(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10922a54c; end: 10922a553; -[LCVCameraData height] */

undefined4 FUN_10922a54c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10922a554; end: 10922a55b; -[LCVCameraData setHeight:] */

void FUN_10922a554(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10922a55c; end: 10922a563; -[LCVCameraData focalLength] */

undefined8 FUN_10922a55c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10922a564; end: 10922a56b; -[LCVCameraData setFocalLength:] */

void FUN_10922a564(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 10922a56c; end: 10922a573; -[LCVCameraData principalPointX] */

undefined4 FUN_10922a56c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10922a574; end: 10922a57b; -[LCVCameraData setPrincipalPointX:] */

void FUN_10922a574(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10922a57c; end: 10922a583; -[LCVCameraData principalPointY] */

undefined4 FUN_10922a57c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10922a584; end: 10922a58b; -[LCVCameraData setPrincipalPointY:] */

void FUN_10922a584(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x14) = param_1;
  return;
}



/* Entry: 10922a58c; end: 10922a593; -[LCVCameraData leftCameraExtrinsics] */

undefined8 FUN_10922a58c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10922a594; end: 10922a5c3; -[LCVCameraData setLeftCameraExtrinsics:] */

void FUN_10922a594(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10922a5c4; end: 10922a5cb; -[LCVCameraData rightCameraExtrinsics] */

undefined8 FUN_10922a5c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10922a5cc; end: 10922a5fb; -[LCVCameraData setRightCameraExtrinsics:] */

void FUN_10922a5cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10922a5fc; end: 10922a62b; -[LCVCameraData .cxx_destruct] */

void FUN_10922a5fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10922a62c; end: 10922a7db; -[LCVDepthFrameData init] */

undefined1 * FUN_10922a62c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112701240;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    puVar2 = PTR_PTR_1126ddfa0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ddfa0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ddf98;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ddf98;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ddf98;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ddf98;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ddf98;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ddf70;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10922a7dc; end: 10922a7e3; -[LCVDepthFrameData timeStamp] */

undefined8 FUN_10922a7dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10922a7e4; end: 10922a7eb; -[LCVDepthFrameData setTimeStamp:] */

void FUN_10922a7e4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10922a7ec; end: 10922a7f3; -[LCVDepthFrameData frameIndex] */

undefined4 FUN_10922a7ec(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10922a7f4; end: 10922a7fb; -[LCVDepthFrameData setFrameIndex:] */

void FUN_10922a7f4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10922a7fc; end: 10922a803; -[LCVDepthFrameData depthQuality] */

undefined8 FUN_10922a7fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10922a804; end: 10922a80b; -[LCVDepthFrameData setDepthQuality:] */

void FUN_10922a804(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10922a80c; end: 10922a813; -[LCVDepthFrameData depthCamera] */

undefined8 FUN_10922a80c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10922a814; end: 10922a843; -[LCVDepthFrameData setDepthCamera:] */

void FUN_10922a814(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10922a844; end: 10922a84b; -[LCVDepthFrameData rgbCamera] */

undefined8 FUN_10922a844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10922a84c; end: 10922a87b; -[LCVDepthFrameData setRgbCamera:] */

void FUN_10922a84c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10922a87c; end: 10922a883; -[LCVDepthFrameData depth] */

undefined8 FUN_10922a87c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10922a884; end: 10922a8b3; -[LCVDepthFrameData setDepth:] */

void FUN_10922a884(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10922a8b4; end: 10922a8bb; -[LCVDepthFrameData rgb] */

undefined8 FUN_10922a8b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10922a8bc; end: 10922a8eb; -[LCVDepthFrameData setRgb:] */

void FUN_10922a8bc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10922a8ec; end: 10922a8f3; -[LCVDepthFrameData rgbThumbnail] */

undefined8 FUN_10922a8ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10922a8f4; end: 10922a923; -[LCVDepthFrameData setRgbThumbnail:] */

void FUN_10922a8f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10922a924; end: 10922a92b; -[LCVDepthFrameData disparity] */

undefined8 FUN_10922a924(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10922a92c; end: 10922a95b; -[LCVDepthFrameData setDisparity:] */

void FUN_10922a92c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10922a95c; end: 10922a963; -[LCVDepthFrameData confidence] */

undefined8 FUN_10922a95c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10922a964; end: 10922a993; -[LCVDepthFrameData setConfidence:] */

void FUN_10922a964(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10922a994; end: 10922a99b; -[LCVDepthFrameData alignmentComp] */

undefined8 FUN_10922a994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10922a99c; end: 10922a9cb; -[LCVDepthFrameData setAlignmentComp:] */

void FUN_10922a99c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10922a9cc; end: 10922a9d3; -[LCVDepthFrameData imuAlignmentComp] */

undefined8 FUN_10922a9cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10922a9d4; end: 10922aa03; -[LCVDepthFrameData setImuAlignmentComp:] */

void FUN_10922a9d4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10922aa04; end: 10922aa0b; -[LCVDepthFrameData eulerAngles] */

undefined8 FUN_10922aa04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10922aa0c; end: 10922aa3b; -[LCVDepthFrameData setEulerAngles:] */

void FUN_10922aa0c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10922aa3c; end: 10922aa43; -[LCVDepthFrameData primaryCamera] */

undefined8 FUN_10922aa3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10922aa44; end: 10922aa4b; -[LCVDepthFrameData setPrimaryCamera:] */

void FUN_10922aa44(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 10922aa4c; end: 10922aadb; -[LCVDepthFrameData .cxx_destruct] */

void FUN_10922aa4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10922aadc; end: 10922aaef; +[LCVStabilizerSystem extractStabilizerData:withRes:withStabilizerOutput:] */

void FUN_10922aadc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9eef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,0,0,param_3,PTR_s_extractStabilizerData_withRes_wi_1125c5560,param_5,0,
             param_6);
  return;
}



/* Entry: 10922aaf0; end: 10922ac83; +[LCVStabilizerSystem extractStabilizerData:withRes:withAutoScale:withMinFovDeg:withFocalLength:withStabilizerOutput:] */

bool FUN_10922aaf0(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  long lVar1;
  float *pfVar2;
  undefined8 in_x4;
  long lStack_d8;
  long lStack_d0;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(in_x4);
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  lStack_70 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_b8 = 0;
  lStack_c0 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  func_0x00010bf50ce0(PTR_PTR_1126ddf60);
  pfVar2 = (float *)0x8;
  __Znwm();
  *pfVar2 = (float)param_3;
  pfVar2[1] = (float)param_4;
  FUN_10966f174(&lStack_d8);
  lVar1 = lStack_d8;
  if (lStack_d0 != lStack_d8) {
    func_0x00010bf50dc0(PTR_PTR_1126ddf60);
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  __ZdlPv(pfVar2);
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  if (lStack_90 != 0) {
    lStack_88 = lStack_90;
    __ZdlPv();
  }
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  if (lStack_c0 != 0) {
    lStack_b8 = lStack_c0;
    __ZdlPv();
  }
  _objc_release(in_x4);
  return lStack_d0 != lVar1;
}



/* Entry: 10922ac84; end: 10922ac97; +[LCVStabilizerSystem extractStabilizerDataWithPoseData:withRes:withStabilizerOutput:] */

void FUN_10922ac84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9ef10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,0,0,param_3,PTR_s_extractStabilizerDataWithPoseDat_1125c5568,param_5,0,
             param_6);
  return;
}



/* Entry: 10922ac98; end: 10922adfb; +[LCVStabilizerSystem extractStabilizerDataWithPoseData:withRes:withAutoScale:withMinFovDeg:withFocalLength:withStabilizerOutput:] */

bool FUN_10922ac98(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  long lVar1;
  float *pfVar2;
  undefined8 in_x4;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(in_x4);
  lStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  func_0x00010bf50e00(PTR_PTR_1126ddf60);
  pfVar2 = (float *)0x8;
  __Znwm();
  *pfVar2 = (float)param_3;
  pfVar2[1] = (float)param_4;
  FUN_10966fbe0(&lStack_90);
  lVar1 = lStack_90;
  if (lStack_88 != lStack_90) {
    func_0x00010bf50dc0(PTR_PTR_1126ddf60);
  }
  if (lStack_90 != 0) {
    __ZdlPv();
  }
  __ZdlPv(pfVar2);
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  _objc_release(in_x4);
  return lStack_88 != lVar1;
}



/* Entry: 10922adfc; end: 10922ae27;  */

undefined8 FUN_10922adfc(undefined8 param_1)

{
  func_0x00010922c8ac();
  FUN_10922ae28(param_1);
  return param_1;
}



/* Entry: 10922ae28; end: 10922ae4b;  */

/* WARNING: Possible PIC construction at 0x00010922ae38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010922ae3c) */

void FUN_10922ae28(ulong *param_1)

{
  ulong uVar1;
  
  func_0x00010922c8b4();
  uVar1 = *param_1 ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10922ae4c; end: 10922ae4f;  */

undefined8 FUN_10922ae4c(undefined8 param_1)

{
  func_0x00010922c8ac();
  FUN_10922ae28(param_1);
  return param_1;
}



/* Entry: 10922ae50; end: 10922ae63;  */

void FUN_10922ae50(void)

{
  FUN_10922adfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10922ae64; end: 10922ae6f;  */

undefined ** FUN_10922ae64(void)

{
  return &PTR_DAT_110ae1e48;
}



/* Entry: 10922ae70; end: 10922aea7;  */

void FUN_10922ae70(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010922c8b4();
  func_0x000107c3025c();
  func_0x000107c3025c(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10922aea8; end: 10922af67;  */

long * FUN_10922aea8(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long unaff_x22;
  int iVar3;
  
  func_0x00010922c7d4();
  if (param_2 < 0) {
    param_2 = 0;
    if (*(long *)(unaff_x22 + 8) != 0) goto LAB_10922aed8;
  }
  else if ((int)param_2 != 0) {
LAB_10922aed8:
    param_4 = (long *)&UNK_10f55de79;
    func_0x00010922c824();
    param_2 = 8;
    param_1 = unaff_x19;
    func_0x00010922c778();
    unaff_x20 = param_1;
  }
  func_0x00010922c890(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_10922af34;
  }
  else if ((int)param_2 == 0) goto LAB_10922af34;
  param_4 = (long *)&UNK_10f55deab;
  func_0x00010922c824();
  func_0x00010922c778();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10922af34:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010922c930();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010922c9b4();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10922af68; end: 10922afe3;  */

long FUN_10922af68(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010922c8e0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  uVar1 = *(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010922c9a8();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010922c924();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = lVar2 + param_1;
  }
  *(int *)(unaff_x19 + 0x20) = (int)param_1;
  return param_1;
}



/* Entry: 10922afe4; end: 10922afe7;  */

void FUN_10922afe4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010922c910();
  func_0x00010922c974(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010922c958();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  func_0x00010922c974(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010922c958();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010922c8f4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10922afe8; end: 10922b063;  */

void FUN_10922afe8(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010922c910();
  func_0x00010922c974(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010922c958();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  func_0x00010922c974(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010922c958();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010922c8f4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10922b064; end: 10922b08f;  */

undefined8 FUN_10922b064(undefined8 param_1)

{
  func_0x00010922c8ac();
  FUN_10922b090(param_1);
  return param_1;
}



/* Entry: 10922b090; end: 10922b0d7;  */

void FUN_10922b090(long param_1)

{
  func_0x000107c30258(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10922adfc();
  }
  __ZdlPv();
  if (*(int *)(param_1 + 0x30) != 0) {
    if (*(int *)(param_1 + 0x30) - 2U < 6) {
      func_0x000107c30258(param_1 + 0x28);
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10922b0d8; end: 10922b0db;  */

undefined8 FUN_10922b0d8(undefined8 param_1)

{
  func_0x00010922c8ac();
  FUN_10922b090(param_1);
  return param_1;
}



/* Entry: 10922b0dc; end: 10922b0ef;  */

void FUN_10922b0dc(void)

{
  FUN_10922b064();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10922b0f0; end: 10922b123;  */

void FUN_10922b0f0(long param_1)

{
  if (*(int *)(param_1 + 0x30) - 2U < 6) {
    func_0x000107c30258(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 10922b124; end: 10922b12f;  */

undefined ** FUN_10922b124(void)

{
  return &PTR_DAT_110ae1e98;
}



/* Entry: 10922b130; end: 10922b17f;  */

void FUN_10922b130(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10922ae70(*(undefined8 *)(param_1 + 0x20));
  }
  FUN_10922b0f0(param_1);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10922b180; end: 10922b347;  */

long * FUN_10922b180(long *param_1,long param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  plVar2 = param_3;
  func_0x00010922c904();
  func_0x00010922c890(param_1[3]);
  if (param_2 < 0) {
    param_2 = 0;
    if (unaff_x22[1] != 0) goto LAB_10922b1bc;
  }
  else if ((int)param_2 != 0) {
LAB_10922b1bc:
    param_4 = (long *)&UNK_10f55dedc;
    func_0x00010922c824();
    param_2 = 1;
    param_1 = param_3;
    func_0x00010922c778();
    unaff_x20 = param_1;
  }
  switch(*(undefined4 *)(unaff_x21 + 0x30)) {
  case 2:
    func_0x00010922c80c();
    param_3 = unaff_x22;
    if (param_2 < 0) {
      param_3 = (long *)*unaff_x22;
    }
    func_0x00010922c824();
    func_0x00010922c9e8();
    plVar2 = unaff_x22;
    break;
  case 3:
    func_0x00010922c80c();
    func_0x00010922c824();
    plVar2 = unaff_x22;
    break;
  case 4:
    func_0x00010922c80c();
    func_0x00010922c824();
    plVar2 = unaff_x22;
    break;
  case 5:
    func_0x00010922c80c();
    func_0x00010922c824();
    plVar2 = unaff_x22;
    break;
  case 6:
    func_0x00010922c80c();
    func_0x00010922c824();
    plVar2 = unaff_x22;
    break;
  case 7:
    plVar2 = (long *)(*(ulong *)(unaff_x21 + 0x28) & 0xfffffffffffffffc);
    break;
  default:
    goto LAB_10922b2f8;
  }
  func_0x000107c280a0();
  param_1 = param_3;
  param_4 = unaff_x20;
  unaff_x20 = param_3;
LAB_10922b2f8:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(*(long *)(unaff_x21 + 0x20) + 0x20);
    param_1 = (long *)0x8;
    func_0x00010922c82c();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010922c930();
  if ((long)plVar2 < 0) {
    plVar2 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x00010922c9b4();
  if ((long)(int)plVar2 <= *param_1 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)plVar2);
  }
  while( true ) {
    iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
    iVar3 = (int)plVar2;
    plVar2 = (long *)(ulong)(uint)(iVar3 - iVar4);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)param_4 + (long)iVar4);
    param_4 = param_1;
    func_0x000107c303e4(param_1,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar3);
}



/* Entry: 10922b348; end: 10922b40f;  */

long FUN_10922b348(long param_1)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x18) & 0xfffffffffffffffc;
  if (*(char *)(uVar1 + 0x17) < '\0') {
    if (*(long *)(uVar1 + 8) == 0) goto LAB_10922b380;
LAB_10922b36c:
    func_0x000107c282a0();
    lVar3 = uVar1 + 1;
  }
  else {
    if (*(char *)(uVar1 + 0x17) != '\0') goto LAB_10922b36c;
LAB_10922b380:
    lVar3 = 0;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_10922af68();
    func_0x00010922c784();
    lVar3 = lVar3 + lVar2 + extraout_x8 + 1;
  }
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    func_0x00010922c9c0();
    break;
  case 7:
    func_0x000107c28098(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    break;
  default:
    goto LAB_10922b3d4;
  }
  func_0x00010922c9a8();
LAB_10922b3d4:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010922c924();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10922b410; end: 10922b413;  */

void FUN_10922b410(ulong *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010922c904();
  puVar5 = (ulong *)param_1[1];
  puVar4 = puVar5;
  if (((ulong)puVar5 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  func_0x00010922c974(*(undefined8 *)(unaff_x20 + 0x18));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if (((ulong)puVar5 & 1) != 0) {
      func_0x00010922c958();
    }
    param_1 = unaff_x21 + 3;
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[4];
    if (param_1 == (ulong *)0x0) {
      FUN_10922c5f8();
      unaff_x21[4] = (ulong)puVar4;
      param_1 = puVar4;
    }
    else {
      FUN_10922afe8();
    }
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x30);
  if (iVar2 != 0) {
    iVar3 = (int)unaff_x21[6];
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        FUN_10922b0f0();
      }
      *(int *)(unaff_x21 + 6) = iVar2;
    }
    switch(iVar2) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      if (iVar3 != iVar2) {
        unaff_x21[5] = (ulong)&DAT_11383d918;
      }
      func_0x00010922c964();
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010922c998();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10922b414; end: 10922b52b;  */

void FUN_10922b414(ulong *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010922c904();
  puVar5 = (ulong *)param_1[1];
  puVar4 = puVar5;
  if (((ulong)puVar5 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  func_0x00010922c974(*(undefined8 *)(unaff_x20 + 0x18));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if (((ulong)puVar5 & 1) != 0) {
      func_0x00010922c958();
    }
    param_1 = unaff_x21 + 3;
    func_0x000107c30248();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_1 = (ulong *)unaff_x21[4];
    if (param_1 == (ulong *)0x0) {
      FUN_10922c5f8();
      unaff_x21[4] = (ulong)puVar4;
      param_1 = puVar4;
    }
    else {
      FUN_10922afe8();
    }
  }
  *(uint *)(unaff_x21 + 2) = (uint)unaff_x21[2] | uVar1;
  iVar2 = *(int *)(unaff_x20 + 0x30);
  if (iVar2 != 0) {
    iVar3 = (int)unaff_x21[6];
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        FUN_10922b0f0();
      }
      *(int *)(unaff_x21 + 6) = iVar2;
    }
    switch(iVar2) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      if (iVar3 != iVar2) {
        unaff_x21[5] = (ulong)&DAT_11383d918;
      }
      func_0x00010922c964();
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010922c998();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10922b52c; end: 10922b593;  */

void FUN_10922b52c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_10922b064();
      }
      __ZdlPv();
    }
  }
  else if (*(int *)(param_1 + 0x24) == 2) {
    func_0x000107c30258(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 10922b594; end: 10922b5cf;  */

long FUN_10922b594(long param_1)

{
  func_0x00010922c8ac();
  func_0x000107c30258(param_1 + 0x10);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_10922b52c(param_1);
  }
  return param_1;
}



/* Entry: 10922b5d0; end: 10922b5d3;  */

long FUN_10922b5d0(long param_1)

{
  func_0x00010922c8ac();
  func_0x000107c30258(param_1 + 0x10);
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_10922b52c(param_1);
  }
  return param_1;
}



/* Entry: 10922b5d4; end: 10922b5e7;  */

void FUN_10922b5d4(void)

{
  FUN_10922b594();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10922b5e8; end: 10922b5f3;  */

undefined ** FUN_10922b5e8(void)

{
  return &PTR_DAT_110ae1ef0;
}



/* Entry: 10922b5f4; end: 10922b62b;  */

void FUN_10922b5f4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010922c8b4();
  func_0x000107c3025c();
  FUN_10922b52c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10922b62c; end: 10922b703;  */

long * FUN_10922b62c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010922c7d4();
  if (param_2 < 0) {
    param_2 = 0;
    if (unaff_x22[1] == 0) goto LAB_10922b678;
  }
  else if ((int)param_2 == 0) goto LAB_10922b678;
  param_4 = (long *)&UNK_10f55e058;
  func_0x00010922c824();
  param_2 = 1;
  func_0x00010922c778();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_10922b678:
  if (*(int *)(unaff_x21 + 0x24) == 3) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x18) + 0x14);
    param_1 = (long *)0x3;
    func_0x00010922c82c();
    unaff_x20 = param_1;
  }
  else if (*(int *)(unaff_x21 + 0x24) == 2) {
    func_0x00010922c890(*(undefined8 *)(unaff_x21 + 0x18));
    if (param_2 < 0) {
      unaff_x22 = (long *)*unaff_x22;
    }
    param_4 = (long *)&UNK_10f55e088;
    func_0x00010922c824();
    func_0x00010922c9e8();
    func_0x00010922c778();
    param_1 = unaff_x22;
    unaff_x20 = unaff_x22;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
    func_0x00010922c930();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x00010922c9b4();
    if (*param_1 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
        iVar2 = (int)param_3;
        param_3 = (ulong)(uint)(iVar2 - iVar3);
        if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar3);
        param_4 = param_1;
        func_0x000107c303e4(param_1,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar2);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x20;
}



/* Entry: 10922b704; end: 10922b78f;  */

long FUN_10922b704(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010922c8e0();
  if (extraout_x8 < 0) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_10922b730;
LAB_10922b71c:
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  else {
    if (extraout_x8 != 0) goto LAB_10922b71c;
LAB_10922b730:
    param_1 = 0;
  }
  if (*(int *)(unaff_x19 + 0x24) == 3) {
    FUN_10922b790(*(undefined8 *)(unaff_x19 + 0x18));
  }
  else {
    if (*(int *)(unaff_x19 + 0x24) != 2) goto LAB_10922b764;
    func_0x000107c282a0(*(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc);
  }
  func_0x00010922c9a8();
LAB_10922b764:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010922c924();
    lVar1 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = lVar1 + param_1;
  }
  *(int *)(unaff_x19 + 0x20) = (int)param_1;
  return param_1;
}



/* Entry: 10922b790; end: 10922b7ab;  */

long FUN_10922b790(long param_1)

{
  long extraout_x8;
  
  FUN_10922b348();
  func_0x00010922c784();
  return param_1 + extraout_x8;
}



/* Entry: 10922b7ac; end: 10922b8c7;  */

void FUN_10922b7ac(ulong *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x00010922c904();
  puVar5 = (ulong *)param_1[1];
  puVar4 = puVar5;
  if (((ulong)puVar5 & 1) != 0) {
    puVar4 = *(ulong **)((ulong)puVar5 & 0xfffffffffffffffe);
  }
  func_0x00010922c974(*(undefined8 *)(unaff_x20 + 0x10));
  lVar6 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar6 = *(long *)(param_2 + 8);
  }
  if (lVar6 != 0) {
    if (((ulong)puVar5 & 1) != 0) {
      func_0x00010922c958();
    }
    param_1 = unaff_x21 + 2;
    func_0x000107c30248();
  }
  iVar2 = *(int *)(unaff_x20 + 0x24);
  if (iVar2 != 0) {
    iVar3 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        FUN_10922b52c();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar2;
    }
    if (iVar2 == 3) {
      if (iVar3 == 3) {
        param_1 = (ulong *)unaff_x21[3];
        FUN_10922b414();
      }
      else {
        func_0x00010922c660();
        unaff_x21[3] = (ulong)puVar4;
        param_1 = puVar4;
      }
    }
    else if (iVar2 == 2) {
      if (iVar3 != 2) {
        unaff_x21[3] = (ulong)&DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc);
      if (*(int *)(unaff_x20 + 0x24) != 2) {
        puVar1 = &DAT_11383d918;
      }
      param_1 = unaff_x21 + 3;
      func_0x000107c30248(param_1,puVar1,puVar4);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010922c998();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10922b8c8; end: 10922b8f3;  */

undefined8 FUN_10922b8c8(undefined8 param_1)

{
  func_0x00010922c8ac();
  FUN_10922b8f4(param_1);
  return param_1;
}



/* Entry: 10922b8f4; end: 10922b917;  */

/* WARNING: Possible PIC construction at 0x00010922b904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010922b908) */

void FUN_10922b8f4(ulong *param_1)

{
  ulong uVar1;
  
  func_0x00010922c8b4();
  uVar1 = *param_1 ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 10922b918; end: 10922b91b;  */

undefined8 FUN_10922b918(undefined8 param_1)

{
  func_0x00010922c8ac();
  FUN_10922b8f4(param_1);
  return param_1;
}



/* Entry: 10922b91c; end: 10922b92f;  */

void FUN_10922b91c(void)

{
  FUN_10922b8c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10922b930; end: 10922b93b;  */

undefined ** FUN_10922b930(void)

{
  return &PTR_DAT_110ae1f40;
}



/* Entry: 10922b93c; end: 10922b973;  */

void FUN_10922b93c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010922c8b4();
  func_0x000107c3025c();
  func_0x000107c3025c(unaff_x19 + 0x18);
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10922b974; end: 10922ba2f;  */

long * FUN_10922b974(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x00010922c7d4();
  if (param_2 < 0) {
    param_2 = 0;
    if (unaff_x22[1] != 0) goto LAB_10922b9a4;
  }
  else if ((int)param_2 != 0) {
LAB_10922b9a4:
    param_4 = (long *)&UNK_10f55e0bf;
    func_0x00010922c824();
    param_2 = 1;
    func_0x00010922c778();
    param_1 = unaff_x19;
    unaff_x20 = unaff_x19;
  }
  func_0x00010922c890(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10922b9fc;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10922b9fc;
  param_4 = (long *)&UNK_10f55e0f8;
  func_0x00010922c824();
  func_0x00010922c9e8();
  func_0x00010922c778();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10922b9fc:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x00010922c930();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x00010922c9b4();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 10922ba30; end: 10922baab;  */

long FUN_10922ba30(long param_1)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  long extraout_x9;
  long unaff_x19;
  
  func_0x00010922c8e0();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c282a0();
    param_1 = param_1 + 1;
  }
  uVar1 = *(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc;
  lVar2 = (long)*(char *)(uVar1 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(uVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    func_0x00010922c9a8();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010922c924();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    param_1 = lVar2 + param_1;
  }
  *(int *)(unaff_x19 + 0x20) = (int)param_1;
  return param_1;
}



/* Entry: 10922baac; end: 10922baaf;  */

void FUN_10922baac(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010922c910();
  func_0x00010922c974(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010922c958();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  func_0x00010922c974(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010922c958();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010922c8f4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10922bab0; end: 10922bb93;  */

void FUN_10922bab0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010922c910();
  func_0x00010922c974(*(undefined8 *)(param_2 + 0x10));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010922c958();
    }
    param_1 = (ulong *)(unaff_x19 + 0x10);
    func_0x000107c30248();
  }
  func_0x00010922c974(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x00010922c958();
    }
    param_1 = (ulong *)(unaff_x19 + 0x18);
    func_0x000107c30248();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010922c8f4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10922bb94; end: 10922bc1f;  */

void FUN_10922bb94(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  lVar2 = param_3;
  func_0x00010922c910();
  *(undefined8 *)(param_1 + 8) = param_2;
  *unaff_x19 = &PTR_FUN_110ae1d68;
  if ((*(ulong *)(lVar2 + 8) & 1) != 0) {
    func_0x00010922c878();
  }
  FUN_10922c374(unaff_x19 + 2);
  *(undefined4 *)(unaff_x19 + 6) = 0;
  iVar1 = *(int *)(param_3 + 0x34);
  *(int *)((long)unaff_x19 + 0x34) = iVar1;
  if (iVar1 == 2) {
    unaff_x20 = param_3 + 0x28;
    func_0x000107c2809c();
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    func_0x00010922c704();
  }
  unaff_x19[5] = unaff_x20;
  return;
}



/* Entry: 10922bc20; end: 10922bc4b;  */

undefined8 FUN_10922bc20(undefined8 param_1)

{
  func_0x00010922c8ac();
  FUN_10922bc4c(param_1);
  return param_1;
}



/* Entry: 10922bc4c; end: 10922bc7b;  */

long * FUN_10922bc4c(long param_1)

{
  long *plVar1;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    func_0x00010922bb2c(param_1);
  }
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    func_0x000107c303ac(plVar1);
  }
  return plVar1;
}



/* Entry: 10922bc7c; end: 10922bc7f;  */

undefined8 FUN_10922bc7c(undefined8 param_1)

{
  func_0x00010922c8ac();
  FUN_10922bc4c(param_1);
  return param_1;
}


