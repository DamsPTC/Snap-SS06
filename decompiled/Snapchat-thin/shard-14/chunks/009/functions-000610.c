/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b71e770; end: 10b71e8bb; -[ZZOldArchiveEntryWriter initWithCentralFileHeader:localFileHeader:shouldSkipLocalFile:] */

undefined1 *
FUN_10b71e770(undefined8 param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_11270a220;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(uint *)((long)puVar1 + 0x10) =
         *(int *)(param_3 + 0x14) + (uint)*(ushort *)(param_4 + 0x1a) +
         (uint)*(ushort *)(param_4 + 0x1c) + (*(ushort *)(param_4 + 6) & 8) * 2 + 0x1e;
    if (param_5 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      _objc_alloc();
      func_0x00010bffa160();
      uVar3 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined **)((long)puVar1 + 8) = puVar2;
      _objc_release(uVar3);
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a40();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined **)((long)puVar1 + 8) = puVar2;
      _objc_release(uVar3);
      puVar2 = (undefined *)0x0;
    }
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b71e8bc; end: 10b71e8fb; -[ZZOldArchiveEntryWriter offsetToLocalFileEnd] */

int FUN_10b71e8bc(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf25f00();
  return *(int *)(param_1 + 0x10) + *(int *)(lVar1 + 0x2a);
}



/* Entry: 10b71e8fc; end: 10b71e99f; -[ZZOldArchiveEntryWriter writeLocalFileToChannelOutput:withInitialSkip:error:] */

undefined8
FUN_10b71e8fc(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = param_3;
    func_0x00010c0e1c40();
    lVar1 = *(long *)(param_1 + 8);
    _objc_retainAutorelease();
    func_0x00010c0d3c60();
    *(int *)(lVar1 + 0x2a) = (int)uVar2 + param_4;
    uVar2 = param_3;
    func_0x00010c2bda20(param_3,param_2,*(undefined8 *)(param_1 + 0x18),param_5);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10b71e9a0; end: 10b71e9af; -[ZZOldArchiveEntryWriter writeCentralFileHeaderToChannelOutput:error:] */

void FUN_10b71e9a0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2bda30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_writeData_error__11268d0b0,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b71e9b0; end: 10b71e9df; -[ZZOldArchiveEntryWriter .cxx_destruct] */

void FUN_10b71e9b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b71e9e0; end: 10b71e9eb; -[SCLensDataConfigServices .cxx_destruct] */

void FUN_10b71e9e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b71e9ec; end: 10b71ea0f; -[SCLensInteractionHistoryConfig copyWithZone:] */

undefined8 FUN_10b71e9ec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b71ea10; end: 10b71ea83; -[SCLensInteractionHistoryConfig hash] */

ulong * FUN_10b71ea10(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  lVar3 = *(long *)(param_1 + 0x20);
  lStack_20 = -lVar3;
  if (-1 < lVar3) {
    lStack_20 = lVar3;
  }
  puVar1 = &uStack_38;
  func_0x000107c3191c(puVar1,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar4 = (ulong *)0x1;
  }
  else {
    puVar4 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar4 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((((char)puVar1[1] != (char)param_3[1] || (puVar1[2] != param_3[2])) ||
          (puVar1[3] != param_3[3])))) {
        puVar4 = (ulong *)0x0;
      }
      else {
        puVar4 = (ulong *)(ulong)(puVar1[4] == param_3[4]);
      }
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b71ea84; end: 10b71eb3b; -[SCLensInteractionHistoryConfig isEqual:] */

bool FUN_10b71ea84(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         (((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
           (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
          (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b71eb3c; end: 10b71eb5f; -[SCLensMixerReloadNamespaceConfig copyWithZone:] */

undefined8 FUN_10b71eb3c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b71eb60; end: 10b71ebc7; -[SCLensMixerReloadNamespaceConfig hash] */

ulong * FUN_10b71eb60(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_20 = *(undefined8 *)(param_1 + 0x18);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == (ulong *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if ((((ulong)puVar3 & 1) == 0) ||
         ((*(char *)((long)puVar2 + 8) != param_3[8] ||
          (*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10))))) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(ulong)(*(long *)((long)puVar2 + 0x18) == *(long *)(param_3 + 0x18));
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 10b71ebc8; end: 10b71ec6f; -[SCLensMixerReloadNamespaceConfig isEqual:] */

bool FUN_10b71ebc8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) ||
         ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b71ec70; end: 10b71ec77; -[SCLensMixerReloadNamespaceConfig interactionsOptimizationEnabled] */

undefined1 FUN_10b71ec70(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b71ec78; end: 10b71ec7f; -[SCLensMixerReloadNamespaceConfig maxTtlOverride] */

undefined8 FUN_10b71ec78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b71ec80; end: 10b71ecbb; -[SCLensDataLoggerServices .cxx_destruct] */

void FUN_10b71ec80(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b71ecbc; end: 10b71ecc3; -[SCLensLoggerServices lensInPreviewLogger] */

undefined8 FUN_10b71ecbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b71ecc4; end: 10b71ecff; -[SCLensLoggerServices .cxx_destruct] */

void FUN_10b71ecc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b71ed00; end: 10b71ed07; -[SCLensUCOLoggerServices swipeFunnelLogger] */

undefined8 FUN_10b71ed00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b71ed08; end: 10b71ed13; -[SCLensUCOLoggerServices .cxx_destruct] */

void FUN_10b71ed08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b71ed14; end: 10b71ed3f; +[SCGrapheneLensMetric fps] */

void FUN_10b71ed14(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71ed40; end: 10b71ed6b; +[SCGrapheneLensMetric videoRecordFps] */

void FUN_10b71ed40(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71ed6c; end: 10b71ed97; +[SCGrapheneLensMetric frameTime] */

void FUN_10b71ed6c(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71ed98; end: 10b71edc3; +[SCGrapheneLensMetric videoRecordFrameTime] */

void FUN_10b71ed98(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71edc4; end: 10b71edef; +[SCGrapheneLensMetric initDelay] */

void FUN_10b71edc4(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71edf0; end: 10b71ee1b; +[SCGrapheneLensMetric tapToActivate] */

void FUN_10b71edf0(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71ee1c; end: 10b71ee47; +[SCGrapheneLensMetric flagStillSet] */

void FUN_10b71ee1c(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71ee48; end: 10b71ee73; +[SCGrapheneLensMetric handledException] */

void FUN_10b71ee48(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71ee74; end: 10b71ee9f; +[SCGrapheneLensMetric assetValidationFailed] */

void FUN_10b71ee74(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71eea0; end: 10b71eecb; +[SCGrapheneLensMetric validationFailed] */

void FUN_10b71eea0(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71eecc; end: 10b71eef7; +[SCGrapheneLensMetric cacheSize] */

void FUN_10b71eecc(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71eef8; end: 10b71ef23; +[SCGrapheneLensMetric amountCached] */

void FUN_10b71eef8(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71ef24; end: 10b71ef4f; +[SCGrapheneLensMetric imageProcessError] */

void FUN_10b71ef24(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71ef50; end: 10b71ef7b; +[SCGrapheneLensMetric snappableInviteLoad] */

void FUN_10b71ef50(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71ef7c; end: 10b71efa7; +[SCGrapheneLensMetric sessionMetadataMissing] */

void FUN_10b71ef7c(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71efa8; end: 10b71efd3; +[SCGrapheneLensMetric unlockFailed] */

void FUN_10b71efa8(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71efd4; end: 10b71efff; +[SCGrapheneLensMetric assetDownloadStarted] */

void FUN_10b71efd4(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f000; end: 10b71f02b; +[SCGrapheneLensMetric assetDownloadFinished] */

void FUN_10b71f000(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f02c; end: 10b71f057; +[SCGrapheneLensMetric assetUploadStarted] */

void FUN_10b71f02c(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f058; end: 10b71f083; +[SCGrapheneLensMetric assetUploadFinished] */

void FUN_10b71f058(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f084; end: 10b71f0af; +[SCGrapheneLensMetric assetResourceLookupFinished] */

void FUN_10b71f084(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f0b0; end: 10b71f0db; +[SCGrapheneLensMetric lensDownload] */

void FUN_10b71f0b0(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f0dc; end: 10b71f107; +[SCGrapheneLensMetric uploadAssetMissed] */

void FUN_10b71f0dc(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f108; end: 10b71f133; +[SCGrapheneLensMetric scheduleDataUpdate] */

void FUN_10b71f108(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f134; end: 10b71f15f; +[SCGrapheneLensMetric contentRedownload] */

void FUN_10b71f134(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f160; end: 10b71f18b; +[SCGrapheneLensMetric getUnlocksRequestSuccess] */

void FUN_10b71f160(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f18c; end: 10b71f1b7; +[SCGrapheneLensMetric getUnlocksRequestError] */

void FUN_10b71f18c(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f1b8; end: 10b71f1e3; +[SCGrapheneLensMetric getUnlocksResponse] */

void FUN_10b71f1b8(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f1e4; end: 10b71f20f; +[SCGrapheneLensMetric addUnlockRequestSuccess] */

void FUN_10b71f1e4(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f210; end: 10b71f23b; +[SCGrapheneLensMetric addUnlockRequestError] */

void FUN_10b71f210(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f23c; end: 10b71f267; +[SCGrapheneLensMetric removeUnlockRequestSuccess] */

void FUN_10b71f23c(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f268; end: 10b71f293; +[SCGrapheneLensMetric removeUnlockRequestError] */

void FUN_10b71f268(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f294; end: 10b71f2bf; +[SCGrapheneLensMetric metadataRequestSuccess] */

void FUN_10b71f294(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f2c0; end: 10b71f2eb; +[SCGrapheneLensMetric metadataRequestError] */

void FUN_10b71f2c0(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f2ec; end: 10b71f317; +[SCGrapheneLensMetric assetDiskVerification] */

void FUN_10b71f2ec(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f318; end: 10b71f343; +[SCGrapheneLensMetric scheduleRequest] */

void FUN_10b71f318(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f344; end: 10b71f36f; +[SCGrapheneLensMetric scheduleResponse] */

void FUN_10b71f344(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f370; end: 10b71f39b; +[SCGrapheneLensMetric scheduleLatency] */

void FUN_10b71f370(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f39c; end: 10b71f3c7; +[SCGrapheneLensMetric lensResponseConverting] */

void FUN_10b71f39c(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f3c8; end: 10b71f3f3; +[SCGrapheneLensMetric mixerLocation] */

void FUN_10b71f3c8(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f3f4; end: 10b71f41f; +[SCGrapheneLensMetric mixerLocationLatency] */

void FUN_10b71f3f4(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f420; end: 10b71f44b; +[SCGrapheneLensMetric mixerLocationAge] */

void FUN_10b71f420(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f44c; end: 10b71f477; +[SCGrapheneLensMetric mixerLocationAccuracy] */

void FUN_10b71f44c(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f478; end: 10b71f4a3; +[SCGrapheneLensMetric mixerCtItemsIncluded] */

void FUN_10b71f478(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f4a4; end: 10b71f4cf; +[SCGrapheneLensMetric metadataRetrieveAccess] */

void FUN_10b71f4a4(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f4d0; end: 10b71f4fb; +[SCGrapheneLensMetric metadataRetrieveLatency] */

void FUN_10b71f4d0(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f4fc; end: 10b71f527; +[SCGrapheneLensMetric metadataRetrieveAllAccess] */

void FUN_10b71f4fc(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f528; end: 10b71f553; +[SCGrapheneLensMetric metadataRetrieveAllLatency] */

void FUN_10b71f528(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f554; end: 10b71f57f; +[SCGrapheneLensMetric metadataCacheCount] */

void FUN_10b71f554(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f580; end: 10b71f5ab; +[SCGrapheneLensMetric metadataCacheExpiredCount] */

void FUN_10b71f580(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f5ac; end: 10b71f5d7; +[SCGrapheneLensMetric fallbackLinkUsage] */

void FUN_10b71f5ac(void)

{
  _objc_alloc(PTR_PTR_1126bb928);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b71f5d8; end: 10b71f677; -[SCGrapheneLensMetric description] */

void FUN_10b71f5d8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e3ddf8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e3ddf8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_11270a258;
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



/* Entry: 10b71f678; end: 10b71f8c7;  */

void FUN_10b71f678(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110d59c98;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110d59c98);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f7a3498;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_78,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar3 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_60,puVar3);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
      puVar2 = &UNK_110d59c98;
      puVar3 = &uStack_98;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d59c98,puVar3,param_5);
      puStack_80 = &uStack_98;
      func_0x000107c278ac(&puStack_80);
      lVar5 = 0;
      do {
        if ((&cStack_49)[lVar5] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar5));
        }
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x30);
    }
  }
  _objc_release(param_4);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  if (puVar4 != (undefined *)0x0) {
    FUN_10b71f678(puVar4,puVar2,puVar3,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b71f8c8; end: 10b71f95b;  */

void FUN_10b71f8c8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_10b71f678(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b71f95c; end: 10b71fbab;  */

void FUN_10b71f95c(double param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 auStack_238 [2];
  char cStack_221;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  long *plStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar9 = param_4;
  puVar5 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != (undefined8 *)0x0) {
    plVar1 = (long *)param_2[1];
    puVar2 = (undefined8 *)&UNK_110d59ce8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)param_2[1];
      _objc_retain(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      unaff_x24 = auStack_78;
      func_0x000107c278b8(auStack_78,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_60,puVar2);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
      puVar2 = (undefined8 *)&UNK_110d59ce8;
      unaff_x23 = &uStack_98;
      puVar9 = &uStack_98;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d59ce8,puVar9,param_5);
      puStack_80 = unaff_x23;
      func_0x000107c278ac(&puStack_80);
      lVar13 = 0;
      param_2 = auStack_78;
      puVar5 = param_5;
      do {
        if ((&cStack_49)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_10b71fbac;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar7 = puVar9;
  puVar12 = puVar5;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_2;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar9);
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar4[1];
    puVar8 = (undefined8 *)&UNK_110d59d38;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)puVar4[1];
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      unaff_x24 = auStack_118;
      func_0x000107c278b8(auStack_118,puVar3);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar3 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x000107c278b8(auStack_100,puVar3);
      uStack_138 = 0;
      uStack_130 = 0;
      uStack_128 = 0;
      func_0x000107c27984(&uStack_138,auStack_118,&lStack_e8,2);
      puVar12 = (undefined8 *)((long)puVar5 * 10);
      puVar8 = (undefined8 *)&UNK_110d59d38;
      unaff_x23 = &uStack_138;
      puVar7 = &uStack_138;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d59d38,puVar7,puVar12);
      puStack_120 = unaff_x23;
      func_0x000107c278ac(&puStack_120);
      lVar13 = 0;
      puVar4 = auStack_118;
      do {
        if ((&cStack_e9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
  }
  _objc_release(puVar9);
  puVar5 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar9);
  _objc_release(puVar2);
  puVar6 = puVar5;
  __Unwind_Resume();
  puVar11 = &uStack_1c0;
  pcStack_148 = FUN_10b71fe00;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar8;
  puVar10 = puVar7;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar4;
  puStack_168 = puVar5;
  puStack_160 = puVar9;
  puStack_158 = puVar2;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar8);
  plVar1 = (long *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar6[1];
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      puVar2 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x23 = auStack_1a0;
    func_0x000107c278b8(auStack_1a0,puVar2);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x000107c27984(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar3 = (undefined8 *)&UNK_110d59d88;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d59d88,&uStack_1c0,puVar7);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x000107c278ac(&puStack_1a8);
    puVar10 = puVar11;
    puVar12 = puVar7;
    puVar4 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar10 = puVar11;
      puVar12 = puVar7;
      puVar4 = &uStack_1c0;
    }
  }
  puVar2 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  _objc_release(puVar8);
  puVar7 = puVar2;
  __Unwind_Resume();
  pcStack_1c8 = FUN_10b71ff74;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar3;
  puVar5 = puVar10;
  puStack_200 = unaff_x24;
  puStack_1f8 = unaff_x23;
  puStack_1f0 = puVar4;
  plStack_1e8 = plVar1;
  puStack_1e0 = puVar2;
  puStack_1d8 = puVar8;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(puVar3);
  _objc_retain(puVar10);
  if (puVar7 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar7[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_238,puVar2);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar2 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x000107c278b8(auStack_220,puVar2);
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_248 = 0;
    func_0x000107c27984(&uStack_258,auStack_238,&lStack_208,2);
    puVar9 = (undefined8 *)&UNK_110d59dd8;
    puVar5 = &uStack_258;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d59dd8,puVar5,puVar12);
    puStack_240 = &uStack_258;
    func_0x000107c278ac(&puStack_240);
    lVar13 = 0;
    do {
      if ((&cStack_209)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar10);
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar10);
  if (cStack_221 < '\0') {
    __ZdlPv(auStack_238[0]);
  }
  _objc_release(puVar10);
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain(puVar9);
  _objc_retain(puVar5);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_10b71ff74(puVar2,puVar9,puVar5,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 10b71fbac; end: 10b71fdff;  */

void FUN_10b71fbac(double param_1,undefined8 *param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar3 = param_4;
  puVar10 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != (undefined8 *)0x0) {
    plVar1 = (long *)param_2[1];
    puVar2 = &UNK_110d59d38;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)param_2[1];
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f7a3498;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      unaff_x24 = auStack_78;
      func_0x000107c278b8(auStack_78,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar3 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_60,puVar3);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
      puVar10 = (undefined8 *)((long)param_5 * 10);
      puVar2 = &UNK_110d59d38;
      unaff_x23 = &uStack_98;
      puVar3 = &uStack_98;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d59d38,puVar3,puVar10);
      puStack_80 = unaff_x23;
      func_0x000107c278ac(&puStack_80);
      lVar11 = 0;
      param_2 = auStack_78;
      do {
        if ((&cStack_49)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x30);
    }
  }
  _objc_release(param_4);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar5 = puVar4;
  __Unwind_Resume();
  puVar9 = &uStack_120;
  pcStack_a8 = FUN_10b71fe00;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar8 = puVar3;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_2;
  puStack_c8 = puVar4;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  plVar1 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = &UNK_10f7a3498;
    }
    else {
      puVar4 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,puVar4);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar7 = &UNK_110d59d88;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d59d88,&uStack_120,puVar3);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar8 = puVar9;
    puVar10 = puVar3;
    param_2 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar8 = puVar9;
      puVar10 = puVar3;
      param_2 = &uStack_120;
    }
  }
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar6 = puVar4;
  __Unwind_Resume();
  pcStack_128 = FUN_10b71ff74;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar7;
  puVar3 = puVar8;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = param_2;
  plStack_148 = plVar1;
  puStack_140 = puVar4;
  puStack_138 = puVar2;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  if (puVar6 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f7a3498;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_198,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar3 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_180,puVar3);
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x000107c27984(&uStack_1b8,auStack_198,&lStack_168,2);
    puVar5 = &UNK_110d59dd8;
    puVar3 = &uStack_1b8;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d59dd8,puVar3,puVar10);
    puStack_1a0 = &uStack_1b8;
    func_0x000107c278ac(&puStack_1a0);
    lVar11 = 0;
    do {
      if ((&cStack_169)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar8);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  __Unwind_Resume();
  _objc_retain(puVar5);
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_10b71ff74(puVar2,puVar5,puVar3,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10b71fe00; end: 10b71ff73;  */

void FUN_10b71fe00(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110d59d88;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110d59d88,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = puVar3;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar3 = puVar5;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  if (puVar2 != (undefined *)0x0) {
    plVar6 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f7a3498;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_f8,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar4 = &UNK_110d59dd8;
    puVar3 = &uStack_118;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110d59dd8,puVar3,param_5);
    puStack_100 = &uStack_118;
    func_0x000107c278ac(&puStack_100);
    lVar7 = 0;
    do {
      if ((&cStack_c9)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_10b71ff74(puVar2,puVar4,puVar3,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b71ff74; end: 10b7201a3;  */

void FUN_10b71ff74(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110d59dd8;
    puVar2 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110d59dd8,puVar2,param_5);
    puStack_80 = &uStack_98;
    func_0x000107c278ac(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_10b71ff74(puVar3,puVar1,puVar2,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b7201a4; end: 10b720237;  */

void FUN_10b7201a4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_10b71ff74(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b720238; end: 10b720467;  */

void FUN_10b720238(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar8 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110d59e28;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110d59e28,puVar2,param_5);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar6 = 0;
    puVar8 = auStack_78;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_10b720468;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar8;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar4 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f7a3498;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar5 = &UNK_110d59e78;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110d59e78,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar5);
  if (puVar3 != (undefined *)0x0) {
    FUN_10b720468(puVar3,puVar5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10b720468; end: 10b7205db;  */

void FUN_10b720468(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110d59e78;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110d59e78,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_10b720468(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b7205dc; end: 10b720647;  */

void FUN_10b7205dc(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_10b720468(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b720648; end: 10b7207bb;  */

void FUN_10b720648(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110d59ec8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110d59ec8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_10b7207bc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f7a3498;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110d59f18;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110d59f18,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_10b720930;
  if (puVar3 != (undefined *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    puStack_120 = puVar2;
    puStack_118 = puVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110d59f68,&uStack_140,puVar4);
    func_0x000107c278ac(&puStack_128);
  }
  return;
}



/* Entry: 10b7207bc; end: 10b72092f;  */

void FUN_10b7207bc(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110d59f18;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110d59f18,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_10b720930;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110d59f68,&uStack_c0,puVar1);
    func_0x000107c278ac(&puStack_a8);
  }
  return;
}



/* Entry: 10b720930; end: 10b7209a7;  */

void FUN_10b720930(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110d59f68,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10b7209a8; end: 10b720bd7;  */

void FUN_10b7209a8(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar11 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110d59fb8;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110d59fb8,puVar2,param_5);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_10b720bd8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f7a3498;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar6 = &UNK_110d5a008;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110d5a008,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar7 = puVar8;
    puVar11 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar11 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_10b720d4c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar11;
  plStack_148 = plVar10;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar6);
  if (puVar5 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar4 = &UNK_110d5a058;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110d5a058,&uStack_1a0,puVar7);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  __Unwind_Resume();
  _objc_retain(puVar4);
  if (puVar1 != (undefined *)0x0) {
    FUN_10b720d4c(puVar1,puVar4,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b720bd8; end: 10b720d4b;  */

void FUN_10b720bd8(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110d5a008;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110d5a008,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar6 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f7a3498;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110d5a058;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110d5a058,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_10b720d4c(puVar2,puVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b720d4c; end: 10b720ebf;  */

void FUN_10b720d4c(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110d5a058;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110d5a058,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_10b720d4c(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b720ec0; end: 10b720f2b;  */

void FUN_10b720ec0(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_10b720d4c(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b720f2c; end: 10b72109f;  */

/* WARNING: Removing unreachable block (ram,0x00010b721328) */

void FUN_10b720f2c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *unaff_x24;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [3];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110d5a0a8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar8 = &uStack_140;
  pcStack_88 = FUN_10b7210a0;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar3 = puVar5;
  puVar10 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  _objc_retain(param_4);
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f7a3498;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_120,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_108,puVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_f0,puVar3);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x000107c27984(&uStack_140,auStack_120,&lStack_d8,3);
    puVar6 = &UNK_110d5a0f8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110d5a0f8,&uStack_140,param_5);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x000107c278ac(&puStack_128);
    lVar13 = 0;
    puVar3 = puVar8;
    puVar10 = param_5;
    do {
      if ((&cStack_d9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &uStack_140;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar8 = auStack_120;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar8);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_10b721360;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar9 = puVar3;
  puVar11 = puVar10;
  puStack_180 = unaff_x24;
  puStack_178 = puVar8;
  puStack_170 = puVar2;
  puStack_168 = param_4;
  puStack_160 = puVar5;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_90;
  _objc_retain(puVar6);
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x24 = auStack_1b8;
    func_0x000107c278b8(auStack_1b8,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_1a0,puVar5);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x000107c27984(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar7 = &UNK_110d5a148;
    puVar8 = &uStack_1d8;
    puVar9 = &uStack_1d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110d5a148,puVar9,puVar10);
    puStack_1c0 = puVar8;
    func_0x000107c278ac(&puStack_1c0);
    lVar13 = 0;
    puVar5 = auStack_1b8;
    puVar11 = puVar10;
    do {
      if ((&cStack_189)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(puVar3);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    _objc_release(puVar3);
    if (cStack_1a1 < '\0') {
      __ZdlPv(auStack_1b8[0]);
    }
    _objc_release(puVar3);
    _objc_release(puVar6);
    puVar4 = puVar1;
    __Unwind_Resume();
    pcStack_1e8 = FUN_10b721590;
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = puVar7;
    puStack_220 = unaff_x24;
    puStack_218 = puVar8;
    puStack_210 = puVar5;
    puStack_208 = puVar1;
    puStack_200 = puVar3;
    puStack_1f8 = puVar6;
    pppuStack_1f0 = &ppuStack_150;
    _objc_retain(puVar7);
    _objc_retain(puVar9);
    if (puVar4 != (undefined *)0x0) {
      plVar12 = *(long **)(puVar4 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f7a3498;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      func_0x000107c278b8(auStack_258,puVar1);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar5 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x000107c278b8(auStack_240,puVar5);
      uStack_278 = 0;
      uStack_270 = 0;
      uStack_268 = 0;
      func_0x000107c27984(&uStack_278,auStack_258,&lStack_228,2);
      puVar2 = &UNK_110d5a198;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110d5a198,&uStack_278,puVar11);
      puStack_260 = &uStack_278;
      func_0x000107c278ac(&puStack_260);
      lVar13 = 0;
      do {
        if ((&cStack_229)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(puVar9);
    puVar1 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
      ___stack_chk_fail();
      _objc_release(puVar9);
      if (cStack_241 < '\0') {
        __ZdlPv(auStack_258[0]);
      }
      _objc_release(puVar9);
      _objc_release(puVar7);
      __Unwind_Resume();
      puStack_2a8 = (undefined1 *)&uStack_2c0;
      pcStack_288 = FUN_10b7217c0;
      if (puVar1 != (undefined *)0x0) {
        uStack_2c0 = 0;
        uStack_2b8 = 0;
        uStack_2b0 = 0;
        puStack_2a0 = puVar9;
        puStack_298 = puVar7;
        pppuStack_290 = &pppuStack_1f0;
        (**(code **)(**(long **)(puVar1 + 8) + 0x18))
                  (*(long **)(puVar1 + 8),&UNK_110d5a1e8,&uStack_2c0,puVar2);
        func_0x000107c278ac(&puStack_2a8);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b7210a0; end: 10b72135f;  */

/* WARNING: Removing unreachable block (ram,0x00010b721328) */

void FUN_10b7210a0(long param_1,undefined *param_2,undefined8 *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *unaff_x24;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 *puStack_220;
  undefined *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar5 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110d5a0f8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110d5a0f8,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar10 = 0;
    puVar2 = puVar5;
    puVar6 = param_5;
    do {
      if ((&cStack_59)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar5 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_c8 = FUN_10b721360;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puVar9 = puVar6;
  puStack_100 = unaff_x24;
  puStack_f8 = puVar5;
  puStack_f0 = puVar3;
  puStack_e8 = param_4;
  puStack_e0 = param_3;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar11 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f7a3498;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_138;
    func_0x000107c278b8(auStack_138,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_120,puVar5);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x000107c27984(&uStack_158,auStack_138,&lStack_108,2);
    puVar7 = &UNK_110d5a148;
    puVar5 = &uStack_158;
    puVar8 = &uStack_158;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110d5a148,puVar8,puVar6);
    puStack_140 = puVar5;
    func_0x000107c278ac(&puStack_140);
    lVar10 = 0;
    puVar11 = auStack_138;
    puVar9 = puVar6;
    do {
      if ((&cStack_109)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar2);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar4 = puVar6;
    __Unwind_Resume();
    pcStack_168 = FUN_10b721590;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar7;
    puStack_1a0 = unaff_x24;
    puStack_198 = puVar5;
    puStack_190 = puVar11;
    puStack_188 = puVar6;
    puStack_180 = puVar2;
    puStack_178 = puVar1;
    ppuStack_170 = &puStack_d0;
    _objc_retain(puVar7);
    _objc_retain(puVar8);
    if (puVar4 != (undefined *)0x0) {
      plVar12 = *(long **)(puVar4 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f7a3498;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      func_0x000107c278b8(auStack_1d8,puVar1);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar2 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x000107c278b8(auStack_1c0,puVar2);
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      func_0x000107c27984(&uStack_1f8,auStack_1d8,&lStack_1a8,2);
      puVar3 = &UNK_110d5a198;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110d5a198,&uStack_1f8,puVar9);
      puStack_1e0 = &uStack_1f8;
      func_0x000107c278ac(&puStack_1e0);
      lVar10 = 0;
      do {
        if ((&cStack_1a9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x30);
    }
    _objc_release(puVar8);
    puVar1 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(puVar8);
      if (cStack_1c1 < '\0') {
        __ZdlPv(auStack_1d8[0]);
      }
      _objc_release(puVar8);
      _objc_release(puVar7);
      __Unwind_Resume();
      puStack_228 = (undefined1 *)&uStack_240;
      pcStack_208 = FUN_10b7217c0;
      if (puVar1 != (undefined *)0x0) {
        uStack_240 = 0;
        uStack_238 = 0;
        uStack_230 = 0;
        puStack_220 = puVar8;
        puStack_218 = puVar7;
        pppuStack_210 = &ppuStack_170;
        (**(code **)(**(long **)(puVar1 + 8) + 0x18))
                  (*(long **)(puVar1 + 8),&UNK_110d5a1e8,&uStack_240,puVar3);
        func_0x000107c278ac(&puStack_228);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10b721360; end: 10b72158f;  */

void FUN_10b721360(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  uVar7 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110d5a148;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110d5a148,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar8 = 0;
    puVar5 = auStack_78;
    uVar7 = param_4;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_10b721590;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar4 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f7a3498;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x000107c27984(&uStack_138,auStack_118,&lStack_e8,2);
    puVar6 = &UNK_110d5a198;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110d5a198,&uStack_138,uVar7);
    puStack_120 = &uStack_138;
    func_0x000107c278ac(&puStack_120);
    lVar8 = 0;
    do {
      if ((&cStack_e9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  puStack_168 = (undefined1 *)&uStack_180;
  pcStack_148 = FUN_10b7217c0;
  if (puVar3 != (undefined *)0x0) {
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    puStack_160 = puVar2;
    puStack_158 = puVar1;
    ppuStack_150 = &puStack_b0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110d5a1e8,&uStack_180,puVar6);
    func_0x000107c278ac(&puStack_168);
  }
  return;
}



/* Entry: 10b721590; end: 10b7217bf;  */

void FUN_10b721590(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110d5a198;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110d5a198,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x000107c278ac(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_10b7217c0;
  if (puVar2 != (undefined *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_c0 = param_3;
    puStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_110d5a1e8,&uStack_e0,puVar1);
    func_0x000107c278ac(&puStack_c8);
  }
  return;
}



/* Entry: 10b7217c0; end: 10b721837;  */

void FUN_10b7217c0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110d5a1e8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10b721838; end: 10b721a67;  */

void FUN_10b721838(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  puVar9 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar12 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110d5a238;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110d5a238,puVar2,param_5);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar10 = 0;
    puVar12 = auStack_78;
    puVar9 = param_5;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_10b721a68;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar12;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f7a3498;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar6 = &UNK_110d5a288;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110d5a288,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar7 = puVar8;
    puVar9 = puVar2;
    puVar12 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar9 = puVar2;
      puVar12 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_10b721bdc;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puVar2 = puVar7;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar12;
  plStack_148 = plVar11;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  if (puVar5 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar5 + 8);
    puVar4 = &UNK_110d5a2d8;
    (**(code **)(*plVar11 + 0x28))(plVar11,&UNK_110d5a2d8);
    if ((int)plVar11 != 0) {
      plVar11 = *(long **)(puVar5 + 8);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar1 = &UNK_10f7a3498;
      }
      else {
        puVar1 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      func_0x000107c278b8(auStack_198,puVar1);
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(puVar7);
        puVar2 = puVar7;
        func_0x00010bdc3520(puVar7);
      }
      _objc_release(puVar7);
      func_0x000107c278b8(auStack_180,puVar2);
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      func_0x000107c27984(&uStack_1b8,auStack_198,&lStack_168,2);
      puVar4 = &UNK_110d5a2d8;
      puVar2 = &uStack_1b8;
      (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110d5a2d8,puVar2,puVar9);
      puStack_1a0 = &uStack_1b8;
      func_0x000107c278ac(&puStack_1a0);
      lVar10 = 0;
      do {
        if ((&cStack_169)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x30);
    }
  }
  _objc_release(puVar7);
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  __Unwind_Resume();
  _objc_retain(puVar4);
  _objc_retain(puVar2);
  if (puVar1 != (undefined *)0x0) {
    FUN_10b721bdc(puVar1,puVar4,puVar2,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b721a68; end: 10b721bdb;  */

void FUN_10b721a68(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f7a3498;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110d5a288;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110d5a288,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = puVar3;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar3 = puVar5;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  if (puVar2 != (undefined *)0x0) {
    plVar6 = *(long **)(puVar2 + 8);
    puVar4 = &UNK_110d5a2d8;
    (**(code **)(*plVar6 + 0x28))(plVar6,&UNK_110d5a2d8);
    if ((int)plVar6 != 0) {
      plVar6 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f7a3498;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x000107c278b8(auStack_f8,puVar2);
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar3 = puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x000107c278b8(auStack_e0,puVar3);
      uStack_118 = 0;
      uStack_110 = 0;
      uStack_108 = 0;
      func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
      puVar4 = &UNK_110d5a2d8;
      puVar3 = &uStack_118;
      (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110d5a2d8,puVar3,param_5);
      puStack_100 = &uStack_118;
      func_0x000107c278ac(&puStack_100);
      lVar7 = 0;
      do {
        if ((&cStack_c9)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != -0x30);
    }
  }
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar5);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_10b721bdc(puVar2,puVar4,puVar3,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10b721bdc; end: 10b721e2b;  */

void FUN_10b721bdc(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110d5a2d8;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110d5a2d8);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f7a3498;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_78,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar3 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_60,puVar3);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
      puVar2 = &UNK_110d5a2d8;
      puVar3 = &uStack_98;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d5a2d8,puVar3,param_5);
      puStack_80 = &uStack_98;
      func_0x000107c278ac(&puStack_80);
      lVar5 = 0;
      do {
        if ((&cStack_49)[lVar5] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar5));
        }
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x30);
    }
  }
  _objc_release(param_4);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  if (puVar4 != (undefined *)0x0) {
    FUN_10b721bdc(puVar4,puVar2,puVar3,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b721e2c; end: 10b721ebf;  */

void FUN_10b721e2c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_10b721bdc(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b721ec0; end: 10b7220ef;  */

/* WARNING: Removing unreachable block (ram,0x00010b722504) */
/* WARNING: Removing unreachable block (ram,0x00010b72285c) */

undefined8 *
FUN_10b721ec0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *unaff_x23;
  long lVar17;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *puStack_390;
  undefined *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [3];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 auStack_1c0 [3];
  undefined1 auStack_1a8 [24];
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  puVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = (undefined8 *)&UNK_110d5a328;
    unaff_x23 = &uStack_98;
    puVar5 = &uStack_98;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar15 = 0;
    puVar4 = auStack_78;
    puVar9 = param_4;
    do {
      if ((&cStack_49)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_120;
  pcStack_a8 = FUN_10b7220f0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar13 = puVar5;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar4;
  puStack_c8 = puVar2;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar3 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar3[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      puVar4 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_100,puVar4);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar8 = (undefined8 *)&UNK_110d5a378;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar13 = puVar10;
    puVar9 = puVar5;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar13 = puVar10;
      puVar9 = puVar5;
    }
  }
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar10 = &uStack_1e0;
  pcStack_128 = FUN_10b722264;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar8;
  puVar4 = puVar13;
  puVar2 = puVar9;
  puVar3 = param_5;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar8);
  _objc_retain(puVar13);
  _objc_retain(puVar9);
  if (puVar5 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar5[1];
    puVar1 = (undefined8 *)&UNK_110d5a3c8;
    (**(code **)(*plVar16 + 0x28))();
    if ((int)plVar16 != 0) {
      plVar16 = (long *)puVar5[1];
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        puVar1 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      func_0x000107c278b8(auStack_1c0,puVar1);
      _objc_retain(puVar13);
      if (puVar13 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar1 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x000107c278b8(auStack_1a8,puVar1);
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        unaff_x25 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(puVar9);
        unaff_x25 = puVar9;
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      func_0x000107c278b8(auStack_190,unaff_x25);
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      func_0x000107c27984(&uStack_1e0,auStack_1c0,&lStack_178,3);
      puVar1 = (undefined8 *)&UNK_110d5a3c8;
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puStack_1c8 = (undefined1 *)&uStack_1e0;
      func_0x000107c278ac(&puStack_1c8);
      lVar15 = 0;
      puVar4 = puVar10;
      puVar2 = param_5;
      do {
        if ((&cStack_179)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
        unaff_x24 = &uStack_1e0;
      } while (lVar15 != -0x48);
    }
  }
  _objc_release(puVar9);
  _objc_release(puVar13);
  puVar5 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != auStack_1c0);
    _objc_release(puVar9);
    _objc_release(puVar13);
    _objc_release(puVar8);
    __Unwind_Resume();
    pcStack_1e8 = FUN_10b722544;
    lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar1;
    puVar8 = puVar4;
    puVar13 = puVar2;
    puVar10 = puVar3;
    lVar15 = param_6;
    pppuStack_1f0 = &ppuStack_130;
    _objc_retain(puVar1);
    _objc_retain(puVar4);
    _objc_retain(puVar2);
    _objc_retain(puVar3);
    if (puVar5 != (undefined8 *)0x0) {
      plVar16 = (long *)puVar5[1];
      puVar9 = (undefined8 *)&UNK_110d5a418;
      (**(code **)(*plVar16 + 0x28))();
      if ((int)plVar16 != 0) {
        plVar16 = (long *)puVar5[1];
        _objc_retain(puVar1);
        if (puVar1 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)&UNK_10f7a3498;
        }
        else {
          puVar5 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
        }
        _objc_release(puVar1);
        func_0x000107c278b8(auStack_298,puVar5);
        _objc_retain(puVar4);
        if (puVar4 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)&UNK_10f7a3498;
        }
        else {
          _objc_retainAutorelease(puVar4);
          puVar5 = puVar4;
          func_0x00010bdc3520(puVar4);
        }
        _objc_release(puVar4);
        func_0x000107c278b8(auStack_280,puVar5);
        _objc_retain(puVar2);
        if (puVar2 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)&UNK_10f7a3498;
        }
        else {
          _objc_retainAutorelease(puVar2);
          puVar5 = puVar2;
          func_0x00010bdc3520(puVar2);
        }
        _objc_release(puVar2);
        func_0x000107c278b8(auStack_268,puVar5);
        _objc_retain(puVar3);
        if (puVar3 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)&UNK_10f7a3498;
        }
        else {
          _objc_retainAutorelease(puVar3);
          puVar5 = puVar3;
          func_0x00010bdc3520(puVar3);
        }
        _objc_release(puVar3);
        func_0x000107c278b8(auStack_250,puVar5);
        uStack_2b8 = 0;
        uStack_2b0 = 0;
        uStack_2a8 = 0;
        func_0x000107c27984(&uStack_2b8,auStack_298,&lStack_238,4);
        puVar13 = (undefined8 *)(param_6 * 10);
        puVar9 = (undefined8 *)&UNK_110d5a418;
        unaff_x25 = &uStack_2b8;
        puVar8 = &uStack_2b8;
        (**(code **)(*plVar16 + 0x18))(plVar16);
        puStack_2a0 = unaff_x25;
        func_0x000107c278ac(&puStack_2a0);
        lVar17 = 0;
        do {
          if ((&cStack_239)[lVar17] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar17));
          }
          lVar17 = lVar17 + -0x18;
        } while (lVar17 != -0x60);
      }
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar4);
    puVar5 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
      ___stack_chk_fail();
      _objc_release(puVar3);
      do {
        unaff_x25 = unaff_x25 + -3;
      } while (unaff_x25 != auStack_298);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar1);
      puVar6 = puVar5;
      __Unwind_Resume();
      puVar12 = &uStack_340;
      pcStack_2c8 = FUN_10b72289c;
      lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar11 = puVar8;
      puStack_300 = auStack_298;
      puStack_2f8 = puVar5;
      puStack_2f0 = puVar3;
      puStack_2e8 = puVar2;
      puStack_2e0 = puVar4;
      puStack_2d8 = puVar1;
      pppuStack_2d0 = &pppuStack_1f0;
      _objc_retain(puVar9);
      plVar16 = (long *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        plVar16 = (long *)puVar6[1];
        _objc_retain(puVar9);
        if (puVar9 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f7a3498;
        }
        else {
          puVar1 = puVar9;
          _objc_retainAutorelease(puVar9);
          func_0x00010bdc3520();
        }
        _objc_release(puVar9);
        puVar5 = auStack_320;
        func_0x000107c278b8(auStack_320,puVar1);
        uStack_340 = 0;
        uStack_338 = 0;
        uStack_330 = 0;
        func_0x000107c27984(&uStack_340,auStack_320,&lStack_308,1);
        (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110d5a468);
        puStack_328 = (undefined1 *)&uStack_340;
        func_0x000107c278ac(&puStack_328);
        puVar11 = puVar12;
        puVar13 = puVar8;
        puVar3 = &uStack_340;
        if (cStack_309 < '\0') {
          __ZdlPv(auStack_320[0]);
          puVar11 = puVar12;
          puVar13 = puVar8;
          puVar3 = &uStack_340;
        }
      }
      puVar1 = puVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
        ___stack_chk_fail();
        _objc_release(puVar9);
        _objc_release(puVar9);
        puVar4 = puVar1;
        __Unwind_Resume();
        ppuVar7 = &puStack_390;
        pcStack_348 = FUN_10b722a10;
        puStack_380 = auStack_298;
        puStack_378 = puVar5;
        puStack_370 = puVar3;
        plStack_368 = plVar16;
        puStack_360 = puVar1;
        puStack_358 = puVar9;
        pppuStack_350 = &pppuStack_2d0;
        _objc_retain(puVar11);
        _objc_retain(puVar13);
        _objc_retain(puVar10);
        _objc_retain(lVar15);
        puStack_388 = PTR_PTR_11270a268;
        puStack_390 = puVar4;
        _objc_msgSendSuper2(&puStack_390,PTR_s_init_1125d9248);
        if (ppuVar7 != (undefined8 **)0x0) {
          puVar1 = puVar11;
          func_0x00010bf51e00();
          uVar14 = ppuVar7[1];
          ppuVar7[1] = puVar1;
          _objc_release(uVar14);
          puVar1 = puVar13;
          func_0x00010bf51e00();
          uVar14 = ppuVar7[2];
          ppuVar7[2] = puVar1;
          _objc_release(uVar14);
          puVar1 = puVar10;
          func_0x00010bf51e00();
          uVar14 = ppuVar7[3];
          ppuVar7[3] = puVar1;
          _objc_release(uVar14);
          lVar17 = lVar15;
          func_0x00010bf51e00();
          uVar14 = ppuVar7[4];
          ppuVar7[4] = (undefined8 *)lVar17;
          _objc_release(uVar14);
        }
        _objc_release(lVar15);
        _objc_release(puVar10);
        _objc_release(puVar13);
        _objc_release(puVar11);
        return ppuVar7;
      }
      return puVar1;
    }
    return puVar5;
  }
  return puVar5;
}



/* Entry: 10b7220f0; end: 10b722263;  */

/* WARNING: Removing unreachable block (ram,0x00010b722504) */
/* WARNING: Removing unreachable block (ram,0x00010b72285c) */

undefined8 *
FUN_10b7220f0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [3];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar2 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f7a3498;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = (undefined8 *)&UNK_110d5a378;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = puVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar2;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar11 = &uStack_140;
  pcStack_88 = FUN_10b722264;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar7 = puVar5;
  puVar10 = param_4;
  puVar12 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  _objc_retain(param_4);
  if (puVar2 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar2[1];
    puVar4 = (undefined8 *)&UNK_110d5a3c8;
    (**(code **)(*plVar15 + 0x28))();
    if ((int)plVar15 != 0) {
      plVar15 = (long *)puVar2[1];
      _objc_retain(puVar1);
      if (puVar1 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x000107c278b8(auStack_120,puVar2);
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar2 = puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x000107c278b8(auStack_108,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined8 *)0x0) {
        unaff_x25 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(param_4);
        unaff_x25 = param_4;
        func_0x00010bdc3520();
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_f0,unaff_x25);
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      func_0x000107c27984(&uStack_140,auStack_120,&lStack_d8,3);
      puVar4 = (undefined8 *)&UNK_110d5a3c8;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puStack_128 = (undefined1 *)&uStack_140;
      func_0x000107c278ac(&puStack_128);
      lVar16 = 0;
      puVar7 = puVar11;
      puVar10 = param_5;
      do {
        if ((&cStack_d9)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
        unaff_x24 = &uStack_140;
      } while (lVar16 != -0x48);
    }
  }
  _objc_release(param_4);
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_120);
    _objc_release(param_4);
    _objc_release(puVar5);
    _objc_release(puVar1);
    __Unwind_Resume();
    pcStack_148 = FUN_10b722544;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar1 = puVar4;
    puVar5 = puVar7;
    puVar11 = puVar10;
    puVar13 = puVar12;
    lVar16 = param_6;
    ppuStack_150 = &puStack_90;
    _objc_retain(puVar4);
    _objc_retain(puVar7);
    _objc_retain(puVar10);
    _objc_retain(puVar12);
    if (puVar2 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar2[1];
      puVar1 = (undefined8 *)&UNK_110d5a418;
      (**(code **)(*plVar15 + 0x28))();
      if ((int)plVar15 != 0) {
        plVar15 = (long *)puVar2[1];
        _objc_retain(puVar4);
        if (puVar4 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f7a3498;
        }
        else {
          puVar1 = puVar4;
          _objc_retainAutorelease(puVar4);
          func_0x00010bdc3520();
        }
        _objc_release(puVar4);
        func_0x000107c278b8(auStack_1f8,puVar1);
        _objc_retain(puVar7);
        if (puVar7 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f7a3498;
        }
        else {
          _objc_retainAutorelease(puVar7);
          puVar1 = puVar7;
          func_0x00010bdc3520(puVar7);
        }
        _objc_release(puVar7);
        func_0x000107c278b8(auStack_1e0,puVar1);
        _objc_retain(puVar10);
        if (puVar10 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f7a3498;
        }
        else {
          _objc_retainAutorelease(puVar10);
          puVar1 = puVar10;
          func_0x00010bdc3520(puVar10);
        }
        _objc_release(puVar10);
        func_0x000107c278b8(auStack_1c8,puVar1);
        _objc_retain(puVar12);
        if (puVar12 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f7a3498;
        }
        else {
          _objc_retainAutorelease(puVar12);
          puVar1 = puVar12;
          func_0x00010bdc3520(puVar12);
        }
        _objc_release(puVar12);
        func_0x000107c278b8(auStack_1b0,puVar1);
        uStack_218 = 0;
        uStack_210 = 0;
        uStack_208 = 0;
        func_0x000107c27984(&uStack_218,auStack_1f8,&lStack_198,4);
        puVar11 = (undefined8 *)(param_6 * 10);
        puVar1 = (undefined8 *)&UNK_110d5a418;
        unaff_x25 = &uStack_218;
        puVar5 = &uStack_218;
        (**(code **)(*plVar15 + 0x18))(plVar15);
        puStack_200 = unaff_x25;
        func_0x000107c278ac(&puStack_200);
        lVar17 = 0;
        do {
          if ((&cStack_199)[lVar17] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar17));
          }
          lVar17 = lVar17 + -0x18;
        } while (lVar17 != -0x60);
      }
    }
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar7);
    puVar2 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
      ___stack_chk_fail();
      _objc_release(puVar12);
      do {
        unaff_x25 = unaff_x25 + -3;
      } while (unaff_x25 != auStack_1f8);
      _objc_release(puVar12);
      _objc_release(puVar10);
      _objc_release(puVar7);
      _objc_release(puVar4);
      puVar3 = puVar2;
      __Unwind_Resume();
      puVar9 = &uStack_2a0;
      pcStack_228 = FUN_10b72289c;
      lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar8 = puVar5;
      puStack_260 = auStack_1f8;
      puStack_258 = puVar2;
      puStack_250 = puVar12;
      puStack_248 = puVar10;
      puStack_240 = puVar7;
      puStack_238 = puVar4;
      pppuStack_230 = &ppuStack_150;
      _objc_retain(puVar1);
      plVar15 = (long *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        plVar15 = (long *)puVar3[1];
        _objc_retain(puVar1);
        if (puVar1 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)&UNK_10f7a3498;
        }
        else {
          puVar4 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
        }
        _objc_release(puVar1);
        puVar2 = auStack_280;
        func_0x000107c278b8(auStack_280,puVar4);
        uStack_2a0 = 0;
        uStack_298 = 0;
        uStack_290 = 0;
        func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110d5a468);
        puStack_288 = (undefined1 *)&uStack_2a0;
        func_0x000107c278ac(&puStack_288);
        puVar8 = puVar9;
        puVar11 = puVar5;
        puVar12 = &uStack_2a0;
        if (cStack_269 < '\0') {
          __ZdlPv(auStack_280[0]);
          puVar8 = puVar9;
          puVar11 = puVar5;
          puVar12 = &uStack_2a0;
        }
      }
      puVar5 = puVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_268) {
        ___stack_chk_fail();
        _objc_release(puVar1);
        _objc_release(puVar1);
        puVar4 = puVar5;
        __Unwind_Resume();
        ppuVar6 = &puStack_2f0;
        pcStack_2a8 = FUN_10b722a10;
        puStack_2e0 = auStack_1f8;
        puStack_2d8 = puVar2;
        puStack_2d0 = puVar12;
        plStack_2c8 = plVar15;
        puStack_2c0 = puVar5;
        puStack_2b8 = puVar1;
        pppuStack_2b0 = &pppuStack_230;
        _objc_retain(puVar8);
        _objc_retain(puVar11);
        _objc_retain(puVar13);
        _objc_retain(lVar16);
        puStack_2e8 = PTR_PTR_11270a268;
        puStack_2f0 = puVar4;
        _objc_msgSendSuper2(&puStack_2f0,PTR_s_init_1125d9248);
        if (ppuVar6 != (undefined8 **)0x0) {
          puVar1 = puVar8;
          func_0x00010bf51e00();
          uVar14 = ppuVar6[1];
          ppuVar6[1] = puVar1;
          _objc_release(uVar14);
          puVar1 = puVar11;
          func_0x00010bf51e00();
          uVar14 = ppuVar6[2];
          ppuVar6[2] = puVar1;
          _objc_release(uVar14);
          puVar1 = puVar13;
          func_0x00010bf51e00();
          uVar14 = ppuVar6[3];
          ppuVar6[3] = puVar1;
          _objc_release(uVar14);
          lVar17 = lVar16;
          func_0x00010bf51e00();
          uVar14 = ppuVar6[4];
          ppuVar6[4] = (undefined8 *)lVar17;
          _objc_release(uVar14);
        }
        _objc_release(lVar16);
        _objc_release(puVar13);
        _objc_release(puVar11);
        _objc_release(puVar8);
        return ppuVar6;
      }
      return puVar5;
    }
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10b722264; end: 10b722543;  */

/* WARNING: Removing unreachable block (ram,0x00010b722504) */
/* WARNING: Removing unreachable block (ram,0x00010b72285c) */

undefined8 *
FUN_10b722264(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,long param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *puStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
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
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar3 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar5 = param_3;
  puVar11 = param_4;
  puVar13 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    puVar2 = (undefined8 *)&UNK_110d5a3c8;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      _objc_retain(param_2);
      if (param_2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        puVar2 = param_2;
        _objc_retainAutorelease(param_2);
        func_0x00010bdc3520();
      }
      _objc_release(param_2);
      func_0x000107c278b8(auStack_a0,puVar2);
      _objc_retain(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(param_3);
        puVar2 = param_3;
        func_0x00010bdc3520(param_3);
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_88,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined8 *)0x0) {
        unaff_x25 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(param_4);
        unaff_x25 = param_4;
        func_0x00010bdc3520();
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_70,unaff_x25);
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
      puVar2 = (undefined8 *)&UNK_110d5a3c8;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_a8 = (undefined1 *)&uStack_c0;
      func_0x000107c278ac(&puStack_a8);
      lVar16 = 0;
      puVar5 = puVar3;
      puVar11 = param_5;
      do {
        if ((&cStack_59)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
        unaff_x24 = &uStack_c0;
      } while (lVar16 != -0x48);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_c8 = FUN_10b722544;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar8 = puVar5;
  puVar12 = puVar11;
  puVar14 = puVar13;
  lVar16 = param_6;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar5);
  _objc_retain(puVar11);
  _objc_retain(puVar13);
  if (puVar3 != (undefined8 *)0x0) {
    plVar1 = (long *)puVar3[1];
    puVar7 = (undefined8 *)&UNK_110d5a418;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = (long *)puVar3[1];
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        puVar3 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x000107c278b8(auStack_178,puVar3);
      _objc_retain(puVar5);
      if (puVar5 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar3 = puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x000107c278b8(auStack_160,puVar3);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar3 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x000107c278b8(auStack_148,puVar3);
      _objc_retain(puVar13);
      if (puVar13 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        _objc_retainAutorelease(puVar13);
        puVar3 = puVar13;
        func_0x00010bdc3520(puVar13);
      }
      _objc_release(puVar13);
      func_0x000107c278b8(auStack_130,puVar3);
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_188 = 0;
      func_0x000107c27984(&uStack_198,auStack_178,&lStack_118,4);
      puVar12 = (undefined8 *)(param_6 * 10);
      puVar7 = (undefined8 *)&UNK_110d5a418;
      unaff_x25 = &uStack_198;
      puVar8 = &uStack_198;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_180 = unaff_x25;
      func_0x000107c278ac(&puStack_180);
      lVar17 = 0;
      do {
        if ((&cStack_119)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != -0x60);
    }
  }
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar5);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar13);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_178);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar5);
    _objc_release(puVar2);
    puVar4 = puVar3;
    __Unwind_Resume();
    puVar10 = &uStack_220;
    pcStack_1a8 = FUN_10b72289c;
    lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar9 = puVar8;
    puStack_1e0 = auStack_178;
    puStack_1d8 = puVar3;
    puStack_1d0 = puVar13;
    puStack_1c8 = puVar11;
    puStack_1c0 = puVar5;
    puStack_1b8 = puVar2;
    ppuStack_1b0 = &puStack_d0;
    _objc_retain(puVar7);
    plVar1 = (long *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      plVar1 = (long *)puVar4[1];
      _objc_retain(puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f7a3498;
      }
      else {
        puVar2 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      puVar3 = auStack_200;
      func_0x000107c278b8(auStack_200,puVar2);
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d5a468);
      puStack_208 = (undefined1 *)&uStack_220;
      func_0x000107c278ac(&puStack_208);
      puVar9 = puVar10;
      puVar12 = puVar8;
      puVar13 = &uStack_220;
      if (cStack_1e9 < '\0') {
        __ZdlPv(auStack_200[0]);
        puVar9 = puVar10;
        puVar12 = puVar8;
        puVar13 = &uStack_220;
      }
    }
    puVar2 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1e8) {
      ___stack_chk_fail();
      _objc_release(puVar7);
      _objc_release(puVar7);
      puVar5 = puVar2;
      __Unwind_Resume();
      ppuVar6 = &puStack_270;
      pcStack_228 = FUN_10b722a10;
      puStack_260 = auStack_178;
      puStack_258 = puVar3;
      puStack_250 = puVar13;
      plStack_248 = plVar1;
      puStack_240 = puVar2;
      puStack_238 = puVar7;
      pppuStack_230 = &ppuStack_1b0;
      _objc_retain(puVar9);
      _objc_retain(puVar12);
      _objc_retain(puVar14);
      _objc_retain(lVar16);
      puStack_268 = PTR_PTR_11270a268;
      puStack_270 = puVar5;
      _objc_msgSendSuper2(&puStack_270,PTR_s_init_1125d9248);
      if (ppuVar6 != (undefined8 **)0x0) {
        puVar2 = puVar9;
        func_0x00010bf51e00();
        uVar15 = ppuVar6[1];
        ppuVar6[1] = puVar2;
        _objc_release(uVar15);
        puVar2 = puVar12;
        func_0x00010bf51e00();
        uVar15 = ppuVar6[2];
        ppuVar6[2] = puVar2;
        _objc_release(uVar15);
        puVar2 = puVar14;
        func_0x00010bf51e00();
        uVar15 = ppuVar6[3];
        ppuVar6[3] = puVar2;
        _objc_release(uVar15);
        lVar17 = lVar16;
        func_0x00010bf51e00();
        uVar15 = ppuVar6[4];
        ppuVar6[4] = (undefined8 *)lVar17;
        _objc_release(uVar15);
      }
      _objc_release(lVar16);
      _objc_release(puVar14);
      _objc_release(puVar12);
      _objc_release(puVar9);
      return ppuVar6;
    }
    return puVar2;
  }
  return puVar3;
}


