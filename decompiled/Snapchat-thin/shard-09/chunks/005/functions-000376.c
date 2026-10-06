/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ebedc0; end: 106ebedcf; -[SCSpectaclesTaskDeleteSyncedContent content] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ebedc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760ba8);
}



/* Entry: 106ebedd0; end: 106ebee0f; -[SCSpectaclesTaskDeleteSyncedContent setContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebedd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112760ba8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ebee10; end: 106ebee1f; -[SCSpectaclesTaskDeleteSyncedContent isFinished] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106ebee10(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112760bac);
}



/* Entry: 106ebee20; end: 106ebee2f; -[SCSpectaclesTaskDeleteSyncedContent setFinished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebee20(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112760bac) = param_3;
  return;
}



/* Entry: 106ebee30; end: 106ebee43; -[SCSpectaclesTaskDeleteSyncedContent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebee30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112760ba8,0);
  return;
}



/* Entry: 106ebee44; end: 106ebee4b; -[SCSpectaclesTaskDownloadAnalyticsLogs type] */

undefined8 FUN_106ebee44(void)

{
  return 7;
}



/* Entry: 106ebee4c; end: 106ebee57; -[SCSpectaclesTaskDownloadAnalyticsLogs logListRequest] */

void FUN_106ebee4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf02670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d3150,PTR_s_analyticsFilesListRequest_11259e340);
  return;
}



/* Entry: 106ebee58; end: 106ebee63; -[SCSpectaclesTaskDownloadAnalyticsLogs getLogRequestFilename:range:] */

void FUN_106ebee58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf02650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d3150,PTR_s_analyticsFilesGetWithFilename_ra_11259e338);
  return;
}



/* Entry: 106ebee64; end: 106ebee6f; -[SCSpectaclesTaskDownloadAnalyticsLogs cacheDirectory] */

void FUN_106ebee64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe62f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126d2fd8,PTR_s_idleAnalyticsDirectory_1125d7280);
  return;
}



/* Entry: 106ebee70; end: 106ebee77; -[SCSpectaclesTaskDownloadDeviceLogs type] */

undefined8 FUN_106ebee70(void)

{
  return 6;
}



/* Entry: 106ebee78; end: 106ebee83; -[SCSpectaclesTaskDownloadDeviceLogs logListRequest] */

void FUN_106ebee78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf53f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126d3150,PTR_s_crashLogFileListRequest_1125b2980);
  return;
}



/* Entry: 106ebee84; end: 106ebee8f; -[SCSpectaclesTaskDownloadDeviceLogs getLogRequestFilename:range:] */

void FUN_106ebee84(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf53f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126d3150,PTR_s_crashLogFileRequestWithFilename__1125b2988);
  return;
}



/* Entry: 106ebee90; end: 106ebee9b; -[SCSpectaclesTaskDownloadDeviceLogs cacheDirectory] */

void FUN_106ebee90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a51d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126d2fd8,PTR_s_logDirectory_112606e80);
  return;
}



/* Entry: 106ebee9c; end: 106ebef5f; -[SCSpectaclesTaskDownloadLogs initWithCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106ebee9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7b30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112760bb0) = 0;
    puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112760bb4);
    *(undefined **)((long)puVar1 + (long)_DAT_112760bb4) = puVar2;
    _objc_release(uVar3);
    uVar3 = param_3;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112760bb8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112760bb8) = uVar3;
    _objc_release(uVar4);
    func_0x00010be94540(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ebef60; end: 106ebefc3; -[SCSpectaclesTaskDownloadLogs _resetWeakTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebef60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112760bbc;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR_PTR_1126bc890;
  func_0x00010c150380(0x405e000000000000,PTR_PTR_1126bc890,param_2,param_1,PTR_s__timedOut_112535bf8
                      ,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ebefc4; end: 106ebefd7; -[SCSpectaclesTaskDownloadLogs _timedOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebefc4(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112760bc0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be5d470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__markFinished_112574eb8);
  return;
}



/* Entry: 106ebefd8; end: 106ebeffb; -[SCSpectaclesTaskDownloadLogs _markFinished] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebefd8(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112760bc4) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + _DAT_112760bc4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be26c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleCallbackWithLogs__1125674b0,0);
  return;
}



/* Entry: 106ebeffc; end: 106ebf14f; -[SCSpectaclesTaskDownloadLogs _clearDirectory] */

void FUN_106ebeffc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf26660(param_1);
  _objc_retainAutoreleasedReturnValue();
  lStack_48 = 0;
  func_0x00010c12cc60(puVar2,param_2,uVar3,&lStack_48);
  lVar1 = lStack_48;
  _objc_retain(lStack_48);
  _objc_release(uVar3);
  _objc_release(puVar2);
  if (lVar1 != 0) {
    lVar4 = lVar1;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0720c0();
    if ((int)lVar5 != 0) {
      func_0x00010bf3ec40(lVar1);
    }
    _objc_release(lVar4);
  }
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf26660(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  lStack_50 = lVar1;
  func_0x00010bf55d80(puVar2,param_2,uVar3,1,0,&lStack_50);
  lVar4 = lStack_50;
  _objc_retain(lStack_50);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(lVar4);
  return;
}



/* Entry: 106ebf150; end: 106ebf23f; -[SCSpectaclesTaskDownloadLogs _appendLogData:forLog:] */

void FUN_106ebf150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be94540(param_1);
  uVar1 = param_4;
  func_0x00010bfad400(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010c0899c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bf26660(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e020(param_3,param_2,uVar3,1);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ebf240; end: 106ebf42b; -[SCSpectaclesTaskDownloadLogs _filepathsInLogDirectory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebf240(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf26660();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf4dfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar9 = *plStack_120;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(puVar3);
        }
        uVar6 = param_1;
        func_0x00010bf26660(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar6;
        func_0x00010bdc2c60();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(uVar5);
        _objc_release(uVar2);
        _objc_release(uVar6);
        puVar10 = puVar10 + 1;
      } while (puVar4 != puVar10);
      puVar4 = puVar3;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  lVar8 = (long)_DAT_112760bb8;
  lVar9 = *(long *)(puVar3 + lVar8);
  if (lVar9 != 0) {
    _objc_retain(puVar7);
    _objc_retainBlock();
    uVar6 = *(undefined8 *)(puVar3 + lVar8);
    *(undefined8 *)(puVar3 + lVar8) = 0;
    _objc_release(uVar6);
    (**(code **)(lVar9 + 0x10))(lVar9,puVar7,puVar3[_DAT_112760bc0]);
    _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar9);
    return;
  }
  return;
}



/* Entry: 106ebf42c; end: 106ebf4bb; -[SCSpectaclesTaskDownloadLogs _handleCallbackWithLogs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebf42c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112760bb8;
  lVar2 = *(long *)(param_1 + lVar3);
  if (lVar2 != 0) {
    _objc_retain(param_3);
    _objc_retainBlock();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
    (**(code **)(lVar2 + 0x10))(lVar2,param_3,*(undefined1 *)(param_1 + _DAT_112760bc0));
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 106ebf4bc; end: 106ebf4db; -[SCSpectaclesTaskDownloadLogs _requestLength:] */

undefined8 FUN_106ebf4bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x40000;
  if (param_3 != 0) {
    uVar1 = 0x1000000;
  }
  uVar2 = 0x400;
  if (param_3 != 2) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 106ebf4dc; end: 106ebf61b; -[SCSpectaclesTaskDownloadLogs nextRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebf4dc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = (long)_DAT_112760bc8;
  if (*(long *)(param_1 + lVar8) == 0) {
    func_0x00010c0a9b00(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_1;
    func_0x00010be91360();
    lVar2 = *(long *)(param_1 + lVar8);
    lVar9 = (long)_DAT_112760bb0;
    func_0x00010c0dfd40(lVar2,param_2,*(undefined8 *)(param_1 + lVar9));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfad040();
    uVar4 = param_1;
    func_0x00010c0f4940();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    _objc_release(uVar4);
    _objc_release(lVar2);
    if (lVar3 - uVar5 <= uVar1) {
      uVar1 = lVar3 - uVar5;
    }
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c0dfd40(uVar6,param_2,*(undefined8 *)(param_1 + lVar9));
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfad400();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c0f4940(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c08fa60();
    func_0x00010bfc7340(param_1,param_2,uVar7,uVar5,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106ebf61c; end: 106ebf847; -[SCSpectaclesTaskDownloadLogs handleResponse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ebf61c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_112760bc4;
  if ((*(byte *)(param_1 + lVar7) & 1) == 0) {
    lVar8 = param_3;
    func_0x00010c13bcc0();
    if (lVar8 == 4) {
      lVar8 = (long)_DAT_112760bc8;
      if (*(long *)(param_1 + lVar8) == 0) {
        lVar9 = param_3;
        func_0x00010c0a66c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar9 != 0) {
          lVar9 = param_3;
          func_0x00010c0a66c0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = *(undefined8 *)(param_1 + lVar8);
          *(long *)(param_1 + lVar8) = lVar9;
          _objc_release(uVar5);
          func_0x00010bde02e0(param_1);
        }
      }
      else {
        lVar9 = param_3;
        func_0x00010c0a4900();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar9 != 0) {
          uVar1 = param_1;
          func_0x00010c0f4940(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = param_3;
          func_0x00010c0a4900(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf06ae0(uVar1,param_2,lVar9);
          _objc_release(lVar9);
          _objc_release(uVar1);
          uVar1 = param_1;
          func_0x00010c0f4940();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c08fa60();
          uVar3 = *(ulong *)(param_1 + lVar8);
          lVar9 = (long)_DAT_112760bb0;
          func_0x00010c0dfd40(uVar3,param_2,*(undefined8 *)(param_1 + lVar9));
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bfad040();
          _objc_release(uVar3);
          _objc_release(uVar1);
          if (uVar4 <= uVar2) {
            uVar1 = param_1;
            func_0x00010c0f4940(param_1);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = *(undefined8 *)(param_1 + lVar8);
            func_0x00010c0dfd40(uVar5,param_2,*(undefined8 *)(param_1 + lVar9));
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdcd260(param_1,param_2,uVar1,uVar5);
            _objc_release(uVar5);
            _objc_release(uVar1);
            *(long *)(param_1 + lVar9) = *(long *)(param_1 + lVar9) + 1;
            puVar6 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
            func_0x00010bf63640(PTR__OBJC_CLASS___NSMutableData_1126b4958);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d9280(param_1,param_2,puVar6);
            _objc_release(puVar6);
          }
        }
      }
      lVar8 = *(long *)(param_1 + lVar8);
      if ((lVar8 == 0) ||
         (lVar9 = *(long *)(param_1 + (long)_DAT_112760bb0), func_0x00010bf529e0(), lVar9 != lVar8))
      goto LAB_106ebf820;
    }
    *(undefined1 *)(param_1 + lVar7) = 1;
  }
LAB_106ebf820:
  _objc_release(param_3);
  return 1;
}



/* Entry: 106ebf848; end: 106ebf883; -[SCSpectaclesTaskDownloadLogs handleCallbackAfterDownloadingLogs] */

void FUN_106ebf848(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be15b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be26c40(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ebf884; end: 106ebf8fb; -[SCSpectaclesTaskDownloadLogs handleCallbackWithoutLogs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebf884(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112760bb8;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 != 0) {
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar2);
    (**(code **)(lVar1 + 0x10))(lVar1,0,*(undefined1 *)(param_1 + _DAT_112760bc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106ebf8fc; end: 106ebf94f; -[SCSpectaclesTaskDownloadLogs logListRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ebf8fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  uVar2 = param_2;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  uVar3 = uVar2;
  _objc_retain(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar3);
  _objc_exception_throw();
  return *(undefined8 *)(puVar1 + _DAT_112760bc8);
}



/* Entry: 106ebf950; end: 106ebf9af; -[SCSpectaclesTaskDownloadLogs getLogRequestFilename:range:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ebf950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(uVar2);
  _objc_exception_throw();
  return *(undefined8 *)(puVar1 + _DAT_112760bc8);
}



/* Entry: 106ebf9b0; end: 106ebfa03; -[SCSpectaclesTaskDownloadLogs cacheDirectory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ebf9b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  return *(undefined8 *)(puVar1 + _DAT_112760bc8);
}



/* Entry: 106ebfa04; end: 106ebfa13; -[SCSpectaclesTaskDownloadLogs logFileList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ebfa04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760bc8);
}



/* Entry: 106ebfa14; end: 106ebfa53; -[SCSpectaclesTaskDownloadLogs setLogFileList:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebfa14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112760bc8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ebfa54; end: 106ebfa63; -[SCSpectaclesTaskDownloadLogs currentLogIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ebfa54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760bb0);
}



/* Entry: 106ebfa64; end: 106ebfa73; -[SCSpectaclesTaskDownloadLogs setCurrentLogIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebfa64(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112760bb0) = param_3;
  return;
}



/* Entry: 106ebfa74; end: 106ebfa83; -[SCSpectaclesTaskDownloadLogs partialLog] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ebfa74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760bb4);
}



/* Entry: 106ebfa84; end: 106ebfac3; -[SCSpectaclesTaskDownloadLogs setPartialLog:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebfa84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112760bb4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ebfac4; end: 106ebfad3; -[SCSpectaclesTaskDownloadLogs callback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ebfac4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760bb8);
}



/* Entry: 106ebfad4; end: 106ebfadf; -[SCSpectaclesTaskDownloadLogs setCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebfad4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106ebfae0; end: 106ebfaef; -[SCSpectaclesTaskDownloadLogs isFinished] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106ebfae0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112760bc4);
}



/* Entry: 106ebfaf0; end: 106ebfaff; -[SCSpectaclesTaskDownloadLogs setFinished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebfaf0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112760bc4) = param_3;
  return;
}



/* Entry: 106ebfb00; end: 106ebfb0f; -[SCSpectaclesTaskDownloadLogs didTimeOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106ebfb00(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112760bc0);
}



/* Entry: 106ebfb10; end: 106ebfb1f; -[SCSpectaclesTaskDownloadLogs setDidTimeOut:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebfb10(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112760bc0) = param_3;
  return;
}



/* Entry: 106ebfb20; end: 106ebfb2f; -[SCSpectaclesTaskDownloadLogs weakTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ebfb20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760bbc);
}



/* Entry: 106ebfb30; end: 106ebfb6f; -[SCSpectaclesTaskDownloadLogs setWeakTimer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebfb30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112760bbc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ebfb70; end: 106ebfbcf; -[SCSpectaclesTaskDownloadLogs .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebfb70(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112760bbc,0);
  _objc_storeStrong(param_1 + _DAT_112760bb8,0);
  _objc_storeStrong(param_1 + _DAT_112760bb4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112760bc8,0);
  return;
}



/* Entry: 106ebfbd0; end: 106ebfd1f; -[SCSpectaclesTaskFirmwareUpload initWithFilepath:chunkSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106ebfbd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126f7b38;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf0e880();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    puVar4 = puVar3;
    func_0x00010bfad040();
    *(undefined **)((long)puVar1 + (long)_DAT_112760bcc) = puVar4;
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSFileHandle_1126bc690;
    func_0x00010bfaccc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112760bd0);
    *(undefined **)((long)puVar1 + (long)_DAT_112760bd0) = puVar2;
    _objc_release(uVar5);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112760bd4) = 0;
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_112760bd8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112760bd8) = 0;
    _objc_release(uVar5);
    _objc_release(0);
    if (param_4 < 3) {
      *(undefined8 *)((long)puVar1 + (long)_DAT_112760bdc) =
           *(undefined8 *)(&UNK_10ddf0b90 + param_4 * 8);
    }
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106ebfd20; end: 106ebfd27; -[SCSpectaclesTaskFirmwareUpload type] */

undefined8 FUN_106ebfd20(void)

{
  return 9;
}



/* Entry: 106ebfd28; end: 106ebfe43; -[SCSpectaclesTaskFirmwareUpload nextRequest:] */

void FUN_106ebfd28(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  func_0x00010c072f20();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf5e380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 == 0) {
      uVar1 = param_1;
      func_0x00010bfacca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bf25fe0(param_1);
      func_0x00010c1571a0(uVar1,param_2,uVar2);
      _objc_release(uVar1);
      uVar1 = param_1;
      func_0x00010bfacca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010bf39480(param_1);
      uVar3 = uVar1;
      func_0x00010c121360(uVar1,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1870a0(param_1,param_2,uVar3);
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
    puVar4 = PTR_PTR_1126d3150;
    uVar1 = param_1;
    func_0x00010bf5e380(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf25fe0(param_1);
    func_0x00010bfb0d40(puVar4,param_2,uVar1,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106ebfe44; end: 106ebfec7; -[SCSpectaclesTaskFirmwareUpload handleResponse:] */

bool FUN_106ebfe44(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c13bcc0();
  if (param_3 == 4) {
    lVar1 = param_1;
    func_0x00010bf5e380(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    lVar3 = param_1;
    func_0x00010bf25fe0(param_1);
    func_0x00010c174d40(param_1,param_2,lVar3 + lVar2);
    _objc_release(lVar1);
    func_0x00010c1870a0(param_1,param_2,0);
  }
  return param_3 == 4;
}



/* Entry: 106ebfec8; end: 106ebfefb; -[SCSpectaclesTaskFirmwareUpload isFinished] */

bool FUN_106ebfec8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bf25fe0();
  func_0x00010bfad040(param_1);
  return lVar1 == param_1;
}



/* Entry: 106ebfefc; end: 106ebff03; -[SCSpectaclesTaskFirmwareUpload maxReTryCount] */

undefined8 FUN_106ebfefc(void)

{
  return 0;
}



/* Entry: 106ebff04; end: 106ebff13; -[SCSpectaclesTaskFirmwareUpload bytesSent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ebff04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760bd4);
}



/* Entry: 106ebff14; end: 106ebff23; -[SCSpectaclesTaskFirmwareUpload setBytesSent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebff14(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112760bd4) = param_3;
  return;
}



/* Entry: 106ebff24; end: 106ebff33; -[SCSpectaclesTaskFirmwareUpload fileSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ebff24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760bcc);
}



/* Entry: 106ebff34; end: 106ebff43; -[SCSpectaclesTaskFirmwareUpload setFileSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebff34(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112760bcc) = param_3;
  return;
}



/* Entry: 106ebff44; end: 106ebff53; -[SCSpectaclesTaskFirmwareUpload chunkSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ebff44(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760bdc);
}



/* Entry: 106ebff54; end: 106ebff63; -[SCSpectaclesTaskFirmwareUpload fileHandle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ebff54(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760bd0);
}



/* Entry: 106ebff64; end: 106ebffa3; -[SCSpectaclesTaskFirmwareUpload setFileHandle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebff64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112760bd0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ebffa4; end: 106ebffb3; -[SCSpectaclesTaskFirmwareUpload currentChunk] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ebffa4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760bd8);
}



/* Entry: 106ebffb4; end: 106ebfff3; -[SCSpectaclesTaskFirmwareUpload setCurrentChunk:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebffb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112760bd8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ebfff4; end: 106ec0033; -[SCSpectaclesTaskFirmwareUpload .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ebfff4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112760bd8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112760bd0,0);
  return;
}



/* Entry: 106ec0034; end: 106ec003b; -[SCSpectaclesTaskFirmwareUploadPassive type] */

undefined8 FUN_106ec0034(void)

{
  return 10;
}



/* Entry: 106ec003c; end: 106ec0043; -[SCSpectaclesTaskFirmwareUploadPassive maxReTryCount] */

undefined8 FUN_106ec003c(void)

{
  return 0;
}



/* Entry: 106ec0044; end: 106ec00c3; -[SCSpectaclesTaskGPSAlmanacUpload initWithData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106ec0044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7b40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112760be0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112760be0) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ec00c4; end: 106ec00cb; -[SCSpectaclesTaskGPSAlmanacUpload type] */

undefined8 FUN_106ec00c4(void)

{
  return 0x12;
}



/* Entry: 106ec00cc; end: 106ec0117; -[SCSpectaclesTaskGPSAlmanacUpload nextRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec00cc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c072f20();
  if ((uVar1 & 1) == 0) {
    func_0x00010bfcd740(PTR_PTR_1126d3150,param_2,*(undefined8 *)(param_1 + (long)_DAT_112760be0));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ec0118; end: 106ec015b; -[SCSpectaclesTaskGPSAlmanacUpload handleResponse:] */

bool FUN_106ec0118(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c13bcc0();
  if (param_3 == 4) {
    func_0x00010c19cd00(param_1,param_2,1);
  }
  return param_3 == 4;
}



/* Entry: 106ec015c; end: 106ec016b; -[SCSpectaclesTaskGPSAlmanacUpload data] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ec015c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760be0);
}



/* Entry: 106ec016c; end: 106ec0177; -[SCSpectaclesTaskGPSAlmanacUpload setData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec016c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106ec0178; end: 106ec0187; -[SCSpectaclesTaskGPSAlmanacUpload isFinished] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106ec0178(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112760be4);
}



/* Entry: 106ec0188; end: 106ec0197; -[SCSpectaclesTaskGPSAlmanacUpload setFinished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec0188(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112760be4) = param_3;
  return;
}



/* Entry: 106ec0198; end: 106ec01ab; -[SCSpectaclesTaskGPSAlmanacUpload .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec0198(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112760be0,0);
  return;
}



/* Entry: 106ec01ac; end: 106ec0257; -[SCSpectaclesTaskGenericAssetTransfer initWithContent:contentComponent:metadata:transferChannel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106ec01ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f7b48;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithContent_contentComponent_112535c38,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112760be8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    func_0x00010c2197c0(puVar1);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106ec0258; end: 106ec02ab; -[SCSpectaclesTaskGenericAssetTransfer file] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec0258(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010be15920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ec02ac; end: 106ec02b3; -[SCSpectaclesTaskGenericAssetTransfer type] */

undefined8 FUN_106ec02ac(void)

{
  return 0x14;
}



/* Entry: 106ec02b4; end: 106ec02db; -[SCSpectaclesTaskGenericAssetTransfer _burstTransferForTransferChannel:] */

undefined4 FUN_106ec02b4(undefined4 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  func_0x00010bf00f40();
  uVar1 = 0;
  if (param_3 == 1) {
    uVar1 = param_1;
  }
  return uVar1;
}



/* Entry: 106ec02dc; end: 106ec036f; -[SCSpectaclesTaskGenericAssetTransfer nextRequestWithRange:chunkSize:] */

void FUN_106ec02dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d3150;
  func_0x00010bfac9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c12a100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc60a0(puVar2,param_2,uVar1,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106ec0370; end: 106ec053b; -[SCSpectaclesTaskGenericAssetTransfer appendDataWithResponse:] */

ulong FUN_106ec0370(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfc0ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar8 = 0;
  if (uVar2 != 0) {
    uVar8 = param_3;
    func_0x00010bfc0d00();
    _objc_retainAutoreleasedReturnValue();
    if (uVar8 != 0) {
      uVar2 = param_3;
      func_0x00010bfc0d00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfacde0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar8);
      if ((int)uVar5 == 0) {
        uVar8 = 0;
        goto LAB_106ec04f8;
      }
    }
    func_0x00010bfac9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bfc0ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc0c60(param_3);
    uVar8 = param_1;
    func_0x00010bf06b00();
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126d2f50;
    if (((uVar8 & 1) == 0) && (param_1 != 0)) {
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c640(puVar1);
      _objc_release(puVar6);
    }
    _objc_release(param_1);
  }
LAB_106ec04f8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar8;
  }
  ___stack_chk_fail();
  uVar8 = param_3;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c266960();
  _objc_release(uVar8);
  if ((uVar2 & 1) == 0) {
    uVar8 = param_3;
    func_0x00010bfac9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010c09d900();
    _objc_release(uVar8);
    if (-1 < (long)uVar2) {
      uVar8 = param_3;
      func_0x00010bfac9c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar8;
      func_0x00010c12a120();
      _objc_release(uVar8);
      if (uVar2 != 0) {
        uVar8 = param_3;
        func_0x00010bf4bc60(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cc0c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar8;
        func_0x00010c070de0(uVar8);
        _objc_release(param_3);
        _objc_release(uVar8);
        return uVar2;
      }
    }
  }
  return 1;
}



/* Entry: 106ec053c; end: 106ec0627; -[SCSpectaclesTaskGenericAssetTransfer isFinished] */

ulong FUN_106ec053c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c266960();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bfac9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c09d900();
    _objc_release(uVar1);
    if (-1 < (long)uVar2) {
      uVar1 = param_1;
      func_0x00010bfac9c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c12a120();
      _objc_release(uVar1);
      if (uVar2 != 0) {
        uVar1 = param_1;
        func_0x00010bf4bc60(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cc0c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c070de0(uVar1,param_2,param_1);
        _objc_release(param_1);
        _objc_release(uVar1);
        return uVar2;
      }
    }
  }
  return 1;
}



/* Entry: 106ec0628; end: 106ec06cf; -[SCSpectaclesTaskGenericAssetTransfer isEqual:] */

bool FUN_106ec0628(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  iVar1 = (int)&lStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7b48;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_isEqual__1125fa0c8,param_3);
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c0cc0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = param_1 == lVar3;
    _objc_release();
    _objc_release(param_1);
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 106ec06d0; end: 106ec0743; -[SCSpectaclesTaskGenericAssetTransfer hash] */

ulong FUN_106ec06d0(ulong param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f7b48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_hash_1125d5420);
  func_0x00010c0cc0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar2 ^ (ulong)puVar1;
}



/* Entry: 106ec0744; end: 106ec0753; -[SCSpectaclesTaskGenericAssetTransfer metadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ec0744(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760be8);
}



/* Entry: 106ec0754; end: 106ec0767; -[SCSpectaclesTaskGenericAssetTransfer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec0754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112760be8,0);
  return;
}



/* Entry: 106ec0768; end: 106ec07bf; -[SCSpectaclesTaskHdVideo initWithContent:transferChannel:] */

undefined1 * FUN_106ec0768(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7b50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithContent__1125de490);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c2197c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106ec07c0; end: 106ec07c7; -[SCSpectaclesTaskHdVideo type] */

undefined8 FUN_106ec07c0(void)

{
  return 5;
}



/* Entry: 106ec07c8; end: 106ec07ef; -[SCSpectaclesTaskHdVideo _burstTransferForTransferChannel:] */

undefined4 FUN_106ec07c8(undefined4 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  func_0x00010bf00f40();
  uVar1 = 0;
  if (param_3 == 1) {
    uVar1 = param_1;
  }
  return uVar1;
}



/* Entry: 106ec07f0; end: 106ec07f7; -[SCSpectaclesTaskHdVideo contentComponent] */

undefined8 FUN_106ec07f0(void)

{
  return 1;
}



/* Entry: 106ec07f8; end: 106ec07ff; -[SCSpectaclesTaskImuData type] */

undefined8 FUN_106ec07f8(void)

{
  return 3;
}



/* Entry: 106ec0800; end: 106ec0807; -[SCSpectaclesTaskImuData contentComponent] */

undefined8 FUN_106ec0800(void)

{
  return 3;
}



/* Entry: 106ec0808; end: 106ec080f; -[SCSpectaclesTaskImuData supportsBatchingOnTransferChannel:] */

undefined8 FUN_106ec0808(void)

{
  return 1;
}



/* Entry: 106ec0810; end: 106ec0893; -[SCSpectaclesTaskMarkTransferredContent initWithContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106ec0810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7b58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112760bec;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ec0894; end: 106ec0927; -[SCSpectaclesTaskMarkTransferredContent isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ec0894(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,lVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112760bec);
    uVar2 = param_3;
    func_0x00010bf4bc60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106ec0928; end: 106ec099b; -[SCSpectaclesTaskMarkTransferredContent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106ec0928(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = *(ulong *)(param_1 + _DAT_112760bec);
  func_0x00010bfde980(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c27dd80(param_1);
  func_0x00010c0df840(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfde980();
  _objc_release(puVar2);
  return (ulong)puVar3 ^ uVar1;
}



/* Entry: 106ec099c; end: 106ec09a3; -[SCSpectaclesTaskMarkTransferredContent type] */

undefined8 FUN_106ec099c(void)

{
  return 0xd;
}



/* Entry: 106ec09a4; end: 106ec0a2f; -[SCSpectaclesTaskMarkTransferredContent nextRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec09a4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  uVar1 = param_1;
  func_0x00010c072f20();
  puVar4 = PTR_PTR_1126d3150;
  if ((uVar1 & 1) == 0) {
    lVar5 = (long)_DAT_112760bec;
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf4cca0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c070dc0(uVar3,param_2,1);
    func_0x00010c0bbc40(puVar4,param_2,uVar2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106ec0a30; end: 106ec0aa3; -[SCSpectaclesTaskMarkTransferredContent handleResponse:] */

undefined8 FUN_106ec0a30(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13bcc0();
  if ((lVar1 == 4) || (lVar1 = param_3, func_0x00010c13bcc0(), lVar1 == 3)) {
    uVar2 = 1;
    func_0x00010c19cd00(param_1,param_2,1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106ec0aa4; end: 106ec0aab; -[SCSpectaclesTaskMarkTransferredContent supportsBatchingOnTransferChannel:] */

undefined8 FUN_106ec0aa4(void)

{
  return 1;
}



/* Entry: 106ec0aac; end: 106ec0ab7; -[SCSpectaclesTaskMarkTransferredContent requiredDelay] */

undefined8 FUN_106ec0aac(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 106ec0ab8; end: 106ec0ac7; -[SCSpectaclesTaskMarkTransferredContent content] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106ec0ab8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112760bec);
}



/* Entry: 106ec0ac8; end: 106ec0b07; -[SCSpectaclesTaskMarkTransferredContent setContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ec0ac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112760bec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ec0b08; end: 106ec0b17; -[SCSpectaclesTaskMarkTransferredContent isFinished] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106ec0b08(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112760bf0);
}


