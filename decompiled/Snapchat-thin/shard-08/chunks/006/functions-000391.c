/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062e2be4; end: 1062e2daf; -[SCAdUnifiedEventObservableBusImpl _mergeWebviewEventStreamsWithPlugins:] */

void FUN_1062e2be4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bfb2040(param_3,param_2,&PTR___NSConcreteGlobalBlock_11091b5f8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    lVar1 = param_3;
    func_0x00010bef64a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6afe0(uVar2,param_2,lVar1,*(undefined8 *)(param_1 + 8));
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    lVar1 = param_3;
    func_0x00010bef6680(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6afe0(uVar2,param_2,lVar1,*(undefined8 *)(param_1 + 8));
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    lVar1 = param_3;
    func_0x00010bef6480(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6afe0(uVar2,param_2,lVar1,*(undefined8 *)(param_1 + 8));
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    lVar1 = param_3;
    func_0x00010bef6560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6afe0(uVar2,param_2,lVar1,*(undefined8 *)(param_1 + 8));
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    lVar1 = param_3;
    func_0x00010bef65c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6afe0(uVar2,param_2,lVar1,*(undefined8 *)(param_1 + 8));
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    lVar1 = param_3;
    func_0x00010bef6520(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6afe0(uVar2,param_2,lVar1,*(undefined8 *)(param_1 + 8));
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    lVar1 = param_3;
    func_0x00010bef6600(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6afe0(uVar2,param_2,lVar1,*(undefined8 *)(param_1 + 8));
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    lVar1 = param_3;
    func_0x00010bef6500(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6afe0(uVar2,param_2,lVar1,*(undefined8 *)(param_1 + 8));
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e2db0; end: 1062e2dcf;  */

bool FUN_1062e2db0(undefined8 param_1,long param_2)

{
  func_0x00010c25ca20(param_2);
  return param_2 == 2;
}



/* Entry: 1062e2dd0; end: 1062e2e3f; -[SCAdUnifiedEventObservableBusImpl _mergeSubscribeEventV2StreamsWithPlugins:] */

void FUN_1062e2dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11091b618);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6afe0(*(undefined8 *)(param_1 + 0xc0));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e2e40; end: 1062e2e9b;  */

void FUN_1062e2e40(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c25ca20();
  if (lVar1 == 2) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x00010bef5740(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1062e2e9c; end: 1062e2f0b; -[SCAdUnifiedEventObservableBusImpl _mergeAdReportEventV2StreamsWithPlugins:] */

void FUN_1062e2e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11091b638);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6afe0(*(undefined8 *)(param_1 + 0xa8));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e2f0c; end: 1062e2f67;  */

void FUN_1062e2f0c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c25ca20();
  if (lVar1 == 2) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x00010bef4480(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1062e2f68; end: 1062e2fd7; -[SCAdUnifiedEventObservableBusImpl _mergeAdReminderEventV2StreamsWithPlugins:] */

void FUN_1062e2f68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11091b658);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6afe0(*(undefined8 *)(param_1 + 0xb0));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e2fd8; end: 1062e3033;  */

void FUN_1062e2fd8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c25ca20();
  if (lVar1 == 2) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x00010bef4340(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1062e3034; end: 1062e30a3; -[SCAdUnifiedEventObservableBusImpl _mergeAdStickersEventV2StreamsWithPlugins:] */

void FUN_1062e3034(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11091b678);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6afe0(*(undefined8 *)(param_1 + 0xb8));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e30a4; end: 1062e30ff;  */

void FUN_1062e30a4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c25ca20();
  if (lVar1 == 2) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x00010bef5700(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1062e3100; end: 1062e316f; -[SCAdUnifiedEventObservableBusImpl _mergeAdCaptionCtaImpressionEventStreamsWithPlugins:] */

void FUN_1062e3100(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11091b698);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6afe0(*(undefined8 *)(param_1 + 0xd0));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e3170; end: 1062e31df;  */

void FUN_1062e3170(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25ca20();
  if ((uVar1 == 2) ||
     (uVar1 = param_2,
     _objc_opt_respondsToSelector(param_2,PTR_s_adCaptionCtaImpressionEventObser_11259a240),
     (uVar1 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010bef2260(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e31e0; end: 1062e324f; -[SCAdUnifiedEventObservableBusImpl _mergeAdLiveReviewEventStreamsWithPlugins:] */

void FUN_1062e31e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11091b6b8);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6afe0(*(undefined8 *)(param_1 + 0xd8));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e3250; end: 1062e32bf;  */

void FUN_1062e3250(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25ca20();
  if ((uVar1 == 2) ||
     (uVar1 = param_2,
     _objc_opt_respondsToSelector(param_2,PTR_s_adLiveReviewEventObservable_11259a6d0),
     (uVar1 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010bef34a0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e32c0; end: 1062e332f; -[SCAdUnifiedEventObservableBusImpl _mergeModularLensEventStreamsWithPlugins:] */

void FUN_1062e32c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11091b6d8);
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0cab40(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6afe0(*(undefined8 *)(param_1 + 200));
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e3330; end: 1062e339f;  */

void FUN_1062e3330(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25ca20();
  if ((uVar1 == 2) ||
     (uVar1 = param_2,
     _objc_opt_respondsToSelector(param_2,PTR_s_adModularLensEventObservable_11259a7b0),
     (uVar1 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010bef3820(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e33a0; end: 1062e33a7; -[SCAdUnifiedEventObservableBusImpl adLifecycleEventSubject] */

undefined8 FUN_1062e33a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1062e33a8; end: 1062e33d7; -[SCAdUnifiedEventObservableBusImpl setAdLifecycleEventSubject:] */

void FUN_1062e33a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062e33d8; end: 1062e33df; -[SCAdUnifiedEventObservableBusImpl adInteractionEventSubject] */

undefined8 FUN_1062e33d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1062e33e0; end: 1062e340f; -[SCAdUnifiedEventObservableBusImpl setAdInteractionEventSubject:] */

void FUN_1062e33e0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1062e3410; end: 1062e3417; -[SCAdUnifiedEventObservableBusImpl adLifecycleEventSubjectV2] */

undefined8 FUN_1062e3410(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1062e3418; end: 1062e3447; -[SCAdUnifiedEventObservableBusImpl setAdLifecycleEventSubjectV2:] */

void FUN_1062e3418(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1062e3448; end: 1062e344f; -[SCAdUnifiedEventObservableBusImpl adWebviewConfigEventSubject] */

undefined8 FUN_1062e3448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1062e3450; end: 1062e347f; -[SCAdUnifiedEventObservableBusImpl setAdWebviewConfigEventSubject:] */

void FUN_1062e3450(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1062e3480; end: 1062e3487; -[SCAdUnifiedEventObservableBusImpl adWebviewUserEventSubjectV2] */

undefined8 FUN_1062e3480(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1062e3488; end: 1062e34b7; -[SCAdUnifiedEventObservableBusImpl setAdWebviewUserEventSubjectV2:] */

void FUN_1062e3488(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1062e34b8; end: 1062e34bf; -[SCAdUnifiedEventObservableBusImpl adWebviewAsmEventSubject] */

undefined8 FUN_1062e34b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1062e34c0; end: 1062e34ef; -[SCAdUnifiedEventObservableBusImpl setAdWebviewAsmEventSubject:] */

void FUN_1062e34c0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1062e34f0; end: 1062e34f7; -[SCAdUnifiedEventObservableBusImpl adWebviewLoadingEventSubject] */

undefined8 FUN_1062e34f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1062e34f8; end: 1062e34ff; -[SCAdUnifiedEventObservableBusImpl adWebviewNavigationEventSubject] */

undefined8 FUN_1062e34f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1062e3500; end: 1062e352f; -[SCAdUnifiedEventObservableBusImpl setAdWebviewNavigationEventSubject:] */

void FUN_1062e3500(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1062e3530; end: 1062e3537; -[SCAdUnifiedEventObservableBusImpl adWebviewGaEventSubject] */

undefined8 FUN_1062e3530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1062e3538; end: 1062e353f; -[SCAdUnifiedEventObservableBusImpl adWebviewOperationEventSubject] */

undefined8 FUN_1062e3538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1062e3540; end: 1062e3547; -[SCAdUnifiedEventObservableBusImpl adWebviewEventSubject] */

undefined8 FUN_1062e3540(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1062e3548; end: 1062e3577; -[SCAdUnifiedEventObservableBusImpl setAdWebviewEventSubject:] */

void FUN_1062e3548(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1062e3578; end: 1062e357f; -[SCAdUnifiedEventObservableBusImpl adAppInstallEventSubject] */

undefined8 FUN_1062e3578(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1062e3580; end: 1062e35af; -[SCAdUnifiedEventObservableBusImpl setAdAppInstallEventSubject:] */

void FUN_1062e3580(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062e35b0; end: 1062e35b7; -[SCAdUnifiedEventObservableBusImpl adAppInstallEventSubjectV2] */

undefined8 FUN_1062e35b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1062e35b8; end: 1062e35e7; -[SCAdUnifiedEventObservableBusImpl setAdAppInstallEventSubjectV2:] */

void FUN_1062e35b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062e35e8; end: 1062e35ef; -[SCAdUnifiedEventObservableBusImpl adAdToMessageEventSubject] */

undefined8 FUN_1062e35e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1062e35f0; end: 1062e361f; -[SCAdUnifiedEventObservableBusImpl setAdAdToMessageEventSubject:] */

void FUN_1062e35f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062e3620; end: 1062e3627; -[SCAdUnifiedEventObservableBusImpl adAdToMessageEventSubjectV2] */

undefined8 FUN_1062e3620(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1062e3628; end: 1062e3657; -[SCAdUnifiedEventObservableBusImpl setAdAdToMessageEventSubjectV2:] */

void FUN_1062e3628(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062e3658; end: 1062e365f; -[SCAdUnifiedEventObservableBusImpl adDeepLinkEventSubject] */

undefined8 FUN_1062e3658(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1062e3660; end: 1062e368f; -[SCAdUnifiedEventObservableBusImpl setAdDeepLinkEventSubject:] */

void FUN_1062e3660(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062e3690; end: 1062e3697; -[SCAdUnifiedEventObservableBusImpl adDeepLinkEventSubjectV2] */

undefined8 FUN_1062e3690(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1062e3698; end: 1062e36c7; -[SCAdUnifiedEventObservableBusImpl setAdDeepLinkEventSubjectV2:] */

void FUN_1062e3698(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062e36c8; end: 1062e36cf; -[SCAdUnifiedEventObservableBusImpl adReportEventSubject] */

undefined8 FUN_1062e36c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1062e36d0; end: 1062e36ff; -[SCAdUnifiedEventObservableBusImpl setAdReportEventSubject:] */

void FUN_1062e36d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062e3700; end: 1062e3707; -[SCAdUnifiedEventObservableBusImpl adReportEventSubjectV2] */

undefined8 FUN_1062e3700(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 1062e3708; end: 1062e3737; -[SCAdUnifiedEventObservableBusImpl setAdReportEventSubjectV2:] */

void FUN_1062e3708(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062e3738; end: 1062e373f; -[SCAdUnifiedEventObservableBusImpl reminderEventSubjectV2] */

undefined8 FUN_1062e3738(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1062e3740; end: 1062e376f; -[SCAdUnifiedEventObservableBusImpl setReminderEventSubjectV2:] */

void FUN_1062e3740(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062e3770; end: 1062e3777; -[SCAdUnifiedEventObservableBusImpl stickersEventSubjectV2] */

undefined8 FUN_1062e3770(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 1062e3778; end: 1062e37a7; -[SCAdUnifiedEventObservableBusImpl setStickersEventSubjectV2:] */

void FUN_1062e3778(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062e37a8; end: 1062e37af; -[SCAdUnifiedEventObservableBusImpl adSubscribeEventSubjectV2] */

undefined8 FUN_1062e37a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 1062e37b0; end: 1062e37df; -[SCAdUnifiedEventObservableBusImpl setAdSubscribeEventSubjectV2:] */

void FUN_1062e37b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062e37e0; end: 1062e37e7; -[SCAdUnifiedEventObservableBusImpl adModularLensEventSubject] */

undefined8 FUN_1062e37e0(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 1062e37e8; end: 1062e3817; -[SCAdUnifiedEventObservableBusImpl setAdModularLensEventSubject:] */

void FUN_1062e37e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062e3818; end: 1062e381f; -[SCAdUnifiedEventObservableBusImpl captionCtaImpressionEventSubjectV2] */

undefined8 FUN_1062e3818(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 1062e3820; end: 1062e384f; -[SCAdUnifiedEventObservableBusImpl setCaptionCtaImpressionEventSubjectV2:] */

void FUN_1062e3820(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062e3850; end: 1062e3857; -[SCAdUnifiedEventObservableBusImpl liveReviewEventSubjectV2] */

undefined8 FUN_1062e3850(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 1062e3858; end: 1062e3887; -[SCAdUnifiedEventObservableBusImpl setLiveReviewEventSubjectV2:] */

void FUN_1062e3858(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062e3888; end: 1062e39e3; -[SCAdUnifiedEventObservableBusImpl .cxx_destruct] */

void FUN_1062e3888(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
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



/* Entry: 1062e39e4; end: 1062e3ad3; -[SCSubject delayedSubscribeOn:subscription:] */

void FUN_1062e39e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062e3ad4; end: 1062e3b1b;  */

void FUN_1062e3ad4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a660();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062e3b1c; end: 1062e3b1f; -[SCSubject _onNextVal:] */

void FUN_1062e3b1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_next__112614028);
  return;
}



/* Entry: 1062e3b20; end: 1062e3b87; +[SCCountdownsCreateCountdownRequest descriptor] */

void FUN_1062e3b20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c36f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ada560,
                        &PTR____CFConstantStringClassReference_110e49778,&PTR_DAT_11314a318,
                        &PTR_DAT_11314a5b0,3,0x20,0x1c);
    puRam00000001136c36f0 = puVar1;
  }
  return;
}



/* Entry: 1062e3b88; end: 1062e3bef; +[SCCountdownsCreateCountdownResponse descriptor] */

void FUN_1062e3b88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c36f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ada5b0,
                        &PTR____CFConstantStringClassReference_110e49798,&PTR_DAT_11314a318,
                        &PTR_s_countdownId_11314a330,1,0x10,0x1c);
    puRam00000001136c36f8 = puVar1;
  }
  return;
}



/* Entry: 1062e3bf0; end: 1062e3c57; +[SCCountdownsUpdateCountdownRequest descriptor] */

void FUN_1062e3bf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3700 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ada600,
                        &PTR____CFConstantStringClassReference_110e497b8,&PTR_DAT_11314a318,
                        &PTR_s_creatorId_11314a610,3,0x20,0x1c);
    puRam00000001136c3700 = puVar1;
  }
  return;
}



/* Entry: 1062e3c58; end: 1062e3cbf; +[SCCountdownsUpdateCountdownInfo descriptor] */

void FUN_1062e3c58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3708 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ada650,
                        &PTR____CFConstantStringClassReference_110e497d8,&PTR_DAT_11314a318,
                        &PTR_DAT_11314a670,3,0x20,0x1c);
    puRam00000001136c3708 = puVar1;
  }
  return;
}



/* Entry: 1062e3cc0; end: 1062e3d27; +[SCCountdownsUpdateCountdownResponse descriptor] */

void FUN_1062e3cc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3710 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ada6a0,
                        &PTR____CFConstantStringClassReference_110e497f8,&PTR_DAT_11314a318,
                        &PTR_s_countdownId_11314a350,1,0x10,0x1c);
    puRam00000001136c3710 = puVar1;
  }
  return;
}



/* Entry: 1062e3d28; end: 1062e3d8f; +[SCCountdownsDeleteCountdownRequest descriptor] */

void FUN_1062e3d28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3718 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ada6f0,
                        &PTR____CFConstantStringClassReference_110e49818,&PTR_DAT_11314a318,
                        &PTR_s_creatorId_11314a4b0,2,0x18,0x1c);
    puRam00000001136c3718 = puVar1;
  }
  return;
}



/* Entry: 1062e3d90; end: 1062e3df7; +[SCCountdownsDeleteCountdownResponse descriptor] */

void FUN_1062e3d90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3720 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ada740,
                        &PTR____CFConstantStringClassReference_110e49838,&PTR_DAT_11314a318,
                        &PTR_s_countdownId_11314a370,1,0x10,0x1c);
    puRam00000001136c3720 = puVar1;
  }
  return;
}



/* Entry: 1062e3df8; end: 1062e3e5f; +[SCCountdownsGetCountdownsRequest descriptor] */

void FUN_1062e3df8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3728 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ada790,
                        &PTR____CFConstantStringClassReference_110e49858,&PTR_DAT_11314a318,
                        &PTR_s_userId_11314a390,1,0x10,0x1c);
    puRam00000001136c3728 = puVar1;
  }
  return;
}



/* Entry: 1062e3e60; end: 1062e3ec7; +[SCCountdownsGetCountdownsResponse descriptor] */

void FUN_1062e3e60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3730 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ada7e0,
                        &PTR____CFConstantStringClassReference_110e49878,&PTR_DAT_11314a318,
                        &PTR_DAT_11314a3b0,1,0x10,0x1c);
    puRam00000001136c3730 = puVar1;
  }
  return;
}



/* Entry: 1062e3ec8; end: 1062e3f2f; +[SCCountdownsGetSharedCountdownsRequest descriptor] */

void FUN_1062e3ec8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3738 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ada830,
                        &PTR____CFConstantStringClassReference_110e49898,&PTR_DAT_11314a318,
                        &PTR_DAT_11314a4f0,2,0x18,0x1c);
    puRam00000001136c3738 = puVar1;
  }
  return;
}



/* Entry: 1062e3f30; end: 1062e3f97; +[SCCountdownsGetSharedCountdownsResponse descriptor] */

void FUN_1062e3f30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3740 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ada880,
                        &PTR____CFConstantStringClassReference_110e498b8,&PTR_DAT_11314a318,
                        &PTR_DAT_11314a3d0,1,0x10,0x1c);
    puRam00000001136c3740 = puVar1;
  }
  return;
}



/* Entry: 1062e3f98; end: 1062e3fff; +[SCCountdownsGetCountdownByIDRequest descriptor] */

void FUN_1062e3f98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ada8d0,
                        &PTR____CFConstantStringClassReference_110e498d8,&PTR_DAT_11314a318,
                        &PTR_s_countdownId_11314a3f0,1,0x10,0x1c);
    puRam00000001136c3748 = puVar1;
  }
  return;
}



/* Entry: 1062e4000; end: 1062e4067; +[SCCountdownsGetCountdownByIDResponse descriptor] */

void FUN_1062e4000(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3750 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ada920,
                        &PTR____CFConstantStringClassReference_110e498f8,&PTR_DAT_11314a318,
                        &PTR_DAT_11314a410,1,0x10,0x1c);
    puRam00000001136c3750 = puVar1;
  }
  return;
}



/* Entry: 1062e4068; end: 1062e40cf; +[SCCountdownsGetClosestUpcomingCountdownRequest descriptor] */

void FUN_1062e4068(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3758 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ada970,
                        &PTR____CFConstantStringClassReference_110e49918,&PTR_DAT_11314a318,
                        &PTR_s_userId_11314a430,1,0x10,0x1c);
    puRam00000001136c3758 = puVar1;
  }
  return;
}



/* Entry: 1062e40d0; end: 1062e4137; +[SCCountdownsGetClosestUpcomingCountdownResponse descriptor] */

void FUN_1062e40d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3760 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ada9c0,
                        &PTR____CFConstantStringClassReference_110e49938,&PTR_DAT_11314a318,
                        &PTR_DAT_11314a530,2,0x18,0x1c);
    puRam00000001136c3760 = puVar1;
  }
  return;
}



/* Entry: 1062e4138; end: 1062e419f; +[SCCountdownsLeaveCountdownRequest descriptor] */

void FUN_1062e4138(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3768 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112adaa10,
                        &PTR____CFConstantStringClassReference_110e49958,&PTR_DAT_11314a318,
                        &PTR_s_userId_11314a570,2,0x18,0x1c);
    puRam00000001136c3768 = puVar1;
  }
  return;
}



/* Entry: 1062e41a0; end: 1062e4207; +[SCCountdownsLeaveCountdownResponse descriptor] */

void FUN_1062e41a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3770 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112adaa60,
                        &PTR____CFConstantStringClassReference_110e49978,&PTR_DAT_11314a318,
                        &PTR_s_countdownId_11314a450,1,0x10,0x1c);
    puRam00000001136c3770 = puVar1;
  }
  return;
}



/* Entry: 1062e4208; end: 1062e426f; +[SCCountdownsGetCountdownDetailRequest descriptor] */

void FUN_1062e4208(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3778 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112adaab0,
                        &PTR____CFConstantStringClassReference_110e49998,&PTR_DAT_11314a318,
                        &PTR_s_countdownId_11314a470,1,0x10,0x1c);
    puRam00000001136c3778 = puVar1;
  }
  return;
}



/* Entry: 1062e4270; end: 1062e42d7; +[SCCountdownsGetCountdownDetailResponse descriptor] */

void FUN_1062e4270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3780 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112adab00,
                        &PTR____CFConstantStringClassReference_110e499b8,&PTR_DAT_11314a318,
                        &PTR_DAT_11314a490,1,0x10,0x1c);
    puRam00000001136c3780 = puVar1;
  }
  return;
}



/* Entry: 1062e42d8; end: 1062e43a7; -[SCOperaMediaAssetDataSource initWithAssetRepository:] */

undefined1 * FUN_1062e42d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f0dc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1062e43a8; end: 1062e43ab; -[SCOperaMediaAssetDataSource assetWithKey:] */

void FUN_1062e43a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becb8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__threadSafeGetAssetWithKey__1125907e0);
  return;
}



/* Entry: 1062e43ac; end: 1062e44af; -[SCOperaMediaAssetDataSource assetObservableWithKey:] */

void FUN_1062e43ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010becb8e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = *(undefined **)(param_1 + 0x18);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1062e44b0;
    puStack_40 = &UNK_11091b6f8;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010bfad7a0(puVar3,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uStack_38);
  }
  else {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062e44b0; end: 1062e44f7;  */

undefined8 FUN_1062e44b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bfb0d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1062e44f8; end: 1062e44ff;  */

void FUN_1062e44f8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c154b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_second_112632cf8);
  return;
}



/* Entry: 1062e4500; end: 1062e459f; -[SCOperaMediaAssetDataSource cacheAsset:withKey:] */

void FUN_1062e4500(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010becb900(param_1,param_2,param_4);
  func_0x00010becb940(param_1,param_2,param_3,param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126b60f8;
  _objc_alloc(PTR_PTR_1126b60f8);
  func_0x00010c0134e0();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1062e45a0; end: 1062e45eb; -[SCOperaMediaAssetDataSource removeAssetWithKey:] */

void FUN_1062e45a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010becb900(param_1,param_2,param_3);
  func_0x00010becb920(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e45ec; end: 1062e47d3; -[SCOperaMediaAssetDataSource removeAllAssets] */

void FUN_1062e45ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [136];
  long lStack_58;
  
  puVar5 = &uStack_150;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _os_unfair_lock_lock(param_1 + 0x20);
  _objc_initWeak(auStack_e0,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1062e47d4;
  puStack_f0 = &UNK_11091b768;
  puVar4 = auStack_e0;
  _objc_copyWeak(auStack_e8,puVar4);
  func_0x00010bf97ce0(uVar6);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_e0);
  _os_unfair_lock_unlock(param_1 + 0x20);
  lVar1 = param_1 + 0x24;
  _os_unfair_lock_lock(lVar1);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_140;
    do {
      lVar8 = 0;
      do {
        if (*plStack_140 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010bf86d40(*(undefined8 *)(lStack_148 + lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      puVar5 = &uStack_150;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x28));
  lVar3 = lVar1;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(lVar1);
  __Unwind_Resume(lVar3);
  _objc_retain(puVar5);
  _objc_retain(puVar4);
  lVar3 = lVar3 + 0x20;
  _objc_loadWeakRetained(lVar3);
  func_0x00010be8a380();
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1062e47d4; end: 1062e483b;  */

void FUN_1062e47d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be8a380();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062e483c; end: 1062e490b; -[SCOperaMediaAssetDataSource removeAllAssetsAssociatedWithMediaBundle:] */

void FUN_1062e483c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010c0c4280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = param_3;
  func_0x00010bf26800(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b300(param_1,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf26880();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12b300(param_1,param_2,lVar1);
  }
  lVar2 = param_3;
  func_0x00010bf268a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010c12b300(param_1,param_2,lVar2);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e490c; end: 1062e494f; -[SCOperaMediaAssetDataSource videoAssetForKey:] */

void FUN_1062e490c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0b9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c299160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e4950; end: 1062e499f; -[SCOperaMediaAssetDataSource videoAssetFutureForKey:] */

void FUN_1062e4950(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c2991c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062e49a0; end: 1062e4a3f; -[SCOperaMediaAssetDataSource resetVideoAssetForKey:] */

void FUN_1062e49a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  _objc_opt_class(param_1);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c0be4e0(lVar1,param_2,&PTR___NSConcreteGlobalBlock_11091b798,
                        &PTR___NSConcreteGlobalBlock_11091b7d8);
  }
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e4a40; end: 1062e4a4b;  */

void FUN_1062e4a40(void)

{
  return;
}


