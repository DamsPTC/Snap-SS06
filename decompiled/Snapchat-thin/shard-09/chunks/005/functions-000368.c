/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e9e09c; end: 106e9e127; -[SCSpectaclesDeviceController progressiveContentLoader] */

void FUN_106e9e09c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126d3018;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar2 = uVar4;
    func_0x00010bf638a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00bda0(puVar1,param_2,uVar4,uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar1;
    _objc_release(uVar4);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x58);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106e9e128; end: 106e9e167; -[SCSpectaclesDeviceController activateDevice] */

void FUN_106e9e128(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c082060();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010beef6e0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc8630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addStartBLERequest_11254fb28);
  return;
}



/* Entry: 106e9e168; end: 106e9e19f; -[SCSpectaclesDeviceController _reconnectIfActive] */

void FUN_106e9e168(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c06b700();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc8630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addStartBLERequest_11254fb28);
    return;
  }
  return;
}



/* Entry: 106e9e1a0; end: 106e9e1c7; -[SCSpectaclesDeviceController deactivateDevice] */

void FUN_106e9e1a0(long param_1)

{
  func_0x00010bf65b20(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bddadb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cancelStartBLERequest_112554508);
  return;
}



/* Entry: 106e9e1c8; end: 106e9e207; -[SCSpectaclesDeviceController rePairDevice] */

void FUN_106e9e1c8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf638a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1205c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010beef9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_activateDevice_112599810);
  return;
}



/* Entry: 106e9e208; end: 106e9e2fb; -[SCSpectaclesDeviceController handleResponse:] */

void FUN_106e9e208(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfd5380();
  if ((((int)lVar1 != 0) && (lVar1 = param_3, func_0x00010bf35b20(), (int)lVar1 != 0)) &&
     (lVar1 = param_3, func_0x00010c13bcc0(), lVar1 == 5)) {
    func_0x00010be9eee0(param_1);
  }
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106e9e2fc; end: 106e9e32f;  */

void FUN_106e9e2fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdc7840(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e9e330; end: 106e9e337; -[SCSpectaclesDeviceController responseMonitorState] */

undefined8 FUN_106e9e330(void)

{
  return 0;
}



/* Entry: 106e9e338; end: 106e9e347; -[SCSpectaclesDeviceController deviceContentRefreshControllerStartedContentRefresh:transferSession:] */

void FUN_106e9e338(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_spectaclesTransferSession_onTran_112670088,
             param_4,1);
  return;
}



/* Entry: 106e9e348; end: 106e9e357; -[SCSpectaclesDeviceController deviceContentRefreshControllerStartedDownloadingThumbnail:transferSession:] */

void FUN_106e9e348(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_spectaclesTransferSession_onTran_112670088,
             param_4,3);
  return;
}



/* Entry: 106e9e358; end: 106e9e367; -[SCSpectaclesDeviceController deviceContentRefreshControllerCompletedDownloadingThumbnail:transferSession:] */

void FUN_106e9e358(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_spectaclesTransferSession_onTran_112670088,
             param_4,5);
  return;
}



/* Entry: 106e9e368; end: 106e9e397; -[SCSpectaclesDeviceController deviceContentRefreshControllerDidUpdateContentList:transferSession:] */

void FUN_106e9e368(long param_1,undefined8 param_2)

{
  func_0x00010c1a68a0(*(undefined8 *)(param_1 + 8),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c2488f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_spectaclesDeviceDidUpdateContent_11266fc60,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 106e9e398; end: 106e9e3eb; -[SCSpectaclesDeviceController deviceContentRefreshControllerHasCompleted:transferSession:] */

void FUN_106e9e398(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c1a68a0(uVar1,param_2,1);
  func_0x00010c249980(*(undefined8 *)(param_1 + 0x30),param_2,param_4,7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106e9e3ec; end: 106e9e3fb; -[SCSpectaclesDeviceController deviceContentRefreshController:transferSession:failedWithError:] */

void FUN_106e9e3ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_spectaclesTransferSession_onTran_112670088,
             param_4,8);
  return;
}



/* Entry: 106e9e3fc; end: 106e9e40b; -[SCSpectaclesDeviceController deviceContentRefreshControllerDidReceiveBackupStatusEndEvent:] */

void FUN_106e9e3fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2488d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_spectaclesDeviceDidUpdateBackupS_11266fc58,
             *(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 106e9e40c; end: 106e9e41b; -[SCSpectaclesDeviceController contentTransferControllerStartedTransfer:transferSession:] */

void FUN_106e9e40c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_spectaclesTransferSession_onTran_112670088,
             param_4,0);
  return;
}



/* Entry: 106e9e41c; end: 106e9e42b; -[SCSpectaclesDeviceController contentTransferControllerAddedNewContentRefreshTask:transferSession:] */

void FUN_106e9e41c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_spectaclesTransferSession_onTran_112670088,
             param_4,2);
  return;
}



/* Entry: 106e9e42c; end: 106e9e43b; -[SCSpectaclesDeviceController contentTransferControllerStartedDownloadingContent:transferSession:] */

void FUN_106e9e42c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_spectaclesTransferSession_onTran_112670088,
             param_4,3);
  return;
}



/* Entry: 106e9e43c; end: 106e9e44b; -[SCSpectaclesDeviceController contentTransferControllerUpdatedDownloadStatus:transferSession:] */

void FUN_106e9e43c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_spectaclesTransferSession_onTran_112670088,
             param_4,3);
  return;
}



/* Entry: 106e9e44c; end: 106e9e45b; -[SCSpectaclesDeviceController contentTransferControllerCompletedDownloadingContent:transferSession:] */

void FUN_106e9e44c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_spectaclesTransferSession_onTran_112670088,
             param_4,5);
  return;
}



/* Entry: 106e9e45c; end: 106e9e4a7; -[SCSpectaclesDeviceController contentTransferControllerCompletedTransfer:transferSession:] */

void FUN_106e9e45c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf44300();
  if (lVar1 != 5) {
    func_0x00010c249980(*(undefined8 *)(param_1 + 0x30),param_2,param_4,7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106e9e4a8; end: 106e9e4b7; -[SCSpectaclesDeviceController contentTransferControllerCancelledTransfer:transferSession:] */

void FUN_106e9e4a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_spectaclesTransferSession_onTran_112670088,
             param_4,8);
  return;
}



/* Entry: 106e9e4b8; end: 106e9e4c7; -[SCSpectaclesDeviceController contentTransferControllerFailedTransfer:transferSession:error:] */

void FUN_106e9e4b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c249990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_spectaclesTransferSession_onTran_112670088,
             param_4,6);
  return;
}



/* Entry: 106e9e4c8; end: 106e9e867; -[SCSpectaclesDeviceController device:didReceiveCrashReport:] */

void FUN_106e9e4c8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == *(long *)(param_1 + 8)) && (lVar2 = param_4, func_0x00010bf529e0(), lVar2 != 0)) {
    _objc_retain(param_4);
    lVar2 = param_4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_4);
        }
        uVar13 = *(undefined8 *)(lVar12 * 8);
        lVar3 = param_3;
        func_0x00010bfb0d20(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19cd80(uVar13);
        _objc_release(lVar3);
        lVar3 = param_3;
        func_0x00010bfd38e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          func_0x00010c203180(uVar13);
        }
        else {
          lVar4 = param_3;
          func_0x00010bfd38e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf6e340();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c203180(uVar13);
          _objc_release(lVar5);
          _objc_release(lVar4);
        }
        _objc_release(lVar3);
        lVar3 = param_3;
        func_0x00010c15e740(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fcfc0(uVar13);
        _objc_release(lVar3);
        uVar14 = *(undefined8 *)(param_1 + 0x10);
        uVar6 = uVar13;
        func_0x00010bf53ec0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar13;
        func_0x00010c15e740(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar13;
        func_0x00010bf54040(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar13;
        func_0x00010bfb0d20();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bf6e340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23e6e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf40c40();
        func_0x00010c0a4a20(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = param_4;
      func_0x00010bf52a60();
    }
    _objc_release(param_4);
    func_0x00010c263ce0(param_3);
    _objc_retain(param_4);
    lVar2 = param_4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_4);
        }
        func_0x00010c15ba00(*(undefined8 *)(param_1 + 0x18));
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = param_4;
      func_0x00010bf52a60();
    }
    _objc_release(param_4);
    func_0x00010bf3b0a0(param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x00010bddada0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc8630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s__addStartBLERequest_11254fb28);
  return;
}



/* Entry: 106e9e868; end: 106e9e88b; -[SCSpectaclesDeviceController deviceDidRequestBLERestart:] */

void FUN_106e9e868(undefined8 param_1)

{
  func_0x00010bddada0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc8630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__addStartBLERequest_11254fb28);
  return;
}



/* Entry: 106e9e88c; end: 106e9e96b; -[SCSpectaclesDeviceController addDeviceLogsRequest:] */

void FUN_106e9e88c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x70) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106e9e96c; end: 106e9eb23;  */

void FUN_106e9e96c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c263ba0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bf6fd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13bf20();
    _objc_release(lVar1);
  }
  puVar3 = PTR_PTR_1126b6720;
  _objc_alloc();
  uVar8 = *(undefined8 *)(param_1 + 8);
  puVar4 = PTR_PTR_1126d3020;
  _objc_alloc();
  func_0x00010bffada0();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uStack_70 = 1;
  lStack_80 = param_1;
  lStack_78 = lVar1;
  func_0x00010c00c100();
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar3;
  _objc_release(uVar7);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  lVar1 = param_1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf638a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c064d40();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar6 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_106e9eb24;
  uStack_b0 = uVar8;
  lStack_a8 = lVar2;
  lStack_a0 = lVar1;
  lStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(uVar7);
  if (*(long *)(lVar6 + 0x78) == 0) {
    _objc_initWeak(auStack_b8,lVar6);
    uVar8 = *(undefined8 *)(lVar6 + 0x38);
    _objc_copyWeak(auStack_c0,auStack_b8);
    _objc_retain(uVar7);
    func_0x00010c0f7fc0(uVar8);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
  }
  _objc_release(uVar7);
  return;
}



/* Entry: 106e9eb24; end: 106e9ec03; -[SCSpectaclesDeviceController addDeviceIdleAnalyticsRequest:] */

void FUN_106e9eb24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x78) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106e9ec04; end: 106e9ed8f;  */

void FUN_106e9ec04(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c263440();
    puVar2 = PTR_PTR_1126b6720;
    _objc_alloc();
    puVar3 = PTR_PTR_1126d3028;
    _objc_alloc();
    func_0x00010bffada0();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = 1;
    lStack_80 = lVar1;
    lStack_78 = lVar5;
    func_0x00010c00c100();
    uVar6 = *(undefined8 *)(lVar1 + 0x78);
    *(undefined **)(lVar1 + 0x78) = puVar2;
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    param_1 = lVar1;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf638a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c064d40();
    _objc_release(lVar5);
    _objc_release(param_1);
  }
  lVar5 = lVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_106e9ed90;
  if (*(long *)(lVar5 + 0x80) == 0) {
    lStack_a0 = param_1;
    lStack_98 = lVar1;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_a8,lVar5);
    uVar6 = *(undefined8 *)(lVar5 + 0x38);
    _objc_copyWeak(auStack_b0,auStack_a8);
    func_0x00010c0f7fc0(uVar6);
    _objc_destroyWeak(auStack_b0);
    _objc_destroyWeak(auStack_a8);
  }
  return;
}



/* Entry: 106e9ed90; end: 106e9ee3f; -[SCSpectaclesDeviceController deleteAnalyticsLogs] */

void FUN_106e9ed90(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(long *)(param_1 + 0x80) == 0) {
    _objc_initWeak(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 106e9ee40; end: 106e9efbf;  */

void FUN_106e9ee40(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c263440();
    puVar1 = PTR_PTR_1126b6720;
    _objc_alloc();
    unaff_x22 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126d3030;
    _objc_alloc_init();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar2;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = 1;
    lStack_80 = param_1;
    lStack_78 = lVar4;
    func_0x00010c00c100();
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar1;
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    unaff_x20 = param_1;
    func_0x00010bf6fd20();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = unaff_x20;
    func_0x00010bf638a0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = *(long *)(param_1 + 0x80);
    func_0x00010c064d40();
    _objc_release(unaff_x21);
    _objc_release(unaff_x20);
  }
  lVar4 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_106e9efc0;
  uStack_b0 = unaff_x22;
  lStack_a8 = unaff_x21;
  lStack_a0 = unaff_x20;
  lStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  if (*(long *)(lVar4 + 0x68) == param_3) {
    _objc_initWeak(auStack_b8,lVar4);
    uVar5 = *(undefined8 *)(lVar4 + 0x38);
    _objc_copyWeak(auStack_c0,auStack_b8);
    func_0x00010c0f7fc0(uVar5);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
  }
  else if (*(long *)(lVar4 + 0x70) == param_3) {
    func_0x00010c248820(*(undefined8 *)(lVar4 + 0x30));
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106e9efc0; end: 106e9f0af; -[SCSpectaclesDeviceController dataFlowsRequestStartedExecuting:] */

void FUN_106e9efc0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x68) == param_3) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  else if (*(long *)(param_1 + 0x70) == param_3) {
    func_0x00010c248820(*(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106e9f0b0; end: 106e9f143;  */

void FUN_106e9f0b0(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf48c40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1265c0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0692a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15baa0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0692a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1daae0();
    _objc_release(uVar1);
    func_0x00010be9eee0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e9f144; end: 106e9f35f; -[SCSpectaclesDeviceController dataFlowsRequest:executedTask:] */

void FUN_106e9f144(long param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x60) == param_3) {
    puVar1 = param_4;
    func_0x00010c27dd80();
    puVar2 = PTR_PTR_1126d2f58;
    if (puVar1 != (undefined *)0x11) goto LAB_106e9f338;
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_4);
    func_0x00010c15e740(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdec80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar1 = PTR_PTR_1126d3038;
    puVar3 = param_4;
    func_0x00010c253820(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf27d60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1756a0(*(undefined8 *)(param_1 + 8));
    _objc_release(param_4);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  else {
    if (*(long *)(param_1 + 0x88) == param_3) {
      puVar2 = param_4;
      func_0x00010c27dd80();
      if (puVar2 == (undefined *)0x12) {
        func_0x00010bf60520(PTR__OBJC_CLASS___NSDate_1126ae770);
        func_0x00010c1b7dc0(*(undefined8 *)(param_1 + 8));
      }
      goto LAB_106e9f338;
    }
    if (*(long *)(param_1 + 0x70) == param_3) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_106e9f360;
      puStack_50 = &UNK_110842e18;
      _objc_retain(param_4);
      puStack_48 = param_4;
      func_0x000100162d98("APPSTORE",&puStack_68);
      puVar2 = puStack_48;
    }
    else {
      if (*(long *)(param_1 + 0x78) != param_3) goto LAB_106e9f338;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      uStack_80 = 0x106e9f368;
      puStack_78 = &UNK_110842e18;
      _objc_retain(param_4);
      puStack_70 = param_4;
      func_0x000100162d98("APPSTORE",&puStack_90);
      func_0x00010bf6b620(param_1);
      puVar2 = puStack_70;
    }
  }
  _objc_release(puVar2);
LAB_106e9f338:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e9f360; end: 106e9f36f;  */

void FUN_106e9f360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handleCallbackAfterDownloadingLo_1125d1b30);
  return;
}



/* Entry: 106e9f370; end: 106e9f427; -[SCSpectaclesDeviceController dataFlowsRequestCompleted:] */

void FUN_106e9f370(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x60) == param_3) {
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  else if (*(long *)(param_1 + 0x68) == param_3) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x70) == param_3) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      _objc_release();
      func_0x00010c248820(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 8),1);
      goto LAB_106e9f418;
    }
    if (*(long *)(param_1 + 0x78) == param_3) {
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    else if (*(long *)(param_1 + 0x80) == param_3) {
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    else {
      if (*(long *)(param_1 + 0x88) != param_3) goto LAB_106e9f418;
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
  }
  _objc_release();
LAB_106e9f418:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e9f428; end: 106e9f4ff; -[SCSpectaclesDeviceController dataFlowsRequestCancelled:] */

void FUN_106e9f428(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x60);
  if (lVar1 == param_3) {
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x68);
    if (lVar1 == param_3) {
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    else {
      if (*(long *)(param_1 + 0x70) == param_3) {
        func_0x00010be28a60(param_1,param_2,param_3);
        uVar2 = *(undefined8 *)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x70) = 0;
        _objc_release(uVar2);
        func_0x00010c248820(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 8),2);
        goto LAB_106e9f4f0;
      }
      if (*(long *)(param_1 + 0x78) == param_3) {
        func_0x00010be28a60(param_1,param_2,param_3);
        lVar1 = *(long *)(param_1 + 0x78);
        *(undefined8 *)(param_1 + 0x78) = 0;
      }
      else {
        lVar1 = *(long *)(param_1 + 0x80);
        if (lVar1 == param_3) {
          *(undefined8 *)(param_1 + 0x80) = 0;
        }
        else {
          lVar1 = *(long *)(param_1 + 0x88);
          if (lVar1 != param_3) goto LAB_106e9f4f0;
          *(undefined8 *)(param_1 + 0x88) = 0;
        }
      }
    }
  }
  _objc_release(lVar1);
LAB_106e9f4f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e9f500; end: 106e9f69f; -[SCSpectaclesDeviceController dataFlowsRequest:failedWithError:] */

void FUN_106e9f500(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0x60);
  if (lVar2 == param_3) {
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x68) == param_3) {
      *(undefined8 *)(param_1 + 0x68) = 0;
      _objc_release();
      iVar1 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010c06b700();
      if (iVar1 != 0) {
        puVar3 = auStack_38;
        _objc_initWeak(puVar3,param_1);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_40,auStack_38);
        func_0x00010c0f7fe0(0x4000000000000000,puVar3);
        _objc_release(puVar3);
        _objc_destroyWeak(auStack_40);
        _objc_destroyWeak(auStack_38);
      }
      goto LAB_106e9f658;
    }
    if (*(long *)(param_1 + 0x70) == param_3) {
      func_0x00010be28a60(param_1);
      lVar2 = *(long *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    else if (*(long *)(param_1 + 0x78) == param_3) {
      func_0x00010be28a60(param_1);
      lVar2 = *(long *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x80);
      if (lVar2 == param_3) {
        *(undefined8 *)(param_1 + 0x80) = 0;
      }
      else {
        lVar2 = *(long *)(param_1 + 0x88);
        if (lVar2 != param_3) goto LAB_106e9f658;
        *(undefined8 *)(param_1 + 0x88) = 0;
      }
    }
  }
  _objc_release(lVar2);
LAB_106e9f658:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e9f6a0; end: 106e9f6cb;  */

void FUN_106e9f6a0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be873e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e9f6cc; end: 106e9f79b; -[SCSpectaclesDeviceController deviceDidUpdateState:] */

/* WARNING: Possible PIC construction at 0x000106e9f6f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106e9f6fc) */
/* WARNING: Removing unreachable block (ram,0x00010bddada0) */

void FUN_106e9f6cc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c082060();
  if (iVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf48920();
    if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
    uVar4 = *(ulong *)(param_1 + 8);
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf489a0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    if ((uVar5 & 1) != 0) {
      return;
    }
    func_0x00010bec3aa0(param_1);
  }
  else {
    func_0x00010bec3aa0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec38f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopSecondaryDataFlow_11258e7e0);
  return;
}



/* Entry: 106e9f79c; end: 106e9f86f; -[SCSpectaclesDeviceController device:didUpdateInfo:] */

void FUN_106e9f79c(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((param_4 >> 0x11 & 1) != 0) && (*(long *)(param_1 + 8) == param_3)) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c06f0e0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      func_0x00010bec3aa0(param_1);
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0692a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0692a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar2 = lVar1;
    func_0x00010c06f0e0(lVar1);
    func_0x00010c2197e0(uVar3,param_2,lVar2,0x10);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 106e9f870; end: 106e9f8db; -[SCSpectaclesDeviceController _setupRepeatedDeviceUpdatesIfNeeded] */

void FUN_106e9f870(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c262f80();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126bc890;
    func_0x00010c150380(0x404e000000000000,PTR_PTR_1126bc890,param_2,param_1,
                        PTR_s__sendDeviceUpdateRequest_112585560,1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 106e9f8dc; end: 106e9f983; -[SCSpectaclesDeviceController _sendDeviceUpdateRequest] */

void FUN_106e9f8dc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106e9f984; end: 106e9fb37;  */

void FUN_106e9f984(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010bf48920();
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c27d020();
    if ((int)uVar1 == 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      func_0x00010bf48d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c27d060();
      _objc_release(uVar3);
      _objc_release(uVar2);
      if (((int)uVar9 != 0) && ((uVar4 & 1) == 0)) {
        uVar3 = *(ulong *)(param_1 + 8);
        func_0x00010bf48d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf48980();
        _objc_release(uVar3);
        if ((uVar4 & 1) == 0) {
          puVar5 = PTR_PTR_1126ae520;
          func_0x00010c22b6a0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bf07b60();
          _objc_release(puVar5);
          if (puVar6 != (undefined *)0x2) {
            lVar7 = *(long *)(param_1 + 8);
            func_0x00010bf17500();
            _objc_retainAutoreleasedReturnValue();
            lVar8 = lVar7;
            func_0x00010c067fc0();
            _objc_release(lVar7);
            uVar9 = *(undefined8 *)(param_1 + 8);
            func_0x00010bf48c40(uVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR_PTR_1126b6718;
            if (lVar8 < 0xb) {
              func_0x00010bf70880(PTR_PTR_1126b6718);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x00010bf70860();
              _objc_retainAutoreleasedReturnValue();
            }
            func_0x00010c15c6e0(uVar9,param_2,puVar5);
            _objc_release(puVar5);
            _objc_release(uVar9);
          }
          uVar9 = *(undefined8 *)(param_1 + 8);
          uVar1 = *(undefined8 *)(param_1 + 0x10);
          uVar2 = uVar9;
          func_0x00010c089580(uVar9);
          func_0x00010c0a4e80(uVar1,param_2,uVar9,uVar2);
        }
      }
    }
    else {
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e9fb38; end: 106e9fd0b; -[SCSpectaclesDeviceController updateGPSAlmanac:] */

void FUN_106e9fb38(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_3;
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010c078aa0();
  if ((int)uVar1 == 0) {
    _objc_release(uVar8);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x88);
    _objc_release(uVar8);
    _objc_release(uVar2);
    if (lVar9 != 0) goto LAB_106e9fccc;
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c27a240();
    _objc_release(uVar2);
    if ((uVar8 & 1) != 0) goto LAB_106e9fccc;
    puVar3 = PTR_PTR_1126b6720;
    _objc_alloc();
    uVar8 = *(ulong *)(param_1 + 8);
    puVar4 = PTR_PTR_1126d3040;
    _objc_alloc();
    func_0x00010c008240();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uStack_70 = 1;
    uStack_80 = param_1;
    uStack_78 = uVar2;
    func_0x00010c00c100();
    uVar7 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = puVar3;
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010bf638a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + 0x88);
    func_0x00010c064d40();
  }
  _objc_release(uVar2);
LAB_106e9fccc:
  lVar9 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_106e9fd0c;
  uStack_b0 = uVar8;
  uStack_a8 = uVar2;
  uStack_a0 = param_1;
  lStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(lVar6);
  _objc_initWeak(auStack_b8,lVar9);
  uVar7 = *(undefined8 *)(lVar9 + 0x38);
  _objc_copyWeak(auStack_c0,auStack_b8);
  func_0x00010c0f7fc0(uVar7);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(lVar6);
  return;
}



/* Entry: 106e9fd0c; end: 106e9fdcf; -[SCSpectaclesDeviceController _applicationDidBecomeActiveNotification:] */

void FUN_106e9fd0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106e9fdd0; end: 106e9fe3b;  */

void FUN_106e9fdd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf48d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf48920();
    _objc_release(uVar1);
    if (((int)uVar2 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
      func_0x00010be9eee0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e9fe3c; end: 106ea000f; -[SCSpectaclesDeviceController _addNewDeviceSyncRequestIfNeeded] */

void FUN_106e9fe3c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c078aa0();
  if ((uVar2 & 1) == 0) {
LAB_106e9fe9c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) goto code_r0x00010bdbf3e4;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010bf27c00();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != 0) {
      _objc_release();
      goto LAB_106e9fe9c;
    }
    lVar6 = *(long *)(param_1 + 0x60);
    _objc_release();
    if (lVar6 == 0) {
      uVar1 = *(ulong *)(param_1 + 8);
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c27a240();
      _objc_release();
      if ((uVar2 & 1) == 0) {
        puVar3 = PTR_PTR_1126b6720;
        _objc_alloc();
        uVar7 = *(undefined8 *)(param_1 + 8);
        puVar4 = PTR_PTR_1126d3048;
        _objc_alloc_init();
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_50 = puVar4;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_1;
        _objc_opt_class();
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c00c100(puVar3,param_2,uVar7,0,0,0,puVar5,1);
        uVar7 = *(undefined8 *)(param_1 + 0x60);
        *(undefined **)(param_1 + 0x60) = puVar3;
        _objc_release(uVar7);
        _objc_release(lVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        uVar1 = *(ulong *)(param_1 + 8);
        func_0x00010bf638a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c064d40();
        _objc_release();
      }
    }
    uVar2 = uVar1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
  }
  ___stack_chk_fail();
  if (*(long *)(uVar2 + 0x68) != 0) {
    return;
  }
  puVar3 = PTR_PTR_1126b6720;
  _objc_alloc();
  uVar7 = *(undefined8 *)(uVar2 + 8);
  uVar1 = uVar2;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c100(puVar3,param_2,uVar7,2,0,1,0,0,uVar2,uVar1,1);
  uVar7 = *(undefined8 *)(uVar2 + 0x68);
  *(undefined **)(uVar2 + 0x68) = puVar3;
  _objc_release(uVar7);
  _objc_release(uVar1);
  uVar1 = *(ulong *)(uVar2 + 8);
  func_0x00010bf638a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064d40();
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ea0010; end: 106ea00d7; -[SCSpectaclesDeviceController _addStartBLERequest] */

void FUN_106ea0010(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b6720;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar2 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c100(puVar1,param_2,uVar3,2,0,1,0,0,param_1,lVar2,1);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf638a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106ea00d8; end: 106ea012b; -[SCSpectaclesDeviceController _cancelStartBLERequest] */

void FUN_106ea00d8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf638a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e1e0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106ea012c; end: 106ea0163; -[SCSpectaclesDeviceController _stopTransferDataFlow] */

void FUN_106ea012c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x48);
  if ((lVar1 != 0) && (func_0x00010c06f480(), (int)lVar1 != 0)) {
    func_0x00010bf2e100(*(undefined8 *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf2f350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_cancelTransfer_1125a9678);
  return;
}



/* Entry: 106ea0164; end: 106ea027f; -[SCSpectaclesDeviceController _stopSecondaryDataFlow] */

void FUN_106ea0164(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf638a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e1e0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf638a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e1e0();
    _objc_release(uVar1);
    func_0x00010be28a60(param_1,param_2,*(undefined8 *)(param_1 + 0x70));
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf638a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e1e0();
    _objc_release(uVar1);
    func_0x00010be28a60(param_1,param_2,*(undefined8 *)(param_1 + 0x70));
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf638a0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e1e0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106ea0280; end: 106ea0357; -[SCSpectaclesDeviceController _handleDownloadLogsRequestFailedOrCancelled:] */

void FUN_106ea0280(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  ulong uStack_28;
  
  uVar1 = *(ulong *)(param_1 + 0x70);
  func_0x00010c064540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126d3050;
  _objc_opt_class(PTR_PTR_1126d3050);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106ea0358;
    puStack_30 = &UNK_110842e18;
    _objc_retain(uVar2);
    uStack_28 = uVar1;
    func_0x000100162d98("APPSTORE",&puStack_48);
    _objc_release(uStack_28);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 106ea0358; end: 106ea035f;  */

void FUN_106ea0358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_handleCallbackWithoutLogs_1125d1b38);
  return;
}



/* Entry: 106ea0360; end: 106ea0367; -[SCSpectaclesDeviceController device] */

undefined8 FUN_106ea0360(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106ea0368; end: 106ea036f; -[SCSpectaclesDeviceController contentRefreshController] */

undefined8 FUN_106ea0368(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106ea0370; end: 106ea0377; -[SCSpectaclesDeviceController backupStatusController] */

undefined8 FUN_106ea0370(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106ea0378; end: 106ea0467; -[SCSpectaclesDeviceController .cxx_destruct] */

void FUN_106ea0378(long param_1)

{
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



/* Entry: 106ea0468; end: 106ea05a3; -[SCSpectaclesDeviceEventListenerAnnouncer deviceDidRequestArchiving:] */

undefined ** FUN_106ea0468(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *unaff_x23;
  ulong uVar15;
  undefined *unaff_x24;
  long lVar16;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar17;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuStack_15b0;
  undefined *puStack_15a8;
  undefined **ppuStack_15a0;
  undefined **ppuStack_1598;
  undefined **ppuStack_1590;
  undefined **ppuStack_1588;
  undefined8 ***pppuStack_1580;
  code *pcStack_1578;
  undefined8 uStack_1570;
  long lStack_1568;
  long *plStack_1560;
  undefined8 uStack_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  long lStack_14a8;
  undefined **ppuStack_14a0;
  undefined **ppuStack_1498;
  undefined **ppuStack_1490;
  undefined **ppuStack_1488;
  undefined *puStack_1480;
  undefined *puStack_1478;
  undefined **ppuStack_1470;
  undefined **ppuStack_1468;
  undefined **ppuStack_1460;
  undefined **ppuStack_1458;
  undefined8 ***pppuStack_1450;
  code *pcStack_1448;
  undefined *puStack_1440;
  long lStack_1438;
  undefined8 *puStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  long lStack_1378;
  undefined **ppuStack_1370;
  undefined **ppuStack_1368;
  undefined **ppuStack_1360;
  undefined **ppuStack_1358;
  undefined *puStack_1350;
  undefined *puStack_1348;
  undefined **ppuStack_1340;
  undefined **ppuStack_1338;
  undefined1 *puStack_1330;
  undefined **ppuStack_1328;
  undefined8 ***pppuStack_1320;
  code *pcStack_1318;
  undefined *puStack_1310;
  long lStack_1308;
  ulong *puStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  long lStack_1248;
  undefined **ppuStack_1240;
  undefined **ppuStack_1238;
  undefined **ppuStack_1230;
  undefined **ppuStack_1228;
  undefined *puStack_1220;
  undefined *puStack_1218;
  undefined **ppuStack_1210;
  undefined **ppuStack_1208;
  undefined1 *puStack_1200;
  undefined **ppuStack_11f8;
  undefined8 ***pppuStack_11f0;
  code *pcStack_11e8;
  undefined *puStack_11e0;
  long lStack_11d8;
  ulong *puStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined1 auStack_1198 [128];
  long lStack_1118;
  undefined **ppuStack_1110;
  undefined **ppuStack_1108;
  undefined **ppuStack_1100;
  undefined **ppuStack_10f8;
  undefined *puStack_10f0;
  undefined *puStack_10e8;
  undefined **ppuStack_10e0;
  undefined8 uStack_10d8;
  undefined1 *puStack_10d0;
  undefined **ppuStack_10c8;
  undefined8 ***pppuStack_10c0;
  code *pcStack_10b8;
  undefined *puStack_10b0;
  long lStack_10a8;
  undefined8 *puStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined1 auStack_1070 [128];
  long lStack_ff0;
  undefined **ppuStack_fe0;
  undefined **ppuStack_fd8;
  undefined **ppuStack_fd0;
  undefined **ppuStack_fc8;
  undefined *puStack_fc0;
  undefined *puStack_fb8;
  undefined **ppuStack_fb0;
  undefined **ppuStack_fa8;
  undefined1 *puStack_fa0;
  undefined **ppuStack_f98;
  undefined8 ***pppuStack_f90;
  code *pcStack_f88;
  undefined *puStack_f80;
  long lStack_f78;
  ulong *puStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined1 auStack_f38 [128];
  long lStack_eb8;
  undefined **ppuStack_eb0;
  undefined **ppuStack_ea8;
  undefined **ppuStack_ea0;
  undefined **ppuStack_e98;
  undefined *puStack_e90;
  undefined *puStack_e88;
  undefined **ppuStack_e80;
  undefined **ppuStack_e78;
  undefined1 *puStack_e70;
  undefined **ppuStack_e68;
  undefined8 ***pppuStack_e60;
  code *pcStack_e58;
  undefined *puStack_e50;
  long lStack_e48;
  ulong *puStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined1 auStack_e08 [128];
  long lStack_d88;
  undefined **ppuStack_d80;
  undefined **ppuStack_d78;
  undefined **ppuStack_d70;
  undefined **ppuStack_d68;
  undefined *puStack_d60;
  undefined *puStack_d58;
  undefined **ppuStack_d50;
  undefined **ppuStack_d48;
  undefined **ppuStack_d40;
  undefined **ppuStack_d38;
  undefined8 ***pppuStack_d30;
  code *pcStack_d28;
  undefined *puStack_d20;
  long lStack_d18;
  undefined8 *puStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined1 auStack_cd8 [128];
  long lStack_c58;
  undefined **ppuStack_c50;
  undefined **ppuStack_c48;
  undefined **ppuStack_c40;
  undefined **ppuStack_c38;
  undefined *puStack_c30;
  undefined *puStack_c28;
  undefined **ppuStack_c20;
  undefined **ppuStack_c18;
  undefined1 *puStack_c10;
  undefined **ppuStack_c08;
  undefined8 ***pppuStack_c00;
  code *pcStack_bf8;
  undefined *puStack_bf0;
  long lStack_be8;
  ulong *puStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  long lStack_b28;
  undefined **ppuStack_b20;
  undefined **ppuStack_b18;
  undefined **ppuStack_b10;
  undefined **ppuStack_b08;
  undefined *puStack_b00;
  undefined *puStack_af8;
  undefined **ppuStack_af0;
  undefined8 uStack_ae8;
  undefined1 *puStack_ae0;
  undefined **ppuStack_ad8;
  undefined8 ***pppuStack_ad0;
  code *pcStack_ac8;
  undefined *puStack_ac0;
  long lStack_ab8;
  undefined8 *puStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined1 auStack_a80 [128];
  long lStack_a00;
  undefined8 ***pppuStack_9a0;
  code *pcStack_998;
  undefined *puStack_990;
  long lStack_988;
  ulong *puStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined1 auStack_948 [128];
  long lStack_8c8;
  undefined8 ***pppuStack_870;
  code *pcStack_868;
  undefined *puStack_860;
  long lStack_858;
  ulong *puStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined1 auStack_818 [128];
  long lStack_798;
  undefined8 ***pppuStack_730;
  code *pcStack_728;
  undefined *puStack_720;
  long lStack_718;
  undefined8 *puStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  long lStack_658;
  undefined8 ***pppuStack_600;
  code *pcStack_5f8;
  undefined *puStack_5f0;
  long lStack_5e8;
  ulong *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_528;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  long lStack_4b8;
  ulong *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_3f8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  long lStack_388;
  ulong *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2c8;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar17 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar1 = param_1;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_120;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      puVar2 = PTR_s_deviceDidRequestArchiving__1125b9aa0;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_120 != unaff_x24) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x23 = *(undefined **)(lStack_128 + (long)unaff_x26 * 8);
        puVar14 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,puVar2);
        if (((ulong)puVar14 & 1) != 0) {
          func_0x00010bf703e0(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar1 != unaff_x26);
      ppuVar1 = param_1;
      ppuVar17 = &puStack_130;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_260;
  pcStack_138 = FUN_106ea05a4;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar17);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  puStack_260 = (undefined *)0x0;
  uStack_248 = 0;
  puStack_250 = (undefined8 *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  ppuVar1 = param_3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_250;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      puVar2 = PTR_s_deviceDidUpdateState__1125b9ac0;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_250 != unaff_x24) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x23 = *(undefined **)(lStack_258 + (long)unaff_x26 * 8);
        puVar14 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,puVar2);
        if (((ulong)puVar14 & 1) != 0) {
          func_0x00010bf70460(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar1 != unaff_x26);
      ppuVar1 = param_3;
      ppuVar3 = &puStack_260;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_390;
  pcStack_268 = FUN_106ea06e0;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_270 = &puStack_140;
  _objc_retain(ppuVar3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_388 = 0;
  puStack_390 = (undefined *)0x0;
  uStack_378 = 0;
  puStack_380 = (ulong *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  ppuVar1 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_380;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didUnpairWithReason__1125b9918;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_380 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_388 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fdc0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = ppuVar17;
      ppuVar4 = &puStack_390;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar17 = &puStack_4c0;
  pcStack_398 = FUN_106ea0824;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain(ppuVar4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_4b8 = 0;
  puStack_4c0 = (undefined *)0x0;
  uStack_4a8 = 0;
  puStack_4b0 = (ulong *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  ppuVar1 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_4b0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didReceiveAlertNotificati_1125b9908;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_4b0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x24 = *(undefined **)(lStack_4b8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fd80(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = ppuVar3;
      ppuVar17 = &puStack_4c0;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_5f0;
  pcStack_4c8 = FUN_106ea0968;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_4d0 = &pppuStack_3a0;
  _objc_retain(ppuVar17);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_5e8 = 0;
  puStack_5f0 = (undefined *)0x0;
  uStack_5d8 = 0;
  puStack_5e0 = (ulong *)0x0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  ppuVar1 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_5e0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didUpdateInfo__1125b9920;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_5e0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x24 = *(undefined **)(lStack_5e8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fde0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = ppuVar4;
      ppuVar3 = &puStack_5f0;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_720;
  pcStack_5f8 = FUN_106ea0aac;
  lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_600 = &pppuStack_4d0;
  _objc_retain(ppuVar3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  lStack_718 = 0;
  puStack_720 = (undefined *)0x0;
  uStack_708 = 0;
  puStack_710 = (undefined8 *)0x0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  uStack_6e8 = 0;
  uStack_6f0 = 0;
  ppuVar1 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_710;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      puVar2 = PTR_s_deviceDidUpdateTaskQueue__1125b9ac8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_710 != unaff_x24) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x23 = *(undefined **)(lStack_718 + (long)unaff_x26 * 8);
        puVar14 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,puVar2);
        if (((ulong)puVar14 & 1) != 0) {
          func_0x00010bf70480(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar1 != unaff_x26);
      ppuVar1 = ppuVar17;
      ppuVar4 = &puStack_720;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_658) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar1 = &puStack_860;
  pcStack_728 = FUN_106ea0be8;
  lStack_798 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_730 = &pppuStack_600;
  _objc_retain(ppuVar4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_858 = 0;
  puStack_860 = (undefined *)0x0;
  uStack_848 = 0;
  puStack_850 = (ulong *)0x0;
  uStack_838 = 0;
  uStack_840 = 0;
  uStack_828 = 0;
  uStack_830 = 0;
  puVar11 = auStack_818;
  ppuVar17 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_850;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_onFirmwareUpdate_progress_1125b9928;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_850 != unaff_x25) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x24 = *(undefined **)(lStack_858 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe00(uVar13,unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar11 = auStack_818;
      ppuVar17 = ppuVar3;
      ppuVar1 = &puStack_860;
      func_0x00010bf52a60();
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_798) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_990;
  pcStack_868 = FUN_106ea0d3c;
  lStack_8c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_870 = &pppuStack_730;
  _objc_retain(ppuVar1);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_988 = 0;
  puStack_990 = (undefined *)0x0;
  uStack_978 = 0;
  puStack_980 = (ulong *)0x0;
  uStack_968 = 0;
  uStack_970 = 0;
  uStack_958 = 0;
  uStack_960 = 0;
  puVar12 = auStack_948;
  uVar13 = 0x10;
  ppuVar17 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_980;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_deviceDidFetchFirmwareDigest_dig_1125b9a98;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_980 != unaff_x25) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x24 = *(undefined **)(lStack_988 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf703c0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar12 = auStack_948;
      uVar13 = 0x10;
      ppuVar17 = ppuVar4;
      ppuVar3 = &puStack_990;
      func_0x00010bf52a60();
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8c8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_ac0;
  pcStack_998 = FUN_106ea0e90;
  lStack_a00 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_9a0 = &pppuStack_870;
  _objc_retain(ppuVar3);
  _objc_retain(puVar12);
  _objc_retain(uVar13);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ab8 = 0;
  puStack_ac0 = (undefined *)0x0;
  uStack_aa8 = 0;
  puStack_ab0 = (undefined8 *)0x0;
  uStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  puVar11 = auStack_a80;
  ppuVar17 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_ab0;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_didCompletedScheduledUpda_1125b98f8;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_ab0 != unaff_x26) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x25 = *(undefined ***)(lStack_ab8 + (long)unaff_x28 * 8);
        ppuVar4 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar4 & 1) != 0) {
          func_0x00010bf6fd40(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar17 != unaff_x28);
      puVar11 = auStack_a80;
      ppuVar17 = ppuVar1;
      ppuVar4 = &puStack_ac0;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(uVar13);
  _objc_release(puVar12);
  ppuVar17 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a00) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_bf0;
  pcStack_ac8 = FUN_106ea0ffc;
  lStack_b28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b20 = unaff_x28;
  ppuStack_b18 = unaff_x27;
  ppuStack_b10 = unaff_x26;
  ppuStack_b08 = unaff_x25;
  puStack_b00 = unaff_x24;
  puStack_af8 = unaff_x23;
  ppuStack_af0 = ppuVar1;
  uStack_ae8 = uVar13;
  puStack_ae0 = puVar12;
  ppuStack_ad8 = ppuVar3;
  pppuStack_ad0 = &pppuStack_9a0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_be8 = 0;
  puStack_bf0 = (undefined *)0x0;
  uStack_bd8 = 0;
  puStack_be0 = (ulong *)0x0;
  uStack_bc8 = 0;
  uStack_bd0 = 0;
  uStack_bb8 = 0;
  uStack_bc0 = 0;
  ppuVar3 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_be0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didReceiveCrashReport__1125b9910;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_be0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_be8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fda0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar3 != unaff_x27);
      ppuVar3 = ppuVar17;
      ppuVar7 = &puStack_bf0;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar3 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b28) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_d20;
  pcStack_bf8 = FUN_106ea1150;
  lStack_c58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c50 = unaff_x28;
  ppuStack_c48 = unaff_x27;
  ppuStack_c40 = unaff_x26;
  ppuStack_c38 = unaff_x25;
  puStack_c30 = unaff_x24;
  puStack_c28 = unaff_x23;
  ppuStack_c20 = ppuVar1;
  ppuStack_c18 = ppuVar17;
  puStack_c10 = puVar11;
  ppuStack_c08 = ppuVar4;
  pppuStack_c00 = &pppuStack_ad0;
  _objc_retain(ppuVar7);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_d18 = 0;
  puStack_d20 = (undefined *)0x0;
  uStack_d08 = 0;
  puStack_d10 = (undefined8 *)0x0;
  uStack_cf8 = 0;
  uStack_d00 = 0;
  uStack_ce8 = 0;
  uStack_cf0 = 0;
  puVar11 = auStack_cd8;
  ppuVar4 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_d10;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar1 = (undefined **)PTR_s_deviceDidStartRecording__1125b9ab8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_d10 != unaff_x24) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x23 = *(undefined **)(lStack_d18 + (long)unaff_x26 * 8);
        puVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar1);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf70440(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar4 != unaff_x26);
      puVar11 = auStack_cd8;
      ppuVar4 = ppuVar3;
      ppuVar8 = &puStack_d20;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c58) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_e50;
  pcStack_d28 = FUN_106ea128c;
  lStack_d88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d80 = unaff_x28;
  ppuStack_d78 = unaff_x27;
  ppuStack_d70 = unaff_x26;
  ppuStack_d68 = unaff_x25;
  puStack_d60 = unaff_x24;
  puStack_d58 = unaff_x23;
  ppuStack_d50 = ppuVar1;
  ppuStack_d48 = ppuVar17;
  ppuStack_d40 = ppuVar3;
  ppuStack_d38 = ppuVar7;
  pppuStack_d30 = &pppuStack_c00;
  _objc_retain(ppuVar8);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_e48 = 0;
  puStack_e50 = (undefined *)0x0;
  uStack_e38 = 0;
  puStack_e40 = (ulong *)0x0;
  uStack_e28 = 0;
  uStack_e30 = 0;
  uStack_e18 = 0;
  uStack_e20 = 0;
  puVar12 = auStack_e08;
  ppuVar17 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_e40;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didMarkCorruptContent__1125b9900;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_e40 != unaff_x25) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x24 = *(undefined **)(lStack_e48 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fd60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar12 = auStack_e08;
      ppuVar17 = ppuVar4;
      ppuVar9 = &puStack_e50;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  _objc_release(puVar11);
  ppuVar17 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d88) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_f80;
  pcStack_e58 = FUN_106ea13e0;
  lStack_eb8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_eb0 = unaff_x28;
  ppuStack_ea8 = unaff_x27;
  ppuStack_ea0 = unaff_x26;
  ppuStack_e98 = unaff_x25;
  puStack_e90 = unaff_x24;
  puStack_e88 = unaff_x23;
  ppuStack_e80 = ppuVar1;
  ppuStack_e78 = ppuVar4;
  puStack_e70 = puVar11;
  ppuStack_e68 = ppuVar8;
  pppuStack_e60 = &pppuStack_d30;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_f78 = 0;
  puStack_f80 = (undefined *)0x0;
  uStack_f68 = 0;
  puStack_f70 = (ulong *)0x0;
  uStack_f58 = 0;
  uStack_f60 = 0;
  uStack_f48 = 0;
  uStack_f50 = 0;
  puVar11 = auStack_f38;
  uVar13 = 0x10;
  ppuVar3 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_f70;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_uploadToCloudEvent__1125b9948;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_f70 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_f78 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe80(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar3 != unaff_x27);
      puVar11 = auStack_f38;
      uVar13 = 0x10;
      ppuVar3 = ppuVar17;
      ppuVar7 = &puStack_f80;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  ppuVar3 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_eb8) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_10b0;
  pcStack_f88 = FUN_106ea1524;
  lStack_ff0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_fe0 = unaff_x28;
  ppuStack_fd8 = unaff_x27;
  ppuStack_fd0 = unaff_x26;
  ppuStack_fc8 = unaff_x25;
  puStack_fc0 = unaff_x24;
  puStack_fb8 = unaff_x23;
  ppuStack_fb0 = ppuVar1;
  ppuStack_fa8 = ppuVar17;
  puStack_fa0 = puVar12;
  ppuStack_f98 = ppuVar9;
  pppuStack_f90 = &pppuStack_e60;
  _objc_retain(ppuVar7);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_10a8 = 0;
  puStack_10b0 = (undefined *)0x0;
  uStack_1098 = 0;
  puStack_10a0 = (undefined8 *)0x0;
  uStack_1088 = 0;
  uStack_1090 = 0;
  uStack_1078 = 0;
  uStack_1080 = 0;
  puVar12 = auStack_1070;
  ppuVar1 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_10a0;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_receivedClientId_requestA_1125b9930;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_10a0 != unaff_x26) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x25 = *(undefined ***)(lStack_10a8 + (long)unaff_x28 * 8);
        ppuVar17 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar17 & 1) != 0) {
          func_0x00010bf6fe20(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar1 != unaff_x28);
      puVar12 = auStack_1070;
      ppuVar1 = ppuVar3;
      ppuVar4 = &puStack_10b0;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release(puVar11);
  ppuVar1 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ff0) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_11e0;
  pcStack_10b8 = FUN_106ea1680;
  lStack_1118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1110 = unaff_x28;
  ppuStack_1108 = unaff_x27;
  ppuStack_1100 = unaff_x26;
  ppuStack_10f8 = unaff_x25;
  puStack_10f0 = unaff_x24;
  puStack_10e8 = unaff_x23;
  ppuStack_10e0 = ppuVar3;
  uStack_10d8 = uVar13;
  puStack_10d0 = puVar11;
  ppuStack_10c8 = ppuVar7;
  pppuStack_10c0 = &pppuStack_f90;
  _objc_retain(ppuVar4);
  _objc_retain(puVar12);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_11d8 = 0;
  puStack_11e0 = (undefined *)0x0;
  uStack_11c8 = 0;
  puStack_11d0 = (ulong *)0x0;
  uStack_11b8 = 0;
  uStack_11c0 = 0;
  uStack_11a8 = 0;
  uStack_11b0 = 0;
  puVar11 = auStack_1198;
  ppuVar17 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_11d0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedWifiAPList__1125b9940;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_11d0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x24 = *(undefined **)(lStack_11d8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar11 = auStack_1198;
      ppuVar17 = ppuVar1;
      ppuVar8 = &puStack_11e0;
      func_0x00010bf52a60();
      ppuVar3 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar12);
  ppuVar17 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1118) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_1310;
  pcStack_11e8 = FUN_106ea17d4;
  lStack_1248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1240 = unaff_x28;
  ppuStack_1238 = unaff_x27;
  ppuStack_1230 = unaff_x26;
  ppuStack_1228 = unaff_x25;
  puStack_1220 = unaff_x24;
  puStack_1218 = unaff_x23;
  ppuStack_1210 = ppuVar3;
  ppuStack_1208 = ppuVar1;
  puStack_1200 = puVar12;
  ppuStack_11f8 = ppuVar4;
  pppuStack_11f0 = &pppuStack_10c0;
  _objc_retain(ppuVar8);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1308 = 0;
  puStack_1310 = (undefined *)0x0;
  uStack_12f8 = 0;
  puStack_1300 = (ulong *)0x0;
  uStack_12e8 = 0;
  uStack_12f0 = 0;
  uStack_12d8 = 0;
  uStack_12e0 = 0;
  ppuVar1 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_1300;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedLastCloudUploadTi_1125b9938;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_1300 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_1308 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe40(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = ppuVar17;
      ppuVar7 = &puStack_1310;
      func_0x00010bf52a60();
      ppuVar3 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar1 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1248) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_1440;
  pcStack_1318 = FUN_106ea1928;
  lStack_1378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1370 = unaff_x28;
  ppuStack_1368 = unaff_x27;
  ppuStack_1360 = unaff_x26;
  ppuStack_1358 = unaff_x25;
  puStack_1350 = unaff_x24;
  puStack_1348 = unaff_x23;
  ppuStack_1340 = ppuVar3;
  ppuStack_1338 = ppuVar17;
  puStack_1330 = puVar11;
  ppuStack_1328 = ppuVar8;
  pppuStack_1320 = &pppuStack_11f0;
  _objc_retain(ppuVar7);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1438 = 0;
  puStack_1440 = (undefined *)0x0;
  uStack_1428 = 0;
  puStack_1430 = (undefined8 *)0x0;
  uStack_1418 = 0;
  uStack_1420 = 0;
  uStack_1408 = 0;
  uStack_1410 = 0;
  ppuVar4 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_1430;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar3 = (undefined **)PTR_s_deviceDidRequestBLERestart__1125b9aa8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_1430 != unaff_x24) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x23 = *(undefined **)(lStack_1438 + (long)unaff_x26 * 8);
        puVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar3);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf70400(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar4 != unaff_x26);
      ppuVar4 = ppuVar1;
      ppuVar9 = &puStack_1440;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1378) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_1570;
  pcStack_1448 = FUN_106ea1a64;
  lStack_14a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_14a0 = unaff_x28;
  ppuStack_1498 = unaff_x27;
  ppuStack_1490 = unaff_x26;
  ppuStack_1488 = unaff_x25;
  puStack_1480 = unaff_x24;
  puStack_1478 = unaff_x23;
  ppuStack_1470 = ppuVar3;
  ppuStack_1468 = ppuVar17;
  ppuStack_1460 = ppuVar1;
  ppuStack_1458 = ppuVar7;
  pppuStack_1450 = &pppuStack_1320;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1568 = 0;
  uStack_1570 = 0;
  uStack_1558 = 0;
  plStack_1560 = (long *)0x0;
  uStack_1548 = 0;
  uStack_1550 = 0;
  uStack_1538 = 0;
  uStack_1540 = 0;
  ppuVar1 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    lVar16 = *plStack_1560;
    do {
      ppuVar3 = (undefined **)PTR_s_deviceDidSetUpFeatureCatalog__1125b9ab0;
      ppuVar17 = (undefined **)0x0;
      do {
        if (*plStack_1560 != lVar16) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar15 = *(ulong *)(lStack_1568 + (long)ppuVar17 * 8);
        uVar5 = uVar15;
        _objc_opt_respondsToSelector(uVar15,ppuVar3);
        if ((uVar5 & 1) != 0) {
          func_0x00010bf70420(uVar15);
        }
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar1 != ppuVar17);
      ppuVar1 = ppuVar4;
      puVar10 = &uStack_1570;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  ppuVar1 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_14a8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  pppuVar6 = &ppuStack_15b0;
  pcStack_1578 = FUN_106ea1ba0;
  ppuStack_15a0 = ppuVar3;
  ppuStack_1598 = ppuVar17;
  ppuStack_1590 = ppuVar4;
  ppuStack_1588 = ppuVar9;
  pppuStack_1580 = &pppuStack_1450;
  _objc_retain(puVar10);
  puStack_15a8 = PTR_PTR_1126f7a70;
  ppuStack_15b0 = ppuVar1;
  _objc_msgSendSuper2(&ppuStack_15b0,PTR_s_init_1125d9248);
  if (pppuVar6 != (undefined ***)0x0) {
    _objc_storeWeak(pppuVar6 + 1,puVar10);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar6[2];
    pppuVar6[2] = (undefined **)puVar2;
    _objc_release(puVar14);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar6[3];
    pppuVar6[3] = (undefined **)puVar2;
    _objc_release(puVar14);
    *(undefined4 *)(pppuVar6 + 4) = 0;
  }
  _objc_release(puVar10);
  return (undefined **)pppuVar6;
}



/* Entry: 106ea05a4; end: 106ea06df; -[SCSpectaclesDeviceEventListenerAnnouncer deviceDidUpdateState:] */

undefined ** FUN_106ea05a4(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *unaff_x23;
  ulong uVar15;
  undefined *unaff_x24;
  long lVar16;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar17;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuStack_1480;
  undefined *puStack_1478;
  undefined **ppuStack_1470;
  undefined **ppuStack_1468;
  undefined **ppuStack_1460;
  undefined **ppuStack_1458;
  undefined8 ***pppuStack_1450;
  code *pcStack_1448;
  undefined8 uStack_1440;
  long lStack_1438;
  long *plStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  long lStack_1378;
  undefined **ppuStack_1370;
  undefined **ppuStack_1368;
  undefined **ppuStack_1360;
  undefined **ppuStack_1358;
  undefined *puStack_1350;
  undefined *puStack_1348;
  undefined **ppuStack_1340;
  undefined **ppuStack_1338;
  undefined **ppuStack_1330;
  undefined **ppuStack_1328;
  undefined8 ***pppuStack_1320;
  code *pcStack_1318;
  undefined *puStack_1310;
  long lStack_1308;
  undefined8 *puStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  long lStack_1248;
  undefined **ppuStack_1240;
  undefined **ppuStack_1238;
  undefined **ppuStack_1230;
  undefined **ppuStack_1228;
  undefined *puStack_1220;
  undefined *puStack_1218;
  undefined **ppuStack_1210;
  undefined **ppuStack_1208;
  undefined1 *puStack_1200;
  undefined **ppuStack_11f8;
  undefined8 ***pppuStack_11f0;
  code *pcStack_11e8;
  undefined *puStack_11e0;
  long lStack_11d8;
  ulong *puStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  long lStack_1118;
  undefined **ppuStack_1110;
  undefined **ppuStack_1108;
  undefined **ppuStack_1100;
  undefined **ppuStack_10f8;
  undefined *puStack_10f0;
  undefined *puStack_10e8;
  undefined **ppuStack_10e0;
  undefined **ppuStack_10d8;
  undefined1 *puStack_10d0;
  undefined **ppuStack_10c8;
  undefined8 ***pppuStack_10c0;
  code *pcStack_10b8;
  undefined *puStack_10b0;
  long lStack_10a8;
  ulong *puStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined1 auStack_1068 [128];
  long lStack_fe8;
  undefined **ppuStack_fe0;
  undefined **ppuStack_fd8;
  undefined **ppuStack_fd0;
  undefined **ppuStack_fc8;
  undefined *puStack_fc0;
  undefined *puStack_fb8;
  undefined **ppuStack_fb0;
  undefined8 uStack_fa8;
  undefined1 *puStack_fa0;
  undefined **ppuStack_f98;
  undefined8 ***pppuStack_f90;
  code *pcStack_f88;
  undefined *puStack_f80;
  long lStack_f78;
  undefined8 *puStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined1 auStack_f40 [128];
  long lStack_ec0;
  undefined **ppuStack_eb0;
  undefined **ppuStack_ea8;
  undefined **ppuStack_ea0;
  undefined **ppuStack_e98;
  undefined *puStack_e90;
  undefined *puStack_e88;
  undefined **ppuStack_e80;
  undefined **ppuStack_e78;
  undefined1 *puStack_e70;
  undefined **ppuStack_e68;
  undefined8 ***pppuStack_e60;
  code *pcStack_e58;
  undefined *puStack_e50;
  long lStack_e48;
  ulong *puStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined1 auStack_e08 [128];
  long lStack_d88;
  undefined **ppuStack_d80;
  undefined **ppuStack_d78;
  undefined **ppuStack_d70;
  undefined **ppuStack_d68;
  undefined *puStack_d60;
  undefined *puStack_d58;
  undefined **ppuStack_d50;
  undefined **ppuStack_d48;
  undefined1 *puStack_d40;
  undefined **ppuStack_d38;
  undefined8 ***pppuStack_d30;
  code *pcStack_d28;
  undefined *puStack_d20;
  long lStack_d18;
  ulong *puStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined1 auStack_cd8 [128];
  long lStack_c58;
  undefined **ppuStack_c50;
  undefined **ppuStack_c48;
  undefined **ppuStack_c40;
  undefined **ppuStack_c38;
  undefined *puStack_c30;
  undefined *puStack_c28;
  undefined **ppuStack_c20;
  undefined **ppuStack_c18;
  undefined **ppuStack_c10;
  undefined **ppuStack_c08;
  undefined8 ***pppuStack_c00;
  code *pcStack_bf8;
  undefined *puStack_bf0;
  long lStack_be8;
  undefined8 *puStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined1 auStack_ba8 [128];
  long lStack_b28;
  undefined **ppuStack_b20;
  undefined **ppuStack_b18;
  undefined **ppuStack_b10;
  undefined **ppuStack_b08;
  undefined *puStack_b00;
  undefined *puStack_af8;
  undefined **ppuStack_af0;
  undefined **ppuStack_ae8;
  undefined1 *puStack_ae0;
  undefined **ppuStack_ad8;
  undefined8 ***pppuStack_ad0;
  code *pcStack_ac8;
  undefined *puStack_ac0;
  long lStack_ab8;
  ulong *puStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  long lStack_9f8;
  undefined **ppuStack_9f0;
  undefined **ppuStack_9e8;
  undefined **ppuStack_9e0;
  undefined **ppuStack_9d8;
  undefined *puStack_9d0;
  undefined *puStack_9c8;
  undefined **ppuStack_9c0;
  undefined8 uStack_9b8;
  undefined1 *puStack_9b0;
  undefined **ppuStack_9a8;
  undefined8 ***pppuStack_9a0;
  code *pcStack_998;
  undefined *puStack_990;
  long lStack_988;
  undefined8 *puStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined1 auStack_950 [128];
  long lStack_8d0;
  undefined8 ***pppuStack_870;
  code *pcStack_868;
  undefined *puStack_860;
  long lStack_858;
  ulong *puStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined1 auStack_818 [128];
  long lStack_798;
  undefined8 ***pppuStack_740;
  code *pcStack_738;
  undefined *puStack_730;
  long lStack_728;
  ulong *puStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined1 auStack_6e8 [128];
  long lStack_668;
  undefined8 ***pppuStack_600;
  code *pcStack_5f8;
  undefined *puStack_5f0;
  long lStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_528;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  long lStack_4b8;
  ulong *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_3f8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  long lStack_388;
  ulong *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2c8;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  ulong *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar17 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar1 = param_1;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_120;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      puVar2 = PTR_s_deviceDidUpdateState__1125b9ac0;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_120 != unaff_x24) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x23 = *(undefined **)(lStack_128 + (long)unaff_x26 * 8);
        puVar14 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,puVar2);
        if (((ulong)puVar14 & 1) != 0) {
          func_0x00010bf70460(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar1 != unaff_x26);
      ppuVar1 = param_1;
      ppuVar17 = &puStack_130;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_260;
  pcStack_138 = FUN_106ea06e0;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar17);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  puStack_260 = (undefined *)0x0;
  uStack_248 = 0;
  puStack_250 = (ulong *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  ppuVar1 = param_3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_250;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didUnpairWithReason__1125b9918;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_250 != unaff_x25) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x24 = *(undefined **)(lStack_258 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fdc0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = param_3;
      ppuVar3 = &puStack_260;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_390;
  pcStack_268 = FUN_106ea0824;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_270 = &puStack_140;
  _objc_retain(ppuVar3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_388 = 0;
  puStack_390 = (undefined *)0x0;
  uStack_378 = 0;
  puStack_380 = (ulong *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  ppuVar1 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_380;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didReceiveAlertNotificati_1125b9908;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_380 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_388 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fd80(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = ppuVar17;
      ppuVar4 = &puStack_390;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar17 = &puStack_4c0;
  pcStack_398 = FUN_106ea0968;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain(ppuVar4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_4b8 = 0;
  puStack_4c0 = (undefined *)0x0;
  uStack_4a8 = 0;
  puStack_4b0 = (ulong *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  ppuVar1 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_4b0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didUpdateInfo__1125b9920;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_4b0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x24 = *(undefined **)(lStack_4b8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fde0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = ppuVar3;
      ppuVar17 = &puStack_4c0;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_5f0;
  pcStack_4c8 = FUN_106ea0aac;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_4d0 = &pppuStack_3a0;
  _objc_retain(ppuVar17);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  lStack_5e8 = 0;
  puStack_5f0 = (undefined *)0x0;
  uStack_5d8 = 0;
  puStack_5e0 = (undefined8 *)0x0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  ppuVar1 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_5e0;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      puVar2 = PTR_s_deviceDidUpdateTaskQueue__1125b9ac8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_5e0 != unaff_x24) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x23 = *(undefined **)(lStack_5e8 + (long)unaff_x26 * 8);
        puVar14 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,puVar2);
        if (((ulong)puVar14 & 1) != 0) {
          func_0x00010bf70480(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar1 != unaff_x26);
      ppuVar1 = ppuVar4;
      ppuVar3 = &puStack_5f0;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar1 = &puStack_730;
  pcStack_5f8 = FUN_106ea0be8;
  lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_600 = &pppuStack_4d0;
  _objc_retain(ppuVar3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_728 = 0;
  puStack_730 = (undefined *)0x0;
  uStack_718 = 0;
  puStack_720 = (ulong *)0x0;
  uStack_708 = 0;
  uStack_710 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  puVar11 = auStack_6e8;
  ppuVar4 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_720;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_onFirmwareUpdate_progress_1125b9928;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_720 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_728 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe00(uVar13,unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar4 != unaff_x27);
      puVar11 = auStack_6e8;
      ppuVar4 = ppuVar17;
      ppuVar1 = &puStack_730;
      func_0x00010bf52a60();
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_668) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_860;
  pcStack_738 = FUN_106ea0d3c;
  lStack_798 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_740 = &pppuStack_600;
  _objc_retain(ppuVar1);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_858 = 0;
  puStack_860 = (undefined *)0x0;
  uStack_848 = 0;
  puStack_850 = (ulong *)0x0;
  uStack_838 = 0;
  uStack_840 = 0;
  uStack_828 = 0;
  uStack_830 = 0;
  puVar12 = auStack_818;
  uVar13 = 0x10;
  ppuVar17 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_850;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_deviceDidFetchFirmwareDigest_dig_1125b9a98;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_850 != unaff_x25) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x24 = *(undefined **)(lStack_858 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf703c0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar12 = auStack_818;
      uVar13 = 0x10;
      ppuVar17 = ppuVar3;
      ppuVar4 = &puStack_860;
      func_0x00010bf52a60();
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_798) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_990;
  pcStack_868 = FUN_106ea0e90;
  lStack_8d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_870 = &pppuStack_740;
  _objc_retain(ppuVar4);
  _objc_retain(puVar12);
  _objc_retain(uVar13);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_988 = 0;
  puStack_990 = (undefined *)0x0;
  uStack_978 = 0;
  puStack_980 = (undefined8 *)0x0;
  uStack_968 = 0;
  uStack_970 = 0;
  uStack_958 = 0;
  uStack_960 = 0;
  puVar11 = auStack_950;
  ppuVar17 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_980;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_didCompletedScheduledUpda_1125b98f8;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_980 != unaff_x26) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x25 = *(undefined ***)(lStack_988 + (long)unaff_x28 * 8);
        ppuVar3 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar3 & 1) != 0) {
          func_0x00010bf6fd40(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar17 != unaff_x28);
      puVar11 = auStack_950;
      ppuVar17 = ppuVar1;
      ppuVar3 = &puStack_990;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(uVar13);
  _objc_release(puVar12);
  ppuVar17 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8d0) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_ac0;
  pcStack_998 = FUN_106ea0ffc;
  lStack_9f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9f0 = unaff_x28;
  ppuStack_9e8 = unaff_x27;
  ppuStack_9e0 = unaff_x26;
  ppuStack_9d8 = unaff_x25;
  puStack_9d0 = unaff_x24;
  puStack_9c8 = unaff_x23;
  ppuStack_9c0 = ppuVar1;
  uStack_9b8 = uVar13;
  puStack_9b0 = puVar12;
  ppuStack_9a8 = ppuVar4;
  pppuStack_9a0 = &pppuStack_870;
  _objc_retain(ppuVar3);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ab8 = 0;
  puStack_ac0 = (undefined *)0x0;
  uStack_aa8 = 0;
  puStack_ab0 = (ulong *)0x0;
  uStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  ppuVar4 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_ab0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didReceiveCrashReport__1125b9910;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_ab0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_ab8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fda0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar4 != unaff_x27);
      ppuVar4 = ppuVar17;
      ppuVar5 = &puStack_ac0;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9f8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_bf0;
  pcStack_ac8 = FUN_106ea1150;
  lStack_b28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b20 = unaff_x28;
  ppuStack_b18 = unaff_x27;
  ppuStack_b10 = unaff_x26;
  ppuStack_b08 = unaff_x25;
  puStack_b00 = unaff_x24;
  puStack_af8 = unaff_x23;
  ppuStack_af0 = ppuVar1;
  ppuStack_ae8 = ppuVar17;
  puStack_ae0 = puVar11;
  ppuStack_ad8 = ppuVar3;
  pppuStack_ad0 = &pppuStack_9a0;
  _objc_retain(ppuVar5);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_be8 = 0;
  puStack_bf0 = (undefined *)0x0;
  uStack_bd8 = 0;
  puStack_be0 = (undefined8 *)0x0;
  uStack_bc8 = 0;
  uStack_bd0 = 0;
  uStack_bb8 = 0;
  uStack_bc0 = 0;
  puVar11 = auStack_ba8;
  ppuVar3 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_be0;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar1 = (undefined **)PTR_s_deviceDidStartRecording__1125b9ab8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_be0 != unaff_x24) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x23 = *(undefined **)(lStack_be8 + (long)unaff_x26 * 8);
        puVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar1);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf70440(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar3 != unaff_x26);
      puVar11 = auStack_ba8;
      ppuVar3 = ppuVar4;
      ppuVar8 = &puStack_bf0;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  ppuVar3 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b28) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_d20;
  pcStack_bf8 = FUN_106ea128c;
  lStack_c58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c50 = unaff_x28;
  ppuStack_c48 = unaff_x27;
  ppuStack_c40 = unaff_x26;
  ppuStack_c38 = unaff_x25;
  puStack_c30 = unaff_x24;
  puStack_c28 = unaff_x23;
  ppuStack_c20 = ppuVar1;
  ppuStack_c18 = ppuVar17;
  ppuStack_c10 = ppuVar4;
  ppuStack_c08 = ppuVar5;
  pppuStack_c00 = &pppuStack_ad0;
  _objc_retain(ppuVar8);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_d18 = 0;
  puStack_d20 = (undefined *)0x0;
  uStack_d08 = 0;
  puStack_d10 = (ulong *)0x0;
  uStack_cf8 = 0;
  uStack_d00 = 0;
  uStack_ce8 = 0;
  uStack_cf0 = 0;
  puVar12 = auStack_cd8;
  ppuVar17 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_d10;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didMarkCorruptContent__1125b9900;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_d10 != unaff_x25) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x24 = *(undefined **)(lStack_d18 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fd60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar12 = auStack_cd8;
      ppuVar17 = ppuVar3;
      ppuVar9 = &puStack_d20;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release(puVar11);
  ppuVar17 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c58) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_e50;
  pcStack_d28 = FUN_106ea13e0;
  lStack_d88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d80 = unaff_x28;
  ppuStack_d78 = unaff_x27;
  ppuStack_d70 = unaff_x26;
  ppuStack_d68 = unaff_x25;
  puStack_d60 = unaff_x24;
  puStack_d58 = unaff_x23;
  ppuStack_d50 = ppuVar1;
  ppuStack_d48 = ppuVar3;
  puStack_d40 = puVar11;
  ppuStack_d38 = ppuVar8;
  pppuStack_d30 = &pppuStack_c00;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_e48 = 0;
  puStack_e50 = (undefined *)0x0;
  uStack_e38 = 0;
  puStack_e40 = (ulong *)0x0;
  uStack_e28 = 0;
  uStack_e30 = 0;
  uStack_e18 = 0;
  uStack_e20 = 0;
  puVar11 = auStack_e08;
  uVar13 = 0x10;
  ppuVar3 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_e40;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_uploadToCloudEvent__1125b9948;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_e40 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_e48 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe80(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar3 != unaff_x27);
      puVar11 = auStack_e08;
      uVar13 = 0x10;
      ppuVar3 = ppuVar17;
      ppuVar4 = &puStack_e50;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  ppuVar3 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d88) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_f80;
  pcStack_e58 = FUN_106ea1524;
  lStack_ec0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_eb0 = unaff_x28;
  ppuStack_ea8 = unaff_x27;
  ppuStack_ea0 = unaff_x26;
  ppuStack_e98 = unaff_x25;
  puStack_e90 = unaff_x24;
  puStack_e88 = unaff_x23;
  ppuStack_e80 = ppuVar1;
  ppuStack_e78 = ppuVar17;
  puStack_e70 = puVar12;
  ppuStack_e68 = ppuVar9;
  pppuStack_e60 = &pppuStack_d30;
  _objc_retain(ppuVar4);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_f78 = 0;
  puStack_f80 = (undefined *)0x0;
  uStack_f68 = 0;
  puStack_f70 = (undefined8 *)0x0;
  uStack_f58 = 0;
  uStack_f60 = 0;
  uStack_f48 = 0;
  uStack_f50 = 0;
  puVar12 = auStack_f40;
  ppuVar1 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_f70;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_receivedClientId_requestA_1125b9930;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_f70 != unaff_x26) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x25 = *(undefined ***)(lStack_f78 + (long)unaff_x28 * 8);
        ppuVar17 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar17 & 1) != 0) {
          func_0x00010bf6fe20(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar1 != unaff_x28);
      puVar12 = auStack_f40;
      ppuVar1 = ppuVar3;
      ppuVar5 = &puStack_f80;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release(puVar11);
  ppuVar1 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_ec0) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_10b0;
  pcStack_f88 = FUN_106ea1680;
  lStack_fe8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_fe0 = unaff_x28;
  ppuStack_fd8 = unaff_x27;
  ppuStack_fd0 = unaff_x26;
  ppuStack_fc8 = unaff_x25;
  puStack_fc0 = unaff_x24;
  puStack_fb8 = unaff_x23;
  ppuStack_fb0 = ppuVar3;
  uStack_fa8 = uVar13;
  puStack_fa0 = puVar11;
  ppuStack_f98 = ppuVar4;
  pppuStack_f90 = &pppuStack_e60;
  _objc_retain(ppuVar5);
  _objc_retain(puVar12);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_10a8 = 0;
  puStack_10b0 = (undefined *)0x0;
  uStack_1098 = 0;
  puStack_10a0 = (ulong *)0x0;
  uStack_1088 = 0;
  uStack_1090 = 0;
  uStack_1078 = 0;
  uStack_1080 = 0;
  puVar11 = auStack_1068;
  ppuVar17 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_10a0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedWifiAPList__1125b9940;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_10a0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x24 = *(undefined **)(lStack_10a8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar11 = auStack_1068;
      ppuVar17 = ppuVar1;
      ppuVar8 = &puStack_10b0;
      func_0x00010bf52a60();
      ppuVar3 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar12);
  ppuVar17 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_fe8) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_11e0;
  pcStack_10b8 = FUN_106ea17d4;
  lStack_1118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1110 = unaff_x28;
  ppuStack_1108 = unaff_x27;
  ppuStack_1100 = unaff_x26;
  ppuStack_10f8 = unaff_x25;
  puStack_10f0 = unaff_x24;
  puStack_10e8 = unaff_x23;
  ppuStack_10e0 = ppuVar3;
  ppuStack_10d8 = ppuVar1;
  puStack_10d0 = puVar12;
  ppuStack_10c8 = ppuVar5;
  pppuStack_10c0 = &pppuStack_f90;
  _objc_retain(ppuVar8);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_11d8 = 0;
  puStack_11e0 = (undefined *)0x0;
  uStack_11c8 = 0;
  puStack_11d0 = (ulong *)0x0;
  uStack_11b8 = 0;
  uStack_11c0 = 0;
  uStack_11a8 = 0;
  uStack_11b0 = 0;
  ppuVar1 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_11d0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedLastCloudUploadTi_1125b9938;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_11d0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_11d8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe40(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = ppuVar17;
      ppuVar4 = &puStack_11e0;
      func_0x00010bf52a60();
      ppuVar3 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar1 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1118) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_1310;
  pcStack_11e8 = FUN_106ea1928;
  lStack_1248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1240 = unaff_x28;
  ppuStack_1238 = unaff_x27;
  ppuStack_1230 = unaff_x26;
  ppuStack_1228 = unaff_x25;
  puStack_1220 = unaff_x24;
  puStack_1218 = unaff_x23;
  ppuStack_1210 = ppuVar3;
  ppuStack_1208 = ppuVar17;
  puStack_1200 = puVar11;
  ppuStack_11f8 = ppuVar8;
  pppuStack_11f0 = &pppuStack_10c0;
  _objc_retain(ppuVar4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1308 = 0;
  puStack_1310 = (undefined *)0x0;
  uStack_12f8 = 0;
  puStack_1300 = (undefined8 *)0x0;
  uStack_12e8 = 0;
  uStack_12f0 = 0;
  uStack_12d8 = 0;
  uStack_12e0 = 0;
  ppuVar5 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar5 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_1300;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar3 = (undefined **)PTR_s_deviceDidRequestBLERestart__1125b9aa8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_1300 != unaff_x24) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x23 = *(undefined **)(lStack_1308 + (long)unaff_x26 * 8);
        puVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar3);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf70400(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar5 != unaff_x26);
      ppuVar5 = ppuVar1;
      ppuVar9 = &puStack_1310;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar5 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  ppuVar5 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1248) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_1440;
  pcStack_1318 = FUN_106ea1a64;
  lStack_1378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1370 = unaff_x28;
  ppuStack_1368 = unaff_x27;
  ppuStack_1360 = unaff_x26;
  ppuStack_1358 = unaff_x25;
  puStack_1350 = unaff_x24;
  puStack_1348 = unaff_x23;
  ppuStack_1340 = ppuVar3;
  ppuStack_1338 = ppuVar17;
  ppuStack_1330 = ppuVar1;
  ppuStack_1328 = ppuVar4;
  pppuStack_1320 = &pppuStack_11f0;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1438 = 0;
  uStack_1440 = 0;
  uStack_1428 = 0;
  plStack_1430 = (long *)0x0;
  uStack_1418 = 0;
  uStack_1420 = 0;
  uStack_1408 = 0;
  uStack_1410 = 0;
  ppuVar1 = ppuVar5;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    lVar16 = *plStack_1430;
    do {
      ppuVar3 = (undefined **)PTR_s_deviceDidSetUpFeatureCatalog__1125b9ab0;
      ppuVar17 = (undefined **)0x0;
      do {
        if (*plStack_1430 != lVar16) {
          _objc_enumerationMutation(ppuVar5);
        }
        uVar15 = *(ulong *)(lStack_1438 + (long)ppuVar17 * 8);
        uVar6 = uVar15;
        _objc_opt_respondsToSelector(uVar15,ppuVar3);
        if ((uVar6 & 1) != 0) {
          func_0x00010bf70420(uVar15);
        }
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar1 != ppuVar17);
      ppuVar1 = ppuVar5;
      puVar10 = &uStack_1440;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar5);
  ppuVar1 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1378) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  pppuVar7 = &ppuStack_1480;
  pcStack_1448 = FUN_106ea1ba0;
  ppuStack_1470 = ppuVar3;
  ppuStack_1468 = ppuVar17;
  ppuStack_1460 = ppuVar5;
  ppuStack_1458 = ppuVar9;
  pppuStack_1450 = &pppuStack_1320;
  _objc_retain(puVar10);
  puStack_1478 = PTR_PTR_1126f7a70;
  ppuStack_1480 = ppuVar1;
  _objc_msgSendSuper2(&ppuStack_1480,PTR_s_init_1125d9248);
  if (pppuVar7 != (undefined ***)0x0) {
    _objc_storeWeak(pppuVar7 + 1,puVar10);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar7[2];
    pppuVar7[2] = (undefined **)puVar2;
    _objc_release(puVar14);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar7[3];
    pppuVar7[3] = (undefined **)puVar2;
    _objc_release(puVar14);
    *(undefined4 *)(pppuVar7 + 4) = 0;
  }
  _objc_release(puVar10);
  return (undefined **)pppuVar7;
}



/* Entry: 106ea06e0; end: 106ea0823; -[SCSpectaclesDeviceEventListenerAnnouncer device:didUnpairWithReason:] */

undefined ** FUN_106ea06e0(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *unaff_x23;
  ulong uVar15;
  undefined *unaff_x24;
  long lVar16;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar17;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuStack_1350;
  undefined *puStack_1348;
  undefined **ppuStack_1340;
  undefined **ppuStack_1338;
  undefined **ppuStack_1330;
  undefined **ppuStack_1328;
  undefined8 ***pppuStack_1320;
  code *pcStack_1318;
  undefined8 uStack_1310;
  long lStack_1308;
  long *plStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  long lStack_1248;
  undefined **ppuStack_1240;
  undefined **ppuStack_1238;
  undefined **ppuStack_1230;
  undefined **ppuStack_1228;
  undefined *puStack_1220;
  undefined *puStack_1218;
  undefined **ppuStack_1210;
  undefined **ppuStack_1208;
  undefined **ppuStack_1200;
  undefined **ppuStack_11f8;
  undefined8 ***pppuStack_11f0;
  code *pcStack_11e8;
  undefined *puStack_11e0;
  long lStack_11d8;
  undefined8 *puStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  long lStack_1118;
  undefined **ppuStack_1110;
  undefined **ppuStack_1108;
  undefined **ppuStack_1100;
  undefined **ppuStack_10f8;
  undefined *puStack_10f0;
  undefined *puStack_10e8;
  undefined **ppuStack_10e0;
  undefined **ppuStack_10d8;
  undefined1 *puStack_10d0;
  undefined **ppuStack_10c8;
  undefined8 ***pppuStack_10c0;
  code *pcStack_10b8;
  undefined *puStack_10b0;
  long lStack_10a8;
  ulong *puStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  long lStack_fe8;
  undefined **ppuStack_fe0;
  undefined **ppuStack_fd8;
  undefined **ppuStack_fd0;
  undefined **ppuStack_fc8;
  undefined *puStack_fc0;
  undefined *puStack_fb8;
  undefined **ppuStack_fb0;
  undefined **ppuStack_fa8;
  undefined1 *puStack_fa0;
  undefined **ppuStack_f98;
  undefined8 ***pppuStack_f90;
  code *pcStack_f88;
  undefined *puStack_f80;
  long lStack_f78;
  ulong *puStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined1 auStack_f38 [128];
  long lStack_eb8;
  undefined **ppuStack_eb0;
  undefined **ppuStack_ea8;
  undefined **ppuStack_ea0;
  undefined **ppuStack_e98;
  undefined *puStack_e90;
  undefined *puStack_e88;
  undefined **ppuStack_e80;
  undefined8 uStack_e78;
  undefined1 *puStack_e70;
  undefined **ppuStack_e68;
  undefined8 ***pppuStack_e60;
  code *pcStack_e58;
  undefined *puStack_e50;
  long lStack_e48;
  undefined8 *puStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined1 auStack_e10 [128];
  long lStack_d90;
  undefined **ppuStack_d80;
  undefined **ppuStack_d78;
  undefined **ppuStack_d70;
  undefined **ppuStack_d68;
  undefined *puStack_d60;
  undefined *puStack_d58;
  undefined **ppuStack_d50;
  undefined **ppuStack_d48;
  undefined1 *puStack_d40;
  undefined **ppuStack_d38;
  undefined8 ***pppuStack_d30;
  code *pcStack_d28;
  undefined *puStack_d20;
  long lStack_d18;
  ulong *puStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined1 auStack_cd8 [128];
  long lStack_c58;
  undefined **ppuStack_c50;
  undefined **ppuStack_c48;
  undefined **ppuStack_c40;
  undefined **ppuStack_c38;
  undefined *puStack_c30;
  undefined *puStack_c28;
  undefined **ppuStack_c20;
  undefined **ppuStack_c18;
  undefined1 *puStack_c10;
  undefined **ppuStack_c08;
  undefined8 ***pppuStack_c00;
  code *pcStack_bf8;
  undefined *puStack_bf0;
  long lStack_be8;
  ulong *puStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined1 auStack_ba8 [128];
  long lStack_b28;
  undefined **ppuStack_b20;
  undefined **ppuStack_b18;
  undefined **ppuStack_b10;
  undefined **ppuStack_b08;
  undefined *puStack_b00;
  undefined *puStack_af8;
  undefined **ppuStack_af0;
  undefined **ppuStack_ae8;
  undefined **ppuStack_ae0;
  undefined **ppuStack_ad8;
  undefined8 ***pppuStack_ad0;
  code *pcStack_ac8;
  undefined *puStack_ac0;
  long lStack_ab8;
  undefined8 *puStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined1 auStack_a78 [128];
  long lStack_9f8;
  undefined **ppuStack_9f0;
  undefined **ppuStack_9e8;
  undefined **ppuStack_9e0;
  undefined **ppuStack_9d8;
  undefined *puStack_9d0;
  undefined *puStack_9c8;
  undefined **ppuStack_9c0;
  undefined **ppuStack_9b8;
  undefined1 *puStack_9b0;
  undefined **ppuStack_9a8;
  undefined8 ***pppuStack_9a0;
  code *pcStack_998;
  undefined *puStack_990;
  long lStack_988;
  ulong *puStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  long lStack_8c8;
  undefined **ppuStack_8c0;
  undefined **ppuStack_8b8;
  undefined **ppuStack_8b0;
  undefined **ppuStack_8a8;
  undefined *puStack_8a0;
  undefined *puStack_898;
  undefined **ppuStack_890;
  undefined8 uStack_888;
  undefined1 *puStack_880;
  undefined **ppuStack_878;
  undefined8 ***pppuStack_870;
  code *pcStack_868;
  undefined *puStack_860;
  long lStack_858;
  undefined8 *puStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined1 auStack_820 [128];
  long lStack_7a0;
  undefined8 ***pppuStack_740;
  code *pcStack_738;
  undefined *puStack_730;
  long lStack_728;
  ulong *puStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined1 auStack_6e8 [128];
  long lStack_668;
  undefined8 ***pppuStack_610;
  code *pcStack_608;
  undefined *puStack_600;
  long lStack_5f8;
  ulong *puStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined1 auStack_5b8 [128];
  long lStack_538;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  long lStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_3f8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  long lStack_388;
  ulong *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2c8;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  ulong *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar17 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (ulong *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar1 = param_1;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_120;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didUnpairWithReason__1125b9918;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x24 = *(undefined **)(lStack_128 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fdc0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = param_1;
      ppuVar17 = &puStack_130;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_260;
  pcStack_138 = FUN_106ea0824;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar17);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  puStack_260 = (undefined *)0x0;
  uStack_248 = 0;
  puStack_250 = (ulong *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  ppuVar1 = param_3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_250;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didReceiveAlertNotificati_1125b9908;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_250 != unaff_x25) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x24 = *(undefined **)(lStack_258 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fd80(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = param_3;
      ppuVar3 = &puStack_260;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_390;
  pcStack_268 = FUN_106ea0968;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_270 = &puStack_140;
  _objc_retain(ppuVar3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_388 = 0;
  puStack_390 = (undefined *)0x0;
  uStack_378 = 0;
  puStack_380 = (ulong *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  ppuVar1 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_380;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didUpdateInfo__1125b9920;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_380 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_388 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fde0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = ppuVar17;
      ppuVar4 = &puStack_390;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar17 = &puStack_4c0;
  pcStack_398 = FUN_106ea0aac;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain(ppuVar4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  lStack_4b8 = 0;
  puStack_4c0 = (undefined *)0x0;
  uStack_4a8 = 0;
  puStack_4b0 = (undefined8 *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  ppuVar1 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_4b0;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      puVar2 = PTR_s_deviceDidUpdateTaskQueue__1125b9ac8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_4b0 != unaff_x24) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x23 = *(undefined **)(lStack_4b8 + (long)unaff_x26 * 8);
        puVar14 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,puVar2);
        if (((ulong)puVar14 & 1) != 0) {
          func_0x00010bf70480(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar1 != unaff_x26);
      ppuVar1 = ppuVar3;
      ppuVar17 = &puStack_4c0;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar1 = &puStack_600;
  pcStack_4c8 = FUN_106ea0be8;
  lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_4d0 = &pppuStack_3a0;
  _objc_retain(ppuVar17);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_5f8 = 0;
  puStack_600 = (undefined *)0x0;
  uStack_5e8 = 0;
  puStack_5f0 = (ulong *)0x0;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  puVar11 = auStack_5b8;
  ppuVar3 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_5f0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_onFirmwareUpdate_progress_1125b9928;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_5f0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x24 = *(undefined **)(lStack_5f8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe00(uVar13,unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar3 != unaff_x27);
      puVar11 = auStack_5b8;
      ppuVar3 = ppuVar4;
      ppuVar1 = &puStack_600;
      func_0x00010bf52a60();
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_538) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_730;
  pcStack_608 = FUN_106ea0d3c;
  lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_610 = &pppuStack_4d0;
  _objc_retain(ppuVar1);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_728 = 0;
  puStack_730 = (undefined *)0x0;
  uStack_718 = 0;
  puStack_720 = (ulong *)0x0;
  uStack_708 = 0;
  uStack_710 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  puVar12 = auStack_6e8;
  uVar13 = 0x10;
  ppuVar3 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_720;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_deviceDidFetchFirmwareDigest_dig_1125b9a98;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_720 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_728 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf703c0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar3 != unaff_x27);
      puVar12 = auStack_6e8;
      uVar13 = 0x10;
      ppuVar3 = ppuVar17;
      ppuVar4 = &puStack_730;
      func_0x00010bf52a60();
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_668) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_860;
  pcStack_738 = FUN_106ea0e90;
  lStack_7a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_740 = &pppuStack_610;
  _objc_retain(ppuVar4);
  _objc_retain(puVar12);
  _objc_retain(uVar13);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_858 = 0;
  puStack_860 = (undefined *)0x0;
  uStack_848 = 0;
  puStack_850 = (undefined8 *)0x0;
  uStack_838 = 0;
  uStack_840 = 0;
  uStack_828 = 0;
  uStack_830 = 0;
  puVar11 = auStack_820;
  ppuVar17 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_850;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_didCompletedScheduledUpda_1125b98f8;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_850 != unaff_x26) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x25 = *(undefined ***)(lStack_858 + (long)unaff_x28 * 8);
        ppuVar3 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar3 & 1) != 0) {
          func_0x00010bf6fd40(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar17 != unaff_x28);
      puVar11 = auStack_820;
      ppuVar17 = ppuVar1;
      ppuVar3 = &puStack_860;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(uVar13);
  _objc_release(puVar12);
  ppuVar17 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7a0) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_990;
  pcStack_868 = FUN_106ea0ffc;
  lStack_8c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_8c0 = unaff_x28;
  ppuStack_8b8 = unaff_x27;
  ppuStack_8b0 = unaff_x26;
  ppuStack_8a8 = unaff_x25;
  puStack_8a0 = unaff_x24;
  puStack_898 = unaff_x23;
  ppuStack_890 = ppuVar1;
  uStack_888 = uVar13;
  puStack_880 = puVar12;
  ppuStack_878 = ppuVar4;
  pppuStack_870 = &pppuStack_740;
  _objc_retain(ppuVar3);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_988 = 0;
  puStack_990 = (undefined *)0x0;
  uStack_978 = 0;
  puStack_980 = (ulong *)0x0;
  uStack_968 = 0;
  uStack_970 = 0;
  uStack_958 = 0;
  uStack_960 = 0;
  ppuVar4 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_980;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didReceiveCrashReport__1125b9910;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_980 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_988 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fda0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar4 != unaff_x27);
      ppuVar4 = ppuVar17;
      ppuVar5 = &puStack_990;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8c8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_ac0;
  pcStack_998 = FUN_106ea1150;
  lStack_9f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9f0 = unaff_x28;
  ppuStack_9e8 = unaff_x27;
  ppuStack_9e0 = unaff_x26;
  ppuStack_9d8 = unaff_x25;
  puStack_9d0 = unaff_x24;
  puStack_9c8 = unaff_x23;
  ppuStack_9c0 = ppuVar1;
  ppuStack_9b8 = ppuVar17;
  puStack_9b0 = puVar11;
  ppuStack_9a8 = ppuVar3;
  pppuStack_9a0 = &pppuStack_870;
  _objc_retain(ppuVar5);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ab8 = 0;
  puStack_ac0 = (undefined *)0x0;
  uStack_aa8 = 0;
  puStack_ab0 = (undefined8 *)0x0;
  uStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  puVar11 = auStack_a78;
  ppuVar3 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_ab0;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar1 = (undefined **)PTR_s_deviceDidStartRecording__1125b9ab8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_ab0 != unaff_x24) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x23 = *(undefined **)(lStack_ab8 + (long)unaff_x26 * 8);
        puVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar1);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf70440(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar3 != unaff_x26);
      puVar11 = auStack_a78;
      ppuVar3 = ppuVar4;
      ppuVar8 = &puStack_ac0;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  ppuVar3 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9f8) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_bf0;
  pcStack_ac8 = FUN_106ea128c;
  lStack_b28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b20 = unaff_x28;
  ppuStack_b18 = unaff_x27;
  ppuStack_b10 = unaff_x26;
  ppuStack_b08 = unaff_x25;
  puStack_b00 = unaff_x24;
  puStack_af8 = unaff_x23;
  ppuStack_af0 = ppuVar1;
  ppuStack_ae8 = ppuVar17;
  ppuStack_ae0 = ppuVar4;
  ppuStack_ad8 = ppuVar5;
  pppuStack_ad0 = &pppuStack_9a0;
  _objc_retain(ppuVar8);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_be8 = 0;
  puStack_bf0 = (undefined *)0x0;
  uStack_bd8 = 0;
  puStack_be0 = (ulong *)0x0;
  uStack_bc8 = 0;
  uStack_bd0 = 0;
  uStack_bb8 = 0;
  uStack_bc0 = 0;
  puVar12 = auStack_ba8;
  ppuVar17 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_be0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didMarkCorruptContent__1125b9900;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_be0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x24 = *(undefined **)(lStack_be8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fd60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar12 = auStack_ba8;
      ppuVar17 = ppuVar3;
      ppuVar9 = &puStack_bf0;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release(puVar11);
  ppuVar17 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b28) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_d20;
  pcStack_bf8 = FUN_106ea13e0;
  lStack_c58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c50 = unaff_x28;
  ppuStack_c48 = unaff_x27;
  ppuStack_c40 = unaff_x26;
  ppuStack_c38 = unaff_x25;
  puStack_c30 = unaff_x24;
  puStack_c28 = unaff_x23;
  ppuStack_c20 = ppuVar1;
  ppuStack_c18 = ppuVar3;
  puStack_c10 = puVar11;
  ppuStack_c08 = ppuVar8;
  pppuStack_c00 = &pppuStack_ad0;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_d18 = 0;
  puStack_d20 = (undefined *)0x0;
  uStack_d08 = 0;
  puStack_d10 = (ulong *)0x0;
  uStack_cf8 = 0;
  uStack_d00 = 0;
  uStack_ce8 = 0;
  uStack_cf0 = 0;
  puVar11 = auStack_cd8;
  uVar13 = 0x10;
  ppuVar3 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_d10;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_uploadToCloudEvent__1125b9948;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_d10 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_d18 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe80(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar3 != unaff_x27);
      puVar11 = auStack_cd8;
      uVar13 = 0x10;
      ppuVar3 = ppuVar17;
      ppuVar4 = &puStack_d20;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  ppuVar3 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c58) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_e50;
  pcStack_d28 = FUN_106ea1524;
  lStack_d90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d80 = unaff_x28;
  ppuStack_d78 = unaff_x27;
  ppuStack_d70 = unaff_x26;
  ppuStack_d68 = unaff_x25;
  puStack_d60 = unaff_x24;
  puStack_d58 = unaff_x23;
  ppuStack_d50 = ppuVar1;
  ppuStack_d48 = ppuVar17;
  puStack_d40 = puVar12;
  ppuStack_d38 = ppuVar9;
  pppuStack_d30 = &pppuStack_c00;
  _objc_retain(ppuVar4);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_e48 = 0;
  puStack_e50 = (undefined *)0x0;
  uStack_e38 = 0;
  puStack_e40 = (undefined8 *)0x0;
  uStack_e28 = 0;
  uStack_e30 = 0;
  uStack_e18 = 0;
  uStack_e20 = 0;
  puVar12 = auStack_e10;
  ppuVar1 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_e40;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_receivedClientId_requestA_1125b9930;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_e40 != unaff_x26) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x25 = *(undefined ***)(lStack_e48 + (long)unaff_x28 * 8);
        ppuVar17 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar17 & 1) != 0) {
          func_0x00010bf6fe20(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar1 != unaff_x28);
      puVar12 = auStack_e10;
      ppuVar1 = ppuVar3;
      ppuVar5 = &puStack_e50;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release(puVar11);
  ppuVar1 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d90) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_f80;
  pcStack_e58 = FUN_106ea1680;
  lStack_eb8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_eb0 = unaff_x28;
  ppuStack_ea8 = unaff_x27;
  ppuStack_ea0 = unaff_x26;
  ppuStack_e98 = unaff_x25;
  puStack_e90 = unaff_x24;
  puStack_e88 = unaff_x23;
  ppuStack_e80 = ppuVar3;
  uStack_e78 = uVar13;
  puStack_e70 = puVar11;
  ppuStack_e68 = ppuVar4;
  pppuStack_e60 = &pppuStack_d30;
  _objc_retain(ppuVar5);
  _objc_retain(puVar12);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_f78 = 0;
  puStack_f80 = (undefined *)0x0;
  uStack_f68 = 0;
  puStack_f70 = (ulong *)0x0;
  uStack_f58 = 0;
  uStack_f60 = 0;
  uStack_f48 = 0;
  uStack_f50 = 0;
  puVar11 = auStack_f38;
  ppuVar17 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_f70;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedWifiAPList__1125b9940;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_f70 != unaff_x25) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x24 = *(undefined **)(lStack_f78 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar11 = auStack_f38;
      ppuVar17 = ppuVar1;
      ppuVar8 = &puStack_f80;
      func_0x00010bf52a60();
      ppuVar3 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar12);
  ppuVar17 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_eb8) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_10b0;
  pcStack_f88 = FUN_106ea17d4;
  lStack_fe8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_fe0 = unaff_x28;
  ppuStack_fd8 = unaff_x27;
  ppuStack_fd0 = unaff_x26;
  ppuStack_fc8 = unaff_x25;
  puStack_fc0 = unaff_x24;
  puStack_fb8 = unaff_x23;
  ppuStack_fb0 = ppuVar3;
  ppuStack_fa8 = ppuVar1;
  puStack_fa0 = puVar12;
  ppuStack_f98 = ppuVar5;
  pppuStack_f90 = &pppuStack_e60;
  _objc_retain(ppuVar8);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_10a8 = 0;
  puStack_10b0 = (undefined *)0x0;
  uStack_1098 = 0;
  puStack_10a0 = (ulong *)0x0;
  uStack_1088 = 0;
  uStack_1090 = 0;
  uStack_1078 = 0;
  uStack_1080 = 0;
  ppuVar1 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_10a0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedLastCloudUploadTi_1125b9938;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_10a0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_10a8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe40(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = ppuVar17;
      ppuVar4 = &puStack_10b0;
      func_0x00010bf52a60();
      ppuVar3 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar1 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_fe8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_11e0;
  pcStack_10b8 = FUN_106ea1928;
  lStack_1118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1110 = unaff_x28;
  ppuStack_1108 = unaff_x27;
  ppuStack_1100 = unaff_x26;
  ppuStack_10f8 = unaff_x25;
  puStack_10f0 = unaff_x24;
  puStack_10e8 = unaff_x23;
  ppuStack_10e0 = ppuVar3;
  ppuStack_10d8 = ppuVar17;
  puStack_10d0 = puVar11;
  ppuStack_10c8 = ppuVar8;
  pppuStack_10c0 = &pppuStack_f90;
  _objc_retain(ppuVar4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_11d8 = 0;
  puStack_11e0 = (undefined *)0x0;
  uStack_11c8 = 0;
  puStack_11d0 = (undefined8 *)0x0;
  uStack_11b8 = 0;
  uStack_11c0 = 0;
  uStack_11a8 = 0;
  uStack_11b0 = 0;
  ppuVar5 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar5 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_11d0;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar3 = (undefined **)PTR_s_deviceDidRequestBLERestart__1125b9aa8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_11d0 != unaff_x24) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x23 = *(undefined **)(lStack_11d8 + (long)unaff_x26 * 8);
        puVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar3);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf70400(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar5 != unaff_x26);
      ppuVar5 = ppuVar1;
      ppuVar9 = &puStack_11e0;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar5 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  ppuVar5 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1118) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_1310;
  pcStack_11e8 = FUN_106ea1a64;
  lStack_1248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1240 = unaff_x28;
  ppuStack_1238 = unaff_x27;
  ppuStack_1230 = unaff_x26;
  ppuStack_1228 = unaff_x25;
  puStack_1220 = unaff_x24;
  puStack_1218 = unaff_x23;
  ppuStack_1210 = ppuVar3;
  ppuStack_1208 = ppuVar17;
  ppuStack_1200 = ppuVar1;
  ppuStack_11f8 = ppuVar4;
  pppuStack_11f0 = &pppuStack_10c0;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_1308 = 0;
  uStack_1310 = 0;
  uStack_12f8 = 0;
  plStack_1300 = (long *)0x0;
  uStack_12e8 = 0;
  uStack_12f0 = 0;
  uStack_12d8 = 0;
  uStack_12e0 = 0;
  ppuVar1 = ppuVar5;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    lVar16 = *plStack_1300;
    do {
      ppuVar3 = (undefined **)PTR_s_deviceDidSetUpFeatureCatalog__1125b9ab0;
      ppuVar17 = (undefined **)0x0;
      do {
        if (*plStack_1300 != lVar16) {
          _objc_enumerationMutation(ppuVar5);
        }
        uVar15 = *(ulong *)(lStack_1308 + (long)ppuVar17 * 8);
        uVar6 = uVar15;
        _objc_opt_respondsToSelector(uVar15,ppuVar3);
        if ((uVar6 & 1) != 0) {
          func_0x00010bf70420(uVar15);
        }
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar1 != ppuVar17);
      ppuVar1 = ppuVar5;
      puVar10 = &uStack_1310;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar5);
  ppuVar1 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1248) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  pppuVar7 = &ppuStack_1350;
  pcStack_1318 = FUN_106ea1ba0;
  ppuStack_1340 = ppuVar3;
  ppuStack_1338 = ppuVar17;
  ppuStack_1330 = ppuVar5;
  ppuStack_1328 = ppuVar9;
  pppuStack_1320 = &pppuStack_11f0;
  _objc_retain(puVar10);
  puStack_1348 = PTR_PTR_1126f7a70;
  ppuStack_1350 = ppuVar1;
  _objc_msgSendSuper2(&ppuStack_1350,PTR_s_init_1125d9248);
  if (pppuVar7 != (undefined ***)0x0) {
    _objc_storeWeak(pppuVar7 + 1,puVar10);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar7[2];
    pppuVar7[2] = (undefined **)puVar2;
    _objc_release(puVar14);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar7[3];
    pppuVar7[3] = (undefined **)puVar2;
    _objc_release(puVar14);
    *(undefined4 *)(pppuVar7 + 4) = 0;
  }
  _objc_release(puVar10);
  return (undefined **)pppuVar7;
}



/* Entry: 106ea0824; end: 106ea0967; -[SCSpectaclesDeviceEventListenerAnnouncer device:didReceiveAlertNotification:] */

undefined ** FUN_106ea0824(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *unaff_x23;
  ulong uVar15;
  undefined *unaff_x24;
  long lVar16;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar17;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuStack_1220;
  undefined *puStack_1218;
  undefined **ppuStack_1210;
  undefined **ppuStack_1208;
  undefined **ppuStack_1200;
  undefined **ppuStack_11f8;
  undefined8 ***pppuStack_11f0;
  code *pcStack_11e8;
  undefined8 uStack_11e0;
  long lStack_11d8;
  long *plStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  long lStack_1118;
  undefined **ppuStack_1110;
  undefined **ppuStack_1108;
  undefined **ppuStack_1100;
  undefined **ppuStack_10f8;
  undefined *puStack_10f0;
  undefined *puStack_10e8;
  undefined **ppuStack_10e0;
  undefined **ppuStack_10d8;
  undefined **ppuStack_10d0;
  undefined **ppuStack_10c8;
  undefined8 ***pppuStack_10c0;
  code *pcStack_10b8;
  undefined *puStack_10b0;
  long lStack_10a8;
  undefined8 *puStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  long lStack_fe8;
  undefined **ppuStack_fe0;
  undefined **ppuStack_fd8;
  undefined **ppuStack_fd0;
  undefined **ppuStack_fc8;
  undefined *puStack_fc0;
  undefined *puStack_fb8;
  undefined **ppuStack_fb0;
  undefined **ppuStack_fa8;
  undefined1 *puStack_fa0;
  undefined **ppuStack_f98;
  undefined8 ***pppuStack_f90;
  code *pcStack_f88;
  undefined *puStack_f80;
  long lStack_f78;
  ulong *puStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  long lStack_eb8;
  undefined **ppuStack_eb0;
  undefined **ppuStack_ea8;
  undefined **ppuStack_ea0;
  undefined **ppuStack_e98;
  undefined *puStack_e90;
  undefined *puStack_e88;
  undefined **ppuStack_e80;
  undefined **ppuStack_e78;
  undefined1 *puStack_e70;
  undefined **ppuStack_e68;
  undefined8 ***pppuStack_e60;
  code *pcStack_e58;
  undefined *puStack_e50;
  long lStack_e48;
  ulong *puStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined1 auStack_e08 [128];
  long lStack_d88;
  undefined **ppuStack_d80;
  undefined **ppuStack_d78;
  undefined **ppuStack_d70;
  undefined **ppuStack_d68;
  undefined *puStack_d60;
  undefined *puStack_d58;
  undefined **ppuStack_d50;
  undefined8 uStack_d48;
  undefined1 *puStack_d40;
  undefined **ppuStack_d38;
  undefined8 ***pppuStack_d30;
  code *pcStack_d28;
  undefined *puStack_d20;
  long lStack_d18;
  undefined8 *puStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined1 auStack_ce0 [128];
  long lStack_c60;
  undefined **ppuStack_c50;
  undefined **ppuStack_c48;
  undefined **ppuStack_c40;
  undefined **ppuStack_c38;
  undefined *puStack_c30;
  undefined *puStack_c28;
  undefined **ppuStack_c20;
  undefined **ppuStack_c18;
  undefined1 *puStack_c10;
  undefined **ppuStack_c08;
  undefined8 ***pppuStack_c00;
  code *pcStack_bf8;
  undefined *puStack_bf0;
  long lStack_be8;
  ulong *puStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined1 auStack_ba8 [128];
  long lStack_b28;
  undefined **ppuStack_b20;
  undefined **ppuStack_b18;
  undefined **ppuStack_b10;
  undefined **ppuStack_b08;
  undefined *puStack_b00;
  undefined *puStack_af8;
  undefined **ppuStack_af0;
  undefined **ppuStack_ae8;
  undefined1 *puStack_ae0;
  undefined **ppuStack_ad8;
  undefined8 ***pppuStack_ad0;
  code *pcStack_ac8;
  undefined *puStack_ac0;
  long lStack_ab8;
  ulong *puStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined1 auStack_a78 [128];
  long lStack_9f8;
  undefined **ppuStack_9f0;
  undefined **ppuStack_9e8;
  undefined **ppuStack_9e0;
  undefined **ppuStack_9d8;
  undefined *puStack_9d0;
  undefined *puStack_9c8;
  undefined **ppuStack_9c0;
  undefined **ppuStack_9b8;
  undefined **ppuStack_9b0;
  undefined **ppuStack_9a8;
  undefined8 ***pppuStack_9a0;
  code *pcStack_998;
  undefined *puStack_990;
  long lStack_988;
  undefined8 *puStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined1 auStack_948 [128];
  long lStack_8c8;
  undefined **ppuStack_8c0;
  undefined **ppuStack_8b8;
  undefined **ppuStack_8b0;
  undefined **ppuStack_8a8;
  undefined *puStack_8a0;
  undefined *puStack_898;
  undefined **ppuStack_890;
  undefined **ppuStack_888;
  undefined1 *puStack_880;
  undefined **ppuStack_878;
  undefined8 ***pppuStack_870;
  code *pcStack_868;
  undefined *puStack_860;
  long lStack_858;
  ulong *puStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  long lStack_798;
  undefined **ppuStack_790;
  undefined **ppuStack_788;
  undefined **ppuStack_780;
  undefined **ppuStack_778;
  undefined *puStack_770;
  undefined *puStack_768;
  undefined **ppuStack_760;
  undefined8 uStack_758;
  undefined1 *puStack_750;
  undefined **ppuStack_748;
  undefined8 ***pppuStack_740;
  code *pcStack_738;
  undefined *puStack_730;
  long lStack_728;
  undefined8 *puStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined1 auStack_6f0 [128];
  long lStack_670;
  undefined8 ***pppuStack_610;
  code *pcStack_608;
  undefined *puStack_600;
  long lStack_5f8;
  ulong *puStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined1 auStack_5b8 [128];
  long lStack_538;
  undefined8 ***pppuStack_4e0;
  code *pcStack_4d8;
  undefined *puStack_4d0;
  long lStack_4c8;
  ulong *puStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined1 auStack_488 [128];
  long lStack_408;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2c8;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  ulong *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar17 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (ulong *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar1 = param_1;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_120;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didReceiveAlertNotificati_1125b9908;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x24 = *(undefined **)(lStack_128 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fd80(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = param_1;
      ppuVar17 = &puStack_130;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_260;
  pcStack_138 = FUN_106ea0968;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar17);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  puStack_260 = (undefined *)0x0;
  uStack_248 = 0;
  puStack_250 = (ulong *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  ppuVar1 = param_3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_250;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didUpdateInfo__1125b9920;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_250 != unaff_x25) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x24 = *(undefined **)(lStack_258 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fde0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = param_3;
      ppuVar3 = &puStack_260;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_390;
  pcStack_268 = FUN_106ea0aac;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_270 = &puStack_140;
  _objc_retain(ppuVar3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  lStack_388 = 0;
  puStack_390 = (undefined *)0x0;
  uStack_378 = 0;
  puStack_380 = (undefined8 *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  ppuVar1 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_380;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      puVar2 = PTR_s_deviceDidUpdateTaskQueue__1125b9ac8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_380 != unaff_x24) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x23 = *(undefined **)(lStack_388 + (long)unaff_x26 * 8);
        puVar14 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,puVar2);
        if (((ulong)puVar14 & 1) != 0) {
          func_0x00010bf70480(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar1 != unaff_x26);
      ppuVar1 = ppuVar17;
      ppuVar4 = &puStack_390;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar1 = &puStack_4d0;
  pcStack_398 = FUN_106ea0be8;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain(ppuVar4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_4c8 = 0;
  puStack_4d0 = (undefined *)0x0;
  uStack_4b8 = 0;
  puStack_4c0 = (ulong *)0x0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  puVar11 = auStack_488;
  ppuVar17 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_4c0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_onFirmwareUpdate_progress_1125b9928;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_4c0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x24 = *(undefined **)(lStack_4c8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe00(uVar13,unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar11 = auStack_488;
      ppuVar17 = ppuVar3;
      ppuVar1 = &puStack_4d0;
      func_0x00010bf52a60();
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_600;
  pcStack_4d8 = FUN_106ea0d3c;
  lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_4e0 = &pppuStack_3a0;
  _objc_retain(ppuVar1);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_5f8 = 0;
  puStack_600 = (undefined *)0x0;
  uStack_5e8 = 0;
  puStack_5f0 = (ulong *)0x0;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  puVar12 = auStack_5b8;
  uVar13 = 0x10;
  ppuVar17 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_5f0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_deviceDidFetchFirmwareDigest_dig_1125b9a98;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_5f0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x24 = *(undefined **)(lStack_5f8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf703c0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar12 = auStack_5b8;
      uVar13 = 0x10;
      ppuVar17 = ppuVar4;
      ppuVar3 = &puStack_600;
      func_0x00010bf52a60();
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_538) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_730;
  pcStack_608 = FUN_106ea0e90;
  lStack_670 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_610 = &pppuStack_4e0;
  _objc_retain(ppuVar3);
  _objc_retain(puVar12);
  _objc_retain(uVar13);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_728 = 0;
  puStack_730 = (undefined *)0x0;
  uStack_718 = 0;
  puStack_720 = (undefined8 *)0x0;
  uStack_708 = 0;
  uStack_710 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  puVar11 = auStack_6f0;
  ppuVar17 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_720;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_didCompletedScheduledUpda_1125b98f8;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_720 != unaff_x26) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x25 = *(undefined ***)(lStack_728 + (long)unaff_x28 * 8);
        ppuVar4 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar4 & 1) != 0) {
          func_0x00010bf6fd40(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar17 != unaff_x28);
      puVar11 = auStack_6f0;
      ppuVar17 = ppuVar1;
      ppuVar4 = &puStack_730;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(uVar13);
  _objc_release(puVar12);
  ppuVar17 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_670) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_860;
  pcStack_738 = FUN_106ea0ffc;
  lStack_798 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_790 = unaff_x28;
  ppuStack_788 = unaff_x27;
  ppuStack_780 = unaff_x26;
  ppuStack_778 = unaff_x25;
  puStack_770 = unaff_x24;
  puStack_768 = unaff_x23;
  ppuStack_760 = ppuVar1;
  uStack_758 = uVar13;
  puStack_750 = puVar12;
  ppuStack_748 = ppuVar3;
  pppuStack_740 = &pppuStack_610;
  _objc_retain(ppuVar4);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_858 = 0;
  puStack_860 = (undefined *)0x0;
  uStack_848 = 0;
  puStack_850 = (ulong *)0x0;
  uStack_838 = 0;
  uStack_840 = 0;
  uStack_828 = 0;
  uStack_830 = 0;
  ppuVar3 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_850;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didReceiveCrashReport__1125b9910;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_850 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_858 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fda0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar3 != unaff_x27);
      ppuVar3 = ppuVar17;
      ppuVar7 = &puStack_860;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar3 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_798) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_990;
  pcStack_868 = FUN_106ea1150;
  lStack_8c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_8c0 = unaff_x28;
  ppuStack_8b8 = unaff_x27;
  ppuStack_8b0 = unaff_x26;
  ppuStack_8a8 = unaff_x25;
  puStack_8a0 = unaff_x24;
  puStack_898 = unaff_x23;
  ppuStack_890 = ppuVar1;
  ppuStack_888 = ppuVar17;
  puStack_880 = puVar11;
  ppuStack_878 = ppuVar4;
  pppuStack_870 = &pppuStack_740;
  _objc_retain(ppuVar7);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_988 = 0;
  puStack_990 = (undefined *)0x0;
  uStack_978 = 0;
  puStack_980 = (undefined8 *)0x0;
  uStack_968 = 0;
  uStack_970 = 0;
  uStack_958 = 0;
  uStack_960 = 0;
  puVar11 = auStack_948;
  ppuVar4 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_980;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar1 = (undefined **)PTR_s_deviceDidStartRecording__1125b9ab8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_980 != unaff_x24) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x23 = *(undefined **)(lStack_988 + (long)unaff_x26 * 8);
        puVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar1);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf70440(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar4 != unaff_x26);
      puVar11 = auStack_948;
      ppuVar4 = ppuVar3;
      ppuVar8 = &puStack_990;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8c8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_ac0;
  pcStack_998 = FUN_106ea128c;
  lStack_9f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9f0 = unaff_x28;
  ppuStack_9e8 = unaff_x27;
  ppuStack_9e0 = unaff_x26;
  ppuStack_9d8 = unaff_x25;
  puStack_9d0 = unaff_x24;
  puStack_9c8 = unaff_x23;
  ppuStack_9c0 = ppuVar1;
  ppuStack_9b8 = ppuVar17;
  ppuStack_9b0 = ppuVar3;
  ppuStack_9a8 = ppuVar7;
  pppuStack_9a0 = &pppuStack_870;
  _objc_retain(ppuVar8);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ab8 = 0;
  puStack_ac0 = (undefined *)0x0;
  uStack_aa8 = 0;
  puStack_ab0 = (ulong *)0x0;
  uStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  puVar12 = auStack_a78;
  ppuVar17 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_ab0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didMarkCorruptContent__1125b9900;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_ab0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x24 = *(undefined **)(lStack_ab8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fd60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar12 = auStack_a78;
      ppuVar17 = ppuVar4;
      ppuVar9 = &puStack_ac0;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  _objc_release(puVar11);
  ppuVar17 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9f8) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_bf0;
  pcStack_ac8 = FUN_106ea13e0;
  lStack_b28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b20 = unaff_x28;
  ppuStack_b18 = unaff_x27;
  ppuStack_b10 = unaff_x26;
  ppuStack_b08 = unaff_x25;
  puStack_b00 = unaff_x24;
  puStack_af8 = unaff_x23;
  ppuStack_af0 = ppuVar1;
  ppuStack_ae8 = ppuVar4;
  puStack_ae0 = puVar11;
  ppuStack_ad8 = ppuVar8;
  pppuStack_ad0 = &pppuStack_9a0;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_be8 = 0;
  puStack_bf0 = (undefined *)0x0;
  uStack_bd8 = 0;
  puStack_be0 = (ulong *)0x0;
  uStack_bc8 = 0;
  uStack_bd0 = 0;
  uStack_bb8 = 0;
  uStack_bc0 = 0;
  puVar11 = auStack_ba8;
  uVar13 = 0x10;
  ppuVar3 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_be0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_uploadToCloudEvent__1125b9948;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_be0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_be8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe80(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar3 != unaff_x27);
      puVar11 = auStack_ba8;
      uVar13 = 0x10;
      ppuVar3 = ppuVar17;
      ppuVar7 = &puStack_bf0;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  ppuVar3 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b28) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_d20;
  pcStack_bf8 = FUN_106ea1524;
  lStack_c60 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c50 = unaff_x28;
  ppuStack_c48 = unaff_x27;
  ppuStack_c40 = unaff_x26;
  ppuStack_c38 = unaff_x25;
  puStack_c30 = unaff_x24;
  puStack_c28 = unaff_x23;
  ppuStack_c20 = ppuVar1;
  ppuStack_c18 = ppuVar17;
  puStack_c10 = puVar12;
  ppuStack_c08 = ppuVar9;
  pppuStack_c00 = &pppuStack_ad0;
  _objc_retain(ppuVar7);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_d18 = 0;
  puStack_d20 = (undefined *)0x0;
  uStack_d08 = 0;
  puStack_d10 = (undefined8 *)0x0;
  uStack_cf8 = 0;
  uStack_d00 = 0;
  uStack_ce8 = 0;
  uStack_cf0 = 0;
  puVar12 = auStack_ce0;
  ppuVar1 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_d10;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_receivedClientId_requestA_1125b9930;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_d10 != unaff_x26) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x25 = *(undefined ***)(lStack_d18 + (long)unaff_x28 * 8);
        ppuVar17 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar17 & 1) != 0) {
          func_0x00010bf6fe20(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar1 != unaff_x28);
      puVar12 = auStack_ce0;
      ppuVar1 = ppuVar3;
      ppuVar4 = &puStack_d20;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release(puVar11);
  ppuVar1 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c60) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_e50;
  pcStack_d28 = FUN_106ea1680;
  lStack_d88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d80 = unaff_x28;
  ppuStack_d78 = unaff_x27;
  ppuStack_d70 = unaff_x26;
  ppuStack_d68 = unaff_x25;
  puStack_d60 = unaff_x24;
  puStack_d58 = unaff_x23;
  ppuStack_d50 = ppuVar3;
  uStack_d48 = uVar13;
  puStack_d40 = puVar11;
  ppuStack_d38 = ppuVar7;
  pppuStack_d30 = &pppuStack_c00;
  _objc_retain(ppuVar4);
  _objc_retain(puVar12);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_e48 = 0;
  puStack_e50 = (undefined *)0x0;
  uStack_e38 = 0;
  puStack_e40 = (ulong *)0x0;
  uStack_e28 = 0;
  uStack_e30 = 0;
  uStack_e18 = 0;
  uStack_e20 = 0;
  puVar11 = auStack_e08;
  ppuVar17 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_e40;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedWifiAPList__1125b9940;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_e40 != unaff_x25) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x24 = *(undefined **)(lStack_e48 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar11 = auStack_e08;
      ppuVar17 = ppuVar1;
      ppuVar8 = &puStack_e50;
      func_0x00010bf52a60();
      ppuVar3 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar12);
  ppuVar17 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d88) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_f80;
  pcStack_e58 = FUN_106ea17d4;
  lStack_eb8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_eb0 = unaff_x28;
  ppuStack_ea8 = unaff_x27;
  ppuStack_ea0 = unaff_x26;
  ppuStack_e98 = unaff_x25;
  puStack_e90 = unaff_x24;
  puStack_e88 = unaff_x23;
  ppuStack_e80 = ppuVar3;
  ppuStack_e78 = ppuVar1;
  puStack_e70 = puVar12;
  ppuStack_e68 = ppuVar4;
  pppuStack_e60 = &pppuStack_d30;
  _objc_retain(ppuVar8);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_f78 = 0;
  puStack_f80 = (undefined *)0x0;
  uStack_f68 = 0;
  puStack_f70 = (ulong *)0x0;
  uStack_f58 = 0;
  uStack_f60 = 0;
  uStack_f48 = 0;
  uStack_f50 = 0;
  ppuVar1 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_f70;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedLastCloudUploadTi_1125b9938;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_f70 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_f78 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe40(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = ppuVar17;
      ppuVar7 = &puStack_f80;
      func_0x00010bf52a60();
      ppuVar3 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar1 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_eb8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_10b0;
  pcStack_f88 = FUN_106ea1928;
  lStack_fe8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_fe0 = unaff_x28;
  ppuStack_fd8 = unaff_x27;
  ppuStack_fd0 = unaff_x26;
  ppuStack_fc8 = unaff_x25;
  puStack_fc0 = unaff_x24;
  puStack_fb8 = unaff_x23;
  ppuStack_fb0 = ppuVar3;
  ppuStack_fa8 = ppuVar17;
  puStack_fa0 = puVar11;
  ppuStack_f98 = ppuVar8;
  pppuStack_f90 = &pppuStack_e60;
  _objc_retain(ppuVar7);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_10a8 = 0;
  puStack_10b0 = (undefined *)0x0;
  uStack_1098 = 0;
  puStack_10a0 = (undefined8 *)0x0;
  uStack_1088 = 0;
  uStack_1090 = 0;
  uStack_1078 = 0;
  uStack_1080 = 0;
  ppuVar4 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_10a0;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar3 = (undefined **)PTR_s_deviceDidRequestBLERestart__1125b9aa8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_10a0 != unaff_x24) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x23 = *(undefined **)(lStack_10a8 + (long)unaff_x26 * 8);
        puVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar3);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf70400(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar4 != unaff_x26);
      ppuVar4 = ppuVar1;
      ppuVar9 = &puStack_10b0;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_fe8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_11e0;
  pcStack_10b8 = FUN_106ea1a64;
  lStack_1118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1110 = unaff_x28;
  ppuStack_1108 = unaff_x27;
  ppuStack_1100 = unaff_x26;
  ppuStack_10f8 = unaff_x25;
  puStack_10f0 = unaff_x24;
  puStack_10e8 = unaff_x23;
  ppuStack_10e0 = ppuVar3;
  ppuStack_10d8 = ppuVar17;
  ppuStack_10d0 = ppuVar1;
  ppuStack_10c8 = ppuVar7;
  pppuStack_10c0 = &pppuStack_f90;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_11d8 = 0;
  uStack_11e0 = 0;
  uStack_11c8 = 0;
  plStack_11d0 = (long *)0x0;
  uStack_11b8 = 0;
  uStack_11c0 = 0;
  uStack_11a8 = 0;
  uStack_11b0 = 0;
  ppuVar1 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    lVar16 = *plStack_11d0;
    do {
      ppuVar3 = (undefined **)PTR_s_deviceDidSetUpFeatureCatalog__1125b9ab0;
      ppuVar17 = (undefined **)0x0;
      do {
        if (*plStack_11d0 != lVar16) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar15 = *(ulong *)(lStack_11d8 + (long)ppuVar17 * 8);
        uVar5 = uVar15;
        _objc_opt_respondsToSelector(uVar15,ppuVar3);
        if ((uVar5 & 1) != 0) {
          func_0x00010bf70420(uVar15);
        }
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar1 != ppuVar17);
      ppuVar1 = ppuVar4;
      puVar10 = &uStack_11e0;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  ppuVar1 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1118) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  pppuVar6 = &ppuStack_1220;
  pcStack_11e8 = FUN_106ea1ba0;
  ppuStack_1210 = ppuVar3;
  ppuStack_1208 = ppuVar17;
  ppuStack_1200 = ppuVar4;
  ppuStack_11f8 = ppuVar9;
  pppuStack_11f0 = &pppuStack_10c0;
  _objc_retain(puVar10);
  puStack_1218 = PTR_PTR_1126f7a70;
  ppuStack_1220 = ppuVar1;
  _objc_msgSendSuper2(&ppuStack_1220,PTR_s_init_1125d9248);
  if (pppuVar6 != (undefined ***)0x0) {
    _objc_storeWeak(pppuVar6 + 1,puVar10);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar6[2];
    pppuVar6[2] = (undefined **)puVar2;
    _objc_release(puVar14);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar6[3];
    pppuVar6[3] = (undefined **)puVar2;
    _objc_release(puVar14);
    *(undefined4 *)(pppuVar6 + 4) = 0;
  }
  _objc_release(puVar10);
  return (undefined **)pppuVar6;
}



/* Entry: 106ea0968; end: 106ea0aab; -[SCSpectaclesDeviceEventListenerAnnouncer device:didUpdateInfo:] */

undefined ** FUN_106ea0968(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *unaff_x23;
  ulong uVar15;
  undefined *unaff_x24;
  long lVar16;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar17;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuStack_10f0;
  undefined *puStack_10e8;
  undefined **ppuStack_10e0;
  undefined **ppuStack_10d8;
  undefined **ppuStack_10d0;
  undefined **ppuStack_10c8;
  undefined8 ***pppuStack_10c0;
  code *pcStack_10b8;
  undefined8 uStack_10b0;
  long lStack_10a8;
  long *plStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  long lStack_fe8;
  undefined **ppuStack_fe0;
  undefined **ppuStack_fd8;
  undefined **ppuStack_fd0;
  undefined **ppuStack_fc8;
  undefined *puStack_fc0;
  undefined *puStack_fb8;
  undefined **ppuStack_fb0;
  undefined **ppuStack_fa8;
  undefined **ppuStack_fa0;
  undefined **ppuStack_f98;
  undefined8 ***pppuStack_f90;
  code *pcStack_f88;
  undefined *puStack_f80;
  long lStack_f78;
  undefined8 *puStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  long lStack_eb8;
  undefined **ppuStack_eb0;
  undefined **ppuStack_ea8;
  undefined **ppuStack_ea0;
  undefined **ppuStack_e98;
  undefined *puStack_e90;
  undefined *puStack_e88;
  undefined **ppuStack_e80;
  undefined **ppuStack_e78;
  undefined1 *puStack_e70;
  undefined **ppuStack_e68;
  undefined8 ***pppuStack_e60;
  code *pcStack_e58;
  undefined *puStack_e50;
  long lStack_e48;
  ulong *puStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  long lStack_d88;
  undefined **ppuStack_d80;
  undefined **ppuStack_d78;
  undefined **ppuStack_d70;
  undefined **ppuStack_d68;
  undefined *puStack_d60;
  undefined *puStack_d58;
  undefined **ppuStack_d50;
  undefined **ppuStack_d48;
  undefined1 *puStack_d40;
  undefined **ppuStack_d38;
  undefined8 ***pppuStack_d30;
  code *pcStack_d28;
  undefined *puStack_d20;
  long lStack_d18;
  ulong *puStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined1 auStack_cd8 [128];
  long lStack_c58;
  undefined **ppuStack_c50;
  undefined **ppuStack_c48;
  undefined **ppuStack_c40;
  undefined **ppuStack_c38;
  undefined *puStack_c30;
  undefined *puStack_c28;
  undefined **ppuStack_c20;
  undefined8 uStack_c18;
  undefined1 *puStack_c10;
  undefined **ppuStack_c08;
  undefined8 ***pppuStack_c00;
  code *pcStack_bf8;
  undefined *puStack_bf0;
  long lStack_be8;
  undefined8 *puStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined1 auStack_bb0 [128];
  long lStack_b30;
  undefined **ppuStack_b20;
  undefined **ppuStack_b18;
  undefined **ppuStack_b10;
  undefined **ppuStack_b08;
  undefined *puStack_b00;
  undefined *puStack_af8;
  undefined **ppuStack_af0;
  undefined **ppuStack_ae8;
  undefined1 *puStack_ae0;
  undefined **ppuStack_ad8;
  undefined8 ***pppuStack_ad0;
  code *pcStack_ac8;
  undefined *puStack_ac0;
  long lStack_ab8;
  ulong *puStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined1 auStack_a78 [128];
  long lStack_9f8;
  undefined **ppuStack_9f0;
  undefined **ppuStack_9e8;
  undefined **ppuStack_9e0;
  undefined **ppuStack_9d8;
  undefined *puStack_9d0;
  undefined *puStack_9c8;
  undefined **ppuStack_9c0;
  undefined **ppuStack_9b8;
  undefined1 *puStack_9b0;
  undefined **ppuStack_9a8;
  undefined8 ***pppuStack_9a0;
  code *pcStack_998;
  undefined *puStack_990;
  long lStack_988;
  ulong *puStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined1 auStack_948 [128];
  long lStack_8c8;
  undefined **ppuStack_8c0;
  undefined **ppuStack_8b8;
  undefined **ppuStack_8b0;
  undefined **ppuStack_8a8;
  undefined *puStack_8a0;
  undefined *puStack_898;
  undefined **ppuStack_890;
  undefined **ppuStack_888;
  undefined **ppuStack_880;
  undefined **ppuStack_878;
  undefined8 ***pppuStack_870;
  code *pcStack_868;
  undefined *puStack_860;
  long lStack_858;
  undefined8 *puStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined1 auStack_818 [128];
  long lStack_798;
  undefined **ppuStack_790;
  undefined **ppuStack_788;
  undefined **ppuStack_780;
  undefined **ppuStack_778;
  undefined *puStack_770;
  undefined *puStack_768;
  undefined **ppuStack_760;
  undefined **ppuStack_758;
  undefined1 *puStack_750;
  undefined **ppuStack_748;
  undefined8 ***pppuStack_740;
  code *pcStack_738;
  undefined *puStack_730;
  long lStack_728;
  ulong *puStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  long lStack_668;
  undefined **ppuStack_660;
  undefined **ppuStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined **ppuStack_630;
  undefined8 uStack_628;
  undefined1 *puStack_620;
  undefined **ppuStack_618;
  undefined8 ***pppuStack_610;
  code *pcStack_608;
  undefined *puStack_600;
  long lStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined1 auStack_5c0 [128];
  long lStack_540;
  undefined8 ***pppuStack_4e0;
  code *pcStack_4d8;
  undefined *puStack_4d0;
  long lStack_4c8;
  ulong *puStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined1 auStack_488 [128];
  long lStack_408;
  undefined1 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  long lStack_398;
  ulong *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 auStack_358 [128];
  long lStack_2d8;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar17 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (ulong *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar1 = param_1;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_120;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didUpdateInfo__1125b9920;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x24 = *(undefined **)(lStack_128 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fde0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = param_1;
      ppuVar17 = &puStack_130;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_260;
  pcStack_138 = FUN_106ea0aac;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar17);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  lStack_258 = 0;
  puStack_260 = (undefined *)0x0;
  uStack_248 = 0;
  puStack_250 = (undefined8 *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  ppuVar1 = param_3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_250;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      puVar2 = PTR_s_deviceDidUpdateTaskQueue__1125b9ac8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_250 != unaff_x24) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x23 = *(undefined **)(lStack_258 + (long)unaff_x26 * 8);
        puVar14 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,puVar2);
        if (((ulong)puVar14 & 1) != 0) {
          func_0x00010bf70480(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar1 != unaff_x26);
      ppuVar1 = param_3;
      ppuVar4 = &puStack_260;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar1 = &puStack_3a0;
  pcStack_268 = FUN_106ea0be8;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_270 = &puStack_140;
  _objc_retain(ppuVar4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_398 = 0;
  puStack_3a0 = (undefined *)0x0;
  uStack_388 = 0;
  puStack_390 = (ulong *)0x0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  puVar11 = auStack_358;
  ppuVar3 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_390;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_onFirmwareUpdate_progress_1125b9928;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_390 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_398 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe00(uVar13,unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar3 != unaff_x27);
      puVar11 = auStack_358;
      ppuVar3 = ppuVar17;
      ppuVar1 = &puStack_3a0;
      func_0x00010bf52a60();
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_4d0;
  pcStack_3a8 = FUN_106ea0d3c;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_3b0 = &ppuStack_270;
  _objc_retain(ppuVar1);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_4c8 = 0;
  puStack_4d0 = (undefined *)0x0;
  uStack_4b8 = 0;
  puStack_4c0 = (ulong *)0x0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  puVar12 = auStack_488;
  uVar13 = 0x10;
  ppuVar17 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_4c0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_deviceDidFetchFirmwareDigest_dig_1125b9a98;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_4c0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x24 = *(undefined **)(lStack_4c8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf703c0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar12 = auStack_488;
      uVar13 = 0x10;
      ppuVar17 = ppuVar4;
      ppuVar3 = &puStack_4d0;
      func_0x00010bf52a60();
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_600;
  pcStack_4d8 = FUN_106ea0e90;
  lStack_540 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_4e0 = &pppuStack_3b0;
  _objc_retain(ppuVar3);
  _objc_retain(puVar12);
  _objc_retain(uVar13);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_5f8 = 0;
  puStack_600 = (undefined *)0x0;
  uStack_5e8 = 0;
  puStack_5f0 = (undefined8 *)0x0;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  puVar11 = auStack_5c0;
  ppuVar17 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_5f0;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_didCompletedScheduledUpda_1125b98f8;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_5f0 != unaff_x26) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x25 = *(undefined ***)(lStack_5f8 + (long)unaff_x28 * 8);
        ppuVar4 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar4 & 1) != 0) {
          func_0x00010bf6fd40(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar17 != unaff_x28);
      puVar11 = auStack_5c0;
      ppuVar17 = ppuVar1;
      ppuVar4 = &puStack_600;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(uVar13);
  _objc_release(puVar12);
  ppuVar17 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_540) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_730;
  pcStack_608 = FUN_106ea0ffc;
  lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_660 = unaff_x28;
  ppuStack_658 = unaff_x27;
  ppuStack_650 = unaff_x26;
  ppuStack_648 = unaff_x25;
  puStack_640 = unaff_x24;
  puStack_638 = unaff_x23;
  ppuStack_630 = ppuVar1;
  uStack_628 = uVar13;
  puStack_620 = puVar12;
  ppuStack_618 = ppuVar3;
  pppuStack_610 = &pppuStack_4e0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_728 = 0;
  puStack_730 = (undefined *)0x0;
  uStack_718 = 0;
  puStack_720 = (ulong *)0x0;
  uStack_708 = 0;
  uStack_710 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  ppuVar3 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_720;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didReceiveCrashReport__1125b9910;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_720 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_728 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fda0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar3 != unaff_x27);
      ppuVar3 = ppuVar17;
      ppuVar5 = &puStack_730;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar3 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_668) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_860;
  pcStack_738 = FUN_106ea1150;
  lStack_798 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_790 = unaff_x28;
  ppuStack_788 = unaff_x27;
  ppuStack_780 = unaff_x26;
  ppuStack_778 = unaff_x25;
  puStack_770 = unaff_x24;
  puStack_768 = unaff_x23;
  ppuStack_760 = ppuVar1;
  ppuStack_758 = ppuVar17;
  puStack_750 = puVar11;
  ppuStack_748 = ppuVar4;
  pppuStack_740 = &pppuStack_610;
  _objc_retain(ppuVar5);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_858 = 0;
  puStack_860 = (undefined *)0x0;
  uStack_848 = 0;
  puStack_850 = (undefined8 *)0x0;
  uStack_838 = 0;
  uStack_840 = 0;
  uStack_828 = 0;
  uStack_830 = 0;
  puVar11 = auStack_818;
  ppuVar4 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_850;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar1 = (undefined **)PTR_s_deviceDidStartRecording__1125b9ab8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_850 != unaff_x24) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x23 = *(undefined **)(lStack_858 + (long)unaff_x26 * 8);
        puVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar1);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf70440(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar4 != unaff_x26);
      puVar11 = auStack_818;
      ppuVar4 = ppuVar3;
      ppuVar8 = &puStack_860;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  ppuVar4 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_798) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_990;
  pcStack_868 = FUN_106ea128c;
  lStack_8c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_8c0 = unaff_x28;
  ppuStack_8b8 = unaff_x27;
  ppuStack_8b0 = unaff_x26;
  ppuStack_8a8 = unaff_x25;
  puStack_8a0 = unaff_x24;
  puStack_898 = unaff_x23;
  ppuStack_890 = ppuVar1;
  ppuStack_888 = ppuVar17;
  ppuStack_880 = ppuVar3;
  ppuStack_878 = ppuVar5;
  pppuStack_870 = &pppuStack_740;
  _objc_retain(ppuVar8);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_988 = 0;
  puStack_990 = (undefined *)0x0;
  uStack_978 = 0;
  puStack_980 = (ulong *)0x0;
  uStack_968 = 0;
  uStack_970 = 0;
  uStack_958 = 0;
  uStack_960 = 0;
  puVar12 = auStack_948;
  ppuVar17 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_980;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didMarkCorruptContent__1125b9900;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_980 != unaff_x25) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x24 = *(undefined **)(lStack_988 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fd60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar12 = auStack_948;
      ppuVar17 = ppuVar4;
      ppuVar9 = &puStack_990;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  _objc_release(puVar11);
  ppuVar17 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8c8) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_ac0;
  pcStack_998 = FUN_106ea13e0;
  lStack_9f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9f0 = unaff_x28;
  ppuStack_9e8 = unaff_x27;
  ppuStack_9e0 = unaff_x26;
  ppuStack_9d8 = unaff_x25;
  puStack_9d0 = unaff_x24;
  puStack_9c8 = unaff_x23;
  ppuStack_9c0 = ppuVar1;
  ppuStack_9b8 = ppuVar4;
  puStack_9b0 = puVar11;
  ppuStack_9a8 = ppuVar8;
  pppuStack_9a0 = &pppuStack_870;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ab8 = 0;
  puStack_ac0 = (undefined *)0x0;
  uStack_aa8 = 0;
  puStack_ab0 = (ulong *)0x0;
  uStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  puVar11 = auStack_a78;
  uVar13 = 0x10;
  ppuVar4 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_ab0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_uploadToCloudEvent__1125b9948;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_ab0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_ab8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe80(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar4 != unaff_x27);
      puVar11 = auStack_a78;
      uVar13 = 0x10;
      ppuVar4 = ppuVar17;
      ppuVar3 = &puStack_ac0;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  ppuVar4 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9f8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_bf0;
  pcStack_ac8 = FUN_106ea1524;
  lStack_b30 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b20 = unaff_x28;
  ppuStack_b18 = unaff_x27;
  ppuStack_b10 = unaff_x26;
  ppuStack_b08 = unaff_x25;
  puStack_b00 = unaff_x24;
  puStack_af8 = unaff_x23;
  ppuStack_af0 = ppuVar1;
  ppuStack_ae8 = ppuVar17;
  puStack_ae0 = puVar12;
  ppuStack_ad8 = ppuVar9;
  pppuStack_ad0 = &pppuStack_9a0;
  _objc_retain(ppuVar3);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_be8 = 0;
  puStack_bf0 = (undefined *)0x0;
  uStack_bd8 = 0;
  puStack_be0 = (undefined8 *)0x0;
  uStack_bc8 = 0;
  uStack_bd0 = 0;
  uStack_bb8 = 0;
  uStack_bc0 = 0;
  puVar12 = auStack_bb0;
  ppuVar1 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_be0;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_receivedClientId_requestA_1125b9930;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_be0 != unaff_x26) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x25 = *(undefined ***)(lStack_be8 + (long)unaff_x28 * 8);
        ppuVar17 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar17 & 1) != 0) {
          func_0x00010bf6fe20(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar1 != unaff_x28);
      puVar12 = auStack_bb0;
      ppuVar1 = ppuVar4;
      ppuVar5 = &puStack_bf0;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  _objc_release(puVar11);
  ppuVar1 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b30) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_d20;
  pcStack_bf8 = FUN_106ea1680;
  lStack_c58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c50 = unaff_x28;
  ppuStack_c48 = unaff_x27;
  ppuStack_c40 = unaff_x26;
  ppuStack_c38 = unaff_x25;
  puStack_c30 = unaff_x24;
  puStack_c28 = unaff_x23;
  ppuStack_c20 = ppuVar4;
  uStack_c18 = uVar13;
  puStack_c10 = puVar11;
  ppuStack_c08 = ppuVar3;
  pppuStack_c00 = &pppuStack_ad0;
  _objc_retain(ppuVar5);
  _objc_retain(puVar12);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_d18 = 0;
  puStack_d20 = (undefined *)0x0;
  uStack_d08 = 0;
  puStack_d10 = (ulong *)0x0;
  uStack_cf8 = 0;
  uStack_d00 = 0;
  uStack_ce8 = 0;
  uStack_cf0 = 0;
  puVar11 = auStack_cd8;
  ppuVar17 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_d10;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedWifiAPList__1125b9940;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_d10 != unaff_x25) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x24 = *(undefined **)(lStack_d18 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar11 = auStack_cd8;
      ppuVar17 = ppuVar1;
      ppuVar8 = &puStack_d20;
      func_0x00010bf52a60();
      ppuVar4 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar12);
  ppuVar17 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c58) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_e50;
  pcStack_d28 = FUN_106ea17d4;
  lStack_d88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d80 = unaff_x28;
  ppuStack_d78 = unaff_x27;
  ppuStack_d70 = unaff_x26;
  ppuStack_d68 = unaff_x25;
  puStack_d60 = unaff_x24;
  puStack_d58 = unaff_x23;
  ppuStack_d50 = ppuVar4;
  ppuStack_d48 = ppuVar1;
  puStack_d40 = puVar12;
  ppuStack_d38 = ppuVar5;
  pppuStack_d30 = &pppuStack_c00;
  _objc_retain(ppuVar8);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_e48 = 0;
  puStack_e50 = (undefined *)0x0;
  uStack_e38 = 0;
  puStack_e40 = (ulong *)0x0;
  uStack_e28 = 0;
  uStack_e30 = 0;
  uStack_e18 = 0;
  uStack_e20 = 0;
  ppuVar1 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_e40;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedLastCloudUploadTi_1125b9938;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_e40 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_e48 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe40(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = ppuVar17;
      ppuVar3 = &puStack_e50;
      func_0x00010bf52a60();
      ppuVar4 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar1 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d88) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_f80;
  pcStack_e58 = FUN_106ea1928;
  lStack_eb8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_eb0 = unaff_x28;
  ppuStack_ea8 = unaff_x27;
  ppuStack_ea0 = unaff_x26;
  ppuStack_e98 = unaff_x25;
  puStack_e90 = unaff_x24;
  puStack_e88 = unaff_x23;
  ppuStack_e80 = ppuVar4;
  ppuStack_e78 = ppuVar17;
  puStack_e70 = puVar11;
  ppuStack_e68 = ppuVar8;
  pppuStack_e60 = &pppuStack_d30;
  _objc_retain(ppuVar3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_f78 = 0;
  puStack_f80 = (undefined *)0x0;
  uStack_f68 = 0;
  puStack_f70 = (undefined8 *)0x0;
  uStack_f58 = 0;
  uStack_f60 = 0;
  uStack_f48 = 0;
  uStack_f50 = 0;
  ppuVar5 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar5 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_f70;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar4 = (undefined **)PTR_s_deviceDidRequestBLERestart__1125b9aa8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_f70 != unaff_x24) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x23 = *(undefined **)(lStack_f78 + (long)unaff_x26 * 8);
        puVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar4);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf70400(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar5 != unaff_x26);
      ppuVar5 = ppuVar1;
      ppuVar9 = &puStack_f80;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar5 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  ppuVar5 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_eb8) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_10b0;
  pcStack_f88 = FUN_106ea1a64;
  lStack_fe8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_fe0 = unaff_x28;
  ppuStack_fd8 = unaff_x27;
  ppuStack_fd0 = unaff_x26;
  ppuStack_fc8 = unaff_x25;
  puStack_fc0 = unaff_x24;
  puStack_fb8 = unaff_x23;
  ppuStack_fb0 = ppuVar4;
  ppuStack_fa8 = ppuVar17;
  ppuStack_fa0 = ppuVar1;
  ppuStack_f98 = ppuVar3;
  pppuStack_f90 = &pppuStack_e60;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_10a8 = 0;
  uStack_10b0 = 0;
  uStack_1098 = 0;
  plStack_10a0 = (long *)0x0;
  uStack_1088 = 0;
  uStack_1090 = 0;
  uStack_1078 = 0;
  uStack_1080 = 0;
  ppuVar1 = ppuVar5;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    lVar16 = *plStack_10a0;
    do {
      ppuVar4 = (undefined **)PTR_s_deviceDidSetUpFeatureCatalog__1125b9ab0;
      ppuVar17 = (undefined **)0x0;
      do {
        if (*plStack_10a0 != lVar16) {
          _objc_enumerationMutation(ppuVar5);
        }
        uVar15 = *(ulong *)(lStack_10a8 + (long)ppuVar17 * 8);
        uVar6 = uVar15;
        _objc_opt_respondsToSelector(uVar15,ppuVar4);
        if ((uVar6 & 1) != 0) {
          func_0x00010bf70420(uVar15);
        }
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar1 != ppuVar17);
      ppuVar1 = ppuVar5;
      puVar10 = &uStack_10b0;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar5);
  ppuVar1 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_fe8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  pppuVar7 = &ppuStack_10f0;
  pcStack_10b8 = FUN_106ea1ba0;
  ppuStack_10e0 = ppuVar4;
  ppuStack_10d8 = ppuVar17;
  ppuStack_10d0 = ppuVar5;
  ppuStack_10c8 = ppuVar9;
  pppuStack_10c0 = &pppuStack_f90;
  _objc_retain(puVar10);
  puStack_10e8 = PTR_PTR_1126f7a70;
  ppuStack_10f0 = ppuVar1;
  _objc_msgSendSuper2(&ppuStack_10f0,PTR_s_init_1125d9248);
  if (pppuVar7 != (undefined ***)0x0) {
    _objc_storeWeak(pppuVar7 + 1,puVar10);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar7[2];
    pppuVar7[2] = (undefined **)puVar2;
    _objc_release(puVar14);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar7[3];
    pppuVar7[3] = (undefined **)puVar2;
    _objc_release(puVar14);
    *(undefined4 *)(pppuVar7 + 4) = 0;
  }
  _objc_release(puVar10);
  return (undefined **)pppuVar7;
}



/* Entry: 106ea0aac; end: 106ea0be7; -[SCSpectaclesDeviceEventListenerAnnouncer deviceDidUpdateTaskQueue:] */

undefined ** FUN_106ea0aac(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *unaff_x23;
  ulong uVar15;
  undefined *unaff_x24;
  long lVar16;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar17;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuStack_fc0;
  undefined *puStack_fb8;
  undefined **ppuStack_fb0;
  undefined **ppuStack_fa8;
  undefined **ppuStack_fa0;
  undefined **ppuStack_f98;
  undefined8 ***pppuStack_f90;
  code *pcStack_f88;
  undefined8 uStack_f80;
  long lStack_f78;
  long *plStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  long lStack_eb8;
  undefined **ppuStack_eb0;
  undefined **ppuStack_ea8;
  undefined **ppuStack_ea0;
  undefined **ppuStack_e98;
  undefined *puStack_e90;
  undefined *puStack_e88;
  undefined **ppuStack_e80;
  undefined **ppuStack_e78;
  undefined **ppuStack_e70;
  undefined **ppuStack_e68;
  undefined8 ***pppuStack_e60;
  code *pcStack_e58;
  undefined *puStack_e50;
  long lStack_e48;
  undefined8 *puStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  long lStack_d88;
  undefined **ppuStack_d80;
  undefined **ppuStack_d78;
  undefined **ppuStack_d70;
  undefined **ppuStack_d68;
  undefined *puStack_d60;
  undefined *puStack_d58;
  undefined **ppuStack_d50;
  undefined **ppuStack_d48;
  undefined1 *puStack_d40;
  undefined **ppuStack_d38;
  undefined8 ***pppuStack_d30;
  code *pcStack_d28;
  undefined *puStack_d20;
  long lStack_d18;
  ulong *puStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  long lStack_c58;
  undefined **ppuStack_c50;
  undefined **ppuStack_c48;
  undefined **ppuStack_c40;
  undefined **ppuStack_c38;
  undefined *puStack_c30;
  undefined *puStack_c28;
  undefined **ppuStack_c20;
  undefined **ppuStack_c18;
  undefined1 *puStack_c10;
  undefined **ppuStack_c08;
  undefined8 ***pppuStack_c00;
  code *pcStack_bf8;
  undefined *puStack_bf0;
  long lStack_be8;
  ulong *puStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined1 auStack_ba8 [128];
  long lStack_b28;
  undefined **ppuStack_b20;
  undefined **ppuStack_b18;
  undefined **ppuStack_b10;
  undefined **ppuStack_b08;
  undefined *puStack_b00;
  undefined *puStack_af8;
  undefined **ppuStack_af0;
  undefined8 uStack_ae8;
  undefined1 *puStack_ae0;
  undefined **ppuStack_ad8;
  undefined8 ***pppuStack_ad0;
  code *pcStack_ac8;
  undefined *puStack_ac0;
  long lStack_ab8;
  undefined8 *puStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined1 auStack_a80 [128];
  long lStack_a00;
  undefined **ppuStack_9f0;
  undefined **ppuStack_9e8;
  undefined **ppuStack_9e0;
  undefined **ppuStack_9d8;
  undefined *puStack_9d0;
  undefined *puStack_9c8;
  undefined **ppuStack_9c0;
  undefined **ppuStack_9b8;
  undefined1 *puStack_9b0;
  undefined **ppuStack_9a8;
  undefined8 ***pppuStack_9a0;
  code *pcStack_998;
  undefined *puStack_990;
  long lStack_988;
  ulong *puStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined1 auStack_948 [128];
  long lStack_8c8;
  undefined **ppuStack_8c0;
  undefined **ppuStack_8b8;
  undefined **ppuStack_8b0;
  undefined **ppuStack_8a8;
  undefined *puStack_8a0;
  undefined *puStack_898;
  undefined **ppuStack_890;
  undefined **ppuStack_888;
  undefined1 *puStack_880;
  undefined **ppuStack_878;
  undefined8 ***pppuStack_870;
  code *pcStack_868;
  undefined *puStack_860;
  long lStack_858;
  ulong *puStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined1 auStack_818 [128];
  long lStack_798;
  undefined **ppuStack_790;
  undefined **ppuStack_788;
  undefined **ppuStack_780;
  undefined **ppuStack_778;
  undefined *puStack_770;
  undefined *puStack_768;
  undefined **ppuStack_760;
  undefined **ppuStack_758;
  undefined **ppuStack_750;
  undefined **ppuStack_748;
  undefined8 ***pppuStack_740;
  code *pcStack_738;
  undefined *puStack_730;
  long lStack_728;
  undefined8 *puStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined1 auStack_6e8 [128];
  long lStack_668;
  undefined **ppuStack_660;
  undefined **ppuStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined **ppuStack_630;
  undefined **ppuStack_628;
  undefined1 *puStack_620;
  undefined **ppuStack_618;
  undefined8 ***pppuStack_610;
  code *pcStack_608;
  undefined *puStack_600;
  long lStack_5f8;
  ulong *puStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  long lStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined **ppuStack_500;
  undefined8 uStack_4f8;
  undefined1 *puStack_4f0;
  undefined **ppuStack_4e8;
  undefined8 ***pppuStack_4e0;
  code *pcStack_4d8;
  undefined *puStack_4d0;
  long lStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined1 auStack_490 [128];
  long lStack_410;
  undefined1 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  long lStack_398;
  ulong *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 auStack_358 [128];
  long lStack_2d8;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  long lStack_268;
  ulong *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_228 [128];
  long lStack_1a8;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar17 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar1 = param_1;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_120;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      puVar3 = PTR_s_deviceDidUpdateTaskQueue__1125b9ac8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_120 != unaff_x24) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x23 = *(undefined **)(lStack_128 + (long)unaff_x26 * 8);
        puVar14 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,puVar3);
        if (((ulong)puVar14 & 1) != 0) {
          func_0x00010bf70480(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar1 != unaff_x26);
      ppuVar1 = param_1;
      ppuVar17 = &puStack_130;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  ppuVar1 = &puStack_270;
  pcStack_138 = FUN_106ea0be8;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar17);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_268 = 0;
  puStack_270 = (undefined *)0x0;
  uStack_258 = 0;
  puStack_260 = (ulong *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  puVar11 = auStack_228;
  ppuVar2 = param_3;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_260;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_onFirmwareUpdate_progress_1125b9928;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_260 != unaff_x25) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x24 = *(undefined **)(lStack_268 + (long)unaff_x27 * 8);
        puVar3 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf6fe00(uVar13,unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar2 != unaff_x27);
      puVar11 = auStack_228;
      ppuVar2 = param_3;
      ppuVar1 = &puStack_270;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_3a0;
  pcStack_278 = FUN_106ea0d3c;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_280 = &puStack_140;
  _objc_retain(ppuVar1);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_398 = 0;
  puStack_3a0 = (undefined *)0x0;
  uStack_388 = 0;
  puStack_390 = (ulong *)0x0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  puVar12 = auStack_358;
  uVar13 = 0x10;
  ppuVar2 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_390;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_deviceDidFetchFirmwareDigest_dig_1125b9a98;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_390 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_398 + (long)unaff_x27 * 8);
        puVar3 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf703c0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar2 != unaff_x27);
      puVar12 = auStack_358;
      uVar13 = 0x10;
      ppuVar2 = ppuVar17;
      ppuVar4 = &puStack_3a0;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_4d0;
  pcStack_3a8 = FUN_106ea0e90;
  lStack_410 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_3b0 = &ppuStack_280;
  _objc_retain(ppuVar4);
  _objc_retain(puVar12);
  _objc_retain(uVar13);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_4c8 = 0;
  puStack_4d0 = (undefined *)0x0;
  uStack_4b8 = 0;
  puStack_4c0 = (undefined8 *)0x0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  puVar11 = auStack_490;
  ppuVar17 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_4c0;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_didCompletedScheduledUpda_1125b98f8;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_4c0 != unaff_x26) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x25 = *(undefined ***)(lStack_4c8 + (long)unaff_x28 * 8);
        ppuVar2 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar2 & 1) != 0) {
          func_0x00010bf6fd40(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar17 != unaff_x28);
      puVar11 = auStack_490;
      ppuVar17 = ppuVar1;
      ppuVar2 = &puStack_4d0;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(uVar13);
  _objc_release(puVar12);
  ppuVar17 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_410) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_600;
  pcStack_4d8 = FUN_106ea0ffc;
  lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_530 = unaff_x28;
  ppuStack_528 = unaff_x27;
  ppuStack_520 = unaff_x26;
  ppuStack_518 = unaff_x25;
  puStack_510 = unaff_x24;
  puStack_508 = unaff_x23;
  ppuStack_500 = ppuVar1;
  uStack_4f8 = uVar13;
  puStack_4f0 = puVar12;
  ppuStack_4e8 = ppuVar4;
  pppuStack_4e0 = &pppuStack_3b0;
  _objc_retain(ppuVar2);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_5f8 = 0;
  puStack_600 = (undefined *)0x0;
  uStack_5e8 = 0;
  puStack_5f0 = (ulong *)0x0;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  ppuVar4 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_5f0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didReceiveCrashReport__1125b9910;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_5f0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_5f8 + (long)unaff_x27 * 8);
        puVar3 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf6fda0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar4 != unaff_x27);
      ppuVar4 = ppuVar17;
      ppuVar5 = &puStack_600;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar4 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_538) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_730;
  pcStack_608 = FUN_106ea1150;
  lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_660 = unaff_x28;
  ppuStack_658 = unaff_x27;
  ppuStack_650 = unaff_x26;
  ppuStack_648 = unaff_x25;
  puStack_640 = unaff_x24;
  puStack_638 = unaff_x23;
  ppuStack_630 = ppuVar1;
  ppuStack_628 = ppuVar17;
  puStack_620 = puVar11;
  ppuStack_618 = ppuVar2;
  pppuStack_610 = &pppuStack_4e0;
  _objc_retain(ppuVar5);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_728 = 0;
  puStack_730 = (undefined *)0x0;
  uStack_718 = 0;
  puStack_720 = (undefined8 *)0x0;
  uStack_708 = 0;
  uStack_710 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  puVar11 = auStack_6e8;
  ppuVar2 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_720;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar1 = (undefined **)PTR_s_deviceDidStartRecording__1125b9ab8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_720 != unaff_x24) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x23 = *(undefined **)(lStack_728 + (long)unaff_x26 * 8);
        puVar3 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar1);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf70440(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar2 != unaff_x26);
      puVar11 = auStack_6e8;
      ppuVar2 = ppuVar4;
      ppuVar8 = &puStack_730;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  ppuVar2 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_668) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_860;
  pcStack_738 = FUN_106ea128c;
  lStack_798 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_790 = unaff_x28;
  ppuStack_788 = unaff_x27;
  ppuStack_780 = unaff_x26;
  ppuStack_778 = unaff_x25;
  puStack_770 = unaff_x24;
  puStack_768 = unaff_x23;
  ppuStack_760 = ppuVar1;
  ppuStack_758 = ppuVar17;
  ppuStack_750 = ppuVar4;
  ppuStack_748 = ppuVar5;
  pppuStack_740 = &pppuStack_610;
  _objc_retain(ppuVar8);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_858 = 0;
  puStack_860 = (undefined *)0x0;
  uStack_848 = 0;
  puStack_850 = (ulong *)0x0;
  uStack_838 = 0;
  uStack_840 = 0;
  uStack_828 = 0;
  uStack_830 = 0;
  puVar12 = auStack_818;
  ppuVar17 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_850;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didMarkCorruptContent__1125b9900;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_850 != unaff_x25) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x24 = *(undefined **)(lStack_858 + (long)unaff_x27 * 8);
        puVar3 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf6fd60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar12 = auStack_818;
      ppuVar17 = ppuVar2;
      ppuVar9 = &puStack_860;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  _objc_release(puVar11);
  ppuVar17 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_798) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_990;
  pcStack_868 = FUN_106ea13e0;
  lStack_8c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_8c0 = unaff_x28;
  ppuStack_8b8 = unaff_x27;
  ppuStack_8b0 = unaff_x26;
  ppuStack_8a8 = unaff_x25;
  puStack_8a0 = unaff_x24;
  puStack_898 = unaff_x23;
  ppuStack_890 = ppuVar1;
  ppuStack_888 = ppuVar2;
  puStack_880 = puVar11;
  ppuStack_878 = ppuVar8;
  pppuStack_870 = &pppuStack_740;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_988 = 0;
  puStack_990 = (undefined *)0x0;
  uStack_978 = 0;
  puStack_980 = (ulong *)0x0;
  uStack_968 = 0;
  uStack_970 = 0;
  uStack_958 = 0;
  uStack_960 = 0;
  puVar11 = auStack_948;
  uVar13 = 0x10;
  ppuVar2 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_980;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_uploadToCloudEvent__1125b9948;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_980 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_988 + (long)unaff_x27 * 8);
        puVar3 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf6fe80(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar2 != unaff_x27);
      puVar11 = auStack_948;
      uVar13 = 0x10;
      ppuVar2 = ppuVar17;
      ppuVar4 = &puStack_990;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  ppuVar2 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8c8) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_ac0;
  pcStack_998 = FUN_106ea1524;
  lStack_a00 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9f0 = unaff_x28;
  ppuStack_9e8 = unaff_x27;
  ppuStack_9e0 = unaff_x26;
  ppuStack_9d8 = unaff_x25;
  puStack_9d0 = unaff_x24;
  puStack_9c8 = unaff_x23;
  ppuStack_9c0 = ppuVar1;
  ppuStack_9b8 = ppuVar17;
  puStack_9b0 = puVar12;
  ppuStack_9a8 = ppuVar9;
  pppuStack_9a0 = &pppuStack_870;
  _objc_retain(ppuVar4);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ab8 = 0;
  puStack_ac0 = (undefined *)0x0;
  uStack_aa8 = 0;
  puStack_ab0 = (undefined8 *)0x0;
  uStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  puVar12 = auStack_a80;
  ppuVar1 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_ab0;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_receivedClientId_requestA_1125b9930;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_ab0 != unaff_x26) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x25 = *(undefined ***)(lStack_ab8 + (long)unaff_x28 * 8);
        ppuVar17 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar17 & 1) != 0) {
          func_0x00010bf6fe20(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar1 != unaff_x28);
      puVar12 = auStack_a80;
      ppuVar1 = ppuVar2;
      ppuVar5 = &puStack_ac0;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  _objc_release(puVar11);
  ppuVar1 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a00) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_bf0;
  pcStack_ac8 = FUN_106ea1680;
  lStack_b28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b20 = unaff_x28;
  ppuStack_b18 = unaff_x27;
  ppuStack_b10 = unaff_x26;
  ppuStack_b08 = unaff_x25;
  puStack_b00 = unaff_x24;
  puStack_af8 = unaff_x23;
  ppuStack_af0 = ppuVar2;
  uStack_ae8 = uVar13;
  puStack_ae0 = puVar11;
  ppuStack_ad8 = ppuVar4;
  pppuStack_ad0 = &pppuStack_9a0;
  _objc_retain(ppuVar5);
  _objc_retain(puVar12);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_be8 = 0;
  puStack_bf0 = (undefined *)0x0;
  uStack_bd8 = 0;
  puStack_be0 = (ulong *)0x0;
  uStack_bc8 = 0;
  uStack_bd0 = 0;
  uStack_bb8 = 0;
  uStack_bc0 = 0;
  puVar11 = auStack_ba8;
  ppuVar17 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_be0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedWifiAPList__1125b9940;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_be0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x24 = *(undefined **)(lStack_be8 + (long)unaff_x27 * 8);
        puVar3 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf6fe60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar11 = auStack_ba8;
      ppuVar17 = ppuVar1;
      ppuVar8 = &puStack_bf0;
      func_0x00010bf52a60();
      ppuVar2 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar12);
  ppuVar17 = ppuVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b28) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_d20;
  pcStack_bf8 = FUN_106ea17d4;
  lStack_c58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c50 = unaff_x28;
  ppuStack_c48 = unaff_x27;
  ppuStack_c40 = unaff_x26;
  ppuStack_c38 = unaff_x25;
  puStack_c30 = unaff_x24;
  puStack_c28 = unaff_x23;
  ppuStack_c20 = ppuVar2;
  ppuStack_c18 = ppuVar1;
  puStack_c10 = puVar12;
  ppuStack_c08 = ppuVar5;
  pppuStack_c00 = &pppuStack_ad0;
  _objc_retain(ppuVar8);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_d18 = 0;
  puStack_d20 = (undefined *)0x0;
  uStack_d08 = 0;
  puStack_d10 = (ulong *)0x0;
  uStack_cf8 = 0;
  uStack_d00 = 0;
  uStack_ce8 = 0;
  uStack_cf0 = 0;
  ppuVar1 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_d10;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedLastCloudUploadTi_1125b9938;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_d10 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_d18 + (long)unaff_x27 * 8);
        puVar3 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf6fe40(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = ppuVar17;
      ppuVar4 = &puStack_d20;
      func_0x00010bf52a60();
      ppuVar2 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar1 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c58) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_e50;
  pcStack_d28 = FUN_106ea1928;
  lStack_d88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d80 = unaff_x28;
  ppuStack_d78 = unaff_x27;
  ppuStack_d70 = unaff_x26;
  ppuStack_d68 = unaff_x25;
  puStack_d60 = unaff_x24;
  puStack_d58 = unaff_x23;
  ppuStack_d50 = ppuVar2;
  ppuStack_d48 = ppuVar17;
  puStack_d40 = puVar11;
  ppuStack_d38 = ppuVar8;
  pppuStack_d30 = &pppuStack_c00;
  _objc_retain(ppuVar4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_e48 = 0;
  puStack_e50 = (undefined *)0x0;
  uStack_e38 = 0;
  puStack_e40 = (undefined8 *)0x0;
  uStack_e28 = 0;
  uStack_e30 = 0;
  uStack_e18 = 0;
  uStack_e20 = 0;
  ppuVar5 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar5 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_e40;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar2 = (undefined **)PTR_s_deviceDidRequestBLERestart__1125b9aa8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_e40 != unaff_x24) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x23 = *(undefined **)(lStack_e48 + (long)unaff_x26 * 8);
        puVar3 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar2);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf70400(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar5 != unaff_x26);
      ppuVar5 = ppuVar1;
      ppuVar9 = &puStack_e50;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar5 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  ppuVar5 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d88) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_f80;
  pcStack_e58 = FUN_106ea1a64;
  lStack_eb8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_eb0 = unaff_x28;
  ppuStack_ea8 = unaff_x27;
  ppuStack_ea0 = unaff_x26;
  ppuStack_e98 = unaff_x25;
  puStack_e90 = unaff_x24;
  puStack_e88 = unaff_x23;
  ppuStack_e80 = ppuVar2;
  ppuStack_e78 = ppuVar17;
  ppuStack_e70 = ppuVar1;
  ppuStack_e68 = ppuVar4;
  pppuStack_e60 = &pppuStack_d30;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_f78 = 0;
  uStack_f80 = 0;
  uStack_f68 = 0;
  plStack_f70 = (long *)0x0;
  uStack_f58 = 0;
  uStack_f60 = 0;
  uStack_f48 = 0;
  uStack_f50 = 0;
  ppuVar1 = ppuVar5;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    lVar16 = *plStack_f70;
    do {
      ppuVar2 = (undefined **)PTR_s_deviceDidSetUpFeatureCatalog__1125b9ab0;
      ppuVar17 = (undefined **)0x0;
      do {
        if (*plStack_f70 != lVar16) {
          _objc_enumerationMutation(ppuVar5);
        }
        uVar15 = *(ulong *)(lStack_f78 + (long)ppuVar17 * 8);
        uVar6 = uVar15;
        _objc_opt_respondsToSelector(uVar15,ppuVar2);
        if ((uVar6 & 1) != 0) {
          func_0x00010bf70420(uVar15);
        }
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar1 != ppuVar17);
      ppuVar1 = ppuVar5;
      puVar10 = &uStack_f80;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar5);
  ppuVar1 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_eb8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  pppuVar7 = &ppuStack_fc0;
  pcStack_f88 = FUN_106ea1ba0;
  ppuStack_fb0 = ppuVar2;
  ppuStack_fa8 = ppuVar17;
  ppuStack_fa0 = ppuVar5;
  ppuStack_f98 = ppuVar9;
  pppuStack_f90 = &pppuStack_e60;
  _objc_retain(puVar10);
  puStack_fb8 = PTR_PTR_1126f7a70;
  ppuStack_fc0 = ppuVar1;
  _objc_msgSendSuper2(&ppuStack_fc0,PTR_s_init_1125d9248);
  if (pppuVar7 != (undefined ***)0x0) {
    _objc_storeWeak(pppuVar7 + 1,puVar10);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar7[2];
    pppuVar7[2] = (undefined **)puVar3;
    _objc_release(puVar14);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar7[3];
    pppuVar7[3] = (undefined **)puVar3;
    _objc_release(puVar14);
    *(undefined4 *)(pppuVar7 + 4) = 0;
  }
  _objc_release(puVar10);
  return (undefined **)pppuVar7;
}



/* Entry: 106ea0be8; end: 106ea0d3b; -[SCSpectaclesDeviceEventListenerAnnouncer device:onFirmwareUpdate:progress:] */

undefined **
FUN_106ea0be8(undefined8 param_1,undefined **param_2,undefined8 param_3,undefined **param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *unaff_x23;
  ulong uVar15;
  undefined *unaff_x24;
  long lVar16;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar17;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuStack_e90;
  undefined *puStack_e88;
  undefined **ppuStack_e80;
  undefined **ppuStack_e78;
  undefined **ppuStack_e70;
  undefined **ppuStack_e68;
  undefined8 ***pppuStack_e60;
  code *pcStack_e58;
  undefined8 uStack_e50;
  long lStack_e48;
  long *plStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  long lStack_d88;
  undefined **ppuStack_d80;
  undefined **ppuStack_d78;
  undefined **ppuStack_d70;
  undefined **ppuStack_d68;
  undefined *puStack_d60;
  undefined *puStack_d58;
  undefined **ppuStack_d50;
  undefined **ppuStack_d48;
  undefined **ppuStack_d40;
  undefined **ppuStack_d38;
  undefined8 ***pppuStack_d30;
  code *pcStack_d28;
  undefined *puStack_d20;
  long lStack_d18;
  undefined8 *puStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  long lStack_c58;
  undefined **ppuStack_c50;
  undefined **ppuStack_c48;
  undefined **ppuStack_c40;
  undefined **ppuStack_c38;
  undefined *puStack_c30;
  undefined *puStack_c28;
  undefined **ppuStack_c20;
  undefined **ppuStack_c18;
  undefined1 *puStack_c10;
  undefined **ppuStack_c08;
  undefined8 ***pppuStack_c00;
  code *pcStack_bf8;
  undefined *puStack_bf0;
  long lStack_be8;
  ulong *puStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  long lStack_b28;
  undefined **ppuStack_b20;
  undefined **ppuStack_b18;
  undefined **ppuStack_b10;
  undefined **ppuStack_b08;
  undefined *puStack_b00;
  undefined *puStack_af8;
  undefined **ppuStack_af0;
  undefined **ppuStack_ae8;
  undefined1 *puStack_ae0;
  undefined **ppuStack_ad8;
  undefined8 ***pppuStack_ad0;
  code *pcStack_ac8;
  undefined *puStack_ac0;
  long lStack_ab8;
  ulong *puStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined1 auStack_a78 [128];
  long lStack_9f8;
  undefined **ppuStack_9f0;
  undefined **ppuStack_9e8;
  undefined **ppuStack_9e0;
  undefined **ppuStack_9d8;
  undefined *puStack_9d0;
  undefined *puStack_9c8;
  undefined **ppuStack_9c0;
  undefined8 uStack_9b8;
  undefined1 *puStack_9b0;
  undefined **ppuStack_9a8;
  undefined8 ***pppuStack_9a0;
  code *pcStack_998;
  undefined *puStack_990;
  long lStack_988;
  undefined8 *puStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined1 auStack_950 [128];
  long lStack_8d0;
  undefined **ppuStack_8c0;
  undefined **ppuStack_8b8;
  undefined **ppuStack_8b0;
  undefined **ppuStack_8a8;
  undefined *puStack_8a0;
  undefined *puStack_898;
  undefined **ppuStack_890;
  undefined **ppuStack_888;
  undefined1 *puStack_880;
  undefined **ppuStack_878;
  undefined8 ***pppuStack_870;
  code *pcStack_868;
  undefined *puStack_860;
  long lStack_858;
  ulong *puStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined1 auStack_818 [128];
  long lStack_798;
  undefined **ppuStack_790;
  undefined **ppuStack_788;
  undefined **ppuStack_780;
  undefined **ppuStack_778;
  undefined *puStack_770;
  undefined *puStack_768;
  undefined **ppuStack_760;
  undefined **ppuStack_758;
  undefined1 *puStack_750;
  undefined **ppuStack_748;
  undefined8 ***pppuStack_740;
  code *pcStack_738;
  undefined *puStack_730;
  long lStack_728;
  ulong *puStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined1 auStack_6e8 [128];
  long lStack_668;
  undefined **ppuStack_660;
  undefined **ppuStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined **ppuStack_630;
  undefined **ppuStack_628;
  undefined **ppuStack_620;
  undefined **ppuStack_618;
  undefined8 ***pppuStack_610;
  code *pcStack_608;
  undefined *puStack_600;
  long lStack_5f8;
  undefined8 *puStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined1 auStack_5b8 [128];
  long lStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined1 *puStack_4f0;
  undefined **ppuStack_4e8;
  undefined8 ***pppuStack_4e0;
  code *pcStack_4d8;
  undefined *puStack_4d0;
  long lStack_4c8;
  ulong *puStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined **ppuStack_3d0;
  undefined8 uStack_3c8;
  undefined1 *puStack_3c0;
  undefined **ppuStack_3b8;
  undefined1 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  long lStack_398;
  undefined8 *puStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 auStack_360 [128];
  long lStack_2e0;
  undefined1 **ppuStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  long lStack_268;
  ulong *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_228 [128];
  long lStack_1a8;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  long lStack_138;
  ulong *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  ppuVar2 = &puStack_140;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  puStack_140 = (undefined *)0x0;
  uStack_128 = 0;
  puStack_130 = (ulong *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puVar11 = auStack_f8;
  ppuVar17 = param_2;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_130;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_onFirmwareUpdate_progress_1125b9928;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_130 != unaff_x25) {
          _objc_enumerationMutation(param_2);
        }
        unaff_x24 = *(undefined **)(lStack_138 + (long)unaff_x27 * 8);
        puVar1 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar1 & 1) != 0) {
          func_0x00010bf6fe00(param_1,unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar11 = auStack_f8;
      ppuVar17 = param_2;
      ppuVar2 = &puStack_140;
      func_0x00010bf52a60();
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return param_4;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_270;
  pcStack_148 = FUN_106ea0d3c;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_268 = 0;
  puStack_270 = (undefined *)0x0;
  uStack_258 = 0;
  puStack_260 = (ulong *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  puVar12 = auStack_228;
  uVar13 = 0x10;
  ppuVar17 = param_4;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_260;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_deviceDidFetchFirmwareDigest_dig_1125b9a98;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_260 != unaff_x25) {
          _objc_enumerationMutation(param_4);
        }
        unaff_x24 = *(undefined **)(lStack_268 + (long)unaff_x27 * 8);
        puVar1 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar1 & 1) != 0) {
          func_0x00010bf703c0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar12 = auStack_228;
      uVar13 = 0x10;
      ppuVar17 = param_4;
      ppuVar4 = &puStack_270;
      func_0x00010bf52a60();
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(param_4);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_3a0;
  pcStack_278 = FUN_106ea0e90;
  lStack_2e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_280 = &puStack_150;
  _objc_retain(ppuVar4);
  _objc_retain(puVar12);
  _objc_retain(uVar13);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_398 = 0;
  puStack_3a0 = (undefined *)0x0;
  uStack_388 = 0;
  puStack_390 = (undefined8 *)0x0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  puVar11 = auStack_360;
  ppuVar17 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_390;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_didCompletedScheduledUpda_1125b98f8;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_390 != unaff_x26) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x25 = *(undefined ***)(lStack_398 + (long)unaff_x28 * 8);
        ppuVar3 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar3 & 1) != 0) {
          func_0x00010bf6fd40(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar17 != unaff_x28);
      puVar11 = auStack_360;
      ppuVar17 = ppuVar2;
      ppuVar3 = &puStack_3a0;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  _objc_release(uVar13);
  _objc_release(puVar12);
  ppuVar17 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e0) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_4d0;
  pcStack_3a8 = FUN_106ea0ffc;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_400 = unaff_x28;
  ppuStack_3f8 = unaff_x27;
  ppuStack_3f0 = unaff_x26;
  ppuStack_3e8 = unaff_x25;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  ppuStack_3d0 = ppuVar2;
  uStack_3c8 = uVar13;
  puStack_3c0 = puVar12;
  ppuStack_3b8 = ppuVar4;
  pppuStack_3b0 = &ppuStack_280;
  _objc_retain(ppuVar3);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_4c8 = 0;
  puStack_4d0 = (undefined *)0x0;
  uStack_4b8 = 0;
  puStack_4c0 = (ulong *)0x0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  ppuVar4 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_4c0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didReceiveCrashReport__1125b9910;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_4c0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_4c8 + (long)unaff_x27 * 8);
        puVar1 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar1 & 1) != 0) {
          func_0x00010bf6fda0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar4 != unaff_x27);
      ppuVar4 = ppuVar17;
      ppuVar7 = &puStack_4d0;
      func_0x00010bf52a60();
      ppuVar2 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_600;
  pcStack_4d8 = FUN_106ea1150;
  lStack_538 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_530 = unaff_x28;
  ppuStack_528 = unaff_x27;
  ppuStack_520 = unaff_x26;
  ppuStack_518 = unaff_x25;
  puStack_510 = unaff_x24;
  puStack_508 = unaff_x23;
  ppuStack_500 = ppuVar2;
  ppuStack_4f8 = ppuVar17;
  puStack_4f0 = puVar11;
  ppuStack_4e8 = ppuVar3;
  pppuStack_4e0 = &pppuStack_3b0;
  _objc_retain(ppuVar7);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_5f8 = 0;
  puStack_600 = (undefined *)0x0;
  uStack_5e8 = 0;
  puStack_5f0 = (undefined8 *)0x0;
  uStack_5d8 = 0;
  uStack_5e0 = 0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  puVar11 = auStack_5b8;
  ppuVar3 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_5f0;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar2 = (undefined **)PTR_s_deviceDidStartRecording__1125b9ab8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_5f0 != unaff_x24) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x23 = *(undefined **)(lStack_5f8 + (long)unaff_x26 * 8);
        puVar1 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar2);
        if (((ulong)puVar1 & 1) != 0) {
          func_0x00010bf70440(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar3 != unaff_x26);
      puVar11 = auStack_5b8;
      ppuVar3 = ppuVar4;
      ppuVar8 = &puStack_600;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  ppuVar3 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_538) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_730;
  pcStack_608 = FUN_106ea128c;
  lStack_668 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_660 = unaff_x28;
  ppuStack_658 = unaff_x27;
  ppuStack_650 = unaff_x26;
  ppuStack_648 = unaff_x25;
  puStack_640 = unaff_x24;
  puStack_638 = unaff_x23;
  ppuStack_630 = ppuVar2;
  ppuStack_628 = ppuVar17;
  ppuStack_620 = ppuVar4;
  ppuStack_618 = ppuVar7;
  pppuStack_610 = &pppuStack_4e0;
  _objc_retain(ppuVar8);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_728 = 0;
  puStack_730 = (undefined *)0x0;
  uStack_718 = 0;
  puStack_720 = (ulong *)0x0;
  uStack_708 = 0;
  uStack_710 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  puVar12 = auStack_6e8;
  ppuVar17 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_720;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didMarkCorruptContent__1125b9900;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_720 != unaff_x25) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x24 = *(undefined **)(lStack_728 + (long)unaff_x27 * 8);
        puVar1 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar1 & 1) != 0) {
          func_0x00010bf6fd60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar12 = auStack_6e8;
      ppuVar17 = ppuVar3;
      ppuVar9 = &puStack_730;
      func_0x00010bf52a60();
      ppuVar2 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release(puVar11);
  ppuVar17 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_668) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_860;
  pcStack_738 = FUN_106ea13e0;
  lStack_798 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_790 = unaff_x28;
  ppuStack_788 = unaff_x27;
  ppuStack_780 = unaff_x26;
  ppuStack_778 = unaff_x25;
  puStack_770 = unaff_x24;
  puStack_768 = unaff_x23;
  ppuStack_760 = ppuVar2;
  ppuStack_758 = ppuVar3;
  puStack_750 = puVar11;
  ppuStack_748 = ppuVar8;
  pppuStack_740 = &pppuStack_610;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_858 = 0;
  puStack_860 = (undefined *)0x0;
  uStack_848 = 0;
  puStack_850 = (ulong *)0x0;
  uStack_838 = 0;
  uStack_840 = 0;
  uStack_828 = 0;
  uStack_830 = 0;
  puVar11 = auStack_818;
  uVar13 = 0x10;
  ppuVar4 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_850;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_uploadToCloudEvent__1125b9948;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_850 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_858 + (long)unaff_x27 * 8);
        puVar1 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar1 & 1) != 0) {
          func_0x00010bf6fe80(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar4 != unaff_x27);
      puVar11 = auStack_818;
      uVar13 = 0x10;
      ppuVar4 = ppuVar17;
      ppuVar7 = &puStack_860;
      func_0x00010bf52a60();
      ppuVar2 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  ppuVar4 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_798) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_990;
  pcStack_868 = FUN_106ea1524;
  lStack_8d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_8c0 = unaff_x28;
  ppuStack_8b8 = unaff_x27;
  ppuStack_8b0 = unaff_x26;
  ppuStack_8a8 = unaff_x25;
  puStack_8a0 = unaff_x24;
  puStack_898 = unaff_x23;
  ppuStack_890 = ppuVar2;
  ppuStack_888 = ppuVar17;
  puStack_880 = puVar12;
  ppuStack_878 = ppuVar9;
  pppuStack_870 = &pppuStack_740;
  _objc_retain(ppuVar7);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_988 = 0;
  puStack_990 = (undefined *)0x0;
  uStack_978 = 0;
  puStack_980 = (undefined8 *)0x0;
  uStack_968 = 0;
  uStack_970 = 0;
  uStack_958 = 0;
  uStack_960 = 0;
  puVar12 = auStack_950;
  ppuVar2 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_980;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_receivedClientId_requestA_1125b9930;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_980 != unaff_x26) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x25 = *(undefined ***)(lStack_988 + (long)unaff_x28 * 8);
        ppuVar17 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar17 & 1) != 0) {
          func_0x00010bf6fe20(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar2 != unaff_x28);
      puVar12 = auStack_950;
      ppuVar2 = ppuVar4;
      ppuVar3 = &puStack_990;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  _objc_release(puVar11);
  ppuVar2 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8d0) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_ac0;
  pcStack_998 = FUN_106ea1680;
  lStack_9f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9f0 = unaff_x28;
  ppuStack_9e8 = unaff_x27;
  ppuStack_9e0 = unaff_x26;
  ppuStack_9d8 = unaff_x25;
  puStack_9d0 = unaff_x24;
  puStack_9c8 = unaff_x23;
  ppuStack_9c0 = ppuVar4;
  uStack_9b8 = uVar13;
  puStack_9b0 = puVar11;
  ppuStack_9a8 = ppuVar7;
  pppuStack_9a0 = &pppuStack_870;
  _objc_retain(ppuVar3);
  _objc_retain(puVar12);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_ab8 = 0;
  puStack_ac0 = (undefined *)0x0;
  uStack_aa8 = 0;
  puStack_ab0 = (ulong *)0x0;
  uStack_a98 = 0;
  uStack_aa0 = 0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  puVar11 = auStack_a78;
  ppuVar17 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_ab0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedWifiAPList__1125b9940;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_ab0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x24 = *(undefined **)(lStack_ab8 + (long)unaff_x27 * 8);
        puVar1 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar1 & 1) != 0) {
          func_0x00010bf6fe60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar11 = auStack_a78;
      ppuVar17 = ppuVar2;
      ppuVar8 = &puStack_ac0;
      func_0x00010bf52a60();
      ppuVar4 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  _objc_release(puVar12);
  ppuVar17 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9f8) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_bf0;
  pcStack_ac8 = FUN_106ea17d4;
  lStack_b28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b20 = unaff_x28;
  ppuStack_b18 = unaff_x27;
  ppuStack_b10 = unaff_x26;
  ppuStack_b08 = unaff_x25;
  puStack_b00 = unaff_x24;
  puStack_af8 = unaff_x23;
  ppuStack_af0 = ppuVar4;
  ppuStack_ae8 = ppuVar2;
  puStack_ae0 = puVar12;
  ppuStack_ad8 = ppuVar3;
  pppuStack_ad0 = &pppuStack_9a0;
  _objc_retain(ppuVar8);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_be8 = 0;
  puStack_bf0 = (undefined *)0x0;
  uStack_bd8 = 0;
  puStack_be0 = (ulong *)0x0;
  uStack_bc8 = 0;
  uStack_bd0 = 0;
  uStack_bb8 = 0;
  uStack_bc0 = 0;
  ppuVar2 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_be0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedLastCloudUploadTi_1125b9938;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_be0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_be8 + (long)unaff_x27 * 8);
        puVar1 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar1 & 1) != 0) {
          func_0x00010bf6fe40(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar2 != unaff_x27);
      ppuVar2 = ppuVar17;
      ppuVar7 = &puStack_bf0;
      func_0x00010bf52a60();
      ppuVar4 = (undefined **)0x0;
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar2 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b28) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_d20;
  pcStack_bf8 = FUN_106ea1928;
  lStack_c58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c50 = unaff_x28;
  ppuStack_c48 = unaff_x27;
  ppuStack_c40 = unaff_x26;
  ppuStack_c38 = unaff_x25;
  puStack_c30 = unaff_x24;
  puStack_c28 = unaff_x23;
  ppuStack_c20 = ppuVar4;
  ppuStack_c18 = ppuVar17;
  puStack_c10 = puVar11;
  ppuStack_c08 = ppuVar8;
  pppuStack_c00 = &pppuStack_ad0;
  _objc_retain(ppuVar7);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_d18 = 0;
  puStack_d20 = (undefined *)0x0;
  uStack_d08 = 0;
  puStack_d10 = (undefined8 *)0x0;
  uStack_cf8 = 0;
  uStack_d00 = 0;
  uStack_ce8 = 0;
  uStack_cf0 = 0;
  ppuVar3 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_d10;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar4 = (undefined **)PTR_s_deviceDidRequestBLERestart__1125b9aa8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_d10 != unaff_x24) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x23 = *(undefined **)(lStack_d18 + (long)unaff_x26 * 8);
        puVar1 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar4);
        if (((ulong)puVar1 & 1) != 0) {
          func_0x00010bf70400(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar3 != unaff_x26);
      ppuVar3 = ppuVar2;
      ppuVar9 = &puStack_d20;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  ppuVar3 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c58) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_e50;
  pcStack_d28 = FUN_106ea1a64;
  lStack_d88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d80 = unaff_x28;
  ppuStack_d78 = unaff_x27;
  ppuStack_d70 = unaff_x26;
  ppuStack_d68 = unaff_x25;
  puStack_d60 = unaff_x24;
  puStack_d58 = unaff_x23;
  ppuStack_d50 = ppuVar4;
  ppuStack_d48 = ppuVar17;
  ppuStack_d40 = ppuVar2;
  ppuStack_d38 = ppuVar7;
  pppuStack_d30 = &pppuStack_c00;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_e48 = 0;
  uStack_e50 = 0;
  uStack_e38 = 0;
  plStack_e40 = (long *)0x0;
  uStack_e28 = 0;
  uStack_e30 = 0;
  uStack_e18 = 0;
  uStack_e20 = 0;
  ppuVar2 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    lVar16 = *plStack_e40;
    do {
      ppuVar4 = (undefined **)PTR_s_deviceDidSetUpFeatureCatalog__1125b9ab0;
      ppuVar17 = (undefined **)0x0;
      do {
        if (*plStack_e40 != lVar16) {
          _objc_enumerationMutation(ppuVar3);
        }
        uVar15 = *(ulong *)(lStack_e48 + (long)ppuVar17 * 8);
        uVar5 = uVar15;
        _objc_opt_respondsToSelector(uVar15,ppuVar4);
        if ((uVar5 & 1) != 0) {
          func_0x00010bf70420(uVar15);
        }
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar2 != ppuVar17);
      ppuVar2 = ppuVar3;
      puVar10 = &uStack_e50;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  ppuVar2 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d88) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  pppuVar6 = &ppuStack_e90;
  pcStack_e58 = FUN_106ea1ba0;
  ppuStack_e80 = ppuVar4;
  ppuStack_e78 = ppuVar17;
  ppuStack_e70 = ppuVar3;
  ppuStack_e68 = ppuVar9;
  pppuStack_e60 = &pppuStack_d30;
  _objc_retain(puVar10);
  puStack_e88 = PTR_PTR_1126f7a70;
  ppuStack_e90 = ppuVar2;
  _objc_msgSendSuper2(&ppuStack_e90,PTR_s_init_1125d9248);
  if (pppuVar6 != (undefined ***)0x0) {
    _objc_storeWeak(pppuVar6 + 1,puVar10);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar6[2];
    pppuVar6[2] = (undefined **)puVar1;
    _objc_release(puVar14);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar6[3];
    pppuVar6[3] = (undefined **)puVar1;
    _objc_release(puVar14);
    *(undefined4 *)(pppuVar6 + 4) = 0;
  }
  _objc_release(puVar10);
  return (undefined **)pppuVar6;
}



/* Entry: 106ea0d3c; end: 106ea0e8f; -[SCSpectaclesDeviceEventListenerAnnouncer deviceDidFetchFirmwareDigest:digest:] */

undefined **
FUN_106ea0d3c(undefined **param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *unaff_x23;
  ulong uVar15;
  undefined *unaff_x24;
  long lVar16;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar17;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuStack_d50;
  undefined *puStack_d48;
  undefined **ppuStack_d40;
  undefined **ppuStack_d38;
  undefined **ppuStack_d30;
  undefined **ppuStack_d28;
  undefined8 ***pppuStack_d20;
  code *pcStack_d18;
  undefined8 uStack_d10;
  long lStack_d08;
  long *plStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  long lStack_c48;
  undefined **ppuStack_c40;
  undefined **ppuStack_c38;
  undefined **ppuStack_c30;
  undefined **ppuStack_c28;
  undefined *puStack_c20;
  undefined *puStack_c18;
  undefined **ppuStack_c10;
  undefined **ppuStack_c08;
  undefined **ppuStack_c00;
  undefined **ppuStack_bf8;
  undefined8 ***pppuStack_bf0;
  code *pcStack_be8;
  undefined *puStack_be0;
  long lStack_bd8;
  undefined8 *puStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  long lStack_b18;
  undefined **ppuStack_b10;
  undefined **ppuStack_b08;
  undefined **ppuStack_b00;
  undefined **ppuStack_af8;
  undefined *puStack_af0;
  undefined *puStack_ae8;
  undefined **ppuStack_ae0;
  undefined **ppuStack_ad8;
  undefined1 *puStack_ad0;
  undefined **ppuStack_ac8;
  undefined8 ***pppuStack_ac0;
  code *pcStack_ab8;
  undefined *puStack_ab0;
  long lStack_aa8;
  ulong *puStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  long lStack_9e8;
  undefined **ppuStack_9e0;
  undefined **ppuStack_9d8;
  undefined **ppuStack_9d0;
  undefined **ppuStack_9c8;
  undefined *puStack_9c0;
  undefined *puStack_9b8;
  undefined **ppuStack_9b0;
  undefined **ppuStack_9a8;
  undefined1 *puStack_9a0;
  undefined **ppuStack_998;
  undefined8 ***pppuStack_990;
  code *pcStack_988;
  undefined *puStack_980;
  long lStack_978;
  ulong *puStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined1 auStack_938 [128];
  long lStack_8b8;
  undefined **ppuStack_8b0;
  undefined **ppuStack_8a8;
  undefined **ppuStack_8a0;
  undefined **ppuStack_898;
  undefined *puStack_890;
  undefined *puStack_888;
  undefined **ppuStack_880;
  undefined8 uStack_878;
  undefined1 *puStack_870;
  undefined **ppuStack_868;
  undefined8 ***pppuStack_860;
  code *pcStack_858;
  undefined *puStack_850;
  long lStack_848;
  undefined8 *puStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined1 auStack_810 [128];
  long lStack_790;
  undefined **ppuStack_780;
  undefined **ppuStack_778;
  undefined **ppuStack_770;
  undefined **ppuStack_768;
  undefined *puStack_760;
  undefined *puStack_758;
  undefined **ppuStack_750;
  undefined **ppuStack_748;
  undefined1 *puStack_740;
  undefined **ppuStack_738;
  undefined8 ***pppuStack_730;
  code *pcStack_728;
  undefined *puStack_720;
  long lStack_718;
  ulong *puStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined1 auStack_6d8 [128];
  long lStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined **ppuStack_640;
  undefined **ppuStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  undefined **ppuStack_620;
  undefined **ppuStack_618;
  undefined1 *puStack_610;
  undefined **ppuStack_608;
  undefined8 ***pppuStack_600;
  code *pcStack_5f8;
  undefined *puStack_5f0;
  long lStack_5e8;
  ulong *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined1 auStack_5a8 [128];
  long lStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  long lStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 auStack_478 [128];
  long lStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined1 *puStack_3b0;
  undefined **ppuStack_3a8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  long lStack_388;
  ulong *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined **ppuStack_290;
  undefined8 uStack_288;
  undefined1 *puStack_280;
  undefined **ppuStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  ppuVar4 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (ulong *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar11 = auStack_e8;
  uVar13 = 0x10;
  ppuVar1 = param_1;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_120;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_deviceDidFetchFirmwareDigest_dig_1125b9a98;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x24 = *(undefined **)(lStack_128 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf703c0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      puVar11 = auStack_e8;
      uVar13 = 0x10;
      ppuVar1 = param_1;
      ppuVar4 = &puStack_130;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_260;
  pcStack_138 = FUN_106ea0e90;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar11);
  _objc_retain(uVar13);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  puStack_260 = (undefined *)0x0;
  uStack_248 = 0;
  puStack_250 = (undefined8 *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar12 = auStack_220;
  ppuVar1 = param_3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_250;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_didCompletedScheduledUpda_1125b98f8;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_250 != unaff_x26) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x25 = *(undefined ***)(lStack_258 + (long)unaff_x28 * 8);
        ppuVar3 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar3 & 1) != 0) {
          func_0x00010bf6fd40(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar1 != unaff_x28);
      puVar12 = auStack_220;
      ppuVar1 = param_3;
      ppuVar3 = &puStack_260;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_3);
  _objc_release(uVar13);
  _objc_release(puVar11);
  ppuVar1 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar17 = &puStack_390;
  pcStack_268 = FUN_106ea0ffc;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2c0 = unaff_x28;
  ppuStack_2b8 = unaff_x27;
  ppuStack_2b0 = unaff_x26;
  ppuStack_2a8 = unaff_x25;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  ppuStack_290 = param_3;
  uStack_288 = uVar13;
  puStack_280 = puVar11;
  ppuStack_278 = ppuVar4;
  ppuStack_270 = &puStack_140;
  _objc_retain(ppuVar3);
  _objc_retain(puVar12);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_388 = 0;
  puStack_390 = (undefined *)0x0;
  uStack_378 = 0;
  puStack_380 = (ulong *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  ppuVar4 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_380;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didReceiveCrashReport__1125b9910;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_380 != unaff_x25) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x24 = *(undefined **)(lStack_388 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fda0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar4 != unaff_x27);
      ppuVar4 = ppuVar1;
      ppuVar17 = &puStack_390;
      func_0x00010bf52a60();
      param_3 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar12);
  ppuVar4 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_4c0;
  pcStack_398 = FUN_106ea1150;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_3f0 = unaff_x28;
  ppuStack_3e8 = unaff_x27;
  ppuStack_3e0 = unaff_x26;
  ppuStack_3d8 = unaff_x25;
  puStack_3d0 = unaff_x24;
  puStack_3c8 = unaff_x23;
  ppuStack_3c0 = param_3;
  ppuStack_3b8 = ppuVar1;
  puStack_3b0 = puVar12;
  ppuStack_3a8 = ppuVar3;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain(ppuVar17);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_4b8 = 0;
  puStack_4c0 = (undefined *)0x0;
  uStack_4a8 = 0;
  puStack_4b0 = (undefined8 *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  puVar11 = auStack_478;
  ppuVar3 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_4b0;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      param_3 = (undefined **)PTR_s_deviceDidStartRecording__1125b9ab8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_4b0 != unaff_x24) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x23 = *(undefined **)(lStack_4b8 + (long)unaff_x26 * 8);
        puVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,param_3);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf70440(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar3 != unaff_x26);
      puVar11 = auStack_478;
      ppuVar3 = ppuVar4;
      ppuVar7 = &puStack_4c0;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  ppuVar3 = ppuVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_5f0;
  pcStack_4c8 = FUN_106ea128c;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_520 = unaff_x28;
  ppuStack_518 = unaff_x27;
  ppuStack_510 = unaff_x26;
  ppuStack_508 = unaff_x25;
  puStack_500 = unaff_x24;
  puStack_4f8 = unaff_x23;
  ppuStack_4f0 = param_3;
  ppuStack_4e8 = ppuVar1;
  ppuStack_4e0 = ppuVar4;
  ppuStack_4d8 = ppuVar17;
  pppuStack_4d0 = &pppuStack_3a0;
  _objc_retain(ppuVar7);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_5e8 = 0;
  puStack_5f0 = (undefined *)0x0;
  uStack_5d8 = 0;
  puStack_5e0 = (ulong *)0x0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  puVar12 = auStack_5a8;
  ppuVar1 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_5e0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didMarkCorruptContent__1125b9900;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_5e0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x24 = *(undefined **)(lStack_5e8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fd60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      puVar12 = auStack_5a8;
      ppuVar1 = ppuVar3;
      ppuVar8 = &puStack_5f0;
      func_0x00010bf52a60();
      param_3 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release(puVar11);
  ppuVar1 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar17 = &puStack_720;
  pcStack_5f8 = FUN_106ea13e0;
  lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_650 = unaff_x28;
  ppuStack_648 = unaff_x27;
  ppuStack_640 = unaff_x26;
  ppuStack_638 = unaff_x25;
  puStack_630 = unaff_x24;
  puStack_628 = unaff_x23;
  ppuStack_620 = param_3;
  ppuStack_618 = ppuVar3;
  puStack_610 = puVar11;
  ppuStack_608 = ppuVar7;
  pppuStack_600 = &pppuStack_4d0;
  _objc_retain(ppuVar8);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_718 = 0;
  puStack_720 = (undefined *)0x0;
  uStack_708 = 0;
  puStack_710 = (ulong *)0x0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  uStack_6e8 = 0;
  uStack_6f0 = 0;
  puVar11 = auStack_6d8;
  uVar13 = 0x10;
  ppuVar4 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_710;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_uploadToCloudEvent__1125b9948;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_710 != unaff_x25) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x24 = *(undefined **)(lStack_718 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe80(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar4 != unaff_x27);
      puVar11 = auStack_6d8;
      uVar13 = 0x10;
      ppuVar4 = ppuVar1;
      ppuVar17 = &puStack_720;
      func_0x00010bf52a60();
      param_3 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  ppuVar4 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_658) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_850;
  pcStack_728 = FUN_106ea1524;
  lStack_790 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_780 = unaff_x28;
  ppuStack_778 = unaff_x27;
  ppuStack_770 = unaff_x26;
  ppuStack_768 = unaff_x25;
  puStack_760 = unaff_x24;
  puStack_758 = unaff_x23;
  ppuStack_750 = param_3;
  ppuStack_748 = ppuVar1;
  puStack_740 = puVar12;
  ppuStack_738 = ppuVar8;
  pppuStack_730 = &pppuStack_600;
  _objc_retain(ppuVar17);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_848 = 0;
  puStack_850 = (undefined *)0x0;
  uStack_838 = 0;
  puStack_840 = (undefined8 *)0x0;
  uStack_828 = 0;
  uStack_830 = 0;
  uStack_818 = 0;
  uStack_820 = 0;
  puVar12 = auStack_810;
  ppuVar1 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_840;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_receivedClientId_requestA_1125b9930;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_840 != unaff_x26) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x25 = *(undefined ***)(lStack_848 + (long)unaff_x28 * 8);
        ppuVar3 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar3 & 1) != 0) {
          func_0x00010bf6fe20(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar1 != unaff_x28);
      puVar12 = auStack_810;
      ppuVar1 = ppuVar4;
      ppuVar3 = &puStack_850;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  _objc_release(puVar11);
  ppuVar1 = ppuVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_790) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_980;
  pcStack_858 = FUN_106ea1680;
  lStack_8b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_8b0 = unaff_x28;
  ppuStack_8a8 = unaff_x27;
  ppuStack_8a0 = unaff_x26;
  ppuStack_898 = unaff_x25;
  puStack_890 = unaff_x24;
  puStack_888 = unaff_x23;
  ppuStack_880 = ppuVar4;
  uStack_878 = uVar13;
  puStack_870 = puVar11;
  ppuStack_868 = ppuVar17;
  pppuStack_860 = &pppuStack_730;
  _objc_retain(ppuVar3);
  _objc_retain(puVar12);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_978 = 0;
  puStack_980 = (undefined *)0x0;
  uStack_968 = 0;
  puStack_970 = (ulong *)0x0;
  uStack_958 = 0;
  uStack_960 = 0;
  uStack_948 = 0;
  uStack_950 = 0;
  puVar11 = auStack_938;
  ppuVar17 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_970;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedWifiAPList__1125b9940;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_970 != unaff_x25) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x24 = *(undefined **)(lStack_978 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar11 = auStack_938;
      ppuVar17 = ppuVar1;
      ppuVar7 = &puStack_980;
      func_0x00010bf52a60();
      ppuVar4 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar12);
  ppuVar17 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8b8) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_ab0;
  pcStack_988 = FUN_106ea17d4;
  lStack_9e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9e0 = unaff_x28;
  ppuStack_9d8 = unaff_x27;
  ppuStack_9d0 = unaff_x26;
  ppuStack_9c8 = unaff_x25;
  puStack_9c0 = unaff_x24;
  puStack_9b8 = unaff_x23;
  ppuStack_9b0 = ppuVar4;
  ppuStack_9a8 = ppuVar1;
  puStack_9a0 = puVar12;
  ppuStack_998 = ppuVar3;
  pppuStack_990 = &pppuStack_860;
  _objc_retain(ppuVar7);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_aa8 = 0;
  puStack_ab0 = (undefined *)0x0;
  uStack_a98 = 0;
  puStack_aa0 = (ulong *)0x0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  uStack_a78 = 0;
  uStack_a80 = 0;
  ppuVar1 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_aa0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedLastCloudUploadTi_1125b9938;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_aa0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_aa8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe40(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = ppuVar17;
      ppuVar8 = &puStack_ab0;
      func_0x00010bf52a60();
      ppuVar4 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar1 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9e8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_be0;
  pcStack_ab8 = FUN_106ea1928;
  lStack_b18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b10 = unaff_x28;
  ppuStack_b08 = unaff_x27;
  ppuStack_b00 = unaff_x26;
  ppuStack_af8 = unaff_x25;
  puStack_af0 = unaff_x24;
  puStack_ae8 = unaff_x23;
  ppuStack_ae0 = ppuVar4;
  ppuStack_ad8 = ppuVar17;
  puStack_ad0 = puVar11;
  ppuStack_ac8 = ppuVar7;
  pppuStack_ac0 = &pppuStack_990;
  _objc_retain(ppuVar8);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_bd8 = 0;
  puStack_be0 = (undefined *)0x0;
  uStack_bc8 = 0;
  puStack_bd0 = (undefined8 *)0x0;
  uStack_bb8 = 0;
  uStack_bc0 = 0;
  uStack_ba8 = 0;
  uStack_bb0 = 0;
  ppuVar3 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_bd0;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar4 = (undefined **)PTR_s_deviceDidRequestBLERestart__1125b9aa8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_bd0 != unaff_x24) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x23 = *(undefined **)(lStack_bd8 + (long)unaff_x26 * 8);
        puVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar4);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf70400(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar3 != unaff_x26);
      ppuVar3 = ppuVar1;
      ppuVar9 = &puStack_be0;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  ppuVar3 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b18) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_d10;
  pcStack_be8 = FUN_106ea1a64;
  lStack_c48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_c40 = unaff_x28;
  ppuStack_c38 = unaff_x27;
  ppuStack_c30 = unaff_x26;
  ppuStack_c28 = unaff_x25;
  puStack_c20 = unaff_x24;
  puStack_c18 = unaff_x23;
  ppuStack_c10 = ppuVar4;
  ppuStack_c08 = ppuVar17;
  ppuStack_c00 = ppuVar1;
  ppuStack_bf8 = ppuVar8;
  pppuStack_bf0 = &pppuStack_ac0;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_d08 = 0;
  uStack_d10 = 0;
  uStack_cf8 = 0;
  plStack_d00 = (long *)0x0;
  uStack_ce8 = 0;
  uStack_cf0 = 0;
  uStack_cd8 = 0;
  uStack_ce0 = 0;
  ppuVar1 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    lVar16 = *plStack_d00;
    do {
      ppuVar4 = (undefined **)PTR_s_deviceDidSetUpFeatureCatalog__1125b9ab0;
      ppuVar17 = (undefined **)0x0;
      do {
        if (*plStack_d00 != lVar16) {
          _objc_enumerationMutation(ppuVar3);
        }
        uVar15 = *(ulong *)(lStack_d08 + (long)ppuVar17 * 8);
        uVar5 = uVar15;
        _objc_opt_respondsToSelector(uVar15,ppuVar4);
        if ((uVar5 & 1) != 0) {
          func_0x00010bf70420(uVar15);
        }
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar1 != ppuVar17);
      ppuVar1 = ppuVar3;
      puVar10 = &uStack_d10;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  ppuVar1 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c48) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  pppuVar6 = &ppuStack_d50;
  pcStack_d18 = FUN_106ea1ba0;
  ppuStack_d40 = ppuVar4;
  ppuStack_d38 = ppuVar17;
  ppuStack_d30 = ppuVar3;
  ppuStack_d28 = ppuVar9;
  pppuStack_d20 = &pppuStack_bf0;
  _objc_retain(puVar10);
  puStack_d48 = PTR_PTR_1126f7a70;
  ppuStack_d50 = ppuVar1;
  _objc_msgSendSuper2(&ppuStack_d50,PTR_s_init_1125d9248);
  if (pppuVar6 != (undefined ***)0x0) {
    _objc_storeWeak(pppuVar6 + 1,puVar10);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar6[2];
    pppuVar6[2] = (undefined **)puVar2;
    _objc_release(puVar14);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar6[3];
    pppuVar6[3] = (undefined **)puVar2;
    _objc_release(puVar14);
    *(undefined4 *)(pppuVar6 + 4) = 0;
  }
  _objc_release(puVar10);
  return (undefined **)pppuVar6;
}



/* Entry: 106ea0e90; end: 106ea0ffb; -[SCSpectaclesDeviceEventListenerAnnouncer device:didCompletedScheduledUpdateWithUserInfo:error:] */

undefined **
FUN_106ea0e90(undefined **param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *unaff_x23;
  ulong uVar15;
  undefined *unaff_x24;
  long lVar16;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar17;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuStack_c20;
  undefined *puStack_c18;
  undefined **ppuStack_c10;
  undefined **ppuStack_c08;
  undefined **ppuStack_c00;
  undefined **ppuStack_bf8;
  undefined8 ***pppuStack_bf0;
  code *pcStack_be8;
  undefined8 uStack_be0;
  long lStack_bd8;
  long *plStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  long lStack_b18;
  undefined **ppuStack_b10;
  undefined **ppuStack_b08;
  undefined **ppuStack_b00;
  undefined **ppuStack_af8;
  undefined *puStack_af0;
  undefined *puStack_ae8;
  undefined **ppuStack_ae0;
  undefined **ppuStack_ad8;
  undefined **ppuStack_ad0;
  undefined **ppuStack_ac8;
  undefined8 ***pppuStack_ac0;
  code *pcStack_ab8;
  undefined *puStack_ab0;
  long lStack_aa8;
  undefined8 *puStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  long lStack_9e8;
  undefined **ppuStack_9e0;
  undefined **ppuStack_9d8;
  undefined **ppuStack_9d0;
  undefined **ppuStack_9c8;
  undefined *puStack_9c0;
  undefined *puStack_9b8;
  undefined **ppuStack_9b0;
  undefined **ppuStack_9a8;
  undefined1 *puStack_9a0;
  undefined **ppuStack_998;
  undefined8 ***pppuStack_990;
  code *pcStack_988;
  undefined *puStack_980;
  long lStack_978;
  ulong *puStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  long lStack_8b8;
  undefined **ppuStack_8b0;
  undefined **ppuStack_8a8;
  undefined **ppuStack_8a0;
  undefined **ppuStack_898;
  undefined *puStack_890;
  undefined *puStack_888;
  undefined **ppuStack_880;
  undefined **ppuStack_878;
  undefined1 *puStack_870;
  undefined **ppuStack_868;
  undefined8 ***pppuStack_860;
  code *pcStack_858;
  undefined *puStack_850;
  long lStack_848;
  ulong *puStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined1 auStack_808 [128];
  long lStack_788;
  undefined **ppuStack_780;
  undefined **ppuStack_778;
  undefined **ppuStack_770;
  undefined **ppuStack_768;
  undefined *puStack_760;
  undefined *puStack_758;
  undefined **ppuStack_750;
  undefined8 uStack_748;
  undefined1 *puStack_740;
  undefined **ppuStack_738;
  undefined8 ***pppuStack_730;
  code *pcStack_728;
  undefined *puStack_720;
  long lStack_718;
  undefined8 *puStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined1 auStack_6e0 [128];
  long lStack_660;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined **ppuStack_640;
  undefined **ppuStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  undefined **ppuStack_620;
  undefined **ppuStack_618;
  undefined1 *puStack_610;
  undefined **ppuStack_608;
  undefined8 ***pppuStack_600;
  code *pcStack_5f8;
  undefined *puStack_5f0;
  long lStack_5e8;
  ulong *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined1 auStack_5a8 [128];
  long lStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined1 *puStack_4e0;
  undefined **ppuStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  long lStack_4b8;
  ulong *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 auStack_478 [128];
  long lStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined **ppuStack_3b0;
  undefined **ppuStack_3a8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_348 [128];
  long lStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined **ppuStack_290;
  undefined **ppuStack_288;
  undefined1 *puStack_280;
  undefined **ppuStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  ulong *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  ppuVar2 = &puStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar11 = auStack_f0;
  ppuVar1 = param_1;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_120;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_didCompletedScheduledUpda_1125b98f8;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x26) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x25 = *(undefined ***)(lStack_128 + (long)unaff_x28 * 8);
        ppuVar2 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar2 & 1) != 0) {
          func_0x00010bf6fd40(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar1 != unaff_x28);
      puVar11 = auStack_f0;
      ppuVar1 = param_1;
      ppuVar2 = &puStack_130;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  ppuVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_260;
  pcStack_138 = FUN_106ea0ffc;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_190 = unaff_x28;
  ppuStack_188 = unaff_x27;
  ppuStack_180 = unaff_x26;
  ppuStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  ppuStack_160 = param_1;
  uStack_158 = param_5;
  uStack_150 = param_4;
  ppuStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  puStack_260 = (undefined *)0x0;
  uStack_248 = 0;
  puStack_250 = (ulong *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  ppuVar17 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_250;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didReceiveCrashReport__1125b9910;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_250 != unaff_x25) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x24 = *(undefined **)(lStack_258 + (long)unaff_x27 * 8);
        puVar3 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf6fda0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      ppuVar17 = ppuVar1;
      ppuVar4 = &puStack_260;
      func_0x00010bf52a60();
      param_1 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar11);
  ppuVar17 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_390;
  pcStack_268 = FUN_106ea1150;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2c0 = unaff_x28;
  ppuStack_2b8 = unaff_x27;
  ppuStack_2b0 = unaff_x26;
  ppuStack_2a8 = unaff_x25;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  ppuStack_290 = param_1;
  ppuStack_288 = ppuVar1;
  puStack_280 = puVar11;
  ppuStack_278 = ppuVar2;
  ppuStack_270 = &puStack_140;
  _objc_retain(ppuVar4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_388 = 0;
  puStack_390 = (undefined *)0x0;
  uStack_378 = 0;
  puStack_380 = (undefined8 *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  puVar11 = auStack_348;
  ppuVar2 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_380;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      param_1 = (undefined **)PTR_s_deviceDidStartRecording__1125b9ab8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_380 != unaff_x24) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x23 = *(undefined **)(lStack_388 + (long)unaff_x26 * 8);
        puVar3 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,param_1);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf70440(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar2 != unaff_x26);
      puVar11 = auStack_348;
      ppuVar2 = ppuVar17;
      ppuVar7 = &puStack_390;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  ppuVar2 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_4c0;
  pcStack_398 = FUN_106ea128c;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_3f0 = unaff_x28;
  ppuStack_3e8 = unaff_x27;
  ppuStack_3e0 = unaff_x26;
  ppuStack_3d8 = unaff_x25;
  puStack_3d0 = unaff_x24;
  puStack_3c8 = unaff_x23;
  ppuStack_3c0 = param_1;
  ppuStack_3b8 = ppuVar1;
  ppuStack_3b0 = ppuVar17;
  ppuStack_3a8 = ppuVar4;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain(ppuVar7);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_4b8 = 0;
  puStack_4c0 = (undefined *)0x0;
  uStack_4a8 = 0;
  puStack_4b0 = (ulong *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  puVar12 = auStack_478;
  ppuVar1 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_4b0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didMarkCorruptContent__1125b9900;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_4b0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x24 = *(undefined **)(lStack_4b8 + (long)unaff_x27 * 8);
        puVar3 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf6fd60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      puVar12 = auStack_478;
      ppuVar1 = ppuVar2;
      ppuVar8 = &puStack_4c0;
      func_0x00010bf52a60();
      param_1 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  _objc_release(puVar11);
  ppuVar1 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar17 = &puStack_5f0;
  pcStack_4c8 = FUN_106ea13e0;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_520 = unaff_x28;
  ppuStack_518 = unaff_x27;
  ppuStack_510 = unaff_x26;
  ppuStack_508 = unaff_x25;
  puStack_500 = unaff_x24;
  puStack_4f8 = unaff_x23;
  ppuStack_4f0 = param_1;
  ppuStack_4e8 = ppuVar2;
  puStack_4e0 = puVar11;
  ppuStack_4d8 = ppuVar7;
  pppuStack_4d0 = &pppuStack_3a0;
  _objc_retain(ppuVar8);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_5e8 = 0;
  puStack_5f0 = (undefined *)0x0;
  uStack_5d8 = 0;
  puStack_5e0 = (ulong *)0x0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  puVar11 = auStack_5a8;
  uVar13 = 0x10;
  ppuVar2 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_5e0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_uploadToCloudEvent__1125b9948;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_5e0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x24 = *(undefined **)(lStack_5e8 + (long)unaff_x27 * 8);
        puVar3 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf6fe80(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar2 != unaff_x27);
      puVar11 = auStack_5a8;
      uVar13 = 0x10;
      ppuVar2 = ppuVar1;
      ppuVar17 = &puStack_5f0;
      func_0x00010bf52a60();
      param_1 = (undefined **)0x0;
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  ppuVar2 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_720;
  pcStack_5f8 = FUN_106ea1524;
  lStack_660 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_650 = unaff_x28;
  ppuStack_648 = unaff_x27;
  ppuStack_640 = unaff_x26;
  ppuStack_638 = unaff_x25;
  puStack_630 = unaff_x24;
  puStack_628 = unaff_x23;
  ppuStack_620 = param_1;
  ppuStack_618 = ppuVar1;
  puStack_610 = puVar12;
  ppuStack_608 = ppuVar8;
  pppuStack_600 = &pppuStack_4d0;
  _objc_retain(ppuVar17);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_718 = 0;
  puStack_720 = (undefined *)0x0;
  uStack_708 = 0;
  puStack_710 = (undefined8 *)0x0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  uStack_6e8 = 0;
  uStack_6f0 = 0;
  puVar12 = auStack_6e0;
  ppuVar1 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_710;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_receivedClientId_requestA_1125b9930;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_710 != unaff_x26) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x25 = *(undefined ***)(lStack_718 + (long)unaff_x28 * 8);
        ppuVar4 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar4 & 1) != 0) {
          func_0x00010bf6fe20(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar1 != unaff_x28);
      puVar12 = auStack_6e0;
      ppuVar1 = ppuVar2;
      ppuVar4 = &puStack_720;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  _objc_release(puVar11);
  ppuVar1 = ppuVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_660) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_850;
  pcStack_728 = FUN_106ea1680;
  lStack_788 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_780 = unaff_x28;
  ppuStack_778 = unaff_x27;
  ppuStack_770 = unaff_x26;
  ppuStack_768 = unaff_x25;
  puStack_760 = unaff_x24;
  puStack_758 = unaff_x23;
  ppuStack_750 = ppuVar2;
  uStack_748 = uVar13;
  puStack_740 = puVar11;
  ppuStack_738 = ppuVar17;
  pppuStack_730 = &pppuStack_600;
  _objc_retain(ppuVar4);
  _objc_retain(puVar12);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_848 = 0;
  puStack_850 = (undefined *)0x0;
  uStack_838 = 0;
  puStack_840 = (ulong *)0x0;
  uStack_828 = 0;
  uStack_830 = 0;
  uStack_818 = 0;
  uStack_820 = 0;
  puVar11 = auStack_808;
  ppuVar17 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_840;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedWifiAPList__1125b9940;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_840 != unaff_x25) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x24 = *(undefined **)(lStack_848 + (long)unaff_x27 * 8);
        puVar3 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf6fe60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar11 = auStack_808;
      ppuVar17 = ppuVar1;
      ppuVar7 = &puStack_850;
      func_0x00010bf52a60();
      ppuVar2 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar12);
  ppuVar17 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_788) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_980;
  pcStack_858 = FUN_106ea17d4;
  lStack_8b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_8b0 = unaff_x28;
  ppuStack_8a8 = unaff_x27;
  ppuStack_8a0 = unaff_x26;
  ppuStack_898 = unaff_x25;
  puStack_890 = unaff_x24;
  puStack_888 = unaff_x23;
  ppuStack_880 = ppuVar2;
  ppuStack_878 = ppuVar1;
  puStack_870 = puVar12;
  ppuStack_868 = ppuVar4;
  pppuStack_860 = &pppuStack_730;
  _objc_retain(ppuVar7);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_978 = 0;
  puStack_980 = (undefined *)0x0;
  uStack_968 = 0;
  puStack_970 = (ulong *)0x0;
  uStack_958 = 0;
  uStack_960 = 0;
  uStack_948 = 0;
  uStack_950 = 0;
  ppuVar1 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_970;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedLastCloudUploadTi_1125b9938;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_970 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_978 + (long)unaff_x27 * 8);
        puVar3 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf6fe40(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = ppuVar17;
      ppuVar8 = &puStack_980;
      func_0x00010bf52a60();
      ppuVar2 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar1 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8b8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_ab0;
  pcStack_988 = FUN_106ea1928;
  lStack_9e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9e0 = unaff_x28;
  ppuStack_9d8 = unaff_x27;
  ppuStack_9d0 = unaff_x26;
  ppuStack_9c8 = unaff_x25;
  puStack_9c0 = unaff_x24;
  puStack_9b8 = unaff_x23;
  ppuStack_9b0 = ppuVar2;
  ppuStack_9a8 = ppuVar17;
  puStack_9a0 = puVar11;
  ppuStack_998 = ppuVar7;
  pppuStack_990 = &pppuStack_860;
  _objc_retain(ppuVar8);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_aa8 = 0;
  puStack_ab0 = (undefined *)0x0;
  uStack_a98 = 0;
  puStack_aa0 = (undefined8 *)0x0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  uStack_a78 = 0;
  uStack_a80 = 0;
  ppuVar4 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_aa0;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar2 = (undefined **)PTR_s_deviceDidRequestBLERestart__1125b9aa8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_aa0 != unaff_x24) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x23 = *(undefined **)(lStack_aa8 + (long)unaff_x26 * 8);
        puVar3 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar2);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf70400(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar4 != unaff_x26);
      ppuVar4 = ppuVar1;
      ppuVar9 = &puStack_ab0;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  ppuVar4 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9e8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_be0;
  pcStack_ab8 = FUN_106ea1a64;
  lStack_b18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_b10 = unaff_x28;
  ppuStack_b08 = unaff_x27;
  ppuStack_b00 = unaff_x26;
  ppuStack_af8 = unaff_x25;
  puStack_af0 = unaff_x24;
  puStack_ae8 = unaff_x23;
  ppuStack_ae0 = ppuVar2;
  ppuStack_ad8 = ppuVar17;
  ppuStack_ad0 = ppuVar1;
  ppuStack_ac8 = ppuVar8;
  pppuStack_ac0 = &pppuStack_990;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_bd8 = 0;
  uStack_be0 = 0;
  uStack_bc8 = 0;
  plStack_bd0 = (long *)0x0;
  uStack_bb8 = 0;
  uStack_bc0 = 0;
  uStack_ba8 = 0;
  uStack_bb0 = 0;
  ppuVar1 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    lVar16 = *plStack_bd0;
    do {
      ppuVar2 = (undefined **)PTR_s_deviceDidSetUpFeatureCatalog__1125b9ab0;
      ppuVar17 = (undefined **)0x0;
      do {
        if (*plStack_bd0 != lVar16) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar15 = *(ulong *)(lStack_bd8 + (long)ppuVar17 * 8);
        uVar5 = uVar15;
        _objc_opt_respondsToSelector(uVar15,ppuVar2);
        if ((uVar5 & 1) != 0) {
          func_0x00010bf70420(uVar15);
        }
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar1 != ppuVar17);
      ppuVar1 = ppuVar4;
      puVar10 = &uStack_be0;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  ppuVar1 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b18) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  pppuVar6 = &ppuStack_c20;
  pcStack_be8 = FUN_106ea1ba0;
  ppuStack_c10 = ppuVar2;
  ppuStack_c08 = ppuVar17;
  ppuStack_c00 = ppuVar4;
  ppuStack_bf8 = ppuVar9;
  pppuStack_bf0 = &pppuStack_ac0;
  _objc_retain(puVar10);
  puStack_c18 = PTR_PTR_1126f7a70;
  ppuStack_c20 = ppuVar1;
  _objc_msgSendSuper2(&ppuStack_c20,PTR_s_init_1125d9248);
  if (pppuVar6 != (undefined ***)0x0) {
    _objc_storeWeak(pppuVar6 + 1,puVar10);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar6[2];
    pppuVar6[2] = (undefined **)puVar3;
    _objc_release(puVar14);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar6[3];
    pppuVar6[3] = (undefined **)puVar3;
    _objc_release(puVar14);
    *(undefined4 *)(pppuVar6 + 4) = 0;
  }
  _objc_release(puVar10);
  return (undefined **)pppuVar6;
}



/* Entry: 106ea0ffc; end: 106ea114f; -[SCSpectaclesDeviceEventListenerAnnouncer device:didReceiveCrashReport:] */

undefined **
FUN_106ea0ffc(undefined **param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *unaff_x23;
  ulong uVar15;
  undefined *unaff_x24;
  long lVar16;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar17;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuStack_af0;
  undefined *puStack_ae8;
  undefined **ppuStack_ae0;
  undefined **ppuStack_ad8;
  undefined **ppuStack_ad0;
  undefined **ppuStack_ac8;
  undefined8 ***pppuStack_ac0;
  code *pcStack_ab8;
  undefined8 uStack_ab0;
  long lStack_aa8;
  long *plStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  long lStack_9e8;
  undefined **ppuStack_9e0;
  undefined **ppuStack_9d8;
  undefined **ppuStack_9d0;
  undefined **ppuStack_9c8;
  undefined *puStack_9c0;
  undefined *puStack_9b8;
  undefined **ppuStack_9b0;
  undefined **ppuStack_9a8;
  undefined **ppuStack_9a0;
  undefined **ppuStack_998;
  undefined8 ***pppuStack_990;
  code *pcStack_988;
  undefined *puStack_980;
  long lStack_978;
  undefined8 *puStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  long lStack_8b8;
  undefined **ppuStack_8b0;
  undefined **ppuStack_8a8;
  undefined **ppuStack_8a0;
  undefined **ppuStack_898;
  undefined *puStack_890;
  undefined *puStack_888;
  undefined **ppuStack_880;
  undefined **ppuStack_878;
  undefined1 *puStack_870;
  undefined **ppuStack_868;
  undefined8 ***pppuStack_860;
  code *pcStack_858;
  undefined *puStack_850;
  long lStack_848;
  ulong *puStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  long lStack_788;
  undefined **ppuStack_780;
  undefined **ppuStack_778;
  undefined **ppuStack_770;
  undefined **ppuStack_768;
  undefined *puStack_760;
  undefined *puStack_758;
  undefined **ppuStack_750;
  undefined **ppuStack_748;
  undefined1 *puStack_740;
  undefined **ppuStack_738;
  undefined8 ***pppuStack_730;
  code *pcStack_728;
  undefined *puStack_720;
  long lStack_718;
  ulong *puStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined1 auStack_6d8 [128];
  long lStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined **ppuStack_640;
  undefined **ppuStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  undefined **ppuStack_620;
  undefined8 uStack_618;
  undefined1 *puStack_610;
  undefined **ppuStack_608;
  undefined8 ***pppuStack_600;
  code *pcStack_5f8;
  undefined *puStack_5f0;
  long lStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined1 auStack_5b0 [128];
  long lStack_530;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  long lStack_4b8;
  ulong *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 auStack_478 [128];
  long lStack_3f8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  long lStack_388;
  ulong *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2c8;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar3 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (ulong *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar1 = param_1;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_120;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didReceiveCrashReport__1125b9910;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x24 = *(undefined **)(lStack_128 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fda0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = param_1;
      ppuVar3 = &puStack_130;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_260;
  pcStack_138 = FUN_106ea1150;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  puStack_260 = (undefined *)0x0;
  uStack_248 = 0;
  puStack_250 = (undefined8 *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar11 = auStack_218;
  ppuVar1 = param_3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_250;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      puVar2 = PTR_s_deviceDidStartRecording__1125b9ab8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_250 != unaff_x24) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x23 = *(undefined **)(lStack_258 + (long)unaff_x26 * 8);
        puVar14 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,puVar2);
        if (((ulong)puVar14 & 1) != 0) {
          func_0x00010bf70440(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar1 != unaff_x26);
      puVar11 = auStack_218;
      ppuVar1 = param_3;
      ppuVar4 = &puStack_260;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar1 = &puStack_390;
  pcStack_268 = FUN_106ea128c;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_270 = &puStack_140;
  _objc_retain(ppuVar4);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_388 = 0;
  puStack_390 = (undefined *)0x0;
  uStack_378 = 0;
  puStack_380 = (ulong *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  ppuVar17 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_380;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didMarkCorruptContent__1125b9900;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_380 != unaff_x25) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x24 = *(undefined **)(lStack_388 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fd60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      ppuVar17 = ppuVar3;
      ppuVar1 = &puStack_390;
      func_0x00010bf52a60();
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar17 = &puStack_4c0;
  pcStack_398 = FUN_106ea13e0;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain(ppuVar1);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_4b8 = 0;
  puStack_4c0 = (undefined *)0x0;
  uStack_4a8 = 0;
  puStack_4b0 = (ulong *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  puVar11 = auStack_478;
  uVar13 = 0x10;
  ppuVar3 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_4b0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_uploadToCloudEvent__1125b9948;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_4b0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x24 = *(undefined **)(lStack_4b8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe80(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar3 != unaff_x27);
      puVar11 = auStack_478;
      uVar13 = 0x10;
      ppuVar3 = ppuVar4;
      ppuVar17 = &puStack_4c0;
      func_0x00010bf52a60();
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_5f0;
  pcStack_4c8 = FUN_106ea1524;
  lStack_530 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_4d0 = &pppuStack_3a0;
  _objc_retain(ppuVar17);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_5e8 = 0;
  puStack_5f0 = (undefined *)0x0;
  uStack_5d8 = 0;
  puStack_5e0 = (undefined8 *)0x0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  puVar12 = auStack_5b0;
  ppuVar3 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_5e0;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_receivedClientId_requestA_1125b9930;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_5e0 != unaff_x26) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x25 = *(undefined ***)(lStack_5e8 + (long)unaff_x28 * 8);
        ppuVar4 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar4 & 1) != 0) {
          func_0x00010bf6fe20(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar3 != unaff_x28);
      puVar12 = auStack_5b0;
      ppuVar3 = ppuVar1;
      ppuVar4 = &puStack_5f0;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar11);
  ppuVar3 = ppuVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_530) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_720;
  pcStack_5f8 = FUN_106ea1680;
  lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_650 = unaff_x28;
  ppuStack_648 = unaff_x27;
  ppuStack_640 = unaff_x26;
  ppuStack_638 = unaff_x25;
  puStack_630 = unaff_x24;
  puStack_628 = unaff_x23;
  ppuStack_620 = ppuVar1;
  uStack_618 = uVar13;
  puStack_610 = puVar11;
  ppuStack_608 = ppuVar17;
  pppuStack_600 = &pppuStack_4d0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar12);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_718 = 0;
  puStack_720 = (undefined *)0x0;
  uStack_708 = 0;
  puStack_710 = (ulong *)0x0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  uStack_6e8 = 0;
  uStack_6f0 = 0;
  puVar11 = auStack_6d8;
  ppuVar17 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_710;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedWifiAPList__1125b9940;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_710 != unaff_x25) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x24 = *(undefined **)(lStack_718 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar11 = auStack_6d8;
      ppuVar17 = ppuVar3;
      ppuVar7 = &puStack_720;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release(puVar12);
  ppuVar17 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_658) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_850;
  pcStack_728 = FUN_106ea17d4;
  lStack_788 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_780 = unaff_x28;
  ppuStack_778 = unaff_x27;
  ppuStack_770 = unaff_x26;
  ppuStack_768 = unaff_x25;
  puStack_760 = unaff_x24;
  puStack_758 = unaff_x23;
  ppuStack_750 = ppuVar1;
  ppuStack_748 = ppuVar3;
  puStack_740 = puVar12;
  ppuStack_738 = ppuVar4;
  pppuStack_730 = &pppuStack_600;
  _objc_retain(ppuVar7);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_848 = 0;
  puStack_850 = (undefined *)0x0;
  uStack_838 = 0;
  puStack_840 = (ulong *)0x0;
  uStack_828 = 0;
  uStack_830 = 0;
  uStack_818 = 0;
  uStack_820 = 0;
  ppuVar3 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_840;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedLastCloudUploadTi_1125b9938;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_840 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_848 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe40(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar3 != unaff_x27);
      ppuVar3 = ppuVar17;
      ppuVar8 = &puStack_850;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar3 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_788) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_980;
  pcStack_858 = FUN_106ea1928;
  lStack_8b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_8b0 = unaff_x28;
  ppuStack_8a8 = unaff_x27;
  ppuStack_8a0 = unaff_x26;
  ppuStack_898 = unaff_x25;
  puStack_890 = unaff_x24;
  puStack_888 = unaff_x23;
  ppuStack_880 = ppuVar1;
  ppuStack_878 = ppuVar17;
  puStack_870 = puVar11;
  ppuStack_868 = ppuVar7;
  pppuStack_860 = &pppuStack_730;
  _objc_retain(ppuVar8);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_978 = 0;
  puStack_980 = (undefined *)0x0;
  uStack_968 = 0;
  puStack_970 = (undefined8 *)0x0;
  uStack_958 = 0;
  uStack_960 = 0;
  uStack_948 = 0;
  uStack_950 = 0;
  ppuVar4 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_970;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar1 = (undefined **)PTR_s_deviceDidRequestBLERestart__1125b9aa8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_970 != unaff_x24) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x23 = *(undefined **)(lStack_978 + (long)unaff_x26 * 8);
        puVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar1);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf70400(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar4 != unaff_x26);
      ppuVar4 = ppuVar3;
      ppuVar9 = &puStack_980;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  ppuVar4 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8b8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_ab0;
  pcStack_988 = FUN_106ea1a64;
  lStack_9e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_9e0 = unaff_x28;
  ppuStack_9d8 = unaff_x27;
  ppuStack_9d0 = unaff_x26;
  ppuStack_9c8 = unaff_x25;
  puStack_9c0 = unaff_x24;
  puStack_9b8 = unaff_x23;
  ppuStack_9b0 = ppuVar1;
  ppuStack_9a8 = ppuVar17;
  ppuStack_9a0 = ppuVar3;
  ppuStack_998 = ppuVar8;
  pppuStack_990 = &pppuStack_860;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_aa8 = 0;
  uStack_ab0 = 0;
  uStack_a98 = 0;
  plStack_aa0 = (long *)0x0;
  uStack_a88 = 0;
  uStack_a90 = 0;
  uStack_a78 = 0;
  uStack_a80 = 0;
  ppuVar3 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    lVar16 = *plStack_aa0;
    do {
      ppuVar1 = (undefined **)PTR_s_deviceDidSetUpFeatureCatalog__1125b9ab0;
      ppuVar17 = (undefined **)0x0;
      do {
        if (*plStack_aa0 != lVar16) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar15 = *(ulong *)(lStack_aa8 + (long)ppuVar17 * 8);
        uVar5 = uVar15;
        _objc_opt_respondsToSelector(uVar15,ppuVar1);
        if ((uVar5 & 1) != 0) {
          func_0x00010bf70420(uVar15);
        }
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar3 != ppuVar17);
      ppuVar3 = ppuVar4;
      puVar10 = &uStack_ab0;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  ppuVar3 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_9e8) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  pppuVar6 = &ppuStack_af0;
  pcStack_ab8 = FUN_106ea1ba0;
  ppuStack_ae0 = ppuVar1;
  ppuStack_ad8 = ppuVar17;
  ppuStack_ad0 = ppuVar4;
  ppuStack_ac8 = ppuVar9;
  pppuStack_ac0 = &pppuStack_990;
  _objc_retain(puVar10);
  puStack_ae8 = PTR_PTR_1126f7a70;
  ppuStack_af0 = ppuVar3;
  _objc_msgSendSuper2(&ppuStack_af0,PTR_s_init_1125d9248);
  if (pppuVar6 != (undefined ***)0x0) {
    _objc_storeWeak(pppuVar6 + 1,puVar10);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar6[2];
    pppuVar6[2] = (undefined **)puVar2;
    _objc_release(puVar14);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar6[3];
    pppuVar6[3] = (undefined **)puVar2;
    _objc_release(puVar14);
    *(undefined4 *)(pppuVar6 + 4) = 0;
  }
  _objc_release(puVar10);
  return (undefined **)pppuVar6;
}



/* Entry: 106ea1150; end: 106ea128b; -[SCSpectaclesDeviceEventListenerAnnouncer deviceDidStartRecording:] */

undefined ** FUN_106ea1150(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *unaff_x23;
  ulong uVar15;
  undefined *unaff_x24;
  long lVar16;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar17;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuStack_9c0;
  undefined *puStack_9b8;
  undefined **ppuStack_9b0;
  undefined **ppuStack_9a8;
  undefined **ppuStack_9a0;
  undefined **ppuStack_998;
  undefined8 ***pppuStack_990;
  code *pcStack_988;
  undefined8 uStack_980;
  long lStack_978;
  long *plStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  long lStack_8b8;
  undefined **ppuStack_8b0;
  undefined **ppuStack_8a8;
  undefined **ppuStack_8a0;
  undefined **ppuStack_898;
  undefined *puStack_890;
  undefined *puStack_888;
  undefined **ppuStack_880;
  undefined **ppuStack_878;
  undefined **ppuStack_870;
  undefined **ppuStack_868;
  undefined8 ***pppuStack_860;
  code *pcStack_858;
  undefined *puStack_850;
  long lStack_848;
  undefined8 *puStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  long lStack_788;
  undefined **ppuStack_780;
  undefined **ppuStack_778;
  undefined **ppuStack_770;
  undefined **ppuStack_768;
  undefined *puStack_760;
  undefined *puStack_758;
  undefined **ppuStack_750;
  undefined **ppuStack_748;
  undefined1 *puStack_740;
  undefined **ppuStack_738;
  undefined8 ***pppuStack_730;
  code *pcStack_728;
  undefined *puStack_720;
  long lStack_718;
  ulong *puStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  long lStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined **ppuStack_640;
  undefined **ppuStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  undefined **ppuStack_620;
  undefined **ppuStack_618;
  undefined1 *puStack_610;
  undefined **ppuStack_608;
  undefined8 ***pppuStack_600;
  code *pcStack_5f8;
  undefined *puStack_5f0;
  long lStack_5e8;
  ulong *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined1 auStack_5a8 [128];
  long lStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined **ppuStack_4f0;
  undefined8 uStack_4e8;
  undefined1 *puStack_4e0;
  undefined **ppuStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  long lStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 auStack_480 [128];
  long lStack_400;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  long lStack_388;
  ulong *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_348 [128];
  long lStack_2c8;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  ulong *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  ppuVar4 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar11 = auStack_e8;
  ppuVar1 = param_1;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_120;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      puVar3 = PTR_s_deviceDidStartRecording__1125b9ab8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_120 != unaff_x24) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x23 = *(undefined **)(lStack_128 + (long)unaff_x26 * 8);
        puVar14 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,puVar3);
        if (((ulong)puVar14 & 1) != 0) {
          func_0x00010bf70440(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar1 != unaff_x26);
      puVar11 = auStack_e8;
      ppuVar1 = param_1;
      ppuVar4 = &puStack_130;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  ppuVar1 = &puStack_260;
  pcStack_138 = FUN_106ea128c;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  puStack_260 = (undefined *)0x0;
  uStack_248 = 0;
  puStack_250 = (ulong *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  ppuVar2 = param_3;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_250;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didMarkCorruptContent__1125b9900;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_250 != unaff_x25) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x24 = *(undefined **)(lStack_258 + (long)unaff_x27 * 8);
        puVar3 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf6fd60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar2 != unaff_x27);
      ppuVar2 = param_3;
      ppuVar1 = &puStack_260;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(param_3);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar17 = &puStack_390;
  pcStack_268 = FUN_106ea13e0;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_270 = &puStack_140;
  _objc_retain(ppuVar1);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_388 = 0;
  puStack_390 = (undefined *)0x0;
  uStack_378 = 0;
  puStack_380 = (ulong *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  puVar11 = auStack_348;
  uVar13 = 0x10;
  ppuVar2 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_380;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_uploadToCloudEvent__1125b9948;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_380 != unaff_x25) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x24 = *(undefined **)(lStack_388 + (long)unaff_x27 * 8);
        puVar3 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf6fe80(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar2 != unaff_x27);
      puVar11 = auStack_348;
      uVar13 = 0x10;
      ppuVar2 = ppuVar4;
      ppuVar17 = &puStack_390;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_4c0;
  pcStack_398 = FUN_106ea1524;
  lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain(ppuVar17);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_4b8 = 0;
  puStack_4c0 = (undefined *)0x0;
  uStack_4a8 = 0;
  puStack_4b0 = (undefined8 *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  puVar12 = auStack_480;
  ppuVar4 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_4b0;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_receivedClientId_requestA_1125b9930;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_4b0 != unaff_x26) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x25 = *(undefined ***)(lStack_4b8 + (long)unaff_x28 * 8);
        ppuVar2 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar2 & 1) != 0) {
          func_0x00010bf6fe20(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar4 != unaff_x28);
      puVar12 = auStack_480;
      ppuVar4 = ppuVar1;
      ppuVar2 = &puStack_4c0;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar11);
  ppuVar4 = ppuVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_400) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_5f0;
  pcStack_4c8 = FUN_106ea1680;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_520 = unaff_x28;
  ppuStack_518 = unaff_x27;
  ppuStack_510 = unaff_x26;
  ppuStack_508 = unaff_x25;
  puStack_500 = unaff_x24;
  puStack_4f8 = unaff_x23;
  ppuStack_4f0 = ppuVar1;
  uStack_4e8 = uVar13;
  puStack_4e0 = puVar11;
  ppuStack_4d8 = ppuVar17;
  pppuStack_4d0 = &pppuStack_3a0;
  _objc_retain(ppuVar2);
  _objc_retain(puVar12);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_5e8 = 0;
  puStack_5f0 = (undefined *)0x0;
  uStack_5d8 = 0;
  puStack_5e0 = (ulong *)0x0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  puVar11 = auStack_5a8;
  ppuVar17 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_5e0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedWifiAPList__1125b9940;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_5e0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x24 = *(undefined **)(lStack_5e8 + (long)unaff_x27 * 8);
        puVar3 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf6fe60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar11 = auStack_5a8;
      ppuVar17 = ppuVar4;
      ppuVar7 = &puStack_5f0;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  _objc_release(puVar12);
  ppuVar17 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_720;
  pcStack_5f8 = FUN_106ea17d4;
  lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_650 = unaff_x28;
  ppuStack_648 = unaff_x27;
  ppuStack_640 = unaff_x26;
  ppuStack_638 = unaff_x25;
  puStack_630 = unaff_x24;
  puStack_628 = unaff_x23;
  ppuStack_620 = ppuVar1;
  ppuStack_618 = ppuVar4;
  puStack_610 = puVar12;
  ppuStack_608 = ppuVar2;
  pppuStack_600 = &pppuStack_4d0;
  _objc_retain(ppuVar7);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_718 = 0;
  puStack_720 = (undefined *)0x0;
  uStack_708 = 0;
  puStack_710 = (ulong *)0x0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  uStack_6e8 = 0;
  uStack_6f0 = 0;
  ppuVar4 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_710;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedLastCloudUploadTi_1125b9938;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_710 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_718 + (long)unaff_x27 * 8);
        puVar3 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf6fe40(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar4 != unaff_x27);
      ppuVar4 = ppuVar17;
      ppuVar8 = &puStack_720;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar4 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_658) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_850;
  pcStack_728 = FUN_106ea1928;
  lStack_788 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_780 = unaff_x28;
  ppuStack_778 = unaff_x27;
  ppuStack_770 = unaff_x26;
  ppuStack_768 = unaff_x25;
  puStack_760 = unaff_x24;
  puStack_758 = unaff_x23;
  ppuStack_750 = ppuVar1;
  ppuStack_748 = ppuVar17;
  puStack_740 = puVar11;
  ppuStack_738 = ppuVar7;
  pppuStack_730 = &pppuStack_600;
  _objc_retain(ppuVar8);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_848 = 0;
  puStack_850 = (undefined *)0x0;
  uStack_838 = 0;
  puStack_840 = (undefined8 *)0x0;
  uStack_828 = 0;
  uStack_830 = 0;
  uStack_818 = 0;
  uStack_820 = 0;
  ppuVar2 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_840;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar1 = (undefined **)PTR_s_deviceDidRequestBLERestart__1125b9aa8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_840 != unaff_x24) {
          _objc_enumerationMutation(ppuVar4);
        }
        unaff_x23 = *(undefined **)(lStack_848 + (long)unaff_x26 * 8);
        puVar3 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar1);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf70400(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar2 != unaff_x26);
      ppuVar2 = ppuVar4;
      ppuVar9 = &puStack_850;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  ppuVar2 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_788) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_980;
  pcStack_858 = FUN_106ea1a64;
  lStack_8b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_8b0 = unaff_x28;
  ppuStack_8a8 = unaff_x27;
  ppuStack_8a0 = unaff_x26;
  ppuStack_898 = unaff_x25;
  puStack_890 = unaff_x24;
  puStack_888 = unaff_x23;
  ppuStack_880 = ppuVar1;
  ppuStack_878 = ppuVar17;
  ppuStack_870 = ppuVar4;
  ppuStack_868 = ppuVar8;
  pppuStack_860 = &pppuStack_730;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_978 = 0;
  uStack_980 = 0;
  uStack_968 = 0;
  plStack_970 = (long *)0x0;
  uStack_958 = 0;
  uStack_960 = 0;
  uStack_948 = 0;
  uStack_950 = 0;
  ppuVar4 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    lVar16 = *plStack_970;
    do {
      ppuVar1 = (undefined **)PTR_s_deviceDidSetUpFeatureCatalog__1125b9ab0;
      ppuVar17 = (undefined **)0x0;
      do {
        if (*plStack_970 != lVar16) {
          _objc_enumerationMutation(ppuVar2);
        }
        uVar15 = *(ulong *)(lStack_978 + (long)ppuVar17 * 8);
        uVar5 = uVar15;
        _objc_opt_respondsToSelector(uVar15,ppuVar1);
        if ((uVar5 & 1) != 0) {
          func_0x00010bf70420(uVar15);
        }
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar4 != ppuVar17);
      ppuVar4 = ppuVar2;
      puVar10 = &uStack_980;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  ppuVar4 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_8b8) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  pppuVar6 = &ppuStack_9c0;
  pcStack_988 = FUN_106ea1ba0;
  ppuStack_9b0 = ppuVar1;
  ppuStack_9a8 = ppuVar17;
  ppuStack_9a0 = ppuVar2;
  ppuStack_998 = ppuVar9;
  pppuStack_990 = &pppuStack_860;
  _objc_retain(puVar10);
  puStack_9b8 = PTR_PTR_1126f7a70;
  ppuStack_9c0 = ppuVar4;
  _objc_msgSendSuper2(&ppuStack_9c0,PTR_s_init_1125d9248);
  if (pppuVar6 != (undefined ***)0x0) {
    _objc_storeWeak(pppuVar6 + 1,puVar10);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar6[2];
    pppuVar6[2] = (undefined **)puVar3;
    _objc_release(puVar14);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar6[3];
    pppuVar6[3] = (undefined **)puVar3;
    _objc_release(puVar14);
    *(undefined4 *)(pppuVar6 + 4) = 0;
  }
  _objc_release(puVar10);
  return (undefined **)pppuVar6;
}



/* Entry: 106ea128c; end: 106ea13df; -[SCSpectaclesDeviceEventListenerAnnouncer device:didMarkCorruptContent:] */

undefined **
FUN_106ea128c(undefined **param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *unaff_x23;
  ulong uVar15;
  undefined *unaff_x24;
  long lVar16;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar17;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuStack_890;
  undefined *puStack_888;
  undefined **ppuStack_880;
  undefined **ppuStack_878;
  undefined **ppuStack_870;
  undefined **ppuStack_868;
  undefined8 ***pppuStack_860;
  code *pcStack_858;
  undefined8 uStack_850;
  long lStack_848;
  long *plStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  long lStack_788;
  undefined **ppuStack_780;
  undefined **ppuStack_778;
  undefined **ppuStack_770;
  undefined **ppuStack_768;
  undefined *puStack_760;
  undefined *puStack_758;
  undefined **ppuStack_750;
  undefined **ppuStack_748;
  undefined **ppuStack_740;
  undefined **ppuStack_738;
  undefined8 ***pppuStack_730;
  code *pcStack_728;
  undefined *puStack_720;
  long lStack_718;
  undefined8 *puStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  long lStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined **ppuStack_640;
  undefined **ppuStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  undefined **ppuStack_620;
  undefined **ppuStack_618;
  undefined1 *puStack_610;
  undefined **ppuStack_608;
  undefined8 ***pppuStack_600;
  code *pcStack_5f8;
  undefined *puStack_5f0;
  long lStack_5e8;
  ulong *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined1 *puStack_4e0;
  undefined **ppuStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  long lStack_4b8;
  ulong *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 auStack_478 [128];
  long lStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined **ppuStack_3c0;
  undefined8 uStack_3b8;
  undefined1 *puStack_3b0;
  undefined **ppuStack_3a8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_350 [128];
  long lStack_2d0;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  ulong *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  ppuVar3 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (ulong *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar1 = param_1;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_120;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_didMarkCorruptContent__1125b9900;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x24 = *(undefined **)(lStack_128 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fd60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = param_1;
      ppuVar3 = &puStack_130;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  ppuVar17 = &puStack_260;
  pcStack_138 = FUN_106ea13e0;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  puStack_260 = (undefined *)0x0;
  uStack_248 = 0;
  puStack_250 = (ulong *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar11 = auStack_218;
  uVar13 = 0x10;
  ppuVar1 = param_3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_250;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_uploadToCloudEvent__1125b9948;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_250 != unaff_x25) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x24 = *(undefined **)(lStack_258 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe80(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      puVar11 = auStack_218;
      uVar13 = 0x10;
      ppuVar1 = param_3;
      ppuVar17 = &puStack_260;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_390;
  pcStack_268 = FUN_106ea1524;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_270 = &puStack_140;
  _objc_retain(ppuVar17);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_388 = 0;
  puStack_390 = (undefined *)0x0;
  uStack_378 = 0;
  puStack_380 = (undefined8 *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  puVar12 = auStack_350;
  ppuVar1 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_380;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_receivedClientId_requestA_1125b9930;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_380 != unaff_x26) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x25 = *(undefined ***)(lStack_388 + (long)unaff_x28 * 8);
        ppuVar4 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar4 & 1) != 0) {
          func_0x00010bf6fe20(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar1 != unaff_x28);
      puVar12 = auStack_350;
      ppuVar1 = ppuVar3;
      ppuVar4 = &puStack_390;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release(puVar11);
  ppuVar1 = ppuVar17;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_4c0;
  pcStack_398 = FUN_106ea1680;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_3f0 = unaff_x28;
  ppuStack_3e8 = unaff_x27;
  ppuStack_3e0 = unaff_x26;
  ppuStack_3d8 = unaff_x25;
  puStack_3d0 = unaff_x24;
  puStack_3c8 = unaff_x23;
  ppuStack_3c0 = ppuVar3;
  uStack_3b8 = uVar13;
  puStack_3b0 = puVar11;
  ppuStack_3a8 = ppuVar17;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain(ppuVar4);
  _objc_retain(puVar12);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_4b8 = 0;
  puStack_4c0 = (undefined *)0x0;
  uStack_4a8 = 0;
  puStack_4b0 = (ulong *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  puVar11 = auStack_478;
  ppuVar17 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar17 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_4b0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedWifiAPList__1125b9940;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_4b0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x24 = *(undefined **)(lStack_4b8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar17 != unaff_x27);
      puVar11 = auStack_478;
      ppuVar17 = ppuVar1;
      ppuVar7 = &puStack_4c0;
      func_0x00010bf52a60();
      ppuVar3 = (undefined **)0x0;
    } while (ppuVar17 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar12);
  ppuVar17 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return ppuVar17;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_5f0;
  pcStack_4c8 = FUN_106ea17d4;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_520 = unaff_x28;
  ppuStack_518 = unaff_x27;
  ppuStack_510 = unaff_x26;
  ppuStack_508 = unaff_x25;
  puStack_500 = unaff_x24;
  puStack_4f8 = unaff_x23;
  ppuStack_4f0 = ppuVar3;
  ppuStack_4e8 = ppuVar1;
  puStack_4e0 = puVar12;
  ppuStack_4d8 = ppuVar4;
  pppuStack_4d0 = &pppuStack_3a0;
  _objc_retain(ppuVar7);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_5e8 = 0;
  puStack_5f0 = (undefined *)0x0;
  uStack_5d8 = 0;
  puStack_5e0 = (ulong *)0x0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  ppuVar1 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_5e0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedLastCloudUploadTi_1125b9938;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_5e0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar17);
        }
        unaff_x24 = *(undefined **)(lStack_5e8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe40(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = ppuVar17;
      ppuVar8 = &puStack_5f0;
      func_0x00010bf52a60();
      ppuVar3 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar17);
  _objc_release(puVar11);
  ppuVar1 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar9 = &puStack_720;
  pcStack_5f8 = FUN_106ea1928;
  lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_650 = unaff_x28;
  ppuStack_648 = unaff_x27;
  ppuStack_640 = unaff_x26;
  ppuStack_638 = unaff_x25;
  puStack_630 = unaff_x24;
  puStack_628 = unaff_x23;
  ppuStack_620 = ppuVar3;
  ppuStack_618 = ppuVar17;
  puStack_610 = puVar11;
  ppuStack_608 = ppuVar7;
  pppuStack_600 = &pppuStack_4d0;
  _objc_retain(ppuVar8);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_718 = 0;
  puStack_720 = (undefined *)0x0;
  uStack_708 = 0;
  puStack_710 = (undefined8 *)0x0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  uStack_6e8 = 0;
  uStack_6f0 = 0;
  ppuVar4 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_710;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      ppuVar3 = (undefined **)PTR_s_deviceDidRequestBLERestart__1125b9aa8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_710 != unaff_x24) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x23 = *(undefined **)(lStack_718 + (long)unaff_x26 * 8);
        puVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,ppuVar3);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf70400(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar4 != unaff_x26);
      ppuVar4 = ppuVar1;
      ppuVar9 = &puStack_720;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  ppuVar4 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_658) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_850;
  pcStack_728 = FUN_106ea1a64;
  lStack_788 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_780 = unaff_x28;
  ppuStack_778 = unaff_x27;
  ppuStack_770 = unaff_x26;
  ppuStack_768 = unaff_x25;
  puStack_760 = unaff_x24;
  puStack_758 = unaff_x23;
  ppuStack_750 = ppuVar3;
  ppuStack_748 = ppuVar17;
  ppuStack_740 = ppuVar1;
  ppuStack_738 = ppuVar8;
  pppuStack_730 = &pppuStack_600;
  _objc_retain(ppuVar9);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_848 = 0;
  uStack_850 = 0;
  uStack_838 = 0;
  plStack_840 = (long *)0x0;
  uStack_828 = 0;
  uStack_830 = 0;
  uStack_818 = 0;
  uStack_820 = 0;
  ppuVar1 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    lVar16 = *plStack_840;
    do {
      ppuVar3 = (undefined **)PTR_s_deviceDidSetUpFeatureCatalog__1125b9ab0;
      ppuVar17 = (undefined **)0x0;
      do {
        if (*plStack_840 != lVar16) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar15 = *(ulong *)(lStack_848 + (long)ppuVar17 * 8);
        uVar5 = uVar15;
        _objc_opt_respondsToSelector(uVar15,ppuVar3);
        if ((uVar5 & 1) != 0) {
          func_0x00010bf70420(uVar15);
        }
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar1 != ppuVar17);
      ppuVar1 = ppuVar4;
      puVar10 = &uStack_850;
      func_0x00010bf52a60();
      ppuVar17 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  ppuVar1 = ppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_788) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  pppuVar6 = &ppuStack_890;
  pcStack_858 = FUN_106ea1ba0;
  ppuStack_880 = ppuVar3;
  ppuStack_878 = ppuVar17;
  ppuStack_870 = ppuVar4;
  ppuStack_868 = ppuVar9;
  pppuStack_860 = &pppuStack_730;
  _objc_retain(puVar10);
  puStack_888 = PTR_PTR_1126f7a70;
  ppuStack_890 = ppuVar1;
  _objc_msgSendSuper2(&ppuStack_890,PTR_s_init_1125d9248);
  if (pppuVar6 != (undefined ***)0x0) {
    _objc_storeWeak(pppuVar6 + 1,puVar10);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar6[2];
    pppuVar6[2] = (undefined **)puVar2;
    _objc_release(puVar14);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = (undefined *)pppuVar6[3];
    pppuVar6[3] = (undefined **)puVar2;
    _objc_release(puVar14);
    *(undefined4 *)(pppuVar6 + 4) = 0;
  }
  _objc_release(puVar10);
  return (undefined **)pppuVar6;
}



/* Entry: 106ea13e0; end: 106ea1523; -[SCSpectaclesDeviceEventListenerAnnouncer device:uploadToCloudEvent:] */

undefined ** FUN_106ea13e0(undefined **param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *unaff_x23;
  ulong uVar14;
  undefined *unaff_x24;
  long lVar15;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar16;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined **ppuStack_760;
  undefined *puStack_758;
  undefined **ppuStack_750;
  undefined **ppuStack_748;
  undefined **ppuStack_740;
  undefined **ppuStack_738;
  undefined8 ***pppuStack_730;
  code *pcStack_728;
  undefined8 uStack_720;
  long lStack_718;
  long *plStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  long lStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined **ppuStack_640;
  undefined **ppuStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  undefined **ppuStack_620;
  undefined **ppuStack_618;
  undefined **ppuStack_610;
  undefined **ppuStack_608;
  undefined8 ***pppuStack_600;
  code *pcStack_5f8;
  undefined *puStack_5f0;
  long lStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_528;
  undefined **ppuStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e8;
  undefined1 *puStack_4e0;
  undefined **ppuStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  long lStack_4b8;
  ulong *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_3f8;
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined1 *puStack_3b0;
  undefined **ppuStack_3a8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  long lStack_388;
  ulong *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_348 [128];
  long lStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined **ppuStack_290;
  undefined8 uStack_288;
  undefined1 *puStack_280;
  undefined **ppuStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  ppuVar16 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (ulong *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar10 = auStack_e8;
  uVar12 = 0x10;
  ppuVar1 = param_1;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_120;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_uploadToCloudEvent__1125b9948;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x24 = *(undefined **)(lStack_128 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe80(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      puVar10 = auStack_e8;
      uVar12 = 0x10;
      ppuVar1 = param_1;
      ppuVar16 = &puStack_130;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_260;
  pcStack_138 = FUN_106ea1524;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar16);
  _objc_retain(puVar10);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  puStack_260 = (undefined *)0x0;
  uStack_248 = 0;
  puStack_250 = (undefined8 *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar11 = auStack_220;
  ppuVar1 = param_3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*puStack_250;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_receivedClientId_requestA_1125b9930;
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_250 != unaff_x26) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x25 = *(undefined ***)(lStack_258 + (long)unaff_x28 * 8);
        ppuVar3 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar3 & 1) != 0) {
          func_0x00010bf6fe20(unaff_x25);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar1 != unaff_x28);
      puVar11 = auStack_220;
      ppuVar1 = param_3;
      ppuVar3 = &puStack_260;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_3);
  _objc_release(puVar10);
  ppuVar1 = ppuVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_390;
  pcStack_268 = FUN_106ea1680;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_2c0 = unaff_x28;
  ppuStack_2b8 = unaff_x27;
  ppuStack_2b0 = unaff_x26;
  ppuStack_2a8 = unaff_x25;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  ppuStack_290 = param_3;
  uStack_288 = uVar12;
  puStack_280 = puVar10;
  ppuStack_278 = ppuVar16;
  ppuStack_270 = &puStack_140;
  _objc_retain(ppuVar3);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_388 = 0;
  puStack_390 = (undefined *)0x0;
  uStack_378 = 0;
  puStack_380 = (ulong *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  puVar10 = auStack_348;
  ppuVar16 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar16 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_380;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedWifiAPList__1125b9940;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_380 != unaff_x25) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x24 = *(undefined **)(lStack_388 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar16 != unaff_x27);
      puVar10 = auStack_348;
      ppuVar16 = ppuVar1;
      ppuVar6 = &puStack_390;
      func_0x00010bf52a60();
      param_3 = (undefined **)0x0;
    } while (ppuVar16 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar11);
  ppuVar16 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return ppuVar16;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_4c0;
  pcStack_398 = FUN_106ea17d4;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_3f0 = unaff_x28;
  ppuStack_3e8 = unaff_x27;
  ppuStack_3e0 = unaff_x26;
  ppuStack_3d8 = unaff_x25;
  puStack_3d0 = unaff_x24;
  puStack_3c8 = unaff_x23;
  ppuStack_3c0 = param_3;
  ppuStack_3b8 = ppuVar1;
  puStack_3b0 = puVar11;
  ppuStack_3a8 = ppuVar3;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain(ppuVar6);
  _objc_retain(puVar10);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_4b8 = 0;
  puStack_4c0 = (undefined *)0x0;
  uStack_4a8 = 0;
  puStack_4b0 = (ulong *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  ppuVar1 = ppuVar16;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_4b0;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedLastCloudUploadTi_1125b9938;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_4b0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar16);
        }
        unaff_x24 = *(undefined **)(lStack_4b8 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf6fe40(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      ppuVar1 = ppuVar16;
      ppuVar7 = &puStack_4c0;
      func_0x00010bf52a60();
      param_3 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar16);
  _objc_release(puVar10);
  ppuVar1 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_5f0;
  pcStack_4c8 = FUN_106ea1928;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_520 = unaff_x28;
  ppuStack_518 = unaff_x27;
  ppuStack_510 = unaff_x26;
  ppuStack_508 = unaff_x25;
  puStack_500 = unaff_x24;
  puStack_4f8 = unaff_x23;
  ppuStack_4f0 = param_3;
  ppuStack_4e8 = ppuVar16;
  puStack_4e0 = puVar10;
  ppuStack_4d8 = ppuVar6;
  pppuStack_4d0 = &pppuStack_3a0;
  _objc_retain(ppuVar7);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_5e8 = 0;
  puStack_5f0 = (undefined *)0x0;
  uStack_5d8 = 0;
  puStack_5e0 = (undefined8 *)0x0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  ppuVar3 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_5e0;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      param_3 = (undefined **)PTR_s_deviceDidRequestBLERestart__1125b9aa8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_5e0 != unaff_x24) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x23 = *(undefined **)(lStack_5e8 + (long)unaff_x26 * 8);
        puVar2 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,param_3);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf70400(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar3 != unaff_x26);
      ppuVar3 = ppuVar1;
      ppuVar8 = &puStack_5f0;
      func_0x00010bf52a60();
      ppuVar16 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  ppuVar3 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_720;
  pcStack_5f8 = FUN_106ea1a64;
  lStack_658 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_650 = unaff_x28;
  ppuStack_648 = unaff_x27;
  ppuStack_640 = unaff_x26;
  ppuStack_638 = unaff_x25;
  puStack_630 = unaff_x24;
  puStack_628 = unaff_x23;
  ppuStack_620 = param_3;
  ppuStack_618 = ppuVar16;
  ppuStack_610 = ppuVar1;
  ppuStack_608 = ppuVar7;
  pppuStack_600 = &pppuStack_4d0;
  _objc_retain(ppuVar8);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_718 = 0;
  uStack_720 = 0;
  uStack_708 = 0;
  plStack_710 = (long *)0x0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  uStack_6e8 = 0;
  uStack_6f0 = 0;
  ppuVar1 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    lVar15 = *plStack_710;
    do {
      param_3 = (undefined **)PTR_s_deviceDidSetUpFeatureCatalog__1125b9ab0;
      ppuVar16 = (undefined **)0x0;
      do {
        if (*plStack_710 != lVar15) {
          _objc_enumerationMutation(ppuVar3);
        }
        uVar14 = *(ulong *)(lStack_718 + (long)ppuVar16 * 8);
        uVar4 = uVar14;
        _objc_opt_respondsToSelector(uVar14,param_3);
        if ((uVar4 & 1) != 0) {
          func_0x00010bf70420(uVar14);
        }
        ppuVar16 = (undefined **)((long)ppuVar16 + 1);
      } while (ppuVar1 != ppuVar16);
      ppuVar1 = ppuVar3;
      puVar9 = &uStack_720;
      func_0x00010bf52a60();
      ppuVar16 = (undefined **)0x0;
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  ppuVar1 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_658) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  pppuVar5 = &ppuStack_760;
  pcStack_728 = FUN_106ea1ba0;
  ppuStack_750 = param_3;
  ppuStack_748 = ppuVar16;
  ppuStack_740 = ppuVar3;
  ppuStack_738 = ppuVar8;
  pppuStack_730 = &pppuStack_600;
  _objc_retain(puVar9);
  puStack_758 = PTR_PTR_1126f7a70;
  ppuStack_760 = ppuVar1;
  _objc_msgSendSuper2(&ppuStack_760,PTR_s_init_1125d9248);
  if (pppuVar5 != (undefined ***)0x0) {
    _objc_storeWeak(pppuVar5 + 1,puVar9);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = (undefined *)pppuVar5[2];
    pppuVar5[2] = (undefined **)puVar2;
    _objc_release(puVar13);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = (undefined *)pppuVar5[3];
    pppuVar5[3] = (undefined **)puVar2;
    _objc_release(puVar13);
    *(undefined4 *)(pppuVar5 + 4) = 0;
  }
  _objc_release(puVar9);
  return (undefined **)pppuVar5;
}



/* Entry: 106ea1524; end: 106ea167f; -[SCSpectaclesDeviceEventListenerAnnouncer device:receivedClientId:requestAuthzCode:] */

undefined **
FUN_106ea1524(undefined *param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined *unaff_x23;
  ulong uVar13;
  undefined *unaff_x24;
  long lVar14;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined **ppuVar15;
  undefined **unaff_x27;
  undefined *unaff_x28;
  undefined **ppuStack_630;
  undefined *puStack_628;
  undefined *puStack_620;
  undefined **ppuStack_618;
  undefined **ppuStack_610;
  undefined **ppuStack_608;
  undefined8 ***pppuStack_600;
  code *pcStack_5f8;
  undefined8 uStack_5f0;
  long lStack_5e8;
  long *plStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_528;
  undefined *puStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  long lStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_3f8;
  undefined *puStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined **ppuStack_3b8;
  undefined1 *puStack_3b0;
  undefined **ppuStack_3a8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  long lStack_388;
  ulong *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined **ppuStack_288;
  undefined1 *puStack_280;
  undefined **ppuStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  ulong *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  ppuVar2 = &puStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar10 = auStack_f0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    unaff_x26 = (undefined **)*puStack_120;
    unaff_x27 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x24 = PTR_s_device_receivedClientId_requestA_1125b9930;
      unaff_x28 = (undefined *)0x0;
      do {
        if ((undefined **)*puStack_120 != unaff_x26) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x25 = *(undefined ***)(lStack_128 + (long)unaff_x28 * 8);
        ppuVar2 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar2 & 1) != 0) {
          func_0x00010bf6fe20(unaff_x25);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (puVar1 != unaff_x28);
      puVar10 = auStack_f0;
      puVar1 = param_1;
      ppuVar2 = &puStack_130;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  ppuVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_260;
  pcStack_138 = FUN_106ea1680;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_190 = unaff_x28;
  ppuStack_188 = unaff_x27;
  ppuStack_180 = unaff_x26;
  ppuStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  puStack_160 = param_1;
  uStack_158 = param_5;
  uStack_150 = param_4;
  ppuStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar2);
  _objc_retain(puVar10);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  puStack_260 = (undefined *)0x0;
  uStack_248 = 0;
  puStack_250 = (ulong *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar11 = auStack_218;
  ppuVar15 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar15 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_250;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedWifiAPList__1125b9940;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_250 != unaff_x25) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x24 = *(undefined **)(lStack_258 + (long)unaff_x27 * 8);
        puVar1 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar1 & 1) != 0) {
          func_0x00010bf6fe60(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar15 != unaff_x27);
      puVar11 = auStack_218;
      ppuVar15 = ppuVar3;
      ppuVar6 = &puStack_260;
      func_0x00010bf52a60();
      param_1 = (undefined *)0x0;
    } while (ppuVar15 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  _objc_release(puVar10);
  ppuVar15 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return ppuVar15;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_390;
  pcStack_268 = FUN_106ea17d4;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2c0 = unaff_x28;
  ppuStack_2b8 = unaff_x27;
  ppuStack_2b0 = unaff_x26;
  ppuStack_2a8 = unaff_x25;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  puStack_290 = param_1;
  ppuStack_288 = ppuVar3;
  puStack_280 = puVar10;
  ppuStack_278 = ppuVar2;
  ppuStack_270 = &puStack_140;
  _objc_retain(ppuVar6);
  _objc_retain(puVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_388 = 0;
  puStack_390 = (undefined *)0x0;
  uStack_378 = 0;
  puStack_380 = (ulong *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  ppuVar2 = ppuVar15;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_380;
    unaff_x26 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      unaff_x23 = PTR_s_device_receivedLastCloudUploadTi_1125b9938;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_380 != unaff_x25) {
          _objc_enumerationMutation(ppuVar15);
        }
        unaff_x24 = *(undefined **)(lStack_388 + (long)unaff_x27 * 8);
        puVar1 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar1 & 1) != 0) {
          func_0x00010bf6fe40(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar2 != unaff_x27);
      ppuVar2 = ppuVar15;
      ppuVar7 = &puStack_390;
      func_0x00010bf52a60();
      param_1 = (undefined *)0x0;
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar15);
  _objc_release(puVar11);
  ppuVar2 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_4c0;
  pcStack_398 = FUN_106ea1928;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_3f0 = unaff_x28;
  ppuStack_3e8 = unaff_x27;
  ppuStack_3e0 = unaff_x26;
  ppuStack_3d8 = unaff_x25;
  puStack_3d0 = unaff_x24;
  puStack_3c8 = unaff_x23;
  puStack_3c0 = param_1;
  ppuStack_3b8 = ppuVar15;
  puStack_3b0 = puVar11;
  ppuStack_3a8 = ppuVar6;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain(ppuVar7);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_4b8 = 0;
  puStack_4c0 = (undefined *)0x0;
  uStack_4a8 = 0;
  puStack_4b0 = (undefined8 *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  ppuVar3 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_4b0;
    unaff_x25 = &PTR_s_dependenciesFulfilledFuture_1125b9000;
    do {
      param_1 = PTR_s_deviceDidRequestBLERestart__1125b9aa8;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_4b0 != unaff_x24) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x23 = *(undefined **)(lStack_4b8 + (long)unaff_x26 * 8);
        puVar1 = unaff_x23;
        _objc_opt_respondsToSelector(unaff_x23,param_1);
        if (((ulong)puVar1 & 1) != 0) {
          func_0x00010bf70400(unaff_x23);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar3 != unaff_x26);
      ppuVar3 = ppuVar2;
      ppuVar8 = &puStack_4c0;
      func_0x00010bf52a60();
      ppuVar15 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  ppuVar3 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_5f0;
  pcStack_4c8 = FUN_106ea1a64;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_520 = unaff_x28;
  ppuStack_518 = unaff_x27;
  ppuStack_510 = unaff_x26;
  ppuStack_508 = unaff_x25;
  puStack_500 = unaff_x24;
  puStack_4f8 = unaff_x23;
  puStack_4f0 = param_1;
  ppuStack_4e8 = ppuVar15;
  ppuStack_4e0 = ppuVar2;
  ppuStack_4d8 = ppuVar7;
  pppuStack_4d0 = &pppuStack_3a0;
  _objc_retain(ppuVar8);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5d8 = 0;
  plStack_5e0 = (long *)0x0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  ppuVar2 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    lVar14 = *plStack_5e0;
    do {
      param_1 = PTR_s_deviceDidSetUpFeatureCatalog__1125b9ab0;
      ppuVar15 = (undefined **)0x0;
      do {
        if (*plStack_5e0 != lVar14) {
          _objc_enumerationMutation(ppuVar3);
        }
        uVar13 = *(ulong *)(lStack_5e8 + (long)ppuVar15 * 8);
        uVar4 = uVar13;
        _objc_opt_respondsToSelector(uVar13,param_1);
        if ((uVar4 & 1) != 0) {
          func_0x00010bf70420(uVar13);
        }
        ppuVar15 = (undefined **)((long)ppuVar15 + 1);
      } while (ppuVar2 != ppuVar15);
      ppuVar2 = ppuVar3;
      puVar9 = &uStack_5f0;
      func_0x00010bf52a60();
      ppuVar15 = (undefined **)0x0;
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  ppuVar2 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  pppuVar5 = &ppuStack_630;
  pcStack_5f8 = FUN_106ea1ba0;
  puStack_620 = param_1;
  ppuStack_618 = ppuVar15;
  ppuStack_610 = ppuVar3;
  ppuStack_608 = ppuVar8;
  pppuStack_600 = &pppuStack_4d0;
  _objc_retain(puVar9);
  puStack_628 = PTR_PTR_1126f7a70;
  ppuStack_630 = ppuVar2;
  _objc_msgSendSuper2(&ppuStack_630,PTR_s_init_1125d9248);
  if (pppuVar5 != (undefined ***)0x0) {
    _objc_storeWeak(pppuVar5 + 1,puVar9);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = (undefined *)pppuVar5[2];
    pppuVar5[2] = (undefined **)puVar1;
    _objc_release(puVar12);
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = (undefined *)pppuVar5[3];
    pppuVar5[3] = (undefined **)puVar1;
    _objc_release(puVar12);
    *(undefined4 *)(pppuVar5 + 4) = 0;
  }
  _objc_release(puVar9);
  return (undefined **)pppuVar5;
}



/* Entry: 106ea1680; end: 106ea17d3; -[SCSpectaclesDeviceEventListenerAnnouncer device:receivedWifiAPList:] */

undefined1 * FUN_106ea1680(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 **ppuVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *unaff_x22;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined1 *puStack_4e8;
  undefined1 *puStack_4e0;
  undefined1 *puStack_4d8;
  undefined8 **ppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_3f8;
  undefined8 **ppuStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2c8;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar2 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar3 = auStack_e8;
  lVar11 = param_1;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    lVar10 = *plStack_120;
    do {
      puVar6 = PTR_s_device_receivedWifiAPList__1125b9940;
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_1);
        }
        uVar9 = *(ulong *)(lStack_128 + lVar13 * 8);
        uVar1 = uVar9;
        _objc_opt_respondsToSelector(uVar9,puVar6);
        if ((uVar1 & 1) != 0) {
          func_0x00010bf6fe60(uVar9);
        }
        lVar13 = lVar13 + 1;
      } while (lVar11 != lVar13);
      puVar3 = auStack_e8;
      lVar11 = param_1;
      puVar2 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x22 = (undefined *)0x0;
    } while (lVar11 != 0);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_260;
  pcStack_138 = FUN_106ea17d4;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar12 = param_3;
  func_0x00010bf52a60();
  if (puVar12 != (undefined1 *)0x0) {
    lVar11 = *plStack_250;
    do {
      puVar6 = PTR_s_device_receivedLastCloudUploadTi_1125b9938;
      puVar14 = (undefined1 *)0x0;
      do {
        if (*plStack_250 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        uVar9 = *(ulong *)(lStack_258 + (long)puVar14 * 8);
        uVar1 = uVar9;
        _objc_opt_respondsToSelector(uVar9,puVar6);
        if ((uVar1 & 1) != 0) {
          func_0x00010bf6fe40(uVar9);
        }
        puVar14 = puVar14 + 1;
      } while (puVar12 != puVar14);
      puVar12 = param_3;
      puVar4 = &uStack_260;
      func_0x00010bf52a60();
      unaff_x22 = (undefined *)0x0;
    } while (puVar12 != (undefined1 *)0x0);
  }
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return (undefined1 *)puVar2;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_390;
  pcStack_268 = FUN_106ea1928;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  plStack_380 = (long *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  puVar3 = (undefined1 *)puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    lVar11 = *plStack_380;
    do {
      unaff_x22 = PTR_s_deviceDidRequestBLERestart__1125b9aa8;
      puVar12 = (undefined1 *)0x0;
      do {
        if (*plStack_380 != lVar11) {
          _objc_enumerationMutation(puVar2);
        }
        uVar9 = *(ulong *)(lStack_388 + (long)puVar12 * 8);
        uVar1 = uVar9;
        _objc_opt_respondsToSelector(uVar9,unaff_x22);
        if ((uVar1 & 1) != 0) {
          func_0x00010bf70400(uVar9);
        }
        puVar12 = puVar12 + 1;
      } while (puVar3 != puVar12);
      puVar3 = (undefined1 *)puVar2;
      puVar7 = &uStack_390;
      func_0x00010bf52a60();
      param_3 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return (undefined1 *)puVar4;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_4c0;
  pcStack_398 = FUN_106ea1a64;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_3a0 = &ppuStack_270;
  _objc_retain(puVar7);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  plStack_4b0 = (long *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  puVar3 = (undefined1 *)puVar4;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    lVar11 = *plStack_4b0;
    do {
      unaff_x22 = PTR_s_deviceDidSetUpFeatureCatalog__1125b9ab0;
      puVar12 = (undefined1 *)0x0;
      do {
        if (*plStack_4b0 != lVar11) {
          _objc_enumerationMutation(puVar4);
        }
        uVar9 = *(ulong *)(lStack_4b8 + (long)puVar12 * 8);
        uVar1 = uVar9;
        _objc_opt_respondsToSelector(uVar9,unaff_x22);
        if ((uVar1 & 1) != 0) {
          func_0x00010bf70420(uVar9);
        }
        puVar12 = puVar12 + 1;
      } while (puVar3 != puVar12);
      puVar3 = (undefined1 *)puVar4;
      puVar2 = &uStack_4c0;
      func_0x00010bf52a60();
      param_3 = (undefined1 *)0x0;
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(puVar4);
  puVar3 = (undefined1 *)puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_500;
  pcStack_4c8 = FUN_106ea1ba0;
  puStack_4f0 = unaff_x22;
  puStack_4e8 = param_3;
  puStack_4e0 = (undefined1 *)puVar4;
  puStack_4d8 = (undefined1 *)puVar7;
  ppuStack_4d0 = &ppuStack_3a0;
  _objc_retain(puVar2);
  puStack_4f8 = PTR_PTR_1126f7a70;
  puStack_500 = puVar3;
  _objc_msgSendSuper2(&puStack_500,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar5 + 8),puVar2);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined **)((long)ppuVar5 + 0x10) = puVar6;
    _objc_release(uVar8);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x18);
    *(undefined **)((long)ppuVar5 + 0x18) = puVar6;
    _objc_release(uVar8);
    *(undefined4 *)((long)ppuVar5 + 0x20) = 0;
  }
  _objc_release(puVar2);
  return (undefined1 *)ppuVar5;
}



/* Entry: 106ea17d4; end: 106ea1927; -[SCSpectaclesDeviceEventListenerAnnouncer device:receivedLastCloudUploadTime:] */

undefined1 * FUN_106ea17d4(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 **ppuVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined *unaff_x22;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  long lStack_3b8;
  undefined1 *puStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 **ppuStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2c8;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar10 = param_1;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar11 = *plStack_120;
    do {
      puVar5 = PTR_s_device_receivedLastCloudUploadTi_1125b9938;
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_1);
        }
        uVar9 = *(ulong *)(lStack_128 + lVar13 * 8);
        uVar1 = uVar9;
        _objc_opt_respondsToSelector(uVar9,puVar5);
        if ((uVar1 & 1) != 0) {
          func_0x00010bf6fe40(uVar9);
        }
        lVar13 = lVar13 + 1;
      } while (lVar10 != lVar13);
      lVar10 = param_1;
      puVar3 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x22 = (undefined *)0x0;
    } while (lVar10 != 0);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_260;
  pcStack_138 = FUN_106ea1928;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar2 = param_3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar10 = *plStack_250;
    do {
      unaff_x22 = PTR_s_deviceDidRequestBLERestart__1125b9aa8;
      puVar12 = (undefined1 *)0x0;
      do {
        if (*plStack_250 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        uVar9 = *(ulong *)(lStack_258 + (long)puVar12 * 8);
        uVar1 = uVar9;
        _objc_opt_respondsToSelector(uVar9,unaff_x22);
        if ((uVar1 & 1) != 0) {
          func_0x00010bf70400(uVar9);
        }
        puVar12 = puVar12 + 1;
      } while (puVar2 != puVar12);
      puVar2 = param_3;
      puVar6 = &uStack_260;
      func_0x00010bf52a60();
      param_1 = 0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return (undefined1 *)puVar3;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_390;
  pcStack_268 = FUN_106ea1a64;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  plStack_380 = (long *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  puVar2 = (undefined1 *)puVar3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar10 = *plStack_380;
    do {
      unaff_x22 = PTR_s_deviceDidSetUpFeatureCatalog__1125b9ab0;
      puVar12 = (undefined1 *)0x0;
      do {
        if (*plStack_380 != lVar10) {
          _objc_enumerationMutation(puVar3);
        }
        uVar9 = *(ulong *)(lStack_388 + (long)puVar12 * 8);
        uVar1 = uVar9;
        _objc_opt_respondsToSelector(uVar9,unaff_x22);
        if ((uVar1 & 1) != 0) {
          func_0x00010bf70420(uVar9);
        }
        puVar12 = puVar12 + 1;
      } while (puVar2 != puVar12);
      puVar2 = (undefined1 *)puVar3;
      puVar7 = &uStack_390;
      func_0x00010bf52a60();
      param_1 = 0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(puVar3);
  puVar2 = (undefined1 *)puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_3d0;
  pcStack_398 = FUN_106ea1ba0;
  puStack_3c0 = unaff_x22;
  lStack_3b8 = param_1;
  puStack_3b0 = (undefined1 *)puVar3;
  puStack_3a8 = (undefined1 *)puVar6;
  ppuStack_3a0 = &ppuStack_270;
  _objc_retain(puVar7);
  puStack_3c8 = PTR_PTR_1126f7a70;
  puStack_3d0 = puVar2;
  _objc_msgSendSuper2(&puStack_3d0,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar7);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined **)((long)ppuVar4 + 0x10) = puVar5;
    _objc_release(uVar8);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)ppuVar4 + 0x18);
    *(undefined **)((long)ppuVar4 + 0x18) = puVar5;
    _objc_release(uVar8);
    *(undefined4 *)((long)ppuVar4 + 0x20) = 0;
  }
  _objc_release(puVar7);
  return (undefined1 *)ppuVar4;
}



/* Entry: 106ea1928; end: 106ea1a63; -[SCSpectaclesDeviceEventListenerAnnouncer deviceDidRequestBLERestart:] */

undefined1 * FUN_106ea1928(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar10 = param_1;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar9 = *plStack_120;
    do {
      unaff_x22 = PTR_s_deviceDidRequestBLERestart__1125b9aa8;
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        uVar8 = *(ulong *)(lStack_128 + lVar11 * 8);
        uVar1 = uVar8;
        _objc_opt_respondsToSelector(uVar8,unaff_x22);
        if ((uVar1 & 1) != 0) {
          func_0x00010bf70400(uVar8);
        }
        lVar11 = lVar11 + 1;
      } while (lVar10 != lVar11);
      lVar10 = param_1;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar10 != 0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_260;
  pcStack_138 = FUN_106ea1a64;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar2 = param_3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined1 *)0x0) {
    lVar10 = *plStack_250;
    do {
      unaff_x22 = PTR_s_deviceDidSetUpFeatureCatalog__1125b9ab0;
      puVar12 = (undefined1 *)0x0;
      do {
        if (*plStack_250 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(ulong *)(lStack_258 + (long)puVar12 * 8);
        uVar1 = uVar8;
        _objc_opt_respondsToSelector(uVar8,unaff_x22);
        if ((uVar1 & 1) != 0) {
          func_0x00010bf70420(uVar8);
        }
        puVar12 = puVar12 + 1;
      } while (puVar2 != puVar12);
      puVar2 = param_3;
      puVar6 = &uStack_260;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (puVar2 != (undefined1 *)0x0);
  }
  _objc_release(param_3);
  puVar2 = (undefined1 *)puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_2a0;
  pcStack_268 = FUN_106ea1ba0;
  puStack_290 = unaff_x22;
  uStack_288 = unaff_x21;
  puStack_280 = param_3;
  puStack_278 = (undefined1 *)puVar5;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar6);
  puStack_298 = PTR_PTR_1126f7a70;
  puStack_2a0 = puVar2;
  _objc_msgSendSuper2(&puStack_2a0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar3 + 8),puVar6);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x10);
    *(undefined **)((long)ppuVar3 + 0x10) = puVar4;
    _objc_release(uVar7);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x18);
    *(undefined **)((long)ppuVar3 + 0x18) = puVar4;
    _objc_release(uVar7);
    *(undefined4 *)((long)ppuVar3 + 0x20) = 0;
  }
  _objc_release(puVar6);
  return (undefined1 *)ppuVar3;
}



/* Entry: 106ea1a64; end: 106ea1b9f; -[SCSpectaclesDeviceEventListenerAnnouncer deviceDidSetUpFeatureCatalog:] */

undefined1 * FUN_106ea1a64(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      unaff_x22 = PTR_s_deviceDidSetUpFeatureCatalog__1125b9ab0;
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_1);
        }
        uVar8 = *(ulong *)(lStack_128 + lVar10 * 8);
        uVar2 = uVar8;
        _objc_opt_respondsToSelector(uVar8,unaff_x22);
        if ((uVar2 & 1) != 0) {
          func_0x00010bf70420(uVar8);
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = param_1;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x21 = 0;
    } while (lVar1 != 0);
  }
  _objc_release(param_1);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_170;
  pcStack_138 = FUN_106ea1ba0;
  puStack_160 = unaff_x22;
  uStack_158 = unaff_x21;
  lStack_150 = param_1;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  puStack_168 = PTR_PTR_1126f7a70;
  puStack_170 = puVar3;
  _objc_msgSendSuper2(&puStack_170,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined1 **)0x0) {
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + 8),puVar6);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar4 + 0x10);
    *(undefined **)((long)ppuVar4 + 0x10) = puVar5;
    _objc_release(uVar7);
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)ppuVar4 + 0x18);
    *(undefined **)((long)ppuVar4 + 0x18) = puVar5;
    _objc_release(uVar7);
    *(undefined4 *)((long)ppuVar4 + 0x20) = 0;
  }
  _objc_release(puVar6);
  return (undefined1 *)ppuVar4;
}



/* Entry: 106ea1ba0; end: 106ea1c5b; -[SCSpectaclesDevicePreferencesImpl initWithDelegate:] */

undefined1 * FUN_106ea1ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f7a70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ea1c5c; end: 106ea1cff; -[SCSpectaclesDevicePreferencesImpl setupWithCoder:] */

void FUN_106ea1c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110e790d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf67000(param_3,param_2,&PTR____CFConstantStringClassReference_110e8acb8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x10),param_2,uVar1);
  func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x18),param_2,uVar2);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ea1d00; end: 106ea1d93; -[SCSpectaclesDevicePreferencesImpl persistWithCoder:] */

void FUN_106ea1d00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf51e00(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x20);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e790d8);
  func_0x00010bf93020(param_3,param_2,uVar2,&PTR____CFConstantStringClassReference_110e8acb8);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ea1d94; end: 106ea1f07; -[SCSpectaclesDevicePreferencesImpl clearPreferencesForLifecycle:] */

void FUN_106ea1d94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x20);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(lVar1);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        lVar3 = *(long *)(param_1 + 0x18);
        func_0x00010c0e00e0(lVar3,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c067fc0();
        _objc_release(lVar3);
        if (lVar4 == param_3) {
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,0,uVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x20);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained();
  func_0x00010bf70dc0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_1);
  _os_unfair_lock_lock(lVar2 + 0x20);
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  func_0x00010c0e00e0(uVar5,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(lVar2 + 0x20);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106ea1f08; end: 106ea1f7f; -[SCSpectaclesDevicePreferencesImpl objectForKey:] */

void FUN_106ea1f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ea1f80; end: 106ea203b; -[SCSpectaclesDevicePreferencesImpl setObject:forKey:lifecycle:] */

void FUN_106ea1f80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  _objc_release(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar1,param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0x20);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf70dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea203c; end: 106ea203f; -[SCSpectaclesDevicePreferencesImpl objectForKeyedSubscript:] */

void FUN_106ea203c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_objectForKey__1126159e0);
  return;
}



/* Entry: 106ea2040; end: 106ea2047; -[SCSpectaclesDevicePreferencesImpl setObject:forKeyedSubscript:] */

void FUN_106ea2040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d05d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKey_lifecycle__112651b98,param_3,param_4,0);
  return;
}



/* Entry: 106ea2048; end: 106ea207f; -[SCSpectaclesDevicePreferencesImpl .cxx_destruct] */

void FUN_106ea2048(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106ea2080; end: 106ea20b3; -[SCSpectaclesDeviceStore dealloc] */

void FUN_106ea2080(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f7a78;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106ea20b4; end: 106ea2153; -[SCSpectaclesDeviceStore _archiveDevicesToCache:] */

void FUN_106ea20b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    _objc_retain(param_3);
    func_0x00010bf262a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bdc2e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uStack_38 = 0;
    func_0x00010c14e080(param_3,param_2,lVar1,1,&uStack_38);
    _objc_release(param_3);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 106ea2154; end: 106ea21a3; -[SCSpectaclesDeviceStore _clearDevices] */

void FUN_106ea2154(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1ae500(param_1,param_2,PTR____NSDictionary0__struct_11034ab58);
  func_0x00010bdcf160(param_1,param_2,1);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf710c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea21a4; end: 106ea22bb; -[SCSpectaclesDeviceStore _updateRequiredFirmwareStatus:] */

void FUN_106ea21a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  func_0x00010c0ce560(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_3;
  func_0x00010bfd38e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b6e60();
  func_0x00010c0df780(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c0e00e0(param_1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
  lVar1 = param_3;
  func_0x00010bfb0d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf433a0();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0692a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c2197e0(lVar1,param_2,lVar2 == -1,2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106ea22bc; end: 106ea22f3; -[SCSpectaclesDeviceStore setInternalDevices:] */

void FUN_106ea22bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bee05f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSortedDevices_112595b20);
  return;
}



/* Entry: 106ea22f4; end: 106ea244b; -[SCSpectaclesDeviceStore _archiveDevicesForced:] */

void FUN_106ea22f4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x00010bf09800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf09800(param_1);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_block_cancel();
    _objc_release(lVar1);
  }
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106ea244c;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = 0;
  func_0x0001008553e8(0,&puStack_70);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  _objc_release(uVar3);
  uVar2 = 0;
  if (param_3 == 0) {
    uVar2 = 0x4000000000000000;
  }
  lVar1 = param_1;
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fe0(uVar2,lVar1);
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106ea244c; end: 106ea257b;  */

void FUN_106ea244c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bf71280(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (puVar3 != (undefined *)0x0) {
      lVar2 = lVar1;
      func_0x00010bf09700(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_48,param_1 + 0x20);
      _objc_retain(puVar3);
      func_0x00010c0f7fc0(lVar2);
      _objc_release(lVar2);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106ea257c; end: 106ea25af;  */

void FUN_106ea257c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcf180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ea25b0; end: 106ea25b7; -[SCSpectaclesDeviceStore archiveDevices] */

void FUN_106ea25b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcf170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__archiveDevicesForced__1125515f8,0);
  return;
}



/* Entry: 106ea25b8; end: 106ea26af; -[SCSpectaclesDeviceStore retrieveArchivedDevicesWithCentralManager:] */

void FUN_106ea25b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0f98a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f8240(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106ea26b0; end: 106ea26fb;  */

void FUN_106ea26b0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c13c8e0();
  if ((uVar2 & 1) == 0) {
    func_0x00010be96160(uVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1ed2a0(uVar1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ea26fc; end: 106ea2887; -[SCSpectaclesDeviceStore _readArchivedDevices] */

void FUN_106ea26fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_48;
  
  func_0x00010c14dca0(PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98);
  func_0x00010bf262a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bdc2e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uStack_48 = 0;
  puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64ae0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,uVar2,0,&uStack_48);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_48;
  _objc_retain(uStack_48);
  if (puVar5 == (undefined *)0x0) {
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    func_0x00010bfeea60();
    _objc_retain(uVar1);
    _objc_release(uVar1);
    func_0x00010c1ec620(puVar3,param_2,0);
    puVar4 = puVar3;
    func_0x00010bf67000(puVar3,param_2,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(uVar1);
    _objc_release(uVar2);
    if (puVar4 != (undefined *)0x0) {
      puVar5 = puVar4;
      func_0x00010bfaea20(puVar4,param_2,&PTR___NSConcreteGlobalBlock_110981e08);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      goto LAB_106ea284c;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_106ea284c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106ea2888; end: 106ea28cb;  */

bool FUN_106ea2888(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bfd38e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf70e00();
  _objc_release(param_2);
  return lVar1 != 1;
}



/* Entry: 106ea28cc; end: 106ea2cab; -[SCSpectaclesDeviceStore _setupInternalDevicesWithUnarchivedDevices:centralManager:] */

void FUN_106ea28cc(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  ulong uVar10;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  ulong uStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_148 = param_4;
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c0692c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0d3c80();
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (ulong *)0x0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    param_4 = *puStack_120;
    lStack_140 = lVar2;
    lStack_138 = param_3;
    do {
      unaff_x22 = 0;
      do {
        if (*puStack_120 != param_4) {
          _objc_enumerationMutation(param_3);
        }
        uVar10 = *(ulong *)(lStack_128 + unaff_x22 * 8);
        uVar3 = uVar10;
        func_0x00010c15e740();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c08fa60();
        _objc_release(uVar3);
        if (uVar4 != 0) {
          uVar3 = uVar10;
          func_0x00010c15e740(uVar10);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar3);
          if (lVar5 == 0) {
            lVar2 = param_1;
            func_0x00010c0f98a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = param_1;
            func_0x00010bf026c0(param_1);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_PTR_1126d3058;
            _objc_alloc(PTR_PTR_1126d3058);
            lVar7 = param_1;
            func_0x00010bf04760(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar8 = param_1;
            func_0x00010bf026c0(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c00bce0(puVar6);
            func_0x00010c228a40(uVar10);
            _objc_release(puVar6);
            _objc_release(lVar8);
            _objc_release(lVar7);
            _objc_release(lVar5);
            _objc_release(lVar2);
            uVar4 = uVar10;
            func_0x00010c082060();
            uVar3 = uStack_148;
            if ((uVar4 & 1) == 0) {
              uVar4 = uStack_148;
              func_0x00010c06f880();
              if ((uVar4 & 1) == 0) {
                func_0x00010bf57500(uVar3);
                _objc_unsafeClaimAutoreleasedReturnValue();
              }
              func_0x00010c269d40(uVar3);
              _objc_retainAutoreleasedReturnValue();
              uVar9 = *(undefined8 *)(param_1 + 8);
              func_0x00010c150760(uVar9);
              _objc_retainAutoreleasedReturnValue();
              lVar2 = param_1 + 0x20;
              _objc_loadWeakRetained(lVar2);
              func_0x00010c229ac0(uVar10);
              _objc_release(lVar2);
              _objc_release(uVar9);
              _objc_release(uVar3);
            }
            lVar2 = param_1;
            func_0x00010bf262a0(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2287a0(uVar10);
            _objc_release(lVar2);
            func_0x00010c0e9600(uVar10);
            uVar3 = uVar10;
            func_0x00010bf6ff00(uVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef9980();
            _objc_release(uVar3);
            lVar2 = param_1;
            func_0x00010bf6b020(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf710a0();
            _objc_release(lVar2);
            func_0x00010c15e740(uVar10);
            _objc_retainAutoreleasedReturnValue();
            lVar2 = lStack_140;
            func_0x00010c1d0640(lStack_140);
            _objc_release(uVar10);
            param_3 = lStack_138;
          }
        }
        unaff_x22 = unaff_x22 + 1;
      } while (lVar1 != unaff_x22);
      lVar1 = param_3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  lVar1 = lVar2;
  func_0x00010bf51e00();
  lVar5 = lVar1;
  func_0x00010c1ae500(param_1);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(uStack_148);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_106ea2cac;
  lStack_180 = unaff_x22;
  lStack_178 = param_1;
  lStack_170 = lVar1;
  uStack_168 = param_4;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(lVar5);
  puStack_1a8 = &uStack_1b0;
  uStack_1b0 = 0;
  uStack_1a0 = 0x3032000000;
  pcStack_198 = FUN_106ea2dac;
  uStack_190 = 0x106ea2dbc;
  uStack_188 = 0;
  lVar2 = param_3;
  func_0x00010bf09700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8240();
  _objc_release(lVar2);
  func_0x00010bead420(param_3);
  __Block_object_dispose(&uStack_1b0,8);
  _objc_release(uStack_188);
  _objc_release(lVar5);
  return;
}



/* Entry: 106ea2cac; end: 106ea2dab; -[SCSpectaclesDeviceStore _retrieveArchivedDevicesWithCentralManager:] */

void FUN_106ea2cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106ea2dac;
  uStack_40 = 0x106ea2dbc;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bf09700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8240();
  _objc_release(uVar1);
  func_0x00010bead420(param_1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}


