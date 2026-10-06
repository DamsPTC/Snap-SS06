/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108cb3960; end: 108cb39ef; -[SCPreviewWorkflowDelegateProxy didDetachMusicEditor] */

void FUN_108cb3960(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf748e0();
    _objc_release(lVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = PTR_PTR_1126db9b0;
  func_0x00010bf748e0(PTR_PTR_1126db9b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 108cb39f0; end: 108cb39f7; -[SCPreviewWorkflowDelegateProxy previewWorkflowEventObservable] */

undefined8 FUN_108cb39f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cb39f8; end: 108cb3a23; -[SCPreviewWorkflowDelegateProxy .cxx_destruct] */

void FUN_108cb39f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 108cb3a24; end: 108cb3a6f; +[SCPreviewSendFlowEvent didCancel] */

void FUN_108cb3a24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c3400;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb3a70; end: 108cb3ae3; +[SCPreviewSendFlowEvent didDismissSendToWithSelectedItems:dismissSource:] */

void FUN_108cb3a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c3400;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  uVar3 = *(undefined8 *)(puVar2 + 0x120);
  *(undefined8 *)(puVar2 + 0x120) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x128) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb3ae4; end: 108cb3c07; +[SCPreviewSendFlowEvent didFinishLoadingWithUiContainer:previewSendToParams:previewLogging:mediaHandler:sendDependentTasksHandler:] */

void FUN_108cb3ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c3400;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb3c08; end: 108cb3cfb; +[SCPreviewSendFlowEvent didPresentSendToWithEphemeralMediaList:previewSendToParams:uiContainer:fullMediaContentBounds:] */

void FUN_108cb3c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126c3400;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_9;
  _objc_release(uVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  *(undefined8 *)(puVar2 + 0x50) = param_1;
  *(undefined8 *)(puVar2 + 0x58) = param_2;
  *(undefined8 *)(puVar2 + 0x60) = param_3;
  *(undefined8 *)(puVar2 + 0x68) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb3cfc; end: 108cb3de3; +[SCPreviewSendFlowEvent didPressQuickPostWithLongPressed:fromMemories:infoStickerFeature:ephemeralMediaList:fullMediaContentBounds:isMusicSnap:] */

void FUN_108cb3cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126c3400;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  puVar2[0x99] = param_7;
  puVar2[0x9a] = param_8;
  uVar3 = *(undefined8 *)(puVar2 + 0xa0);
  *(undefined8 *)(puVar2 + 0xa0) = param_9;
  _objc_retain(param_9);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xa8);
  *(undefined8 *)(puVar2 + 0xa8) = param_10;
  _objc_release(uVar3);
  _objc_release(param_9);
  *(undefined8 *)(puVar2 + 0xb0) = param_1;
  *(undefined8 *)(puVar2 + 0xb8) = param_2;
  *(undefined8 *)(puVar2 + 0xc0) = param_3;
  *(undefined8 *)(puVar2 + 200) = param_4;
  puVar2[0xd0] = param_11;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb3de4; end: 108cb3edf; +[SCPreviewSendFlowEvent didPressSendWithEphemeralMediaList:selectionItems:selectedTopics:fullMediaContentBounds:isFromQuickPost:] */

void FUN_108cb3de4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126c3400;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0xe0);
  *(undefined8 *)(puVar2 + 0xe0) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xe8);
  *(undefined8 *)(puVar2 + 0xe8) = param_8;
  _objc_retain(param_8);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0xf0);
  *(undefined8 *)(puVar2 + 0xf0) = param_9;
  _objc_release(uVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  *(undefined8 *)(puVar2 + 0xf8) = param_1;
  *(undefined8 *)(puVar2 + 0x100) = param_2;
  *(undefined8 *)(puVar2 + 0x108) = param_3;
  *(undefined8 *)(puVar2 + 0x110) = param_4;
  puVar2[0x118] = param_10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb3ee0; end: 108cb4013; +[SCPreviewSendFlowEvent preloadQuickPostWithViewController:uiContainer:topicsCollection:delegate:dataSource:isMusicSnap:] */

void FUN_108cb3ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c3400;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x78) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x80);
  *(undefined8 *)(puVar2 + 0x80) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x88);
  *(undefined8 *)(puVar2 + 0x88) = param_6;
  _objc_retain(param_6);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x90);
  *(undefined8 *)(puVar2 + 0x90) = param_7;
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2[0x98] = param_8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb4014; end: 108cb407f; +[SCPreviewSendFlowEvent sendFromQuickPostWithSenderData:] */

void FUN_108cb4014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c3400;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0xd8);
  *(undefined8 *)(puVar2 + 0xd8) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb4080; end: 108cb40a3; -[SCPreviewSendFlowEvent copyWithZone:] */

undefined8 FUN_108cb4080(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108cb40a4; end: 108cb40e7; -[SCPreviewSendFlowEvent internalInit] */

void FUN_108cb40a4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fe1f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb40e8; end: 108cb430f; -[SCPreviewSendFlowEvent matchDidFinishLoading:didPresentSendTo:preloadQuickPost:didPressQuickPost:sendFromQuickPost:didPressSend:didCancel:didDismissSendTo:] */

void FUN_108cb40e8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 4) {
    if (lVar1 < 2) {
      if (lVar1 == 0) {
        if (param_3 != 0) {
          (**(code **)(param_3 + 0x10))
                    (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                     *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                     *(undefined8 *)(param_1 + 0x30));
        }
      }
      else if ((lVar1 == 1) && (param_4 != 0)) {
        (**(code **)(param_4 + 0x10))
                  (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                   *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),param_4,
                   *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                   *(undefined8 *)(param_1 + 0x48));
      }
    }
    else if (lVar1 == 2) {
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))
                  (param_5,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                   *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88),
                   *(undefined8 *)(param_1 + 0x90),*(undefined1 *)(param_1 + 0x98));
      }
    }
    else if ((lVar1 == 3) && (param_6 != 0)) {
      (**(code **)(param_6 + 0x10))
                (*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xb8),
                 *(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),param_6,
                 *(undefined1 *)(param_1 + 0x99),*(undefined1 *)(param_1 + 0x9a),
                 *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8),
                 *(undefined1 *)(param_1 + 0xd0));
    }
  }
  else if (lVar1 < 6) {
    if (lVar1 == 4) {
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7,*(undefined8 *)(param_1 + 0xd8));
      }
    }
    else if ((lVar1 == 5) && (param_8 != 0)) {
      (**(code **)(param_8 + 0x10))
                (*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100),
                 *(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x110),param_8,
                 *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe8),
                 *(undefined8 *)(param_1 + 0xf0),*(undefined1 *)(param_1 + 0x118));
    }
  }
  else if (lVar1 == 6) {
    if (param_9 != 0) {
      (**(code **)(param_9 + 0x10))(param_9);
    }
  }
  else if ((lVar1 == 7) && (param_10 != 0)) {
    (**(code **)(param_10 + 0x10))
              (param_10,*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128));
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb4310; end: 108cb4417; -[SCPreviewSendFlowEvent .cxx_destruct] */

void FUN_108cb4310(long param_1)

{
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108cb4418; end: 108cb4463; +[SCQuickPostSendFlowEvent didDismissQuickPost] */

void FUN_108cb4418(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db9b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb4464; end: 108cb44eb; +[SCQuickPostSendFlowEvent didPressQuickPostWithLongPressed:fromMemories:infoStickerFeature:isMusicSnap:] */

void FUN_108cb4464(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126db9b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
  puVar2[0x11] = param_4;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  _objc_release(uVar3);
  puVar2[0x20] = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb44ec; end: 108cb4537; +[SCQuickPostSendFlowEvent didPressSendFromQuickPost] */

void FUN_108cb44ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126db9b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb4538; end: 108cb455b; -[SCQuickPostSendFlowEvent copyWithZone:] */

undefined8 FUN_108cb4538(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108cb455c; end: 108cb459f; -[SCQuickPostSendFlowEvent internalInit] */

void FUN_108cb455c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fe1f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb45a0; end: 108cb4657; -[SCQuickPostSendFlowEvent matchDidPressQuickPost:didPressSendFromQuickPost:didDismissQuickPost:] */

void FUN_108cb45a0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_108cb4634;
    pcVar2 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
  }
  else {
    if (lVar1 != 1) {
      if ((lVar1 == 0) && (param_3 != 0)) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11),
                   *(undefined8 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x20));
      }
      goto LAB_108cb4634;
    }
    if (param_4 == 0) goto LAB_108cb4634;
    pcVar2 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
  }
  (*pcVar2)(lVar1);
LAB_108cb4634:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb4658; end: 108cb4663; -[SCQuickPostSendFlowEvent .cxx_destruct] */

void FUN_108cb4658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108cb4664; end: 108cb4823; -[SCPreviewSendToParams initWithTopicTracker:isMusicSnap:isSponsoredSnap:shouldDisplayPolaroidEducation:isShortVideo:userMentions:previewViewModel:preSelectedItems:shareSheetConfiguration:lensIds:contentConfiguration:isPlanStickerWithRestrictedDestinations:] */

undefined8 *
FUN_108cb4664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126fe200;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
    *(undefined1 *)((long)puVar1 + 0xb) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar2 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar2);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xc) = param_14;
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108cb4824; end: 108cb4847; -[SCPreviewSendToParams copyWithZone:] */

undefined8 FUN_108cb4824(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108cb4848; end: 108cb484f; -[SCPreviewSendToParams topicTracker] */

undefined8 FUN_108cb4848(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cb4850; end: 108cb4857; -[SCPreviewSendToParams isMusicSnap] */

undefined1 FUN_108cb4850(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108cb4858; end: 108cb485f; -[SCPreviewSendToParams isSponsoredSnap] */

undefined1 FUN_108cb4858(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108cb4860; end: 108cb4867; -[SCPreviewSendToParams shouldDisplayPolaroidEducation] */

undefined1 FUN_108cb4860(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108cb4868; end: 108cb486f; -[SCPreviewSendToParams isShortVideo] */

undefined1 FUN_108cb4868(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108cb4870; end: 108cb4877; -[SCPreviewSendToParams userMentions] */

undefined8 FUN_108cb4870(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cb4878; end: 108cb487f; -[SCPreviewSendToParams previewViewModel] */

undefined8 FUN_108cb4878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cb4880; end: 108cb4887; -[SCPreviewSendToParams preSelectedItems] */

undefined8 FUN_108cb4880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108cb4888; end: 108cb488f; -[SCPreviewSendToParams shareSheetConfiguration] */

undefined8 FUN_108cb4888(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108cb4890; end: 108cb4897; -[SCPreviewSendToParams lensIds] */

undefined8 FUN_108cb4890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108cb4898; end: 108cb489f; -[SCPreviewSendToParams contentConfiguration] */

undefined8 FUN_108cb4898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108cb48a0; end: 108cb48a7; -[SCPreviewSendToParams isPlanStickerWithRestrictedDestinations] */

undefined1 FUN_108cb48a0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 108cb48a8; end: 108cb4913; -[SCPreviewSendToParams .cxx_destruct] */

void FUN_108cb48a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108cb4914; end: 108cb4987; -[SCPreviewFeatureInfoStickerServices initWithInfoSticker:] */

undefined1 * FUN_108cb4914(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe208;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cb4988; end: 108cb498f; -[SCPreviewFeatureInfoStickerServices infoSticker] */

undefined8 FUN_108cb4988(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cb4990; end: 108cb499b; -[SCPreviewFeatureInfoStickerServices .cxx_destruct] */

void FUN_108cb4990(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb499c; end: 108cb4a0f; -[SCSendFlowDependentTasksServices initWithDependentTasksHandler:] */

undefined1 * FUN_108cb499c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe210;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cb4a10; end: 108cb4a17; -[SCSendFlowDependentTasksServices dependentTasksHandler] */

undefined8 FUN_108cb4a10(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cb4a18; end: 108cb4a37; -[SCSendFlowDependentTasksServices .cxx_destruct] */

void FUN_108cb4a18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb4a38; end: 108cb4b2b; -[SCStoryQuickPostScope initWithUIContainer:quickPostEventSubject:delegate:dataSourece:snapSource:] */

undefined1 *
FUN_108cb4a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fe218;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cb4b2c; end: 108cb4b33; -[SCStoryQuickPostScope uiContainer] */

undefined8 FUN_108cb4b2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cb4b34; end: 108cb4b63; -[SCStoryQuickPostScope setUiContainer:] */

void FUN_108cb4b34(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108cb4b64; end: 108cb4b6b; -[SCStoryQuickPostScope quickPostEventSubject] */

undefined8 FUN_108cb4b64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cb4b6c; end: 108cb4b83; -[SCStoryQuickPostScope delegate] */

void FUN_108cb4b6c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb4b84; end: 108cb4b8f; -[SCStoryQuickPostScope setDelegate:] */

void FUN_108cb4b84(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 108cb4b90; end: 108cb4ba7; -[SCStoryQuickPostScope dataSource] */

void FUN_108cb4b90(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb4ba8; end: 108cb4bb3; -[SCStoryQuickPostScope setDataSource:] */

void FUN_108cb4ba8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 108cb4bb4; end: 108cb4bbb; -[SCStoryQuickPostScope snapSource] */

undefined8 FUN_108cb4bb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108cb4bbc; end: 108cb4bfb; -[SCStoryQuickPostScope .cxx_destruct] */

void FUN_108cb4bbc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb4bfc; end: 108cb4c47; +[SCStoryQuickPostEvent didDismissQuickPost] */

void FUN_108cb4bfc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c3418;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb4c48; end: 108cb4cc3; +[SCStoryQuickPostEvent didPressQuickPostWithLongPressed:source:confidentialFeatureDescription:] */

void FUN_108cb4c48(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c3418;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108cb4cc4; end: 108cb4ce7; -[SCStoryQuickPostEvent copyWithZone:] */

undefined8 FUN_108cb4cc4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108cb4ce8; end: 108cb4d2b; -[SCStoryQuickPostEvent internalInit] */

void FUN_108cb4ce8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fe220;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb4d2c; end: 108cb4db3; -[SCStoryQuickPostEvent matchDidPressQuickPost:didDismissQuickPost:] */

void FUN_108cb4d2c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined1 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108cb4db4; end: 108cb4dbf; -[SCStoryQuickPostEvent .cxx_destruct] */

void FUN_108cb4db4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108cb4dc0; end: 108cb4e5f; -[SCStoryQuickPostConfiguration initWithBusinessProfileId:isBatchCapture:isImageSnap:isShortVideo:] */

undefined1 *
FUN_108cb4dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fe228;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
    *(undefined1 *)((long)puVar1 + 10) = param_6;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cb4e60; end: 108cb4e83; -[SCStoryQuickPostConfiguration copyWithZone:] */

undefined8 FUN_108cb4e60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108cb4e84; end: 108cb4e8b; -[SCStoryQuickPostConfiguration businessProfileId] */

undefined8 FUN_108cb4e84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cb4e8c; end: 108cb4e93; -[SCStoryQuickPostConfiguration isBatchCapture] */

undefined1 FUN_108cb4e8c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108cb4e94; end: 108cb4e9b; -[SCStoryQuickPostConfiguration isImageSnap] */

undefined1 FUN_108cb4e94(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108cb4e9c; end: 108cb4ea3; -[SCStoryQuickPostConfiguration isShortVideo] */

undefined1 FUN_108cb4e9c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108cb4ea4; end: 108cb4eaf; -[SCStoryQuickPostConfiguration .cxx_destruct] */

void FUN_108cb4ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108cb4eb0; end: 108cb4f23; -[SCBatchCapturePreviewEdits initWithBatchCaptureStateHandler:] */

undefined1 * FUN_108cb4eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe230;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cb4f24; end: 108cb4f87; +[SCBatchCapturePreviewEdits batchCapturePreviewEditsWithSCBatchCapturePreviewEditing:] */

void FUN_108cb4f24(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126c42a0;
    _objc_opt_class(PTR_PTR_1126c42a0);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    uVar3 = param_3;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108cb4f88; end: 108cb4f8f; -[SCBatchCapturePreviewEdits stateHandler] */

undefined8 FUN_108cb4f88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cb4f90; end: 108cb4fbf; -[SCBatchCapturePreviewEdits setStateHandler:] */

void FUN_108cb4f90(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108cb4fc0; end: 108cb4fcb; -[SCBatchCapturePreviewEdits .cxx_destruct] */

void FUN_108cb4fc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb4fcc; end: 108cb5013; +[SCPreviewContainerViewGestureBeganInteractionEvent createWithGestureRecognizer:] */

void FUN_108cb4fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c017a00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108cb5014; end: 108cb5087; -[SCPreviewContainerViewGestureBeganInteractionEvent initWithGestureRecognizer:] */

undefined1 * FUN_108cb5014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe238;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cb5088; end: 108cb5127; -[SCPreviewContainerViewGestureBeganInteractionEvent processEventForResponder:] */

undefined8 FUN_108cb5088(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x000107c318f8(param_3,PTR_DAT_1126a5b08);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_didBeginGesture__1125ba400);
  if ((uVar2 & 1) != 0) {
    func_0x00010bfc1a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72960(uVar1);
    _objc_release(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return 1;
}



/* Entry: 108cb5128; end: 108cb512f; -[SCPreviewContainerViewGestureBeganInteractionEvent gestureRecognizer] */

undefined8 FUN_108cb5128(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cb5130; end: 108cb513b; -[SCPreviewContainerViewGestureBeganInteractionEvent .cxx_destruct] */

void FUN_108cb5130(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb513c; end: 108cb51bb; +[SCPreviewContainerViewGestureInteractionEvent createWithGesture:currentTouchTarget:deleteAnimationCompletion:] */

void FUN_108cb513c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c017960();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108cb51bc; end: 108cb523b; +[SCPreviewContainerViewGestureInteractionEvent createWithGesture:alignableView:deleteAnimationCompletion:] */

void FUN_108cb51bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c017940();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108cb523c; end: 108cb530b; -[SCPreviewContainerViewGestureInteractionEvent initWithGesture:currentTouchTarget:deleteAnimationCompletion:] */

undefined1 *
FUN_108cb523c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fe240;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cb530c; end: 108cb53db; -[SCPreviewContainerViewGestureInteractionEvent initWithGesture:alignableView:deleteAnimationCompletion:] */

undefined1 *
FUN_108cb530c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fe240;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108cb53dc; end: 108cb5573; -[SCPreviewContainerViewGestureInteractionEvent processEventForResponder:] */

undefined8 FUN_108cb53dc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x000107c318f8(param_3,PTR_DAT_1126a5b08);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar3 = param_1;
  func_0x00010bf606c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  lVar5 = param_1;
  if (lVar3 == 0) {
LAB_108cb54ac:
    lVar3 = param_1;
    func_0x00010beff9e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) goto LAB_108cb554c;
    uVar2 = uVar1;
    _objc_opt_respondsToSelector(uVar1,PTR_s_didTouchContainerView_alignableV_1125bd038);
    _objc_release(lVar3);
    if ((uVar2 & 1) == 0) goto LAB_108cb554c;
    func_0x00010bfc1a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beff9e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b660(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7da40(uVar1);
  }
  else {
    uVar2 = uVar1;
    _objc_opt_respondsToSelector(uVar1,PTR_s_didTouchContainerView_currentTou_1125bd040);
    _objc_release(lVar3);
    if ((uVar2 & 1) == 0) goto LAB_108cb54ac;
    func_0x00010bfc1a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf606c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b660(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7da60(uVar1);
  }
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
LAB_108cb554c:
  _objc_release(uVar1);
  _objc_release(param_3);
  return 1;
}



/* Entry: 108cb5574; end: 108cb557b; -[SCPreviewContainerViewGestureInteractionEvent gestureRecognizer] */

undefined8 FUN_108cb5574(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cb557c; end: 108cb5583; -[SCPreviewContainerViewGestureInteractionEvent currentTouchTarget] */

undefined8 FUN_108cb557c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cb5584; end: 108cb558b; -[SCPreviewContainerViewGestureInteractionEvent alignableView] */

undefined8 FUN_108cb5584(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108cb558c; end: 108cb5593; -[SCPreviewContainerViewGestureInteractionEvent deleteAnimationCompletion] */

undefined8 FUN_108cb558c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108cb5594; end: 108cb559b; -[SCPreviewContainerViewGestureInteractionEvent setDeleteAnimationCompletion:] */

void FUN_108cb5594(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108cb559c; end: 108cb55e3; -[SCPreviewContainerViewGestureInteractionEvent .cxx_destruct] */

void FUN_108cb559c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb55e4; end: 108cb55f7; +[SCPreviewSendButtonTapInteractionEvent create] */

void FUN_108cb55e4(void)

{
  _objc_alloc_init();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108cb55f8; end: 108cb566b; -[SCPreviewSendButtonTapInteractionEvent processEventForResponder:] */

undefined8 FUN_108cb55f8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x000107c318f8(param_3,PTR_DAT_1126a5b08);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_didTapSendButton_1125bceb8);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf7d440(uVar1);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return 1;
}



/* Entry: 108cb566c; end: 108cb56cf; -[SCTimelinePreviewEdits init] */

undefined1 * FUN_108cb566c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fe248;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126db9c0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108cb56d0; end: 108cb5733; +[SCTimelinePreviewEdits timelinePreviewEditsWithSCTimelinePreviewEditing:] */

void FUN_108cb56d0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126b00e8;
    _objc_opt_class(PTR_PTR_1126b00e8);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    uVar3 = param_3;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108cb5734; end: 108cb573b; -[SCTimelinePreviewEdits stateHandler] */

undefined8 FUN_108cb5734(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cb573c; end: 108cb576b; -[SCTimelinePreviewEdits setStateHandler:] */

void FUN_108cb573c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108cb576c; end: 108cb5773; -[SCTimelinePreviewEdits savedFilterData] */

undefined8 FUN_108cb576c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cb5774; end: 108cb57a3; -[SCTimelinePreviewEdits setSavedFilterData:] */

void FUN_108cb5774(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108cb57a4; end: 108cb57d3; -[SCTimelinePreviewEdits .cxx_destruct] */

void FUN_108cb57a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108cb57d4; end: 108cb57db; -[SCTimelineVideoSavedFilterData infoStickerData] */

undefined8 FUN_108cb57d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108cb57dc; end: 108cb580b; -[SCTimelineVideoSavedFilterData setInfoStickerData:] */

void FUN_108cb57dc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 108cb580c; end: 108cb5813; -[SCTimelineVideoSavedFilterData geoFilterImages] */

undefined8 FUN_108cb580c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108cb5814; end: 108cb5843; -[SCTimelineVideoSavedFilterData setGeoFilterImages:] */

void FUN_108cb5814(long param_1,undefined8 param_2,undefined8 param_3)

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


