/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10858a3b0; end: 10858a8e7; -[SCMediaTranscodingLogger stopCameraVideoTranscodingMultipleOutputLoggingStatusFailedWithTaskId:imageProcessCommandsInfo:outputVideoFilesNumber:outputVideoFileIndex:error:imageProcessingError:retryCount:] */

void FUN_10858a3b0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x10858a4e8;
  puStack_b0 = &UNK_110a55f38;
  uStack_68 = param_10;
  lStack_a8 = param_2;
  uStack_a0 = param_4;
  uStack_98 = param_8;
  uStack_90 = param_5;
  uStack_88 = param_9;
  uStack_80 = param_1;
  uStack_78 = param_6;
  uStack_70 = param_7;
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_c8);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_8);
  _objc_release(param_4);
  return;
}



/* Entry: 10858a8e8; end: 10858a9cb; -[SCMediaTranscodingLogger stopCameraVideoTranscodingMultipleOutputLoggingStatusCancelledWithTaskId:imageProcessCommandsInfo:outputVideoFilesNumber:outputVideoFileIndex:error:retryCount:] */

void FUN_10858a8e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_8);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10858a9cc;
  puStack_90 = &UNK_110a55f68;
  lStack_88 = param_2;
  uStack_80 = param_4;
  uStack_78 = param_8;
  uStack_70 = param_1;
  uStack_68 = param_6;
  uStack_60 = param_7;
  uStack_58 = param_9;
  _objc_retain(param_8);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_a8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_8);
  _objc_release(param_4);
  return;
}



/* Entry: 10858a9cc; end: 10858aae3;  */

void FUN_10858a9cc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010be23460(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126da1f0;
  _objc_opt_class(PTR_PTR_1126da1f0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c251040(uVar2);
    func_0x00010becdc20(uVar5);
    func_0x00010c20bfa0(*(undefined8 *)(param_1 + 0x38),uVar2);
    func_0x00010c219740(uVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bf6e340(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1971a0(uVar2);
    _objc_release(uVar5);
    func_0x00010c1d7280(uVar2);
    func_0x00010c1d7260(uVar2);
    func_0x00010c1ed9a0(uVar2);
    func_0x00010be50980(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be59e40(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be8d980(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10858aae4; end: 10858ac9f; -[SCMediaTranscodingLogger startCameraImageTranscodingLoggingWithTaskId:captureSessionId:snapSessionId:inputMediaFormat:lensIds:imageProcessCommandsInfo:inputResolution:mediaSource:mediaDestination:mediaOrchestrationId:] */

void FUN_10858aae4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar2 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_3 + 8);
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_10858aca0;
  puStack_e8 = &UNK_110a55f98;
  uStack_88 = param_11;
  uStack_80 = param_12;
  uStack_b0 = param_13;
  uStack_e0 = param_5;
  uStack_d8 = param_6;
  uStack_d0 = param_7;
  uStack_c8 = param_8;
  uStack_c0 = param_9;
  uStack_b8 = param_10;
  lStack_a8 = param_3;
  uStack_a0 = uVar2;
  uStack_98 = param_1;
  uStack_90 = param_2;
  _objc_retain(param_13);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1,param_4,&puStack_100);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10858aca0; end: 10858ad6b;  */

void FUN_10858aca0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da1f8;
  _objc_alloc(PTR_PTR_1126da1f8);
  func_0x00010c050e40();
  func_0x00010c209a80(*(undefined8 *)(param_1 + 0x60));
  func_0x00010c179280(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c205660(puVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010c1ad4e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c1ad620(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),puVar1);
  func_0x00010c1bbdc0(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010c1aa740(puVar1,param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010c1c52c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x78));
  func_0x00010c1c44c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x80));
  func_0x00010c1c4c60(puVar1,param_2,*(undefined8 *)(param_1 + 0x50));
  func_0x00010bdc8900(*(undefined8 *)(param_1 + 0x58),param_2,puVar1);
  func_0x00010be54680(*(undefined8 *)(param_1 + 0x58),param_2,1,*(undefined8 *)(param_1 + 0x78),
                      *(undefined8 *)(param_1 + 0x80),0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10858ad6c; end: 10858ae73; -[SCMediaTranscodingLogger stopCameraImageTranscodingLoggingStatusSuccessWithTaskId:outputMediaFormat:outputResolution:outputFileSize:outputOverlayFileSize:imageProcessingError:] */

void FUN_10858ad6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_3 + 8);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10858ae74;
  puStack_98 = &UNK_110a55fc8;
  lStack_90 = param_3;
  uStack_88 = param_5;
  uStack_80 = param_6;
  uStack_78 = param_9;
  uStack_70 = uVar2;
  uStack_68 = param_1;
  uStack_60 = param_2;
  uStack_58 = param_7;
  _objc_retain(param_9);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1,param_4,&puStack_b0);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10858ae74; end: 10858af8b;  */

void FUN_10858ae74(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010be23460(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126da1f8;
  _objc_opt_class(PTR_PTR_1126da1f8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c251040(uVar2);
    func_0x00010becdc20(uVar5);
    func_0x00010c20bfa0(*(undefined8 *)(param_1 + 0x40),uVar2);
    func_0x00010c219740(uVar2);
    func_0x00010c1d7080(uVar2);
    func_0x00010c1d7140(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),uVar2);
    func_0x00010c1d6fa0(uVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf6e340(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa7a0(uVar2);
    _objc_release(uVar5);
    func_0x00010be50980(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be59e40(*(undefined8 *)(param_1 + 0x20));
    func_0x00010be8d980(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10858af8c; end: 10858b10f; -[SCMediaTranscodingLogger stopCameraImageTranscodingLoggingStatusFailedWithTaskId:imageProcessingError:] */

void FUN_10858af8c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10858b04c;
  puStack_58 = &UNK_11084d788;
  lStack_50 = param_2;
  uStack_48 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10858b110; end: 10858b293; -[SCMediaTranscodingLogger stopCameraTranscodingLoggingStatusCancelledWithTaskId:imageProcessCommandsInfo:error:] */

void FUN_10858b110(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10858b1d0;
  puStack_58 = &UNK_11084d788;
  lStack_50 = param_2;
  uStack_48 = param_4;
  uStack_40 = param_6;
  uStack_38 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 10858b294; end: 10858b377; -[SCMediaTranscodingLogger markEventTimeForTaskId:event:timeSec:] */

void FUN_10858b294(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10858b378;
  puStack_68 = &UNK_11084c4a0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10858b378; end: 10858b3bf;  */

void FUN_10858b378(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be23460(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c0bb780(lVar1,param_2,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10858b3c0; end: 10858b4a3; -[SCMediaTranscodingLogger markFrameStatisticsForTaskId:muxerVideoProcessedFrameCount:muxerAudioProcessedFrameCount:] */

void FUN_10858b3c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10858b4a4;
  puStack_68 = &UNK_11084c4a0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10858b4a4; end: 10858b52f;  */

void FUN_10858b4a4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010be23460(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126da1f0;
  _objc_opt_class(PTR_PTR_1126da1f0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    func_0x00010c1ca900(uVar2);
    func_0x00010c1ca8e0(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10858b530; end: 10858b667; -[SCMediaTranscodingLogger markRetryContextForTaskId:retryContext:] */

void FUN_10858b530(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10858b5e8;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10858b668; end: 10858b8a7; -[SCMediaTranscodingLogger logSkipTranscodingWithTaskId:captureSessionId:snapSessionId:clientMessageId:inputVideoTotalDurationMS:inputTotalFileSize:inputMediaFormat:inputResolution:inputVideoBitrate:mediaSource:mediaDestination:mediaQualityLevel:spotlightModes:playbackRateMultiplier:inputHasAudio:inputAudioBitrate:snapSource:mediaOrchestrationId:] */

void FUN_10858b668(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined1 param_18,undefined4 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
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
  undefined1 uStack_90;
  
  uVar2 = param_13;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_17);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_4 + 8);
  puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_148 = 0xc2000000;
  pcStack_140 = FUN_10858b8a8;
  puStack_138 = &UNK_110a55ff8;
  uStack_118 = param_12;
  uStack_b8 = param_14;
  uStack_c0 = param_13;
  uStack_b0 = param_15;
  uStack_a8 = param_16;
  uStack_90 = param_18;
  uStack_98 = param_20;
  uStack_110 = param_17;
  uStack_100 = param_21;
  uStack_f8 = param_22;
  uStack_130 = param_6;
  uStack_128 = param_7;
  uStack_120 = param_8;
  uStack_108 = param_9;
  lStack_f0 = param_4;
  uStack_e8 = uVar2;
  uStack_e0 = param_10;
  uStack_d8 = param_1;
  uStack_d0 = param_2;
  uStack_c8 = param_11;
  uStack_a0 = param_3;
  _objc_retain(param_22);
  _objc_retain(param_21);
  _objc_retain(param_9);
  _objc_retain(param_17);
  _objc_retain(param_12);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1,param_5,&puStack_150);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_9);
  _objc_release(param_17);
  _objc_release(param_12);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 10858b8a8; end: 10858bab3;  */

void FUN_10858b8a8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR_PTR_1126da1f0;
  _objc_alloc(PTR_PTR_1126da1f0);
  func_0x00010c050e40();
  func_0x00010c1b46c0();
  func_0x00010c209a80(*(undefined8 *)(param_1 + 0x68),puVar1);
  func_0x00010c20bfa0(*(undefined8 *)(param_1 + 0x68),puVar1);
  func_0x00010c179280(puVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  func_0x00010c205660(puVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  func_0x00010c1ad740(puVar1,param_2,1);
  func_0x00010c1ad720(puVar1,param_2,*(undefined8 *)(param_1 + 0x70));
  func_0x00010c1ad4e0(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c1ad620(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),puVar1);
  func_0x00010c1ad340(puVar1,param_2,*(undefined8 *)(param_1 + 0x88));
  func_0x00010c1ad700(puVar1,param_2,*(undefined8 *)(param_1 + 0x90));
  func_0x00010c1c52c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x98));
  func_0x00010c1c44c0(puVar1,param_2,*(undefined8 *)(param_1 + 0xa0));
  func_0x00010c1c5060(puVar1,param_2,*(undefined8 *)(param_1 + 0xa8));
  func_0x00010c1cf3a0(puVar1,param_2,1);
  func_0x00010c1faa60(puVar1,param_2,0);
  func_0x00010c1fab00(0,puVar1);
  dVar2 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x70));
  func_0x00010c1faa00(dVar2 / 1000.0,puVar1);
  func_0x00010c208880(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010c1dd7e0(*(undefined8 *)(param_1 + 0xb0),puVar1);
  func_0x00010c1ad760(puVar1,param_2,*(undefined1 *)(param_1 + 0xc0));
  func_0x00010c1ad1a0(puVar1,param_2,*(undefined8 *)(param_1 + 0xb8));
  func_0x00010c17cda0(puVar1,param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010c2056c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x50));
  func_0x00010c1c4c60(puVar1,param_2,*(undefined8 *)(param_1 + 0x58));
  func_0x00010c219740(puVar1,param_2,0);
  func_0x00010c1d7240(puVar1,param_2,*(undefined8 *)(param_1 + 0x70));
  func_0x00010c1d7080(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  func_0x00010c1d7140(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),puVar1);
  func_0x00010c1d6fa0(puVar1,param_2,*(undefined8 *)(param_1 + 0x88));
  func_0x00010c1d7220(puVar1,param_2,*(undefined8 *)(param_1 + 0x90));
  func_0x00010c1d72a0(puVar1,param_2,*(undefined1 *)(param_1 + 0xc0));
  func_0x00010c1d70e0(puVar1,param_2,0);
  func_0x00010c1d7280(puVar1,param_2,1);
  func_0x00010c1d7260(puVar1,param_2,0);
  func_0x00010c17cda0(puVar1,param_2,*(undefined8 *)(param_1 + 0x48));
  func_0x00010be50980(*(undefined8 *)(param_1 + 0x60),param_2,puVar1);
  func_0x00010be59e40(*(undefined8 *)(param_1 + 0x60),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10858bab4; end: 10858bc97; -[SCMediaTranscodingLogger _markLifecycleEvent:inBackground:] */

void FUN_10858bab4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _CACurrentMediaTime();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x10858bb8c;
  puStack_68 = &UNK_110858b70;
  lStack_60 = param_1;
  uStack_58 = param_3;
  puStack_50 = puVar1;
  uStack_48 = param_4;
  _objc_retain();
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_80);
  _objc_release(puStack_50);
  _objc_release(uStack_58);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10858bc98; end: 10858bd3f; -[SCMediaTranscodingLogger _addTask:] */

void FUN_10858bc98(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c26a800(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar3,param_2,param_3,lVar1);
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c251040(param_3);
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb780(param_3,param_2,&PTR____CFConstantStringClassReference_110ee3798,puVar2);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10858bd40; end: 10858bd4f; -[SCMediaTranscodingLogger _removeTaskWithTaskId:] */

void FUN_10858bd40(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_removeObjectForKey__112628f18);
    return;
  }
  return;
}



/* Entry: 10858bd50; end: 10858bd7b; -[SCMediaTranscodingLogger _getTaskWithTaskId:] */

void FUN_10858bd50(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010c0dff20(*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10858bd7c; end: 10858c66b; -[SCMediaTranscodingLogger _logBlizzardEvent:] */

void FUN_10858bd7c(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_4 == 0) goto LAB_10858c648;
  func_0x00010c256c20(param_4);
  func_0x00010c0df720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb780(param_4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(char *)(param_2 + 0x40) == '\x01') {
    func_0x00010c256c20(param_4);
    func_0x00010c0df720(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bb780(param_4);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126da1f0;
  _objc_retain(param_4);
  _objc_opt_class(puVar3);
  uVar8 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar3);
  uVar1 = param_4;
  if ((uVar8 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126da1f8;
  _objc_retain(param_4);
  _objc_opt_class(puVar3);
  uVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar3);
  uVar2 = param_4;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(param_4);
  if ((uVar8 & 1) == 0) {
    if ((uVar4 & 1) != 0) {
      puVar3 = PTR_PTR_1126da218;
      _objc_alloc_init(PTR_PTR_1126da218);
      uVar8 = param_4;
      func_0x00010c0c5a40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar8;
      FUN_10858c66c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      uVar8 = uVar4;
      func_0x00010c08fa60();
      if (uVar8 != 0) {
        func_0x00010c1c4c60(puVar3);
      }
      uVar8 = param_4;
      func_0x00010bf31200(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179280(puVar3);
      _objc_release(uVar8);
      uVar8 = param_4;
      func_0x00010c243340(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c205660(puVar3);
      _objc_release(uVar8);
      uVar8 = param_4;
      func_0x00010c065ca0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ad500(puVar3);
      _objc_release(uVar8);
      uVar8 = param_4;
      func_0x00010c0ccbc0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c7720(puVar3);
      _objc_release(uVar8);
      func_0x00010c0c67c0(param_4);
      FUN_10858c6b8();
      func_0x00010c1c52c0(puVar3);
      func_0x00010c0c4a00(param_4);
      func_0x00010858c6dc();
      func_0x00010c1c44c0(puVar3);
      func_0x00010c251040(param_4);
      func_0x00010c209a20(puVar3);
      func_0x00010c256c20(param_4);
      func_0x00010c196200(puVar3);
      func_0x00010c256c20(param_4);
      func_0x00010c251040(param_4);
      func_0x00010c1b92c0(puVar3);
      func_0x00010c27a0c0(param_4);
      func_0x00010c219740(puVar3);
      uVar8 = param_4;
      func_0x00010c27a0c0();
      uVar7 = param_4;
      if (uVar8 == 0) {
        func_0x00010c0eef00(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d70a0(puVar3);
      }
      else {
        func_0x00010bf98d60(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1971a0(puVar3);
      }
      _objc_release(uVar7);
      uVar8 = param_4;
      func_0x00010bfe8720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar8 != 0) {
        uVar8 = param_4;
        func_0x00010bfe8720(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1aa7a0(puVar3);
        _objc_release(uVar8);
      }
      uVar8 = *(ulong *)(param_2 + 0x18);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      goto LAB_10858c620;
    }
  }
  else {
    puVar3 = PTR_PTR_1126da200;
    _objc_alloc_init(PTR_PTR_1126da200);
    func_0x00010c167ce0();
    uVar8 = param_4;
    func_0x00010c26a800(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219760(puVar3);
    _objc_release(uVar8);
    uVar8 = param_4;
    func_0x00010bf31200(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(puVar3);
    _objc_release(uVar8);
    uVar8 = param_4;
    func_0x00010c243340(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c205660(puVar3);
    _objc_release(uVar8);
    uVar8 = param_4;
    func_0x00010bf3d180(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    FUN_10858c66c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19d9c0(puVar3);
    _objc_release(uVar4);
    _objc_release(uVar8);
    uVar8 = param_4;
    func_0x00010c0ccbc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c7720(puVar3);
    _objc_release(uVar8);
    uVar8 = param_4;
    func_0x00010c065ca0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ad500(puVar3);
    _objc_release(uVar8);
    func_0x00010c0c67c0(param_4);
    FUN_10858c6b8();
    func_0x00010c1c52c0(puVar3);
    func_0x00010c0c60a0(param_4);
    func_0x00010c1c5060(puVar3);
    func_0x00010c0c4a00(param_4);
    func_0x00010858c6dc();
    func_0x00010c1c44c0(puVar3);
    uVar8 = param_4;
    func_0x00010c0c4a00();
    if (uVar8 == 4) {
      func_0x00010c1e3760(puVar3);
    }
    uVar8 = param_4;
    func_0x00010c13f520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar8 != 0) {
      uVar8 = param_4;
      func_0x00010c13f520(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010c1ed960(puVar3);
      _objc_release(uVar8);
    }
    uVar8 = param_4;
    func_0x00010c0de5e0();
    if (0 < (long)uVar8) {
      puVar5 = PTR_PTR_1126da208;
      _objc_alloc_init(PTR_PTR_1126da208);
      uVar8 = param_4;
      func_0x00010c0661e0(param_4);
      param_1 = (double)uVar8;
      func_0x00010c207280(param_1,puVar5);
      func_0x00010c0de5e0(param_4);
      func_0x00010c1cf3a0(puVar5);
      func_0x00010c158380(param_4);
      func_0x00010c1faa60(puVar5);
      func_0x00010c158500(param_4);
      func_0x00010c1fab00(puVar5);
      func_0x00010c1582a0(param_4);
      func_0x00010c1faa00(puVar5);
      func_0x00010c1fab80(puVar3);
      _objc_release(puVar5);
    }
    func_0x00010c251040(param_4);
    param_1 = param_1 * 1000.0;
    func_0x00010c209a20(puVar3);
    func_0x00010c256c20(param_4);
    param_1 = param_1 * 1000.0;
    func_0x00010c196200(puVar3);
    func_0x00010c256c20(param_4);
    dVar9 = param_1;
    func_0x00010c251040(param_4);
    dVar9 = (param_1 - dVar9) * 1000.0;
    func_0x00010c1b92c0(puVar3);
    uVar8 = param_4;
    func_0x00010c0c5a40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar8;
    FUN_10858c66c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    uVar8 = uVar4;
    func_0x00010c08fa60();
    if (uVar8 != 0) {
      func_0x00010c1c4c60(puVar3);
    }
    func_0x00010c27a0c0(param_4);
    func_0x00010c219740(puVar3);
    uVar8 = param_4;
    func_0x00010c0eef00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d70a0(puVar3);
    _objc_release(uVar8);
    uVar8 = param_4;
    func_0x00010bfd44c0();
    if ((int)uVar8 != 0) {
      puVar5 = PTR_PTR_1126da210;
      _objc_opt_new(PTR_PTR_1126da210);
      func_0x00010bfd44c0(param_4);
      func_0x00010c1a5920(puVar5);
      func_0x00010c1859e0(puVar3);
      _objc_release(puVar5);
    }
    func_0x00010bea4140(param_2);
    uVar8 = param_4;
    func_0x00010c27a0c0();
    if (uVar8 == 0) {
      uVar8 = param_4;
      func_0x00010c0661e0(param_4);
      func_0x00010c256c20(param_4);
      dVar10 = dVar9;
      func_0x00010c251040(param_4);
      func_0x00010c219720((double)uVar8 / ((dVar9 - dVar10) * 1000.0),puVar3);
    }
    else {
      uVar8 = param_4;
      func_0x00010bf98d60(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1971a0(puVar3);
      _objc_release(uVar8);
    }
    uVar8 = param_4;
    func_0x00010bfe8720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar8 != 0) {
      uVar8 = param_4;
      func_0x00010bfe8720(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1aa7a0(puVar3);
      _objc_release(uVar8);
    }
    uVar8 = param_4;
    func_0x00010c086600();
    _objc_retainAutoreleasedReturnValue();
    if (uVar8 != 0) {
      func_0x00010c1b6ba0(puVar3);
    }
    func_0x00010c13f540(param_4);
    func_0x00010c1ed9a0(puVar3);
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar6);
    uVar7 = param_4;
    func_0x00010c0de5e0();
    if ((((uVar7 == 1) && (uVar7 = param_4, func_0x00010c158380(), uVar7 == 0)) &&
        (uVar7 = param_4, func_0x00010c0c67c0(), uVar7 == 0)) &&
       ((uVar7 = param_4, func_0x00010c0c4a00(), uVar7 == 3 &&
        (uVar7 = param_4, func_0x00010c0c60a0(), uVar7 == 700)))) {
      uVar7 = param_4;
      func_0x00010c0eeee0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      _objc_release(uVar7);
    }
LAB_10858c620:
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_10858c648:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10858c66c; end: 10858c6b7;  */

void FUN_10858c66c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10858c6b8; end: 10858c6ff;  */

undefined8 FUN_10858c6b8(long param_1)

{
  if (param_1 - 1U < 7) {
    return *(undefined8 *)(&UNK_10df359c8 + (param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 10858c700; end: 10858c83f; -[SCMediaTranscodingLogger _setFrameStatisticsOnEvent:fromTask:] */

void FUN_10858c700(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x42) == '\x01') {
    lVar1 = param_4;
    func_0x00010c0d4460();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar1 = param_4;
      func_0x00010c0d4440();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) goto LAB_10858c824;
    }
    else {
      _objc_release();
    }
    puVar2 = PTR_PTR_1126da220;
    _objc_alloc_init(PTR_PTR_1126da220);
    lVar1 = param_4;
    func_0x00010c0d4460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_4;
      func_0x00010c0d4460(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c0b4ca0();
      func_0x00010c1ca900(puVar2,param_2,lVar3);
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010c0d4440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_4;
      func_0x00010c0d4440(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c0b4ca0();
      func_0x00010c1ca8e0(puVar2,param_2,lVar3);
      _objc_release(lVar1);
    }
    func_0x00010c19f540(param_3,param_2,puVar2);
    _objc_release(puVar2);
  }
LAB_10858c824:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10858c840; end: 10858c91f; -[SCMediaTranscodingLogger _logTranscodingGrapheneEventWithTask:] */

void FUN_10858c840(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar3 = PTR_PTR_1126da1f0;
    _objc_opt_class(PTR_PTR_1126da1f0);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    puVar3 = PTR_PTR_1126da1f8;
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar2 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_3);
    if ((uVar4 & 1) == 0) {
      if ((uVar5 & 1) != 0) {
        func_0x00010be54420(param_1);
      }
    }
    else {
      func_0x00010be54440(param_1);
    }
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10858c920; end: 10858cbcf; -[SCMediaTranscodingLogger _logGrapheneMetricsForVideo:] */

void FUN_10858c920(double param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar11 = (undefined4)((ulong)param_2 >> 0x20);
  uVar10 = (undefined4)param_2;
  _objc_retain(param_5);
  func_0x00010c0c4a00(param_5);
  lVar1 = param_3;
  func_0x00010bec57a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c67c0(param_5);
  lVar2 = param_3;
  func_0x00010bec57c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27a0c0(param_5);
  lVar3 = param_3;
  func_0x00010bec5840(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10858ec08(*(undefined8 *)(param_3 + 0x28),lVar1,lVar2,lVar3,1);
  if ((*(char *)(param_3 + 0x41) == '\x01') && (uVar4 = param_5, func_0x00010c27a0c0(), uVar4 == 1))
  {
    uVar4 = param_5;
    func_0x00010bf99120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar4 != 0) {
      uVar7 = *(undefined8 *)(param_3 + 0x28);
      uVar4 = param_5;
      func_0x00010bf99120(param_5);
      _objc_retainAutoreleasedReturnValue();
      FUN_108591314(uVar7,lVar1,uVar4,lVar2,1);
      _objc_release(uVar4);
    }
  }
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c256c20(param_5);
  dVar9 = param_1;
  func_0x00010c251040(param_5);
  param_1 = param_1 - dVar9;
  FUN_10858f188(uVar7,lVar1,lVar2,lVar3);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  uVar4 = param_5;
  func_0x00010c0eed00(param_5);
  FUN_10858f5b0(uVar7,lVar1,lVar2,uVar4);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c0ef060(param_5);
  func_0x00010c0ef060(param_5);
  if ((double)CONCAT44(uVar11,uVar10) <= param_1) {
    param_1 = (double)CONCAT44(uVar11,uVar10);
  }
  FUN_10858fa10(uVar7,lVar1,lVar2,(long)param_1);
  fVar8 = SUB84(param_1,0);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  uVar4 = param_5;
  func_0x00010c0ef140(param_5);
  FUN_1085902d0(uVar7,lVar1,lVar2,uVar4);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  uVar4 = param_5;
  func_0x00010c0661e0(param_5);
  FUN_10858fe70(uVar7,lVar1,lVar2,uVar4);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  uVar4 = param_5;
  func_0x00010c0ef180(param_5);
  FUN_1085900a0(uVar7,lVar1,lVar2,uVar4);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  uVar4 = param_5;
  func_0x00010c0eeee0(param_5);
  _objc_retainAutoreleasedReturnValue();
  FUN_108590500(uVar7,uVar4,lVar1,lVar2,1);
  _objc_release(uVar4);
  func_0x00010c0eed20(param_5);
  if (15.0 < fVar8) {
    uVar5 = param_5;
    func_0x00010c0eed00();
    uVar6 = param_5;
    func_0x00010c0ef180();
    uVar4 = 0;
    if (uVar6 != 0) {
      uVar4 = uVar5 / uVar6;
    }
    if (uVar4 < 0x28) {
      FUN_1085910e4(*(undefined8 *)(param_3 + 0x28),lVar1,lVar2,1);
    }
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10858cbd0; end: 10858cd47; -[SCMediaTranscodingLogger _logGrapheneMetricsForImage:] */

void FUN_10858cbd0(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  
  _objc_retain(param_5);
  func_0x00010c0c4a00(param_5);
  lVar1 = param_3;
  func_0x00010bec57a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c67c0(param_5);
  lVar2 = param_3;
  func_0x00010bec57c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27a0c0(param_5);
  lVar3 = param_3;
  func_0x00010bec5840(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c256c20(param_5);
  dVar6 = param_1;
  func_0x00010c251040(param_5);
  param_1 = param_1 - dVar6;
  FUN_10858f4fc(uVar4,lVar1,lVar2,lVar3);
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010c0ef060(param_5);
  func_0x00010c0ef060(param_5);
  if (param_2 <= param_1) {
    param_1 = param_2;
  }
  FUN_10858fc40(uVar4,lVar1,lVar2,(long)param_1);
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  uVar4 = param_5;
  func_0x00010c0eed00(param_5);
  FUN_10858f7e0(uVar5,lVar1,lVar2,uVar4);
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  uVar4 = param_5;
  func_0x00010c0eeee0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  FUN_1085907c0(uVar5,lVar1,uVar4,lVar2,1);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10858cd48; end: 10858cdf7; -[SCMediaTranscodingLogger _logGrapheneTranscodingStartIsImage:source:destination:type:] */

void FUN_10858cd48(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_6);
  lVar1 = param_1;
  func_0x00010bec57c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bec57a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    FUN_108590e24(*(undefined8 *)(param_1 + 0x28),lVar2,lVar1,param_6,1);
  }
  else {
    FUN_108590bf4();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10858cdf8; end: 10858cfbb; -[SCMediaTranscodingLogger _logBlizzardVideoTranscodingStart:] */

void FUN_10858cdf8(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126da228;
  _objc_alloc_init(PTR_PTR_1126da228);
  lVar2 = param_4;
  func_0x00010c26a800(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219760(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf31200(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179280(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c243340(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205660(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf3d180(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_10858c66c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19d9c0(puVar1,param_3,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c065ca0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ad500(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c0c67c0(param_4);
  FUN_10858c6b8();
  func_0x00010c1c52c0(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010c0c4a00(param_4);
  func_0x00010858c6dc();
  func_0x00010c1c44c0(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010c0c4a00();
  if (lVar2 == 4) {
    func_0x00010c1e3760(puVar1,param_3,4);
  }
  func_0x00010c251040(param_4);
  func_0x00010c209a20(puVar1,param_3,(long)(param_1 * 1000.0));
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10858cfbc; end: 10858cfe3; -[SCMediaTranscodingLogger _stringFromMediaSource:] */

undefined ** FUN_10858cfbc(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 7) {
    return (undefined **)(&PTR_PTR_110a56070)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110ee2578;
}



/* Entry: 10858cfe4; end: 10858d007; -[SCMediaTranscodingLogger _stringFromMediaDestination:] */

undefined ** FUN_10858cfe4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 7) {
    return (undefined **)(&PTR_PTR_110a560a8)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 10858d008; end: 10858d02b; -[SCMediaTranscodingLogger _stringFromStatus:] */

undefined ** FUN_10858d008(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 3) {
    return (undefined **)(&PTR_PTR_110a560e0)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 10858d02c; end: 10858d0db; -[SCMediaTranscodingLogger _traceTranscodingForName:startTimeSecs:endTimeSecs:] */

void FUN_10858d02c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf60700();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0665e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10858d0dc; end: 10858d147; -[SCMediaTranscodingLogger .cxx_destruct] */

void FUN_10858d0dc(long param_1)

{
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



/* Entry: 10858d148; end: 10858d1d7; -[SCTranscodingMetricBase initWithTaskId:] */

undefined1 * FUN_10858d148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fcda8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10858d1d8; end: 10858d1e3; -[SCTranscodingMetricBase metricType] */

undefined ** FUN_10858d1d8(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 10858d1e4; end: 10858d203; -[SCTranscodingMetricBase markKeyEventTime:timeSec:] */

void FUN_10858d1e4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if ((param_3 != 0) && (param_4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKeyedSubscript__112651bb8,param_4,
               param_3);
    return;
  }
  return;
}



/* Entry: 10858d204; end: 10858d2a7; -[SCTranscodingMetricBase keyEventTimes] */

void FUN_10858d204(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lStack_38;
  
  lStack_38 = 0;
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,
                      *(undefined8 *)(param_1 + 8),1,&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_38;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  if (lVar1 == 0) {
    _objc_retain(ppuVar3);
    ppuVar4 = ppuVar3;
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  _objc_release(ppuVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10858d2a8; end: 10858d2af; -[SCTranscodingMetricBase taskId] */

undefined8 FUN_10858d2a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10858d2b0; end: 10858d2b7; -[SCTranscodingMetricBase captureSessionId] */

undefined8 FUN_10858d2b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10858d2b8; end: 10858d2bf; -[SCTranscodingMetricBase setCaptureSessionId:] */

void FUN_10858d2b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10858d2c0; end: 10858d2c7; -[SCTranscodingMetricBase snapSessionId] */

undefined8 FUN_10858d2c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10858d2c8; end: 10858d2cf; -[SCTranscodingMetricBase setSnapSessionId:] */

void FUN_10858d2c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10858d2d0; end: 10858d2d7; -[SCTranscodingMetricBase clientMessageId] */

undefined8 FUN_10858d2d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10858d2d8; end: 10858d2df; -[SCTranscodingMetricBase setClientMessageId:] */

void FUN_10858d2d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10858d2e0; end: 10858d2e7; -[SCTranscodingMetricBase mediaOrchestrationId] */

undefined8 FUN_10858d2e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10858d2e8; end: 10858d2ef; -[SCTranscodingMetricBase setMediaOrchestrationId:] */

void FUN_10858d2e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10858d2f0; end: 10858d2f7; -[SCTranscodingMetricBase inputMediaMetadata] */

undefined8 FUN_10858d2f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10858d2f8; end: 10858d2ff; -[SCTranscodingMetricBase outputMediaMetadata] */

undefined8 FUN_10858d2f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10858d300; end: 10858d307; -[SCTranscodingMetricBase mediaSource] */

undefined8 FUN_10858d300(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10858d308; end: 10858d30f; -[SCTranscodingMetricBase setMediaSource:] */

void FUN_10858d308(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10858d310; end: 10858d317; -[SCTranscodingMetricBase mediaDestination] */

undefined8 FUN_10858d310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10858d318; end: 10858d31f; -[SCTranscodingMetricBase setMediaDestination:] */

void FUN_10858d318(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10858d320; end: 10858d327; -[SCTranscodingMetricBase mediaQualityLevel] */

undefined8 FUN_10858d320(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10858d328; end: 10858d32f; -[SCTranscodingMetricBase setMediaQualityLevel:] */

void FUN_10858d328(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 10858d330; end: 10858d337; -[SCTranscodingMetricBase startTimeSecs] */

undefined8 FUN_10858d330(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10858d338; end: 10858d33f; -[SCTranscodingMetricBase setStartTimeSecs:] */

void FUN_10858d338(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x68) = param_1;
  return;
}



/* Entry: 10858d340; end: 10858d347; -[SCTranscodingMetricBase stopTimeSecs] */

undefined8 FUN_10858d340(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10858d348; end: 10858d34f; -[SCTranscodingMetricBase setStopTimeSecs:] */

void FUN_10858d348(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x70) = param_1;
  return;
}



/* Entry: 10858d350; end: 10858d357; -[SCTranscodingMetricBase transcodingStatus] */

undefined8 FUN_10858d350(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10858d358; end: 10858d35f; -[SCTranscodingMetricBase setTranscodingStatus:] */

void FUN_10858d358(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 10858d360; end: 10858d367; -[SCTranscodingMetricBase errorMessage] */

undefined8 FUN_10858d360(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10858d368; end: 10858d36f; -[SCTranscodingMetricBase setErrorMessage:] */

void FUN_10858d368(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10858d370; end: 10858d377; -[SCTranscodingMetricBase imageProcessingErrorMessage] */

undefined8 FUN_10858d370(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10858d378; end: 10858d37f; -[SCTranscodingMetricBase setImageProcessingErrorMessage:] */

void FUN_10858d378(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10858d380; end: 10858d387; -[SCTranscodingMetricBase freeDiskSpaceInMb] */

undefined8 FUN_10858d380(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10858d388; end: 10858d38f; -[SCTranscodingMetricBase setFreeDiskSpaceInMb:] */

void FUN_10858d388(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10858d390; end: 10858d397; -[SCTranscodingMetricBase isSkipped] */

undefined1 FUN_10858d390(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10858d398; end: 10858d39f; -[SCTranscodingMetricBase setIsSkipped:] */

void FUN_10858d398(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10858d3a0; end: 10858d43b; -[SCTranscodingMetricBase .cxx_destruct] */

void FUN_10858d3a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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



/* Entry: 10858d43c; end: 10858d5bb; -[SCTranscodingMetricImageTranscode inputMediaMetadata] */

undefined **
FUN_10858d43c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110ee3018;
  ppuVar1 = param_3;
  func_0x00010c065c80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar1 != (undefined **)0x0) {
    ppuStack_50 = ppuVar1;
  }
  ppuStack_60 = &PTR____CFConstantStringClassReference_110db1238;
  func_0x00010c065e80(param_3);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110db1258;
  puStack_48 = puVar2;
  func_0x00010c065e80(param_3);
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_50,&ppuStack_68,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_4,ppuVar4,0,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  func_0x00010c008340();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_148 = &PTR____CFConstantStringClassReference_110ee3018;
    ppuVar1 = ppuVar4;
    func_0x00010c0eeee0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_110 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar1 != (undefined **)0x0) {
      ppuStack_110 = ppuVar1;
    }
    ppuStack_140 = &PTR____CFConstantStringClassReference_110db1238;
    func_0x00010c0ef060(ppuVar4);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_138 = &PTR____CFConstantStringClassReference_110db1258;
    puStack_108 = puVar2;
    func_0x00010c0ef060(ppuVar4);
    func_0x00010c0df720(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_130 = &PTR____CFConstantStringClassReference_110ee3058;
    ppuVar5 = ppuVar4;
    puStack_100 = puVar3;
    func_0x00010c0eed00(ppuVar4);
    func_0x00010c0df7c0(puVar6,param_4,ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_128 = &PTR____CFConstantStringClassReference_110ee30b8;
    ppuVar5 = ppuVar4;
    puStack_f8 = puVar6;
    func_0x00010c0eefc0(ppuVar4);
    func_0x00010c0df7c0(puVar7,param_4,ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_120 = &PTR____CFConstantStringClassReference_110de5e58;
    ppuVar5 = ppuVar4;
    puStack_f0 = puVar7;
    func_0x00010c094660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar5;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e8 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar8 != (undefined **)0x0) {
      ppuStack_e8 = ppuVar8;
    }
    ppuStack_118 = &PTR____CFConstantStringClassReference_110ee3c58;
    func_0x00010bfe8520();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuStack_e0 = ppuVar4;
    }
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_110,&ppuStack_148
                        ,7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(ppuVar8);
    _objc_release(ppuVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_4,puVar9,0,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
    _objc_release(puVar2);
    _objc_release(puVar9);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      return &PTR____CFConstantStringClassReference_110ee3c78;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return ppuVar1;
}



/* Entry: 10858d5bc; end: 10858d853; -[SCTranscodingMetricImageTranscode outputMediaMetadata] */

undefined **
FUN_10858d5bc(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110ee3018;
  ppuVar1 = param_3;
  func_0x00010c0eeee0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar1 != (undefined **)0x0) {
    ppuStack_a0 = ppuVar1;
  }
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110db1238;
  func_0x00010c0ef060(param_3);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110db1258;
  puStack_98 = puVar2;
  func_0x00010c0ef060(param_3);
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110ee3058;
  ppuVar4 = param_3;
  puStack_90 = puVar3;
  func_0x00010c0eed00(param_3);
  func_0x00010c0df7c0(puVar5,param_4,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110ee30b8;
  ppuVar4 = param_3;
  puStack_88 = puVar5;
  func_0x00010c0eefc0(param_3);
  func_0x00010c0df7c0(puVar6,param_4,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110de5e58;
  ppuVar4 = param_3;
  puStack_80 = puVar6;
  func_0x00010c094660();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar4;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar7 != (undefined **)0x0) {
    ppuStack_78 = ppuVar7;
  }
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110ee3c58;
  func_0x00010bfe8520();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuStack_70 = param_3;
  }
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_a0,&ppuStack_d8,7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(ppuVar7);
  _objc_release(ppuVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_4,puVar8,0,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(puVar2);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110ee3c78;
}



/* Entry: 10858d854; end: 10858d85f; -[SCTranscodingMetricImageTranscode metricType] */

undefined ** FUN_10858d854(void)

{
  return &PTR____CFConstantStringClassReference_110ee3c78;
}



/* Entry: 10858d860; end: 10858d86f; -[SCTranscodingMetricImageTranscode inputMediaFormat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10858d860(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776888);
}



/* Entry: 10858d870; end: 10858d8af; -[SCTranscodingMetricImageTranscode setInputMediaFormat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10858d870(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112776888;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10858d8b0; end: 10858d8c3; -[SCTranscodingMetricImageTranscode inputResolution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10858d8b0(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112776878);
}



/* Entry: 10858d8c4; end: 10858d8d7; -[SCTranscodingMetricImageTranscode setInputResolution:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10858d8c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112776878;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 10858d8d8; end: 10858d8e7; -[SCTranscodingMetricImageTranscode outputMediaFormat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10858d8d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277688c);
}



/* Entry: 10858d8e8; end: 10858d927; -[SCTranscodingMetricImageTranscode setOutputMediaFormat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10858d8e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277688c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10858d928; end: 10858d937; -[SCTranscodingMetricImageTranscode lensIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10858d928(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776890);
}



/* Entry: 10858d938; end: 10858d977; -[SCTranscodingMetricImageTranscode setLensIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10858d938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112776890;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10858d978; end: 10858d987; -[SCTranscodingMetricImageTranscode imageProcessCommandInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10858d978(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776894);
}



/* Entry: 10858d988; end: 10858d9c7; -[SCTranscodingMetricImageTranscode setImageProcessCommandInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10858d988(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112776894;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10858d9c8; end: 10858d9db; -[SCTranscodingMetricImageTranscode outputResolution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10858d9c8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277687c);
}



/* Entry: 10858d9dc; end: 10858d9ef; -[SCTranscodingMetricImageTranscode setOutputResolution:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10858d9dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277687c;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 10858d9f0; end: 10858d9ff; -[SCTranscodingMetricImageTranscode outputFileSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10858d9f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776880);
}



/* Entry: 10858da00; end: 10858da0f; -[SCTranscodingMetricImageTranscode setOutputFileSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10858da00(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112776880) = param_3;
  return;
}



/* Entry: 10858da10; end: 10858da1f; -[SCTranscodingMetricImageTranscode outputOverlayFileSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10858da10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776884);
}



/* Entry: 10858da20; end: 10858da2f; -[SCTranscodingMetricImageTranscode setOutputOverlayFileSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10858da20(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112776884) = param_3;
  return;
}



/* Entry: 10858da30; end: 10858da8f; -[SCTranscodingMetricImageTranscode .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10858da30(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112776894,0);
  _objc_storeStrong(param_1 + _DAT_112776890,0);
  _objc_storeStrong(param_1 + _DAT_11277688c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112776888,0);
  return;
}



/* Entry: 10858da90; end: 10858df9b; -[SCTranscodingMetricVideoTranscode inputMediaMetadata] */

undefined **
FUN_10858da90(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined **ppuStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined **ppuStack_248;
  long lStack_240;
  undefined **ppuStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined **ppuStack_210;
  undefined *puStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  undefined **ppuStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_180 = &PTR____CFConstantStringClassReference_110ee2ff8;
  ppuVar1 = param_3;
  func_0x00010c0661e0();
  func_0x00010c0df840(puVar2,param_4,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_178 = &PTR____CFConstantStringClassReference_110ee3018;
  ppuVar1 = param_3;
  puStack_188 = puVar2;
  puStack_f8 = puVar2;
  func_0x00010c065c80();
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar1 != (undefined **)0x0) {
    ppuStack_f0 = ppuVar1;
  }
  ppuStack_170 = &PTR____CFConstantStringClassReference_110db1238;
  ppuStack_190 = ppuVar1;
  func_0x00010c065e80(param_3);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110db1258;
  puStack_e8 = puStack_198;
  func_0x00010c065e80(param_3);
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110ee3058;
  ppuVar1 = param_3;
  puStack_1a0 = puVar2;
  puStack_e0 = puVar2;
  func_0x00010c065a40(param_3);
  func_0x00010c0df7c0(puVar3,param_4,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110ee3078;
  ppuVar1 = param_3;
  puStack_1a8 = puVar3;
  puStack_d8 = puVar3;
  func_0x00010c0661c0(param_3);
  func_0x00010c0df840(puVar2,param_4,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110ee3c98;
  ppuVar1 = param_3;
  puStack_1b0 = puVar2;
  puStack_d0 = puVar2;
  func_0x00010c066220(param_3);
  func_0x00010c0df840(puVar3,param_4,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_148 = &PTR____CFConstantStringClassReference_110de5e58;
  ppuVar1 = param_3;
  puStack_1b8 = puVar3;
  puStack_c8 = puVar3;
  func_0x00010c094660();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1c0 = ppuVar1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar1 != (undefined **)0x0) {
    ppuStack_c0 = ppuVar1;
  }
  ppuStack_140 = &PTR____CFConstantStringClassReference_110ee3cb8;
  ppuVar4 = param_3;
  func_0x00010c24b740();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1c8 = ppuVar4;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1d0 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuStack_b8 = ppuVar4;
  }
  ppuStack_138 = &PTR____CFConstantStringClassReference_110ee3cd8;
  func_0x00010c0fff80(param_3);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110ee3098;
  ppuVar5 = param_3;
  puStack_b0 = puStack_1d0;
  func_0x00010c066240(param_3);
  func_0x00010c0df6e0(puVar2,param_4,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110ee3cf8;
  ppuVar5 = param_3;
  puStack_a8 = puVar2;
  func_0x00010c0656a0(param_3);
  func_0x00010c0df840(puVar3,param_4,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110ee3d18;
  ppuVar5 = param_3;
  puStack_a0 = puVar3;
  func_0x00010c241840(param_3);
  func_0x00010c0df6e0(puVar6,param_4,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110ee3d38;
  puStack_98 = puVar6;
  func_0x00010c065a60(param_3);
  func_0x00010c0df740();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110ee3d58;
  ppuVar5 = param_3;
  puStack_90 = puVar7;
  func_0x00010c0656c0(param_3);
  func_0x00010c0df840(puVar8,param_4,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110ee3d78;
  ppuVar5 = param_3;
  puStack_88 = puVar8;
  func_0x00010c065ba0(param_3);
  func_0x00010c0df6e0(puVar9,param_4,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_100 = &PTR____CFConstantStringClassReference_110ea0638;
  puStack_80 = puVar9;
  func_0x00010c243400();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuStack_78 = param_3;
  }
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&puStack_f8,&ppuStack_180,
                      0x11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puStack_1d0);
  _objc_release(ppuVar4);
  _objc_release(ppuStack_1c8);
  _objc_release(ppuVar1);
  _objc_release(ppuStack_1c0);
  _objc_release(puStack_1b8);
  _objc_release(puStack_1b0);
  _objc_release(puStack_1a8);
  _objc_release(puStack_1a0);
  _objc_release(puStack_198);
  _objc_release(ppuStack_190);
  _objc_release(puStack_188);
  puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_4,ppuVar5,0,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  func_0x00010c008340();
  _objc_release(puVar6);
  ppuVar11 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_1d8 = FUN_10858df9c;
    lStack_240 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_380 = &PTR____CFConstantStringClassReference_110ee2fb8;
    ppuVar12 = ppuVar11;
    ppuStack_230 = ppuVar1;
    puStack_228 = puVar8;
    puStack_220 = puVar7;
    puStack_218 = puVar3;
    ppuStack_210 = ppuVar5;
    puStack_208 = puVar2;
    ppuStack_200 = param_3;
    ppuStack_1f8 = ppuVar4;
    puStack_1f0 = puVar6;
    ppuStack_1e8 = ppuVar10;
    puStack_1e0 = &stack0xfffffffffffffff0;
    func_0x00010c279c80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar12;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2e0 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar1 != (undefined **)0x0) {
      ppuStack_2e0 = ppuVar1;
    }
    ppuStack_378 = &PTR____CFConstantStringClassReference_110ee2fd8;
    ppuVar4 = ppuVar11;
    func_0x00010bfe8580();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2d8 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuStack_2d8 = ppuVar4;
    }
    ppuStack_370 = &PTR____CFConstantStringClassReference_110de5e58;
    ppuVar5 = ppuVar11;
    func_0x00010c094660();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar5;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2d0 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar10 != (undefined **)0x0) {
      ppuStack_2d0 = ppuVar10;
    }
    ppuStack_368 = &PTR____CFConstantStringClassReference_110ee2ff8;
    ppuVar13 = ppuVar11;
    func_0x00010c0ef180(ppuVar11);
    func_0x00010c0df840(puVar2,param_4,ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_360 = &PTR____CFConstantStringClassReference_110ee3d98;
    ppuVar13 = ppuVar11;
    puStack_2c8 = puVar2;
    func_0x00010c0ef200(ppuVar11);
    func_0x00010c0df840(puVar3,param_4,ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_358 = &PTR____CFConstantStringClassReference_110ee3db8;
    ppuVar13 = ppuVar11;
    puStack_2c0 = puVar3;
    func_0x00010c0eeb80(ppuVar11);
    func_0x00010c0df840(puVar6,param_4,ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_350 = &PTR____CFConstantStringClassReference_110ee3018;
    ppuVar13 = ppuVar11;
    puStack_2b8 = puVar6;
    func_0x00010c0eeee0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2b0 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar13 != (undefined **)0x0) {
      ppuStack_2b0 = ppuVar13;
    }
    ppuStack_348 = &PTR____CFConstantStringClassReference_110db1238;
    func_0x00010c0ef060(ppuVar11);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_340 = &PTR____CFConstantStringClassReference_110db1258;
    puStack_2a8 = puVar7;
    func_0x00010c0ef060(ppuVar11);
    func_0x00010c0df720(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_338 = &PTR____CFConstantStringClassReference_110ee3058;
    ppuVar14 = ppuVar11;
    puStack_2a0 = puVar8;
    func_0x00010c0eed00(ppuVar11);
    func_0x00010c0df7c0(puVar9,param_4,ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_330 = &PTR____CFConstantStringClassReference_110ee3078;
    ppuVar14 = ppuVar11;
    puStack_298 = puVar9;
    func_0x00010c0ef140(ppuVar11);
    func_0x00010c0df840(puVar15,param_4,ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_328 = &PTR____CFConstantStringClassReference_110ee30b8;
    ppuVar14 = ppuVar11;
    puStack_290 = puVar15;
    func_0x00010c0eefc0(ppuVar11);
    func_0x00010c0df7c0(puVar16,param_4,ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_320 = &PTR____CFConstantStringClassReference_110ee30d8;
    ppuVar14 = ppuVar11;
    puStack_288 = puVar16;
    func_0x00010c0ef1c0(ppuVar11);
    func_0x00010c0df840(puVar17,param_4,ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_318 = &PTR____CFConstantStringClassReference_110ee30f8;
    ppuVar14 = ppuVar11;
    puStack_280 = puVar17;
    func_0x00010c0ef1a0(ppuVar11);
    func_0x00010c0df840(puVar18,param_4,ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_310 = &PTR____CFConstantStringClassReference_110ee3098;
    ppuVar14 = ppuVar11;
    puStack_278 = puVar18;
    func_0x00010c0ef1e0(ppuVar11);
    func_0x00010c0df6e0(puVar19,param_4,ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_308 = &PTR____CFConstantStringClassReference_110ee3dd8;
    ppuVar14 = ppuVar11;
    puStack_270 = puVar19;
    func_0x00010c086da0(ppuVar11);
    func_0x00010c0df840(puVar20,param_4,ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_300 = &PTR____CFConstantStringClassReference_110ee3df8;
    ppuVar14 = ppuVar11;
    puStack_268 = puVar20;
    func_0x00010c07e440(ppuVar11);
    func_0x00010c0df6e0(puVar21,param_4,ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2f8 = &PTR____CFConstantStringClassReference_110ee3d38;
    puStack_260 = puVar21;
    func_0x00010c0eed20(ppuVar11);
    func_0x00010c0df740();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_2f0 = &PTR____CFConstantStringClassReference_110ee3e18;
    ppuVar14 = ppuVar11;
    puStack_258 = puVar22;
    func_0x00010c078ee0(ppuVar11);
    func_0x00010c0df6e0(puVar23,param_4,ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_2e8 = &PTR____CFConstantStringClassReference_110ee3e38;
    puStack_250 = puVar23;
    func_0x00010bfb7460();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_248 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar11 != (undefined **)0x0) {
      ppuStack_248 = ppuVar11;
    }
    puVar24 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_2e0,&ppuStack_380
                        ,0x14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(ppuVar13);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(ppuVar10);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar1);
    _objc_release(ppuVar12);
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_4,puVar24,0,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
    _objc_release(puVar2);
    _objc_release(puVar24);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_240) {
      ___stack_chk_fail();
      return &PTR____CFConstantStringClassReference_110ee3e58;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
  return ppuVar10;
}



/* Entry: 10858df9c; end: 10858e553; -[SCTranscodingMetricVideoTranscode outputMediaMetadata] */

undefined **
FUN_10858df9c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110ee2fb8;
  ppuVar1 = param_3;
  func_0x00010c279c80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_110 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuStack_110 = ppuVar2;
  }
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110ee2fd8;
  ppuVar3 = param_3;
  func_0x00010bfe8580();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_108 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuStack_108 = ppuVar3;
  }
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110de5e58;
  ppuVar4 = param_3;
  func_0x00010c094660();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuStack_100 = ppuVar5;
  }
  ppuStack_198 = &PTR____CFConstantStringClassReference_110ee2ff8;
  ppuVar6 = param_3;
  func_0x00010c0ef180(param_3);
  func_0x00010c0df840(puVar7,param_4,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_190 = &PTR____CFConstantStringClassReference_110ee3d98;
  ppuVar6 = param_3;
  puStack_f8 = puVar7;
  func_0x00010c0ef200(param_3);
  func_0x00010c0df840(puVar8,param_4,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110ee3db8;
  ppuVar6 = param_3;
  puStack_f0 = puVar8;
  func_0x00010c0eeb80(param_3);
  func_0x00010c0df840(puVar9,param_4,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_180 = &PTR____CFConstantStringClassReference_110ee3018;
  ppuVar6 = param_3;
  puStack_e8 = puVar9;
  func_0x00010c0eeee0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuStack_e0 = ppuVar6;
  }
  ppuStack_178 = &PTR____CFConstantStringClassReference_110db1238;
  func_0x00010c0ef060(param_3);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110db1258;
  puStack_d8 = puVar10;
  func_0x00010c0ef060(param_3);
  func_0x00010c0df720(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110ee3058;
  ppuVar12 = param_3;
  puStack_d0 = puVar11;
  func_0x00010c0eed00(param_3);
  func_0x00010c0df7c0(puVar13,param_4,ppuVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110ee3078;
  ppuVar12 = param_3;
  puStack_c8 = puVar13;
  func_0x00010c0ef140(param_3);
  func_0x00010c0df840(puVar14,param_4,ppuVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110ee30b8;
  ppuVar12 = param_3;
  puStack_c0 = puVar14;
  func_0x00010c0eefc0(param_3);
  func_0x00010c0df7c0(puVar15,param_4,ppuVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110ee30d8;
  ppuVar12 = param_3;
  puStack_b8 = puVar15;
  func_0x00010c0ef1c0(param_3);
  func_0x00010c0df840(puVar16,param_4,ppuVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110ee30f8;
  ppuVar12 = param_3;
  puStack_b0 = puVar16;
  func_0x00010c0ef1a0(param_3);
  func_0x00010c0df840(puVar17,param_4,ppuVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110ee3098;
  ppuVar12 = param_3;
  puStack_a8 = puVar17;
  func_0x00010c0ef1e0(param_3);
  func_0x00010c0df6e0(puVar18,param_4,ppuVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110ee3dd8;
  ppuVar12 = param_3;
  puStack_a0 = puVar18;
  func_0x00010c086da0(param_3);
  func_0x00010c0df840(puVar19,param_4,ppuVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110ee3df8;
  ppuVar12 = param_3;
  puStack_98 = puVar19;
  func_0x00010c07e440(param_3);
  func_0x00010c0df6e0(puVar20,param_4,ppuVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110ee3d38;
  puStack_90 = puVar20;
  func_0x00010c0eed20(param_3);
  func_0x00010c0df740();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110ee3e18;
  ppuVar12 = param_3;
  puStack_88 = puVar21;
  func_0x00010c078ee0(param_3);
  func_0x00010c0df6e0(puVar22,param_4,ppuVar12);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_118 = &PTR____CFConstantStringClassReference_110ee3e38;
  puStack_80 = puVar22;
  func_0x00010bfb7460();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuStack_78 = param_3;
  }
  puVar23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_4,&ppuStack_110,&ppuStack_1b0,
                      0x14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(ppuVar6);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_4,puVar23,0,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  _objc_release(puVar7);
  _objc_release(puVar23);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
    return ppuVar1;
  }
  ___stack_chk_fail();
  return &PTR____CFConstantStringClassReference_110ee3e58;
}



/* Entry: 10858e554; end: 10858e55f; -[SCTranscodingMetricVideoTranscode metricType] */

undefined ** FUN_10858e554(void)

{
  return &PTR____CFConstantStringClassReference_110ee3e58;
}



/* Entry: 10858e560; end: 10858e56f; -[SCTranscodingMetricVideoTranscode inputVideoDurationMS] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10858e560(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776898);
}



/* Entry: 10858e570; end: 10858e57f; -[SCTranscodingMetricVideoTranscode setInputVideoDurationMS:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10858e570(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112776898) = param_3;
  return;
}



/* Entry: 10858e580; end: 10858e58f; -[SCTranscodingMetricVideoTranscode inputMediaFormat] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10858e580(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776918);
}



/* Entry: 10858e590; end: 10858e59b; -[SCTranscodingMetricVideoTranscode setInputMediaFormat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10858e590(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10858e59c; end: 10858e5af; -[SCTranscodingMetricVideoTranscode inputResolution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10858e59c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11277689c);
}



/* Entry: 10858e5b0; end: 10858e5c3; -[SCTranscodingMetricVideoTranscode setInputResolution:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10858e5b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277689c;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 10858e5c4; end: 10858e5d3; -[SCTranscodingMetricVideoTranscode inputFileSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10858e5c4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127768a0);
}


