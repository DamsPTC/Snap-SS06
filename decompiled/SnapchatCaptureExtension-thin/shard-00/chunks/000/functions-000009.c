/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10003a7b0; end: 10003a833; -[SCMainQueuePerformerImpl perform:after:] */

void FUN_10003a7b0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain_x19();
  uVar2 = 0;
  _dispatch_time(0,(long)(param_1 * 1000000000.0));
  uVar1 = *(undefined8 *)(param_2 + 8);
  _SCMainThreadTracingBlock(param_4,*(undefined8 *)(param_2 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x19();
  _dispatch_after(uVar2,uVar1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_4);
  return;
}



/* Entry: 10003a834; end: 10003a89b; -[SCMainQueuePerformerImpl performAndWait:] */

void FUN_10003a834(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _SCMainThreadTracingBlock(param_3,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010003c500();
  if ((int)lVar1 == 0) {
    _dispatch_sync(*(undefined8 *)(param_1 + 8),param_3);
  }
  else {
    (**(code **)(param_3 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_3);
  return;
}



/* Entry: 10003a89c; end: 10003a8a7; -[SCMainQueuePerformerImpl isCurrentPerformer] */

void FUN_10003a89c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003c5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000508a0)
            (PTR__OBJC_CLASS___NSThread_100050320,PTR_s_isMainThread_10005b638);
  return;
}



/* Entry: 10003a8a8; end: 10003a8cb; -[SCMainQueuePerformerImpl queue] */

void FUN_10003a8a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain_x19();
                    /* WARNING: Could not recover jumptable at 0x00010003b29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100050890)(uVar1);
  return;
}



/* Entry: 10003a8cc; end: 10003a8cf; -[SCMainQueuePerformerImpl assertQueue] */

void FUN_10003a8cc(void)

{
  return;
}



/* Entry: 10003a8d0; end: 10003a8d3; -[SCMainQueuePerformerImpl assertNotQueue] */

void FUN_10003a8d0(void)

{
  return;
}



/* Entry: 10003a8d4; end: 10003a91f; -[SCMainQueuePerformerImpl performWithBarrier:] */

void FUN_10003a8d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _SCMainThreadTracingBlock(param_3,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c820(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_3);
  return;
}



/* Entry: 10003a920; end: 10003a987; -[SCMainQueuePerformerImpl performOnGroupNotification_DEPRECATED:block:] */

void FUN_10003a920(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain_x20();
  _SCMainThreadTracingBlock(param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _dispatch_group_notify(param_3,uVar1,param_4);
  _objc_release_x20();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_4);
  return;
}



/* Entry: 10003a988; end: 10003a993; -[SCMainQueuePerformerImpl .cxx_destruct] */

void FUN_10003a988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003b428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000509a0)(param_1 + 8,0);
  return;
}


