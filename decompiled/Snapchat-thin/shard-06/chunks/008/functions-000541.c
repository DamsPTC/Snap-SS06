/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e5e954; end: 104e5e9a3; -[SCPreferences setLastSuggestionTakeoverShowTime:] */

void FUN_104e5e954(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110e2d0d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e5e9a4; end: 104e5ea33; -[SCPreferences lastSuggestionTakeoverShowTime] */

undefined8 FUN_104e5e9a4(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_2,param_3,&PTR____CFConstantStringClassReference_110e2d0d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  if (uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf885a0(param_2);
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104e5ea34; end: 104e5ea53; -[SCPreferences setSkipCountInARow:] */

void FUN_104e5ea34(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be1b0;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,ppuVar1,
             &PTR____CFConstantStringClassReference_110e2d0f8);
  return;
}



/* Entry: 104e5ea54; end: 104e5eadb; -[SCPreferences skipCountInARow] */

void FUN_104e5ea54(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e2d0f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  ppuVar1 = param_1;
  if (((ulong)ppuVar3 & 1) == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_1);
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be1b0;
  if (ppuVar1 != (undefined **)0x0) {
    ppuVar3 = ppuVar1;
  }
  _objc_retain(ppuVar3);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104e5eadc; end: 104e5ec2f; -[SCSuggestionTakeoverOnCameraProvider initWithTakeoverPreference:fstCampaignDataProvider:additionalMetricsData:suggestionTakeoverScopeExposer:suggestionTakeoverScopeServices:snapchattersDataFetcher:] */

undefined1 *
FUN_104e5eadc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e48a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e5ec30; end: 104e5ec77; -[SCSuggestionTakeoverOnCameraProvider canShowCampaign:] */

undefined8 FUN_104e5ec30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0b5ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104e5ec78; end: 104e5ee03; -[SCSuggestionTakeoverOnCameraProvider showCampaign:uiContainer:onComplete:] */

void FUN_104e5ec78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_5;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0dade0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104e5ee04; end: 104e5ee63;  */

void FUN_104e5ee04(long param_1,long param_2)

{
  func_0x00010bf529e0();
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  if (param_2 == 0) {
    func_0x00010bddefc0(param_1);
  }
  else {
    func_0x00010be7bf60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e5ee64; end: 104e5eeb7; -[SCSuggestionTakeoverOnCameraProvider _updateShowTimeToNow] */

void FUN_104e5ee64(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c1b8b00(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e5eeb8; end: 104e5ef77; -[SCSuggestionTakeoverOnCameraProvider _presentInlineSuggestionsTakeoverWithUIContainer:campaign:onComplete:] */

void FUN_104e5eeb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf24580(uVar2,param_2,param_3,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb200();
  _objc_release(param_4);
  _objc_release(uVar1);
  func_0x00010bedfe80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104e5ef78; end: 104e5f01f; -[SCSuggestionTakeoverOnCameraProvider _cleanUp] */

void FUN_104e5ef78(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_104e5f020;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104e5f020; end: 104e5f04b;  */

void FUN_104e5f020(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddf180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e5f04c; end: 104e5f0b7; -[SCSuggestionTakeoverOnCameraProvider _cleanUpOnMainThread] */

void FUN_104e5f04c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104e5f0b8; end: 104e5f0fb; -[SCSuggestionTakeoverOnCameraProvider suggestionTakeoverDidTapContinue] */

void FUN_104e5f0b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb240();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bddefd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUp_112555590);
  return;
}



/* Entry: 104e5f0fc; end: 104e5f13f; -[SCSuggestionTakeoverOnCameraProvider suggestionTakeoverDidTapOutside] */

void FUN_104e5f0fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb1c0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bddefd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUp_112555590);
  return;
}



/* Entry: 104e5f140; end: 104e5f183; -[SCSuggestionTakeoverOnCameraProvider suggestionTakeoverDidTapMaybeLater] */

void FUN_104e5f140(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bb1c0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bddefd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanUp_112555590);
  return;
}



/* Entry: 104e5f184; end: 104e5f1fb; -[SCSuggestionTakeoverOnCameraProvider .cxx_destruct] */

void FUN_104e5f184(long param_1)

{
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



/* Entry: 104e5f1fc; end: 104e5fb9f; -[SCCommunitiesFeedSectionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5f1fc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined1 *puVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_initWeak(auStack_a8,param_1);
  lVar27 = param_1 + _DAT_112714a5c;
  _objc_loadWeakRetained();
  lVar1 = lVar27;
  func_0x00010bf42de0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + _DAT_112714a60);
  *(long *)(param_1 + _DAT_112714a60) = lVar1;
  _objc_release(uVar26);
  _objc_release(lVar27);
  puVar2 = PTR_PTR_1126b1418;
  _objc_opt_new();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_104e5fba0;
  puStack_b8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010c1d1e00(puVar2);
  puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x104e5fbcc;
  puStack_e0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_d8,auStack_a8);
  func_0x00010c1d24e0(puVar2);
  puVar3 = PTR_PTR_1126b0c98;
  _objc_alloc();
  func_0x00010c0368e0();
  lVar27 = param_1 + _DAT_112714a64;
  _objc_loadWeakRetained();
  lVar1 = lVar27;
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar28;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0100(puVar2);
  _objc_release(lVar4);
  _objc_release(lVar28);
  _objc_release(lVar1);
  _objc_release(lVar27);
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_104e5fbf8;
  puStack_108 = &UNK_110854290;
  _objc_copyWeak(auStack_100,auStack_a8);
  func_0x00010c1a3960(puVar2);
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_104e5fc60;
  puStack_130 = &UNK_1108542c0;
  _objc_copyWeak(auStack_128,auStack_a8);
  func_0x00010c1d27e0(puVar2);
  lVar27 = param_1 + _DAT_112714a68;
  _objc_loadWeakRetained();
  lVar4 = lVar27;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = (long)_DAT_112714a6c;
  lVar1 = param_1 + lVar28;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar29;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + _DAT_112714a70);
  *(long *)(param_1 + _DAT_112714a70) = lVar6;
  _objc_release(uVar26);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar29);
  _objc_release(lVar4);
  _objc_release(lVar27);
  func_0x00010c166b20(puVar2);
  puVar7 = PTR_PTR_1126b1420;
  _objc_opt_new();
  lVar27 = param_1 + _DAT_112714a74;
  _objc_loadWeakRetained();
  lVar4 = lVar27;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + lVar28;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010bf43000();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar29;
  func_0x00010bf625c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(lVar29);
  _objc_release(lVar4);
  _objc_release(lVar27);
  lVar27 = lVar6;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f720(puVar7);
  _objc_release(lVar27);
  lVar28 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar27 = lVar28;
  func_0x00010bf43000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f780(puVar7);
  _objc_release(lVar27);
  _objc_release(lVar28);
  uStack_178 = 0;
  uStack_168 = 0x3032000000;
  pcStack_160 = FUN_104e5fcf0;
  uStack_158 = 0x104e5fd00;
  uStack_150 = 0;
  lVar27 = lVar6;
  puStack_170 = &uStack_178;
  func_0x00010bfa2680();
  _objc_retainAutoreleasedReturnValue();
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_104e5fd08;
  puStack_188 = &UNK_1108542f0;
  puStack_180 = &uStack_178;
  func_0x00010c0bfcc0();
  _objc_release(lVar27);
  func_0x00010c17f7a0(puVar7);
  puVar8 = PTR_PTR_1126b1438;
  _objc_alloc();
  lVar27 = param_1 + _DAT_112714a78;
  _objc_loadWeakRetained(lVar27);
  lVar4 = lVar27;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar28;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  lVar29 = (long)_DAT_112714a7c;
  uVar26 = *(undefined8 *)(param_1 + lVar29);
  *(undefined **)(param_1 + lVar29) = puVar8;
  _objc_release(uVar26);
  _objc_release(lVar1);
  _objc_release(lVar28);
  _objc_release(lVar4);
  _objc_release(lVar27);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar29));
  puVar8 = PTR__OBJC_CLASS___UITableViewCell_1126afcb8;
  _objc_alloc();
  func_0x00010c04ec80();
  lVar27 = (long)_DAT_112714a80;
  uVar26 = *(undefined8 *)(param_1 + lVar27);
  *(undefined **)(param_1 + lVar27) = puVar8;
  _objc_release(uVar26);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar27));
  _objc_release(puVar8);
  uVar26 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(uVar26);
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar9 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar9;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + lVar29);
  uStack_a0 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + lVar29);
  uStack_98 = uVar16;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar17;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = *(undefined8 *)(param_1 + lVar29);
  uStack_90 = uVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = *(undefined8 *)(param_1 + lVar27);
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar23;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar8);
  _objc_release(puVar24);
  _objc_release(uVar23);
  _objc_release(uVar26);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  uVar26 = *(undefined8 *)(param_1 + lVar29);
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1a8,auStack_a8);
  func_0x00010c2a15a0(uVar26);
  _objc_release(uVar26);
  func_0x00010be89ba0(param_1);
  _objc_destroyWeak(auStack_1a8);
  __Block_object_dispose(&uStack_178,8);
  _objc_release(uStack_150);
  _objc_release(lVar6);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar2);
  puVar25 = auStack_a8;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1a8);
  __Block_object_dispose(&uStack_178,8);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume(puVar25);
  puVar25 = puVar25 + 0x20;
  _objc_loadWeakRetained(puVar25);
  func_0x00010be68880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar25);
  return;
}



/* Entry: 104e5fba0; end: 104e5fbf7;  */

void FUN_104e5fba0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e5fbf8; end: 104e5fc5f;  */

void FUN_104e5fbf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be23b60();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e5fc60; end: 104e5fcef;  */

void FUN_104e5fc60(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010be69be0(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e5fcf0; end: 104e5fd07;  */

void FUN_104e5fcf0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104e5fd08; end: 104e5febb;  */

void FUN_104e5fd08(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1f040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c120160();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar7 != 0) {
    puVar3 = PTR_PTR_1126b1428;
    _objc_alloc();
    lVar2 = lVar1;
    func_0x00010c120160(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0038e0();
    lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar3;
    _objc_release(uVar6);
    _objc_release(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    lVar2 = lVar1;
    func_0x00010c0c54a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6b20(puVar3);
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    lVar2 = param_2;
    func_0x00010bf1f040(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c0c5480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6b20(puVar4);
    _objc_release(lVar7);
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126b1430;
    _objc_alloc(PTR_PTR_1126b1430);
    func_0x00010c020ba0();
    func_0x00010c195c60(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e5febc; end: 104e5fee7;  */

void FUN_104e5febc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e5fee8; end: 104e5ff97; -[SCCommunitiesFeedSectionEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5fee8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar3 = (long)_DAT_112714a70;
  uVar1 = *(ulong *)(param_1 + lVar3);
  _objc_opt_respondsToSelector(uVar1,PTR_s_dismissAll_1125be5e0);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf830e0(*(undefined8 *)(param_1 + lVar3));
  }
  lVar3 = param_1 + _DAT_112714a6c;
  _objc_loadWeakRetained(lVar3);
  lVar2 = lVar3;
  func_0x00010c29c060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f4a0();
  _objc_release(lVar2);
  _objc_release(lVar3);
  puStack_38 = PTR_PTR_1126e48a8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e5ff98; end: 104e5ffa7; -[SCCommunitiesFeedSectionEntryPoint communitiesProfileDidDismissWithScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5ff98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112714a60),PTR_s_endLaunchedFeatureWithScope__1125c2cc8)
  ;
  return;
}



/* Entry: 104e5ffa8; end: 104e5ffab; -[SCCommunitiesFeedSectionEntryPoint createCommunitiesNewChatPageDidDismiss] */

void FUN_104e5ffa8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissCommunitiesNewChatsScope_11255e3a0);
  return;
}



/* Entry: 104e5ffac; end: 104e6001b; -[SCCommunitiesFeedSectionEntryPoint createCommunitiesNewChatPageWantsToDismissWithNewChat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e5ffac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112714a6c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf74e20();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e6001c; end: 104e6019b; -[SCCommunitiesFeedSectionEntryPoint _onJoinCommunityGroupChat:communityId:groupChatName:createdTimestampMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6001c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_68,param_2);
  param_2 = param_2 + _DAT_112714a84;
  _objc_loadWeakRetained(param_2);
  lVar1 = param_2;
  func_0x00010bf42fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  func_0x00010c0859e0(param_1,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104e6019c; end: 104e60243;  */

void FUN_104e6019c(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  if (param_2 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_104e60244;
    puStack_38 = &UNK_110841fb0;
    _objc_copyWeak(auStack_28,param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar1);
    uStack_30 = uVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(uStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 104e60244; end: 104e60277;  */

void FUN_104e60244(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be62180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e60278; end: 104e6030f; -[SCCommunitiesFeedSectionEntryPoint _navigateToChat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e60278(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112714a6c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010bfcf680(PTR_PTR_1126b01c0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf74e20(lVar2,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e60310; end: 104e6045b; -[SCCommunitiesFeedSectionEntryPoint _getUsersFromIds:callback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e60310(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    lVar4 = (long)_DAT_112714a88;
    _objc_retain(param_3);
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained();
    param_1 = param_1 + _DAT_112714a8c;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c244620();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010c09d7c0(lVar2);
    _objc_release(param_3);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(lVar4);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 104e6045c; end: 104e6065f;  */

void FUN_104e6045c(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar11 = param_2;
  func_0x00010bf529e0();
  if (uVar11 != 0) {
    uVar11 = 0;
    do {
      uVar2 = param_2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar3 != 0) {
        uVar3 = uVar2;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c2923e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        _objc_release(uVar3);
        if ((int)uVar5 == 0) {
          puVar9 = PTR_PTR_1126b1440;
          _objc_alloc(PTR_PTR_1126b1440);
          func_0x00010c040f20();
        }
        else {
          uVar6 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010bf1ad00(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar6;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar4;
          func_0x00010bf60aa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          _objc_release(uVar6);
          uVar8 = *(undefined8 *)(param_1 + 0x20);
          func_0x00010bf1c0e0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar8;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010bf60aa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          _objc_release(uVar8);
          puVar9 = PTR_PTR_1126b1440;
          _objc_alloc(PTR_PTR_1126b1440);
          func_0x00010c040f40();
          _objc_release(uVar6);
          _objc_release(uVar7);
        }
        func_0x00010befa120(puVar1);
        _objc_release(puVar9);
      }
      _objc_release(uVar2);
      uVar11 = uVar11 + 1;
      uVar2 = param_2;
      func_0x00010bf529e0();
    } while (uVar11 < uVar2);
  }
  lVar10 = *(long *)(param_1 + 0x28);
  if (lVar10 != 0) {
    (**(code **)(lVar10 + 0x10))(lVar10,puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104e60660; end: 104e6075f; -[SCCommunitiesFeedSectionEntryPoint _registerOnLayoutDirtyCallback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e60660(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112714a7c);
  func_0x00010c295200(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_28,param_1);
  _objc_initWeak(auStack_30,uVar1);
  _objc_copyWeak(auStack_40,auStack_30);
  _objc_copyWeak(auStack_38,auStack_28);
  func_0x00010c0e4c00(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 104e60760; end: 104e60803;  */

void FUN_104e60760(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010c2a15a0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 104e60804; end: 104e6082f;  */

void FUN_104e60804(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be69c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e60830; end: 104e608bf; -[SCCommunitiesFeedSectionEntryPoint _onLayoutDirty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e60830(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112714a7c);
  func_0x00010bf20c00(uVar2);
  _CGRectGetWidth();
  uVar3 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(uVar2);
  param_1 = param_1 + _DAT_112714a6c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e4bc0(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e608c0; end: 104e60923; -[SCCommunitiesFeedSectionEntryPoint _attachViewAfterRender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e608c0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112714a6c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29c060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ca20();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e60924; end: 104e60a1b; -[SCCommunitiesFeedSectionEntryPoint _onCreateGroup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e60924(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  func_0x00010be02800();
  puVar1 = PTR_PTR_1126b1448;
  _objc_alloc(PTR_PTR_1126b1448);
  lVar6 = (long)_DAT_112714a6c;
  lVar2 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar6);
  lVar4 = lVar6;
  func_0x00010bf43000();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x16;
  func_0x00010bc9107c(0x16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c056800(puVar1,param_2,lVar3,param_1,lVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_112714a90),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e60a1c; end: 104e60a73; -[SCCommunitiesFeedSectionEntryPoint _dismissCommunitiesNewChatsScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e60a1c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112714a90;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104e60a74; end: 104e60b6f; -[SCCommunitiesFeedSectionEntryPoint _onFindMoreGroups] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e60a74(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112714a6c;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126b1450;
  _objc_alloc(PTR_PTR_1126b1450);
  lVar5 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar5);
  lVar1 = lVar5;
  func_0x00010bf43000();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x16;
  func_0x00010bc9107c(0x16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0190a0(puVar3,param_2,lVar1,lVar2,param_1,uVar4,0);
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(lVar5);
  func_0x00010c08b7c0(*(undefined8 *)(param_1 + _DAT_112714a60),param_2,puVar3,param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104e60b70; end: 104e60c63; -[SCCommunitiesFeedSectionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e60b70(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112714a90,0);
  _objc_destroyWeak(param_1 + _DAT_112714a5c);
  _objc_destroyWeak(param_1 + _DAT_112714a8c);
  _objc_destroyWeak(param_1 + _DAT_112714a88);
  _objc_destroyWeak(param_1 + _DAT_112714a84);
  _objc_destroyWeak(param_1 + _DAT_112714a98);
  _objc_destroyWeak(param_1 + _DAT_112714a64);
  _objc_destroyWeak(param_1 + _DAT_112714a74);
  _objc_destroyWeak(param_1 + _DAT_112714a68);
  _objc_destroyWeak(param_1 + _DAT_112714a78);
  _objc_destroyWeak(param_1 + _DAT_112714a94);
  _objc_destroyWeak(param_1 + _DAT_112714a6c);
  _objc_storeStrong(param_1 + _DAT_112714a70,0);
  _objc_storeStrong(param_1 + _DAT_112714a60,0);
  _objc_storeStrong(param_1 + _DAT_112714a80,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112714a7c,0);
  return;
}



/* Entry: 104e60c64; end: 104e60e0b; -[SCCommunitiesFeedAppUserLifecycleObserver initWithCommunityFeedManager:customStoriesDataFetcher:performer:enableCommunityBadging:] */

undefined8 *
FUN_104e60c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e48b0;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    *(undefined2 *)(puVar1 + 5) = 0;
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,puVar1);
    uVar2 = puVar1[3];
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e60e0c; end: 104e60e37;  */

void FUN_104e60e0c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec74a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e60e38; end: 104e60e8f; -[SCCommunitiesFeedAppUserLifecycleObserver onAppWillEnterForeground] */

void FUN_104e60e38(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104e60e90;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 104e60e90; end: 104e60e97;  */

void FUN_104e60e90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be67b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onAppWillEnterForeground_112577878);
  return;
}



/* Entry: 104e60e98; end: 104e60eef; -[SCCommunitiesFeedAppUserLifecycleObserver onUserLoggedIn] */

void FUN_104e60e98(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104e60ef0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 104e60ef0; end: 104e60ef7;  */

void FUN_104e60ef0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6c430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onUserLoggedIn_112578aa8);
  return;
}



/* Entry: 104e60ef8; end: 104e60f57; -[SCCommunitiesFeedAppUserLifecycleObserver onUserResumed:didLaunchWithDataUnavailable:] */

void FUN_104e60ef8(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  undefined1 uStack_17;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_104e60f58;
  puStack_28 = &UNK_110854380;
  lStack_20 = param_1;
  uStack_18 = param_3;
  uStack_17 = param_4;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_40);
  return;
}



/* Entry: 104e60f58; end: 104e60f6b;  */

void FUN_104e60f58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6c4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onUserResumed_didLaunchWithData_112578ad8,
             *(undefined1 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x29));
  return;
}



/* Entry: 104e60f6c; end: 104e60f6f; -[SCCommunitiesFeedAppUserLifecycleObserver onAppDidBecomeActive] */

void FUN_104e60f6c(void)

{
  return;
}



/* Entry: 104e60f70; end: 104e60f73; -[SCCommunitiesFeedAppUserLifecycleObserver onAppDidEnterBackground] */

void FUN_104e60f70(void)

{
  return;
}



/* Entry: 104e60f74; end: 104e60f77; -[SCCommunitiesFeedAppUserLifecycleObserver onAppDidFinishLaunching] */

void FUN_104e60f74(void)

{
  return;
}



/* Entry: 104e60f78; end: 104e60f7b; -[SCCommunitiesFeedAppUserLifecycleObserver onAppWillResignActive] */

void FUN_104e60f78(void)

{
  return;
}



/* Entry: 104e60f7c; end: 104e60f7f; -[SCCommunitiesFeedAppUserLifecycleObserver onAppWillTerminate] */

void FUN_104e60f7c(void)

{
  return;
}



/* Entry: 104e60f80; end: 104e60f83; -[SCCommunitiesFeedAppUserLifecycleObserver onUserRegistered] */

void FUN_104e60f80(void)

{
  return;
}



/* Entry: 104e60f84; end: 104e6101f; -[SCCommunitiesFeedAppUserLifecycleObserver _onAppWillEnterForeground] */

void FUN_104e60f84(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    cVar1 = *(char *)(param_1 + 0x28);
    if (cVar1 == '\x01') {
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be37f00(param_1);
    func_0x00010c0c3b00(uVar3,param_2,cVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 104e61020; end: 104e610ab; -[SCCommunitiesFeedAppUserLifecycleObserver _onUserLoggedIn] */

void FUN_104e61020(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be37f00(param_1);
    func_0x00010c0c3b00(uVar2,param_2,1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104e610ac; end: 104e6115f; -[SCCommunitiesFeedAppUserLifecycleObserver _onUserResumed:didLaunchWithDataUnavailable:] */

void FUN_104e610ac(long param_1,undefined8 param_2,int param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if (((param_4 & 1) == 0) && ((int)uVar2 != 0)) {
    if (param_3 != 0) {
      *(undefined1 *)(param_1 + 0x28) = 0;
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be37f00(param_1);
      func_0x00010c0c3b00(uVar2,param_2,1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}



/* Entry: 104e61160; end: 104e612eb; -[SCCommunitiesFeedAppUserLifecycleObserver _subscribeToCommunitiesUpdates] */

void FUN_104e61160(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf00d00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = uVar4;
    func_0x00010c0e0ea0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar1 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 104e612ec; end: 104e6131f;  */

void FUN_104e612ec(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,param_2 != 0);
  return;
}



/* Entry: 104e61320; end: 104e6137f;  */

void FUN_104e61320(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bee3020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e61380; end: 104e613d7; -[SCCommunitiesFeedAppUserLifecycleObserver _updateUserInCommunityAndSync:] */

void FUN_104e61380(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x2a) = param_3;
  *(undefined1 *)(param_1 + 0x29) = 1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be37f00(param_1);
  func_0x00010c0c3b00(uVar1,param_2,0,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e613d8; end: 104e6145f; -[SCCommunitiesFeedAppUserLifecycleObserver _inCommunity] */

undefined1 FUN_104e613d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x29) != '\x01') {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010beffca0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    *(bool *)(param_1 + 0x2a) = lVar3 != 0;
    _objc_release(lVar2);
    _objc_release(lVar1);
    *(undefined1 *)(param_1 + 0x29) = 1;
  }
  return *(undefined1 *)(param_1 + 0x2a);
}



/* Entry: 104e61460; end: 104e614b3; -[SCCommunitiesFeedAppUserLifecycleObserver .cxx_destruct] */

void FUN_104e61460(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e614b4; end: 104e61737; -[SCCommunitiesFeedSyncEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e614b4(long param_1)

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
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1458;
  _objc_alloc(PTR_PTR_1126b1458);
  lVar3 = param_1 + _DAT_112714abc;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c0d5860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112714ac0;
  _objc_loadWeakRetained(lVar5);
  lVar11 = lVar5;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112714ac4;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000280(puVar2);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = param_1 + _DAT_112714ac8;
  _objc_loadWeakRetained();
  lVar5 = lVar3;
  func_0x00010bf06620();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010bf54940();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_112714acc;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(long *)(param_1 + lVar11) = lVar4;
  _objc_release(uVar10);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  func_0x00010bf18720(*(undefined8 *)(param_1 + lVar11));
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 104e61738; end: 104e61777;  */

void FUN_104e61738(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be08a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e61778; end: 104e6180b; -[SCCommunitiesFeedSyncEntryPoint _enableCommunityBadging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e61778(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  param_1 = param_1 + _DAT_112714ad0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf8faa0();
  func_0x00010c0df6e0(puVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104e6180c; end: 104e61883; -[SCCommunitiesFeedSyncEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6180c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714ac4);
  _objc_destroyWeak(param_1 + _DAT_112714ac0);
  _objc_destroyWeak(param_1 + _DAT_112714abc);
  _objc_destroyWeak(param_1 + _DAT_112714ad0);
  _objc_destroyWeak(param_1 + _DAT_112714ac8);
  _objc_destroyWeak(param_1 + _DAT_112714ad4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112714acc,0);
  return;
}



/* Entry: 104e61884; end: 104e6188f; -[SCFriendsFeedBadgeProvider .cxx_destruct] */

void FUN_104e61884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104e61890; end: 104e618ff;  */

void FUN_104e61890(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c067fc0();
  puVar2 = PTR_PTR_1126b1460;
  if (lVar1 < 1) {
    func_0x00010c0db7e0(PTR_PTR_1126b1460);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bef0400();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e61900; end: 104e6198f;  */

void FUN_104e61900(undefined8 param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_2);
  ppuVar1 = param_2;
  func_0x00010c06b700();
  if ((int)ppuVar1 == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be1c8;
  }
  else {
    ppuVar2 = param_2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be1c8;
    }
    else {
      ppuVar1 = param_2;
      func_0x00010c296d80(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104e61990; end: 104e619ff; -[SCFriendsFeedBadgeProviderEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e61990(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112714aec);
  *(undefined8 *)(param_1 + _DAT_112714aec) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112714ae8);
  *(undefined8 *)(param_1 + _DAT_112714ae8) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e48c0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e61a00; end: 104e61a63; -[SCFriendsFeedBadgeProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e61a00(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714af0);
  _objc_destroyWeak(param_1 + _DAT_112714ae4);
  _objc_destroyWeak(param_1 + _DAT_112714ae0);
  _objc_storeStrong(param_1 + _DAT_112714ae8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112714aec,0);
  return;
}



/* Entry: 104e61a64; end: 104e61f4f; -[SCFriendsFeedMoreUnreadButton initWithDelegate:countObservable:unreadButtonShouldMatchNewChat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104e61a64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_98 = PTR_PTR_1126e48c8;
  puVar1 = &uStack_a0;
  puVar2 = (undefined8 *)PTR_s_initWithFrame__1125e2948;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined *)((long)puVar1 + (long)_DAT_112714af4),param_3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112714af8) = param_5;
    func_0x00010c219b60(puVar1);
    func_0x00010c160fc0(puVar1);
    puVar2 = puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126aec40;
    func_0x00010bf25cc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc();
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    func_0x00010c219b60(puVar3);
    func_0x00010c20eaa0(puVar3);
    uVar22 = param_4;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    uVar5 = uVar22;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = *(undefined8 *)((long)puVar1 + (long)_DAT_112714afc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112714afc) = uVar5;
    _objc_release(uVar21);
    _objc_release(uVar22);
    puVar7 = PTR_PTR_1126b0c40;
    puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe7ac0(0x4034000000000000,0x4034000000000000,
                        *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c1a9fc0(puVar3);
    func_0x00010c1aab40(puVar3);
    puVar6 = PTR_PTR_1126b08d8;
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010085b3c8(0x4008000000000000,0x3fd3333333333333,0,0x4000000000000000,puVar6,puVar1,
                        puVar8);
    _objc_release(puVar8);
    func_0x00010befbb60(puVar1);
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar8 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    puStack_90 = puVar10;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar1;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar3;
    puStack_88 = puVar13;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar3;
    puStack_80 = puVar16;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar1;
    func_0x00010c08de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar17;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar19;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar6);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar22 = *(undefined8 *)(param_3 + 0x20);
  puVar1 = puVar2;
  _objc_retain();
  func_0x000104e62320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c216260(uVar22);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 104e61f50; end: 104e61fe3;  */

void FUN_104e61f50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_2;
  _objc_retain();
  func_0x000104e62320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c216260(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e61fe4; end: 104e620c7; -[SCFriendsFeedMoreUnreadButton layoutSubviews] */

void FUN_104e61fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  double dVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126e48c8;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_layoutSubviews_112600e60);
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf20c00(param_5);
  dVar2 = param_4;
  func_0x00010bf20c00(param_5);
  func_0x00010bf19a00(param_1,param_2,param_3,param_4,dVar2 * 0.5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc1040();
  func_0x00010c08c0e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe820();
  _objc_release(param_5);
  _objc_release(puVar1);
  return;
}



/* Entry: 104e620c8; end: 104e620fb; -[SCFriendsFeedMoreUnreadButton _didTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e620c8(long param_1)

{
  param_1 = param_1 + _DAT_112714af4;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7cd60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e620fc; end: 104e6214b; -[SCFriendsFeedMoreUnreadButton removeFromSuperview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e620fc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e48c8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_removeFromSuperview_112628c78);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_112714afc));
  return;
}



/* Entry: 104e6214c; end: 104e6216b; -[SCFriendsFeedMoreUnreadButton delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6214c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112714af4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e6216c; end: 104e6217f; -[SCFriendsFeedMoreUnreadButton setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e6216c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112714af4,param_3);
  return;
}



/* Entry: 104e62180; end: 104e621bb; -[SCFriendsFeedMoreUnreadButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e62180(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714af4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112714afc,0);
  return;
}



/* Entry: 104e621bc; end: 104e622a3; -[SCFriendsFeedMoreUnreadEntryPoint begin] */

void FUN_104e621bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b1478;
  _objc_alloc(PTR_PTR_1126b1478);
  uVar2 = param_1;
  FUN_104e622a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf52b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  FUN_104e622a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c281e20();
  func_0x00010c00a5c0(puVar1,param_2,param_1,uVar3,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  FUN_104e622a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29c060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0ca20();
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e622a4; end: 104e622c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e622a4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112714b00);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e622c8; end: 104e6230f; -[SCFriendsFeedMoreUnreadEntryPoint didTapMoreUnreadButton] */

void FUN_104e622c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_104e622a4();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7cd60();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e62310; end: 104e62337; -[SCFriendsFeedMoreUnreadEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e62310(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112714b00);
  return;
}



/* Entry: 104e62338; end: 104e623ab; -[SCFriendsFeedPageLaunchHandler initWithMainTabNavigationServices:] */

undefined1 * FUN_104e62338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e48d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x10) = 4;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104e623ac; end: 104e6249b; -[SCFriendsFeedPageLaunchHandler launchWithCommand:uiContainer:completion:] */

void FUN_104e623ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfba180();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104e6249c;
  puStack_50 = &UNK_110842508;
  uStack_48 = param_5;
  _objc_retain(param_5);
  func_0x00010c2379a0(lVar2,param_2,param_3,&puStack_68);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(uStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 104e6249c; end: 104e624ab;  */

void FUN_104e6249c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104e624a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 104e624ac; end: 104e624b3; -[SCFriendsFeedPageLaunchHandler screen] */

undefined4 FUN_104e624ac(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 104e624b4; end: 104e624bb; -[SCFriendsFeedPageLaunchHandler .cxx_destruct] */

void FUN_104e624b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104e624bc; end: 104e6259f; -[SCFriendsFeedPageLauncherPlugin initWithMainTabNavigationServices:] */

undefined1 * FUN_104e624bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = &uStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126e48d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b1480;
    _objc_alloc();
    func_0x00010c027fc0();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_40 = puVar2;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return (undefined1 *)puVar1;
  }
  ___stack_chk_fail();
  return *(undefined1 **)(param_3 + 8);
}



/* Entry: 104e625a0; end: 104e625a7; -[SCFriendsFeedPageLauncherPlugin handlers] */

undefined8 FUN_104e625a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104e625a8; end: 104e625d7; -[SCFriendsFeedPageLauncherPlugin setHandlers:] */

void FUN_104e625a8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104e625d8; end: 104e625e3; -[SCFriendsFeedPageLauncherPlugin .cxx_destruct] */

void FUN_104e625d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e625e4; end: 104e62693; -[SCFriendsFeedPageLauncherPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e625e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1488;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112714b10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c027fc0(puVar1,param_2,lVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112714b14);
  *(undefined **)(param_1 + _DAT_112714b14) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_112714b18;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e62694; end: 104e626db; -[SCFriendsFeedPageLauncherPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e62694(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112714b10);
  _objc_destroyWeak(param_1 + _DAT_112714b18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112714b14,0);
  return;
}



/* Entry: 104e626dc; end: 104e628f7; -[SCShortcutsDataBestFriendsPluginImpl initWithSnapchattersObservableRepository:friendmojiDataCoordinator:performerProvider:] */

undefined8 *
FUN_104e626dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_68 = PTR_PTR_1126e48e0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104e628f8;
    puStack_90 = &UNK_1108544e0;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_5);
    uStack_88 = param_5;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_b0,auStack_78);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_b0);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e628f8; end: 104e6293f;  */

void FUN_104e628f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf12a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}


