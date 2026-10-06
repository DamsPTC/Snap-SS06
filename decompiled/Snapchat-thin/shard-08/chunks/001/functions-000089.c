/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d498f4; end: 105d49a3b; -[SCPreviewFeatureCTRecommendationImpl _createCTContextWithFilterItem:] */

void FUN_105d498f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c43f0;
  _objc_opt_new(PTR_PTR_1126c43f0);
  lVar2 = param_3;
  func_0x00010bfae5a0();
  if (lVar2 == 4) {
    puVar3 = PTR_PTR_1126c4400;
    _objc_opt_new(PTR_PTR_1126c4400);
    lVar2 = param_3;
    func_0x00010bfadea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    func_0x00010c1bb420(puVar1,param_2,puVar3);
  }
  else {
    lVar2 = param_3;
    func_0x00010bfae5a0();
    if (lVar2 == 3) {
      puVar3 = PTR_PTR_1126c4408;
      _objc_opt_new(PTR_PTR_1126c4408);
      lVar2 = param_3;
      func_0x00010bfadea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19c120(puVar3,param_2,lVar2);
      _objc_release(lVar2);
      func_0x00010c19be60(puVar1,param_2,puVar3);
    }
    else {
      lVar2 = param_3;
      func_0x00010bfae5a0();
      if (lVar2 != 8) {
        puVar3 = (undefined *)0x0;
        goto LAB_105d49a10;
      }
      puVar3 = PTR_PTR_1126c43f8;
      _objc_opt_new(PTR_PTR_1126c43f8);
      func_0x00010c203c80(puVar1,param_2,puVar3);
    }
  }
  _objc_release(puVar3);
  _objc_retain(puVar1);
  puVar3 = puVar1;
LAB_105d49a10:
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105d49a3c; end: 105d49ba7; -[SCPreviewFeatureCTRecommendationImpl _musicRecommendationManagerCacheOptionDictionary] */

void FUN_105d49a3c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c4410;
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf9c660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1105e0();
  func_0x00010bffa800();
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c4410;
  _objc_alloc(PTR_PTR_1126c4410);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d3800();
  func_0x00010bffa800(puVar3);
  _objc_release(uVar5);
  func_0x00010c1d0560(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x68,0);
  _objc_storeStrong(puVar1 + 0x60,0);
  _objc_storeStrong(puVar1 + 0x58,0);
  _objc_storeStrong(puVar1 + 0x50,0);
  _objc_storeStrong(puVar1 + 0x48,0);
  _objc_storeStrong(puVar1 + 0x40,0);
  _objc_storeStrong(puVar1 + 0x38,0);
  _objc_storeStrong(puVar1 + 0x28,0);
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 105d49ba8; end: 105d49c4f; -[SCPreviewFeatureCTRecommendationImpl .cxx_destruct] */

void FUN_105d49ba8(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d49c50; end: 105d4a483; -[SCPreviewFeatureCaptionImpl initWithUserSession:previewConfiguration:captionDataProvider:captionLogger:latencyLogger:tooltipsProvider:userInteractionStateLogger:userTaggingFeature:userTaggingFriendsProvider:remixSettingsService:filterUIContainer:circumstanceEngine:valdiRuntimeProvider:creativeExpressionsManager:videoTracking:previewABServices:creativeToolsABServices:textToSpeechFeature:snapchatterFetcher:magicCaptionProvider:videoPlayback:videoObjectTracker:asyncQueueProvider:networkingClient:featureSettingsServices:previewScopeServices:imageLensCaptionFeature:customojiServices:stickerContainer:captionStickerSuggestionsServices:aiFontsEnabled:] */

undefined8 *
FUN_105d49c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined1 param_33)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain();
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
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  puStack_70 = PTR_PTR_1126ecfe0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,param_10);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x24];
    puVar1[0x24] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x25];
    puVar1[0x25] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x26];
    puVar1[0x26] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x27];
    puVar1[0x27] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x28];
    puVar1[0x28] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x29];
    puVar1[0x29] = puVar3;
    _objc_release(uVar2);
    lVar4 = param_4;
    func_0x00010c2485a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0b8420();
    *(bool *)(puVar1 + 0x23) = lVar5 == 2;
    _objc_release(lVar4);
    _objc_retain(param_6);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c4418;
    _objc_alloc_init();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 6,param_7);
    _objc_retain(param_12);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_15;
    _objc_release(uVar2);
    uVar2 = puVar1[0x2f];
    puVar6 = puVar1 + 2;
    _objc_loadWeakRetained(puVar6);
    puVar7 = puVar6;
    func_0x00010bf311e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179260(uVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_retain(param_16);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_16;
    _objc_release(uVar2);
    uVar2 = puVar1[0x35];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126ec0();
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_19;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[0x37];
    puVar1[0x37] = puVar3;
    _objc_release(uVar2);
    puVar1[0x39] = 0;
    _objc_retain(param_21);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[10];
    puVar1[10] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_24;
    _objc_release(uVar2);
    uVar2 = param_18;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c112020();
    puVar1[0x40] = uVar8;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_28;
    _objc_release(uVar2);
    uVar2 = param_28;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar1[0x3c];
    puVar1[0x3c] = uVar2;
    _objc_release(uVar8);
    _objc_retain(param_29);
    uVar2 = puVar1[0x43];
    puVar1[0x43] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x45];
    puVar1[0x45] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x46];
    puVar1[0x46] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x47];
    puVar1[0x47] = param_32;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x48) = param_33;
    _objc_retain(param_20);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_20;
    _objc_release(uVar2);
    uVar2 = puVar1[0x36];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126980();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c3cc0;
    _objc_alloc();
    func_0x00010c020360();
    func_0x00010c216fa0(puVar1);
    _objc_release(puVar3);
    _objc_retain(param_13);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
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
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105d4a484; end: 105d4a48b; -[SCPreviewFeatureCaptionImpl _keyboardDidShow:] */

void FUN_105d4a484(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be52cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logEventWithLoggingState__1125724c8,2);
  return;
}



/* Entry: 105d4a48c; end: 105d4a513; -[SCPreviewFeatureCaptionImpl dealloc] */

void FUN_105d4a48c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282180();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ecfe0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105d4a514; end: 105d4a7db; -[SCPreviewFeatureCaptionImpl configureWithView:] */

void FUN_105d4a514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_7);
  _objc_storeWeak(param_5 + 0x18,param_7);
  uVar9 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010bf20c00(uVar9);
  *(undefined8 *)(param_5 + 0xb8) = param_1;
  *(undefined8 *)(param_5 + 0xc0) = param_2;
  *(undefined8 *)(param_5 + 200) = param_3;
  *(undefined8 *)(param_5 + 0xd0) = param_4;
  _objc_release(uVar9);
  lVar5 = param_5 + 0x18;
  _objc_loadWeakRetained(lVar5);
  func_0x00010bf4cf40();
  *(undefined8 *)(param_5 + 0xd8) = param_1;
  *(undefined8 *)(param_5 + 0xe0) = param_2;
  *(undefined8 *)(param_5 + 0xe8) = param_3;
  *(undefined8 *)(param_5 + 0xf0) = param_4;
  *(undefined8 *)(param_5 + 0xa0) = *(undefined8 *)(param_5 + 0xe0);
  *(undefined8 *)(param_5 + 0x98) = *(undefined8 *)(param_5 + 0xd8);
  *(undefined8 *)(param_5 + 0xb0) = *(undefined8 *)(param_5 + 0xf0);
  *(undefined8 *)(param_5 + 0xa8) = *(undefined8 *)(param_5 + 0xe8);
  _objc_release(lVar5);
  puVar4 = PTR_PTR_1126c4420;
  _objc_alloc();
  bVar3 = *(char *)(param_5 + 0x118) == '\0';
  lVar5 = 0xd8;
  if (bVar3) {
    lVar5 = 0xb8;
  }
  lVar6 = 0xe0;
  if (bVar3) {
    lVar6 = 0xc0;
  }
  lVar1 = 0xe8;
  if (bVar3) {
    lVar1 = 200;
  }
  lVar2 = 0xf0;
  if (bVar3) {
    lVar2 = 0xd0;
  }
  func_0x00010c013de0(*(undefined8 *)(param_5 + lVar5),*(undefined8 *)(param_5 + lVar6),
                      *(undefined8 *)(param_5 + lVar1),*(undefined8 *)(param_5 + lVar2));
  uVar9 = *(undefined8 *)(param_5 + 0x198);
  *(undefined **)(param_5 + 0x198) = puVar4;
  _objc_release(uVar9);
  func_0x00010c16d4a0(*(undefined8 *)(param_5 + 0x198));
  puVar4 = PTR_PTR_1126c4420;
  _objc_alloc();
  uVar9 = *(undefined8 *)(param_5 + 0xd8);
  uVar11 = *(undefined8 *)(param_5 + 0xe0);
  uVar12 = *(undefined8 *)(param_5 + 0xe8);
  uVar13 = *(undefined8 *)(param_5 + 0xf0);
  func_0x00010c013de0(uVar9,uVar11,uVar12,uVar13);
  uVar10 = *(undefined8 *)(param_5 + 0x1a0);
  *(undefined **)(param_5 + 0x1a0) = puVar4;
  _objc_release(uVar10);
  if (*(char *)(param_5 + 0x118) == '\x01') {
    lVar5 = *(long *)(param_5 + 0x88);
    func_0x00010c269d40(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2076a0();
    uVar10 = uVar9;
    uVar9 = uVar11;
  }
  else {
    lVar5 = param_5 + 0x18;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar6);
    _objc_release(lVar5);
    lVar5 = param_5 + 0x18;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    uVar10 = uVar9;
    _CGRectGetMidX();
    _CGRectGetMidY(uVar9,uVar11,uVar12,uVar13);
    func_0x00010c17a6a0(uVar10,uVar9,*(undefined8 *)(param_5 + 0x198));
    _objc_release(lVar6);
  }
  _objc_release(lVar5);
  uVar7 = *(undefined8 *)(param_5 + 0x58);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar7;
  func_0x00010c278f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar11);
  _objc_release(uVar7);
  uVar8 = *(undefined8 *)(param_5 + 0x58);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010c278f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  uVar7 = uVar10;
  _CGRectGetMidX();
  _CGRectGetMidY(uVar10,uVar9,uVar12,uVar13);
  func_0x00010c17a6a0(uVar7,uVar10,*(undefined8 *)(param_5 + 0x1a0));
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 105d4a7dc; end: 105d4ab3f; -[SCPreviewFeatureCaptionImpl activate] */

void FUN_105d4a7dc(ulong param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x00010beab640();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09b040();
  _objc_release(uVar4);
  uVar5 = param_1 + 0x10;
  _objc_loadWeakRetained();
  puVar6 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar7 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar6);
  uVar1 = uVar5;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010bf30960();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf529e0();
  _objc_release(uVar5);
  if (uVar7 == 0) {
    bVar2 = false;
  }
  else {
    uVar5 = uVar1;
    func_0x00010bf2b540();
    bVar2 = uVar5 == 1;
  }
  iVar3 = (int)*(undefined8 *)(param_1 + 0x1e0);
  func_0x00010bf926c0();
  if ((iVar3 == 0) || (bVar2)) {
    uVar5 = param_1 + 0x10;
    _objc_loadWeakRetained();
    puVar6 = PTR_PTR_1126afee0;
    _objc_opt_class(PTR_PTR_1126afee0);
    uVar8 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar6);
    uVar12 = uVar5;
    if ((uVar8 & 1) == 0) {
      uVar12 = 0;
    }
    _objc_retain(uVar12);
    _objc_release(uVar5);
    uVar5 = uVar12;
    func_0x00010bf30960(uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
  }
  else {
    uVar5 = param_1;
    func_0x00010bebcb80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar11 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar11);
  lVar9 = lVar11;
  func_0x00010c09a7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar11);
  uVar4 = *(undefined8 *)(param_1 + 0x218);
  func_0x00010bf2fc20();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x220) = uVar4;
  _objc_release(uVar13);
  lVar11 = *(long *)(param_1 + 0x220);
  func_0x00010bf302e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar12 = uVar5;
  if (lVar11 != 0) {
    uVar12 = *(ulong *)(param_1 + 0x220);
    func_0x00010bf302e0(uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bea2900(param_1);
  if (uVar7 == 0) {
    uVar5 = uVar1;
    func_0x00010c131e40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c1322c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c0720c0();
    if ((uVar8 & 1) == 0) {
      _objc_release(uVar7);
    }
    else {
      uVar13 = *(undefined8 *)(param_1 + 0x1c0);
      func_0x00010bf5aea0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar13;
      func_0x00010c07aaa0();
      _objc_release(uVar13);
      _objc_release(uVar7);
      _objc_release(uVar5);
      if ((int)uVar4 == 0) goto LAB_105d4aad8;
      uVar4 = *(undefined8 *)(param_1 + 0x90);
      func_0x000108edf3c8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf18020(uVar4);
    }
    _objc_release(uVar5);
  }
LAB_105d4aad8:
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar10);
  _objc_release(uVar12);
  _objc_release(uVar1);
  return;
}



/* Entry: 105d4ab40; end: 105d4ab9b;  */

void FUN_105d4ab40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + 0x208);
    *(undefined8 *)(param_1 + 0x208) = uVar1;
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d4ab9c; end: 105d4ad97; -[SCPreviewFeatureCaptionImpl _setupCaptionEditingManager] */

void FUN_105d4ab9c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126c4428;
  _objc_alloc();
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  func_0x00010c2302a0();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf2ff00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar8 = *(undefined8 *)(param_1 + 0x228);
  func_0x00010bf62e60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c2550a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c180(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                      *(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
                      *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),
                      *(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd0));
  uVar11 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar1;
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_setDelegate__112640798,param_1);
  return;
}



/* Entry: 105d4ad98; end: 105d4ae37; -[SCPreviewFeatureCaptionImpl setToolbarItemViewModel:] */

void FUN_105d4ad98(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x260);
  func_0x00010c071ae0(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x260);
    *(long *)(param_1 + 0x260) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    puVar3 = PTR_PTR_1126ae750;
    if (param_3 == 0) {
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0d9840(uVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d4ae38; end: 105d4ae5f; -[SCPreviewFeatureCaptionImpl toolbarItemViewModelObservable] */

void FUN_105d4ae38(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d4ae60; end: 105d4aef7; -[SCPreviewFeatureCaptionImpl createCaptionToolBarButtonItemWithTarget:selector:] */

void FUN_105d4ae60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x150);
  if (lVar2 == 0) {
    puVar1 = PTR_PTR_1126c4430;
    func_0x00010bf15ae0(PTR_PTR_1126c4430,param_2,2,*(undefined8 *)(param_1 + 0x200),param_3,param_4
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x150);
    *(undefined **)(param_1 + 0x150) = puVar1;
    _objc_retain();
    _objc_release(uVar3);
    func_0x00010c166c20(*(undefined8 *)(param_1 + 0x150),param_2,0);
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x150),param_2,param_1);
    _objc_release(puVar1);
    lVar2 = *(long *)(param_1 + 0x150);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105d4aef8; end: 105d4b047; -[SCPreviewFeatureCaptionImpl _snapEditorCaptionsState] */

void FUN_105d4aef8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5fac0();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar1 = *(undefined8 *)(param_1 + 0x1e0);
  uVar3 = *(undefined8 *)(param_1 + 0x1e8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126affe8;
  func_0x00010c09e180(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108e35f68(uVar1,uVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  func_0x00010befa160(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x1e0);
  uVar5 = *(undefined8 *)(param_1 + 0x1e8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108e35f68(uVar3,uVar5,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar5);
  func_0x00010befa160(puVar2);
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105d4b048; end: 105d4b04f; -[SCPreviewFeatureCaptionImpl setCaptionsWithState:shouldLoadStyles:] */

void FUN_105d4b048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea2910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setCaptionsWithState_shouldLoad_1125863e8,param_3,param_4,0);
  return;
}



/* Entry: 105d4b050; end: 105d4b527; -[SCPreviewFeatureCaptionImpl _setCaptionsWithState:shouldLoadStyles:completion:] */

void FUN_105d4b050(long param_1,undefined8 param_2,long param_3,int param_4,long param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  undefined **ppuStack_1d8;
  long lStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined **ppuStack_190;
  long lStack_188;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  ppuVar2 = *(undefined ***)(param_1 + 0x1a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bfa1e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  ppuVar4 = ppuVar3;
  func_0x00010c0815a0();
  if (((ulong)ppuVar4 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    puStack_130 = (undefined8 *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(param_3);
    lVar10 = param_3;
    func_0x00010bf52a60();
    if (lVar10 != 0) {
      ppuVar2 = (undefined **)*puStack_130;
      do {
        lVar12 = 0;
        do {
          if ((undefined **)*puStack_130 != ppuVar2) {
            _objc_enumerationMutation(param_3);
          }
          lVar13 = *(long *)(lStack_138 + lVar12 * 8);
          lVar7 = lVar13;
          func_0x00010bf303a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar7 != 0) {
            func_0x00010bf303a0(lVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar6);
            _objc_release(lVar13);
          }
          lVar12 = lVar12 + 1;
        } while (lVar10 != lVar12);
        lVar10 = param_3;
        func_0x00010bf52a60();
      } while (lVar10 != 0);
    }
    _objc_release(param_3);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_105d4b528;
    puStack_158 = &UNK_110841f80;
    _objc_retain(param_3);
    ppuVar4 = &puStack_170;
    lStack_150 = param_3;
    lStack_148 = param_1;
    _objc_retainBlock();
    puVar8 = puVar6;
    func_0x00010bf529e0();
    if ((param_4 == 0) || (puVar8 == (undefined *)0x0)) {
      func_0x00010be4cca0(param_1);
      if (param_5 != 0) {
        func_0x00010bf30960(param_1);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_5 + 0x10))(param_5,param_1);
        _objc_release(param_1);
      }
    }
    else {
      lVar10 = param_1 + 0x248;
      _objc_loadWeakRetained(lVar10);
      func_0x00010bfa1c40();
      _objc_release(lVar10);
      puVar8 = puVar5;
      func_0x00010bf529e0();
      if (puVar8 == (undefined *)0x0) {
        uVar9 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar9;
        func_0x00010bf2ff00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        _objc_initWeak(auStack_178,param_1);
        puVar8 = puVar6;
        func_0x00010bf51e00(puVar6);
        puStack_200 = puVar1;
        uStack_1f8 = 0xc2000000;
        uStack_1f0 = 0x105d4b71c;
        puStack_1e8 = &UNK_110861918;
        ppuVar2 = &puStack_200;
        _objc_copyWeak(auStack_1c8,auStack_178);
        _objc_retain(param_3);
        lStack_1e0 = param_3;
        _objc_retain(ppuVar4);
        ppuStack_1d8 = ppuVar4;
        _objc_retain(param_5);
        lStack_1d0 = param_5;
        func_0x00010c09b380(uVar11);
        _objc_release(puVar8);
        _objc_release(lStack_1d0);
        _objc_release(ppuStack_1d8);
        _objc_release(lStack_1e0);
        _objc_destroyWeak(auStack_1c8);
        _objc_destroyWeak(auStack_178);
        _objc_release(uVar11);
      }
      else {
        _objc_initWeak(auStack_178,param_1);
        param_1 = param_1 + 8;
        _objc_loadWeakRetained(param_1);
        lVar10 = param_1;
        func_0x00010bf30560();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar5;
        func_0x00010bf51e00(puVar5);
        puStack_1c0 = puVar1;
        uStack_1b8 = 0xc2000000;
        pcStack_1b0 = FUN_105d4b57c;
        puStack_1a8 = &UNK_110861a58;
        _objc_copyWeak(auStack_180,auStack_178);
        _objc_retain(puVar6);
        puStack_1a0 = puVar6;
        _objc_retain(param_3);
        lStack_198 = param_3;
        _objc_retain(ppuVar4);
        ppuStack_190 = ppuVar4;
        _objc_retain(param_5);
        lStack_188 = param_5;
        func_0x00010c09b380(lVar10);
        _objc_release(puVar8);
        _objc_release(lVar10);
        _objc_release(param_1);
        _objc_release(lStack_188);
        _objc_release(ppuStack_190);
        _objc_release(lStack_198);
        _objc_release(puStack_1a0);
        _objc_destroyWeak(auStack_180);
        _objc_destroyWeak(auStack_178);
      }
    }
    _objc_release(ppuVar4);
    _objc_release(lStack_150);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(ppuVar3);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar2 + 7);
  _objc_destroyWeak(auStack_178);
  __Unwind_Resume();
  lVar10 = *(long *)(param_3 + 0x20);
  func_0x00010bf529e0();
  if (lVar10 != 0) {
    uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x78);
    func_0x00010c1123c0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar11);
    return;
  }
  return;
}



/* Entry: 105d4b528; end: 105d4b57b;  */

void FUN_105d4b528(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x78);
    func_0x00010c1123c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28d140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105d4b57c; end: 105d4b883;  */

void FUN_105d4b57c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x105d4b65c;
  puStack_60 = &UNK_110861a58;
  _objc_copyWeak(auStack_38,param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar3;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105d4b884; end: 105d4bca3; -[SCPreviewFeatureCaptionImpl _loadCaptionsFromState:] */

void FUN_105d4b884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  ulong param_9,undefined8 param_10,long param_11)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uStack_150;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_11);
  if (*(long *)(param_9 + 0x90) == 0) {
    func_0x00010beab640(param_9);
  }
  uVar4 = param_9;
  func_0x00010be61700();
  if ((int)uVar4 == 0) {
    uVar14 = 0;
  }
  else {
    lVar6 = param_9 + 0x10;
    _objc_loadWeakRetained();
    lVar5 = lVar6;
    func_0x00010c07e940();
    uVar14 = (uint)lVar5 ^ 1;
    _objc_release(lVar6);
  }
  lVar6 = param_9 + 0x10;
  _objc_loadWeakRetained();
  lVar5 = lVar6;
  func_0x00010c243400();
  if (lVar5 == 0x11) {
    lVar5 = param_9 + 0x10;
    _objc_loadWeakRetained();
    lVar16 = lVar5;
    func_0x00010bf680c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    _objc_release(lVar6);
    if ((lVar16 == 0 & uVar14) == 1) {
LAB_105d4b970:
      func_0x00010be93580(param_9);
      uVar14 = 1;
      goto LAB_105d4b97c;
    }
  }
  else {
    _objc_release(lVar6);
    if ((uVar14 & 1) != 0) goto LAB_105d4b970;
  }
  uVar14 = 0;
LAB_105d4b97c:
  lVar6 = *(long *)(param_9 + 0x220);
  if (lVar6 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010bf302e0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar6 != 0;
    _objc_release();
  }
  lVar6 = *(long *)(param_9 + 0x1a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar6;
  func_0x00010bfa1e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar7 = lVar16;
  func_0x00010c2735e0();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = 0;
  _objc_retain(param_11);
  lVar6 = param_11;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  do {
    if (lVar6 == 0) {
      _objc_release(param_11);
      if (uVar14 != 0) {
        uVar4 = param_9;
        func_0x00010bf5e800();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar4 != 0) {
          func_0x00010bf5e800();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c24eaa0();
          _objc_release(param_9);
        }
      }
      _objc_release(lVar7);
      _objc_release(lVar16);
      lVar6 = param_11;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
        return;
      }
      ___stack_chk_fail();
      lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
      *(undefined8 *)(lVar6 + 0xb8) = uVar20;
      *(undefined8 *)(lVar6 + 0xc0) = param_2;
      *(undefined8 *)(lVar6 + 200) = param_3;
      *(undefined8 *)(lVar6 + 0xd0) = param_4;
      *(undefined8 *)(lVar6 + 0xd8) = param_5;
      *(undefined8 *)(lVar6 + 0xe0) = param_6;
      *(undefined8 *)(lVar6 + 0xe8) = param_7;
      *(undefined8 *)(lVar6 + 0xf0) = param_8;
      *(undefined8 *)(lVar6 + 0xf8) = uStack_150;
      *(long *)(lVar6 + 0x100) = param_11;
      *(long *)(lVar6 + 0x108) = lVar7;
      *(long *)(lVar6 + 0x110) = lVar16;
      func_0x00010c287080(*(undefined8 *)(lVar6 + 0x90));
      func_0x00010bddb4a0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar6;
      func_0x00010bf52a60();
      lVar5 = lRam0000000000000000;
      while (lVar13 != 0) {
        lVar16 = 0;
        do {
          if (lRam0000000000000000 != lVar5) {
            _objc_enumerationMutation(lVar6);
          }
          func_0x00010c29caa0(uVar20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              *(undefined8 *)(lVar16 * 8));
          lVar16 = lVar16 + 1;
        } while (lVar13 != lVar16);
        lVar13 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c268bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(lVar6 + 0x90),PTR_s_tap__112677d20);
      return;
    }
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_11);
      }
      uVar17 = *(ulong *)(lVar15 * 8);
      iVar3 = (int)*(undefined8 *)(param_9 + 0x1e0);
      func_0x00010bf926c0();
      uVar4 = param_9;
      func_0x00010bf5e800();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = param_9;
      if (iVar3 == 0) {
        if (uVar4 == 0) goto LAB_105d4bad8;
        uVar8 = uVar17;
        func_0x00010c280560();
        func_0x00010bf5e800();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar18;
        func_0x00010c280560();
        bVar2 = uVar8 == uVar9;
LAB_105d4bac8:
        uVar19 = (uint)bVar2;
        _objc_release(uVar18);
      }
      else {
        if (uVar4 != 0) {
          uVar8 = uVar17;
          func_0x00010c0ff520();
          func_0x00010bf5e800();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar18;
          func_0x00010c0ff520();
          bVar2 = (int)uVar8 == (int)uVar9;
          goto LAB_105d4bac8;
        }
LAB_105d4bad8:
        uVar19 = 0;
      }
      _objc_release(uVar4);
      uVar4 = uVar17;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar4;
      func_0x00010c08fa60();
      uVar19 = (uint)(uVar18 == 0) | uVar14 & uVar19;
      uVar18 = (ulong)uVar19;
      if (uVar19 == 0 && !bVar1) {
        uVar18 = uVar17;
        func_0x00010bfe1300();
      }
      _objc_release(uVar4);
      if ((uVar18 & 1) == 0) {
        lVar10 = *(long *)(param_9 + 0x90);
        func_0x00010c0d8640();
        if ((bVar1) && (uVar4 = uVar17, func_0x00010bfe1300(), (int)uVar4 != 0)) {
          func_0x00010c1a7f60(lVar10);
        }
        func_0x00010c081660();
        if ((int)uVar17 != 0) {
          lVar11 = param_9 + 0x248;
          _objc_loadWeakRetained(lVar11);
          func_0x00010bfa1b60();
          _objc_release(lVar11);
          func_0x00010c2848e0(param_9);
        }
        lVar11 = lVar16;
        func_0x00010c071280();
        if (((int)lVar11 != 0) && (lVar7 != 0)) {
          lVar11 = lVar7;
          func_0x00010c280560();
          lVar12 = lVar10;
          func_0x00010c280560();
          if (lVar11 == lVar12) {
            func_0x00010c285620(lVar16);
          }
        }
        _objc_release(lVar10);
      }
      lVar15 = lVar15 + 1;
    } while (lVar6 != lVar15);
    lVar6 = param_11;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105d4bca4; end: 105d4be4b; -[SCPreviewFeatureCaptionImpl viewDidLayoutSubviewsWithSuperviewBounds:superviewContentBounds:superviewEdgeInsets:] */

void FUN_105d4bca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_9 + 0xb8) = param_1;
  *(undefined8 *)(param_9 + 0xc0) = param_2;
  *(undefined8 *)(param_9 + 200) = param_3;
  *(undefined8 *)(param_9 + 0xd0) = param_4;
  *(undefined8 *)(param_9 + 0xd8) = param_5;
  *(undefined8 *)(param_9 + 0xe0) = param_6;
  *(undefined8 *)(param_9 + 0xe8) = param_7;
  *(undefined8 *)(param_9 + 0xf0) = param_8;
  *(undefined8 *)(param_9 + 0xf8) = in_stack_00000000;
  *(undefined8 *)(param_9 + 0x100) = in_stack_00000008;
  *(undefined8 *)(param_9 + 0x108) = in_stack_00000010;
  *(undefined8 *)(param_9 + 0x110) = in_stack_00000018;
  func_0x00010c287080(*(undefined8 *)(param_9 + 0x90));
  func_0x00010bddb4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_9;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar4 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_9);
      }
      func_0x00010c29caa0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          *(undefined8 *)(lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar2 != lVar4);
    lVar2 = param_9;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c268bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_9 + 0x90),PTR_s_tap__112677d20);
  return;
}



/* Entry: 105d4be4c; end: 105d4be53; -[SCPreviewFeatureCaptionImpl _tap:] */

void FUN_105d4be4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c268bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x90),PTR_s_tap__112677d20);
  return;
}



/* Entry: 105d4be54; end: 105d4be5b; -[SCPreviewFeatureCaptionImpl currentEditingCaption] */

void FUN_105d4be54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf8c6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_editingCaption_1125c0b50);
  return;
}



/* Entry: 105d4be5c; end: 105d4be63; -[SCPreviewFeatureCaptionImpl allCaptions] */

void FUN_105d4be5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x120),PTR_s_allObjects_11259db00);
  return;
}



/* Entry: 105d4be64; end: 105d4be6f; -[SCPreviewFeatureCaptionImpl allStaticCaptions] */

void FUN_105d4be64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddb4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__captionsIncludingStatic_trackin_1125546c8,1,0);
  return;
}



/* Entry: 105d4be70; end: 105d4bebf; -[SCPreviewFeatureCaptionImpl allTrackingCaptions] */

void FUN_105d4be70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  func_0x00010c261580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d4bec0; end: 105d4bf33;  */

void FUN_105d4bec0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a51d0);
  uVar1 = param_2;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = uVar1;
  func_0x00010bf2fba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d4bf34; end: 105d4c08b; -[SCPreviewFeatureCaptionImpl captionWithGesture:] */

void FUN_105d4bf34(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bddb4a0(param_1,param_2,1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar1 = lVar11;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar10 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(lVar11);
        }
        puVar7 = *(undefined1 **)(lStack_118 + lVar10 * 8);
        puVar2 = puVar7;
        puVar5 = (undefined8 *)param_3;
        func_0x00010c26c0a0();
        if (((ulong)puVar2 & 1) != 0) {
          _objc_retain(puVar7);
          goto LAB_105d4c040;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar11;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar7 = (undefined1 *)0x0;
LAB_105d4c040:
  _objc_release(lVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar6 = &uStack_240;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar5);
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    func_0x00010bddb4a0(param_3,param_2,1,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = auStack_1f8;
    puVar3 = param_3;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      lVar11 = *plStack_230;
      do {
        puVar12 = (undefined1 *)0x0;
        do {
          if (*plStack_230 != lVar11) {
            _objc_enumerationMutation(param_3);
          }
          puVar7 = *(undefined1 **)(lStack_238 + (long)puVar12 * 8);
          puVar4 = puVar7;
          func_0x00010c26ba60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if ((undefined8 *)puVar4 == puVar5) {
            _objc_retain(puVar7);
            goto LAB_105d4c18c;
          }
          puVar12 = puVar12 + 1;
        } while (puVar3 != puVar12);
        puVar2 = auStack_1f8;
        puVar3 = param_3;
        puVar6 = &uStack_240;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined1 *)0x0);
    }
    puVar7 = (undefined1 *)0x0;
LAB_105d4c18c:
    _objc_release(param_3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      uVar8 = *(undefined8 *)((long)puVar5 + 0x178);
      _objc_retain(puVar6);
      puVar7 = (undefined1 *)puVar6;
      func_0x00010c252440(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar7;
      func_0x00010bf303a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar3;
      func_0x00010bfadea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a27c0(uVar8,param_2,puVar12);
      _objc_release(puVar12);
      _objc_release(puVar3);
      _objc_release(puVar7);
      func_0x00010bf6b840(*(undefined8 *)((long)puVar5 + 0x90),param_2,puVar6,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar6);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105d4c08c; end: 105d4c1d7; -[SCPreviewFeatureCaptionImpl captionOfTrackableView:] */

void FUN_105d4c08c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010bddb4a0(param_1,param_2,1,1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = auStack_d8;
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(param_1);
        }
        lVar8 = *(long *)(lStack_118 + lVar11 * 8);
        lVar2 = lVar8;
        func_0x00010c26ba60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 == param_3) {
          _objc_retain(lVar8);
          goto LAB_105d4c18c;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      puVar7 = auStack_d8;
      lVar1 = param_1;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  lVar8 = 0;
LAB_105d4c18c:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
    return;
  }
  ___stack_chk_fail();
  if (puVar6 != (undefined8 *)0x0) {
    uVar9 = *(undefined8 *)(param_3 + 0x178);
    _objc_retain(puVar6);
    puVar3 = (undefined1 *)puVar6;
    func_0x00010c252440(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf303a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfadea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a27c0(uVar9,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010bf6b840(*(undefined8 *)(param_3 + 0x90),param_2,puVar6,puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return;
  }
  return;
}



/* Entry: 105d4c1d8; end: 105d4c293; -[SCPreviewFeatureCaptionImpl deleteCaption:deleteType:] */

void FUN_105d4c1d8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x178);
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c252440(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf303a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfadea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a27c0(uVar4,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bf6b840(*(undefined8 *)(param_1 + 0x90),param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 105d4c294; end: 105d4c29b; -[SCPreviewFeatureCaptionImpl captionButtonPressed] */

void FUN_105d4c294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_captionButtonPressed_1125a98b8);
  return;
}



/* Entry: 105d4c29c; end: 105d4c2f3; -[SCPreviewFeatureCaptionImpl allCaptionTexts] */

void FUN_105d4c29c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bddb4a0(param_1,param_2,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d4c2f4; end: 105d4c2fb;  */

void FUN_105d4c2f4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_text_1126787e8);
  return;
}



/* Entry: 105d4c2fc; end: 105d4c607; -[SCPreviewFeatureCaptionImpl videoTrackedImagesWithCroppingAspectRatio:] */

void FUN_105d4c2fc(double param_1,double param_2,double param_3,double param_4,long param_5,
                  ulong param_6)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dStack_1b8;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010bddb4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar4 != 0) {
    dStack_1b8 = INFINITY;
    do {
      lVar13 = 0;
      do {
        dVar15 = param_3;
        dVar16 = param_4;
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
          dVar15 = param_3;
          dVar16 = param_4;
        }
        uVar14 = *(undefined8 *)(lVar13 * 8);
        uVar5 = uVar14;
        func_0x00010c26ba60();
        _objc_retainAutoreleasedReturnValue();
        dVar17 = *(double *)(param_5 + 0xa8);
        dVar18 = *(double *)(param_5 + 0xb0);
        param_3 = dStack_1b8;
        param_4 = param_2;
        param_2 = dVar18;
        if (param_1 != INFINITY) {
          dVar15 = param_1;
          func_0x00010b690934(dVar17,dVar18,param_1);
          param_3 = dVar17;
          param_4 = dVar18;
          param_2 = dVar18;
        }
        func_0x00010c252440();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x1a0));
        param_6 = (ulong)*(byte *)(param_5 + 0x118);
        uVar6 = *(undefined8 *)(param_5 + 0x20);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar6;
        func_0x00010bf2ff00();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar14;
        func_0x000108e23d30(dVar17,param_2,param_3,param_4,dVar15,dVar16,uVar14,param_6,uVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        _objc_release(uVar6);
        _objc_release(uVar14);
        puVar7 = PTR_PTR_1126ae560;
        _objc_opt_new();
        _objc_retain();
        uVar14 = uVar5;
        _objc_retain(uVar5);
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297260(uVar10);
        _objc_release(uVar14);
        puVar8 = puVar7;
        func_0x00010bfbc3e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(uVar5);
        _objc_release(puVar7);
        _objc_release(uVar5);
        _objc_release(uVar10);
        lVar13 = lVar13 + 1;
      } while (lVar4 != lVar13);
      lVar4 = lVar3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  puVar7 = puVar2;
  func_0x00010bf51e00();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  puVar7 = PTR_PTR_1126c41f0;
  _objc_retain(param_6);
  _objc_alloc(puVar7);
  uVar9 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c26a1a0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar9;
  func_0x00010c2723c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(puVar2 + 0x20);
  func_0x00010c26a1a0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar10;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0553e0(puVar7);
  _objc_release(uVar14);
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar9);
  puVar8 = PTR_PTR_1126c41f8;
  func_0x00010c279740(PTR_PTR_1126c41f8);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c4200;
  _objc_alloc(PTR_PTR_1126c4200);
  func_0x00010bf20c00(*(undefined8 *)(puVar2 + 0x20));
  dVar15 = *(double *)(puVar2 + 0x30);
  func_0x00010bf20c00(*(undefined8 *)(puVar2 + 0x20));
  func_0x00010c02fc00(param_3 / dVar15,param_4 / *(double *)(puVar2 + 0x38),puVar11);
  _objc_release(param_6);
  func_0x00010bf43d60(*(undefined8 *)(puVar2 + 0x28));
  _objc_release(puVar11);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 105d4c608; end: 105d4c76b;  */

void FUN_105d4c608(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  
  puVar1 = PTR_PTR_1126c41f0;
  _objc_retain(param_6);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c26a1a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2723c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010c26a1a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0553e0(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126c41f8;
  func_0x00010c279740(PTR_PTR_1126c41f8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c4200;
  _objc_alloc(PTR_PTR_1126c4200);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x20));
  dVar8 = *(double *)(param_5 + 0x30);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x20));
  func_0x00010c02fc00(param_3 / dVar8,param_4 / *(double *)(param_5 + 0x38),puVar7);
  _objc_release(param_6);
  func_0x00010bf43d60(*(undefined8 *)(param_5 + 0x28));
  _objc_release(puVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d4c76c; end: 105d4c903; -[SCPreviewFeatureCaptionImpl captionsState] */

void FUN_105d4c76c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_1;
  func_0x00010bddb4a0(param_1,param_2,1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar2);
        }
        lVar9 = *(long *)(lStack_128 + lVar11 * 8);
        lVar4 = *(long *)(param_1 + 0x90);
        func_0x00010bf8c6a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar9 != lVar4) {
          func_0x00010c252440(lVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,lVar9);
          _objc_release(lVar9);
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puVar8 = puVar1;
  func_0x00010bf529e0();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = puVar1;
    func_0x00010bf51e00();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  puVar5 = puVar1;
  func_0x00010bf30960();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf51e00();
  puVar8 = PTR____NSArray0__struct_11034ab48;
  if (puVar6 != (undefined *)0x0) {
    puVar8 = puVar6;
  }
  _objc_retain(puVar8);
  uVar7 = *(undefined8 *)(puVar1 + 0x160);
  *(undefined **)(puVar1 + 0x160) = puVar8;
  _objc_release(uVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105d4c904; end: 105d4c96f; -[SCPreviewFeatureCaptionImpl freezeCaptionsState] */

void FUN_105d4c904(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = param_1;
  func_0x00010bf30960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf51e00();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  _objc_retain(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x160);
  *(undefined **)(param_1 + 0x160) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105d4c970; end: 105d4c997; -[SCPreviewFeatureCaptionImpl frozenCaptionsState] */

void FUN_105d4c970(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x160);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d4c998; end: 105d4c99f; -[SCPreviewFeatureCaptionImpl captionCount] */

void FUN_105d4c998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x120),PTR_s_count_1125b2420);
  return;
}



/* Entry: 105d4c9a0; end: 105d4ca07; -[SCPreviewFeatureCaptionImpl magicCaptionCount] */

undefined8 FUN_105d4c9a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  func_0x00010bf00560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105d4ca08; end: 105d4ca3f;  */

bool FUN_105d4ca08(undefined8 param_1,long param_2)

{
  func_0x00010bfc0860(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 105d4ca40; end: 105d4ca8b; -[SCPreviewFeatureCaptionImpl staticCaptionCount] */

long FUN_105d4ca40(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x198);
  func_0x00010c2615a0(lVar1);
  lVar2 = *(long *)(param_1 + 0x90);
  func_0x00010bf2fd40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 - (ulong)(lVar2 != 0);
}



/* Entry: 105d4ca8c; end: 105d4ca93; -[SCPreviewFeatureCaptionImpl trackingCaptionCount] */

void FUN_105d4ca8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2615b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x1a0),PTR_s_subviewsCount_112675f90);
  return;
}



/* Entry: 105d4ca94; end: 105d4caef; -[SCPreviewFeatureCaptionImpl timedCaptionCount] */

undefined8 FUN_105d4ca94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  func_0x00010c261580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001006372a4();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf529e0(uVar2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105d4caf0; end: 105d4cb8f;  */

undefined8 FUN_105d4caf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a51d0);
  uVar2 = param_2;
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  uVar1 = uVar2;
  func_0x00010bf2fba0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c252440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c081160();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 105d4cb90; end: 105d4cbeb; -[SCPreviewFeatureCaptionImpl pinnedCaptionCount] */

undefined8 FUN_105d4cb90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  func_0x00010c261580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001006372a4();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf529e0(uVar2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105d4cbec; end: 105d4cc97;  */

uint FUN_105d4cbec(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a51d0);
  lVar2 = param_2;
  if ((int)lVar1 == 0) {
    lVar2 = 0;
  }
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf2fba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c252440(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c081160();
    uVar4 = (uint)lVar3 ^ 1;
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 105d4cc98; end: 105d4cc9f; -[SCPreviewFeatureCaptionImpl captionScrollCount] */

void FUN_105d4cc98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf30270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_captionScrollCount_1125a9a40);
  return;
}



/* Entry: 105d4cca0; end: 105d4ce9f; -[SCPreviewFeatureCaptionImpl staticScreenshot] */

void FUN_105d4cca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar1 = *(undefined8 *)(param_5 + 0x90);
  func_0x00010bf2fd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c074c20();
  func_0x00010c1a7f60(uVar1,param_6,1);
  uVar2 = *(undefined8 *)(param_5 + 0x90);
  func_0x00010bf8c6a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_5 + 0x90);
  func_0x00010bf1c8e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_5 + 0xe8);
  uVar2 = *(undefined8 *)(param_5 + 0xf0);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x198));
  puVar4 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  puVar5 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
  func_0x00010bf69700(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046ac0(uVar3,uVar2,puVar4,param_6,puVar5);
  _objc_release(puVar5);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105d4cea0;
  puStack_a0 = &UNK_1108e4d60;
  puVar5 = puVar4;
  lStack_98 = param_5;
  uStack_90 = uVar3;
  uStack_88 = uVar2;
  uStack_80 = param_3;
  uStack_78 = param_4;
  func_0x00010bfe91c0(puVar4,param_6,&puStack_b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60(uVar1,param_6,uVar6);
  uVar3 = *(undefined8 *)(param_5 + 0x90);
  func_0x00010bf8c6a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar6);
  _objc_release(uVar3);
  uVar6 = *(undefined8 *)(param_5 + 0x90);
  func_0x00010bf1c8e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105d4cea0; end: 105d4cf67;  */

void FUN_105d4cea0(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  func_0x00010bdc1000(param_2);
  dVar5 = *(double *)(param_1 + 0x28);
  dVar6 = *(double *)(param_1 + 0x30);
  dVar7 = *(double *)(param_1 + 0x40);
  bVar1 = false;
  if ((dVar5 == *(double *)(param_1 + 0x38)) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar7))) {
    bVar1 = dVar6 == dVar7;
  }
  if (!bVar1) {
    _CGContextTranslateCTM
              ((dVar5 - *(double *)(param_1 + 0x38)) * 0.5,(dVar6 - dVar7) * 0.5,param_2);
    dVar5 = *(double *)(param_1 + 0x28);
    dVar6 = *(double *)(param_1 + 0x30);
  }
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(dVar5,dVar6,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x198);
  func_0x00010c08c0e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12fc60();
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105d4cf68; end: 105d4cf9b; -[SCPreviewFeatureCaptionImpl setTransform:] */

void FUN_105d4cf68(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_28 = param_3[3];
  uStack_30 = param_3[2];
  uStack_18 = param_3[5];
  uStack_20 = param_3[4];
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x198),param_2,&uStack_40);
  return;
}



/* Entry: 105d4cf9c; end: 105d4d1b3; -[SCPreviewFeatureCaptionImpl staticCaptionPositions] */

void FUN_105d4cf9c(undefined **param_1,undefined8 param_2)

{
  double *pdVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 **ppuVar8;
  code *pcVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uVar12;
  double adStack_290 [2];
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  ppuVar3 = param_1;
  func_0x00010bddb4a0(param_1,param_2,1,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*plStack_130;
    unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    unaff_x23 = &PTR____CFConstantStringClassReference_110e28098;
    do {
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*plStack_130 != unaff_x26) {
          _objc_enumerationMutation(ppuVar3);
        }
        unaff_x24 = *(undefined **)(lStack_138 + (long)unaff_x28 * 8);
        unaff_x25 = param_1[0x12];
        func_0x00010bf8c6a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (unaff_x24 != unaff_x25) {
          func_0x00010c252440();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = unaff_x24;
          func_0x00010c06e960();
          uVar12 = 0;
          if (((ulong)puVar5 & 1) == 0) {
            func_0x00010bf34840(unaff_x24);
            uVar12 = uVar10;
          }
          unaff_x25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010bf348c0(unaff_x24);
          uStack_150 = uVar12;
          uStack_148 = uVar10;
          func_0x00010c14de00(unaff_x25,param_2,&PTR____CFConstantStringClassReference_110e28098);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar2,param_2,unaff_x25);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar4 != unaff_x28);
      ppuVar4 = ppuVar3;
      func_0x00010bf52a60(ppuVar3,param_2,&uStack_140,auStack_100,0x10);
      unaff_x22 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar3);
  ppuVar4 = ppuVar2;
  func_0x00010bf529e0();
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar3 = ppuVar2;
    func_0x00010bf51e00();
    ppuVar4 = ppuVar3;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
  }
  ppuVar6 = ppuVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    pcStack_158 = FUN_105d4d1b4;
    ppuVar8 = &puStack_160;
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    ppuStack_1b0 = unaff_x28;
    ppuStack_1a8 = unaff_x27;
    ppuStack_1a0 = unaff_x26;
    puStack_198 = unaff_x25;
    puStack_190 = unaff_x24;
    ppuStack_188 = unaff_x23;
    ppuStack_180 = unaff_x22;
    ppuStack_178 = ppuVar3;
    ppuStack_170 = ppuVar4;
    ppuStack_168 = ppuVar2;
    puStack_160 = &stack0xfffffffffffffff0;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    ppuVar2 = ppuVar6;
    func_0x00010bddb4a0(ppuVar6,param_2,1,1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf52a60();
    if (ppuVar3 != (undefined **)0x0) {
      unaff_x26 = (undefined **)*plStack_270;
      unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      unaff_x23 = &PTR____CFConstantStringClassReference_110e29578;
      do {
        unaff_x28 = (undefined **)0x0;
        do {
          if ((undefined **)*plStack_270 != unaff_x26) {
            _objc_enumerationMutation(ppuVar2);
          }
          unaff_x24 = *(undefined **)(lStack_278 + (long)unaff_x28 * 8);
          unaff_x25 = ppuVar6[0x12];
          func_0x00010bf8c6a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (unaff_x24 != unaff_x25) {
            func_0x00010c252440();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = unaff_x24;
            func_0x00010c06e960();
            dVar11 = 1.0;
            if (((ulong)puVar5 & 1) == 0) {
              func_0x00010bf86ca0(unaff_x24);
              dVar11 = dVar11 / 38.0;
            }
            unaff_x25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            adStack_290[0] = dVar11;
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                &PTR____CFConstantStringClassReference_110e29578);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(ppuVar7,param_2,unaff_x25);
            _objc_release(unaff_x25);
            _objc_release(unaff_x24);
          }
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar3 != unaff_x28);
        ppuVar3 = ppuVar2;
        func_0x00010bf52a60(ppuVar2,param_2,&uStack_280,auStack_240,0x10);
        unaff_x22 = (undefined **)0x0;
      } while (ppuVar3 != (undefined **)0x0);
    }
    _objc_release(ppuVar2);
    ppuVar3 = ppuVar7;
    func_0x00010bf529e0();
    if (ppuVar3 == (undefined **)0x0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      ppuVar2 = ppuVar7;
      func_0x00010bf51e00();
      ppuVar4 = ppuVar2;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar2);
    }
    ppuVar3 = ppuVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      pcVar9 = FUN_105d4d3c0;
      ___stack_chk_fail();
      pdVar1 = adStack_290;
      ppuVar3 = (undefined **)ppuVar3[0x24];
      while( true ) {
        ppuVar6 = ppuVar3;
        *(undefined ***)((long)pdVar1 + -0x60) = unaff_x28;
        *(undefined ***)((long)pdVar1 + -0x58) = unaff_x27;
        *(undefined ***)((long)pdVar1 + -0x50) = unaff_x26;
        *(undefined **)((long)pdVar1 + -0x48) = unaff_x25;
        *(undefined **)((long)pdVar1 + -0x40) = unaff_x24;
        *(undefined ***)((long)pdVar1 + -0x38) = unaff_x23;
        *(undefined ***)((long)pdVar1 + -0x30) = unaff_x22;
        *(undefined ***)((long)pdVar1 + -0x28) = ppuVar2;
        *(undefined ***)((long)pdVar1 + -0x20) = ppuVar4;
        *(undefined ***)((long)pdVar1 + -0x18) = ppuVar7;
        *(undefined1 ***)((long)pdVar1 + -0x10) = ppuVar8;
        *(code **)((long)pdVar1 + -8) = pcVar9;
        ppuVar8 = (undefined1 **)((long)pdVar1 + -0x10);
        *(undefined8 *)((long)pdVar1 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        _objc_retain();
        ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
        func_0x00010c25cd40();
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 *)((long)pdVar1 + -0x128) = 0;
        *(undefined8 *)((long)pdVar1 + -0x130) = 0;
        *(undefined8 *)((long)pdVar1 + -0x118) = 0;
        *(undefined8 *)((long)pdVar1 + -0x120) = 0;
        *(undefined8 *)((long)pdVar1 + -0x108) = 0;
        *(undefined8 *)((long)pdVar1 + -0x110) = 0;
        *(undefined8 *)((long)pdVar1 + -0xf8) = 0;
        *(undefined8 *)((long)pdVar1 + -0x100) = 0;
        _objc_retain(ppuVar6);
        ppuVar3 = ppuVar6;
        func_0x00010bf52a60(ppuVar6,param_2,(undefined1 *)((long)pdVar1 + -0x130),
                            (undefined1 *)((long)pdVar1 + -0xe8),0x10);
        if (ppuVar3 != (undefined **)0x0) {
          unaff_x25 = (undefined *)**(undefined8 **)((long)pdVar1 + -0x120);
          unaff_x26 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
          unaff_x22 = &PTR____CFConstantStringClassReference_110e29598;
          ppuVar2 = ppuVar3;
          do {
            unaff_x27 = (undefined **)0x0;
            do {
              if ((undefined *)**(undefined8 **)((long)pdVar1 + -0x120) != unaff_x25) {
                _objc_enumerationMutation(ppuVar6);
              }
              unaff_x23 = *(undefined ***)(*(long *)((long)pdVar1 + -0x128) + (long)unaff_x27 * 8);
              func_0x000108e24270();
              _objc_retainAutoreleasedReturnValue();
              ppuVar3 = unaff_x23;
              func_0x00010c08fa60();
              if (ppuVar3 != (undefined **)0x0) {
                *(undefined ***)((long)pdVar1 + -0x140) = unaff_x23;
                unaff_x24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                    &PTR____CFConstantStringClassReference_110e29598);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf070e0(ppuVar4,param_2,unaff_x24);
                _objc_release(unaff_x24);
              }
              _objc_release(unaff_x23);
              unaff_x27 = (undefined **)((long)unaff_x27 + 1);
            } while (ppuVar2 != unaff_x27);
            ppuVar2 = ppuVar6;
            func_0x00010bf52a60(ppuVar6,param_2,(undefined1 *)((long)pdVar1 + -0x130),
                                (undefined1 *)((long)pdVar1 + -0xe8),0x10);
          } while (ppuVar2 != (undefined **)0x0);
        }
        _objc_release(ppuVar6);
        ppuVar3 = ppuVar4;
        func_0x00010c08fa60();
        if (ppuVar3 != (undefined **)0x0) {
          ppuVar3 = ppuVar4;
          func_0x00010c08fa60(ppuVar4);
          func_0x00010bf6b860(ppuVar4,param_2,(long)ppuVar3 + -1,1);
        }
        ppuVar3 = ppuVar6;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)pdVar1 + -0x68)) break;
        pcVar9 = FUN_105d4d56c;
        ___stack_chk_fail();
        pdVar1 = (double *)((long)pdVar1 + -0x140);
        ppuVar3 = (undefined **)ppuVar3[0x25];
        ppuVar7 = ppuVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 105d4d1b4; end: 105d4d3bf; -[SCPreviewFeatureCaptionImpl captionScales] */

void FUN_105d4d1b4(undefined **param_1,undefined8 param_2)

{
  double *pdVar1;
  undefined1 *puVar2;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  code *pcVar10;
  double dVar11;
  double adStack_140 [2];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  undefined1 *puVar3;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar5 = param_1;
  func_0x00010bddb4a0(param_1,param_2,1,1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bf52a60();
  if (ppuVar6 != (undefined **)0x0) {
    unaff_x26 = (undefined **)*plStack_120;
    unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    unaff_x23 = &PTR____CFConstantStringClassReference_110e29578;
    do {
      unaff_x28 = (undefined **)0x0;
      do {
        if ((undefined **)*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(ppuVar5);
        }
        unaff_x24 = *(undefined **)(lStack_128 + (long)unaff_x28 * 8);
        unaff_x25 = param_1[0x12];
        func_0x00010bf8c6a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (unaff_x24 != unaff_x25) {
          func_0x00010c252440();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = unaff_x24;
          func_0x00010c06e960();
          dVar11 = 1.0;
          if (((ulong)puVar7 & 1) == 0) {
            func_0x00010bf86ca0(unaff_x24);
            dVar11 = dVar11 / 38.0;
          }
          unaff_x25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          adStack_140[0] = dVar11;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110e29578);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar4,param_2,unaff_x25);
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
        }
        unaff_x28 = (undefined **)((long)unaff_x28 + 1);
      } while (ppuVar6 != unaff_x28);
      ppuVar6 = ppuVar5;
      func_0x00010bf52a60(ppuVar5,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x22 = (undefined **)0x0;
    } while (ppuVar6 != (undefined **)0x0);
  }
  _objc_release(ppuVar5);
  ppuVar6 = ppuVar4;
  func_0x00010bf529e0();
  if (ppuVar6 == (undefined **)0x0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar5 = ppuVar4;
    func_0x00010bf51e00();
    ppuVar6 = ppuVar5;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
  }
  ppuVar8 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    pcVar10 = FUN_105d4d3c0;
    ___stack_chk_fail();
    pdVar1 = adStack_140;
    ppuVar8 = (undefined **)ppuVar8[0x24];
    puVar2 = (undefined1 *)register0x00000008;
    while( true ) {
      ppuVar9 = ppuVar8;
      puVar3 = (undefined1 *)pdVar1;
      *(undefined ***)(puVar3 + -0x60) = unaff_x28;
      *(undefined ***)(puVar3 + -0x58) = unaff_x27;
      *(undefined ***)(puVar3 + -0x50) = unaff_x26;
      *(undefined **)(puVar3 + -0x48) = unaff_x25;
      *(undefined **)(puVar3 + -0x40) = unaff_x24;
      *(undefined ***)(puVar3 + -0x38) = unaff_x23;
      *(undefined ***)(puVar3 + -0x30) = unaff_x22;
      *(undefined ***)(puVar3 + -0x28) = ppuVar5;
      *(undefined ***)(puVar3 + -0x20) = ppuVar6;
      *(undefined ***)(puVar3 + -0x18) = ppuVar4;
      *(undefined1 **)(puVar3 + -0x10) = puVar2 + -0x10;
      *(code **)(puVar3 + -8) = pcVar10;
      *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      *(undefined8 *)(puVar3 + -0x128) = 0;
      *(undefined8 *)(puVar3 + -0x130) = 0;
      *(undefined8 *)(puVar3 + -0x118) = 0;
      *(undefined8 *)(puVar3 + -0x120) = 0;
      *(undefined8 *)(puVar3 + -0x108) = 0;
      *(undefined8 *)(puVar3 + -0x110) = 0;
      *(undefined8 *)(puVar3 + -0xf8) = 0;
      *(undefined8 *)(puVar3 + -0x100) = 0;
      _objc_retain(ppuVar9);
      ppuVar4 = ppuVar9;
      func_0x00010bf52a60(ppuVar9,param_2,puVar3 + -0x130,puVar3 + -0xe8,0x10);
      if (ppuVar4 != (undefined **)0x0) {
        unaff_x25 = (undefined *)**(undefined8 **)(puVar3 + -0x120);
        unaff_x26 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
        unaff_x22 = &PTR____CFConstantStringClassReference_110e29598;
        ppuVar5 = ppuVar4;
        do {
          unaff_x27 = (undefined **)0x0;
          do {
            if ((undefined *)**(undefined8 **)(puVar3 + -0x120) != unaff_x25) {
              _objc_enumerationMutation(ppuVar9);
            }
            unaff_x23 = *(undefined ***)(*(long *)(puVar3 + -0x128) + (long)unaff_x27 * 8);
            func_0x000108e24270();
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = unaff_x23;
            func_0x00010c08fa60();
            if (ppuVar4 != (undefined **)0x0) {
              *(undefined ***)(puVar3 + -0x140) = unaff_x23;
              unaff_x24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                  &PTR____CFConstantStringClassReference_110e29598);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf070e0(ppuVar6,param_2,unaff_x24);
              _objc_release(unaff_x24);
            }
            _objc_release(unaff_x23);
            unaff_x27 = (undefined **)((long)unaff_x27 + 1);
          } while (ppuVar5 != unaff_x27);
          ppuVar5 = ppuVar9;
          func_0x00010bf52a60(ppuVar9,param_2,puVar3 + -0x130,puVar3 + -0xe8,0x10);
        } while (ppuVar5 != (undefined **)0x0);
      }
      _objc_release(ppuVar9);
      ppuVar4 = ppuVar6;
      func_0x00010c08fa60();
      if (ppuVar4 != (undefined **)0x0) {
        ppuVar4 = ppuVar6;
        func_0x00010c08fa60(ppuVar6);
        func_0x00010bf6b860(ppuVar6,param_2,(long)ppuVar4 + -1,1);
      }
      ppuVar4 = ppuVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar3 + -0x68)) break;
      pcVar10 = FUN_105d4d56c;
      ___stack_chk_fail();
      pdVar1 = (double *)(puVar3 + -0x140);
      ppuVar8 = (undefined **)ppuVar4[0x25];
      ppuVar4 = ppuVar9;
      puVar2 = puVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 105d4d3c0; end: 105d4d3c7; -[SCPreviewFeatureCaptionImpl captionStyleList] */

void FUN_105d4d3c0(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x19;
  undefined *unaff_x20;
  long unaff_x21;
  undefined **unaff_x22;
  long unaff_x23;
  undefined *unaff_x24;
  long unaff_x25;
  undefined **unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  lVar3 = *(long *)(param_1 + 0x120);
  while( true ) {
    lVar2 = lVar3;
    *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
    *(long *)(puVar1 + -0x58) = unaff_x27;
    *(undefined ***)(puVar1 + -0x50) = unaff_x26;
    *(long *)(puVar1 + -0x48) = unaff_x25;
    *(undefined **)(puVar1 + -0x40) = unaff_x24;
    *(long *)(puVar1 + -0x38) = unaff_x23;
    *(undefined ***)(puVar1 + -0x30) = unaff_x22;
    *(long *)(puVar1 + -0x28) = unaff_x21;
    *(undefined **)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    *(undefined8 *)(puVar1 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    unaff_x20 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)(puVar1 + -0x128) = 0;
    *(undefined8 *)(puVar1 + -0x130) = 0;
    *(undefined8 *)(puVar1 + -0x118) = 0;
    *(undefined8 *)(puVar1 + -0x120) = 0;
    *(undefined8 *)(puVar1 + -0x108) = 0;
    *(undefined8 *)(puVar1 + -0x110) = 0;
    *(undefined8 *)(puVar1 + -0xf8) = 0;
    *(undefined8 *)(puVar1 + -0x100) = 0;
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60(lVar2,param_2,puVar1 + -0x130,puVar1 + -0xe8,0x10);
    if (lVar3 != 0) {
      unaff_x25 = **(long **)(puVar1 + -0x120);
      unaff_x26 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      unaff_x22 = &PTR____CFConstantStringClassReference_110e29598;
      unaff_x21 = lVar3;
      do {
        unaff_x27 = 0;
        do {
          if (**(long **)(puVar1 + -0x120) != unaff_x25) {
            _objc_enumerationMutation(lVar2);
          }
          unaff_x23 = *(long *)(*(long *)(puVar1 + -0x128) + unaff_x27 * 8);
          func_0x000108e24270();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = unaff_x23;
          func_0x00010c08fa60();
          if (lVar3 != 0) {
            *(long *)(puVar1 + -0x140) = unaff_x23;
            unaff_x24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                &PTR____CFConstantStringClassReference_110e29598);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf070e0(unaff_x20,param_2,unaff_x24);
            _objc_release(unaff_x24);
          }
          _objc_release(unaff_x23);
          unaff_x27 = unaff_x27 + 1;
        } while (unaff_x21 != unaff_x27);
        unaff_x21 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,puVar1 + -0x130,puVar1 + -0xe8,0x10);
      } while (unaff_x21 != 0);
    }
    _objc_release(lVar2);
    puVar4 = unaff_x20;
    func_0x00010c08fa60();
    if (puVar4 != (undefined *)0x0) {
      puVar4 = unaff_x20;
      func_0x00010c08fa60(unaff_x20);
      func_0x00010bf6b860(unaff_x20,param_2,puVar4 + -1,1);
    }
    lVar3 = lVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0x68)) break;
    unaff_x30 = FUN_105d4d56c;
    ___stack_chk_fail();
    puVar1 = puVar1 + -0x140;
    lVar3 = *(long *)(lVar3 + 0x128);
    unaff_x19 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 105d4d3c8; end: 105d4d56b;  */

void FUN_105d4d3c8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x19;
  undefined *unaff_x20;
  long unaff_x21;
  undefined **unaff_x22;
  long unaff_x23;
  undefined *unaff_x24;
  long unaff_x25;
  undefined **unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    lVar1 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined ***)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    unaff_x20 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    _objc_retain(lVar1);
    lVar2 = lVar1;
    func_0x00010bf52a60(lVar1,param_2,(undefined1 *)((long)register0x00000008 + -0x130),
                        (undefined1 *)((long)register0x00000008 + -0xe8),0x10);
    if (lVar2 != 0) {
      unaff_x25 = **(long **)((long)register0x00000008 + -0x120);
      unaff_x26 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      unaff_x22 = &PTR____CFConstantStringClassReference_110e29598;
      unaff_x21 = lVar2;
      do {
        unaff_x27 = 0;
        do {
          if (**(long **)((long)register0x00000008 + -0x120) != unaff_x25) {
            _objc_enumerationMutation(lVar1);
          }
          unaff_x23 = *(long *)(*(long *)((long)register0x00000008 + -0x128) + unaff_x27 * 8);
          func_0x000108e24270();
          _objc_retainAutoreleasedReturnValue();
          lVar2 = unaff_x23;
          func_0x00010c08fa60();
          if (lVar2 != 0) {
            *(long *)((long)register0x00000008 + -0x140) = unaff_x23;
            unaff_x24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                &PTR____CFConstantStringClassReference_110e29598);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf070e0(unaff_x20,param_2,unaff_x24);
            _objc_release(unaff_x24);
          }
          _objc_release(unaff_x23);
          unaff_x27 = unaff_x27 + 1;
        } while (unaff_x21 != unaff_x27);
        unaff_x21 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,(undefined1 *)((long)register0x00000008 + -0x130),
                            (undefined1 *)((long)register0x00000008 + -0xe8),0x10);
      } while (unaff_x21 != 0);
    }
    _objc_release(lVar1);
    puVar3 = unaff_x20;
    func_0x00010c08fa60();
    if (puVar3 != (undefined *)0x0) {
      puVar3 = unaff_x20;
      func_0x00010c08fa60(unaff_x20);
      func_0x00010bf6b860(unaff_x20,param_2,puVar3 + -1,1);
    }
    lVar2 = lVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68))
    break;
    unaff_x30 = FUN_105d4d56c;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x140);
    param_1 = *(long *)(lVar2 + 0x128);
    unaff_x19 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 105d4d56c; end: 105d4d573; -[SCPreviewFeatureCaptionImpl captionStyleListFromTap] */

void FUN_105d4d56c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  undefined *unaff_x20;
  long unaff_x21;
  undefined **unaff_x22;
  long unaff_x23;
  undefined *unaff_x24;
  long unaff_x25;
  undefined **unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    lVar3 = *(long *)(param_1 + 0x128);
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined ***)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined ***)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    unaff_x20 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    _objc_retain(lVar3);
    lVar1 = lVar3;
    func_0x00010bf52a60(lVar3,param_2,(undefined1 *)((long)register0x00000008 + -0x130),
                        (undefined1 *)((long)register0x00000008 + -0xe8),0x10);
    if (lVar1 != 0) {
      unaff_x25 = **(long **)((long)register0x00000008 + -0x120);
      unaff_x26 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      unaff_x22 = &PTR____CFConstantStringClassReference_110e29598;
      unaff_x21 = lVar1;
      do {
        unaff_x27 = 0;
        do {
          if (**(long **)((long)register0x00000008 + -0x120) != unaff_x25) {
            _objc_enumerationMutation(lVar3);
          }
          unaff_x23 = *(long *)(*(long *)((long)register0x00000008 + -0x128) + unaff_x27 * 8);
          func_0x000108e24270();
          _objc_retainAutoreleasedReturnValue();
          lVar1 = unaff_x23;
          func_0x00010c08fa60();
          if (lVar1 != 0) {
            *(long *)((long)register0x00000008 + -0x140) = unaff_x23;
            unaff_x24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                &PTR____CFConstantStringClassReference_110e29598);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf070e0(unaff_x20,param_2,unaff_x24);
            _objc_release(unaff_x24);
          }
          _objc_release(unaff_x23);
          unaff_x27 = unaff_x27 + 1;
        } while (unaff_x21 != unaff_x27);
        unaff_x21 = lVar3;
        func_0x00010bf52a60(lVar3,param_2,(undefined1 *)((long)register0x00000008 + -0x130),
                            (undefined1 *)((long)register0x00000008 + -0xe8),0x10);
      } while (unaff_x21 != 0);
    }
    _objc_release(lVar3);
    puVar2 = unaff_x20;
    func_0x00010c08fa60();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = unaff_x20;
      func_0x00010c08fa60(unaff_x20);
      func_0x00010bf6b860(unaff_x20,param_2,puVar2 + -1,1);
    }
    param_1 = lVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x68))
    break;
    unaff_x30 = FUN_105d4d56c;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x140);
    unaff_x19 = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 105d4d574; end: 105d4d57b; -[SCPreviewFeatureCaptionImpl captionStyleListFromScroll] */

void FUN_105d4d574(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x19;
  undefined *unaff_x20;
  long unaff_x21;
  undefined **unaff_x22;
  long unaff_x23;
  undefined *unaff_x24;
  long unaff_x25;
  undefined **unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  lVar3 = *(long *)(param_1 + 0x130);
  while( true ) {
    lVar2 = lVar3;
    *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
    *(long *)(puVar1 + -0x58) = unaff_x27;
    *(undefined ***)(puVar1 + -0x50) = unaff_x26;
    *(long *)(puVar1 + -0x48) = unaff_x25;
    *(undefined **)(puVar1 + -0x40) = unaff_x24;
    *(long *)(puVar1 + -0x38) = unaff_x23;
    *(undefined ***)(puVar1 + -0x30) = unaff_x22;
    *(long *)(puVar1 + -0x28) = unaff_x21;
    *(undefined **)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    *(undefined8 *)(puVar1 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    unaff_x20 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)(puVar1 + -0x128) = 0;
    *(undefined8 *)(puVar1 + -0x130) = 0;
    *(undefined8 *)(puVar1 + -0x118) = 0;
    *(undefined8 *)(puVar1 + -0x120) = 0;
    *(undefined8 *)(puVar1 + -0x108) = 0;
    *(undefined8 *)(puVar1 + -0x110) = 0;
    *(undefined8 *)(puVar1 + -0xf8) = 0;
    *(undefined8 *)(puVar1 + -0x100) = 0;
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60(lVar2,param_2,puVar1 + -0x130,puVar1 + -0xe8,0x10);
    if (lVar3 != 0) {
      unaff_x25 = **(long **)(puVar1 + -0x120);
      unaff_x26 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      unaff_x22 = &PTR____CFConstantStringClassReference_110e29598;
      unaff_x21 = lVar3;
      do {
        unaff_x27 = 0;
        do {
          if (**(long **)(puVar1 + -0x120) != unaff_x25) {
            _objc_enumerationMutation(lVar2);
          }
          unaff_x23 = *(long *)(*(long *)(puVar1 + -0x128) + unaff_x27 * 8);
          func_0x000108e24270();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = unaff_x23;
          func_0x00010c08fa60();
          if (lVar3 != 0) {
            *(long *)(puVar1 + -0x140) = unaff_x23;
            unaff_x24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                &PTR____CFConstantStringClassReference_110e29598);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf070e0(unaff_x20,param_2,unaff_x24);
            _objc_release(unaff_x24);
          }
          _objc_release(unaff_x23);
          unaff_x27 = unaff_x27 + 1;
        } while (unaff_x21 != unaff_x27);
        unaff_x21 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,puVar1 + -0x130,puVar1 + -0xe8,0x10);
      } while (unaff_x21 != 0);
    }
    _objc_release(lVar2);
    puVar4 = unaff_x20;
    func_0x00010c08fa60();
    if (puVar4 != (undefined *)0x0) {
      puVar4 = unaff_x20;
      func_0x00010c08fa60(unaff_x20);
      func_0x00010bf6b860(unaff_x20,param_2,puVar4 + -1,1);
    }
    lVar3 = lVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0x68)) break;
    unaff_x30 = FUN_105d4d56c;
    ___stack_chk_fail();
    puVar1 = puVar1 + -0x140;
    lVar3 = *(long *)(lVar3 + 0x128);
    unaff_x19 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 105d4d57c; end: 105d4d583; -[SCPreviewFeatureCaptionImpl captionStyleExploredListFromTap] */

void FUN_105d4d57c(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x19;
  undefined *unaff_x20;
  long unaff_x21;
  undefined **unaff_x22;
  long unaff_x23;
  undefined *unaff_x24;
  long unaff_x25;
  undefined **unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  lVar3 = *(long *)(param_1 + 0x138);
  while( true ) {
    lVar2 = lVar3;
    *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
    *(long *)(puVar1 + -0x58) = unaff_x27;
    *(undefined ***)(puVar1 + -0x50) = unaff_x26;
    *(long *)(puVar1 + -0x48) = unaff_x25;
    *(undefined **)(puVar1 + -0x40) = unaff_x24;
    *(long *)(puVar1 + -0x38) = unaff_x23;
    *(undefined ***)(puVar1 + -0x30) = unaff_x22;
    *(long *)(puVar1 + -0x28) = unaff_x21;
    *(undefined **)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    *(undefined8 *)(puVar1 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    unaff_x20 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)(puVar1 + -0x128) = 0;
    *(undefined8 *)(puVar1 + -0x130) = 0;
    *(undefined8 *)(puVar1 + -0x118) = 0;
    *(undefined8 *)(puVar1 + -0x120) = 0;
    *(undefined8 *)(puVar1 + -0x108) = 0;
    *(undefined8 *)(puVar1 + -0x110) = 0;
    *(undefined8 *)(puVar1 + -0xf8) = 0;
    *(undefined8 *)(puVar1 + -0x100) = 0;
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60(lVar2,param_2,puVar1 + -0x130,puVar1 + -0xe8,0x10);
    if (lVar3 != 0) {
      unaff_x25 = **(long **)(puVar1 + -0x120);
      unaff_x26 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      unaff_x22 = &PTR____CFConstantStringClassReference_110e29598;
      unaff_x21 = lVar3;
      do {
        unaff_x27 = 0;
        do {
          if (**(long **)(puVar1 + -0x120) != unaff_x25) {
            _objc_enumerationMutation(lVar2);
          }
          unaff_x23 = *(long *)(*(long *)(puVar1 + -0x128) + unaff_x27 * 8);
          func_0x000108e24270();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = unaff_x23;
          func_0x00010c08fa60();
          if (lVar3 != 0) {
            *(long *)(puVar1 + -0x140) = unaff_x23;
            unaff_x24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                &PTR____CFConstantStringClassReference_110e29598);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf070e0(unaff_x20,param_2,unaff_x24);
            _objc_release(unaff_x24);
          }
          _objc_release(unaff_x23);
          unaff_x27 = unaff_x27 + 1;
        } while (unaff_x21 != unaff_x27);
        unaff_x21 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,puVar1 + -0x130,puVar1 + -0xe8,0x10);
      } while (unaff_x21 != 0);
    }
    _objc_release(lVar2);
    puVar4 = unaff_x20;
    func_0x00010c08fa60();
    if (puVar4 != (undefined *)0x0) {
      puVar4 = unaff_x20;
      func_0x00010c08fa60(unaff_x20);
      func_0x00010bf6b860(unaff_x20,param_2,puVar4 + -1,1);
    }
    lVar3 = lVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0x68)) break;
    unaff_x30 = FUN_105d4d56c;
    ___stack_chk_fail();
    puVar1 = puVar1 + -0x140;
    lVar3 = *(long *)(lVar3 + 0x128);
    unaff_x19 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 105d4d584; end: 105d4d58b; -[SCPreviewFeatureCaptionImpl captionStyleExploredListFromScroll] */

void FUN_105d4d584(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x19;
  undefined *unaff_x20;
  long unaff_x21;
  undefined **unaff_x22;
  long unaff_x23;
  undefined *unaff_x24;
  long unaff_x25;
  undefined **unaff_x26;
  long unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  puVar1 = (undefined1 *)register0x00000008;
  lVar3 = *(long *)(param_1 + 0x140);
  while( true ) {
    lVar2 = lVar3;
    *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
    *(long *)(puVar1 + -0x58) = unaff_x27;
    *(undefined ***)(puVar1 + -0x50) = unaff_x26;
    *(long *)(puVar1 + -0x48) = unaff_x25;
    *(undefined **)(puVar1 + -0x40) = unaff_x24;
    *(long *)(puVar1 + -0x38) = unaff_x23;
    *(undefined ***)(puVar1 + -0x30) = unaff_x22;
    *(long *)(puVar1 + -0x28) = unaff_x21;
    *(undefined **)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    *(undefined8 *)(puVar1 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    unaff_x20 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)(puVar1 + -0x128) = 0;
    *(undefined8 *)(puVar1 + -0x130) = 0;
    *(undefined8 *)(puVar1 + -0x118) = 0;
    *(undefined8 *)(puVar1 + -0x120) = 0;
    *(undefined8 *)(puVar1 + -0x108) = 0;
    *(undefined8 *)(puVar1 + -0x110) = 0;
    *(undefined8 *)(puVar1 + -0xf8) = 0;
    *(undefined8 *)(puVar1 + -0x100) = 0;
    _objc_retain(lVar2);
    lVar3 = lVar2;
    func_0x00010bf52a60(lVar2,param_2,puVar1 + -0x130,puVar1 + -0xe8,0x10);
    if (lVar3 != 0) {
      unaff_x25 = **(long **)(puVar1 + -0x120);
      unaff_x26 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      unaff_x22 = &PTR____CFConstantStringClassReference_110e29598;
      unaff_x21 = lVar3;
      do {
        unaff_x27 = 0;
        do {
          if (**(long **)(puVar1 + -0x120) != unaff_x25) {
            _objc_enumerationMutation(lVar2);
          }
          unaff_x23 = *(long *)(*(long *)(puVar1 + -0x128) + unaff_x27 * 8);
          func_0x000108e24270();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = unaff_x23;
          func_0x00010c08fa60();
          if (lVar3 != 0) {
            *(long *)(puVar1 + -0x140) = unaff_x23;
            unaff_x24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                &PTR____CFConstantStringClassReference_110e29598);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf070e0(unaff_x20,param_2,unaff_x24);
            _objc_release(unaff_x24);
          }
          _objc_release(unaff_x23);
          unaff_x27 = unaff_x27 + 1;
        } while (unaff_x21 != unaff_x27);
        unaff_x21 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,puVar1 + -0x130,puVar1 + -0xe8,0x10);
      } while (unaff_x21 != 0);
    }
    _objc_release(lVar2);
    puVar4 = unaff_x20;
    func_0x00010c08fa60();
    if (puVar4 != (undefined *)0x0) {
      puVar4 = unaff_x20;
      func_0x00010c08fa60(unaff_x20);
      func_0x00010bf6b860(unaff_x20,param_2,puVar4 + -1,1);
    }
    lVar3 = lVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0x68)) break;
    unaff_x30 = FUN_105d4d56c;
    ___stack_chk_fail();
    puVar1 = puVar1 + -0x140;
    lVar3 = *(long *)(lVar3 + 0x128);
    unaff_x19 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 105d4d58c; end: 105d4d5bb; -[SCPreviewFeatureCaptionImpl captionStyleLoadingTime] */

long FUN_105d4d58c(double param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf304c0(*(undefined8 *)(param_2 + 0x90));
  lVar1 = (long)(param_1 * 1000.0);
  if (param_1 < 0.0) {
    lVar1 = -1;
  }
  return lVar1;
}



/* Entry: 105d4d5bc; end: 105d4d5c3; -[SCPreviewFeatureCaptionImpl captionToolIsOpened] */

void FUN_105d4d5bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06e230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_isCaptionToolOpened_1125f9298);
  return;
}



/* Entry: 105d4d5c4; end: 105d4d747; -[SCPreviewFeatureCaptionImpl hasBackgroundCaptions] */

long FUN_105d4d5c4(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
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
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + 0x120);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60();
  lVar9 = 0;
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        puVar8 = *(undefined1 **)(lStack_128 + lVar10 * 8);
        puVar2 = puVar8;
        func_0x00010bf303a0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010befd420();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c252440();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar8;
        func_0x00010bf07f80();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        puVar6 = (undefined8 *)puVar4;
        func_0x00010bf4b900();
        _objc_release(puVar4);
        _objc_release(puVar8);
        _objc_release(puVar3);
        _objc_release(puVar2);
        if (((ulong)puVar5 & 1) != 0) {
          lVar9 = 1;
          goto LAB_105d4d700;
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar7;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    lVar9 = 0;
  }
LAB_105d4d700:
  _objc_release(lVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar9;
  }
  ___stack_chk_fail();
  func_0x00010bf8c6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined1 *)puVar6;
  func_0x00010bf8c1c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf2f860();
  _objc_release(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    lVar7 = lVar7 + 0x248;
    _objc_loadWeakRetained(lVar7);
    lVar9 = lVar7;
    func_0x00010bfa1b80();
    _objc_release(lVar7);
  }
  else {
    lVar9 = 0;
  }
  _objc_release(puVar6);
  return lVar9;
}



/* Entry: 105d4d748; end: 105d4d7d7; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManagerCanStartEditingCaption:] */

long FUN_105d4d748(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x00010bf8c6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf8c1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2f860();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    param_1 = param_1 + 0x248;
    _objc_loadWeakRetained(param_1);
    lVar3 = param_1;
    func_0x00010bfa1b80();
    _objc_release(param_1);
  }
  else {
    lVar3 = 0;
  }
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105d4d7d8; end: 105d4d907; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManagerWillStartEditingCaption:fromOpenAction:] */

void FUN_105d4d7d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar5 = *(undefined8 *)(param_1 + 0x178);
  uVar1 = uVar5;
  _objc_opt_class(uVar5);
  func_0x00010beee440();
  func_0x00010c0a2900(uVar5,param_2,uVar1);
  lVar2 = param_1 + 0x248;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bfa1c60();
  _objc_release(lVar2);
  *(undefined1 *)(param_1 + 0x158) = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bfa1e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar1;
  func_0x00010c071280();
  if ((int)uVar5 != 0) {
    func_0x00010bf9b720(uVar1);
  }
  func_0x00010be52ce0(param_1,param_2,1,param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x1f0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0b62c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x170);
  func_0x00010bf5af60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185a80(uVar5,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d4d908; end: 105d4d91b; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManagerWillConstructCaptionCarousel:] */

void FUN_105d4d908(long param_1)

{
  *(undefined1 *)(param_1 + 0x158) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c250e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_startTTIMeasurementForCaptionAct_112671db8,0);
  return;
}



/* Entry: 105d4d91c; end: 105d4db87; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManagerDidPrepareCaptionEditing:] */

void FUN_105d4d91c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa29c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfe2c20(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfa1ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2340();
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010c0a2720(*(undefined8 *)(param_1 + 0x178));
  uVar3 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfa1e20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf5e800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8c900(uVar1,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  lVar4 = param_1;
  func_0x00010bf5e800();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c081660();
  _objc_release(lVar4);
  if ((int)lVar5 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x1b0);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf5e800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c26ba60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf80c80(uVar1,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar1);
  }
  lVar4 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c1598c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c084c40();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  if (lVar7 != 2) {
    lVar4 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c2737a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126ae750;
    func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,
                        &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3a00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb220(lVar5,param_2,puVar8,1);
    _objc_release(puVar8);
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010bed2e40(param_1);
    func_0x00010bed73a0(param_1);
    func_0x00010bee1e00(param_1);
    func_0x00010bed3a40(param_1);
    func_0x00010bedb100(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d4db88; end: 105d4dcaf; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:didDeleteCaption:deleteType:] */

void FUN_105d4db88(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  func_0x00010c231000(*(undefined8 *)(param_1 + 0x1d8),param_2,0);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x120),param_2,param_4);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x128),param_2,param_4);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x130),param_2,param_4);
  if (param_5 == 0) {
    func_0x00010be8ba00(param_1,param_2,param_4);
    lVar1 = param_4;
    func_0x00010bfc0860();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x1f0);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0b62c0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_4;
      func_0x00010bfc0860(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a9e80(uVar4,param_2,lVar1,0,0);
      _objc_release(lVar1);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
  }
  param_1 = param_1 + 0x248;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa1ba0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d4dcb0; end: 105d4dcb7; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:getCaptionWithGesture:] */

void FUN_105d4dcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf308b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_captionWithGesture__1125a9bd0,param_4);
  return;
}



/* Entry: 105d4dcb8; end: 105d4dd5b; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:didAddNewCaption:fromGesture:] */

void FUN_105d4dcb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x120),param_2,param_4);
  if (param_5 == 2) {
    lVar3 = 0x130;
    lVar2 = 0x140;
  }
  else {
    if (param_5 != 1) goto LAB_105d4dd24;
    lVar3 = 0x128;
    lVar2 = 0x138;
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + lVar2),param_2,param_4);
  func_0x00010befa120(*(undefined8 *)(param_1 + lVar3),param_2,param_4);
LAB_105d4dd24:
  uVar4 = *(undefined8 *)(param_1 + 0x150);
  uVar1 = param_4;
  func_0x00010beffa20(param_4);
  func_0x00010c166c60(uVar4,param_2,uVar1);
  func_0x00010c2848e0(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105d4dd5c; end: 105d4df23; -[SCPreviewFeatureCaptionImpl updateContainerViewForCaption:] */

void FUN_105d4dd5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c081660();
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar3 = *(undefined8 *)(param_5 + 0x1a0);
    uVar1 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar3,param_6,uVar1);
    _objc_release(uVar1);
    uVar1 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uVar2 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960();
    _objc_release(uVar1);
    func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x1a0));
    uVar3 = uVar2;
    _CGRectGetMidX();
    _CGRectGetMidY(uVar2,uVar4,param_3,param_4);
    uVar1 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    func_0x00010c17a6a0(uVar3,uVar2,uVar1);
    _objc_release(uVar1);
    return;
  }
  uVar3 = *(undefined8 *)(param_5 + 0x90);
  func_0x00010bf2fd40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21300(*(undefined8 *)(param_5 + 0x198),param_6,uVar3);
  uVar2 = *(undefined8 *)(param_5 + 0x198);
  uVar1 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  func_0x00010c066f80(uVar2,param_6,uVar1,uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105d4df24; end: 105d4dfcb; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:didChangeStaticCaptionText:] */

void FUN_105d4df24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010be5a4e0(param_1);
  func_0x00010bed7380(param_1,param_2,param_4);
  func_0x00010bee1de0(param_1,param_2,param_4);
  func_0x00010bed3a20(param_1,param_2,param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x1f0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c26b700(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c256200(uVar1,param_2,1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d4dfcc; end: 105d4e013; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:didChangeStaticCaption:] */

void FUN_105d4dfcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x250;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf736c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d4e014; end: 105d4e08f; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:willStopEditingCaption:withState:withNewCaptionAdded:withCaptionDeleted:] */

void FUN_105d4e014(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x1f0);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c26b700(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c256200(uVar2,param_2,2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d4e090; end: 105d4e887; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:stoppedEditingCaption:withState:withNewCaptionAdded:withCaptionDeleted:] */

void FUN_105d4e090(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  uint param_6,int param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c2010e0(*(undefined8 *)(param_1 + 0x150));
  uVar14 = *(undefined8 *)(param_1 + 0x178);
  func_0x00010bf2fee0(param_4);
  func_0x00010c0a28e0(uVar14);
  func_0x00010be52ca0(param_1);
  lVar2 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb220(lVar3);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar5;
  func_0x00010bfa1e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8c700();
  _objc_release(uVar14);
  _objc_release(uVar5);
  uVar6 = *(ulong *)(param_1 + 0x1f0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c077360();
  if ((uVar7 & 1) == 0) {
    _objc_release(uVar6);
    if (param_7 != 0) goto LAB_105d4e2e0;
LAB_105d4e300:
    if (param_6 == 0) {
      func_0x00010bed4d40(param_1);
      goto LAB_105d4e320;
    }
  }
  else {
    uVar7 = param_4;
    func_0x00010bfc0860();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c08fa60();
    _objc_release(uVar7);
    _objc_release(uVar6);
    if (uVar8 != 0) {
      uVar9 = *(ulong *)(param_1 + 0x1f0);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_4;
      func_0x00010c26b700(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_4;
      func_0x00010bfc0860(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar9;
      func_0x00010c06e180();
      _objc_release(uVar6);
      _objc_release(uVar7);
      _objc_release(uVar9);
      uVar5 = *(undefined8 *)(param_1 + 0x1f0);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar5;
      func_0x00010c0b62c0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_4;
      func_0x00010bfc0860(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a9e80(uVar14);
      _objc_release(uVar7);
      _objc_release(uVar14);
      _objc_release(uVar5);
      if ((uVar8 & 1) == 0) {
        func_0x00010c1a2740(param_4);
      }
    }
    if (param_7 == 0) goto LAB_105d4e300;
LAB_105d4e2e0:
    func_0x00010be8ba00(param_1);
    if ((param_6 & 1) == 0) goto LAB_105d4e320;
  }
  func_0x00010bdc7de0(param_1);
LAB_105d4e320:
  uVar7 = param_4;
  func_0x00010bfdab60();
  if ((int)uVar7 != 0) {
    func_0x00010bf2fee0(param_4);
  }
  lVar2 = param_1 + 0x248;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bfa1c00();
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x1a8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar5;
  func_0x00010bfa1ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (param_6 != 0) {
    if ((*(byte *)(param_1 + 0x180) & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
      func_0x00010c22f420();
      if (((iVar1 != 0) && (uVar7 = param_5, func_0x00010c06e960(), (uVar7 & 1) == 0)) &&
         (uVar5 = uVar14, func_0x00010c077bc0(), (int)uVar5 != 0)) {
        _objc_initWeak(auStack_68,param_1);
        uVar7 = param_4;
        func_0x00010c26ba60(param_4);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_70,auStack_68);
        func_0x00010bf85800(uVar14);
        _objc_release(uVar7);
        *(undefined1 *)(param_1 + 0x180) = 1;
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_68);
      }
    }
    func_0x00010c0a2700(*(undefined8 *)(param_1 + 0x178));
  }
  if ((param_7 != 0) &&
     (uVar7 = param_5, func_0x00010c247520(), puVar4 = PTR_PTR_1126c3dc8, uVar7 == 1)) {
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf680c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf29420(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar11 = PTR_PTR_1126c3dd0;
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf680c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar3;
    func_0x00010c0b3ba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5ad60(puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c2ac420(puVar11);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf21f60(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b31a0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar13 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c18a960();
    _objc_release(lVar2);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar4);
  }
  puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf301e0(PTR_PTR_1126c4438);
  func_0x00010c0df6e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar11);
  _objc_release(puVar4);
  lVar2 = param_1;
  func_0x00010beca5c0();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar11);
  _objc_release(puVar4);
  uVar7 = param_4;
  _objc_opt_respondsToSelector(param_4,PTR_s_shareLoggingParameters_112668528);
  if ((uVar7 & 1) != 0) {
    uVar7 = param_4;
    func_0x00010c22ac00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar11);
    _objc_release(uVar7);
  }
  lVar3 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar3);
  lVar10 = lVar3;
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar11);
  _objc_release(lVar10);
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x178);
  puVar4 = puVar11;
  func_0x00010bf51e00(puVar11);
  func_0x00010c0a27e0(uVar5);
  _objc_release(puVar4);
  uVar7 = param_5;
  func_0x00010c268460(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c0ba200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar7);
  uVar7 = uVar8;
  func_0x00010bf00560(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x00010be52cc0(param_1);
  _objc_release(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x148);
  uVar7 = uVar8;
  func_0x00010bf00560(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar5);
  _objc_release(uVar7);
  if ((int)lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x80);
    func_0x00010c232040();
    if (iVar1 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c0f3ce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0f3d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10de60(uVar5);
      _objc_release(lVar2);
      _objc_release(param_1);
    }
  }
  _objc_release(uVar8);
  _objc_release(puVar11);
  _objc_release(uVar14);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d4e888; end: 105d4e8c3;  */

void FUN_105d4e888(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c190240(*(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d4e8c4; end: 105d4e99f;  */

void FUN_105d4e8c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105d4e9a0;
  uStack_30 = 0x105d4e9b0;
  uStack_28 = 0;
  func_0x00010c0c0b00(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d4e9a0; end: 105d4e9b7;  */

void FUN_105d4e9a0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105d4e9b8; end: 105d4ea0f;  */

void FUN_105d4e9b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c290fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d4ea10; end: 105d4eb73; -[SCPreviewFeatureCaptionImpl _tagPresent:] */

bool FUN_105d4ea10(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c268460();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf529e0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar5 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c252440(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c268460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar4,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar5 = *(long *)(param_1 + 0x48);
    lVar2 = param_3;
    func_0x00010c26b700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c293de0(lVar5,param_2,lVar2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar5;
    func_0x00010c0e00e0(lVar5,param_2,&PTR____CFConstantStringClassReference_110efb658);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    bVar1 = lVar3 != 0;
    _objc_release(lVar2);
    _objc_release(lVar5);
    _objc_release(puVar4);
  }
  else {
    bVar1 = true;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105d4eb74; end: 105d4ec27; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManagerStartedEditingCaption:captionStyle:] */

void FUN_105d4eb74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_1 + 0x118) == '\x01') {
    uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    func_0x00010c219960(param_1,param_2,&uStack_60);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf4b2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  lVar1 = param_1 + 0x248;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa1be0();
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + 0x1f8) = 1;
  return;
}



/* Entry: 105d4ec28; end: 105d4ecc3; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:didUpdateColor:isHidden:] */

void FUN_105d4ec28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x150);
  _objc_retain(param_4);
  func_0x00010c17e960(uVar3,param_2,param_5);
  func_0x00010c0d1440(*(undefined8 *)(param_1 + 0x150),param_2,param_4);
  _objc_release(param_4);
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08d140();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d4ecc4; end: 105d4ed3b; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManagerResetEditingCaption:] */

void FUN_105d4ecc4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bed2e40();
  uVar2 = *(undefined8 *)(param_1 + 0x150);
  lVar1 = param_1;
  func_0x00010bf5e800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beffa20();
  func_0x00010c166c60(uVar2);
  _objc_release(lVar1);
  func_0x00010bed73a0(param_1);
  func_0x00010bee1e00(param_1);
  func_0x00010bed3a40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bedb110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateMagicCaptionButtonVisibil_1125945e8,0)
  ;
  return;
}



/* Entry: 105d4ed3c; end: 105d4ed93; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:didApplyStyle:] */

void FUN_105d4ed3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010be5a4e0(param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x150);
  uVar1 = param_4;
  func_0x00010c25e260(param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010c16e430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_setBackgroundButtonType__112639328,uVar1);
  return;
}



/* Entry: 105d4ed94; end: 105d4ed9b; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManagerSelectedStyleTapped:] */

void FUN_105d4ed94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c293f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_userToggledAppliedStyle_1126829f8);
  return;
}



/* Entry: 105d4ed9c; end: 105d4ee77; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:shouldDefaultToAlternateStyleForCaptionStyle:] */

uint FUN_105d4ed9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010befd420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar1 = param_1;
    func_0x00010c083340();
    if ((int)lVar1 == 0) {
      uVar4 = 0;
    }
    else {
      lVar1 = param_4;
      func_0x00010c113040(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c25e080();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0720c0();
      uVar4 = (uint)lVar3 ^ 1;
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    _objc_release(param_1);
  }
  _objc_release(param_4);
  return uVar4;
}



/* Entry: 105d4ee78; end: 105d4efef; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:didReceivePastedImageData:isAnimated:] */

void FUN_105d4ee78(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa1ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_initWeak(auStack_58,param_1);
    uVar1 = uVar2;
    func_0x00010bf61f00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar3 = uVar1;
    func_0x00010c25ff60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    func_0x00010bf54820(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105d4eff0; end: 105d4f05b;  */

void FUN_105d4eff0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x248;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfa1b40();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d4f05c; end: 105d4f097; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManagerDidMoveCaption:] */

void FUN_105d4f05c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bed4d40();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c1123c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d4f098; end: 105d4f09f; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:canStopEditingCaption:] */

void FUN_105d4f098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdda070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__canStopEditingCaption__1125541b8,param_4);
  return;
}



/* Entry: 105d4f0a0; end: 105d4f0a3; -[SCPreviewFeatureCaptionImpl previewCaptionEditingManager:didTagUser:] */

void FUN_105d4f0a0(void)

{
  return;
}



/* Entry: 105d4f0a4; end: 105d4f0fb; -[SCPreviewFeatureCaptionImpl captionToolBarButtonItem:didChangeColor:] */

void FUN_105d4f0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010be5a4e0(param_1);
  func_0x00010bf5e800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40d80();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d4f0fc; end: 105d4f163; -[SCPreviewFeatureCaptionImpl captionToolBarButtonItemDidUpdateAlignment:] */

void FUN_105d4f0fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010be5a4e0(param_1);
  func_0x00010beffac0(*(undefined8 *)(param_1 + 0x90));
  func_0x00010bf5e800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010beffa20();
  func_0x00010c166c60(param_3,param_2,lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d4f164; end: 105d4f257; -[SCPreviewFeatureCaptionImpl captionToolBarButtonItemDidTapDuration:] */

void FUN_105d4f164(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010be5a4e0();
  puVar2 = PTR_PTR_1126c4438;
  lVar1 = param_1;
  func_0x00010bf5e800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf301e0(puVar2,param_2,lVar1);
  _objc_release(lVar1);
  if ((int)puVar2 != 0) {
    *(undefined1 *)(param_1 + 0x168) = 1;
    lVar1 = param_1;
    func_0x00010bf5e800(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf5e800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255ee0();
    _objc_release(lVar3);
    *(undefined1 *)(param_1 + 0x168) = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x1a8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfa1e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf969c0();
    _objc_release(uVar5);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105d4f258; end: 105d4f25f; -[SCPreviewFeatureCaptionImpl captionToolBarButtonItemBackgroundButtonTapped:] */

void FUN_105d4f258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c293f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_userToggledAppliedStyle_1126829f8);
  return;
}



/* Entry: 105d4f260; end: 105d4f447; -[SCPreviewFeatureCaptionImpl captionToolBarButtonItemDidTapTextToSpeech:] */

void FUN_105d4f260(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010be5a4e0(param_1);
  lVar1 = param_1;
  func_0x00010bf5e800();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c4438;
  func_0x00010bf301e0();
  if ((int)puVar2 != 0) {
    func_0x00010c255ee0(lVar1);
    iVar7 = (int)*(undefined8 *)(param_1 + 0x1d8);
    lVar3 = lVar1;
    func_0x00010c252440(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26c960();
    _objc_release(lVar3);
    if (iVar7 == 0) {
      _objc_initWeak(auStack_58,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x1e0);
      func_0x00010bf34f20(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bfb0d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(lVar1);
      uVar5 = uVar6;
      func_0x00010c25ff60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar4);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x1d8);
      lVar3 = lVar1;
      func_0x00010c252440(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12ea60(uVar6);
      _objc_release(lVar3);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105d4f448; end: 105d4f4af;  */

void FUN_105d4f448(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x1d8);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c252440(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c136a40(uVar3,param_2,uVar2,0);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105d4f4b0; end: 105d4f52b; -[SCPreviewFeatureCaptionImpl captionToolBarButtonItemDidTapMagicCaption:] */

void FUN_105d4f4b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1f0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5e800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbf9c0(uVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d4f52c; end: 105d4f533; -[SCPreviewFeatureCaptionImpl captionToolBarButtonItemDidTapCustomoji:] */

void FUN_105d4f52c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7c910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_didTapCustomojiButton_1125bcbe8);
  return;
}



/* Entry: 105d4f534; end: 105d4f667; -[SCPreviewFeatureCaptionImpl rectForCreativeToolsMenuSourceView:inView:] */

double FUN_105d4f534(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010bdcf580(param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(param_7);
  func_0x00010bf51460(param_7,param_6,param_8);
  _objc_release(param_8);
  _objc_release(param_7);
  uVar1 = param_5;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06e960();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    dVar3 = param_1;
    _CGRectGetMidX(param_1,param_2,param_3,param_4);
    _CGRectGetMidY(param_1,param_2,param_3,param_4);
    func_0x00010c26c800(param_5);
    param_1 = dVar3 - param_1 * 0.5;
  }
  _objc_release(param_5);
  return param_1;
}



/* Entry: 105d4f668; end: 105d4f6c3; -[SCPreviewFeatureCaptionImpl rotationForCreativeToolsMenuSourceView:] */

undefined8 FUN_105d4f668(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bdcf580();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c26ba60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c141a80();
  _objc_release(uVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105d4f6c4; end: 105d4f763; -[SCPreviewFeatureCaptionImpl creativeToolsMenuMetricsInfo] */

void FUN_105d4f6c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x210);
  func_0x00010bf303a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c113040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126c4440;
    func_0x00010bf30880(PTR_PTR_1126c4440,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}


