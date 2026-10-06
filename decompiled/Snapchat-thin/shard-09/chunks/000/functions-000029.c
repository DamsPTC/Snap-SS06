/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10684ec84; end: 10684ed07; -[SCSpotlightDynamicRankerSortToken initWithDedupeFp:score:] */

undefined1 *
FUN_10684ec84(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f37f0;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10684ed08; end: 10684ed73; -[SCSpotlightDynamicRankerSortToken compare:] */

ulong FUN_10684ed08(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  float fVar2;
  
  _objc_retain(param_4);
  fVar2 = *(float *)(param_2 + 8);
  func_0x00010c150c20(param_4);
  if (param_1 <= fVar2) {
    fVar2 = *(float *)(param_2 + 8);
    func_0x00010c150c20(param_4);
    uVar1 = (ulong)(param_1 < fVar2);
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 10684ed74; end: 10684ed7b; -[SCSpotlightDynamicRankerSortToken dedupeFp] */

undefined8 FUN_10684ed74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10684ed7c; end: 10684ed83; -[SCSpotlightDynamicRankerSortToken score] */

undefined4 FUN_10684ed7c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10684ed84; end: 10684ed8f; -[SCSpotlightDynamicRankerSortToken .cxx_destruct] */

void FUN_10684ed84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10684ed90; end: 10684ee93; -[SCSpotlightFeedGrapheneLogger initWithStoriesGraphene:viewLocation:] */

undefined1 * FUN_10684ed90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f37f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bee9780();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined1 **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar5);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10684ee94; end: 10684ef9f; -[SCSpotlightFeedGrapheneLogger logStartedLoadingWithLoadingTrigger:] */

void FUN_10684ee94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10684efa0; end: 10684efd3;  */

void FUN_10684efa0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea8ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10684efd4; end: 10684f037; -[SCSpotlightFeedGrapheneLogger _setTrigger:startTime:] */

void FUN_10684efd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_4;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10684f038; end: 10684f143; -[SCSpotlightFeedGrapheneLogger logFeedSwitchToFeedType:] */

void FUN_10684f038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10684f144; end: 10684f177;  */

void FUN_10684f144(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be53380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10684f178; end: 10684f233; -[SCSpotlightFeedGrapheneLogger _logFeedSwitchToFeedType:time:] */

void FUN_10684f178(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  lVar1 = param_3;
  func_0x00010c067ec0(param_3);
  func_0x00010c0a63e0(uVar3,param_2,(long)(int)lVar1,*(undefined8 *)(param_1 + 0x30));
  if ((((param_3 != 0) && (uVar2 = *(ulong *)(param_1 + 0x40), uVar2 != 0)) &&
      (func_0x00010c071f40(uVar2,param_2,param_3), (uVar2 & 1) == 0)) &&
     (*(long *)(param_1 + 0x38) != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c067ec0(uVar3);
    func_0x00010c0a6380(uVar4,param_2,(long)(int)uVar3,*(undefined8 *)(param_1 + 0x30));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_4;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10684f234; end: 10684f267; -[SCSpotlightFeedGrapheneLogger logFeedSwitchViaAdvancementToFeedType:] */

void FUN_10684f234(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c067ec0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0a6430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_logFeedSwitchViaAdvancementToFee_112607318,(long)(int)param_3,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10684f268; end: 10684f26f; -[SCSpotlightFeedGrapheneLogger logSpotlightAbandonDiskNotLoaded:] */

void FUN_10684f268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b03b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_logSpotlightAbandonDiskNotLoaded_112609af8);
  return;
}



/* Entry: 10684f270; end: 10684f277; -[SCSpotlightFeedGrapheneLogger logSpotlightAbandonmentReason:feedType:viewLocation:] */

void FUN_10684f270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b03d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_logSpotlightAbandonmentReason_fe_112609b00);
  return;
}



/* Entry: 10684f278; end: 10684f35b; -[SCSpotlightFeedGrapheneLogger logOperaPresented] */

void FUN_10684f278(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 10684f35c; end: 10684f38f;  */

void FUN_10684f35c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be56a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10684f390; end: 10684f3ef; -[SCSpotlightFeedGrapheneLogger _logOperaPresented:] */

void FUN_10684f390(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (*(long *)(param_1 + 8) != 0)) {
    func_0x00010c26f380(param_3);
    func_0x00010c0b0500(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x10),
                        &PTR____CFConstantStringClassReference_110e62338,
                        *(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10684f3f0; end: 10684f4fb; -[SCSpotlightFeedGrapheneLogger logPlaybackBeginIfNecessaryForFeedType:] */

void FUN_10684f3f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10684f4fc; end: 10684f52f;  */

void FUN_10684f4fc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be57120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10684f530; end: 10684f62f; -[SCSpotlightFeedGrapheneLogger _logPlaybackBeginIfNecessaryForFeedType:time:] */

void FUN_10684f530(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (*(long *)(param_2 + 8) != 0)) {
    func_0x00010c26f380(param_5);
    func_0x00010c0b0500(*(undefined8 *)(param_2 + 0x18),param_3,*(undefined8 *)(param_2 + 0x10),
                        &PTR____CFConstantStringClassReference_110e62358,
                        *(undefined8 *)(param_2 + 0x30));
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    _objc_release(uVar2);
  }
  if ((((param_4 != 0) && (lVar1 = *(long *)(param_2 + 0x40), lVar1 != 0)) &&
      (func_0x00010c071f40(lVar1,param_3,param_4), (int)lVar1 != 0)) &&
     (*(long *)(param_2 + 0x38) != 0)) {
    func_0x00010c26f380(param_5);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    lVar1 = param_4;
    func_0x00010c067ec0(param_4);
    func_0x00010c0a63a0(param_1,uVar2,param_3,(long)(int)lVar1,*(undefined8 *)(param_2 + 0x30));
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = 0;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10684f630; end: 10684f6d7; -[SCSpotlightFeedGrapheneLogger logLoadingAbandonedIfNecessary] */

void FUN_10684f630(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10684f6d8; end: 10684f703;  */

void FUN_10684f6d8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be556a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10684f704; end: 10684f787; -[SCSpotlightFeedGrapheneLogger _logLoadingAbandonedIfNecessary] */

void FUN_10684f704(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (*(long *)(param_1 + 8) != 0)) {
    func_0x00010c0b04a0(*(undefined8 *)(param_1 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar2);
  }
  lVar1 = *(long *)(param_1 + 0x40);
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c067ec0();
                    /* WARNING: Could not recover jumptable at 0x00010c0a6390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar2,PTR_s_logFeedSwitchAbandonedForFeedTyp_1126072f0,(long)(int)lVar1,
               *(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}



/* Entry: 10684f788; end: 10684f82f; -[SCSpotlightFeedGrapheneLogger logReachEndOfPlaylist] */

void FUN_10684f788(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10684f830; end: 10684f85b;  */

void FUN_10684f830(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be57760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10684f85c; end: 10684f893; -[SCSpotlightFeedGrapheneLogger _logReachEndOfPlaylist] */

void FUN_10684f85c(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    func_0x00010c0b05a0(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x30));
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}



/* Entry: 10684f894; end: 10684f93b; -[SCSpotlightFeedGrapheneLogger resetPlaylist] */

void FUN_10684f894(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10684f93c; end: 10684f967;  */

void FUN_10684f93c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be936c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10684f968; end: 10684f96f; -[SCSpotlightFeedGrapheneLogger _resetPlaylist] */

void FUN_10684f968(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 10684f970; end: 10684fa17; -[SCSpotlightFeedGrapheneLogger logReceiveNoNewStoriesInResponse] */

void FUN_10684f970(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10684fa18; end: 10684fa43;  */

void FUN_10684fa18(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be57820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10684fa44; end: 10684fa5b; -[SCSpotlightFeedGrapheneLogger _logReceiveNoNewStoriesInResponse] */

void FUN_10684fa44(long param_1)

{
  *(undefined1 *)(param_1 + 0x29) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c0b05d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_logSpotlightReceiveNoNewStoryWit_112609b80,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10684fa5c; end: 10684fb17; -[SCSpotlightFeedGrapheneLogger logEndSpotlightSession] */

void FUN_10684fa5c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar3);
  uVar1 = *(undefined1 *)(param_1 + 0x29);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10684fb18;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = uVar3;
  uStack_40 = uVar4;
  uStack_38 = uVar1;
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 10684fb18; end: 10684fb27;  */

void FUN_10684fb18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b0490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logSpotlightExitReceivedNoNewSto_112609b30,
             *(undefined1 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10684fb28; end: 10684fbcf; -[SCSpotlightFeedGrapheneLogger resetSpotlightSession] */

void FUN_10684fb28(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10684fbd0; end: 10684fbfb;  */

void FUN_10684fbd0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be93c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10684fbfc; end: 10684fc03; -[SCSpotlightFeedGrapheneLogger _resetSpotlightSession] */

void FUN_10684fbfc(long param_1)

{
  *(undefined1 *)(param_1 + 0x29) = 0;
  return;
}



/* Entry: 10684fc04; end: 10684fc0b; -[SCSpotlightFeedGrapheneLogger logMetadataAvailableAtStartCount:feedType:] */

void FUN_10684fc04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0aa410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_logMetadataAvailableAtStartCount_112608310);
  return;
}



/* Entry: 10684fc0c; end: 10684fc13; -[SCSpotlightFeedGrapheneLogger logMediaAvailableAtStartCount:feedType:] */

void FUN_10684fc0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0aa0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_logMediaAvailableAtStartCount_fe_112608248);
  return;
}



/* Entry: 10684fc14; end: 10684fc5b; -[SCSpotlightFeedGrapheneLogger _viewLocationStringFromViewLocation:] */

void FUN_10684fc14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000108534a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10684fc5c; end: 10684fd03; -[SCSpotlightFeedGrapheneLogger logSubsFeedEmptyStateShown] */

void FUN_10684fc5c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10684fd04; end: 10684fd2f;  */

void FUN_10684fd04(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be59520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10684fd30; end: 10684fd6b; -[SCSpotlightFeedGrapheneLogger _logSubsFeedEmptyStateShown] */

void FUN_10684fd30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0b0640(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10684fd6c; end: 10684fe1f; -[SCSpotlightFeedGrapheneLogger logFeedSwitcherSubsBadgeShown] */

void FUN_10684fd6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10684fe20;
  puStack_48 = &UNK_110841f80;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10684fe20; end: 10684fe2b;  */

void FUN_10684fe20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b0630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logSpotlightSubsFeedBadgeShownWi_112609b98,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10684fe2c; end: 10684fedf; -[SCSpotlightFeedGrapheneLogger logFeedSwitcherEnterSubsWithBadge] */

void FUN_10684fe2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10684fee0;
  puStack_48 = &UNK_110841f80;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10684fee0; end: 10684feeb;  */

void FUN_10684fee0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b0670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logSpotlightSubsFeedTapOnBadgeWi_112609ba8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10684feec; end: 10684ff9f; -[SCSpotlightFeedGrapheneLogger logFeedSwitcherTooltipShown] */

void FUN_10684feec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10684ffa0;
  puStack_48 = &UNK_110841f80;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10684ffa0; end: 10684ffab;  */

void FUN_10684ffa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b0690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logSpotlightSubsFeedTooltipShown_112609bb0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10684ffac; end: 106850017; -[SCSpotlightFeedGrapheneLogger .cxx_destruct] */

void FUN_10684ffac(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106850018; end: 106850187; -[SCSpotlightFeedResponsivenessTriggerManager initWithCircumstanceEngine:] */

undefined8 * FUN_106850018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f3800;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar6 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010c1195e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ce728;
    _objc_alloc();
    uVar3 = uVar6;
    func_0x00010c296d80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360();
    _objc_retain(0);
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    lVar5 = puVar1[2];
    func_0x00010c263300();
    _objc_release(0);
    *(bool *)(puVar1 + 5) = lVar5 != 0;
    _objc_release(uVar6);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106850188; end: 10685024f; -[SCSpotlightFeedResponsivenessTriggerManager updateTriggersWithRecentInteraction:callback:] */

void FUN_106850188(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106850250;
    puStack_50 = &UNK_11084a9e8;
    lStack_48 = param_1;
    _objc_retain(param_3);
    uStack_40 = param_3;
    _objc_retain(param_4);
    uStack_38 = param_4;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106850250; end: 10685025f;  */

void FUN_106850250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee2a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateTriggersWithRecentInterac_112596428,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106850260; end: 1068503af; -[SCSpotlightFeedResponsivenessTriggerManager _updateTriggersWithRecentInteraction:callback:] */

void FUN_106850260(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c2632e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010bf980c0(uVar1);
    _objc_release(uVar1);
    if (*(char *)(puStack_58 + 3) == '\x01') {
      func_0x00010beb4760(param_1);
    }
    else {
      param_1 = 0;
    }
    (**(code **)(param_4 + 0x10))(param_4,param_1);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068503b0; end: 10685054f;  */

void FUN_1068503b0(long param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 < 5) {
    if (param_2 < 3) {
      if (param_2 != 1) {
        if (param_2 == 2) {
          uVar2 = *(ulong *)(param_1 + 0x20);
          func_0x00010c2770a0();
          lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
          func_0x00010c0b5140();
          *(bool *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) =
               lVar3 <= (long)(uVar2 & 0xffffffff);
        }
        goto LAB_106850530;
      }
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010c06d760();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106850514;
    }
    if (param_2 == 3) {
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010c080120();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106850514;
    }
    if (param_2 != 4) goto LAB_106850530;
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c0df660();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c296d80();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
    func_0x00010c0ce2c0();
    bVar1 = lVar4 <= lVar5;
LAB_1068504e0:
    *(bool *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = bVar1;
  }
  else {
    if (param_2 < 7) {
      if (param_2 == 5) {
        lVar3 = *(long *)(param_1 + 0x20);
        func_0x00010c132440();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010c296d80();
        bVar1 = 0 < lVar5;
        goto LAB_1068504e0;
      }
      if (param_2 != 6) goto LAB_106850530;
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010c0e9da0();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_2 == 7) {
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010c07dc00();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_2 != 8) goto LAB_106850530;
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010c074c20();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_106850514:
    lVar5 = lVar3;
    func_0x00010c296d80();
    *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)lVar5;
  }
  _objc_release(lVar3);
LAB_106850530:
  *param_4 = *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
  return;
}



/* Entry: 106850550; end: 10685063f; -[SCSpotlightFeedResponsivenessTriggerManager _shouldMarkTriggerAsValidAndInitiateFetchMoreContentCallbackForInteraction:] */

undefined8 FUN_106850550(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(ulong *)(param_1 + 0x20);
  uVar3 = param_3;
  func_0x00010c259740(param_3);
  func_0x00010c0df880(puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar4,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = param_3;
    func_0x00010c259740(param_3);
    func_0x00010c0df880(puVar1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar5,param_2,puVar1);
    _objc_release(puVar1);
    uVar2 = *(ulong *)(param_1 + 0x10);
    uVar4 = *(long *)(param_1 + 0x18) + 1;
    *(ulong *)(param_1 + 0x18) = uVar4;
    func_0x00010c0ce6c0();
    if (uVar2 <= uVar4) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      uVar3 = 1;
      goto LAB_106850620;
    }
  }
  uVar3 = 0;
LAB_106850620:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106850640; end: 10685067b; -[SCSpotlightFeedResponsivenessTriggerManager .cxx_destruct] */

void FUN_106850640(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10685067c; end: 1068506b7; -[SCSpotlightPullToRefreshController init] */

void FUN_10685067c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3808;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 1068506b8; end: 1068507d7; -[SCSpotlightPullToRefreshController configureWithContainerView:observedPanGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068506b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_1068507bc;
  lVar5 = (long)_DAT_112751d78;
  _objc_storeWeak(param_1 + lVar5,param_4);
  lVar4 = (long)_DAT_112751d7c;
  if (*(long *)(param_1 + lVar4) == 0) {
LAB_106850754:
    puVar3 = PTR_PTR_1126ce730;
    _objc_alloc();
    func_0x00010c0027e0();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak(param_1 + _DAT_112751d80,param_3);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  }
  else {
    lVar6 = (long)_DAT_112751d80;
    lVar1 = param_1 + lVar6;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != param_3) {
      func_0x00010c26ac40(*(undefined8 *)(param_1 + lVar4));
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = 0;
      _objc_release(uVar2);
      _objc_storeWeak(param_1 + lVar6,0);
    }
    if (*(long *)(param_1 + lVar4) == 0) goto LAB_106850754;
  }
  lVar5 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar5);
  func_0x00010c1d0900(*(undefined8 *)(param_1 + lVar4));
  _objc_release(lVar5);
  func_0x00010c2283c0(*(undefined8 *)(param_1 + lVar4));
LAB_1068507bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068507d8; end: 106850827; -[SCSpotlightPullToRefreshController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068507d8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112751d7c;
  func_0x00010c26ac40(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112751d80,0);
  return;
}



/* Entry: 106850828; end: 106850837; -[SCSpotlightPullToRefreshController resetToIdle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106850828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112751d7c),PTR_s_resetToIdle_11262c080);
  return;
}



/* Entry: 106850838; end: 1068508b7; -[SCSpotlightPullToRefreshController pullToRefreshOverlayCanBeginPulling] */

ulong FUN_106850838(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  _objc_opt_respondsToSelector();
  _objc_release(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c11b820();
    _objc_release(param_1);
  }
  return uVar2;
}



/* Entry: 1068508b8; end: 106850933; -[SCSpotlightPullToRefreshController pullToRefreshOverlayDidTriggerRefresh] */

void FUN_1068508b8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11b860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106850934; end: 1068509b7; -[SCSpotlightPullToRefreshController pullToRefreshOverlayDidChangeDraggingState:] */

void FUN_106850934(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11b840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1068509b8; end: 1068509d7; -[SCSpotlightPullToRefreshController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068509b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112751d84);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068509d8; end: 1068509eb; -[SCSpotlightPullToRefreshController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068509d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112751d84,param_3);
  return;
}



/* Entry: 1068509ec; end: 106850a3f; -[SCSpotlightPullToRefreshController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1068509ec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112751d84);
  _objc_destroyWeak(param_1 + _DAT_112751d80);
  _objc_storeStrong(param_1 + _DAT_112751d7c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112751d78);
  return;
}



/* Entry: 106850a40; end: 106850a47; -[SCSpotlightPullToRefreshPassthroughView hitTest:withEvent:] */

undefined8 FUN_106850a40(void)

{
  return 0;
}



/* Entry: 106850a48; end: 106850ab3; -[SCSpotlightPullToRefreshOverlay initWithContainerView:] */

undefined1 * FUN_106850a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3810;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106850ab4; end: 106850af3; -[SCSpotlightPullToRefreshOverlay _layoutOverlayContainerIfNeeded] */

/* WARNING: Possible PIC construction at 0x000106850ad8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106850adc) */

void FUN_106850ab4(long param_1)

{
  func_0x00010c262ca0(*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106850af4; end: 106850f9b; -[SCSpotlightPullToRefreshOverlay setup] */

void FUN_106850af4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  _objc_release();
  if (lVar1 == 0) {
LAB_106850f60:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained();
      if (lVar1 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
      }
      else {
        func_0x00010c27a460(&uStack_c0,lVar1);
      }
      *(undefined8 *)(param_1 + 0x38) = uStack_b8;
      *(undefined8 *)(param_1 + 0x30) = uStack_c0;
      *(undefined8 *)(param_1 + 0x48) = uStack_a8;
      *(undefined8 *)(param_1 + 0x40) = uStack_b0;
      *(undefined8 *)(param_1 + 0x58) = uStack_98;
      *(undefined8 *)(param_1 + 0x50) = uStack_a0;
      _objc_release(lVar1);
      puVar3 = PTR_PTR_1126ce738;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar17 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar3;
      _objc_release(uVar17);
      func_0x00010c219b60(*(undefined8 *)(param_1 + 0x10),param_2,0);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
      _objc_release(puVar3);
      func_0x00010c21e900(*(undefined8 *)(param_1 + 0x10),param_2,1);
      func_0x00010c160fc0(*(undefined8 *)(param_1 + 0x10),param_2,
                          &PTR____CFConstantStringClassReference_110e61e58);
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010befbb60();
      _objc_release(lVar1);
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar5 = lVar1;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar4;
      func_0x00010bf493a0(uVar4,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      uStack_90 = uVar17;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar7 = lVar2;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf493a0(uVar6,param_2,lVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      uStack_88 = uVar8;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar10 = lVar18;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar9;
      func_0x00010bf493a0(uVar9,param_2,lVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + 0x10);
      uStack_80 = uVar11;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_1 + 8;
      _objc_loadWeakRetained(lVar13);
      lVar14 = lVar13;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar12;
      func_0x00010bf493a0(uVar12,param_2,lVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_78 = uVar15;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_90,4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar3,param_2,puVar16);
      _objc_release(puVar16);
      _objc_release(uVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(lVar10);
      _objc_release(lVar18);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(lVar7);
      _objc_release(lVar2);
      _objc_release(uVar6);
      _objc_release(uVar17);
      _objc_release(lVar5);
      _objc_release(lVar1);
      _objc_release(uVar4);
      func_0x00010beaf440(param_1);
      if (*(long *)(param_1 + 0x28) == 0) {
        puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
        _objc_alloc();
        func_0x00010c050900();
        uVar17 = *(undefined8 *)(param_1 + 0x28);
        *(undefined **)(param_1 + 0x28) = puVar3;
        _objc_release(uVar17);
        func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x28),param_2,param_1);
        func_0x00010c178280(*(undefined8 *)(param_1 + 0x28),param_2,1);
        func_0x00010c18b5a0(*(undefined8 *)(param_1 + 0x28),param_2,0);
        func_0x00010c18b5c0(*(undefined8 *)(param_1 + 0x28),param_2,0);
        lVar1 = param_1 + 8;
        _objc_loadWeakRetained();
        func_0x00010bef9040();
        _objc_release(lVar1);
      }
      lVar2 = param_1;
      func_0x00010c0e12e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        lVar1 = param_1;
        func_0x00010c0e12e0();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = *(long *)(param_1 + 0x28);
        _objc_release();
        _objc_release();
        if (lVar1 != lVar18) {
          func_0x00010c0e12e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1374a0();
          _objc_release();
          lVar2 = param_1;
        }
      }
      goto LAB_106850f60;
    }
    param_1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = param_1;
    func_0x00010bf21300();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto code_r0x00010bdbf3e4;
  }
  ___stack_chk_fail();
  func_0x00010c139980();
  if (*(long *)(lVar2 + 0x28) != 0) {
    lVar1 = lVar2 + 8;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = lVar2 + 8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c12c9c0();
      _objc_release(lVar1);
    }
  }
  func_0x00010c12c960(*(undefined8 *)(lVar2 + 0x10));
  uVar17 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  _objc_release(uVar17);
  uVar17 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x18) = 0;
  _objc_release(uVar17);
  uVar17 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(lVar2 + 0x20) = 0;
  _objc_release(uVar17);
  param_1 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106850f9c; end: 106851027; -[SCSpotlightPullToRefreshOverlay teardown] */

void FUN_106850f9c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c139980();
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      func_0x00010c12c9c0();
      _objc_release(lVar1);
    }
  }
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x10));
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106851028; end: 10685107f; -[SCSpotlightPullToRefreshOverlay resetToIdle] */

void FUN_106851028(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106851080;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106851080; end: 106851087;  */

void FUN_106851080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be94130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resetToIdle_1125829e8);
  return;
}



/* Entry: 106851088; end: 1068510bf; -[SCSpotlightPullToRefreshOverlay _resetToIdle] */

void FUN_106851088(long param_1,undefined8 param_2)

{
  func_0x00010bea38a0(param_1,param_2,0);
  *(undefined1 *)(param_1 + 0x61) = 0;
  func_0x00010be937e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bea2e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s__setContainerVerticalOffset__112586548);
  return;
}



/* Entry: 1068510c0; end: 106851213; -[SCSpotlightPullToRefreshOverlay gestureRecognizerShouldBegin:] */

bool FUN_1068510c0(double param_1,double param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  
  _objc_retain(param_5);
  if (*(long *)(param_3 + 0x28) == 0 || param_5 != *(long *)(param_3 + 0x28)) {
LAB_1068510f8:
    bVar7 = false;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    if ((uVar2 & 1) == 0) {
      _objc_release(uVar1);
    }
    else {
      uVar2 = param_3;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c11b980();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar3 == 0) goto LAB_1068510f8;
    }
    _objc_retain(param_5);
    lVar4 = param_3 + 8;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      lVar6 = param_3 + 8;
      _objc_loadWeakRetained(lVar6);
    }
    else {
      _objc_retain(lVar5);
      lVar6 = lVar5;
    }
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010c297a00(param_5);
    _objc_release(param_5);
    bVar7 = 0.0 <= param_2 && ABS(param_1) <= ABS(param_2);
    _objc_release(lVar6);
  }
  _objc_release(param_5);
  return bVar7;
}



/* Entry: 106851214; end: 10685121b; -[SCSpotlightPullToRefreshOverlay gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_106851214(void)

{
  return 0;
}



/* Entry: 10685121c; end: 10685128f; -[SCSpotlightPullToRefreshOverlay _setContainerVerticalOffset:] */

void FUN_10685121c(undefined8 param_1,long param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_78 = *(undefined8 *)(param_2 + 0x38);
  uStack_80 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x48);
  uStack_70 = *(undefined8 *)(param_2 + 0x40);
  uStack_58 = *(undefined8 *)(param_2 + 0x58);
  uStack_60 = *(undefined8 *)(param_2 + 0x50);
  _CGAffineTransformTranslate(&uStack_50,0,param_1,&uStack_80);
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960();
  _objc_release(param_2);
  return;
}



/* Entry: 106851290; end: 10685152b; -[SCSpotlightPullToRefreshOverlay _setupPullToRefreshView] */

void FUN_106851290(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c2c08;
  _objc_alloc();
  func_0x00010c014580(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  _objc_retain(puVar1);
  func_0x00010c219b60(puVar1);
  func_0x00010c160fc0(puVar1);
  func_0x00010c18b5e0(puVar1);
  func_0x00010c225b60(0x4058000000000000,puVar1);
  func_0x00010c1a7d00(0,puVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x10));
  puVar3 = puVar1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 0;
  puVar4 = puVar3;
  func_0x00010bf49420(0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar4;
  _objc_release(uVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar1;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c08de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c2793a0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar6;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c274200(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c181140(*(undefined8 *)(puVar4 + 0x20));
  func_0x00010c1a7d00(uVar14,*(undefined8 *)(puVar4 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010be49450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s__layoutOverlayContainerIfNeeded_11256feb0);
  return;
}



/* Entry: 10685152c; end: 10685156b; -[SCSpotlightPullToRefreshOverlay _updatePullToRefreshViewWithDragOffset:] */

void FUN_10685152c(undefined8 param_1,long param_2)

{
  func_0x00010c181140(*(undefined8 *)(param_2 + 0x20));
  func_0x00010c1a7d00(param_1,*(undefined8 *)(param_2 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010be49450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__layoutOverlayContainerIfNeeded_11256feb0);
  return;
}



/* Entry: 10685156c; end: 1068515a3; -[SCSpotlightPullToRefreshOverlay _resetPullToRefreshView] */

void FUN_10685156c(long param_1)

{
  func_0x00010c181140(0,*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1a7d00(0,*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010be49450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__layoutOverlayContainerIfNeeded_11256feb0);
  return;
}



/* Entry: 1068515a4; end: 1068515ab; -[SCSpotlightPullToRefreshOverlay _handlePullToRefreshEnded] */

void FUN_1068515a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c291cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_userDidRelease_112682160);
  return;
}



/* Entry: 1068515ac; end: 106851693; -[SCSpotlightPullToRefreshOverlay _triggerRefresh] */

void FUN_1068515ac(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  *(undefined1 *)(param_1 + 0x61) = 1;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106851694;
  puStack_40 = &UNK_110842e18;
  uStack_38 = param_1;
  func_0x00010bf03460(0x3fd1eb851eb851ec,0,0x3feccccccccccccd,0x3fc999999999999a,
                      PTR__OBJC_CLASS___UIView_1126aec20,param_2,6,&puStack_58,0);
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11b9c0();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 106851694; end: 10685169f;  */

void FUN_106851694(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea2e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s__setContainerVerticalOffset__112586548);
  return;
}



/* Entry: 1068516a0; end: 106851733; -[SCSpotlightPullToRefreshOverlay _setDraggingPullToRefresh:] */

void FUN_1068516a0(ulong param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(byte *)(param_1 + 0x60) != param_3) {
    *(char *)(param_1 + 0x60) = (char)param_3;
    uVar1 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11b9a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 106851734; end: 1068519d3; -[SCSpotlightPullToRefreshOverlay _handlePan:] */

void FUN_106851734(double param_1,double param_2,ulong param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  if (*(long *)(param_3 + 0x18) == 0) goto LAB_1068519b0;
  lVar1 = param_3 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_3 + 8;
    _objc_loadWeakRetained(lVar3);
  }
  else {
    _objc_retain(lVar2);
    lVar3 = lVar2;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010c27adc0(param_5);
  lVar1 = param_5;
  dVar7 = param_2;
  func_0x00010c252440();
  if (lVar1 == 1) {
    *(undefined1 *)(param_3 + 0x61) = 0;
    uVar4 = param_3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    _objc_opt_respondsToSelector();
    if ((uVar5 & 1) == 0) {
      _objc_release(uVar4);
LAB_106851894:
      func_0x00010c297a00(param_5);
      if ((ABS(param_1) <= ABS(dVar7)) && (0.0 <= dVar7)) {
        lVar1 = param_3 + 8;
        _objc_loadWeakRetained();
        if (lVar1 == 0) {
          uStack_68 = 0;
          uStack_70 = 0;
          uStack_58 = 0;
          uStack_60 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          func_0x00010c27a460(&uStack_80,lVar1);
        }
        *(undefined8 *)(param_3 + 0x38) = uStack_78;
        *(undefined8 *)(param_3 + 0x30) = uStack_80;
        *(undefined8 *)(param_3 + 0x48) = uStack_68;
        *(undefined8 *)(param_3 + 0x40) = uStack_70;
        *(undefined8 *)(param_3 + 0x58) = uStack_58;
        *(undefined8 *)(param_3 + 0x50) = uStack_60;
        _objc_release(lVar1);
      }
    }
    else {
      uVar5 = param_3;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c11b980();
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((uVar6 & 1) != 0) goto LAB_106851894;
    }
    func_0x00010bea38a0(param_3);
  }
  else {
    lVar1 = param_5;
    func_0x00010c252440();
    if (lVar1 == 2) {
      if (*(char *)(param_3 + 0x60) == '\x01') {
        if (param_2 < -6.0) {
LAB_10685196c:
          func_0x00010c139980(param_3);
        }
        else {
          dVar7 = 219.0;
          if (param_2 <= 219.0) {
            dVar7 = param_2;
          }
          if (dVar7 <= 0.0) {
            dVar7 = 0.0;
          }
          func_0x00010bea2e80(dVar7,param_3);
          func_0x00010bede380(dVar7,param_3);
        }
      }
    }
    else {
      lVar1 = param_5;
      func_0x00010c252440();
      if ((((lVar1 == 4) || (lVar1 = param_5, func_0x00010c252440(), lVar1 == 5)) ||
          (lVar1 = param_5, func_0x00010c252440(), lVar1 == 3)) &&
         (*(char *)(param_3 + 0x60) == '\x01')) {
        func_0x00010bea38a0(param_3);
        dVar7 = 219.0;
        if (param_2 <= 219.0) {
          dVar7 = param_2;
        }
        if (dVar7 <= 0.0) {
          dVar7 = 0.0;
        }
        func_0x00010bea2e80(dVar7,param_3);
        func_0x00010bede380(dVar7,param_3);
        func_0x00010be2e8c0(param_3);
        if ((*(byte *)(param_3 + 0x61) & 1) == 0) goto LAB_10685196c;
      }
    }
  }
  _objc_release(lVar3);
LAB_1068519b0:
  _objc_release(param_5);
  return;
}



/* Entry: 1068519d4; end: 1068519d7; -[SCSpotlightPullToRefreshOverlay pullToRefreshViewTriggered:] */

void FUN_1068519d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becfdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__triggerRefresh_112591918);
  return;
}



/* Entry: 1068519d8; end: 1068519ef; -[SCSpotlightPullToRefreshOverlay delegate] */

void FUN_1068519d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1068519f0; end: 1068519fb; -[SCSpotlightPullToRefreshOverlay setDelegate:] */

void FUN_1068519f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 1068519fc; end: 106851a13; -[SCSpotlightPullToRefreshOverlay observedPanGestureRecognizer] */

void FUN_1068519fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106851a14; end: 106851a1f; -[SCSpotlightPullToRefreshOverlay setObservedPanGestureRecognizer:] */

void FUN_106851a14(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x70,param_3);
  return;
}



/* Entry: 106851a20; end: 106851a7f; -[SCSpotlightPullToRefreshOverlay .cxx_destruct] */

void FUN_106851a20(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106851a80; end: 106851a8f; -[SCSpotlightSideBySideHeaderTapGestureRecognizer feedType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106851a80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112751db0);
}



/* Entry: 106851a90; end: 106851acf; -[SCSpotlightSideBySideHeaderTapGestureRecognizer setFeedType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106851a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112751db0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106851ad0; end: 106851ae3; -[SCSpotlightSideBySideHeaderTapGestureRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106851ad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112751db0,0);
  return;
}



/* Entry: 106851ae4; end: 106852987; -[SCSpotlightSideBySideHeaderView initWithAvailableSubfeeds:hapticsManager:customAppThemeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_106851ae4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                    undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x20;
  long lVar16;
  long *unaff_x25;
  long lVar17;
  long *unaff_x26;
  long lVar18;
  long *unaff_x27;
  long lVar19;
  long *unaff_x28;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auStack_370 [8];
  long lStack_368;
  long *plStack_360;
  long *plStack_358;
  long *plStack_350;
  long *plStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  long lStack_318;
  undefined1 *puStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  long *plStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long *plStack_240;
  long *plStack_238;
  long lStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  long *plStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1a8;
  undefined *puStack_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_1a0 = PTR_PTR_1126f3818;
  uVar20 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar21 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar22 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar23 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  plVar1 = &lStack_1a8;
  lStack_1a8 = param_1;
  _objc_msgSendSuper2(uVar20,uVar21,uVar22,uVar23,plVar1,PTR_s_initWithFrame__1125e2948);
  if (plVar1 != (long *)0x0) {
    lVar17 = (long)_DAT_112751db4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)plVar1 + lVar17);
    *(long *)((long)plVar1 + lVar17) = param_3;
    _objc_release(uVar2);
    lVar16 = (long)_DAT_112751db8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)plVar1 + lVar16);
    *(undefined8 *)((long)plVar1 + lVar16) = param_4;
    uStack_288 = param_4;
    _objc_release(uVar2);
    lVar16 = (long)_DAT_112751dbc;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)plVar1 + lVar16);
    *(undefined8 *)((long)plVar1 + lVar16) = param_5;
    lStack_298 = lVar16;
    uStack_290 = param_5;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)plVar1 + (long)_DAT_112751dc0);
    *(undefined8 *)((long)plVar1 + (long)_DAT_112751dc0) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)plVar1 + (long)_DAT_112751dc4);
    *(undefined8 *)((long)plVar1 + (long)_DAT_112751dc4) = 0;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    lStack_248 = (long)_DAT_112751dc8;
    uVar2 = *(undefined8 *)((long)plVar1 + lStack_248);
    *(undefined **)((long)plVar1 + lStack_248) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    lStack_250 = (long)_DAT_112751dcc;
    uVar2 = *(undefined8 *)((long)plVar1 + lStack_250);
    *(undefined **)((long)plVar1 + lStack_250) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)plVar1 + (long)_DAT_112751dd0);
    *(undefined **)((long)plVar1 + (long)_DAT_112751dd0) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)plVar1 + (long)_DAT_112751dd4);
    *(undefined **)((long)plVar1 + (long)_DAT_112751dd4) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)plVar1 + (long)_DAT_112751dd8);
    *(undefined **)((long)plVar1 + (long)_DAT_112751dd8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    lStack_258 = (long)_DAT_112751ddc;
    uVar2 = *(undefined8 *)((long)plVar1 + lStack_258);
    *(undefined **)((long)plVar1 + lStack_258) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    lStack_260 = (long)_DAT_112751de0;
    uVar2 = *(undefined8 *)((long)plVar1 + lStack_260);
    *(undefined **)((long)plVar1 + lStack_260) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)plVar1 + (long)_DAT_112751de4);
    *(undefined **)((long)plVar1 + (long)_DAT_112751de4) = puVar3;
    _objc_release(uVar2);
    lVar16 = *(long *)((long)plVar1 + lVar17);
    lStack_1f8 = lVar17;
    func_0x00010bf529e0();
    if (lVar16 != 0) {
      lVar16 = param_3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)plVar1 + (long)_DAT_112751de8);
      *(long *)((long)plVar1 + (long)_DAT_112751de8) = lVar16;
      _objc_release(uVar2);
      func_0x00010be83e60(plVar1);
    }
    lStack_280 = param_3;
    func_0x00010c219b60(plVar1);
    puVar3 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    _objc_alloc();
    func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
    lVar17 = (long)_DAT_112751dec;
    uVar2 = *(undefined8 *)((long)plVar1 + lVar17);
    *(undefined **)((long)plVar1 + lVar17) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)plVar1 + lVar17));
    func_0x00010c2026e0(*(undefined8 *)((long)plVar1 + lVar17));
    func_0x00010c2025c0(*(undefined8 *)((long)plVar1 + lVar17));
    func_0x00010c181f80(0,0x4023000000000000,0,0x4023000000000000,
                        *(undefined8 *)((long)plVar1 + lVar17));
    func_0x00010befbb60(plVar1);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
    lVar18 = (long)_DAT_112751df0;
    uVar2 = *(undefined8 *)((long)plVar1 + lVar18);
    *(undefined **)((long)plVar1 + lVar18) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)plVar1 + lVar18));
    func_0x00010befbb60(*(undefined8 *)((long)plVar1 + lVar17));
    puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    _objc_alloc();
    func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
    lVar19 = (long)_DAT_112751df4;
    uVar2 = *(undefined8 *)((long)plVar1 + lVar19);
    *(undefined **)((long)plVar1 + lVar19) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)plVar1 + lVar19));
    func_0x00010c16e060(*(undefined8 *)((long)plVar1 + lVar19));
    func_0x00010c1fbe00(*(undefined8 *)((long)plVar1 + lVar19));
    func_0x00010c166c00(*(undefined8 *)((long)plVar1 + lVar19));
    func_0x00010c181f00(0x447a0000,*(undefined8 *)((long)plVar1 + lVar19));
    func_0x00010c207380(0x4032000000000000,*(undefined8 *)((long)plVar1 + lVar19));
    func_0x00010befbb60(*(undefined8 *)((long)plVar1 + lVar18));
    puStack_2a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    plVar4 = *(long **)((long)plVar1 + lVar17);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    plVar5 = plVar1;
    plStack_200 = plVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    plStack_208 = plVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    plStack_e0 = plVar4;
    plVar6 = *(long **)((long)plVar1 + lVar17);
    plStack_210 = plVar4;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    plVar5 = plVar1;
    plStack_218 = plVar6;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    plStack_220 = plVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    plStack_d8 = plVar6;
    uVar2 = *(undefined8 *)((long)plVar1 + lVar17);
    plStack_228 = plVar6;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    plVar5 = plVar1;
    lStack_230 = uVar2;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    plStack_238 = plVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar2;
    lVar16 = *(long *)((long)plVar1 + lVar17);
    lStack_268 = uVar2;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    plVar5 = plVar1;
    lStack_270 = lVar16;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    plStack_278 = plVar5;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_c8 = lVar16;
    uVar7 = *(undefined8 *)((long)plVar1 + lVar18);
    lStack_2a0 = lVar16;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)plVar1 + lVar17);
    uStack_2b0 = uVar7;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uStack_2b8 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar7;
    uVar8 = *(undefined8 *)((long)plVar1 + lVar18);
    uStack_2c0 = uVar7;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)plVar1 + lVar17);
    uStack_2c8 = uVar8;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_2d0 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar8;
    uVar7 = *(undefined8 *)((long)plVar1 + lVar18);
    uStack_2d8 = uVar8;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)plVar1 + lVar17);
    uStack_2e0 = uVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_2e8 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar7;
    uVar8 = *(undefined8 *)((long)plVar1 + lVar19);
    uStack_2f0 = uVar7;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)plVar1 + lVar18);
    uStack_2f8 = uVar8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uStack_300 = uVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = uVar8;
    uVar9 = *(undefined8 *)((long)plVar1 + lVar19);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)plVar1 + lVar18);
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010bf493c0(0x4022000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = uVar7;
    uVar11 = *(undefined8 *)((long)plVar1 + lVar19);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)((long)plVar1 + lVar18);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar11;
    func_0x00010bf493c0(0xc022000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    plStack_240 = plVar1;
    uStack_98 = uVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_2a8);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar7);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uStack_300);
    _objc_release(uStack_2f8);
    _objc_release(uStack_2f0);
    _objc_release(uStack_2e8);
    _objc_release(uStack_2e0);
    _objc_release(uStack_2d8);
    _objc_release(uStack_2d0);
    _objc_release(uStack_2c8);
    _objc_release(uStack_2c0);
    _objc_release(uStack_2b8);
    _objc_release(uStack_2b0);
    _objc_release(lStack_2a0);
    _objc_release(plStack_278);
    _objc_release(lStack_270);
    _objc_release(lStack_268);
    _objc_release(plStack_238);
    _objc_release(lStack_230);
    _objc_release(plStack_228);
    _objc_release(plStack_220);
    _objc_release(plStack_218);
    _objc_release(plStack_210);
    _objc_release(plStack_208);
    _objc_release(plStack_200);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
    lVar16 = (long)_DAT_112751df8;
    uVar2 = *(undefined8 *)((long)plStack_240 + lVar16);
    *(undefined **)((long)plStack_240 + lVar16) = puVar3;
    _objc_release(uVar2);
    func_0x00010c219b60(*(undefined8 *)((long)plStack_240 + lVar16));
    puVar13 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar13;
    func_0x00010bf414e0(0x3fd3333333333333);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)plStack_240 + lVar16));
    _objc_release(puVar3);
    _objc_release(puVar13);
    uVar2 = *(undefined8 *)((long)plStack_240 + lVar16);
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4033000000000000);
    _objc_release(uVar2);
    func_0x00010c066fe0(*(undefined8 *)((long)plStack_240 + lVar18));
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar8 = *(undefined8 *)((long)plStack_240 + lVar19);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x20 = *(long **)((long)plStack_240 + lVar18);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)((long)plStack_240 + lVar16);
    uStack_f8 = uVar2;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010bf49420(0x4043000000000000);
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = *(long **)((long)plStack_240 + lVar16);
    uStack_f0 = uVar7;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = *(long **)((long)plStack_240 + lVar19);
    lStack_268 = lVar19;
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = unaff_x25;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = (long *)PTR__OBJC_CLASS___NSArray_1126ae530;
    plStack_e8 = unaff_x27;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar3);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(uVar7);
    plVar1 = plStack_240;
    _objc_release(uVar9);
    _objc_release(uVar2);
    _objc_release(unaff_x20);
    _objc_release(uVar8);
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    param_1 = *(long *)((long)plVar1 + lStack_1f8);
    _objc_retain(param_1);
    lVar16 = param_1;
    plStack_278 = (long *)param_1;
    func_0x00010bf52a60();
    lStack_230 = lVar16;
    if (lVar16 != 0) {
      lStack_270 = *plStack_1e0;
      do {
        param_1 = 0;
        plStack_238 = (long *)PTR_s__didTapWithRecognizer__112532118;
        do {
          if (*plStack_1e0 != lStack_270) {
            _objc_enumerationMutation(plStack_278);
          }
          plVar6 = *(long **)(lStack_1e8 + param_1 * 8);
          plVar5 = plVar6;
          func_0x00010c1561c0();
          _objc_retainAutoreleasedReturnValue();
          plVar4 = plVar5;
          lStack_1f8 = param_1;
          func_0x00010bfa4340();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(plVar5);
          func_0x00010c1d0640(*(undefined8 *)((long)plVar1 + lStack_250));
          plVar5 = plVar6;
          func_0x00010bf85d80(plVar6);
          _objc_retainAutoreleasedReturnValue();
          unaff_x20 = plVar1;
          func_0x00010bdeeee0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(plVar5);
          plVar5 = (long *)PTR_PTR_1126ce740;
          _objc_alloc();
          func_0x00010c050900();
          plStack_200 = plVar5;
          func_0x00010c19b200();
          func_0x00010bef9040(unaff_x20);
          plStack_208 = plVar4;
          func_0x00010c1d0640(*(undefined8 *)((long)plVar1 + lStack_248));
          func_0x00010bfa4220(plVar6);
          _objc_retainAutoreleasedReturnValue();
          plVar5 = plVar6;
          func_0x00010c25ce40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c160fc0(unaff_x20);
          _objc_release(plVar5);
          _objc_release(plVar6);
          plVar6 = (long *)PTR__OBJC_CLASS___UIView_1126aec20;
          _objc_alloc();
          func_0x00010c013de0(uVar20,uVar21,uVar22,uVar23);
          func_0x00010c219b60();
          func_0x00010befbb60(plVar6);
          func_0x00010c1d0640(*(undefined8 *)((long)plVar1 + lStack_258));
          plVar1 = unaff_x20;
          func_0x00010c2793a0();
          _objc_retainAutoreleasedReturnValue();
          plVar5 = plVar6;
          func_0x00010c2793a0(plVar6);
          _objc_retainAutoreleasedReturnValue();
          plVar4 = plVar1;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          plStack_228 = plVar4;
          _objc_release(plVar5);
          _objc_release(plVar1);
          plStack_220 = (long *)PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          unaff_x26 = unaff_x20;
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          plVar1 = plVar6;
          plStack_210 = unaff_x26;
          func_0x00010c08de00();
          _objc_retainAutoreleasedReturnValue();
          plStack_218 = plVar1;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          plVar5 = unaff_x20;
          plStack_198 = unaff_x26;
          func_0x00010c274200();
          _objc_retainAutoreleasedReturnValue();
          plVar1 = plVar6;
          func_0x00010c274200(plVar6);
          _objc_retainAutoreleasedReturnValue();
          plVar14 = plVar5;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x20;
          plStack_190 = plVar14;
          func_0x00010bf1ff80();
          _objc_retainAutoreleasedReturnValue();
          plVar15 = plVar6;
          func_0x00010bf1ff80(plVar6);
          _objc_retainAutoreleasedReturnValue();
          unaff_x28 = unaff_x27;
          func_0x00010bf493a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = (long *)PTR__OBJC_CLASS___NSArray_1126ae530;
          plStack_188 = unaff_x28;
          plStack_180 = plVar4;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beef8c0(plStack_220);
          _objc_release(unaff_x25);
          _objc_release(unaff_x28);
          _objc_release(plVar15);
          _objc_release(unaff_x27);
          _objc_release(plVar14);
          param_1 = lStack_1f8;
          _objc_release(plVar1);
          plVar1 = plStack_240;
          _objc_release(plVar5);
          _objc_release(unaff_x26);
          _objc_release(plStack_218);
          _objc_release(plStack_210);
          plVar4 = plStack_208;
          plVar5 = plStack_228;
          func_0x00010c1d0640(*(undefined8 *)((long)plVar1 + lStack_260));
          func_0x00010bef6d60(*(undefined8 *)((long)plVar1 + lStack_268));
          _objc_release(plVar5);
          _objc_release(plVar6);
          _objc_release(plStack_200);
          _objc_release(unaff_x20);
          _objc_release(plVar4);
          param_1 = param_1 + 1;
        } while (lStack_230 != param_1);
        plVar5 = plStack_278;
        func_0x00010bf52a60();
        lStack_230 = (long)plVar5;
      } while (plVar5 != (long *)0x0);
    }
    _objc_release(plStack_278);
    func_0x00010bee2b20(plVar1);
    param_3 = lStack_280;
    param_4 = uStack_288;
    param_5 = uStack_290;
    if (*(long *)((long)plVar1 + lStack_298) != 0) {
      func_0x00010bec86e0(plVar1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  lVar16 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return plVar1;
  }
  ___stack_chk_fail();
  pcStack_308 = FUN_106852988;
  puVar3 = PTR_PTR_1126ae810;
  plStack_360 = unaff_x28;
  plStack_358 = unaff_x27;
  plStack_350 = unaff_x26;
  plStack_348 = unaff_x25;
  plStack_340 = plVar1;
  uStack_338 = param_5;
  uStack_330 = param_4;
  lStack_328 = param_3;
  plStack_320 = unaff_x20;
  lStack_318 = param_1;
  puStack_310 = &stack0xfffffffffffffff0;
  _objc_opt_new();
  uVar20 = *(undefined8 *)(lVar16 + _DAT_112751dfc);
  *(undefined **)(lVar16 + _DAT_112751dfc) = puVar3;
  _objc_release(uVar20);
  _objc_initWeak(&lStack_368,lVar16);
  uVar2 = *(undefined8 *)(lVar16 + _DAT_112751dbc);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar2;
  func_0x00010c0d6280();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010c0e0e80(uVar21);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_370,&lStack_368);
  uVar23 = uVar22;
  func_0x00010c25ff60(uVar22);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(puVar3);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_370);
  plVar1 = &lStack_368;
  _objc_destroyWeak(plVar1);
  return plVar1;
}



/* Entry: 106852988; end: 106852b2b; -[SCSpotlightSideBySideHeaderView _subscribeToThemeUpdates] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106852988(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112751dfc);
  *(undefined **)(param_1 + _DAT_112751dfc) = puVar1;
  _objc_release(uVar6);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112751dbc);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c0d6280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0e80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 106852b2c; end: 106852d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106852b2c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = param_2;
    func_0x00010bf15140();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + _DAT_112751dc0);
    *(long *)(param_1 + _DAT_112751dc0) = lVar2;
    _objc_release(uVar8);
    lVar2 = param_2;
    func_0x00010bf154c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + _DAT_112751dc4);
    *(long *)(param_1 + _DAT_112751dc4) = lVar2;
    _objc_release(uVar8);
    lVar11 = (long)_DAT_112751dd0;
    lVar3 = *(long *)(param_1 + lVar11);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        lVar4 = *(long *)(param_1 + lVar11);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = *(long *)(param_1 + _DAT_112751dd8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          lVar6 = param_1;
          func_0x00010bdd2660(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16e440(lVar4);
          _objc_release(lVar6);
        }
        if (lVar5 != 0) {
          lVar6 = param_1;
          func_0x00010bdd27a0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c213180(lVar5);
          _objc_release(lVar6);
        }
        _objc_release(lVar5);
        _objc_release(lVar4);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = *(undefined **)(param_2 + _DAT_112751dc0);
  if ((puVar10 == (undefined *)0x0) || (*(long *)(param_2 + _DAT_112751dc4) == 0)) {
    puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106852d58; end: 106852dbb; -[SCSpotlightSideBySideHeaderView _badgeColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106852d58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = *(undefined **)(param_1 + _DAT_112751dc0);
  if ((puVar1 == (undefined *)0x0) || (*(long *)(param_1 + _DAT_112751dc4) == 0)) {
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xb9);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


