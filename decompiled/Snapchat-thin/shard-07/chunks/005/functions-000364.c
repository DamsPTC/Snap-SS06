/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10569d390; end: 10569d3a7; -[SCPreviewABProviderImpl navigateToSpotlightAfterPostFromMusicCamera] */

void FUN_10569d390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df59f8,0,0);
  return;
}



/* Entry: 10569d3a8; end: 10569d413; -[SCPreviewABProviderImpl .cxx_destruct] */

void FUN_10569d3a8(long param_1)

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



/* Entry: 10569d414; end: 10569d487; -[SCPreviewABServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10569d414(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127278a8);
  _objc_destroyWeak(param_1 + _DAT_1127278b0);
  _objc_destroyWeak(param_1 + _DAT_1127278b8);
  _objc_destroyWeak(param_1 + _DAT_1127278ac);
  _objc_destroyWeak(param_1 + _DAT_1127278a4);
  _objc_destroyWeak(param_1 + _DAT_1127278a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127278b4);
  return;
}



/* Entry: 10569d488; end: 10569d4ef; +[SCCTPToggleToolConfig descriptor] */

void FUN_10569d488(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd6c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a56e40,
                        &PTR____CFConstantStringClassReference_110df6018,&PTR_DAT_1130f22c0,
                        &PTR_DAT_1130f22d8,1,0x10,0x1c);
    puRam00000001136bd6c0 = puVar1;
  }
  return;
}



/* Entry: 10569d4f0; end: 10569d557; +[SCPrefetchUCOConfig descriptor] */

void FUN_10569d4f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd6c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a56ee0,
                        &PTR____CFConstantStringClassReference_110df6038,&PTR_DAT_1130f22f8,
                        &PTR_s_enabled_1130f2310,7,0x14,0x1c);
    puRam00000001136bd6c8 = puVar1;
  }
  return;
}



/* Entry: 10569d558; end: 10569d5cb; -[SCAttachmentCTItemConverterImpl initWithStickerInjector:] */

undefined1 * FUN_10569d558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e99b0;
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



/* Entry: 10569d5cc; end: 10569d5d3; -[SCAttachmentCTItemConverterImpl saveType] */

undefined8 FUN_10569d5cc(void)

{
  return 2;
}



/* Entry: 10569d5d4; end: 10569d617; -[SCAttachmentCTItemConverterImpl hasEditsInOverlay:] */

bool FUN_10569d5d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c23f480(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 10569d618; end: 10569d61f; -[SCAttachmentCTItemConverterImpl hasCTItemsInEditor:segment:] */

undefined8 FUN_10569d618(void)

{
  return 0;
}



/* Entry: 10569d620; end: 10569d643; -[SCAttachmentCTItemConverterImpl removeLegacyEditsFromOverlayBuilder:] */

void FUN_10569d620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c203a00(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10569d644; end: 10569d647; -[SCAttachmentCTItemConverterImpl addEditsToSnapDocWithEditor:overlay:segment:] */

void FUN_10569d644(void)

{
  return;
}



/* Entry: 10569d648; end: 10569d64b; -[SCAttachmentCTItemConverterImpl addEditsToSnapDocWithEditor:editingState:segment:] */

void FUN_10569d648(void)

{
  return;
}



/* Entry: 10569d64c; end: 10569d7af; -[SCAttachmentCTItemConverterImpl addEditsToOverlayFromEditor:overlayBuilder:segment:] */

void FUN_10569d64c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x000108eb6ce4(param_3,param_5,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126bcd18;
    _objc_alloc_init();
    puVar2 = PTR_PTR_1126bcd20;
    _objc_alloc(PTR_PTR_1126bcd20);
    func_0x00010c062ba0();
    func_0x00010c16b380(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c224c20(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c203a00(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + 8,0);
  return;
}



/* Entry: 10569d7b0; end: 10569d7bb; -[SCAttachmentCTItemConverterImpl .cxx_destruct] */

void FUN_10569d7b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10569d7bc; end: 10569d7c3; -[SCAutoCaptionsCTItemConverterImpl saveType] */

undefined8 FUN_10569d7bc(void)

{
  return 2;
}



/* Entry: 10569d7c4; end: 10569d7fb; -[SCAutoCaptionsCTItemConverterImpl hasEditsInOverlay:] */

bool FUN_10569d7c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf11400(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10569d7fc; end: 10569d84f; -[SCAutoCaptionsCTItemConverterImpl hasCTItemsInEditor:segment:] */

bool FUN_10569d7fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x00010c0ff580(param_3,param_2,param_4,&PTR___NSConcreteGlobalBlock_1108a7058);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 10569d850; end: 10569d8b3;  */

bool FUN_10569d850(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc820();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (int)uVar2 == 9;
}



/* Entry: 10569d8b4; end: 10569d98b; -[SCAutoCaptionsCTItemConverterImpl addEditsToSnapDocWithEditor:overlay:segment:] */

void FUN_10569d8b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0ff580(param_3,param_2,param_5,&PTR___NSConcreteGlobalBlock_1108a7078);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar3 = param_4;
    func_0x000107ff89cc(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef6fe0(param_3,param_2,uVar3,param_5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10569d98c; end: 10569d9ef;  */

bool FUN_10569d98c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc820();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (int)uVar2 == 9;
}



/* Entry: 10569d9f0; end: 10569da6b; -[SCAutoCaptionsCTItemConverterImpl addEditsToSnapDocWithEditor:editingState:segment:] */

void FUN_10569d9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf11400(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc5f20(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10569da6c; end: 10569dbff; -[SCAutoCaptionsCTItemConverterImpl addEditsToOverlayFromEditor:overlayBuilder:segment:] */

void FUN_10569da6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0ff580(param_3,param_2,param_5,&PTR___NSConcreteGlobalBlock_1108a7098);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) goto LAB_10569dbd4;
  lVar1 = param_3;
  func_0x00010c0ff640(param_3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf5cc00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf114a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = lVar5;
  func_0x00010c0fb880();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
LAB_10569dbc4:
    _objc_release(lVar1);
  }
  else {
    lVar3 = lVar5;
    func_0x00010c0fb880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = param_3;
      func_0x00010bf66c80(param_3,param_2,lVar5,lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010808b2e8();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16cc80(param_4,param_2,lVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar3);
      goto LAB_10569dbc4;
    }
  }
  _objc_release(lVar5);
LAB_10569dbd4:
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10569dc00; end: 10569dc63;  */

bool FUN_10569dc00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc820();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (int)uVar2 == 9;
}



/* Entry: 10569dc64; end: 10569dc87; -[SCAutoCaptionsCTItemConverterImpl removeLegacyEditsFromOverlayBuilder:] */

void FUN_10569dc64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c16cc80(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10569dc88; end: 10569dd13; -[SCAutoCaptionsCTItemConverterImpl _addAutoCaptionPlaybackLayersWithEditor:autoCaptionsState:segment:] */

void FUN_10569dc88(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c0fb820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bef6fe0(param_3,param_2,param_4,param_5);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10569dd14; end: 10569dd1b; -[SCCTLensConverterImpl saveType] */

undefined8 FUN_10569dd14(void)

{
  return 2;
}



/* Entry: 10569dd1c; end: 10569dd53; -[SCCTLensConverterImpl hasEditsInOverlay:] */

bool FUN_10569dd1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c1046e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10569dd54; end: 10569dd5b; -[SCCTLensConverterImpl hasCTItemsInEditor:segment:] */

undefined8 FUN_10569dd54(void)

{
  return 0;
}



/* Entry: 10569dd5c; end: 10569e1c3; -[SCCTLensConverterImpl addEditsToSnapDocWithEditor:overlay:segment:] */

ulong FUN_10569dd5c(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                   undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_5;
  func_0x00010c071ae0();
  _objc_release(puVar1);
  if ((int)uVar13 != 0) {
    lVar2 = param_4;
    func_0x00010c1046e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
    if (lVar2 != 0) {
      uVar3 = param_3;
      func_0x00010c0ff5a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_retain(puVar1);
      func_0x00010c12dfe0(param_3);
      _objc_retain(puVar1);
      puVar4 = puVar1;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (puVar4 != (undefined *)0x0) {
        puVar14 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(puVar1);
          }
          uVar13 = *(undefined8 *)((long)puVar14 * 8);
          puVar5 = PTR_PTR_1126bcd28;
          _objc_opt_new(PTR_PTR_1126bcd28);
          lVar6 = param_4;
          func_0x00010c1046e0(param_4);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4ca0();
          puVar8 = puVar5;
          func_0x00010bf5cc00(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010c08fb40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bbd60();
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(lVar7);
          _objc_release(lVar6);
          lVar6 = param_4;
          func_0x00010c1046e0(param_4);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c104700();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c282760();
          puVar8 = puVar5;
          func_0x00010bf5cc00(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c0840e0();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010bf96da0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010c08fb40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bd160();
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(lVar7);
          _objc_release(lVar6);
          puVar8 = PTR_PTR_1126bcd30;
          _objc_opt_new(PTR_PTR_1126bcd30);
          puVar9 = puVar5;
          func_0x00010bf5cc00(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bd0a0();
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          puVar8 = PTR_PTR_1126bcd38;
          _objc_opt_new(PTR_PTR_1126bcd38);
          func_0x00010c2827c0(uVar13);
          func_0x00010c1dd680(puVar8);
          puVar9 = puVar5;
          func_0x00010c066480(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar9);
          func_0x00010befae60(param_3);
          _objc_release(puVar8);
          _objc_release(puVar5);
          puVar14 = puVar14 + 1;
        } while (puVar4 != puVar14);
        puVar4 = puVar1;
        func_0x00010bf52a60();
      }
      _objc_release(puVar1);
      _objc_release(puVar1);
      _objc_release(puVar1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (ulong)((int)uVar13 == 5);
}



/* Entry: 10569e1c4; end: 10569e207;  */

bool FUN_10569e1c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 5;
}



/* Entry: 10569e208; end: 10569e39b;  */

bool FUN_10569e208(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0840e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c097820();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  iVar10 = (int)*(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c066480(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ff5c0();
  func_0x00010c0df820(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  if (iVar10 == 0) {
    bVar9 = false;
  }
  else {
    uVar3 = param_2;
    func_0x00010bf5cc00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf96ee0();
    bVar9 = (int)uVar8 == 0x19 && (int)uVar5 - 2U < 3;
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return bVar9;
}



/* Entry: 10569e39c; end: 10569e39f; -[SCCTLensConverterImpl addEditsToSnapDocWithEditor:editingState:segment:] */

void FUN_10569e39c(void)

{
  return;
}



/* Entry: 10569e3a0; end: 10569e723; -[SCCTLensConverterImpl addEditsToOverlayFromEditor:overlayBuilder:segment:] */

void FUN_10569e3a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126affe8;
  _objc_retain(param_5);
  func_0x00010bfccec0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c071ae0(param_5,param_2,puVar1);
  _objc_release(param_5);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  if ((int)uVar2 != 0) {
    lVar3 = param_3;
    func_0x00010c0ff5a0(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108a7108);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar1,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10569e768;
    puStack_70 = &UNK_1108a70d8;
    _objc_retain(puVar1);
    lVar3 = param_3;
    puStack_68 = puVar1;
    func_0x00010c12fa80(param_3,param_2,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      puVar5 = PTR_PTR_1126bcd40;
      _objc_alloc_init();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar3 = lVar4;
      func_0x00010bf5cc00();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c094540();
      func_0x00010c0df7c0(puVar10,param_2,lVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar5;
      func_0x00010c1bbd60(puVar5,param_2,puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar9 = lVar4;
      func_0x00010bf5cc00();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar9;
      func_0x00010c0840e0();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010bf96da0();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar14;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010c097820();
      func_0x00010c0df760(puVar17,param_2,lVar16);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar12;
      func_0x00010c1df100(puVar12,param_2,puVar17);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar18;
      func_0x00010c1a71c0();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar19;
      func_0x00010c1b15a0();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar20;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar20);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar9);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar3);
      _objc_release(puVar5);
      func_0x00010c1df0e0(param_4,param_2,puVar21);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar21);
    }
    _objc_release(lVar4);
    _objc_release(puStack_68);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10569e724; end: 10569e767;  */

bool FUN_10569e724(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0c3fe0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf0b760();
  _objc_release(param_2);
  return (int)uVar1 == 5;
}



/* Entry: 10569e768; end: 10569e887;  */

bool FUN_10569e768(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  
  _objc_retain(param_2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  iVar9 = (int)*(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c066480(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ff5c0();
  func_0x00010c0df820(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  if (iVar9 == 0) {
    bVar1 = false;
  }
  else {
    uVar5 = param_2;
    func_0x00010bf5cc00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0840e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf96ee0();
    bVar1 = (int)uVar8 == 0x19;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 10569e888; end: 10569e8eb; -[SCCTLensConverterImpl removeLegacyEditsFromOverlayBuilder:] */

void FUN_10569e888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c1c17e0(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c16cd40(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c20fd80(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10569e8ec; end: 10569e95f; -[SCCaptionCTItemConverterImpl initWithSnapchatterDataFetcher:creativeToolsABProvider:] */

undefined1 * FUN_10569e8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e99b8;
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



/* Entry: 10569e960; end: 10569e967; -[SCCaptionCTItemConverterImpl saveType] */

undefined8 FUN_10569e960(void)

{
  return 2;
}



/* Entry: 10569e968; end: 10569eab7; -[SCCaptionCTItemConverterImpl addEditsToOverlayFromEditor:overlayBuilder:segment:] */

void FUN_10569e968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0ff580();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10569eab8;
  puStack_40 = &UNK_1108a7148;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x000100504554(uVar1,&puStack_58);
  func_0x00010bf529e0();
  func_0x00010c178c80(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10569eab8; end: 10569eb0b;  */

void FUN_10569eab8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ff640(uVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108e32fd0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10569eb0c; end: 10569eceb; -[SCCaptionCTItemConverterImpl addEditsToSnapDocWithEditor:overlay:segment:] */

ulong FUN_10569eb0c(long param_1,ulong param_2,ulong param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bf6c5c0(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar3);
        }
        lVar8 = *(long *)(lVar9 * 8);
        uVar4 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        param_2 = param_3;
        func_0x000108e34808(lVar8,param_3,uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        if (lVar8 != 0) {
          func_0x00010befa9a0(param_3);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        _objc_release(lVar8);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0cc820();
  _objc_release(uVar5);
  _objc_release(param_2);
  return (ulong)((int)uVar6 == 2);
}



/* Entry: 10569ecec; end: 10569ed4f;  */

bool FUN_10569ecec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc820();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (int)uVar2 == 2;
}



/* Entry: 10569ed50; end: 10569eeeb; -[SCCaptionCTItemConverterImpl addEditsToSnapDocWithEditor:editingState:segment:] */

undefined1 *
FUN_10569ed50(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
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
  puVar4 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = param_4;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(lVar1);
          }
          lVar3 = *(long *)(lStack_128 + lVar8 * 8);
          func_0x000108e3761c(lVar3,param_3);
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 != 0) {
            func_0x00010befa9a0(param_3);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          _objc_release(lVar3);
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        lVar2 = lVar1;
        puVar6 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
    puVar4 = (undefined1 *)puVar6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010c0ff580(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf529e0();
  _objc_release(puVar4);
  return (undefined1 *)(ulong)(puVar5 != (undefined1 *)0x0);
}



/* Entry: 10569eeec; end: 10569ef3f; -[SCCaptionCTItemConverterImpl hasCTItemsInEditor:segment:] */

bool FUN_10569eeec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x00010c0ff580(param_3,param_2,param_4,&PTR___NSConcreteGlobalBlock_1108a7198);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 10569ef40; end: 10569efa3;  */

bool FUN_10569ef40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc820();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (int)uVar2 == 2;
}



/* Entry: 10569efa4; end: 10569efe7; -[SCCaptionCTItemConverterImpl hasEditsInOverlay:] */

bool FUN_10569efa4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010bf308c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 10569efe8; end: 10569f00b; -[SCCaptionCTItemConverterImpl removeLegacyEditsFromOverlayBuilder:] */

void FUN_10569efe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c178c80(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10569f00c; end: 10569f017; -[SCCaptionCTItemConverterImpl .cxx_destruct] */

void FUN_10569f00c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10569f018; end: 10569f01f; -[SCCropConverterImpl saveType] */

undefined8 FUN_10569f018(void)

{
  return 2;
}



/* Entry: 10569f020; end: 10569f057; -[SCCropConverterImpl hasEditsInOverlay:] */

bool FUN_10569f020(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf5c920(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 10569f058; end: 10569f05f; -[SCCropConverterImpl hasCTItemsInEditor:segment:] */

undefined8 FUN_10569f058(void)

{
  return 0;
}



/* Entry: 10569f060; end: 10569f1b3; -[SCCropConverterImpl addEditsToSnapDocWithEditor:overlay:segment:] */

void FUN_10569f060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf30e80();
  puVar2 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_5;
  func_0x00010c071ae0();
  _objc_release(puVar2);
  if ((int)uVar1 == 2) {
    if (((ulong)puVar3 & 1) != 0) goto LAB_10569f188;
    _objc_retain(param_5);
    puVar2 = param_5;
  }
  else {
    if ((int)puVar3 == 0) goto LAB_10569f188;
    puVar2 = PTR_PTR_1126affe8;
    func_0x00010c09e180();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar2 != (undefined *)0x0) {
    uVar1 = param_4;
    func_0x00010bf5c920(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x000107ffc5ec();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x000107ffc994(uVar4,param_3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107ffcd08(param_3,puVar2,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
LAB_10569f188:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10569f1b4; end: 10569f227; -[SCCropConverterImpl addEditsToSnapDocWithEditor:editingState:segment:] */

void FUN_10569f1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf5c9c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107ffcd08(param_3,param_5,param_4);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10569f228; end: 10569f40f; -[SCCropConverterImpl addEditsToOverlayFromEditor:overlayBuilder:segment:] */

void FUN_10569f228(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf30e80();
  puVar2 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_5;
  func_0x00010c071ae0(param_5,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)lVar1 == 2) {
    if (((ulong)puVar3 & 1) != 0) goto LAB_10569f3e4;
    _objc_retain(param_5);
    puVar2 = param_5;
  }
  else {
    if ((int)puVar3 == 0) goto LAB_10569f3e4;
    puVar2 = PTR_PTR_1126affe8;
    func_0x00010c09e180(PTR_PTR_1126affe8,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = param_3;
  func_0x00010c0ff580(param_3,param_2,puVar2,&PTR___NSConcreteGlobalBlock_1108a71b8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar4 != 0) {
    lVar1 = param_3;
    func_0x00010c0ff640(param_3,param_2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c27a600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar1);
    if (lVar6 != 0) {
      lVar1 = param_3;
      func_0x00010bf67240(param_3,param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar5 != 0) {
        lVar1 = lVar5;
        func_0x000107ffc770(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c186220(param_4,param_2,lVar1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar1);
      }
      _objc_release(lVar5);
    }
    _objc_release(lVar6);
  }
  _objc_release(lVar4);
  _objc_release(puVar2);
LAB_10569f3e4:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10569f410; end: 10569f49b;  */

undefined8 FUN_10569f410(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf0b760();
  if ((int)uVar3 == 5) {
    uVar2 = param_2;
    func_0x00010c118b40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfdd960();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 10569f49c; end: 10569f4bf; -[SCCropConverterImpl removeLegacyEditsFromOverlayBuilder:] */

void FUN_10569f49c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c186220(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 10569f4c0; end: 10569f4c7; -[SCDrawingsCTItemConverterImpl saveType] */

undefined8 FUN_10569f4c0(void)

{
  return 2;
}



/* Entry: 10569f4c8; end: 10569f58b; -[SCDrawingsCTItemConverterImpl hasEditsInOverlay:] */

bool FUN_10569f4c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf89ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25dde0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  if (lVar4 == 0) {
    lVar4 = param_3;
    func_0x00010bf8a220(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c25dde0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf529e0();
    bVar1 = lVar6 != 0;
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10569f58c; end: 10569f5df; -[SCDrawingsCTItemConverterImpl hasCTItemsInEditor:segment:] */

bool FUN_10569f58c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x00010c0ff580(param_3,param_2,param_4,&PTR___NSConcreteGlobalBlock_1108a71d8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  return lVar1 != 0;
}



/* Entry: 10569f5e0; end: 10569f643;  */

bool FUN_10569f5e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc820();
  _objc_release(uVar1);
  _objc_release(param_2);
  return (int)uVar2 == 8;
}



/* Entry: 10569f644; end: 10569f713; -[SCDrawingsCTItemConverterImpl addEditsToSnapDocWithEditor:overlay:segment:] */

void FUN_10569f644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  uStack_48 = 1;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0fcd00(param_3);
  uVar1 = param_4;
  func_0x000107ff8ca8(param_4,&uStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010bf8a020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc69e0(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10569f714; end: 10569f78f; -[SCDrawingsCTItemConverterImpl addEditsToSnapDocWithEditor:editingState:segment:] */

void FUN_10569f714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf8a020(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc69e0(param_1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10569f790; end: 10569f84b; -[SCDrawingsCTItemConverterImpl addEditsToOverlayFromEditor:overlayBuilder:segment:] */

void FUN_10569f790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bf8a040(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fcd00(param_5);
  _objc_release(param_5);
  uVar2 = uVar1;
  func_0x000108089ad4(param_1,param_2,uVar1,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191960(param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10569f84c; end: 10569f89b; -[SCDrawingsCTItemConverterImpl removeLegacyEditsFromOverlayBuilder:] */

void FUN_10569f84c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c191960(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c191a40(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10569f89c; end: 10569f9e7; -[SCDrawingsCTItemConverterImpl _addDrawingPlaybackLayersWithEditor:strokes:segment:] */

undefined1 *
FUN_10569f89c(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar10 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(param_4);
    lVar1 = param_4;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar13 = *plStack_110;
      do {
        lVar14 = 0;
        do {
          if (*plStack_110 != lVar13) {
            _objc_enumerationMutation(param_4);
          }
          func_0x00010bef7e20(param_3);
          _objc_unsafeClaimAutoreleasedReturnValue();
          lVar14 = lVar14 + 1;
        } while (lVar1 != lVar14);
        lVar1 = param_4;
        puVar10 = &uStack_120;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(param_4);
    puVar6 = (undefined1 *)puVar10;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar3;
  func_0x00010bf8a3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar11;
  func_0x00010bf21a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined1 *)0x0) {
    puVar11 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf21940(*(undefined8 *)((long)puVar11 * 8));
      func_0x00010c0df820(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar5);
      puVar11 = puVar11 + 1;
    } while (puVar3 != puVar11);
    puVar3 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  puVar11 = puVar6;
  func_0x00010c0ff5a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  func_0x00010bfce320();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar11);
  puVar3 = puVar11;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined1 *)0x0) {
    puVar12 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar11);
      }
      _objc_retain(puVar2);
      _objc_retain(puVar4);
      func_0x00010c288840(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar2);
      puVar12 = puVar12 + 1;
    } while (puVar3 != puVar12);
    puVar3 = puVar11;
    func_0x00010bf52a60();
  }
  _objc_release(puVar11);
  func_0x00010c28a040(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf89f40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf21900();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(param_2);
  return (undefined1 *)(ulong)((int)uVar9 != 0);
}



/* Entry: 10569f9e8; end: 10569fceb; -[SCDrawingsCTItemConverterImpl hydrateCTItemInstancesInEditor:] */

ulong FUN_10569f9e8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf8a3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010bf21a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar4);
      }
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010bf21940(*(undefined8 *)(uVar10 * 8));
      func_0x00010c0df820(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar5);
      uVar10 = uVar10 + 1;
    } while (uVar3 != uVar10);
    uVar3 = uVar4;
    func_0x00010bf52a60();
  }
  _objc_release(uVar4);
  uVar10 = param_3;
  func_0x00010c0ff5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfce320();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar10);
  uVar3 = uVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar3 != 0) {
    uVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar10);
      }
      _objc_retain(puVar2);
      _objc_retain(uVar4);
      func_0x00010c288840(param_3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(puVar2);
      uVar11 = uVar11 + 1;
    } while (uVar3 != uVar11);
    uVar3 = uVar10;
    func_0x00010bf52a60();
  }
  _objc_release(uVar10);
  func_0x00010c28a040(param_3);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf89f40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010bf21900();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(param_2);
  return (ulong)((int)uVar8 != 0);
}



/* Entry: 10569fcec; end: 10569fd67;  */

bool FUN_10569fcec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf89f40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf21900();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return (int)uVar3 != 0;
}



/* Entry: 10569fd68; end: 10569fef7;  */

void FUN_10569fd68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf89f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21900();
  func_0x00010c0df820(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf89f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174000();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf5cc00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar1;
  func_0x00010c0cc0c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf89f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4560();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 10569fef8; end: 10569ff03;  */

void FUN_10569fef8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c191b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_setDrawings__1126420f0,0);
  return;
}



/* Entry: 10569ff04; end: 10569ff6f; -[SCFiltersCTItemConverterImpl initWithABProvider:] */

undefined1 * FUN_10569ff04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e99c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bfaec80();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10569ff70; end: 1056a080b; -[SCFiltersCTItemConverterImpl addEditsToOverlayFromEditor:overlayBuilder:segment:] */

void FUN_10569ff70(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_240;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar11 = param_3;
  func_0x00010bfaec40();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar11 != 0) && (lVar12 = lVar11, func_0x00010bf529e0(), lVar12 != 0)) {
    puVar2 = PTR_PTR_1126bcd48;
    _objc_opt_new();
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    _objc_retain(lVar11);
    lStack_240 = lVar11;
    func_0x00010bf52a60();
    if (lStack_240 != 0) {
      lVar12 = *plStack_140;
      do {
        lVar13 = 0;
        do {
          if (*plStack_140 != lVar12) {
            _objc_enumerationMutation(lVar11);
          }
          puStack_178 = &uStack_180;
          uStack_180 = 0;
          uStack_170 = 0x3032000000;
          pcStack_168 = FUN_1056a080c;
          uStack_160 = 0x1056a081c;
          uStack_158 = 0;
          puStack_1a8 = &uStack_1b0;
          uStack_1b0 = 0;
          uStack_1a0 = 0x3032000000;
          pcStack_198 = FUN_1056a080c;
          uStack_190 = 0x1056a081c;
          uStack_188 = 0;
          puStack_1d8 = &uStack_1e0;
          uStack_1e0 = 0;
          uStack_1d0 = 0x3032000000;
          pcStack_1c8 = FUN_1056a080c;
          uStack_1c0 = 0x1056a081c;
          uStack_1b8 = 0;
          func_0x00010c0bd2a0(*(undefined8 *)(lStack_148 + lVar13 * 8));
          puVar3 = puVar2;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010bfc1440();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c0d3c80();
          if (puVar5 == (undefined *)0x0) {
            puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          }
          else {
            _objc_retain(puVar5);
            puVar6 = puVar5;
          }
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar3);
          if (puStack_1d8[5] != 0) {
            puVar3 = PTR_PTR_1126bcd50;
            func_0x00010bdc2940();
            _objc_retainAutoreleasedReturnValue();
            if (puVar3 != (undefined *)0x0) {
              func_0x00010befa120(puVar6);
              func_0x00010c1a2c80(puVar2);
              _objc_unsafeClaimAutoreleasedReturnValue();
              puVar4 = puVar2;
              func_0x00010bf21f60();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              func_0x00010c27e6a0();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar5;
              func_0x00010c0d3c80();
              if (puVar7 == (undefined *)0x0) {
                puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                _objc_opt_new();
              }
              else {
                _objc_retain(puVar7);
                puVar8 = puVar7;
              }
              _objc_release(puVar7);
              _objc_release(puVar5);
              _objc_release(puVar4);
              puVar4 = puVar3;
              func_0x00010bfe5e40(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar8;
              func_0x00010bf4b900();
              _objc_release(puVar4);
              if (((ulong)puVar5 & 1) == 0) {
                puVar4 = puVar3;
                func_0x00010bfe5e40(puVar3);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar8);
                _objc_release(puVar4);
                func_0x00010c21b1a0(puVar2);
                _objc_unsafeClaimAutoreleasedReturnValue();
              }
              puVar4 = puVar2;
              func_0x00010bf21f60();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              func_0x00010bfc1340();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar5;
              func_0x00010c0d3c80();
              if (puVar7 == (undefined *)0x0) {
                puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                _objc_opt_new();
              }
              else {
                _objc_retain(puVar7);
                puVar9 = puVar7;
              }
              _objc_release(puVar7);
              _objc_release(puVar5);
              _objc_release(puVar4);
              puVar4 = puVar3;
              func_0x00010bfe5e40(puVar3);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar9;
              func_0x00010bf4b900();
              _objc_release(puVar4);
              if (((ulong)puVar5 & 1) == 0) {
                puVar4 = puVar3;
                func_0x00010bfe5e40(puVar3);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar9);
                _objc_release(puVar4);
                func_0x00010c1a2c40(puVar2);
                _objc_unsafeClaimAutoreleasedReturnValue();
              }
              _objc_release(puVar9);
              _objc_release(puVar8);
            }
            _objc_release(puVar3);
          }
          lVar10 = puStack_1a8[5];
          if (lVar10 != 0) {
            func_0x00010bfadea0();
            if (lVar10 != 0) {
              puVar3 = PTR_PTR_1126bcd50;
              func_0x00010c246600();
              _objc_retainAutoreleasedReturnValue();
              if (puVar3 != (undefined *)0x0) {
                func_0x00010befa120(puVar6);
                func_0x00010c1a2c80(puVar2);
                _objc_unsafeClaimAutoreleasedReturnValue();
                puVar4 = puVar2;
                func_0x00010bf21f60();
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar4;
                func_0x00010bfc1340();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = puVar5;
                func_0x00010c0d3c80();
                if (puVar7 == (undefined *)0x0) {
                  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                  _objc_opt_new();
                }
                else {
                  _objc_retain(puVar7);
                  puVar8 = puVar7;
                }
                _objc_release(puVar7);
                _objc_release(puVar5);
                _objc_release(puVar4);
                puVar4 = puVar3;
                func_0x00010bfe5e40(puVar3);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar8;
                func_0x00010bf4b900();
                _objc_release(puVar4);
                if (((ulong)puVar5 & 1) == 0) {
                  puVar4 = puVar3;
                  func_0x00010bfe5e40(puVar3);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(puVar8);
                  _objc_release(puVar4);
                  func_0x00010c1a2c40(puVar2);
                  _objc_unsafeClaimAutoreleasedReturnValue();
                }
                _objc_release(puVar8);
              }
              _objc_release(puVar3);
            }
            iVar1 = (int)puStack_1a8[5];
            func_0x00010bfd55a0();
            if (iVar1 != 0) {
              puVar3 = PTR_PTR_1126bcd50;
              func_0x00010c2467c0();
              if (puVar3 != (undefined *)0x0) {
                func_0x00010b78080c();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c223ec0(puVar2);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(puVar3);
              }
              puVar3 = PTR_PTR_1126bcd50;
              func_0x00010c246680();
              if (puVar3 != (undefined *)0x0) {
                func_0x00010b77f3e4();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c207d00(puVar2);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(puVar3);
              }
            }
            func_0x00010c140040(PTR_PTR_1126bcd50);
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1eddc0(puVar2);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar3);
            if (puStack_178[5] != 0) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c220860(puVar2);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(puVar3);
              puVar3 = PTR_PTR_1126bcd50;
              func_0x00010c297c60(PTR_PTR_1126bcd50);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c220800(puVar2);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(puVar3);
            }
          }
          _objc_release(puVar6);
          __Block_object_dispose(&uStack_1e0,8);
          _objc_release(uStack_1b8);
          __Block_object_dispose(&uStack_1b0,8);
          _objc_release(uStack_188);
          __Block_object_dispose(&uStack_180,8);
          _objc_release(uStack_158);
          lVar13 = lVar13 + 1;
        } while (lStack_240 != lVar13);
        lStack_240 = lVar11;
        func_0x00010bf52a60();
      } while (lStack_240 != 0);
    }
    _objc_release(lVar11);
    puVar3 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfc1340();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a2c20(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf21f60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19c8e0(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar11);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1e0,8);
  __Block_object_dispose(&uStack_1b0,8);
  lVar11 = 8;
  __Block_object_dispose(&uStack_180);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = 0;
  return;
}



/* Entry: 1056a080c; end: 1056a0823;  */

void FUN_1056a080c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1056a0824; end: 1056a0897;  */

void FUN_1056a0824(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056a0898; end: 1056a08cf;  */

void FUN_1056a0898(long param_1,undefined8 param_2)

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



/* Entry: 1056a08d0; end: 1056a0fd3; -[SCFiltersCTItemConverterImpl addEditsToSnapDocWithEditor:overlay:segment:] */

undefined8 *
FUN_1056a08d0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_4;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010bfc1340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar13;
  func_0x00010bf529e0();
  _objc_release(puVar13);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    puVar10 = param_4;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar10;
    func_0x00010bfc1440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = puVar1;
    func_0x00010bf52a60(puVar1,param_2,&uStack_1b0,auStack_f0,0x10);
    if (puVar10 != (undefined8 *)0x0) {
      lVar9 = *plStack_1a0;
      do {
        puVar13 = (undefined8 *)0x0;
        do {
          if (*plStack_1a0 != lVar9) {
            _objc_enumerationMutation(puVar1);
          }
          lVar11 = *(long *)(lStack_1a8 + (long)puVar13 * 8);
          lVar4 = lVar11;
          func_0x00010bfe5e40();
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 != 0) {
            func_0x00010c1d0640(puVar3,param_2,lVar11,lVar4);
          }
          _objc_release(lVar4);
          puVar13 = (undefined8 *)((long)puVar13 + 1);
        } while (puVar10 != puVar13);
        puVar10 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,&uStack_1b0,auStack_f0,0x10);
      } while (puVar10 != (undefined8 *)0x0);
    }
    _objc_release(puVar1);
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    puVar10 = param_4;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar10;
    func_0x00010bfc1340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = &uStack_1f0;
    puVar13 = puVar1;
    func_0x00010bf52a60(puVar1,param_2,puVar10,auStack_170,0x10);
    if (puVar13 != (undefined8 *)0x0) {
      lVar9 = *plStack_1e0;
      do {
        puVar10 = (undefined8 *)0x0;
        do {
          if (*plStack_1e0 != lVar9) {
            _objc_enumerationMutation(puVar1);
          }
          uVar12 = *(undefined8 *)(lStack_1e8 + (long)puVar10 * 8);
          puVar5 = puVar3;
          func_0x00010c0e00e0(puVar3,param_2,uVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c081f60();
          puVar7 = PTR_PTR_1126bcd50;
          if ((int)puVar6 == 0) {
            func_0x00010bdc2240(PTR_PTR_1126bcd50,param_2,puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_PTR_1126bcd58;
            func_0x00010bf5d740(PTR_PTR_1126bcd58,param_2,puVar7,0);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010bdc23e0(PTR_PTR_1126bcd50,param_2,uVar12);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_PTR_1126bcd58;
            func_0x00010c27e6e0(PTR_PTR_1126bcd58,param_2,puVar7);
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010c289220(param_3,param_2,puVar6,param_5);
          _objc_release(puVar6);
          _objc_release(puVar7);
          _objc_release(puVar5);
          puVar10 = (undefined8 *)((long)puVar10 + 1);
        } while (puVar13 != puVar10);
        puVar10 = &uStack_1f0;
        puVar13 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,puVar10,auStack_170,0x10);
      } while (puVar13 != (undefined8 *)0x0);
    }
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  puVar1 = param_4;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c2a0480();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar13;
  func_0x00010c08fa60();
  _objc_release(puVar13);
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126bcd50;
  if (puVar2 != (undefined8 *)0x0) {
    puVar10 = param_4;
    func_0x00010bfaebe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar10;
    func_0x00010c2a0480();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010b780770();
    func_0x00010bdc22a0(puVar3,param_2,puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar10);
    puVar1 = (undefined8 *)PTR_PTR_1126bcd58;
    func_0x00010bf5d740(PTR_PTR_1126bcd58,param_2,puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c289220(param_3,param_2,puVar1,param_5);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  puVar1 = param_4;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c140140();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar13;
  func_0x00010bf1f3c0();
  _objc_release(puVar13);
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126bcd50;
  if ((int)puVar2 != 0) {
    puVar10 = param_4;
    func_0x00010bfaebe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar10;
    func_0x00010c140140();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010bf1f3c0();
    func_0x00010bdc2260(puVar3,param_2,puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar10);
    puVar1 = (undefined8 *)PTR_PTR_1126bcd58;
    func_0x00010bf5d740(PTR_PTR_1126bcd58,param_2,puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c289220(param_3,param_2,puVar1,param_5);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  puVar1 = param_4;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c249da0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar13;
  func_0x00010c08fa60();
  _objc_release(puVar13);
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126bcd50;
  if (puVar2 != (undefined8 *)0x0) {
    puVar10 = param_4;
    func_0x00010bfaebe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar10;
    func_0x00010c249da0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010b77f36c();
    func_0x00010bdc2280(puVar3,param_2,puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar10);
    puVar1 = (undefined8 *)PTR_PTR_1126bcd58;
    func_0x00010bf5d740(PTR_PTR_1126bcd58,param_2,puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010c289220(param_3,param_2,puVar1,param_5);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  puVar1 = param_4;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c297ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar13;
  func_0x00010bf1f3c0();
  if (((ulong)puVar2 & 1) == 0) {
    _objc_release(puVar13);
  }
  else {
    puVar2 = param_4;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c297c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    _objc_release(puVar13);
    _objc_release(puVar1);
    puVar1 = (undefined8 *)PTR_PTR_1126bcd58;
    if (puVar8 == (undefined8 *)0x0) goto LAB_1056a0f80;
    puVar5 = PTR_PTR_1126b3828;
    _objc_opt_new(PTR_PTR_1126b3828);
    puVar3 = PTR_PTR_1126bcd50;
    puVar10 = param_4;
    func_0x00010bfaebe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar10;
    func_0x00010c297c00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfae140(puVar3,param_2,puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5d740(puVar1,param_2,puVar5,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar13);
    _objc_release(puVar10);
    _objc_release(puVar5);
    puVar10 = puVar1;
    func_0x00010c289220(param_3,param_2,puVar1,param_5);
  }
  _objc_release(puVar1);
LAB_1056a0f80:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  func_0x00010c277f40(puVar10,param_2,1);
  puVar3 = PTR_PTR_1126bcd38;
  _objc_opt_new(PTR_PTR_1126bcd38);
  func_0x00010c218fc0();
  puVar1 = puVar10;
  func_0x00010bfc9880(puVar10,param_2,puVar3,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar1);
  _objc_release(puVar3);
  return (undefined8 *)(ulong)(puVar1 != (undefined8 *)0x0);
}



/* Entry: 1056a0fd4; end: 1056a1067; -[SCFiltersCTItemConverterImpl hasCTItemsInEditor:segment:] */

bool FUN_1056a0fd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c277f40(param_3,param_2,1);
  puVar1 = PTR_PTR_1126bcd38;
  _objc_opt_new(PTR_PTR_1126bcd38);
  func_0x00010c218fc0();
  lVar2 = param_3;
  func_0x00010bfc9880(param_3,param_2,puVar1,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  return lVar2 != 0;
}



/* Entry: 1056a1068; end: 1056a109f; -[SCFiltersCTItemConverterImpl hasEditsInOverlay:] */

bool FUN_1056a1068(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bfaebe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 1056a10a0; end: 1056a10c3; -[SCFiltersCTItemConverterImpl removeLegacyEditsFromOverlayBuilder:] */

void FUN_1056a10a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c19c8e0(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1056a10c4; end: 1056a10cb; -[SCFiltersCTItemConverterImpl saveType] */

undefined8 FUN_1056a10c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1056a10cc; end: 1056a10d3; -[SCMetadataConverterImpl saveType] */

undefined8 FUN_1056a10cc(void)

{
  return 2;
}



/* Entry: 1056a10d4; end: 1056a11a7; -[SCMetadataConverterImpl hasEditsInOverlay:] */

bool FUN_1056a10d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_3;
    func_0x00010c095720();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = param_3;
      func_0x00010c096600();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        lVar5 = param_3;
        func_0x00010c2490c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = lVar5 != 0;
        _objc_release();
      }
      else {
        bVar1 = true;
      }
      _objc_release(lVar4);
    }
    else {
      bVar1 = true;
    }
    _objc_release(lVar3);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1056a11a8; end: 1056a1303; -[SCMetadataConverterImpl hasCTItemsInEditor:segment:] */

byte FUN_1056a11a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c071ae0();
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    bVar3 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 0;
    func_0x00010c28a040(param_3);
    if ((*(byte *)(puStack_58 + 3) & 1) == 0) {
      func_0x00010c2849a0(param_3);
      bVar3 = *(byte *)(puStack_58 + 3);
    }
    else {
      bVar3 = 1;
    }
    __Block_object_dispose(&uStack_60,8);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar3 & 1;
}



/* Entry: 1056a1304; end: 1056a137f;  */

void FUN_1056a1304(long param_1,undefined1 param_2)

{
  func_0x00010bfd84e0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 1056a1380; end: 1056a15df; -[SCMetadataConverterImpl addEditsToSnapDocWithEditor:overlay:segment:] */

void FUN_1056a1380(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126affe8;
  _objc_retain(param_5);
  func_0x00010bfccec0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c071ae0(param_5,param_2,puVar1);
  _objc_release(param_5);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    lVar3 = param_4;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar4 != 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      uStack_58 = 0x1056a14f4;
      puStack_50 = &UNK_11084e6e0;
      _objc_retain(param_4);
      lStack_48 = param_4;
      func_0x00010c28a040(param_3,param_2,&puStack_68);
      _objc_release(lStack_48);
    }
    lVar3 = param_4;
    func_0x00010c095720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      puStack_90 = puVar1;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_1056a15e0;
      puStack_78 = &UNK_110853ea0;
      _objc_retain(param_4);
      lStack_70 = param_4;
      func_0x00010c2849a0(param_3,param_2,&puStack_90);
      _objc_release(lStack_70);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056a15e0; end: 1056a165f;  */

void FUN_1056a15e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c095720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  uVar1 = param_2;
  func_0x00010c0d3a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c218f80(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056a1660; end: 1056a1973; -[SCMetadataConverterImpl addEditsToSnapDocWithEditor:editingState:segment:] */

void FUN_1056a1660(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126affe8;
  func_0x00010bfccec0(PTR_PTR_1126affe8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c071ae0(param_5,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    puVar1 = PTR_PTR_1126bcd60;
    _objc_opt_new(PTR_PTR_1126bcd60);
    lVar3 = param_4;
    func_0x00010c09a760();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar6 != 0) {
      lVar3 = param_4;
      func_0x00010c09a760(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bbd60(puVar1,param_2,lVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    lVar3 = param_4;
    func_0x00010c09a760();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2813a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c08fa60();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar7 != 0) {
      lVar3 = param_4;
      func_0x00010c09a760(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c2813a0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c11fae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bc920(puVar1,param_2,lVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
    lVar3 = param_4;
    func_0x00010bf16100();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c277e80();
    _objc_release(lVar3);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar4 != 0) {
      lVar3 = param_4;
      func_0x00010bf16100(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c277e80();
      func_0x00010c0df880(puVar8,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bc360(puVar1,param_2,puVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(lVar3);
    }
    puVar8 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7ec0(param_1,param_2,param_3,puVar8,param_5);
    _objc_release(puVar8);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056a1974; end: 1056a1aa7; -[SCMetadataConverterImpl addEditsToOverlayFromEditor:overlayBuilder:segment:] */

void FUN_1056a1974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126affe8;
  _objc_retain(param_5);
  func_0x00010bfccec0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c071ae0(param_5,param_2,puVar1);
  _objc_release(param_5);
  _objc_release(puVar1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)uVar2 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1056a1aa8;
    puStack_60 = &UNK_11084e6e0;
    _objc_retain(param_4);
    uStack_58 = param_4;
    func_0x00010c28a040(param_3,param_2,&puStack_78);
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1056a1c10;
    puStack_88 = &UNK_110853ea0;
    _objc_retain(param_4);
    uStack_80 = param_4;
    func_0x00010c2849a0(param_3,param_2,&puStack_a0);
    _objc_release(uStack_80);
    _objc_release(uStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1056a1aa8; end: 1056a1c0f;  */

void FUN_1056a1aa8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfe5ea0();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c08fb40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5ea0();
    func_0x00010c0df7c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbd60(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  lVar1 = param_2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11fae0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c08fb40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c11fae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc920(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056a1c10; end: 1056a1ca3;  */

void FUN_1056a1c10(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0d3a00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c277e80();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c0d3a00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277e80();
    func_0x00010c1bc380(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056a1ca4; end: 1056a1d1b; -[SCMetadataConverterImpl removeLegacyEditsFromOverlayBuilder:] */

void FUN_1056a1ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c1bbd60(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1bc920(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1bc360(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2079a0(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056a1d1c; end: 1056a1d23; -[SCMuteConverterImpl saveType] */

undefined8 FUN_1056a1d1c(void)

{
  return 2;
}



/* Entry: 1056a1d24; end: 1056a1d5b; -[SCMuteConverterImpl hasEditsInOverlay:] */

bool FUN_1056a1d24(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf0efa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_3 != 0;
}



/* Entry: 1056a1d5c; end: 1056a1d63; -[SCMuteConverterImpl hasCTItemsInEditor:segment:] */

undefined8 FUN_1056a1d5c(void)

{
  return 0;
}



/* Entry: 1056a1d64; end: 1056a1e4f; -[SCMuteConverterImpl addEditsToSnapDocWithEditor:overlay:segment:] */

void FUN_1056a1d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126affe8;
  _objc_retain(param_5);
  func_0x00010bfccec0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c071ae0(param_5,param_2,puVar2);
  _objc_release(param_5);
  if ((int)uVar3 != 0) {
    puVar4 = param_4;
    func_0x00010bf0efa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    puVar1 = PTR_PTR_1126bcd68;
    if (puVar4 == (undefined *)0x0) goto LAB_1056a1e30;
    puVar2 = param_4;
    func_0x00010bf0efa0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf1f3c0();
    func_0x00010c221180(puVar1,param_2,(uint)puVar4 ^ 1,param_3);
  }
  _objc_release(puVar2);
LAB_1056a1e30:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056a1e50; end: 1056a1f07; -[SCMuteConverterImpl addEditsToSnapDocWithEditor:editingState:segment:] */

void FUN_1056a1e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126affe8;
  _objc_retain(param_5);
  func_0x00010bfccec0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c071ae0(param_5,param_2,puVar1);
  _objc_release(param_5);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bcd68;
  if ((int)uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010bf0f0e0(param_4);
    func_0x00010c221180(puVar1,param_2,(uint)uVar2 ^ 1,param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056a1f08; end: 1056a1feb; -[SCMuteConverterImpl addEditsToOverlayFromEditor:overlayBuilder:segment:] */

void FUN_1056a1f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126affe8;
  _objc_retain(param_5);
  func_0x00010bfccec0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c071ae0(param_5,param_2,puVar1);
  _objc_release(param_5);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    puVar1 = PTR_PTR_1126bcd68;
    func_0x00010bfdc700(PTR_PTR_1126bcd68,param_2,param_3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(uint)puVar1 ^ 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16bba0(param_4,param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056a1fec; end: 1056a200f; -[SCMuteConverterImpl removeLegacyEditsFromOverlayBuilder:] */

void FUN_1056a1fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c16bba0(param_3,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1056a2010; end: 1056a2017; -[SCSpectaclesConverterImpl saveType] */

undefined8 FUN_1056a2010(void)

{
  return 2;
}



/* Entry: 1056a2018; end: 1056a2093; -[SCSpectaclesConverterImpl hasEditsInOverlay:] */

bool FUN_1056a2018(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf11600();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_3;
    func_0x00010c262b80(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1056a2094; end: 1056a209b; -[SCSpectaclesConverterImpl hasCTItemsInEditor:segment:] */

undefined8 FUN_1056a2094(void)

{
  return 0;
}


