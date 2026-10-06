/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105766a5c; end: 105766ed7; -[SCPromotedStoriesLogger initWithAdConfigProvider:configProviderV2:promotedStoryMetricsManager:promotedStoryS2RInfoProvider:tileAttachmentTrackBuilder:adTracker:trackSeqNumProvider:appImpressionTracker:userTrackedLogger:performerProvider:mainQueuePerformer:timeProvider:attachmentPreloader:grapheneRegistry:notificationPool:canOpenUrlProvider:] */

undefined8 *
FUN_105766a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  puStack_70 = PTR_PTR_1126ea168;
  puVar1 = &uStack_78;
  uStack_78 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0;
    _objc_retain(param_7);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[7];
    puVar1[7] = param_17;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[8];
    puVar1[8] = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    puVar1[9] = param_3;
    puVar1[10] = param_4;
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bdcc0;
    _objc_alloc();
    func_0x00010c001300();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 105766ed8; end: 105767033; -[SCPromotedStoriesLogger logPromotedStoryOpened:pageSessionId:tileIndexPos:] */

void FUN_105766ed8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010afef744();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0xc0);
    lVar1 = lVar2;
    func_0x00010c15ed20(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar6,param_2,puVar4,lVar1);
    _objc_release(lVar1);
    _objc_release(puVar4);
  }
  lVar1 = param_1;
  func_0x00010bea1760(param_1,param_2,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(ulong *)(param_1 + 0xd8);
  func_0x00010c0720c0(uVar5,param_2,lVar1);
  if ((uVar5 & 1) == 0) {
    func_0x00010be92a60(param_1);
    _objc_retain(lVar1);
    uVar6 = *(undefined8 *)(param_1 + 0xd8);
    *(long *)(param_1 + 0xd8) = lVar1;
    _objc_release(uVar6);
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105767034; end: 1057672ef; -[SCPromotedStoriesLogger logPromotedStoryTileImpression:data:pageSessionId:minimumVisibleFraction:promotedStoryTileSize:tileIndexPos:] */

void FUN_105767034(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_6;
  func_0x00010bf454e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfc80e0(param_4,param_5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_6;
  func_0x00010c25b720();
  if ((uVar1 == 5) || (uVar2 != 0)) {
    if (uVar2 == 0) {
      uVar1 = param_6;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010afef744();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
    }
    else {
      _objc_retain(uVar2);
      uVar3 = uVar2;
    }
    uVar1 = uVar3;
    func_0x00010c15ed20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c08fa60();
    _objc_release(uVar1);
    if (uVar4 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_5,param_9);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_4 + 0xc0);
      uVar1 = uVar3;
      func_0x00010c15ed20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar7,param_5,puVar5,uVar1);
      _objc_release(uVar1);
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar1 = uVar3;
      func_0x00010befd800(uVar3);
      func_0x00010c0df780(puVar5,param_5,uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_4 + 0xd0);
      uVar1 = uVar3;
      func_0x00010c15ed20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar7,param_5,puVar5,uVar1);
      _objc_release(uVar1);
      _objc_release(puVar5);
      uVar1 = param_4;
      func_0x00010bea1760(param_4,param_5,param_8,param_6);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c0720c0();
      if ((uVar4 & 1) == 0) {
        uVar6 = uVar1;
        func_0x00010bf51e00();
        uVar7 = *(undefined8 *)(param_4 + 0xd8);
        *(ulong *)(param_4 + 0xd8) = uVar6;
        _objc_release(uVar7);
        func_0x00010be92a60(param_4);
      }
      if (param_1 <= 0.5) {
        func_0x00010be6bae0(param_4,param_5,param_6,uVar3,param_7);
      }
      uVar6 = param_4;
      func_0x00010beb3ca0(param_1,param_4,param_5,uVar3,(uint)uVar4 ^ 1);
      if ((int)uVar6 != 0) {
        func_0x00010be17ac0(param_2,param_3,param_4,param_5,uVar3,param_7);
      }
      func_0x00010be4ff00(param_1,param_4,param_5,uVar3,param_7);
      _objc_release(uVar1);
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1057672f0; end: 10576734f; -[SCPromotedStoriesLogger _shouldFireImpressionTrack:minimumVisibleFraction:sessionIdChanged:] */

uint FUN_1057672f0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (uint)(1.0 <= param_1);
  if ((1.0 > param_1) && ((param_5 & 1) == 0)) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c15ed20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar2,param_3,param_4);
    uVar1 = (uint)uVar2;
    _objc_release(param_4);
  }
  return uVar1 ^ 1;
}



/* Entry: 105767350; end: 105767763; -[SCPromotedStoriesLogger _firePromotedTileImpressionTrack:impressionData:tileSize:] */

void FUN_105767350(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  
  uVar7 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar5 = PTR_PTR_1126afec0;
  uVar6 = param_6;
  func_0x00010c0e00e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c155420(puVar5);
  _objc_release(uVar6);
  puVar5 = param_5;
  func_0x00010bef4a60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07b560();
  _objc_release(puVar5);
  lVar4 = *(long *)(param_3 + 0xd0);
  puVar5 = param_5;
  func_0x00010c15ed20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (lVar4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar1 = PTR_PTR_1126b92c8;
    func_0x00010bf66720(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5);
    _objc_release(puVar1);
  }
  uVar6 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar6);
  uVar6 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  _objc_release(uVar6);
  uVar6 = param_6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  _objc_release(uVar6);
  uVar2 = *(undefined8 *)(param_3 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010bf1f480();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126bdcc8;
  puVar3 = param_5;
  if ((int)uVar6 == 0) {
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x0001063ba690(*(undefined8 *)(param_3 + 0x48),*(undefined8 *)(param_3 + 0x50),param_1,
                        param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bef4a60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef5920(*(undefined8 *)(param_3 + 0x48),*(undefined8 *)(param_3 + 0x50),param_1,
                        param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  uVar6 = *(undefined8 *)(param_3 + 0xd8);
  _objc_retain(uVar6);
  _objc_initWeak(auStack_88,param_3);
  uVar7 = *(undefined8 *)(param_3 + 0x38);
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(puVar1);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar7);
  func_0x00010be59c40(0x3ff0000000000000,param_3);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  puVar3 = param_5;
  func_0x00010c15ed20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar7);
  _objc_release(puVar3);
  func_0x00010be59e00(param_3);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(lVar4);
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105767764; end: 1057677cb;  */

void FUN_105767764(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bef4a60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be17aa0(lVar3,param_2,uVar1,uVar2,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1057677cc; end: 105767843; -[SCPromotedStoriesLogger _logTrackFiredLifecycleEvent:trackType:data:] */

void FUN_1057677cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010becbe60(param_1,param_2,6,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c1e4bc0(lVar1,param_2,param_4);
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105767844; end: 10576795b; -[SCPromotedStoriesLogger _onStoryImpressionBelowMinimumVisibleFraction:promotedStory:data:] */

void FUN_105767844(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10576795c; end: 10576798f;  */

void FUN_10576795c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be70ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105767990; end: 105767a47; -[SCPromotedStoriesLogger _resetViewTimeStopwatch:] */

void FUN_105767990(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x40));
  lVar1 = param_3;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    lVar1 = param_3;
    func_0x00010bef4a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3,param_2,0,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105767a48; end: 105767b8f; -[SCPromotedStoriesLogger startPromotedStoryViewThroughImpression:data:] */

void FUN_105767a48(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010afef744();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105767b90; end: 105767bc3;  */

void FUN_105767b90(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec1340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105767bc4; end: 105767c8b; -[SCPromotedStoriesLogger _startPromotedStoryViewThroughImpression:data:] */

void FUN_105767bc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar3);
  puVar2 = PTR_PTR_1126bdcd0;
  uVar3 = param_3;
  func_0x00010bef52c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbaa40(puVar2,param_2,param_3,uVar1,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c13bfa0(*(undefined8 *)(param_1 + 0xa8),param_2,puVar2,5,
                        &PTR___NSConcreteGlobalBlock_1108b0058);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105767c8c; end: 105767c8f;  */

void FUN_105767c8c(void)

{
  return;
}



/* Entry: 105767c90; end: 105767d6b; -[SCPromotedStoriesLogger _logSwipeInLifecyleEvent:data:] */

void FUN_105767c90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110f420f8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c071ae0();
  _objc_release(uVar3);
  if ((int)uVar1 != 0) {
    lVar2 = param_1;
    func_0x00010becbe60(param_1,param_2,2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0xb8);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105767d6c; end: 1057680cf; -[SCPromotedStoriesLogger _tileLifecyleEvent:promotedStory:data:] */

void FUN_105767d6c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8,ulong param_9)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_9);
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_8;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (param_8 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = PTR_PTR_1126bdcd8;
    _objc_opt_new(PTR_PTR_1126bdcd8);
    func_0x00010c2148e0();
    lVar1 = param_8;
    func_0x00010c15ed20(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164480(puVar10);
    _objc_release(lVar1);
    lVar1 = param_8;
    func_0x00010bef2c20(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163720(puVar10);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b8ca0;
    func_0x00010bef60a0(lVar2);
    func_0x00010c25d240(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164dc0(puVar10);
    _objc_release(puVar3);
    func_0x00010beec800(*(undefined8 *)(param_5 + 0x90));
    uVar11 = 0x408f400000000000;
    param_1 = param_1 * 1000.0;
    func_0x00010c214900(puVar10);
    uVar4 = param_9;
    func_0x00010bf529e0();
    if (uVar4 != 0) {
      uVar5 = param_9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar3);
      uVar4 = uVar5;
      if ((uVar6 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar5);
      if (uVar4 != 0) {
        func_0x00010c0b4ca0(uVar5);
        func_0x00010c162f60(puVar10);
      }
      uVar6 = param_9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar7 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar3);
      uVar5 = uVar6;
      if ((uVar7 & 1) == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(uVar6);
      if (uVar5 != 0) {
        func_0x00010bf885a0(uVar6);
        func_0x00010c214a80(puVar10);
      }
      uVar7 = param_9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar8 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar3);
      uVar6 = uVar7;
      if ((uVar8 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar7);
      if (uVar6 != 0) {
        func_0x00010bf1f3c0(uVar7);
        func_0x00010c1a5c80(puVar10);
      }
      uVar8 = param_9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
      uVar9 = uVar8;
      _objc_opt_isKindOfClass(uVar8,puVar3);
      uVar7 = uVar8;
      if ((uVar9 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar8);
      if (uVar7 != 0) {
        func_0x00010bdc1080(uVar8);
        _CGRectGetWidth();
        func_0x00010c214aa0(puVar10);
        _CGRectGetHeight(param_1,uVar11,param_3,param_4);
        func_0x00010c214820(puVar10);
      }
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_8);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1057680d0; end: 1057681bf; -[SCPromotedStoriesLogger _startViewTimeStopwatch:] */

void FUN_1057680d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x40));
  lVar1 = param_3;
  func_0x00010c26ea40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf926c0();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      puVar3 = *(undefined **)(param_1 + 0xb0);
      func_0x00010c0e00e0(puVar3,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = PTR_PTR_1126b46f0;
        _objc_opt_new(PTR_PTR_1126b46f0);
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xb0),param_2,puVar3,lVar2);
      }
      func_0x00010c24d960(puVar3);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057681c0; end: 105768287; -[SCPromotedStoriesLogger _pausePromotedStoryViewThroughImpression:] */

void FUN_1057681c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar3);
  puVar2 = PTR_PTR_1126bdcd0;
  uVar3 = param_3;
  func_0x00010bef52c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbaa40(puVar2,param_2,param_3,uVar1,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  if (puVar2 != (undefined *)0x0) {
    func_0x00010c0f5d60(*(undefined8 *)(param_1 + 0xa8),param_2,puVar2,5,
                        &PTR___NSConcreteGlobalBlock_1108b0078);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105768288; end: 10576828b;  */

void FUN_105768288(void)

{
  return;
}



/* Entry: 10576828c; end: 1057683bf; -[SCPromotedStoriesLogger endPromotedStoryViewThroughImpression:data:] */

void FUN_10576828c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010afef744();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(uVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057683c0; end: 1057683f3;  */

void FUN_1057683c0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be70ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057683f4; end: 105768523; -[SCPromotedStoriesLogger logPromotedStoryOnScreen:data:] */

void FUN_1057683f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010afef744();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105768524; end: 105768557;  */

void FUN_105768524(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be57560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105768558; end: 1057686b7; -[SCPromotedStoriesLogger _logPromotedStoryOnScreen:data:] */

void FUN_105768558(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar6);
  func_0x00010bec2100(param_1);
  func_0x00010be59840(param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b9040();
  _objc_release(uVar6);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  func_0x00010c1089e0(*(undefined8 *)(param_1 + 0x98));
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057686b8; end: 1057687d3; -[SCPromotedStoriesLogger logPromotedStoryOffScreen:data:] */

void FUN_1057686b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010afef744();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(uVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057687d4; end: 105768807;  */

void FUN_1057687d4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be944a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105768808; end: 105768907; -[SCPromotedStoriesLogger registerNoFillPromotedStory:forStoryId:] */

void FUN_105768808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105768908; end: 10576893b;  */

void FUN_105768908(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be89a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10576893c; end: 1057689e3; -[SCPromotedStoriesLogger clearNoFillPromotedStoryInfo] */

void FUN_10576893c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1057689e4; end: 105768a0f;  */

void FUN_1057689e4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde09c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105768a10; end: 105768b73; -[SCPromotedStoriesLogger getNoFillInfoForStoryId:] */

void FUN_105768a10(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x00010c06fc80();
  if (iVar1 == 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_105768b74;
    uStack_40 = 0x105768b84;
    uStack_38 = 0;
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar2);
    param_1 = puStack_58[5];
    _objc_retain(param_1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  else {
    func_0x00010be20c60(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105768b74; end: 105768b8b;  */

void FUN_105768b74(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105768b8c; end: 105768bdf;  */

void FUN_105768b8c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be20c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105768be0; end: 105768be7; -[SCPromotedStoriesLogger _registerNoFillPromotedStory:forStoryId:] */

void FUN_105768be0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setObject_forKey__112651b80);
  return;
}



/* Entry: 105768be8; end: 105768bef; -[SCPromotedStoriesLogger _clearNoFillPromotedStoryInfo] */

void FUN_105768be8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 105768bf0; end: 105768bf7; -[SCPromotedStoriesLogger _getNoFillInfoForStoryId:] */

void FUN_105768bf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_objectForKey__1126159e0);
  return;
}



/* Entry: 105768bf8; end: 105768cab; -[SCPromotedStoriesLogger _sessionIdFromPageSessionId:cheetahStory:] */

void FUN_105768bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010c25a160();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25c580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105768cac; end: 105768e5f; -[SCPromotedStoriesLogger _logAdTileViewTileImpression:data:minimumVisibleFraction:] */

void FUN_105768cac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_5;
  func_0x00010c0e00e0(param_5,param_3,&PTR____CFConstantStringClassReference_110e72498);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0xc0);
  uVar2 = param_4;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar9,param_3,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar9;
  func_0x00010c067fc0();
  uVar5 = param_5;
  func_0x00010c0e00e0(param_5,param_3,&PTR____CFConstantStringClassReference_110f41ef8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf1f3c0();
  uVar7 = param_5;
  func_0x00010c0e00e0(param_5,param_3,&PTR____CFConstantStringClassReference_110f41f18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar8 = param_5;
  func_0x00010c0e00e0(param_5,param_3,&PTR____CFConstantStringClassReference_110f41f58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c0b4ca0();
  func_0x00010c0a08c0(param_1,*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),param_2,param_3,param_4,0,uVar1
                      ,0,0,uVar4,(char)uVar6);
  _objc_release(param_4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105768e60; end: 105768ee3; -[SCPromotedStoriesLogger _logTileViewedLifecycleEvent:minimumVisibleFraction:data:] */

void FUN_105768e60(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  if (ABS(param_1 + -1.0) < 2.220446049250313e-16) {
    lVar1 = param_2;
    func_0x00010becbe60(param_2,param_3,3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0xb8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105768ee4; end: 10576922f; -[SCPromotedStoriesLogger logAdTileViewWithPromotedStory:didEngage:viewedTime:minimumVisibleFraction:ctaTapped:tileSize:tileTapCoordinates:tileIndexPos:tileAutoPlayEligible:tileAutoPlayed:tileAutoPlayTimeMs:] */

void FUN_105768ee4(undefined8 param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,int param_7,long param_8,undefined8 param_9,long param_10,
                  undefined8 param_11,undefined4 param_12,undefined4 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = param_2;
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126bdce0;
  _objc_alloc_init(PTR_PTR_1126bdce0);
  uVar4 = param_6;
  func_0x00010bef2c20(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar1,param_5,uVar4);
  _objc_release(uVar4);
  uVar4 = param_6;
  func_0x00010c245680(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010bef3480(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166280(puVar1,param_5,uVar4);
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010bef3b80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1662a0(puVar1,param_5,uVar4);
  _objc_release(uVar4);
  if (param_7 != 0) {
    func_0x00010c1b5a60(puVar1,param_5,1);
    func_0x00010c1b5a80(puVar1,param_5,1);
  }
  if (param_8 != 0) {
    func_0x00010bf885a0(param_8);
    func_0x00010c215700(puVar1);
  }
  uVar4 = param_6;
  func_0x00010bef4a60(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010c07b560(param_4,param_5,uVar4);
  func_0x00010c1a5c80(puVar1,param_5,lVar3);
  _objc_release(uVar4);
  func_0x00010c186780(puVar1,param_5,param_9);
  if (((param_10 != 0) && (2.220446049250313e-16 < param_2)) &&
     (dVar5 = 2.220446049250313e-16, 2.220446049250313e-16 < param_3)) {
    func_0x00010bdc1060(param_10);
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    func_0x00010c214b20(dVar5 / param_2,puVar1);
    if (dVar6 <= 0.0) {
      dVar6 = 0.0;
    }
    func_0x00010c214b60(dVar6 / param_3,puVar1);
    func_0x00010c214b00(puVar1,param_5,(long)dVar5);
    func_0x00010c214b40(puVar1,param_5,(long)dVar6);
    func_0x00010c214aa0(puVar1,param_5,(long)param_2);
    func_0x00010c214820(puVar1,param_5,(long)param_3);
  }
  func_0x00010c20ddc0(puVar1,param_5,7);
  uVar4 = param_6;
  func_0x00010c15ed20(param_6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010be22780(param_4,param_5,uVar4);
  func_0x00010c1fcf00(puVar1,param_5,lVar3);
  _objc_release(uVar4);
  func_0x00010c1c7ea0(param_1,puVar1);
  func_0x00010c163f80(puVar1,param_5,3);
  func_0x00010c2148a0(puVar1,param_5,param_11);
  uVar4 = param_6;
  func_0x00010c15ed20(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164480(puVar1,param_5,uVar4);
  _objc_release(uVar4);
  func_0x00010c214740(puVar1,param_5,(undefined1)param_12);
  func_0x00010c214780(puVar1,param_5,param_12._1_1_);
  func_0x00010c214760(puVar1,param_5,param_14);
  uVar4 = *(undefined8 *)(param_4 + 0xb8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_10);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 105769230; end: 105769393; -[SCPromotedStoriesLogger logPromotedTileTappedWithStory:tilePosition:tileSize:tileTapCoordinates:didTapCta:] */

void FUN_105769230(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,int param_8)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = param_2;
  _objc_retain(param_7);
  uVar2 = 4;
  if (param_8 != 0) {
    uVar2 = 5;
  }
  lVar1 = param_3;
  func_0x00010becbe60(param_3,param_4,uVar2,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    if (param_8 == 0) {
      func_0x00010c214a00(lVar1,param_4,1);
    }
    else {
      func_0x00010c186780();
    }
    func_0x00010c162f60(lVar1,param_4,param_6);
    if (((param_7 != 0) && (2.220446049250313e-16 < param_1)) &&
       (dVar3 = 2.220446049250313e-16, 2.220446049250313e-16 < param_2)) {
      func_0x00010bdc1060(param_7);
      if (dVar3 <= 0.0) {
        dVar3 = 0.0;
      }
      func_0x00010c214b20(dVar3 / param_1,lVar1);
      if (dVar4 <= 0.0) {
        dVar4 = 0.0;
      }
      func_0x00010c214b60(dVar4 / param_2,lVar1);
      func_0x00010c214b00(lVar1,param_4,(long)dVar3);
      func_0x00010c214b40(lVar1,param_4,(long)dVar4);
      func_0x00010c214aa0(lVar1,param_4,(long)param_1);
      func_0x00010c214820(lVar1,param_4,(long)param_2);
    }
    uVar2 = *(undefined8 *)(param_3 + 0xb8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 105769394; end: 10576949b; -[SCPromotedStoriesLogger _getSequenceIdForServeItemId:] */

undefined8 FUN_105769394(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_3 != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    _objc_retain(param_3);
    func_0x00010c0dff20(lVar5,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar5 == 0) {
      func_0x00010c1d0640(lVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1738,param_3
                         );
    }
    else {
      func_0x00010c0e00e0(lVar1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010c067fc0();
      _objc_release(lVar1);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar5 + 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar2,param_3);
      _objc_release(puVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0(uVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar4 = uVar3;
    func_0x00010c067fc0(uVar3);
    _objc_release(uVar3);
    return uVar4;
  }
  return 0x7fffffffffffffff;
}



/* Entry: 10576949c; end: 1057694c3; -[SCPromotedStoriesLogger _resetDiscoverSessionData] */

/* WARNING: Possible PIC construction at 0x0001057694b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001057694b4) */

void FUN_10576949c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 1057694c4; end: 10576956b; -[SCPromotedStoriesLogger firePromotedStoryInteractionTrack:adTrackInfo:sessionId:] */

void FUN_1057694c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bef4a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be17aa0(param_1,param_2,param_4,param_5,uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  func_0x00010be59e00(param_1,param_2,param_3,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10576956c; end: 10576995b; -[SCPromotedStoriesLogger _firePromotedStoryTrack:sessionId:adResponse:] */

void FUN_10576956c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bfa23e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0ec0a0();
  _objc_release(uVar5);
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = param_5;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 8);
    lVar12 = lVar3;
    func_0x00010c08fa60();
    if (lVar12 != 0) {
      lVar4 = *(long *)(param_1 + 0x88);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar4;
      func_0x00010c29e180();
      _objc_release(lVar4);
      if (lVar12 == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x88);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec9c0();
        _objc_release(uVar5);
      }
    }
    _os_unfair_lock_unlock(param_1 + 8);
    _objc_release(lVar3);
  }
  puVar6 = param_3;
  func_0x00010c2590a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126bdce8;
    func_0x00010bfe6000();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar6);
    puVar7 = puVar6;
  }
  _objc_release(puVar6);
  uVar5 = *(undefined8 *)(param_1 + 0xc0);
  lVar3 = param_5;
  func_0x00010c15ed20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar5);
  _objc_release(lVar3);
  puVar8 = puVar7;
  func_0x00010c2bb1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = param_3;
  func_0x00010c2ba360(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_3;
  func_0x00010c29c0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = (undefined *)0x0;
  if (puVar9 != (undefined *)0x0) {
    puVar9 = param_3;
    func_0x00010c29c0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x00010c0d3c80();
    _objc_release(puVar9);
  }
  lVar12 = *(long *)(param_1 + 0xd0);
  lVar3 = param_5;
  func_0x00010c15ed20(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar12 != 0) {
    if (puVar6 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
    }
    puVar9 = PTR_PTR_1126b92c8;
    func_0x00010bf66720(PTR_PTR_1126b92c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6);
    _objc_release(puVar9);
  }
  puVar9 = puVar7;
  if (puVar6 != (undefined *)0x0) {
    func_0x00010c2bc840(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  puVar7 = PTR_PTR_1126b8da0;
  func_0x00010c115b80(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b8da0;
  func_0x00010c2499a0(PTR_PTR_1126b8da0);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar7;
  func_0x00010c2804a0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x0001084b926c(param_5,puVar9,param_4,0,5,puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar7);
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c278880();
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar12);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar8);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10576995c; end: 105769b7b; -[SCPromotedStoriesLogger logPromotedStoryReported:reason:flagNote:tileSize:] */

void FUN_10576995c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bae7cc0(param_6);
  func_0x00010be57580(param_3);
  puVar1 = PTR_PTR_1126b93e0;
  _objc_alloc(PTR_PTR_1126b93e0);
  func_0x00010bff1680();
  _objc_release(param_7);
  _objc_release(param_6);
  puVar2 = param_5;
  func_0x00010bef4a60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07b560(param_3);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_3 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f480();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126bdcc8;
  puVar5 = param_5;
  if ((int)uVar4 == 0) {
    func_0x00010bef4a60(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x0001063ba690(*(undefined8 *)(param_3 + 0x48),*(undefined8 *)(param_3 + 0x50),param_1,
                        param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bef4a60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef5920(*(undefined8 *)(param_3 + 0x48),*(undefined8 *)(param_3 + 0x50),param_1,
                        param_2,0,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  puVar5 = param_5;
  func_0x00010bef4a60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be17aa0(param_3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105769b7c; end: 105769b7f; -[SCPromotedStoriesLogger logPromotedStoryTileAttachmentWillPresent:] */

void FUN_105769b7c(void)

{
  return;
}



/* Entry: 105769b80; end: 105769d2f; -[SCPromotedStoriesLogger logPromotedStoryTileAttachmentPresented:loggingMetadata:adLifecycleTimestamps:tileCtaOverrides:attachmentType:swipeCount:] */

void FUN_105769b80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar3);
  if (param_7 == 2) {
    uVar1 = *(ulong *)(param_1 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0ec0c0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      func_0x00010be178c0(param_1);
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105769d30; end: 105769d67;  */

void FUN_105769d30(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be575e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105769d68; end: 105769ebf; -[SCPromotedStoriesLogger _logPromotedStoryTileTappedForAdResponse:loggingMetadata:tileCtaOverrides:] */

void FUN_105769d68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0xb0);
  uVar4 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c0f5b20(uVar5);
  uVar4 = param_3;
  func_0x00010bef52c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar1 = uVar4;
  func_0x00010bfb1920(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bef60a0(uVar1);
  uVar3 = param_4;
  func_0x00010c26eda0(param_4);
  _objc_release(param_4);
  func_0x00010beed820(uVar5);
  func_0x00010c0ad160(uVar2,param_2,uVar4,uVar3);
  _objc_release(uVar2);
  if (param_5 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ad200();
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 105769ec0; end: 105769fbf; -[SCPromotedStoriesLogger _resolveAppInstallStatusForAdResponse:completion:] */

void FUN_105769ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105769fc0;
  puStack_58 = &UNK_110848378;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105769fc0; end: 10576a127;  */

void FUN_105769fc0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bef52c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010c242040(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf054e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bf05300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(lVar1 + 0xa0);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bfc2540();
    _objc_release(uVar5);
    uVar6 = *(undefined8 *)(lVar1 + 0x40);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10576a128;
    puStack_68 = &UNK_110860cf8;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uStack_60 = uVar5;
    uStack_58 = uVar2;
    func_0x00010c0f7fc0(uVar6,param_2,&puStack_80);
    _objc_release(uStack_60);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10576a128; end: 10576a143;  */

void FUN_10576a128(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010576a13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 10576a144; end: 10576a157; -[SCPromotedStoriesLogger logPromotedStoryFollowupAttachmentPresented:loggingMetadata:adLifecycleTimestamps:attachmentType:swipeCount:] */

void FUN_10576a144(undefined8 param_1)

{
  long in_x5;
  
  if (in_x5 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010be178d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fireIntermediateTrackForAdRespo_1125637d0)
    ;
    return;
  }
  return;
}



/* Entry: 10576a158; end: 10576a28f; -[SCPromotedStoriesLogger _fireIntermediateTrackForAdResponse:loggingMetadata:adLifecycleTimestamps:swipeCount:] */

void FUN_10576a158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uStack_50 = param_6;
  _objc_retain(param_4);
  func_0x00010be948a0(param_1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10576a290; end: 10576a557;  */

void FUN_10576a290(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  lVar1 = param_3 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(lVar1 + 0xb0);
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bfe5ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar8 = PTR_PTR_1126b9300;
    func_0x00010bfe6000(PTR_PTR_1126b9300);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010c2a79c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2bab40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar8);
    puVar3 = PTR_PTR_1126bdcf0;
    _objc_alloc(PTR_PTR_1126bdcf0);
    uVar11 = 0;
    uVar9 = 0;
    func_0x00010c0266c0(0);
    puVar8 = PTR_PTR_1126b92f8;
    func_0x00010bfe6000(PTR_PTR_1126b92f8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010c2a7e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar5;
    func_0x00010c2aaae0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar8;
    func_0x00010c2a8500(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126afec0;
    func_0x00010beed820(uVar7);
    func_0x00010c155420(puVar8);
    uVar6 = *(undefined8 *)(lVar1 + 0x60);
    uVar10 = uVar9;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf1f480();
    _objc_release(uVar6);
    puVar8 = PTR_PTR_1126bdcc8;
    if ((int)uVar2 == 0) {
      puVar8 = *(undefined **)(param_3 + 0x20);
      func_0x00010c118260(*(undefined8 *)(param_3 + 0x30));
      func_0x0001063ba690(*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50),uVar10,param_2
                          ,uVar9,puVar8,0,0,puVar5,1,1,0,0,uVar11 & 0xffffffffffffff00,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c118260(*(undefined8 *)(param_3 + 0x30));
      func_0x00010bef5920(*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50),uVar10,param_2
                          ,uVar9,puVar8);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010be17aa0(lVar1);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10576a558; end: 10576a6a3; -[SCPromotedStoriesLogger logPromotedStoryCtaAttachmentBackgrounded:adLifecycleTimestamps:attachmentTrackInfo:tileSize:swipeCount:] */

void FUN_10576a558(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_3);
  uVar1 = *(undefined8 *)(param_3 + 0x40);
  _objc_copyWeak(auStack_78,auStack_58);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_70 = param_1;
  uStack_68 = param_2;
  uStack_60 = param_8;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10576a6a4; end: 10576a6eb;  */

void FUN_10576a6a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be57500(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10576a6ec; end: 10576a847; -[SCPromotedStoriesLogger logPromotedStoryCtaAttachmentDidDismiss:adLifecycleTimestamps:attachmentTrackInfo:tileSize:fireTrack:swipeCount:] */

void FUN_10576a6ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_3);
  uVar1 = *(undefined8 *)(param_3 + 0x40);
  _objc_copyWeak(auStack_90,auStack_68);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_88 = param_1;
  uStack_80 = param_2;
  uStack_78 = param_9;
  uStack_70 = param_8;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10576a848; end: 10576a88f;  */

void FUN_10576a848(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be57500(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10576a890; end: 10576aa33; -[SCPromotedStoriesLogger _logPromotedStoryCtaAttachmentDidDismiss:adLifecycleTimestamps:attachmentTrackInfo:restartViewTimeStopwatch:fireTrack:tileSize:swipeCount:] */

void FUN_10576a890(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,int param_9,
                  undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bf0ae40(*(undefined8 *)(param_3 + 0x40));
  uVar5 = *(undefined8 *)(param_3 + 0xb0);
  uVar2 = param_5;
  func_0x00010bef4a60(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar5,param_4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126afec0;
  func_0x00010beed820(uVar5);
  func_0x00010c155420(puVar1);
  if (param_8 != 0) {
    func_0x00010c138160(uVar5);
  }
  if (param_9 != 0) {
    func_0x00010be57520(uVar4,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_10);
    uVar4 = *(undefined8 *)(param_3 + 0x88);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010bef4a60(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec9c0(uVar4,param_4,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
  }
  _objc_release(uVar5);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10576aa34; end: 10576ac0b; -[SCPromotedStoriesLogger _logPromotedStoryCtaAttachmentTrack:adLifecycleTimestamps:attachmentTrackInfo:tileTimeViewedInMillis:tileSize:swipeCount:] */

void FUN_10576aa34(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_4 + 0x78);
  func_0x00010bf22820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_4 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f480();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126bdcc8;
  puVar4 = param_6;
  if ((int)uVar3 == 0) {
    func_0x00010bef4a60(param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x0001063ba690(*(undefined8 *)(param_4 + 0x48),*(undefined8 *)(param_4 + 0x50),param_2,
                        param_3,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bef4a60(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef5920(*(undefined8 *)(param_4 + 0x48),*(undefined8 *)(param_4 + 0x50),param_2,
                        param_3,param_1,puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  puVar4 = param_6;
  func_0x00010bef4a60(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be17aa0(param_4);
  _objc_release(puVar4);
  func_0x00010be59e00(param_4);
  _objc_release(puVar5);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10576ac0c; end: 10576ac1b; -[SCPromotedStoriesLogger logPromotedStoryReportCancelled:tileSize:] */

void FUN_10576ac0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be57590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logPromotedStoryReportActionWit_112573700,param_3,0xffffffffffffffff,
             0xffffffffffffffff,0);
  return;
}



/* Entry: 10576ac1c; end: 10576ae1b; -[SCPromotedStoriesLogger logPromotedStoryHidden:reason:tileSize:] */

void FUN_10576ac1c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  func_0x00010bef2ae0(PTR_PTR_1126bdcf8);
  func_0x00010be57580(param_3);
  puVar1 = PTR_PTR_1126b93d8;
  _objc_alloc(PTR_PTR_1126b93d8);
  func_0x00010bff16a0();
  puVar2 = param_5;
  func_0x00010bef4a60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07b560(param_3);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_3 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf1f480();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126bdcc8;
  puVar5 = param_5;
  if ((int)uVar4 == 0) {
    func_0x00010bef4a60(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x0001063ba690(*(undefined8 *)(param_3 + 0x48),*(undefined8 *)(param_3 + 0x50),param_1,
                        param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bef4a60(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef5920(*(undefined8 *)(param_3 + 0x48),*(undefined8 *)(param_3 + 0x50),param_1,
                        param_2,0,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  puVar5 = param_5;
  func_0x00010bef4a60(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be17aa0(param_3);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10576ae1c; end: 10576afcb; -[SCPromotedStoriesLogger _logPromotedStoryReportActionWithPromotedStory:adFlaggedReason:adHiddenReason:exitType:] */

void FUN_10576ae1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bdd00;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c20ddc0();
  uVar4 = param_3;
  func_0x00010bef2c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010c15ed20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c164260(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010bef4a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c258fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0fdbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1662a0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar4 = param_3;
  func_0x00010bef4a60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar4;
  func_0x00010c099300(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c166280(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar4);
  func_0x00010c163640(puVar1,param_2,param_4);
  func_0x00010c1636e0(puVar1,param_2,param_5);
  func_0x00010c198620(puVar1,param_2,param_6);
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10576afcc; end: 10576b0ef; -[SCPromotedStoriesLogger isPromotedTileCtaEnabledWithAdResponse:] */

undefined8 FUN_10576afcc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bef52c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bef60a0(lVar2);
    lVar4 = lVar2;
    func_0x00010bef4240(lVar2);
    lVar5 = param_3;
    func_0x00010c258fc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar6 = lVar5;
    func_0x00010c26eae0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c118220(uVar3,param_2,lVar1,lVar4,lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar3);
    uVar3 = uVar7;
    func_0x00010bf926c0(uVar7);
    _objc_release(uVar7);
    _objc_release(lVar2);
    return uVar3;
  }
  return 0;
}



/* Entry: 10576b0f0; end: 10576b1c3; -[SCPromotedStoriesLogger logPromotedStoryAnimationStarted:] */

void FUN_10576b0f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010afef744();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_3);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010bef52c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bef60a0(lVar3);
    func_0x00010c0acf80(uVar4,param_2,lVar1);
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10576b1c4; end: 10576b2a7; -[SCPromotedStoriesLogger logPromotedStoryAnimationCompleted:result:] */

void FUN_10576b1c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010afef744();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_3);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010bef52c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bef60a0(lVar3);
    func_0x00010c0acf60(uVar4,param_2,lVar1,param_4);
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10576b2a8; end: 10576b4eb; -[SCPromotedStoriesLogger logPromotedStoryFetched:] */

void FUN_10576b2a8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lStack_68;
  
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126bd4d8;
  uVar10 = param_4;
  func_0x00010bef4360(param_4);
  _objc_retainAutoreleasedReturnValue();
  lStack_68 = 0;
  func_0x00010c0f40e0(puVar2,param_3,uVar10,&lStack_68);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_68;
  _objc_retain(lStack_68);
  _objc_release(uVar10);
  if (lVar1 == 0) {
    puVar3 = puVar2;
    func_0x00010bef5580(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bdcd8;
    _objc_opt_new(PTR_PTR_1126bdcd8);
    func_0x00010c2148e0();
    uVar10 = param_4;
    func_0x00010c15ed20(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar10;
    func_0x00010b70473c();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164480(puVar3,param_3,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar10);
    puVar7 = puVar2;
    func_0x00010bef2c20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010b70473c();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163720(puVar3,param_3,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar7 = puVar4;
    func_0x00010bef54c0(puVar4);
    func_0x00010848f414();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164dc0(puVar3,param_3,puVar7);
    _objc_release(puVar7);
    func_0x00010beec800(*(undefined8 *)(param_2 + 0x90));
    func_0x00010c214900(puVar3,param_3,(long)(param_1 * 1000.0));
    uVar10 = param_4;
    func_0x00010bfec9e0(param_4);
    func_0x00010c1e02e0(puVar3,param_3,uVar10);
    uVar10 = *(undefined8 *)(param_2 + 0xb8);
    func_0x00010c269d40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar10);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 10576b4ec; end: 10576b5db; -[SCPromotedStoriesLogger logPromotedStoryInserted:tilePosition:] */

void FUN_10576b4ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c25b720();
  if (lVar1 == 5) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_48,auStack_38);
    _objc_retain(param_3);
    uStack_40 = param_4;
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10576b5dc; end: 10576b613;  */

void FUN_10576b5dc(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be57540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10576b614; end: 10576b783; -[SCPromotedStoriesLogger _logPromotedStoryInserted:tilePosition:] */

void FUN_10576b614(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x40));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = param_3;
  func_0x00010c259740(param_3);
  func_0x00010c0df880(puVar2,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(ulong *)(param_1 + 200);
  func_0x00010c0e00e0(uVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c071f40();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 200),param_2,puVar1,puVar2);
    uVar7 = param_3;
    func_0x00010c259560(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010afef744();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    lVar6 = param_1;
    func_0x00010becbe60(param_1,param_2,1,uVar5,0);
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
      func_0x00010c162f60(lVar6,param_2,param_4);
      uVar7 = *(undefined8 *)(param_1 + 0xb8);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar7);
    }
    _objc_release(lVar6);
    _objc_release(uVar5);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10576b784; end: 10576b927; -[SCPromotedStoriesLogger logPromotedStoryInsertionViolation:organicGarmSafety:] */

void FUN_10576b784(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x00010c259560();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010afef744();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126b9280;
      _objc_opt_new(PTR_PTR_1126b9280);
      func_0x00010c163f80();
      lVar4 = lVar2;
      func_0x00010bef2c20(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c163720(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c099300(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bdc40(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010c15ed20(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fd160(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010bfe5ec0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c164260(puVar3,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010bf21060();
      if (2 < lVar4 - 1U) {
        lVar4 = 0;
      }
      func_0x00010c173b80(puVar3,param_2,lVar4);
      if (3 < param_4 - 1U) {
        param_4 = 0;
      }
      func_0x00010c1d6380(puVar3,param_2,param_4);
      func_0x00010c173b40(puVar3,param_2,6);
      uVar5 = *(undefined8 *)(param_1 + 0xb8);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e60();
      _objc_release(uVar5);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10576b928; end: 10576b92f; -[SCPromotedStoriesLogger currentDiscoverSessionId] */

undefined8 FUN_10576b928(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 10576b930; end: 10576ba5b; -[SCPromotedStoriesLogger .cxx_destruct] */

void FUN_10576b930(long param_1)

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
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10576ba5c; end: 10576ba97; -[SCPromotedStoriesS2RInfoProvider init] */

void FUN_10576ba5c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126ea170;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
  }
  return;
}



/* Entry: 10576ba98; end: 10576bb0b; -[SCPromotedStoriesS2RInfoProvider setLastViewedPromotedStory:data:] */

void FUN_10576ba98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_4;
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 10576bb0c; end: 10576bb57; -[SCPromotedStoriesS2RInfoProvider lastViewedPromotedStory:] */

void FUN_10576bb0c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retainAutorelease();
  *param_3 = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10576bb58; end: 10576bb5f; -[SCPromotedStoriesS2RInfoProvider getMetaInfoByProject:subProject:description:] */

undefined8 FUN_10576bb58(void)

{
  return 0;
}



/* Entry: 10576bb60; end: 10576bb8f; -[SCPromotedStoriesS2RInfoProvider .cxx_destruct] */

void FUN_10576bb60(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10576bb90; end: 10576bd97; -[SCPromotedStoriesTileAttachmentTrackBuilder buildTileAttachmentTrack:adLifecycleTimestamps:swipeCount:] */

void FUN_10576bb90(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b9300;
  func_0x00010bfe6000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0cd80(param_5);
  dVar6 = param_1;
  func_0x00010bf0ce80(param_5);
  puVar2 = puVar1;
  func_0x00010c2b3360(param_1 - dVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2a79c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10576bd98;
  uStack_70 = 0x10576bda8;
  puVar1 = PTR_PTR_1126b92f8;
  func_0x00010bfe6000();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = puStack_88[5];
  puStack_68 = puVar1;
  func_0x00010c2aaae0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = puStack_88[5];
  puStack_88[5] = uVar4;
  _objc_release(uVar5);
  func_0x00010c0c1720(param_4);
  uVar4 = puStack_88[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(puStack_68);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10576bd98; end: 10576bdaf;  */

void FUN_10576bd98(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10576bdb0; end: 10576c04f;  */

void FUN_10576bdb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  _objc_retain(param_2);
  func_0x00010c2a7e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010c2bce60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10576c050; end: 10576c09b;  */

void FUN_10576c050(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010c2bce60(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10576c09c; end: 10576c0a3;  */

void FUN_10576c09c(void)

{
  return;
}



/* Entry: 10576c0a4; end: 10576c1e3; -[SCPromotedStoryRequestProviderImpl initWithFeatureSettingsService:adConfigProvider:userAdIdProvider:applicationPreferences:browserPrivacyConsentInfoManager:] */

undefined1 *
FUN_10576c0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ea178;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bdd10;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10576c1e4; end: 10576c1f3; -[SCPromotedStoryRequestProviderImpl initWithFeatureSettingsService:adConfigProvider:] */

void FUN_10576c1e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c011cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFeatureSettingsService_a_1125e20f8,param_3,param_4,0,0,0);
  return;
}



/* Entry: 10576c1f4; end: 10576c5ef; -[SCPromotedStoryRequestProviderImpl promotedStoryAdsClientInfo] */

void FUN_10576c1f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar2);
  puVar6 = PTR_PTR_1126bdd08;
  _objc_retain(uVar5);
  _objc_retain(uVar13);
  _objc_retain(uVar3);
  _objc_retain(uVar1);
  _objc_opt_new(puVar6);
  func_0x00010c2b2e60();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bf0ece0(uVar1);
  func_0x00010c2a8b80(puVar6,param_3,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010bf9de60(uVar1);
  _objc_release(uVar1);
  func_0x00010c2ad900(puVar6,param_3,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b8c98;
  func_0x00010c118100();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c25d0a0(puVar8,param_3,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = puVar10;
  func_0x00010c08fa60();
  if (puVar9 != (undefined *)0x0) {
    func_0x00010c2abd00(puVar6,param_3,puVar10);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b8c98;
    func_0x00010c0f0400();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf529e0();
    if (puVar11 != (undefined *)0x0) {
      func_0x00010c2abd40(puVar6,param_3,puVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(puVar9);
  }
  uVar7 = uVar2;
  func_0x00010bf93c80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010c149400(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c2b76e0(puVar6,param_3,uVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  func_0x00010c2ad280(puVar6,param_3,uVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar11 = PTR_PTR_1126b24e8;
  func_0x00010c2763c0(PTR_PTR_1126b24e8,param_3,0);
  func_0x00010c0df880(puVar9,param_3,(ulong)puVar11 >> 10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac6e0(puVar6,param_3,puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar11 = PTR_PTR_1126b24e8;
  func_0x00010bfb7440(PTR_PTR_1126b24e8,param_3,0);
  func_0x00010c0df880(puVar9,param_3,(ulong)puVar11 >> 10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac6c0(puVar6,param_3,puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfc9e80(uVar13);
  func_0x00010c0df720(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7b20(puVar6,param_3,puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfc9e00(uVar13);
  _objc_release(uVar13);
  func_0x00010c0df720(param_1,puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7aa0(puVar6,param_3,puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  uVar13 = uVar5;
  func_0x00010bfc9140(uVar5);
  _objc_release(uVar5);
  func_0x00010c2acee0(puVar6,param_3,uVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x00010bf21f60(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10576c5f0; end: 10576c65b; -[SCPromotedStoryRequestProviderImpl .cxx_destruct] */

void FUN_10576c5f0(long param_1)

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



/* Entry: 10576c65c; end: 10576c6f7;  */

undefined ** FUN_10576c65c(ulong param_1)

{
  if (param_1 < 8) {
    return (undefined **)(&PTR_PTR_1108b0208)[param_1];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 10576c6f8; end: 10576ccaf;  */

void FUN_10576c6f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b8ca0;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  func_0x00010bef60a0(param_1);
  func_0x00010c25d240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  lVar3 = param_1;
  func_0x00010bf054e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 != 0) {
    lVar3 = param_1;
    func_0x00010bf054e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf05300();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf054e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf06520();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bf054e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf05d60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar2 = puVar1;
  }
  lVar3 = param_1;
  func_0x00010c2a4760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 != 0) {
    lVar3 = param_1;
    func_0x00010c2a4760();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2a4740();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c2a4760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1d600();
    lVar7 = param_1;
    func_0x00010c2a4760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf00f20();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar2 = puVar1;
  }
  lVar3 = param_1;
  func_0x00010bf67c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 != 0) {
    lVar3 = param_1;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf06520();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c116120();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf68360();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf67dc0();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar2 = puVar1;
  }
  lVar3 = param_1;
  func_0x00010c23aec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 != 0) {
    lVar3 = param_1;
    func_0x00010c23aec0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2a2e80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2a4740();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c23aec0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf68520();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010bf68360();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c23aec0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf289a0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010c23aec0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010bf68520();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c116120();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1;
    func_0x00010c23aec0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x00010c2a2e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1d600();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    puVar2 = puVar1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10576ccb0; end: 10576f4eb;  */

void FUN_10576ccb0(undefined *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  long lVar30;
  long lVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puStack_150;
  undefined *puStack_138;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_10576f4ec;
  uStack_b0 = 0x10576f4fc;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110daafd8;
  lVar31 = param_3;
  func_0x00010c149400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0;
  _dispatch_semaphore_create();
  func_0x00010c0e33e0(param_5);
  uVar2 = 0;
  _dispatch_time(0,1000000000);
  _dispatch_semaphore_wait(uVar1,uVar2);
  puVar34 = param_1;
  func_0x00010bf529e0();
  if (puVar34 == (undefined *)0x0) {
    puVar34 = (undefined *)0x0;
    goto LAB_10576f068;
  }
  puStack_150 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puStack_c8[5];
  puStack_c8[5] = puVar34;
  _objc_release(uVar2);
  puVar34 = puStack_150;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar34;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = puVar3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar34);
  puVar34 = puVar32;
  func_0x00010c08fa60();
  if (puVar34 != (undefined *)0x0) {
    puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
  }
  puVar34 = puStack_150;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar34;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar34);
  puVar34 = puVar4;
  func_0x00010c08fa60();
  if (puVar34 != (undefined *)0x0) {
    puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
  }
  puVar34 = puStack_150;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar34;
  func_0x0001084c6640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar34);
  puVar34 = puVar3;
  func_0x00010c08fa60();
  if (puVar34 != (undefined *)0x0) {
    puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
  }
  puVar34 = puStack_150;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar34;
  func_0x0001084c6a48();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar34);
  puVar34 = puVar5;
  func_0x00010c08fa60();
  if (puVar34 != (undefined *)0x0) {
    puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
  }
  puVar34 = puStack_150;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar34;
  func_0x00010c099300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar34);
  puVar34 = puVar6;
  func_0x00010c08fa60();
  if (puVar34 != (undefined *)0x0) {
    puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
  }
  puVar34 = puVar3;
  func_0x00010c08fa60();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar34 == (undefined *)0x0) {
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = puStack_c8[5];
  puStack_c8[5] = puVar7;
  _objc_release(uVar2);
  puVar34 = puVar32;
  func_0x00010c08fa60();
  if (puVar34 != (undefined *)0x0) {
    puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
  }
  if (puVar6 != (undefined *)0x0) {
    puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
  }
  puVar34 = puStack_150;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar34;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c130960();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar33;
  func_0x00010c0c6e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar33);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar34);
  puVar34 = puVar10;
  func_0x00010c08fa60();
  if (puVar34 != (undefined *)0x0) {
    puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
  }
  lVar11 = lVar31;
  func_0x00010c08fa60();
  if (lVar11 != 0) {
    puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
  }
  puVar34 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar34;
  func_0x00010bfe5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar34);
  puVar34 = puVar7;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar34;
  func_0x00010c08fa60();
  _objc_release(puVar34);
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar8 != (undefined *)0x0) {
    puVar8 = puVar7;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
    _objc_release(puVar8);
  }
  puVar34 = puStack_150;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar34;
  func_0x00010bef4d80();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c08fa60();
  _objc_release(puVar8);
  _objc_release(puVar34);
  if (puVar9 != (undefined *)0x0) {
    puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
    puVar34 = puStack_150;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar34;
    func_0x00010bef4d80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar34);
    puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar33;
    _objc_release(uVar2);
    puVar33 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar33;
    _objc_release(uVar2);
    _objc_release(puVar8);
    _objc_release(puVar34);
    _objc_release(puVar9);
  }
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puStack_c8[5];
  puStack_c8[5] = puVar34;
  _objc_release(uVar2);
  puVar8 = puStack_150;
  func_0x00010bef4a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar8 != (undefined *)0x0) {
    puVar8 = puStack_150;
    func_0x00010bef4a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
    _objc_release(puVar8);
  }
  puVar8 = puStack_150;
  func_0x00010bef4a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar8 != (undefined *)0x0) {
    puVar8 = puStack_150;
    func_0x00010bef4a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
    _objc_release(puVar8);
  }
  puVar8 = puStack_150;
  func_0x00010bef4880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar8 != (undefined *)0x0) {
    puVar8 = puStack_150;
    func_0x00010bef4880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
    _objc_release(puVar8);
  }
  puVar8 = puStack_150;
  func_0x00010bef49a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar8 != (undefined *)0x0) {
    puVar8 = puStack_150;
    func_0x00010bef49a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
    _objc_release(puVar8);
  }
  puVar8 = puStack_150;
  func_0x00010bef36e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar8 != (undefined *)0x0) {
    puVar8 = puStack_150;
    func_0x00010bef36e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
    _objc_release(puVar8);
  }
  puVar8 = puStack_150;
  func_0x00010bef3540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar8 != (undefined *)0x0) {
    puVar8 = puStack_150;
    func_0x00010bef3540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
    _objc_release(puVar8);
  }
  puVar8 = puStack_150;
  func_0x00010bef3020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar8 != (undefined *)0x0) {
    puVar8 = puStack_150;
    func_0x00010bef3020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
    _objc_release(puVar8);
  }
  puVar8 = puStack_150;
  func_0x00010bef2a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar8 != (undefined *)0x0) {
    puVar8 = puStack_150;
    func_0x00010bef2a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
    _objc_release(puVar8);
  }
  puVar8 = puStack_150;
  func_0x00010bef29e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar8 != (undefined *)0x0) {
    puVar8 = puStack_150;
    func_0x00010bef29e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puStack_c8[5];
    puStack_c8[5] = puVar34;
    _objc_release(uVar2);
    _objc_release(puVar8);
  }
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = puStack_c8[5];
  puStack_c8[5] = puVar34;
  _objc_release(uVar2);
  puVar34 = puStack_150;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar34;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar34);
  for (puStack_138 = (undefined *)0x0; puVar34 = puVar8, func_0x00010bf529e0(),
      puStack_138 < puVar34; puStack_138 = puStack_138 + 1) {
    puVar34 = puVar8;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar34;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar34);
    puVar33 = puVar9;
    func_0x00010c274c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar33 != (undefined *)0x0) {
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar9;
      func_0x00010c274c60();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c265100();
      _objc_retainAutoreleasedReturnValue();
      puVar33 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar15 = puVar9;
      func_0x00010c274c60(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c4bc0();
      func_0x00010c0df7c0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar33;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puStack_c8[5];
      puStack_c8[5] = puVar34;
      _objc_release(uVar2);
      _objc_release(puVar16);
      _objc_release(puVar33);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      puVar34 = puVar9;
      func_0x00010c274c60();
      _objc_retainAutoreleasedReturnValue();
      puVar33 = puVar34;
      func_0x00010bf451a0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar33 == (undefined *)0x0) {
        puStack_108 = (undefined *)0x0;
      }
      else {
        ppuStack_a0 = (undefined **)0x0;
        puVar12 = PTR_PTR_1126bdd18;
        func_0x00010c0f40e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_108 = puVar12;
        if (ppuStack_a0 != (undefined **)0x0) {
          puStack_108 = (undefined *)0x0;
        }
        _objc_retain();
        _objc_release(puVar12);
      }
      _objc_release(puVar33);
      _objc_release(puVar34);
      puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puStack_108 == (undefined *)0x0) {
        puVar33 = puVar9;
        func_0x00010c274c60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c6c20();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = puStack_c8[5];
        puStack_c8[5] = puVar34;
        _objc_release(uVar2);
      }
      else {
        puVar33 = puStack_150;
        func_0x00010bef4a60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071100();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = puStack_c8[5];
        puStack_c8[5] = puVar34;
        _objc_release(uVar2);
        _objc_release(puVar33);
        uVar2 = puStack_c8[5];
        _objc_retain(puStack_108);
        puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_retain(uVar2);
        puVar33 = puStack_108;
        func_0x00010c26b180();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puStack_108;
        func_0x00010bf14640();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puStack_108;
        func_0x00010bf40ce0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010bf40c40();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar33);
        puVar33 = puStack_108;
        func_0x00010c084fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar33;
        func_0x00010bf529e0();
        _objc_release(puVar33);
        if (puVar12 == (undefined *)0x0) {
          ppuVar20 = &PTR____CFConstantStringClassReference_110daafd8;
        }
        else {
          puVar33 = (undefined *)0x0;
          ppuStack_110 = &PTR____CFConstantStringClassReference_110daafd8;
          do {
            puVar12 = puStack_108;
            func_0x00010c084fe0();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar12;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar12);
            ppuVar20 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            puVar12 = puVar13;
            func_0x00010c115e60();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = puVar13;
            func_0x00010c0c4040();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf529e0();
            puVar15 = puVar13;
            func_0x00010c2711a0();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar13;
            func_0x00010c260dc0();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar13;
            func_0x00010c112a80();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar13;
            func_0x00010c149440();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0f7da0();
            puVar19 = puVar13;
            func_0x00010bf40c40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuStack_110);
            _objc_release(puVar19);
            _objc_release(puVar18);
            _objc_release(puVar17);
            _objc_release(puVar16);
            _objc_release(puVar15);
            _objc_release(puVar14);
            _objc_release(puVar12);
            _objc_release(puVar13);
            puVar12 = puStack_108;
            func_0x00010c084fe0();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar12;
            func_0x00010bf529e0();
            _objc_release(puVar12);
            puVar33 = puVar33 + 1;
            ppuStack_110 = ppuVar20;
          } while (puVar33 < puVar13);
        }
        puVar33 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar34);
        puVar34 = puStack_108;
        func_0x00010c0efda0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar34;
        func_0x00010bf529e0();
        _objc_release(puVar34);
        if (puVar12 == (undefined *)0x0) {
          ppuVar21 = &PTR____CFConstantStringClassReference_110daafd8;
        }
        else {
          puVar34 = (undefined *)0x0;
          ppuVar22 = &PTR____CFConstantStringClassReference_110daafd8;
          do {
            puVar12 = puStack_108;
            func_0x00010c0efda0();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar12;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar12);
            ppuVar21 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c27dd80();
            func_0x00010c104260();
            func_0x00010c0e8ca0();
            func_0x00010c14de00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar22);
            puVar12 = puVar13;
            func_0x00010c27dd80();
            ppuVar22 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
            if ((int)puVar12 == 3) {
              puVar12 = puVar13;
              func_0x00010c26b700();
              _objc_retainAutoreleasedReturnValue();
              puVar14 = puVar13;
              func_0x00010c26c520();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c22a600();
              puVar15 = puVar13;
              func_0x00010c26c520();
              _objc_retainAutoreleasedReturnValue();
              puVar16 = puVar15;
              func_0x00010c22a620();
              _objc_retainAutoreleasedReturnValue();
              puVar17 = puVar13;
              func_0x00010c26c520();
              _objc_retainAutoreleasedReturnValue();
              puVar18 = puVar17;
              func_0x00010c26b920();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14de00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppuVar21);
              _objc_release(puVar18);
              _objc_release(puVar17);
              _objc_release(puVar16);
              _objc_release(puVar15);
              _objc_release(puVar14);
              _objc_release(puVar12);
              ppuVar21 = ppuVar22;
            }
            _objc_release(puVar13);
            puVar12 = puStack_108;
            func_0x00010c0efda0();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar12;
            func_0x00010bf529e0();
            _objc_release(puVar12);
            puVar34 = puVar34 + 1;
            ppuVar22 = ppuVar21;
          } while (puVar34 < puVar13);
        }
        puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar33);
        _objc_release(ppuVar21);
        _objc_release(ppuVar20);
        _objc_release(puStack_108);
        puVar33 = (undefined *)puStack_c8[5];
        puStack_c8[5] = puVar34;
      }
      _objc_release(puVar33);
      _objc_release(puStack_108);
    }
    puVar34 = puVar9;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar34 != (undefined *)0x0) {
      puVar12 = puVar9;
      func_0x00010bf20540();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puStack_c8[5];
      _objc_retain();
      puVar33 = PTR_PTR_1126b8ca0;
      puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_retain(uVar2);
      func_0x00010bef60a0(puVar12);
      func_0x00010c25d240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(puVar33);
      puVar13 = puVar12;
      func_0x00010bf054e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar33 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar13 != (undefined *)0x0) {
        puVar13 = puVar12;
        func_0x00010bf054e0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010bf05300();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar12;
        func_0x00010bf054e0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar15;
        func_0x00010bf06520();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar12;
        func_0x00010bf054e0();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar17;
        func_0x00010bf05d60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar34);
        _objc_release(puVar18);
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        puVar34 = puVar33;
      }
      puVar13 = puVar12;
      func_0x00010c2a4740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar33 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar13 != (undefined *)0x0) {
        puVar13 = puVar12;
        func_0x00010c2a4740();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010c2a4740();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar12;
        func_0x00010c2a4740();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1d600();
        puVar17 = puVar12;
        func_0x00010c2a4740();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf00f20();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar34);
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        puVar34 = puVar33;
      }
      puVar13 = puVar12;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar33 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar13 != (undefined *)0x0) {
        puVar13 = puVar12;
        func_0x00010bf67c00();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010c28f280();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar12;
        func_0x00010bf67c00();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar15;
        func_0x00010bf06520();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar12;
        func_0x00010bf67c00();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar17;
        func_0x00010c116120();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar12;
        func_0x00010bf67c00();
        _objc_retainAutoreleasedReturnValue();
        puVar23 = puVar19;
        func_0x00010bf68360();
        _objc_retainAutoreleasedReturnValue();
        puVar24 = puVar12;
        func_0x00010bf67c00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf67dc0();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar34);
        _objc_release(puVar24);
        _objc_release(puVar23);
        _objc_release(puVar19);
        _objc_release(puVar18);
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        puVar34 = puVar33;
      }
      puVar33 = puVar12;
      func_0x00010bef5940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar13 = puVar34;
      if (puVar33 != (undefined *)0x0) {
        puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar34);
      }
      puVar33 = puVar12;
      func_0x00010bef59c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar34 = puVar13;
      if (puVar33 != (undefined *)0x0) {
        puVar34 = puVar12;
        func_0x00010bef59c0();
        _objc_retainAutoreleasedReturnValue();
        puVar33 = puVar34;
        func_0x00010c096c80();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar33;
        func_0x00010bf529e0();
        _objc_release(puVar33);
        _objc_release(puVar34);
        puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        if (puVar14 != (undefined *)0x0) {
          puVar33 = (undefined *)0x0;
          puVar13 = puVar34;
          do {
            puVar34 = puVar12;
            func_0x00010bef59c0();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar34;
            func_0x00010c096c80();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar15;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar15);
            _objc_release(puVar34);
            puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            puVar15 = puVar16;
            func_0x00010c14f6c0();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar16;
            func_0x00010c14f6e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14de00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar13);
            _objc_release(puVar17);
            _objc_release(puVar15);
            _objc_release(puVar16);
            puVar33 = puVar33 + 1;
            puVar13 = puVar34;
          } while (puVar14 != puVar33);
        }
      }
      puVar13 = puVar12;
      func_0x00010bf3fc80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar33 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar13 != (undefined *)0x0) {
        puVar14 = puVar12;
        func_0x00010bf3fc80();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010bfe0440();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR_PTR_1126b8ca0;
        puVar16 = puVar12;
        func_0x00010bf3fc80(puVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar16;
        func_0x00010bf68c60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef60a0();
        func_0x00010c25d240();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar33);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar34);
        _objc_release(puVar13);
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        puVar34 = puVar12;
        func_0x00010bf3fc80();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar34;
        func_0x00010bf68c60();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        FUN_10576c6f8();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar33);
        _objc_release(puVar13);
        _objc_release(puVar34);
        puVar34 = puVar12;
        func_0x00010bf3fc80();
        _objc_retainAutoreleasedReturnValue();
        puVar33 = puVar34;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar33;
        func_0x00010bf529e0();
        _objc_release(puVar33);
        _objc_release(puVar34);
        puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        if (puVar13 != (undefined *)0x0) {
          puVar33 = (undefined *)0x0;
          do {
            puVar14 = puVar12;
            func_0x00010bf3fc80();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar14;
            func_0x00010c084fc0();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar15;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar15);
            _objc_release(puVar14);
            puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            puVar33 = puVar33 + 1;
            puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df760();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = PTR_PTR_1126b8ca0;
            puVar18 = puVar16;
            func_0x00010c084160(puVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bef60a0();
            func_0x00010c25d240();
            _objc_retainAutoreleasedReturnValue();
            puVar19 = puVar16;
            func_0x00010c2711a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf89540();
            func_0x00010c14de00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar34);
            _objc_release(puVar19);
            _objc_release(puVar15);
            _objc_release(puVar18);
            _objc_release(puVar17);
            puVar15 = puVar16;
            func_0x00010bf89540();
            puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            if (puVar15 != (undefined *)0x0) {
              func_0x00010bf89540();
              func_0x00010c14de00(puVar34);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar14);
              puVar14 = puVar34;
            }
            puVar15 = puVar16;
            func_0x00010c084160();
            _objc_retainAutoreleasedReturnValue();
            puVar34 = puVar15;
            FUN_10576c6f8();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar14);
            _objc_release(puVar15);
            _objc_release(puVar16);
          } while (puVar13 != puVar33);
        }
      }
      puVar13 = puVar12;
      func_0x00010bef5aa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar33 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar13 != (undefined *)0x0) {
        puVar13 = puVar12;
        func_0x00010bef5aa0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010c0fd0e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar34);
        _objc_release(puVar14);
        _objc_release(puVar13);
        puVar34 = puVar33;
      }
      puVar13 = puVar12;
      func_0x00010c08dba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar33 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar13 != (undefined *)0x0) {
        puVar13 = puVar12;
        func_0x00010c08dba0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010befe460();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar12;
        func_0x00010c08dba0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar15;
        func_0x00010c113f00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar34);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        puVar34 = puVar12;
        func_0x00010c08dba0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar34;
        func_0x00010bf618a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar34);
        puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puVar34 = puVar33;
        if (puVar14 != (undefined *)0x0) {
          puVar34 = puVar12;
          func_0x00010c08dba0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar34;
          func_0x00010bf618a0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar14;
          func_0x00010c2711a0();
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar12;
          func_0x00010c08dba0();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar16;
          func_0x00010bf618a0();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar17;
          func_0x00010bf1e9c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar33);
          _objc_release(puVar18);
          _objc_release(puVar17);
          _objc_release(puVar16);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar34);
          puVar34 = puVar13;
        }
      }
      puVar13 = puVar12;
      func_0x00010c23aea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar33 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar13 != (undefined *)0x0) {
        puVar13 = puVar12;
        func_0x00010c23aea0();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010c2a2e80();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010c2a4740();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar15;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar12;
        func_0x00010c23aea0();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar17;
        func_0x00010bf68520();
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar18;
        func_0x00010bf68360();
        _objc_retainAutoreleasedReturnValue();
        puVar23 = puVar12;
        func_0x00010c23aea0();
        _objc_retainAutoreleasedReturnValue();
        puVar24 = puVar23;
        func_0x00010bf289a0();
        _objc_retainAutoreleasedReturnValue();
        puVar25 = puVar12;
        func_0x00010c23aea0();
        _objc_retainAutoreleasedReturnValue();
        puVar26 = puVar25;
        func_0x00010bf68520();
        _objc_retainAutoreleasedReturnValue();
        puVar27 = puVar26;
        func_0x00010c116120();
        _objc_retainAutoreleasedReturnValue();
        puVar28 = puVar12;
        func_0x00010c23aea0();
        _objc_retainAutoreleasedReturnValue();
        puVar29 = puVar28;
        func_0x00010c2a2e80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1d600();
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar34);
        _objc_release(puVar29);
        _objc_release(puVar28);
        _objc_release(puVar27);
        _objc_release(puVar26);
        _objc_release(puVar25);
        _objc_release(puVar24);
        _objc_release(puVar23);
        _objc_release(puVar19);
        _objc_release(puVar18);
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        puVar34 = puVar33;
      }
      puVar33 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar34);
      _objc_release(puVar12);
      uVar2 = puStack_c8[5];
      puStack_c8[5] = puVar33;
      _objc_release(uVar2);
      _objc_release(puVar12);
    }
    _objc_release(puVar9);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  puVar34 = (undefined *)0x0;
  do {
    _objc_release(puVar32);
    _objc_release(puStack_150);
LAB_10576f068:
    do {
      puVar32 = param_1;
      func_0x00010bf529e0();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (puVar32 <= puVar34) {
        puVar34 = param_1;
        func_0x00010bf529e0();
        if (puVar34 != (undefined *)0x0) {
          puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = puStack_c8[5];
          puStack_c8[5] = puVar34;
          _objc_release(uVar2);
        }
        puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (param_2 != 0) {
          _objc_retain(param_2);
          lVar11 = param_2;
          func_0x00010c089380();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar11);
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          lVar11 = param_2;
          func_0x00010bf45e20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_2);
          lVar30 = lVar11;
          func_0x00010bfc0820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar30);
          _objc_release(lVar11);
          ppuStack_a0 = &PTR____CFConstantStringClassReference_110daafd8;
          ppuStack_98 = &PTR____CFConstantStringClassReference_110dfce58;
          ppuStack_88 = &PTR____CFConstantStringClassReference_110dfce78;
          ppuStack_78 = &PTR____CFConstantStringClassReference_110dfce78;
          puVar32 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_90 = puVar34;
          puStack_80 = puVar3;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar32;
          func_0x00010bf446e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar32);
          _objc_release(puVar3);
          _objc_release(puVar34);
          puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = puStack_c8[5];
          puStack_c8[5] = puVar34;
          _objc_release(uVar2);
          _objc_release(puVar4);
        }
        uVar2 = puStack_c8[5];
        _objc_retain(uVar2);
        _objc_release(uVar1);
        _objc_release(lVar31);
        __Block_object_dispose(&uStack_d0,8);
        _objc_release(ppuStack_a8);
        _objc_release(param_5);
        _objc_release(param_4);
        _objc_release(param_3);
        _objc_release(param_2);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
          return;
        }
        ___stack_chk_fail();
        lVar31 = 8;
        __Block_object_dispose(&uStack_d0);
        __Unwind_Resume();
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar31 + 0x28);
        *(undefined8 *)(lVar31 + 0x28) = 0;
        return;
      }
      puVar34 = puVar34 + 1;
      puVar32 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bef4a60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bef4d80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bef4a60();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bef4d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puStack_c8[5];
      puStack_c8[5] = puVar3;
      _objc_release(uVar2);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar32);
      lVar11 = param_4;
      func_0x00010c08fa60();
      puStack_150 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    } while (lVar11 == 0);
    puVar3 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = puVar3;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar32;
    func_0x00010bef4d80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar32);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar32 = (undefined *)puStack_c8[5];
    puStack_c8[5] = puVar3;
  } while( true );
}



/* Entry: 10576f4ec; end: 10576f503;  */

void FUN_10576f4ec(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10576f504; end: 10576f55b;  */

void FUN_10576f504(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10576f55c;
  puStack_28 = &UNK_1108b0370;
  uStack_18 = *(undefined8 *)(param_1 + 0x28);
  uStack_20 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfc69a0(param_2,param_2,&puStack_40);
  return;
}



/* Entry: 10576f55c; end: 10576f697;  */

void FUN_10576f55c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126bdd20;
  func_0x00010bfbc0e0(PTR_PTR_1126bdd20,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfc71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c0e3040(puVar2);
  _objc_release(puVar2);
  return;
}



/* Entry: 10576f698; end: 10576f6b3; -[SCAdEOVTimerEnvironment makeStopwatch] */

void FUN_10576f698(void)

{
  _objc_opt_new(PTR_PTR_1126b46f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10576f6b4; end: 10576f6c7; -[SCAdEOVTimerEnvironment isDiscoverFeedPageOpenEvent:] */

void FUN_10576f6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110eb64f8);
  return;
}



/* Entry: 10576f6c8; end: 10576f6db; -[SCAdEOVTimerEnvironment isDiscoverFeedSwipeOutEvent:] */

void FUN_10576f6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110eb6518);
  return;
}



/* Entry: 10576f6dc; end: 10576f6e3; -[SCAdEOVTimerEnvironment isFriendStoryFromGroupDataModel:] */

byte FUN_10576f6dc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = PTR_PTR_1126c2118;
  if ((uVar2 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    uVar2 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_3);
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    func_0x00010c0bdf40(uVar2);
    bVar4 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return bVar4 & 1;
}



/* Entry: 10576f6e4; end: 10576f6eb; -[SCAdEOVTimerEnvironment isNonFriendStoryFromGroupDataModel:] */

uint FUN_10576f6e4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  uint uVar3;
  
  _objc_retain();
  uVar1 = param_3;
  func_0x000106440ee4();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126bdd28;
    _objc_opt_class(PTR_PTR_1126bdd28);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR_PTR_1126bdd30;
      _objc_opt_class(PTR_PTR_1126bdd30);
      uVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar2);
      uVar3 = (uint)uVar1;
      goto LAB_10576f74c;
    }
  }
  uVar3 = 1;
LAB_10576f74c:
  _objc_release(param_3);
  return uVar3 & 1;
}


