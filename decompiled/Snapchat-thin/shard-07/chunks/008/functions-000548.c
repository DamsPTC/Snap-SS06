/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a38288; end: 105a382ef; -[SCSpectaclesLogger logFirmwareUpdatePromptShown:] */

void FUN_105a38288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1620;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1e4c80();
  func_0x00010be75ac0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a382f0; end: 105a38363; -[SCSpectaclesLogger logFirmwareUpdatePromptDismissed:promptAccepted:] */

void FUN_105a382f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1620;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1e4c80();
  func_0x00010be75ac0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a38364; end: 105a3853b; -[SCSpectaclesLogger _populateAndLogFirmwareUpdateSessionEvent:info:] */

void FUN_105a38364(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_5;
  func_0x00010bf70720(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9a0(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bfb0d20(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19cd80(param_4,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bfd38e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5640(param_4,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf700a0(param_5);
  FUN_105a345b0();
  func_0x00010c19f260(param_4,param_3,uVar1);
  uVar1 = param_5;
  func_0x00010c1603a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3a0();
  func_0x00010c192ec0((double)(long)(param_1 * -10.0) / 10.0,param_4);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c286a60(param_5);
  func_0x00010c21c8e0(param_4,param_3,(uint)uVar1 ^ 1);
  uVar1 = param_5;
  func_0x00010c15ffa0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21c780(param_4,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c269f00(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar2 = uVar1;
  func_0x00010bf6e340(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212360(param_4,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x18),param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a3853c; end: 105a3859b; -[SCSpectaclesLogger logFirmwareUpdateStarted:] */

void FUN_105a3853c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1628;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be75ae0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3859c; end: 105a385fb; -[SCSpectaclesLogger logFirmwareUpdateBinaryRevertStarted:] */

void FUN_105a3859c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1630;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be75ae0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a385fc; end: 105a3865b; -[SCSpectaclesLogger logFirmwareUpdateBinaryRevertFinished:] */

void FUN_105a385fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1638;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be75ae0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3865c; end: 105a386bb; -[SCSpectaclesLogger logFirmwareUpdatePatchDownloadStarted:] */

void FUN_105a3865c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1640;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be75ae0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a386bc; end: 105a3871b; -[SCSpectaclesLogger logFirmwareUpdatePatchDownloadFinished:] */

void FUN_105a386bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1648;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be75ae0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3871c; end: 105a3877b; -[SCSpectaclesLogger logFirmwareUpdatePatchTransferStarted:] */

void FUN_105a3871c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1650;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be75ae0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3877c; end: 105a387db; -[SCSpectaclesLogger logFirmwareUpdatePatchTransferFinished:] */

void FUN_105a3877c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1658;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be75ae0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a387dc; end: 105a3883b; -[SCSpectaclesLogger logFirmwareUpdatePatchApplyStarted:] */

void FUN_105a387dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1660;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be75ae0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3883c; end: 105a3889b; -[SCSpectaclesLogger logFirmwareUpdatePatchApplyFinished:] */

void FUN_105a3883c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1668;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be75ae0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3889c; end: 105a388fb; -[SCSpectaclesLogger logFirmwareUpdateScheduled:] */

void FUN_105a3889c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1670;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be75ae0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a388fc; end: 105a3895b; -[SCSpectaclesLogger logFirmwareUpdateFlashStarted:] */

void FUN_105a388fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1678;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be75ae0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3895c; end: 105a389bb; -[SCSpectaclesLogger logFirmwareUpdateSucceeded:] */

void FUN_105a3895c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1680;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be75ae0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a389bc; end: 105a38a43; -[SCSpectaclesLogger logFirmwareUpdateFailed:reason:] */

void FUN_105a389bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1688;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  if (param_4 < 0xb) {
    uVar2 = *(undefined8 *)(&UNK_10ddc9c38 + param_4 * 8);
  }
  else {
    uVar2 = 0xf;
  }
  func_0x00010c19a060(puVar1,param_2,uVar2);
  func_0x00010be75ae0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a38a44; end: 105a38ad7; -[SCSpectaclesLogger logSpectaclesConnectionStartForUpdate:] */

void FUN_105a38a44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1580;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c15ffa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21c780(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010be75c60(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a38ad8; end: 105a38b6b; -[SCSpectaclesLogger logSpectaclesConnectionSuccessForUpdate:] */

void FUN_105a38ad8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1588;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c15ffa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21c780(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010be75c60(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a38b6c; end: 105a38c27; -[SCSpectaclesLogger logSpectaclesConnectionFailureForTransfer:failureReason:] */

void FUN_105a38b6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1590;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c15ffa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2198e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c19a060(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010be75c60(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a38c28; end: 105a38df7; -[SCSpectaclesLogger _populateConnectionEventParameters:connectionInfo:] */

void FUN_105a38c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c27a200();
  if (uVar1 < 3) {
    uVar2 = *(undefined8 *)(&UNK_10ddc9c90 + uVar1 * 8);
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  func_0x00010c2197c0(param_3,param_2,uVar2);
  uVar1 = param_4;
  func_0x00010bf70720(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9a0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfb0d20(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19cd80(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfd38e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5640(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf700a0(param_4);
  FUN_105a345b0();
  func_0x00010c19f260(param_3,param_2,uVar1);
  uVar1 = param_4;
  func_0x00010c06e420(param_4);
  func_0x00010c1afe80(param_3,param_2,uVar1);
  uVar1 = param_4;
  func_0x00010bf6ffc0(param_4);
  func_0x00010c18c760(param_3,param_2,uVar1);
  uVar1 = param_4;
  func_0x00010bf71060(param_4);
  func_0x00010c18cec0(param_3,param_2,uVar1);
  uVar1 = param_4;
  func_0x00010c246060(param_4);
  func_0x00010c167b20(param_3,param_2,uVar1);
  uVar1 = param_4;
  func_0x00010c0db2a0(param_4);
  func_0x00010c1cdb20(param_3,param_2,uVar1);
  uVar1 = param_4;
  func_0x00010bf529c0(param_4);
  func_0x00010c1846a0(param_3,param_2,uVar1);
  uVar1 = param_4;
  func_0x00010c2a5660(param_4);
  func_0x00010c2259c0(param_3,param_2,uVar1);
  uVar1 = param_4;
  func_0x00010c26aec0(param_4);
  func_0x00010c212b60(param_3,param_2,uVar1);
  uVar1 = param_4;
  func_0x00010c2a52a0();
  _objc_release(param_4);
  if (uVar1 < 4) {
    uVar2 = *(undefined8 *)(&UNK_10ddc9ca8 + uVar1 * 8);
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  func_0x00010c1db380(param_3,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a38df8; end: 105a38e7f; -[SCSpectaclesLogger logHomeWifiViewOpened:numAddedNetworks:] */

void FUN_105a38df8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1690;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be760c0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c1ce9a0(puVar1,param_2,param_4);
  func_0x00010c2098c0(puVar1,param_2,0);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a38e80; end: 105a38efb; -[SCSpectaclesLogger logHomeWifiShareFlowStarted:isResharingCredentials:] */

void FUN_105a38e80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1698;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be760c0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c1b3ea0(puVar1,param_2,param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a38efc; end: 105a38f77; -[SCSpectaclesLogger logHomeWifiShareFlowShared:isResharingCredentials:] */

void FUN_105a38efc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c16a0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be760c0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c1b3ea0(puVar1,param_2,param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a38f78; end: 105a38ff3; -[SCSpectaclesLogger logHomeWifiShareFlowConnected:isResharingCredentials:] */

void FUN_105a38f78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c16a8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be760c0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c1b3ea0(puVar1,param_2,param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a38ff4; end: 105a39087; -[SCSpectaclesLogger logHomeWifiShareFlowFailed:isResharingCredentials:failureReason:] */

void FUN_105a38ff4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c16b0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be760c0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c1b3ea0(puVar1,param_2,param_4);
  func_0x00010c19a060(puVar1,param_2,param_5);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a39088; end: 105a390f3; -[SCSpectaclesLogger logHomeWifiRemoveNetwork:] */

void FUN_105a39088(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c16b8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be760c0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a390f4; end: 105a3916f; -[SCSpectaclesLogger logHomeWifiUploadUpdate:updateType:] */

void FUN_105a390f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c16c0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be760c0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c21c8e0(puVar1,param_2,param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a39170; end: 105a391db; -[SCSpectaclesLogger logHomeWifiRefreshTokenInvalid:] */

void FUN_105a39170(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c16c8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be760c0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a391dc; end: 105a3937f; -[SCSpectaclesLogger logBoomboxSnapView:lensInfo:entryId:durationSec:fileType:deviceId:firmwareVersion:hardwareVersion:deviceColor:sessionId:viewSource:] */

void FUN_105a391dc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c16d0;
  _objc_retain(param_12);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c181f40();
  _objc_release(param_4);
  func_0x00010c1bbee0(puVar1,param_3,param_5);
  _objc_release(param_5);
  func_0x00010c1968c0(puVar1,param_3,param_6);
  _objc_release(param_6);
  func_0x00010c192ec0((double)(long)(param_1 * 10.0) / 10.0,puVar1);
  func_0x00010c19bba0(puVar1,param_3,param_7);
  func_0x00010c18c9a0(puVar1,param_3,param_8);
  _objc_release(param_8);
  func_0x00010c19cd80(puVar1,param_3,param_9);
  _objc_release(param_9);
  func_0x00010c1a5640(puVar1,param_3,param_10);
  _objc_release(param_10);
  FUN_105a345b0(param_11);
  func_0x00010c19f260(puVar1,param_3,param_11);
  func_0x00010c1d56e0(puVar1,param_3,param_12);
  _objc_release(param_12);
  func_0x00010c222c00(puVar1,param_3,param_13);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x18),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a39380; end: 105a394ef; -[SCSpectaclesLogger logBoomboxStoryView:durationSec:numVideos:numPhotos:deviceId:firmwareVersion:hardwareVersion:deviceColor:sessionId:viewSource:] */

void FUN_105a39380(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c16d8;
  _objc_retain(param_11);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c1968c0();
  _objc_release(param_4);
  func_0x00010c192ec0((double)(long)(param_1 * 10.0) / 10.0,puVar1);
  func_0x00010c1cf700(puVar1,param_3,param_5);
  func_0x00010c1cf200(puVar1,param_3,param_6);
  func_0x00010c18c9a0(puVar1,param_3,param_7);
  _objc_release(param_7);
  func_0x00010c19cd80(puVar1,param_3,param_8);
  _objc_release(param_8);
  func_0x00010c1a5640(puVar1,param_3,param_9);
  _objc_release(param_9);
  FUN_105a345b0(param_10);
  func_0x00010c19f260(puVar1,param_3,param_10);
  func_0x00010c1d56e0(puVar1,param_3,param_11);
  _objc_release(param_11);
  func_0x00010c222c00(puVar1,param_3,param_12);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x18),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a394f0; end: 105a396b7; -[SCSpectaclesLogger _populateGrapheneMetric:pairingSessionInfo:] */

void FUN_105a394f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010bfb0d20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_105a35488();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110e15598,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfd38e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c2ac460(uVar4,param_2,&PTR____CFConstantStringClassReference_110e155b8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010c0f3460();
  if (uVar1 < 5) {
    uVar4 = *(undefined8 *)(&UNK_10ddc9cc8 + uVar1 * 8);
  }
  else {
    uVar4 = 1;
  }
  func_0x00010bb13268(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c2ac460(uVar3,param_2,&PTR____CFConstantStringClassReference_110e18378,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar1 = param_4;
  func_0x00010c0f3460();
  if (uVar1 - 1 < 4) {
    uVar4 = *(undefined8 *)(&UNK_10ddc9cf0 + (uVar1 - 1) * 8);
  }
  else {
    uVar4 = 1;
  }
  func_0x00010bb13190(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c2ac460(uVar5,param_2,&PTR____CFConstantStringClassReference_110e18398,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105a396b8; end: 105a3989b; -[SCSpectaclesLogger _populatePairingEventParameters:pairingSessionInfo:] */

void FUN_105a396b8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_5;
  func_0x00010bfd38e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5640(param_4,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010bfb0d20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19cd80(param_4,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010bf700a0(param_5);
  FUN_105a345b0();
  func_0x00010c19f260(param_4,param_3,uVar2);
  uVar2 = param_5;
  func_0x00010bf70720(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9a0(param_4,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c0f3420(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8d80(param_4,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c0f3460();
  if (uVar2 < 5) {
    uVar3 = *(undefined8 *)(&UNK_10ddc9cc8 + uVar2 * 8);
  }
  else {
    uVar3 = 1;
  }
  func_0x00010c1d8de0(param_4,param_3,uVar3);
  uVar2 = param_5;
  func_0x00010c0f3460();
  if (uVar2 - 1 < 4) {
    uVar3 = *(undefined8 *)(&UNK_10ddc9cf0 + (uVar2 - 1) * 8);
  }
  else {
    uVar3 = 1;
  }
  func_0x00010c1d8dc0(param_4,param_3,uVar3);
  uVar2 = param_5;
  func_0x00010c13f540(param_5);
  func_0x00010c1ed9a0(param_4,param_3,uVar2);
  func_0x00010c15fe40(param_5);
  func_0x00010c192ec0((double)(long)(param_1 * 10.0) / 10.0,param_4);
  uVar2 = param_5;
  func_0x00010bf1cb20();
  if (uVar2 - 1 < 9) {
    uVar3 = *(undefined8 *)(&UNK_10ddc9d10 + (uVar2 - 1) * 8);
  }
  else {
    uVar3 = 2;
  }
  func_0x00010c171940(param_4,param_3,uVar3);
  uVar2 = param_5;
  func_0x00010bf21ac0();
  uVar3 = 5;
  if (uVar2 != 1) {
    uVar3 = 0;
  }
  uVar1 = 6;
  if (uVar2 != 2) {
    uVar1 = uVar3;
  }
  func_0x00010c174100(param_4,param_3,uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a3989c; end: 105a3998b; -[SCSpectaclesLogger logPairingStarted:] */

void FUN_105a3989c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c16e0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75f20(param_1,param_2,puVar1,param_3);
  uVar4 = param_3;
  func_0x00010c0de4e0(param_3);
  func_0x00010c1d6b00(puVar1,param_2,uVar4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
  puVar2 = PTR_PTR_1126c16e8;
  func_0x00010c249420(PTR_PTR_1126c16e8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be75de0(param_1,param_2,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2493c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3998c; end: 105a399f7; -[SCSpectaclesLogger logPairingBleDetected:] */

void FUN_105a3998c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c16f0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75f20(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a399f8; end: 105a39a7b; -[SCSpectaclesLogger logPairingBackupStart:failureReason:] */

void FUN_105a399f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c16f8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75f20(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  FUN_105a39a7c(param_4);
  func_0x00010c19a060(puVar1,param_2,param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a39a7c; end: 105a39a9f;  */

undefined8 FUN_105a39a7c(long param_1)

{
  if (param_1 - 1U < 0xe) {
    return *(undefined8 *)(&UNK_10ddc9d58 + (param_1 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 105a39aa0; end: 105a39b0b; -[SCSpectaclesLogger logPairingBackupDetected:] */

void FUN_105a39aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1700;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75f20(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a39b0c; end: 105a39b77; -[SCSpectaclesLogger logPairingBleConnected:] */

void FUN_105a39b0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1708;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75f20(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a39b78; end: 105a39be3; -[SCSpectaclesLogger logPairingNameDialogDisplayed:] */

void FUN_105a39b78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1710;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75f20(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a39be4; end: 105a39c4f; -[SCSpectaclesLogger logPairingNameChanged:] */

void FUN_105a39be4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1718;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75f20(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a39c50; end: 105a39ccf; -[SCSpectaclesLogger logPairingLocationPermissionEnabled:pairingSessionInfo:] */

void FUN_105a39c50(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR_PTR_1126c1720;
  if (param_3 == 0) {
    ppuVar1 = &PTR_PTR_1126c1728;
  }
  puVar2 = *ppuVar1;
  _objc_retain(param_4);
  _objc_opt_new(puVar2);
  func_0x00010be75f20(param_1,param_2,puVar2,param_4);
  _objc_release(param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a39cd0; end: 105a39d3b; -[SCSpectaclesLogger logPairingTermsOfServiceOpened:] */

void FUN_105a39cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1730;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75f20(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a39d3c; end: 105a39da7; -[SCSpectaclesLogger logPairingTermsOfServiceClosed:] */

void FUN_105a39d3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1738;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75f20(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a39da8; end: 105a39e3b; -[SCSpectaclesLogger logPairingTermsOfServiceAccepted:withIsBIPA:] */

void FUN_105a39da8(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1740;
  if (param_4 != 0) {
    _objc_retain(param_3);
    _objc_opt_new(puVar1);
    func_0x00010c160cc0();
    uVar2 = param_3;
    func_0x00010bfd38e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c1a5640(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105a39e3c; end: 105a39ea7; -[SCSpectaclesLogger logPairingBleSynced:] */

void FUN_105a39e3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1748;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75f20(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a39ea8; end: 105a39ffb; -[SCSpectaclesLogger logPairingSuccessful:] */

void FUN_105a39ea8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c1750;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010be75f20(param_2,param_3,puVar1,param_4);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x18),param_3,puVar1);
  puVar2 = PTR_PTR_1126c16e8;
  func_0x00010c249440(PTR_PTR_1126c16e8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010be75de0(param_2,param_3,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010c2493c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010c2493c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15fe40(param_4);
  func_0x00010befbfe0(uVar4,param_3,lVar3,(long)(param_1 * 1000.0));
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c2493c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c13f540(param_4);
  _objc_release(param_4);
  func_0x00010bef9180(uVar5,param_3,lVar3,uVar4);
  _objc_release(uVar5);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a39ffc; end: 105a3a18b; -[SCSpectaclesLogger logPairingFailure:failureReason:] */

void FUN_105a39ffc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c1758;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010be75f20(param_2,param_3,puVar1,param_4);
  FUN_105a39a7c(param_5);
  func_0x00010c19a060(puVar1,param_3,param_5);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x18),param_3,puVar1);
  puVar2 = PTR_PTR_1126c16e8;
  func_0x00010c2493a0(PTR_PTR_1126c16e8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010be75de0(param_2,param_3,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bb12f68(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2ac460(lVar3,param_3,&PTR____CFConstantStringClassReference_110dbdcd8,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(param_5);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c2493c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c2493c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15fe40(param_4);
  _objc_release(param_4);
  func_0x00010befbfe0(uVar5,param_3,lVar4,(long)(param_1 * 1000.0));
  _objc_release(uVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3a18c; end: 105a3a1f7; -[SCSpectaclesLogger logPairingRetry:] */

void FUN_105a3a18c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1760;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75f20(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3a1f8; end: 105a3a39b; -[SCSpectaclesLogger logPairingCancel:cancellationSource:] */

void FUN_105a3a1f8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c1768;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010be75f20(param_2,param_3,puVar1,param_4);
  if (param_5 - 1U < 7) {
    uVar5 = *(undefined8 *)(&UNK_10ddc9dc8 + (param_5 - 1U) * 8);
  }
  else {
    uVar5 = 5;
  }
  func_0x00010c178240(puVar1,param_3,uVar5);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x18),param_3,puVar1);
  puVar2 = PTR_PTR_1126c16e8;
  func_0x00010c249380(PTR_PTR_1126c16e8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010be75de0(param_2,param_3,puVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bacfcf8(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2ac460(lVar3,param_3,&PTR____CFConstantStringClassReference_110e183b8,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c2493c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c2493c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15fe40(param_4);
  _objc_release(param_4);
  func_0x00010befbfe0(uVar5,param_3,lVar4,(long)(param_1 * 1000.0));
  _objc_release(uVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3a39c; end: 105a3a407; -[SCSpectaclesLogger logPairingInactiveAlertShown:] */

void FUN_105a3a39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1770;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75f20(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3a408; end: 105a3a473; -[SCSpectaclesLogger logPairingInactiveAlertKeepPairingPressed:] */

void FUN_105a3a408(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1778;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75f20(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3a474; end: 105a3a4df; -[SCSpectaclesLogger logPairingInactiveAlertSupportSiteLinkPressed:] */

void FUN_105a3a474(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1780;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75f20(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3a4e0; end: 105a3a51b; -[SCSpectaclesLogger _logPairingBackupDetectedNotificationPressed] */

void FUN_105a3a4e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1788;
  _objc_opt_new(PTR_PTR_1126c1788);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3a51c; end: 105a3a587; -[SCSpectaclesLogger logPairingNeedHelpPressed:] */

void FUN_105a3a51c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1790;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be75f20(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3a588; end: 105a3a61b; -[SCSpectaclesLogger logSpectaclesConnectionStartForPairing:] */

void FUN_105a3a588(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1580;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c15ffa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8d80(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010be75c60(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3a61c; end: 105a3a6af; -[SCSpectaclesLogger logSpectaclesConnectionSuccessForPairing:] */

void FUN_105a3a61c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c1588;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c15ffa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d8d80(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010be75c60(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3a6b0; end: 105a3a75b; -[SCSpectaclesLogger logContentPageLoadCompleteForDevice:numVideos:numPhotos:totalLoadTimeMs:] */

void FUN_105a3a6b0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1798;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010be760c0(param_2,param_3,puVar1,param_4);
  _objc_release(param_4);
  func_0x00010c1ced40(puVar1,param_3,param_6);
  func_0x00010c1cf700(puVar1,param_3,param_5);
  func_0x00010c218580(puVar1,param_3,(long)param_1);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x18),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3a75c; end: 105a3a82b; -[SCSpectaclesLogger logContentPageActionStartForDevice:eventType:numVideos:numPhotos:mediaIds:] */

void FUN_105a3a75c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c17a0;
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be760c0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c197d00(puVar1,param_2,param_4);
  func_0x00010c1c48c0(puVar1,param_2,param_7);
  _objc_release(param_7);
  lVar2 = param_1;
  func_0x00010bebe940(param_1,param_2,param_5,param_6);
  func_0x00010c1c5440(puVar1,param_2,lVar2);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3a82c; end: 105a3a94b; -[SCSpectaclesLogger logContentPageActionCompleteForDevice:eventType:numVideos:numPhotos:mediaIds:isSuccessful:errorMsg:latencyMs:] */

void FUN_105a3a82c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c17a8;
  _objc_retain(param_10);
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010be760c0(param_2,param_3,puVar1,param_4);
  _objc_release(param_4);
  func_0x00010c197d00(puVar1,param_3,param_5);
  func_0x00010c1c48c0(puVar1,param_3,param_8);
  _objc_release(param_8);
  lVar2 = param_2;
  func_0x00010bebe940(param_2,param_3,param_6,param_7);
  func_0x00010c1c5440(puVar1,param_3,lVar2);
  func_0x00010c1b4d60(puVar1,param_3,param_9);
  func_0x00010c197200(puVar1,param_3,param_10);
  _objc_release(param_10);
  func_0x00010c1b92e0(puVar1,param_3,(long)param_1);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x18),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3a94c; end: 105a3a967; -[SCSpectaclesLogger _spectaclesContentPageActionMediaTypeFromVideoCount:imageCount:] */

long FUN_105a3a94c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 1;
  if (param_4 != 0) {
    lVar1 = 2;
  }
  lVar2 = -(ulong)(param_4 == 0);
  if (param_3 != 0) {
    lVar2 = lVar1;
  }
  return lVar2;
}



/* Entry: 105a3a968; end: 105a3aaf3; -[SCSpectaclesLogger logContentPageShareForDevice:contentId:mediaType:createTime:duration:] */

void FUN_105a3a968(float param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c17b0;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  uVar2 = 1;
  if (param_6 < 0xd) {
    if ((1 << (ulong)(param_6 & 0x1f) & 0xa98U) == 0) {
      if (param_6 == 0xc) {
        func_0x00010c1c5440(puVar1,param_3,0);
        uVar3 = 0xd;
        uVar2 = 0x18;
        goto LAB_105a3aa3c;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  func_0x00010c1c5440(puVar1,param_3,uVar2);
  param_6 = param_6 - 3;
  if (param_6 < 10) {
    uVar2 = *(undefined8 *)(&UNK_10ddc9e00 + (ulong)param_6 * 8);
    uVar3 = *(undefined8 *)(&UNK_10ddc9e50 + (ulong)param_6 * 8);
  }
  else {
    uVar3 = 2;
    uVar2 = 5;
  }
LAB_105a3aa3c:
  func_0x00010c1a1ba0(puVar1,param_3,uVar2);
  func_0x00010c1e3cc0(puVar1,param_3,uVar3);
  func_0x00010c205880((double)param_1,puVar1);
  func_0x00010c2075c0(puVar1,param_3,param_5);
  _objc_release(param_5);
  func_0x00010c203d60(puVar1,param_3,param_7);
  _objc_release(param_7);
  func_0x00010c206c40(puVar1,param_3,0x38);
  func_0x00010c176040(puVar1,param_3,2);
  uVar2 = param_4;
  func_0x00010c15e740(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1b7380(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  func_0x00010c0b2e60(*(undefined8 *)(param_2 + 0x18),param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3aaf4; end: 105a3abcb; -[SCSpectaclesLogger logDeviceSecuritySettingsForDevice:settingsSource:settingsActionType:lockOutTime:failureReason:] */

void FUN_105a3aaf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c17b8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010be760c0(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  func_0x00010c1fe580(puVar1,param_2,param_4);
  func_0x00010c1fe460(puVar1,param_2,param_5);
  if (param_6 != 0) {
    lVar2 = param_6;
    func_0x00010c0b4ca0(param_6);
    func_0x00010c1c0020(puVar1,param_2,lVar2);
  }
  func_0x00010c19a060(puVar1,param_2,param_7);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105a3abcc; end: 105a3ac5f; -[SCSpectaclesLogger logStartFlightImuCalibrationForDevice:durationSec:phase:] */

void FUN_105a3abcc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c17c0;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010be760c0(param_2,param_3,puVar1,param_4);
  _objc_release(param_4);
  func_0x00010c192ec0((double)(long)(param_1 * 10.0) / 10.0,puVar1);
  func_0x00010c175700(puVar1,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3ac60; end: 105a3ad17; -[SCSpectaclesLogger logStopFlightImuCalibrationForDevice:durationSec:phase:exitSource:] */

void FUN_105a3ac60(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c17c8;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010be760c0(param_2,param_3,puVar1,param_4);
  _objc_release(param_4);
  if (param_6 != 2) {
    param_6 = (ulong)(param_6 == 1);
  }
  func_0x00010c1756c0(puVar1,param_3,param_6);
  func_0x00010c192ec0((double)(long)(param_1 * 10.0) / 10.0,puVar1);
  func_0x00010c175700(puVar1,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3ad18; end: 105a3ae63; -[SCSpectaclesLogger logKnobsSettingChangeForKnob:] */

void FUN_105a3ad18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126c17d0;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c087200(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be46a20(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c087200(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be46a40(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c065640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar5 = param_1;
  func_0x00010be46a60(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar6 = param_1;
  func_0x00010be46a80(param_1,param_2,lVar3,lVar4,lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe480(puVar1,param_2,lVar6);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3ae64; end: 105a3af5f; -[SCSpectaclesLogger _knobSettingIdStringForKnobIdentifier:] */

void FUN_105a3ae64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105a3af60;
  uStack_30 = 0x105a3af70;
  uStack_28 = 0;
  func_0x00010c0be2c0(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a3af60; end: 105a3af77;  */

void FUN_105a3af60(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105a3af78; end: 105a3affb;  */

void FUN_105a3af78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a3affc; end: 105a3b0f7; -[SCSpectaclesLogger _knobSettingSourceStringForKnobIdentifier:] */

void FUN_105a3affc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105a3af60;
  uStack_30 = 0x105a3af70;
  uStack_28 = 0;
  func_0x00010c0be2c0(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a3b0f8; end: 105a3b12f;  */

void FUN_105a3b0f8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110e17ab8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a3b130; end: 105a3b297; -[SCSpectaclesLogger _knobSettingValueStringForKnobInput:] */

void FUN_105a3b130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_48 = FUN_105a3af60;
  uStack_40 = 0x105a3af70;
  uStack_38 = 0;
  func_0x00010c0c0d80(param_3);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a3b298; end: 105a3b317;  */

void FUN_105a3b298(long param_1,int param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(ppuVar1);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined ***)(lVar3 + 0x28) = ppuVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105a3b318; end: 105a3b423;  */

void FUN_105a3b318(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3b424; end: 105a3b4bf;  */

void FUN_105a3b424(long param_1,undefined8 param_2)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105a3b4c0;
  puStack_20 = &UNK_11084aef8;
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105a3b518;
  puStack_48 = &UNK_1108ceba8;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105a3b5c4;
  puStack_70 = &UNK_1108cebd8;
  uStack_40 = uStack_68;
  uStack_18 = uStack_68;
  func_0x00010c0c0c20(param_2,param_2,&puStack_38,&puStack_60,&puStack_88);
  return;
}



/* Entry: 105a3b4c0; end: 105a3b517;  */

void FUN_105a3b4c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e17af8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105a3b518; end: 105a3b5c3;  */

void FUN_105a3b518(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3b5c4; end: 105a3b66f;  */

void FUN_105a3b5c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a3b670; end: 105a3b7bb; -[SCSpectaclesLogger _knobSettingsActionPayloadJSONStringFromKey:sourceString:value:] */

void FUN_105a3b670(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e03918;
  }
  else {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 105a3b7bc; end: 105a3b7f7; -[SCSpectaclesLogger .cxx_destruct] */

void FUN_105a3b7bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a3b7f8; end: 105a3b843; -[SCSpectaclesTransferInitiationAnalyticsInfo initWithStartSource:deviceState:] */

void FUN_105a3b7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eb628;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
  }
  return;
}



/* Entry: 105a3b844; end: 105a3b84b; -[SCSpectaclesTransferInitiationAnalyticsInfo startSource] */

undefined8 FUN_105a3b844(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a3b84c; end: 105a3b853; -[SCSpectaclesTransferInitiationAnalyticsInfo deviceState] */

undefined8 FUN_105a3b84c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a3b854; end: 105a3b85b; -[SCSpectaclesTransferInitiationAnalyticsInfo initiatedTransfer] */

undefined1 FUN_105a3b854(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105a3b85c; end: 105a3b863; -[SCSpectaclesTransferInitiationAnalyticsInfo setInitiatedTransfer:] */

void FUN_105a3b85c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105a3b864; end: 105a3b86b; -[SCSpectaclesTransferInitiationAnalyticsInfo transferChannel] */

undefined8 FUN_105a3b864(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a3b86c; end: 105a3b89b; -[SCSpectaclesTransferInitiationAnalyticsInfo setTransferChannel:] */

void FUN_105a3b86c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a3b89c; end: 105a3b8a3; -[SCSpectaclesTransferInitiationAnalyticsInfo isPhoneStorageFull] */

undefined8 FUN_105a3b89c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105a3b8a4; end: 105a3b8d3; -[SCSpectaclesTransferInitiationAnalyticsInfo setIsPhoneStorageFull:] */

void FUN_105a3b8a4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a3b8d4; end: 105a3b8db; -[SCSpectaclesTransferInitiationAnalyticsInfo isGetHdSnapCountThresholdExceeded] */

undefined8 FUN_105a3b8d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105a3b8dc; end: 105a3b90b; -[SCSpectaclesTransferInitiationAnalyticsInfo setIsGetHdSnapCountThresholdExceeded:] */

void FUN_105a3b8dc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a3b90c; end: 105a3b913; -[SCSpectaclesTransferInitiationAnalyticsInfo appStateGo] */

undefined8 FUN_105a3b90c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105a3b914; end: 105a3b943; -[SCSpectaclesTransferInitiationAnalyticsInfo setAppStateGo:] */

void FUN_105a3b914(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a3b944; end: 105a3b94b; -[SCSpectaclesTransferInitiationAnalyticsInfo iOSVersionGo] */

undefined8 FUN_105a3b944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105a3b94c; end: 105a3b97b; -[SCSpectaclesTransferInitiationAnalyticsInfo setIOSVersionGo:] */

void FUN_105a3b94c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a3b97c; end: 105a3b983; -[SCSpectaclesTransferInitiationAnalyticsInfo notConnectedToOtherWifiGo] */

undefined8 FUN_105a3b97c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105a3b984; end: 105a3b9b3; -[SCSpectaclesTransferInitiationAnalyticsInfo setNotConnectedToOtherWifiGo:] */

void FUN_105a3b984(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a3b9b4; end: 105a3b9bb; -[SCSpectaclesTransferInitiationAnalyticsInfo phoneOrientationGo] */

undefined8 FUN_105a3b9b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 105a3b9bc; end: 105a3b9eb; -[SCSpectaclesTransferInitiationAnalyticsInfo setPhoneOrientationGo:] */

void FUN_105a3b9bc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a3b9ec; end: 105a3b9f3; -[SCSpectaclesTransferInitiationAnalyticsInfo powerModeGo] */

undefined8 FUN_105a3b9ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105a3b9f4; end: 105a3ba23; -[SCSpectaclesTransferInitiationAnalyticsInfo setPowerModeGo:] */

void FUN_105a3b9f4(long param_1,undefined8 param_2,undefined8 param_3)

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


