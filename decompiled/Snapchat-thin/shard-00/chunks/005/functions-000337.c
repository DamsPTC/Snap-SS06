/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100709874; end: 1007098af; -[SCCameraHealthMonitor _cancelSessionRunningMonitoring] */

void FUN_100709874(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c60f80();
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1007098b0; end: 1007099fb; -[SCManagedVideoStreamer _performCompletionHandlersForWaitUntilSampleBufferDisplayed] */

void FUN_1007098b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar8;
  long lVar9;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar7 = *(long *)(param_1 + 0x50);
  func_0x000107c61174(lVar7);
  uVar5 = SUB81(auStack_d8,0);
  uVar6 = 0x10;
  lVar1 = lVar7;
  func_0x000107c4080c();
  if (lVar1 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          func_0x000107c61128(lVar7);
        }
        unaff_x22 = *(undefined8 *)(lStack_118 + lVar9 * 8);
        uVar2 = unaff_x22;
        func_0x000107c4d9a4(unaff_x22);
        func_0x000107c61180();
        func_0x000107c4d9a4();
        func_0x000107c61180();
        FUN_10007380c(uVar2,unaff_x22);
        func_0x000107c61170(unaff_x22);
        func_0x000107c61170(uVar2);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      uVar5 = SUB81(auStack_d8,0);
      uVar6 = 0x10;
      lVar1 = lVar7;
      puVar4 = &uStack_120;
      func_0x000107c4080c();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  func_0x000107c61170(lVar7);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c4fe7c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  puVar3 = &uStack_160;
  pcStack_128 = FUN_1007099fc;
  puStack_158 = PTR_PTR_112704488;
  uStack_160 = uVar2;
  uStack_150 = unaff_x22;
  uStack_148 = unaff_x21;
  lStack_140 = lVar7;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x000107c61154(&uStack_160,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)((long)puVar3 + 0x10) = puVar4;
    *(undefined1 *)((long)puVar3 + 8) = uVar5;
    *(undefined1 *)((long)puVar3 + 9) = uVar6;
  }
  return;
}



/* Entry: 1007099fc; end: 100709a5b; -[SCSampleBufferRef initWithSampleBuffer:isProcessedPhoto:isRecordingVideo:] */

void FUN_1007099fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112704488;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  return;
}



/* Entry: 100709a5c; end: 100709adf; +[SCManagedVideoDataSourceOutputEvent didOutputSampleBufferWithSampleBuffer:sampleTimestamp:devicePosition:] */

void FUN_100709a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126cd5b8;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  func_0x000107c61170(uVar3);
  uVar4 = *param_4;
  uVar3 = param_4[2];
  *(undefined8 *)(puVar2 + 0x20) = param_4[1];
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  *(undefined8 *)(puVar2 + 0x28) = uVar3;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100709ae0; end: 100709b23; -[SCManagedVideoDataSourceOutputEvent internalInit] */

void FUN_100709ae0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_112704490;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100709b24; end: 100709bcb; -[SCCameraFrameObservableDecorator next:] */

void FUN_100709b24(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = param_1;
  func_0x000107c3c964(param_1,param_2,2);
  func_0x000107c61180();
  func_0x000107c4d664();
  func_0x000107c61170(uVar1);
  uVar1 = param_1;
  func_0x000107c49af8(param_1);
  uVar2 = param_1;
  func_0x000107c3c964(param_1,param_2,uVar1 & 0xffffffff);
  func_0x000107c61180();
  func_0x000107c4d664();
  func_0x000107c61170(uVar2);
  func_0x000107c3b0d0(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100709bcc; end: 100709c37;  */

/* WARNING: Possible PIC construction at 0x000100709c20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100709c24) */

void FUN_100709bcc(double param_1,long param_2,undefined8 param_3)

{
  double dVar1;
  
  func_0x000107c61174(param_3);
  param_2 = param_2 + 0x20;
  func_0x000107c61148();
  if (param_2 != 0) {
    func_0x000107c6071c();
    dVar1 = param_1;
    func_0x000107c4d664(*(undefined8 *)(param_2 + 0x10));
    func_0x000107c6071c();
    *(double *)(param_2 + 0x18) = dVar1 - param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100709c38; end: 100709ce3;  */

void FUN_100709c38(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c6111c(auStack_38,param_1 + 0x20);
  func_0x000107c4c5e8(param_2);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100709ce4; end: 100709daf; -[SCManagedVideoDataSourceOutputEvent matchDidOutputSampleBuffer:didDeliverSecondarySampleBuffer:didOutputSecondarySampleBuffer:] */

void FUN_100709ce4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_100709d84;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  else {
    if (lVar1 != 1) {
      if ((lVar1 == 0) && (param_3 != 0)) {
        uStack_48 = *(undefined8 *)(param_1 + 0x20);
        uStack_50 = *(undefined8 *)(param_1 + 0x18);
        uStack_40 = *(undefined8 *)(param_1 + 0x28);
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),&uStack_50,
                   *(undefined8 *)(param_1 + 0x30));
      }
      goto LAB_100709d84;
    }
    if (param_4 == 0) goto LAB_100709d84;
    pcVar2 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
  }
  (*pcVar2)(lVar1);
LAB_100709d84:
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100709db0; end: 100709e43;  */

void FUN_100709db0(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c515d4(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c3b4f4(param_1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100709e44; end: 100709e4b; -[SCSampleBufferRef sampleBuffer] */

undefined8 FUN_100709e44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100709e4c; end: 100709e93;  */

/* WARNING: Possible PIC construction at 0x00010070a114: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010070a118) */

void FUN_100709e4c(uint param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  
  if ((param_2 != 0) &&
     (func_0x000107c60a0c(param_2,*(undefined8 *)PTR__kCGImagePropertyExifDictionary_110349cd0,0),
     param_2 != 0)) {
    if (param_2 != 0) {
      lVar1 = param_2;
      FUN_100709ff8();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c436dc(lVar1);
        param_3[1] = param_1;
      }
      lVar1 = param_2;
      FUN_10070a138();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c49820();
        *param_3 = (int)lVar1;
      }
      func_0x00010070a1f0();
      func_0x000107c61180();
      if (param_2 != 0) {
        func_0x000107c436dc(param_2);
        if (0x7f7fffff < (param_1 & 0x7fffffff)) {
          param_1 = 0;
        }
        param_3[2] = param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_2);
      return;
    }
    return;
  }
  return;
}



/* Entry: 100709e94; end: 100709ff7; -[SCManagedDeviceCapacityAnalyzerImpl _didReceiveManagedVideoDataSourceEvent:sampleTimestamp:devicePosition:] */

/* WARNING: Possible PIC construction at 0x000100709f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100709f40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100709f04) */
/* WARNING: Removing unreachable block (ram,0x000100709f44) */
/* WARNING: Removing unreachable block (ram,0x000100709f80) */
/* WARNING: Removing unreachable block (ram,0x000100709f8c) */
/* WARNING: Removing unreachable block (ram,0x000100709f9c) */

void FUN_100709e94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_5c [4];
  ulong uStack_58;
  
  uStack_58 = (ulong)*(uint *)(param_1 + 0x10);
  FUN_100709e4c(param_3,auStack_5c);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c42c40();
  func_0x000107c61180();
  func_0x000107c40f4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100709ff8; end: 10070a073;  */

void FUN_100709ff8(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c60794(param_1,*(undefined8 *)PTR__kCGImagePropertyExifExposureTime_110349cd8);
    func_0x000107c61180();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c61158(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar2 = param_1;
    func_0x000107c6115c(param_1,puVar1);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      func_0x000107c61174(param_1);
      uVar2 = param_1;
    }
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10070a074; end: 10070a137;  */

/* WARNING: Possible PIC construction at 0x00010070a114: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010070a118) */

void FUN_10070a074(uint param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = param_2;
    FUN_100709ff8();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c436dc(lVar1);
      param_3[1] = param_1;
    }
    lVar1 = param_2;
    FUN_10070a138();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c49820();
      *param_3 = (int)lVar1;
    }
    func_0x00010070a1f0();
    func_0x000107c61180();
    if (param_2 != 0) {
      func_0x000107c436dc(param_2);
      if (0x7f7fffff < (param_1 & 0x7fffffff)) {
        param_1 = 0;
      }
      param_3[2] = param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10070a138; end: 10070a26b;  */

void FUN_10070a138(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    uVar3 = 0;
    goto LAB_10070a1e0;
  }
  func_0x000107c60794(param_1,*(undefined8 *)PTR__kCGImagePropertyExifISOSpeedRatings_110349ce0);
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c61164();
  if ((((uVar3 & 1) == 0) ||
      (uVar3 = param_1, func_0x000107c61164(param_1,PTR_s_firstObject_1125c9ff0), (uVar3 & 1) == 0))
     || (uVar3 = param_1, func_0x000107c40808(), uVar3 == 0)) {
LAB_10070a1cc:
    uVar3 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x000107c43638();
    func_0x000107c61180();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c61158(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar2 = uVar3;
    func_0x000107c6115c(uVar3,puVar1);
    if ((uVar2 & 1) == 0) {
      func_0x000107c61170(uVar3);
      goto LAB_10070a1cc;
    }
  }
  func_0x000107c61170(param_1);
LAB_10070a1e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10070a26c; end: 10070a327; -[_TtC26SCCaptureDeviceManagerImpl32CaptureDeviceExposureHandlerImpl currentISOForDeviceAtPosition:] */

undefined8
FUN_10070a26c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  func_0x00010070a2b0(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10070a328; end: 10070a337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10070a328(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc1770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112da1120),PTR_s_ISO_11254df78);
  return;
}



/* Entry: 10070a338; end: 10070a443; -[_TtC26SCCaptureDeviceManagerImpl32CaptureDeviceExposureHandlerImpl maxISOForDeviceAtPosition:] */

undefined8
FUN_10070a338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  func_0x00010070a37c(param_4);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 10070a444; end: 10070a52b; -[SCManagedDeviceCapacityAnalyzerImpl _automaticallyDetectAdjustingExposure:ISOSpeedRating:] */

void FUN_10070a444(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  fVar4 = (float)param_1;
  if (param_2 == *(double *)(param_3 + 0x18)) {
    fVar4 = ABS(fVar4 - *(float *)(param_3 + 0x10));
    uVar5 = 0;
    if (fVar4 <= 1.1754944e-38) {
      *(long *)(param_3 + 0x38) = *(long *)(param_3 + 0x38) + 1;
      goto LAB_10070a47c;
    }
  }
  *(undefined8 *)(param_3 + 0x38) = 0;
LAB_10070a47c:
  func_0x000107c6071c();
  if ((4 < *(long *)(param_3 + 0x38)) ||
     ((0 < *(long *)(param_3 + 0x38) &&
      (0.2 < (double)CONCAT44(uVar5,fVar4) - *(double *)(param_3 + 0x20))))) {
    if (*(char *)(param_3 + 0x69) != '\x01') {
      return;
    }
    uVar2 = 0;
    *(undefined1 *)(param_3 + 0x69) = 0;
  }
  else {
    if ((*(byte *)(param_3 + 0x69) & 1) != 0) {
      return;
    }
    uVar2 = 1;
    *(undefined1 *)(param_3 + 0x69) = 1;
    *(ulong *)(param_3 + 0x20) = CONCAT44(uVar5,fVar4);
  }
  uVar3 = *(undefined8 *)(param_3 + 0x80);
  puVar1 = PTR_PTR_1126b9df8;
  func_0x000107c41a2c(PTR_PTR_1126b9df8,param_4,uVar2);
  func_0x000107c61180();
  func_0x000107c4d664(uVar3,param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10070a52c; end: 10070a5c3; +[SCManagedDeviceCapacityAnalyzerEvent didChangeAdjustingExposureWithAdjustingExposure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10070a52c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar3 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_113076408) = 1;
  *(undefined1 *)(lVar3 + _DAT_113076410) = 2;
  *(undefined1 *)(lVar3 + _DAT_113076418) = param_3;
  puVar1 = (undefined4 *)(lVar3 + _DAT_113076420);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar2 = (undefined8 *)(lVar3 + _DAT_113076428);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  lStack_30 = lVar3;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10070a5c4; end: 10070a6f7;  */

void FUN_10070a5c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  puStack_68 = &UNK_1054ce350;
  puStack_60 = &UNK_110849200;
  func_0x000107c6111c(auStack_58,param_1 + 0x20);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10070a864;
  puStack_88 = &UNK_110849200;
  func_0x000107c6111c(auStack_80,param_1 + 0x20);
  func_0x000107c6111c(auStack_a8,param_1 + 0x20);
  func_0x000107c4c5dc(param_2);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10070a6f8; end: 10070a84b; -[SCManagedDeviceCapacityAnalyzerEvent matchDidChangeLowLightCondition:didChangeAdjustingExposure:didChangeBrightness:didChangeLightingCondition:] */

void FUN_10070a6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  func_0x00010070a76c(0x10070a850,auStack_40,FUN_10070a84c,auStack_60,FUN_10070ab68,auStack_80,
                      &UNK_1043ebdcc,auStack_a0);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10070a84c; end: 10070a863;  */

void FUN_10070a84c(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010070a860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 10070a864; end: 10070a897;  */

void FUN_10070a864(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3b490();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10070a898; end: 10070a92f; -[SCManagedDeviceCapacityAnalyzerHandler _didChangeAdjustingExposure:] */

void FUN_10070a898(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c4f7e8();
  func_0x000107c61180();
  func_0x000107c4e524();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10070a930; end: 10070a957; -[SCManagedDeviceCapacityAnalyzerImpl _computeMovingAverageBrightnessWithLatestBrightnessValue:] */

void FUN_10070a930(float param_1,long param_2)

{
  *(double *)(param_2 + 0x70) = *(double *)(param_2 + 0x70) * 0.7 + (double)param_1 * 0.3;
  return;
}



/* Entry: 10070a958; end: 10070aac7; -[SCManagedDeviceCapacityAnalyzerImpl _automaticallyDetectLightingConditionWithBrightness:] */

void FUN_10070a958(float param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (0.0 <= param_1) {
    if (*(long *)(param_2 + 0x40) < 0x10) {
      *(long *)(param_2 + 0x40) = *(long *)(param_2 + 0x40) + 1;
    }
    else if (*(long *)(param_2 + 0x60) != 0) {
      *(undefined8 *)(param_2 + 0x60) = 0;
      uVar2 = *(undefined8 *)(param_2 + 0x80);
      puVar1 = PTR_PTR_1126b9df8;
      func_0x000107c41a5c(PTR_PTR_1126b9df8,param_3,0);
      func_0x000107c61180();
      func_0x000107c4d664(uVar2,param_3,puVar1);
      func_0x000107c61170(puVar1);
    }
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  else {
    if (-3.0 <= param_1) {
      if (*(long *)(param_2 + 0x48) < 0x10) {
        *(long *)(param_2 + 0x48) = *(long *)(param_2 + 0x48) + 1;
      }
      else if (*(long *)(param_2 + 0x60) != 1) {
        *(undefined8 *)(param_2 + 0x60) = 1;
        uVar2 = *(undefined8 *)(param_2 + 0x80);
        puVar1 = PTR_PTR_1126b9df8;
        func_0x000107c41a5c(PTR_PTR_1126b9df8,param_3,1);
        func_0x000107c61180();
        func_0x000107c4d664(uVar2,param_3,puVar1);
        func_0x000107c61170(puVar1);
      }
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x58) = 0;
    }
    else {
      if (*(long *)(param_2 + 0x58) < 0x10) {
        *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x58) + 1;
      }
      else if (*(long *)(param_2 + 0x60) != 3) {
        *(undefined8 *)(param_2 + 0x60) = 3;
        uVar2 = *(undefined8 *)(param_2 + 0x80);
        puVar1 = PTR_PTR_1126b9df8;
        func_0x000107c41a5c(PTR_PTR_1126b9df8,param_3,3);
        func_0x000107c61180();
        func_0x000107c4d664(uVar2,param_3,puVar1);
        func_0x000107c61170(puVar1);
      }
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
    }
    *(undefined8 *)(param_2 + 0x50) = 0;
  }
  return;
}



/* Entry: 10070aac8; end: 10070ab67; +[SCManagedDeviceCapacityAnalyzerEvent didChangeBrightnessWithAdjustingBrightness:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10070aac8(undefined4 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c614ec();
  lVar3 = param_2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_113076408) = 2;
  *(undefined1 *)(lVar3 + _DAT_113076410) = 2;
  *(undefined1 *)(lVar3 + _DAT_113076418) = 2;
  puVar1 = (undefined4 *)(lVar3 + _DAT_113076420);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar2 = (undefined8 *)(lVar3 + _DAT_113076428);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  lStack_40 = lVar3;
  lStack_38 = param_2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10070ab68; end: 10070ab77;  */

void FUN_10070ab68(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010070ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10070ab78; end: 10070ab7f; -[SCCameraFrameObservableDecorator isCameraHardwareRequestHandlerBusy] */

undefined1 FUN_10070ab78(long param_1)

{
  return *(undefined1 *)(param_1 + 0x44);
}



/* Entry: 10070ab80; end: 10070ad53; -[SCCameraFrameObservableDecorator _componentFrameProcessingTimes] */

void FUN_10070ab80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x000107c61180();
  func_0x000107c611ec(param_1 + 0x40);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar6 = *(long *)(param_1 + 0x38);
  func_0x000107c61174(lVar6);
  lVar2 = lVar6;
  func_0x000107c4080c(lVar6,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          func_0x000107c61128(lVar6);
        }
        lVar7 = *(long *)(lStack_128 + lVar9 * 8);
        lVar3 = lVar7;
        func_0x000107c4dac0();
        func_0x000107c61180();
        lVar4 = lVar3;
        func_0x000107c61158();
        func_0x000107c60b14();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
        func_0x000107c4adac();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar3 != 0) {
          func_0x000107c438fc(lVar7);
          func_0x000107c4d954(puVar5);
          func_0x000107c61180();
          func_0x000107c56bd8(puVar1,param_2,puVar5,lVar4);
          func_0x000107c61170(puVar5);
        }
        func_0x000107c61170(lVar4);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar6;
      func_0x000107c4080c(lVar6,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  func_0x000107c61170(lVar6);
  lVar2 = param_1 + 0x40;
  func_0x000107c611f0(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    func_0x000107c611f0(param_1 + 0x40);
    func_0x000107c60bd8(lVar2);
    func_0x000107c61148(lVar2 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10070ad54; end: 10070ad6b; -[SCCameraFrameProxyObserver observer] */

void FUN_10070ad54(long param_1)

{
  func_0x000107c61148(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10070ad6c; end: 10070ad7f; -[SCCameraFrameProxyObserver frameProcessingDurationMs] */

double FUN_10070ad6c(long param_1)

{
  return *(double *)(param_1 + 0x18) * 1000.0;
}



/* Entry: 10070ad80; end: 10070ad8b; -[SCManagedVideoDataSourceOutputEvent .cxx_destruct] */

void FUN_10070ad80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10070ad8c; end: 10070add7; -[SCCameraVideoStreamStabilityMonitorImpl sampleBufferProcessed:] */

/* WARNING: Possible PIC construction at 0x00010070adc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010070adc4) */

void FUN_10070ad8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10070add8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10070add8; end: 10070aeab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10070add8(double param_1)

{
  long lVar1;
  long unaff_x20;
  double dVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c6071c();
  FUN_10006c804();
  if (*(char *)(unaff_x20 + _DAT_112ed69e8) == '\x01') {
    lVar1 = unaff_x20 + _DAT_112ed69e0;
    func_0x000107c61428(lVar1,auStack_48,1,0);
    *(double *)(lVar1 + 0x78) = param_1;
    param_1 = param_1 - *(double *)(lVar1 + 0x70);
    if (*(double *)(lVar1 + 0x38) == 0.0) {
      *(double *)(lVar1 + 0x38) = param_1;
    }
    dVar2 = *(double *)(lVar1 + 0x20);
    if (*(double *)(lVar1 + 0x20) < param_1) {
      dVar2 = param_1;
    }
    *(double *)(lVar1 + 0x20) = dVar2;
    func_0x000107c3d93c(param_1,*(undefined8 *)(lVar1 + 8));
    *(undefined8 *)(lVar1 + 0x28) = 0;
    if (*(double *)(lVar1 + 0x40) < param_1) {
      *(double *)(lVar1 + 0x18) = *(double *)(lVar1 + 0x18) + 1.0;
    }
  }
  FUN_100070bfc();
  return;
}



/* Entry: 10070aeac; end: 10070af1b; -[SCRuntimeStatistics addValue:] */

void FUN_10070aeac(double param_1,long param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  func_0x000107c611ec(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0xc) + 1;
  dVar3 = param_1 - *(double *)(param_2 + 0x18);
  dVar2 = *(double *)(param_2 + 0x18) + dVar3 / (double)iVar1;
  *(int *)(param_2 + 0xc) = iVar1;
  *(double *)(param_2 + 0x10) = param_1 + *(double *)(param_2 + 0x10);
  *(double *)(param_2 + 0x18) = dVar2;
  param_1 = param_1 - dVar2;
  *(double *)(param_2 + 0x28) = dVar3;
  *(double *)(param_2 + 0x30) = param_1;
  *(double *)(param_2 + 0x20) = *(double *)(param_2 + 0x20) + param_1 * dVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 8);
  return;
}



/* Entry: 10070af1c; end: 10070b1a3; -[SCFrameProcessLatencyReporterImpl didProcessFrameBuffer:receivedTime:componentFrameProcessingTimes:] */

void FUN_10070af1c(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar12 = param_1;
  func_0x000107c61174(param_5);
  func_0x000107c6071c();
  func_0x000107c611ec(param_3 + 0xd0);
  if (*(char *)(param_3 + 0xa0) == '\x01') {
    *(long *)(param_3 + 0x20) = *(long *)(param_3 + 0x20) + 1;
    if (*(double *)(param_3 + 0x50) < param_2 - param_1) {
      *(double *)(param_3 + 0x50) = param_2 - param_1;
    }
    if (0.0 < *(double *)(param_3 + 0x48)) {
      dVar10 = param_1 - *(double *)(param_3 + 0x48);
      if (*(double *)(param_3 + 0x58) < dVar10) {
        *(double *)(param_3 + 0x58) = dVar10;
      }
      if (0x50 < (ulong)(long)(dVar10 * 1000.0)) {
        *(double *)(param_3 + 0x80) = dVar10 + *(double *)(param_3 + 0x80);
        *(long *)(param_3 + 0x38) = *(long *)(param_3 + 0x38) + 1;
        if (700 < (ulong)(long)(dVar10 * 1000.0)) {
          auVar11 = NEON_fmov(0x3ff0000000000000,8);
          *(double *)(param_3 + 0x90) = auVar11._8_8_ + *(double *)(param_3 + 0x90);
          *(double *)(param_3 + 0x88) = dVar10 + *(double *)(param_3 + 0x88);
        }
      }
    }
    *(double *)(param_3 + 0x48) = param_1;
    dVar12 = dVar12 - param_2;
    if (*(double *)(param_3 + 0x70) < dVar12) {
      *(double *)(param_3 + 0x70) = dVar12;
    }
    dVar10 = 0.0;
    func_0x000107c61174(param_5);
    lVar2 = param_5;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        fVar8 = SUB84(dVar10,0);
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(param_5);
        }
        lVar3 = param_5;
        func_0x000107c4d9e8(param_5);
        func_0x000107c61180();
        func_0x000107c436dc();
        fVar9 = fVar8;
        func_0x000107c61170(lVar3);
        uVar4 = *(undefined8 *)(param_3 + 0x98);
        func_0x000107c4d9e8(uVar4);
        func_0x000107c61180();
        func_0x000107c436dc();
        func_0x000107c61170(uVar4);
        if (fVar9 <= fVar8) {
          fVar9 = fVar8;
        }
        dVar10 = (double)fVar9;
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c4d954(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c61180();
        func_0x000107c56bd8(*(undefined8 *)(param_3 + 0x98));
        func_0x000107c61170(puVar5);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_5;
      func_0x000107c4080c();
    }
    func_0x000107c61170(param_5);
    *(double *)(param_3 + 0x78) = dVar12 + *(double *)(param_3 + 0x78);
  }
  func_0x000107c611f0(param_3 + 0xd0);
  func_0x000107c61170(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_5 + 0x18,0);
  return;
}



/* Entry: 10070b1a4; end: 10070b1af; -[SCSampleBufferImpl .cxx_destruct] */

void FUN_10070b1a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10070b1b0; end: 10070b1f3;  */

long FUN_10070b1b0(long param_1)

{
  func_0x000100206f0c(param_1 + 0x1b8);
  func_0x000100204700(param_1 + 0x1b0);
  func_0x000107c60ca0(param_1 + 0x198);
  FUN_10070be90(param_1 + 200);
  FUN_10070be90(param_1 + 8);
  return param_1;
}



/* Entry: 10070b1f4; end: 10070b267; -[SCCommerceOperaServices initWithShowcaseLayerViewControllerProvider:] */

undefined1 * FUN_10070b1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fae68;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10070b268; end: 10070b2db;  */

void FUN_10070b268(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10070b2dc; end: 10070b2e3;  */

void FUN_10070b2dc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10070b2e4; end: 10070b337;  */

void FUN_10070b2e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10070b338; end: 10070b34b;  */

void FUN_10070b338(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1002bc8fc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  *(undefined8 *)(lVar2 + 0x38) = uStack_88;
  *(undefined8 *)(lVar2 + 0x40) = uStack_90;
  *(undefined8 *)(lVar2 + 0x48) = uStack_98;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174();
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar7 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar8 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar9 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = PTR_PTR_1126a9678;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar11 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  uVar12 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0157d0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efc3050);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar12);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  lVar13 = *(long *)(lVar2 + 0x18);
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  uVar11 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0157f0);
  func_0x000107c5a49c(uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(uVar12);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar13 != 0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(long *)(lVar2 + 0x50) = lVar13;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10070b82c);
  (*pcVar1)();
}



/* Entry: 10070b34c; end: 10070b82b;  */

void FUN_10070b34c(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_1002bc8fc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a9678;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar10 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0157d0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efc3050);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar11);
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  lVar12 = *(long *)(param_2 + 0x18);
  func_0x000107c61174(uVar11);
  func_0x000107c61174();
  uVar10 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0157f0);
  func_0x000107c5a49c(uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar10);
  func_0x000107c3e740(uVar11);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 != 0) {
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(long *)(param_2 + 0x50) = lVar12;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10070b82c);
  (*pcVar1)();
}



/* Entry: 10070b82c; end: 10070bae7; -[SCPlaybackLegacyHLSServiceEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10070b82c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720);
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126bfe68;
  func_0x000107c610f4(PTR_PTR_1126bfe68);
  func_0x000107c47160();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11272be9c));
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 10070bae8; end: 10070bc3b; -[SCPlaybackLegacyHLSService initWithLegacyLongformMediaFetcher:legacyMediaFetcher:legacyMediaUrlProvider:legacyLongformMediaUrlProvider:legacyMediaCacheManager:legacyRequestHandler:] */

undefined1 *
FUN_10070bae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_112705020;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10070bc3c; end: 10070bc8f;  */

void FUN_10070bc3c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10070bc90; end: 10070bc97;  */

void FUN_10070bc90(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10070bc98; end: 10070bceb;  */

void FUN_10070bc98(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10070bcec; end: 10070bcf3;  */

void FUN_10070bcec(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_1001d6fd0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_10070be14(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_10070bee8();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_10070bef4();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 10070bcf4; end: 10070bdd7;  */

void FUN_10070bcf4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1001d6fd0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_10070be14(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_10070bee8();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_10070bef4();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 10070bdd8; end: 10070be13;  */

void FUN_10070bdd8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001002045d4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x000100204700();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10070be14; end: 10070be8f;  */

void FUN_10070be14(undefined8 param_1)

{
  if (lRam0000000112dcf8c0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e656468);
  return;
}



/* Entry: 10070be90; end: 10070bee7;  */

/* WARNING: Possible PIC construction at 0x00010070bec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010070bed4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010070bec8) */
/* WARNING: Removing unreachable block (ram,0x00010070bed8) */

void FUN_10070be90(long param_1)

{
  func_0x00010014c5e8(param_1 + 0xa8);
  func_0x00010014c5e8(param_1 + 0x90);
  func_0x00010014c5e8(param_1 + 0x78);
  func_0x00010014c5e8(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x48);
  return;
}



/* Entry: 10070bee8; end: 10070bef3;  */

void FUN_10070bee8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10070bef4; end: 10070c11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10070bef4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_11304a478);
  FUN_1000285a8(0x112dcf878,&UNK_10d991360);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar6);
  puVar1 = &UNK_1018d3d5c;
  FUN_1000bdd8c(&UNK_1018d3d5c,0);
  puVar2 = puVar1;
  FUN_1003a5b88();
  func_0x000107c61574(puVar1);
  FUN_1000285a8(0x112dcf880,&UNK_10d991368);
  func_0x000107c613fc();
  puVar1 = &UNK_1018d3d8c;
  FUN_1000bdd8c(&UNK_1018d3d8c,0);
  puVar3 = puVar1;
  FUN_1003a5b88();
  func_0x000107c61574(puVar1);
  FUN_1000285a8(0x112dcf888,&UNK_10d991370);
  func_0x000107c613fc();
  puVar1 = &UNK_1018d3dbc;
  FUN_1000bdd8c(&UNK_1018d3dbc,0);
  puVar4 = puVar1;
  FUN_1003a5b88();
  func_0x000107c61574(puVar1);
  FUN_1000285a8(0x112dcf890,&UNK_10d991378);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar6);
  puVar1 = &UNK_1018d3eb8;
  FUN_1000bdd8c(&UNK_1018d3eb8,uVar6);
  puVar5 = puVar1;
  FUN_1000bf56c();
  func_0x000107c61574(puVar1);
  FUN_1001d705c(0);
  func_0x000107c610f8();
  func_0x00010070c094(puVar2,puVar3,puVar4,puVar5);
  func_0x000107c61574(uVar6);
  return puVar2;
}



/* Entry: 10070c120; end: 10070c14b;  */

void FUN_10070c120(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10070c14c; end: 10070c153;  */

void FUN_10070c14c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x88);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10070c154; end: 10070c1a7;  */

void FUN_10070c154(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x88);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10070c1a8; end: 10070cad3;  */

void FUN_10070c1a8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100366314();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  puVar1 = PTR_PTR_1126ac240;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174(uStack_c8);
  uVar13 = uStack_d0;
  func_0x000107c61174(uStack_d0);
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar16 = auStack_70[0];
  func_0x000107c61174();
  uVar19 = 0xd000000000000013;
  uVar17 = uVar19;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar17 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f108500);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar17 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f052240);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar17);
  uVar18 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efbb870);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef10e10);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efbb850);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f05bfd0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010effdd20);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar19);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f00acf0);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2a580);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar17);
  func_0x000107c61174(uVar15);
  func_0x000107c61174();
  uVar17 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar18);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  uVar17 = uVar18;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  *(undefined8 *)(param_2 + 0x88) = uVar17;
  *param_1 = param_2;
  return;
}



/* Entry: 10070cad4; end: 10070cb17;  */

void FUN_10070cad4(void)

{
  long unaff_x20;
  
  FUN_10070c1a8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 10070cb18; end: 10070cb1f;  */

void FUN_10070cb18(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xd0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10070cb20; end: 10070cb73;  */

void FUN_10070cb20(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xd0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10070cb74; end: 10070da3b;  */

void FUN_10070cb74(long *param_1,long param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_100083b20(&uStack_128);
  FUN_1002bb184();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  *(undefined8 *)(param_2 + 0x80) = uStack_d8;
  *(undefined8 *)(param_2 + 0x88) = uStack_e0;
  *(undefined8 *)(param_2 + 0x90) = uStack_e8;
  *(undefined8 *)(param_2 + 0x98) = uStack_f0;
  *(undefined8 *)(param_2 + 0xa0) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa8) = uStack_100;
  *(undefined8 *)(param_2 + 0xb0) = uStack_108;
  *(undefined8 *)(param_2 + 0xb8) = uStack_110;
  *(undefined8 *)(param_2 + 0xc0) = uStack_118;
  *(undefined8 *)(param_2 + 200) = uStack_120;
  FUN_1000285a8(0x112e0eaf8,&UNK_10d9e9818);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar16 = uStack_d8;
  func_0x000107c61174();
  uVar17 = uStack_e0;
  func_0x000107c61174();
  uVar18 = uStack_e8;
  func_0x000107c61174();
  uVar19 = uStack_f0;
  func_0x000107c61174();
  uVar20 = uStack_f8;
  func_0x000107c61174();
  uVar21 = uStack_100;
  func_0x000107c61174();
  uVar22 = uStack_108;
  func_0x000107c61174();
  uVar23 = uStack_110;
  func_0x000107c61174();
  uVar24 = uStack_118;
  func_0x000107c61174();
  uVar25 = uStack_120;
  func_0x000107c61174();
  uVar14 = uStack_128;
  func_0x000107c6157c(uStack_128);
  FUN_10025a71c();
  puVar15 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar14);
  *(undefined **)(param_2 + 0x18) = puVar15;
  puVar15 = PTR_PTR_1126a8d60;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar15;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar14);
  uVar26 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar26);
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef13320);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar26);
  uVar14 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efbba10);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar26);
  uVar14 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef2a580);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar26);
  uVar27 = 0xd000000000000010;
  uVar14 = uVar27;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef26830);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(uVar26);
  uVar14 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  uVar26 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar27);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010ef2dc90);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar27 = 0xd000000000000013;
  uVar14 = uVar27;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef2c420);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef2dce0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f007040);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef20500);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f007060);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0x767265536b636564;
  func_0x000107c5fadc(0x767265536b636564,0xec00000073656369);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar14);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar27);
  func_0x000107c61174(uVar21);
  func_0x000107c61174();
  uVar14 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f007080);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar22);
  func_0x000107c61174();
  uVar14 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef3e7f0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar14);
  func_0x000107c61174(uVar23);
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2e2d0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0070a0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0070d0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar14);
  uVar26 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174(uVar26);
  uVar14 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f007100);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  uVar14 = uVar28;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61574(uStack_128);
  *(undefined8 *)(param_2 + 0xd0) = uVar14;
  *param_1 = param_2;
  return;
}



/* Entry: 10070da3c; end: 10070da8f;  */

void FUN_10070da3c(void)

{
  long unaff_x20;
  
  FUN_10070cb74(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200));
  return;
}



/* Entry: 10070da90; end: 10070da97;  */

void FUN_10070da90(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10070da98; end: 10070daeb;  */

void FUN_10070da98(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10070daec; end: 10070daf3;  */

void FUN_10070daec(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001d6cc4();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10070db8c();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10070dc30();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10070daf4; end: 10070db8b;  */

void FUN_10070daf4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1001d6cc4();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10070db8c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10070dc30();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 10070db8c; end: 10070dbf7;  */

void FUN_10070db8c(undefined8 param_1)

{
  if (lRam0000000112dd2910 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e657e8c);
  return;
}



/* Entry: 10070dbf8; end: 10070dc2f; +[SCDiskUtility _formatSpaceToMiB:] */

void FUN_10070dbf8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  return;
}



/* Entry: 10070dc30; end: 10070dc97;  */

void FUN_10070dc30(void)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dd28e0,&UNK_10d994e40);
  func_0x000107c613fc();
  puVar1 = &UNK_101912368;
  FUN_1000bdd8c(&UNK_101912368,0);
  FUN_1001d6d00(0);
  func_0x000107c610f8();
  FUN_10070dc98(puVar1);
  return;
}



/* Entry: 10070dc98; end: 10070dd1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10070dc98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113091988) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_113091990) = uVar1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 10070dd1c; end: 10070dd23;  */

void FUN_10070dd1c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10070dd24; end: 10070dd77;  */

void FUN_10070dd24(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10070dd78; end: 10070dd87;  */

void FUN_10070dd78(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10022e5dc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  FUN_10070df68(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  FUN_10070e004();
  *(undefined8 *)(lVar1 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  FUN_10070e078();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar1 + 0x40) = uVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 10070dd88; end: 10070df67;  */

void FUN_10070dd88(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_10022e5dc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  FUN_10070df68(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_10070e004();
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_10070e078();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 10070df68; end: 10070dfeb;  */

void FUN_10070df68(undefined8 param_1)

{
  if (lRam0000000112dd1e70 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e657af8);
  return;
}



/* Entry: 10070dfec; end: 10070e003; -[SCAFideliusIdentityInit setFreeDiskSpaceMb:] */

void FUN_10070dfec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e29c78,4,param_3,0);
  return;
}



/* Entry: 10070e004; end: 10070e077;  */

void FUN_10070e004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  return;
}



/* Entry: 10070e078; end: 10070e42b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10070e078(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  FUN_1000285a8(0x112dbe6f8,&UNK_10d9798f0);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11308b850);
  func_0x000107c61174();
  uVar2 = uVar1;
  FUN_1000bda74();
  func_0x000107c61170(uVar1);
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083868);
  uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_113083910);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_113093a98);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_11304a478);
  puVar3 = &UNK_110410120;
  func_0x000107c613fc(&UNK_110410120,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  FUN_1000285a8(0x112d61fe0,&UNK_10d992300);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar10);
  puVar4 = &UNK_1018f957c;
  FUN_1000bdd8c(&UNK_1018f957c,puVar3);
  puVar3 = &UNK_110410148;
  func_0x000107c613fc(&UNK_110410148,0x40,7);
  *(undefined **)(puVar3 + 0x10) = puVar4;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar12;
  *(undefined8 *)(puVar3 + 0x28) = uVar9;
  *(undefined8 *)(puVar3 + 0x30) = uVar11;
  *(undefined8 *)(puVar3 + 0x38) = uVar10;
  FUN_1000285a8(0x112dd1e30,&UNK_10d993050);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174();
  puVar5 = &UNK_1018f9700;
  FUN_1000bdd8c(&UNK_1018f9700,puVar3);
  lVar6 = 0;
  FUN_10070e578();
  func_0x000107c613fc();
  *(undefined **)(lVar6 + 0x10) = puVar4;
  *(undefined8 *)(lVar6 + 0x18) = uVar2;
  *(undefined8 *)(lVar6 + 0x20) = uVar12;
  *(undefined8 *)(lVar6 + 0x28) = uVar9;
  *(undefined8 *)(lVar6 + 0x30) = uVar11;
  *(undefined8 *)(lVar6 + 0x38) = uVar10;
  puVar3 = &UNK_110410170;
  func_0x000107c613fc(&UNK_110410170,0x38,7);
  *(undefined **)(puVar3 + 0x10) = puVar4;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar12;
  *(undefined8 *)(puVar3 + 0x28) = uVar9;
  *(undefined8 *)(puVar3 + 0x30) = uVar11;
  FUN_1000285a8(0x112dd1e38,&UNK_10d993058);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  func_0x000107c61580(puVar4,2);
  func_0x000107c61580(uVar2,2);
  func_0x000107c61174(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  func_0x000107c6157c(uVar10);
  func_0x000107c61174(uVar12);
  puVar7 = &UNK_1018f9814;
  FUN_1000bdd8c(&UNK_1018f9814,puVar3);
  puVar3 = &UNK_110410198;
  func_0x000107c613fc(&UNK_110410198,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar4;
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  FUN_1000285a8(0x112dd1e40,&UNK_10d993060);
  func_0x000107c613fc();
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(puVar4);
  puVar8 = &UNK_1018f9878;
  FUN_1000bdd8c(&UNK_1018f9878,puVar3);
  uVar12 = 0;
  FUN_10022e668(0);
  func_0x000107c610f8();
  FUN_10070e598(lVar6,&PTR_DAT_11040fe48,puVar5,puVar7,puVar8,uVar12);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar4);
  return lVar6;
}



/* Entry: 10070e42c; end: 10070e50b;  */

void FUN_10070e42c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10070e50c; end: 10070e55f; -[SCAFideliusIdentityInit setKeyVersion:] */

void FUN_10070e50c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fef918,10,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10070e560; end: 10070e577; -[SCAFideliusIdentityInit setDeviceId:] */

void FUN_10070e560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcde38,0xc,param_3,0);
  return;
}



/* Entry: 10070e578; end: 10070e597;  */

void FUN_10070e578(void)

{
  func_0x000107c61168(&PTR_PTR_112dd1c70);
  return;
}



/* Entry: 10070e598; end: 10070e6ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10070e598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308d090);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  uVar2 = param_1;
  func_0x000107c615f0();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11308d098) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11308d0a0) = param_4;
  uVar2 = param_4;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11308d0a8) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_11308d0b0) = param_5;
  uVar2 = param_5;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11308d0b8) = uVar2;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_5);
  return puVar3;
}



/* Entry: 10070e6ac; end: 10070e6f7;  */

void FUN_10070e6ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10070e6f8; end: 10070e777;  */

void FUN_10070e6f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x0001000ad7c4(*(undefined8 *)(unaff_x20 + 0x10));
  uVar1 = param_2;
  func_0x0001000ad7c4();
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  uVar3 = 0;
  FUN_1001d6998(0);
  func_0x000107c610f8();
  FUN_10070e778(param_2,uVar1,uVar2,uVar3);
  *param_1 = param_2;
  return;
}



/* Entry: 10070e778; end: 10070e7eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10070e778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fbabe0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fbabe8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fbabf0) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10070e7ec; end: 10070e81f;  */

void FUN_10070e7ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10070e820; end: 10070e827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10070e820(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002ba5c8();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff0af0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10070e828; end: 10070e893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10070e828(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002ba5c8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ff0af0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10070e894; end: 10070e89f;  */

/* WARNING: Possible PIC construction at 0x00010070e93c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010070e940) */

void FUN_10070e894(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_1106b49b0;
  func_0x000107c613fc(&UNK_1106b49b0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112fbb0c8;
  FUN_1000285a8(0x112fbb0c8,&UNK_10dc2cc48);
  func_0x000107c613fc();
  puVar4 = &UNK_1039882c8;
  FUN_1000841f8(&UNK_1039882c8,puVar2,uVar3);
  FUN_100084214(&UNK_10dc2cc00,0x41,2);
  *param_1 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10070e8a0; end: 10070e95f;  */

/* WARNING: Possible PIC construction at 0x00010070e93c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010070e940) */

void FUN_10070e8a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_1106b49b0;
  func_0x000107c613fc(&UNK_1106b49b0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112fbb0c8;
  FUN_1000285a8(0x112fbb0c8,&UNK_10dc2cc48);
  func_0x000107c613fc();
  puVar3 = &UNK_1039882c8;
  FUN_1000841f8(&UNK_1039882c8,puVar1,uVar2);
  FUN_100084214(&UNK_10dc2cc00,0x41,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10070e960; end: 10070e967;  */

void FUN_10070e960(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10070e968; end: 10070e99b;  */

void FUN_10070e968(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10070e99c; end: 10070e9a3;  */

void FUN_10070e99c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}


