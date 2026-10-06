/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106db14a0; end: 106db1547; -[SCMemoriesDefaultSearchSessionLoggingCoordinator _end:] */

void FUN_106db14a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    _objc_retain(param_3);
    _CACurrentMediaTime();
    uVar2 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aa220(uVar2);
    _objc_release(param_3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be93810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetQueryState_1125827a0);
  return;
}



/* Entry: 106db1548; end: 106db159b; -[SCMemoriesDefaultSearchSessionLoggingCoordinator _resetQueryState] */

void FUN_106db1548(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x50) = 6;
  *(undefined1 *)(param_1 + 0x58) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



/* Entry: 106db159c; end: 106db15fb; -[SCMemoriesDefaultSearchSessionLoggingCoordinator .cxx_destruct] */

void FUN_106db159c(long param_1)

{
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



/* Entry: 106db15fc; end: 106db169f; -[SCMemoriesSearchLogger initWithLogger:coreConfigProvider:] */

undefined1 *
FUN_106db15fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6e58;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106db16a0; end: 106db16c3; -[SCMemoriesSearchLogger logSearchrankingAction:searchSessionId:resultId:numKeystrokes:selectedCategory:searchSessionDurationMs:] */

void FUN_106db16a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be583f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__logSearchrankingAction_resultId_112573a98,param_3,param_5,param_4,
               param_6,param_8,param_7);
    return;
  }
  return;
}



/* Entry: 106db16c4; end: 106db17eb; -[SCMemoriesSearchLogger logSelectedSearchResultSnapWithSearchSessionId:resultId:keyboardLocale:numResults:numKeystrokes:selectedCategory:selectedMediaType:searchSessionDurationMs:] */

void FUN_106db16c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  if ((param_3 != 0) && (param_5 != 0)) {
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    FUN_106db17ec(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108dfc978(param_9,0);
    func_0x000108dfc950();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be55dc0(param_1);
    _objc_release(param_5);
    _objc_release(param_9);
    _objc_release(param_8);
    func_0x00010be583e0(param_1);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 106db17ec; end: 106db1813;  */

undefined ** FUN_106db17ec(long param_1)

{
  if (param_1 - 1U < 6) {
    return (undefined **)(&PTR_PTR_11097b510)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110e2a6f8;
}



/* Entry: 106db1814; end: 106db183b; -[SCMemoriesSearchLogger logSelectedSearchResultEntryWithSearchSessionId:resultId:keyboardLocale:numResults:numKeystrokes:selectedCategory:searchSessionDurationMs:] */

void FUN_106db1814(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  if ((param_3 != 0) && (param_5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010be583f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__logSearchrankingAction_resultId_112573a98,0x8e,param_4,param_3,param_7
               ,param_9);
    return;
  }
  return;
}



/* Entry: 106db183c; end: 106db18ef; -[SCMemoriesSearchLogger logSelectedResultQueryWithSearchSessionId:keyboardLocale:numResults:numKeystrokes:selectedCategory:] */

void FUN_106db183c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    FUN_106db17ec(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be55dc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
    _objc_release(param_4);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_7);
    return;
  }
  return;
}



/* Entry: 106db18f0; end: 106db19d7; -[SCMemoriesSearchLogger logSelectedResultQueryWithSearchSessionId:keyboardLocale:numResults:numKeystrokes:selectedCategory:selectedMediaType:] */

void FUN_106db18f0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    FUN_106db17ec(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108dfc978(param_8,0);
    func_0x000108dfc950();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be55dc0(param_1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_7);
    return;
  }
  return;
}



/* Entry: 106db19d8; end: 106db1a83; -[SCMemoriesSearchLogger logUnselectedQuery:searchSessionId:keyboardLocale:numResults:numKeystrokes:] */

void FUN_106db19d8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010be55dc0(param_1,param_2,param_4,param_5,param_6,param_7,0,0);
    func_0x00010be58400(param_1,param_2,param_3,param_4);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 106db1a84; end: 106db1bbb; -[SCMemoriesSearchLogger logEmbeddingSearchQueryWithSearchSessionId:keyboardLocale:queryTokens:numResults:numKeystrokes:memSession:] */

void FUN_106db1a84(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  if (((param_3 != 0) && (param_4 != 0)) && (lVar1 = param_5, func_0x00010bf529e0(), lVar1 != 0)) {
    puVar2 = PTR_PTR_1126d28e8;
    _objc_alloc_init(PTR_PTR_1126d28e8);
    func_0x00010c1f8a40();
    func_0x00010c206c40(puVar2,param_2,&PTR____CFConstantStringClassReference_110e86798);
    func_0x00010c1b6e60(puVar2,param_2,param_4);
    func_0x00010c1cf360(puVar2,param_2,param_6);
    func_0x00010c1cedc0(puVar2,param_2,param_7);
    func_0x00010c1c58c0(puVar2,param_2,param_3);
    func_0x00010c1c58e0(puVar2,param_2,param_8);
    func_0x00010c1f8be0(puVar2,param_2,param_5);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106db1bbc; end: 106db1c9f; -[SCMemoriesSearchLogger logMemoriesSearchActionWithType:memSearchSessionId:memSession:sessionDurationMs:] */

void FUN_106db1bbc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126d28f0;
  if (param_4 != 0) {
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_alloc_init(puVar1);
    func_0x00010c161fe0();
    func_0x00010c1c58c0(puVar1,param_2,param_4);
    _objc_release(param_4);
    func_0x00010c1c58e0(puVar1,param_2,param_5);
    _objc_release(param_5);
    if (param_6 != 0) {
      lVar2 = param_6;
      func_0x00010c0b4ca0(param_6);
      func_0x00010c1fd980(puVar1,param_2,lVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 106db1ca0; end: 106db1dcf; -[SCMemoriesSearchLogger _logMemoriesSearchQuery:keyboardLocale:numResults:numKeystrokes:selectedCategoryString:selectedTypeString:] */

void FUN_106db1ca0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d28e8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1f8a40();
  _objc_release(param_3);
  func_0x00010c206c40(puVar1,param_2,&PTR____CFConstantStringClassReference_110e86798);
  func_0x00010c1b6e60(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1cf360(puVar1,param_2,param_5);
  func_0x00010c1cedc0(puVar1,param_2,param_6);
  func_0x00010c1faf60(puVar1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c1fb700(puVar1,param_2,param_8);
  _objc_release(param_8);
  if (param_7 != 0 || param_8 != 0) {
    func_0x00010c1fadc0(puVar1,param_2,1);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106db1dd0; end: 106db1ecb; -[SCMemoriesSearchLogger _logSearchrankingQuery:searchSessionId:] */

void FUN_106db1dd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f440();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR_PTR_1126beba8;
    _objc_alloc_init(PTR_PTR_1126beba8);
    func_0x00010c1f8780();
    func_0x00010c1f8a40(puVar3,param_2,param_4);
    func_0x00010c1f86c0(puVar3,param_2,4);
    func_0x00010c1f87a0(puVar3,param_2,1);
    func_0x00010c206c40(puVar3,param_2,9);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106db1ecc; end: 106db2023; -[SCMemoriesSearchLogger _logSearchrankingAction:resultId:searchSessionId:searchQueryId:searchSessionDurationMs:selectedCategory:] */

void FUN_106db1ecc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_5);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e56f18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bebb8;
  _objc_alloc_init(PTR_PTR_1126bebb8);
  func_0x00010c206c40();
  func_0x00010c1f86c0(puVar2,param_2,4);
  func_0x00010c1f8a40(puVar2,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1f8700(puVar2,param_2,param_6);
  func_0x00010c161620(puVar2,param_2,param_3);
  func_0x00010c1f8800(puVar2,param_2,puVar1);
  func_0x00010c1f8880(puVar2,param_2,0x4c);
  func_0x00010c1fd980(puVar2,param_2,param_7);
  FUN_106db17ec(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f88c0(puVar2,param_2,param_8);
  _objc_release(param_8);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106db2024; end: 106db2053; -[SCMemoriesSearchLogger .cxx_destruct] */

void FUN_106db2024(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106db2054; end: 106db20c7; -[SCGrapheneMemSemSearchMetric2 init] */

undefined1 * FUN_106db2054(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6e60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106db20c8; end: 106db223b;  */

char * FUN_106db20c8(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char **ppcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  long lVar14;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_3f0;
  undefined *puStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  char *pcStack_378;
  undefined8 *puStack_370;
  long *plStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  char acStack_340 [24];
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  char *pcStack_2f8;
  undefined8 *puStack_2f0;
  char *pcStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2b8 [24];
  char *pcStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11097b568,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar6 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar6 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_106db223c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar10 = pcVar6;
  pcVar9 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  pcVar4 = (char *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar13 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar7 = "";
    unaff_x23 = acStack_118;
    pcVar10 = acStack_118;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11097b5b8,pcVar10,param_4);
    pcStack_100 = unaff_x23;
    func_0x00010007e5dc(&pcStack_100);
    lVar14 = 0;
    pcVar4 = (char *)auStack_f8;
    pcVar9 = param_4;
    do {
      if ((&cStack_c9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar12 = acStack_1a0;
  pcStack_128 = FUN_106db246c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar7;
  pcVar11 = pcVar10;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar4;
  pcStack_148 = pcVar2;
  pcStack_140 = pcVar6;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(pcVar7);
  plVar13 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x23 = (char *)auStack_180;
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
    pcVar5 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11097b608,acStack_1a0,pcVar10);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar11 = pcVar12;
    pcVar9 = pcVar10;
    pcVar4 = acStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar11 = pcVar12;
      pcVar9 = pcVar10;
      pcVar4 = acStack_1a0;
    }
  }
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  _objc_release(pcVar7);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  pcVar3 = acStack_220;
  pcStack_1a8 = FUN_106db25e0;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar5;
  pcVar10 = pcVar11;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar4;
  plStack_1c8 = plVar13;
  pcStack_1c0 = pcVar1;
  pcStack_1b8 = pcVar7;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(pcVar5);
  plVar13 = (long *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar13 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    unaff_x23 = (char *)auStack_200;
    func_0x00010002b838(auStack_200,pcVar1);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1e8,1);
    pcVar6 = "\x01";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11097b658,acStack_220,pcVar11);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    pcVar10 = pcVar3;
    pcVar9 = pcVar11;
    pcVar4 = acStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar10 = pcVar3;
      pcVar9 = pcVar11;
      pcVar4 = acStack_220;
    }
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  pcStack_228 = FUN_106db2754;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar6;
  pcVar7 = pcVar10;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar4;
  plStack_248 = plVar13;
  pcStack_240 = pcVar1;
  pcStack_238 = pcVar5;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar10);
  pcVar1 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x24 = auStack_298;
    func_0x00010002b838(auStack_298,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_280,pcVar1);
    acStack_2b8[0] = '\0';
    acStack_2b8[1] = '\0';
    acStack_2b8[2] = '\0';
    acStack_2b8[3] = '\0';
    acStack_2b8[4] = '\0';
    acStack_2b8[5] = '\0';
    acStack_2b8[6] = '\0';
    acStack_2b8[7] = '\0';
    acStack_2b8[8] = '\0';
    acStack_2b8[9] = '\0';
    acStack_2b8[10] = '\0';
    acStack_2b8[0xb] = '\0';
    acStack_2b8[0xc] = '\0';
    acStack_2b8[0xd] = '\0';
    acStack_2b8[0xe] = '\0';
    acStack_2b8[0xf] = '\0';
    acStack_2b8[0x10] = '\0';
    acStack_2b8[0x11] = '\0';
    acStack_2b8[0x12] = '\0';
    acStack_2b8[0x13] = '\0';
    acStack_2b8[0x14] = '\0';
    acStack_2b8[0x15] = '\0';
    acStack_2b8[0x16] = '\0';
    acStack_2b8[0x17] = '\0';
    func_0x00010007e1e8(acStack_2b8,auStack_298,&lStack_268,2);
    pcVar2 = "";
    unaff_x23 = acStack_2b8;
    pcVar7 = acStack_2b8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11097b6a8,pcVar7,pcVar9);
    pcStack_2a0 = unaff_x23;
    func_0x00010007e5dc(&pcStack_2a0);
    lVar14 = 0;
    pcVar1 = (char *)auStack_298;
    do {
      if ((&cStack_269)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar4 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_281 < '\0') {
    __ZdlPv(auStack_298[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar6);
  pcVar5 = pcVar4;
  __Unwind_Resume();
  pcVar11 = acStack_340;
  pcStack_2c8 = FUN_106db2984;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar2;
  pcVar3 = pcVar7;
  puStack_300 = unaff_x24;
  pcStack_2f8 = unaff_x23;
  puStack_2f0 = (undefined8 *)pcVar1;
  pcStack_2e8 = pcVar4;
  pcStack_2e0 = pcVar10;
  pcStack_2d8 = pcVar6;
  pppuStack_2d0 = &pppuStack_230;
  _objc_retain(pcVar2);
  plVar13 = (long *)0x0;
  if (pcVar5 != (char *)0x0) {
    plVar13 = *(long **)(pcVar5 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x23 = (char *)auStack_320;
    func_0x00010002b838(auStack_320,pcVar1);
    acStack_340[0] = '\0';
    acStack_340[1] = '\0';
    acStack_340[2] = '\0';
    acStack_340[3] = '\0';
    acStack_340[4] = '\0';
    acStack_340[5] = '\0';
    acStack_340[6] = '\0';
    acStack_340[7] = '\0';
    acStack_340[8] = '\0';
    acStack_340[9] = '\0';
    acStack_340[10] = '\0';
    acStack_340[0xb] = '\0';
    acStack_340[0xc] = '\0';
    acStack_340[0xd] = '\0';
    acStack_340[0xe] = '\0';
    acStack_340[0xf] = '\0';
    acStack_340[0x10] = '\0';
    acStack_340[0x11] = '\0';
    acStack_340[0x12] = '\0';
    acStack_340[0x13] = '\0';
    acStack_340[0x14] = '\0';
    acStack_340[0x15] = '\0';
    acStack_340[0x16] = '\0';
    acStack_340[0x17] = '\0';
    func_0x00010007e1e8(acStack_340,auStack_320,&lStack_308,1);
    pcVar9 = "\x01";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11097b6f8,acStack_340,pcVar7);
    puStack_328 = acStack_340;
    func_0x00010007e5dc(&puStack_328);
    pcVar3 = pcVar11;
    pcVar1 = acStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      pcVar3 = pcVar11;
      pcVar1 = acStack_340;
    }
  }
  pcVar6 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return pcVar6;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  pcVar7 = pcVar6;
  __Unwind_Resume();
  pcStack_348 = FUN_106db2af8;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_380 = unaff_x24;
  pcStack_378 = unaff_x23;
  puStack_370 = (undefined8 *)pcVar1;
  plStack_368 = plVar13;
  pcStack_360 = pcVar6;
  pcStack_358 = pcVar2;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(pcVar9);
  if (pcVar7 != (char *)0x0) {
    plVar13 = *(long **)(pcVar7 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_3a0,pcVar1);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x00010007e1e8(&uStack_3c0,auStack_3a0,&lStack_388,1);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11097b748,&uStack_3c0,pcVar3);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
    }
  }
  pcVar1 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  _objc_release(pcVar9);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  ppcVar8 = &pcStack_3f0;
  pcStack_3c8 = FUN_106db2c6c;
  puStack_3e8 = PTR_PTR_1126f6e68;
  pcStack_3f0 = pcVar6;
  pcStack_3e0 = pcVar1;
  pcStack_3d8 = pcVar9;
  pppuStack_3d0 = &pppuStack_350;
  _objc_msgSendSuper2(&pcStack_3f0,PTR_s_init_1125d9248);
  if (ppcVar8 != (char **)0x0) {
    pcVar1 = (char *)ppcVar8;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar8 + 8) = pcVar1;
  }
  return (char *)ppcVar8;
}



/* Entry: 106db223c; end: 106db246b;  */

char * FUN_106db223c(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char **ppcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  long *plVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_370;
  undefined *puStack_368;
  char *pcStack_360;
  char *pcStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  char *pcStack_2f8;
  undefined8 *puStack_2f0;
  long *plStack_2e8;
  char *pcStack_2e0;
  char *pcStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  char acStack_2c0 [24];
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  char *pcStack_278;
  undefined8 *puStack_270;
  char *pcStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  char acStack_238 [24];
  char *pcStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  pcVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  pcVar4 = (char *)0x0;
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11097b5b8,pcVar5,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar12 = 0;
    pcVar4 = (char *)auStack_78;
    pcVar9 = param_4;
    do {
      if ((&cStack_49)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar10 = acStack_120;
  pcStack_a8 = FUN_106db246c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar6 = pcVar5;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = (undefined8 *)pcVar4;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  plVar13 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_100;
    func_0x00010002b838(auStack_100,pcVar4);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    pcVar7 = "";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11097b608,acStack_120,pcVar5);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar6 = pcVar10;
    pcVar9 = pcVar5;
    pcVar4 = acStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar6 = pcVar10;
      pcVar9 = pcVar5;
      pcVar4 = acStack_120;
    }
  }
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar5;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar5;
  __Unwind_Resume();
  pcVar11 = acStack_1a0;
  pcStack_128 = FUN_106db25e0;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar7;
  pcVar10 = pcVar6;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar4;
  plStack_148 = plVar13;
  pcStack_140 = pcVar5;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar7);
  plVar13 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar13 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    unaff_x23 = (char *)auStack_180;
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
    pcVar2 = "\x01";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11097b658,acStack_1a0,pcVar6);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar10 = pcVar11;
    pcVar9 = pcVar6;
    pcVar4 = acStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar10 = pcVar11;
      pcVar9 = pcVar6;
      pcVar4 = acStack_1a0;
    }
  }
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  _objc_release(pcVar7);
  pcVar6 = pcVar1;
  __Unwind_Resume();
  pcStack_1a8 = FUN_106db2754;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  pcVar3 = pcVar10;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar4;
  plStack_1c8 = plVar13;
  pcStack_1c0 = pcVar1;
  pcStack_1b8 = pcVar7;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(pcVar2);
  _objc_retain(pcVar10);
  pcVar1 = (char *)0x0;
  if (pcVar6 != (char *)0x0) {
    plVar13 = *(long **)(pcVar6 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    unaff_x24 = auStack_218;
    func_0x00010002b838(auStack_218,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_200,pcVar1);
    acStack_238[0] = '\0';
    acStack_238[1] = '\0';
    acStack_238[2] = '\0';
    acStack_238[3] = '\0';
    acStack_238[4] = '\0';
    acStack_238[5] = '\0';
    acStack_238[6] = '\0';
    acStack_238[7] = '\0';
    acStack_238[8] = '\0';
    acStack_238[9] = '\0';
    acStack_238[10] = '\0';
    acStack_238[0xb] = '\0';
    acStack_238[0xc] = '\0';
    acStack_238[0xd] = '\0';
    acStack_238[0xe] = '\0';
    acStack_238[0xf] = '\0';
    acStack_238[0x10] = '\0';
    acStack_238[0x11] = '\0';
    acStack_238[0x12] = '\0';
    acStack_238[0x13] = '\0';
    acStack_238[0x14] = '\0';
    acStack_238[0x15] = '\0';
    acStack_238[0x16] = '\0';
    acStack_238[0x17] = '\0';
    func_0x00010007e1e8(acStack_238,auStack_218,&lStack_1e8,2);
    pcVar5 = "";
    unaff_x23 = acStack_238;
    pcVar3 = acStack_238;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11097b6a8,pcVar3,pcVar9);
    pcStack_220 = unaff_x23;
    func_0x00010007e5dc(&pcStack_220);
    lVar12 = 0;
    pcVar1 = (char *)auStack_218;
    do {
      if ((&cStack_1e9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar10);
  pcVar4 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar2);
  pcVar7 = pcVar4;
  __Unwind_Resume();
  pcVar11 = acStack_2c0;
  pcStack_248 = FUN_106db2984;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar5;
  pcVar6 = pcVar3;
  puStack_280 = unaff_x24;
  pcStack_278 = unaff_x23;
  puStack_270 = (undefined8 *)pcVar1;
  pcStack_268 = pcVar4;
  pcStack_260 = pcVar10;
  pcStack_258 = pcVar2;
  pppuStack_250 = &pppuStack_1b0;
  _objc_retain(pcVar5);
  plVar13 = (long *)0x0;
  if (pcVar7 != (char *)0x0) {
    plVar13 = *(long **)(pcVar7 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    unaff_x23 = (char *)auStack_2a0;
    func_0x00010002b838(auStack_2a0,pcVar1);
    acStack_2c0[0] = '\0';
    acStack_2c0[1] = '\0';
    acStack_2c0[2] = '\0';
    acStack_2c0[3] = '\0';
    acStack_2c0[4] = '\0';
    acStack_2c0[5] = '\0';
    acStack_2c0[6] = '\0';
    acStack_2c0[7] = '\0';
    acStack_2c0[8] = '\0';
    acStack_2c0[9] = '\0';
    acStack_2c0[10] = '\0';
    acStack_2c0[0xb] = '\0';
    acStack_2c0[0xc] = '\0';
    acStack_2c0[0xd] = '\0';
    acStack_2c0[0xe] = '\0';
    acStack_2c0[0xf] = '\0';
    acStack_2c0[0x10] = '\0';
    acStack_2c0[0x11] = '\0';
    acStack_2c0[0x12] = '\0';
    acStack_2c0[0x13] = '\0';
    acStack_2c0[0x14] = '\0';
    acStack_2c0[0x15] = '\0';
    acStack_2c0[0x16] = '\0';
    acStack_2c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_2c0,auStack_2a0,&lStack_288,1);
    pcVar9 = "\x01";
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11097b6f8,acStack_2c0,pcVar3);
    puStack_2a8 = acStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    pcVar6 = pcVar11;
    pcVar1 = acStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      pcVar6 = pcVar11;
      pcVar1 = acStack_2c0;
    }
  }
  pcVar4 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  pcVar2 = pcVar4;
  __Unwind_Resume();
  pcStack_2c8 = FUN_106db2af8;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_300 = unaff_x24;
  pcStack_2f8 = unaff_x23;
  puStack_2f0 = (undefined8 *)pcVar1;
  plStack_2e8 = plVar13;
  pcStack_2e0 = pcVar4;
  pcStack_2d8 = pcVar5;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(pcVar9);
  if (pcVar2 != (char *)0x0) {
    plVar13 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    func_0x00010002b838(auStack_320,pcVar1);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_308,1);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_11097b748,&uStack_340,pcVar6);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x00010007e5dc(&puStack_328);
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
    }
  }
  pcVar1 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar9);
  _objc_release(pcVar9);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  ppcVar8 = &pcStack_370;
  pcStack_348 = FUN_106db2c6c;
  puStack_368 = PTR_PTR_1126f6e68;
  pcStack_370 = pcVar5;
  pcStack_360 = pcVar1;
  pcStack_358 = pcVar9;
  pppuStack_350 = &pppuStack_2d0;
  _objc_msgSendSuper2(&pcStack_370,PTR_s_init_1125d9248);
  if (ppcVar8 != (char **)0x0) {
    pcVar1 = (char *)ppcVar8;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar8 + 8) = pcVar1;
  }
  return (char *)ppcVar8;
}



/* Entry: 106db246c; end: 106db25df;  */

char * FUN_106db246c(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long *plVar12;
  long lVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_2d0;
  undefined *puStack_2c8;
  char *pcStack_2c0;
  char *pcStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  char *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  char *pcStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_198 [24];
  char *pcStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11097b608,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar9 = acStack_100;
  pcStack_88 = FUN_106db25e0;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_e0;
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar6 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11097b658,acStack_100,pcVar3);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar8 = pcVar9;
    param_4 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar8 = pcVar9;
      param_4 = pcVar3;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_106db2754;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  pcVar2 = pcVar8;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar6);
  _objc_retain(pcVar8);
  pcVar9 = (char *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x24 = auStack_178;
    func_0x00010002b838(auStack_178,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_198[0] = '\0';
    acStack_198[1] = '\0';
    acStack_198[2] = '\0';
    acStack_198[3] = '\0';
    acStack_198[4] = '\0';
    acStack_198[5] = '\0';
    acStack_198[6] = '\0';
    acStack_198[7] = '\0';
    acStack_198[8] = '\0';
    acStack_198[9] = '\0';
    acStack_198[10] = '\0';
    acStack_198[0xb] = '\0';
    acStack_198[0xc] = '\0';
    acStack_198[0xd] = '\0';
    acStack_198[0xe] = '\0';
    acStack_198[0xf] = '\0';
    acStack_198[0x10] = '\0';
    acStack_198[0x11] = '\0';
    acStack_198[0x12] = '\0';
    acStack_198[0x13] = '\0';
    acStack_198[0x14] = '\0';
    acStack_198[0x15] = '\0';
    acStack_198[0x16] = '\0';
    acStack_198[0x17] = '\0';
    func_0x00010007e1e8(acStack_198,auStack_178,&lStack_148,2);
    pcVar1 = "";
    unaff_x23 = acStack_198;
    pcVar2 = acStack_198;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11097b6a8,pcVar2,param_4);
    pcStack_180 = unaff_x23;
    func_0x00010007e5dc(&pcStack_180);
    lVar13 = 0;
    pcVar9 = (char *)auStack_178;
    do {
      if ((&cStack_149)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar3 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(pcVar8);
  _objc_release(pcVar6);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcVar11 = acStack_220;
  pcStack_1a8 = FUN_106db2984;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar10 = pcVar2;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar9;
  pcStack_1c8 = pcVar3;
  pcStack_1c0 = pcVar8;
  pcStack_1b8 = pcVar6;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(pcVar1);
  plVar12 = (long *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar12 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_200;
    func_0x00010002b838(auStack_200,pcVar3);
    acStack_220[0] = '\0';
    acStack_220[1] = '\0';
    acStack_220[2] = '\0';
    acStack_220[3] = '\0';
    acStack_220[4] = '\0';
    acStack_220[5] = '\0';
    acStack_220[6] = '\0';
    acStack_220[7] = '\0';
    acStack_220[8] = '\0';
    acStack_220[9] = '\0';
    acStack_220[10] = '\0';
    acStack_220[0xb] = '\0';
    acStack_220[0xc] = '\0';
    acStack_220[0xd] = '\0';
    acStack_220[0xe] = '\0';
    acStack_220[0xf] = '\0';
    acStack_220[0x10] = '\0';
    acStack_220[0x11] = '\0';
    acStack_220[0x12] = '\0';
    acStack_220[0x13] = '\0';
    acStack_220[0x14] = '\0';
    acStack_220[0x15] = '\0';
    acStack_220[0x16] = '\0';
    acStack_220[0x17] = '\0';
    func_0x00010007e1e8(acStack_220,auStack_200,&lStack_1e8,1);
    pcVar7 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11097b6f8,acStack_220,pcVar2);
    puStack_208 = acStack_220;
    func_0x00010007e5dc(&puStack_208);
    pcVar10 = pcVar11;
    pcVar9 = acStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      pcVar10 = pcVar11;
      pcVar9 = acStack_220;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar2 = pcVar3;
  __Unwind_Resume();
  pcStack_228 = FUN_106db2af8;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_260 = unaff_x24;
  pcStack_258 = unaff_x23;
  puStack_250 = (undefined8 *)pcVar9;
  plStack_248 = plVar12;
  pcStack_240 = pcVar3;
  pcStack_238 = pcVar1;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(pcVar7);
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_280,pcVar1);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x00010007e1e8(&uStack_2a0,auStack_280,&lStack_268,1);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11097b748,&uStack_2a0,pcVar10);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
    }
  }
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  _objc_release(pcVar7);
  pcVar3 = pcVar1;
  __Unwind_Resume();
  ppcVar5 = &pcStack_2d0;
  pcStack_2a8 = FUN_106db2c6c;
  puStack_2c8 = PTR_PTR_1126f6e68;
  pcStack_2d0 = pcVar3;
  pcStack_2c0 = pcVar1;
  pcStack_2b8 = pcVar7;
  pppuStack_2b0 = &pppuStack_230;
  _objc_msgSendSuper2(&pcStack_2d0,PTR_s_init_1125d9248);
  if (ppcVar5 != (char **)0x0) {
    pcVar1 = (char *)ppcVar5;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar5 + 8) = pcVar1;
  }
  return (char *)ppcVar5;
}



/* Entry: 106db25e0; end: 106db2753;  */

char * FUN_106db25e0(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_250;
  undefined *puStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  char *pcStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = (char *)auStack_60;
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11097b658,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar4 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar4 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_106db2754;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  pcVar13 = (char *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar6 = "";
    unaff_x23 = acStack_118;
    pcVar8 = acStack_118;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11097b6a8,pcVar8,param_4);
    pcStack_100 = unaff_x23;
    func_0x00010007e5dc(&pcStack_100);
    lVar12 = 0;
    pcVar13 = (char *)auStack_f8;
    do {
      if ((&cStack_c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar10 = acStack_1a0;
  pcStack_128 = FUN_106db2984;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar6;
  pcVar9 = pcVar8;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar13;
  pcStack_148 = pcVar2;
  pcStack_140 = pcVar4;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(pcVar6);
  plVar11 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x23 = (char *)auStack_180;
    func_0x00010002b838(auStack_180,pcVar1);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
    pcVar7 = "\x01";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11097b6f8,acStack_1a0,pcVar8);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar9 = pcVar10;
    pcVar13 = acStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar9 = pcVar10;
      pcVar13 = acStack_1a0;
    }
  }
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  _objc_release(pcVar6);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcStack_1a8 = FUN_106db2af8;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1e0 = unaff_x24;
  pcStack_1d8 = unaff_x23;
  puStack_1d0 = (undefined8 *)pcVar13;
  plStack_1c8 = plVar11;
  pcStack_1c0 = pcVar1;
  pcStack_1b8 = pcVar6;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(pcVar7);
  if (pcVar4 != (char *)0x0) {
    plVar11 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_200,pcVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1e8,1);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11097b748,&uStack_220,pcVar9);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
    }
  }
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  _objc_release(pcVar7);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  ppcVar5 = &pcStack_250;
  pcStack_228 = FUN_106db2c6c;
  puStack_248 = PTR_PTR_1126f6e68;
  pcStack_250 = pcVar4;
  pcStack_240 = pcVar1;
  pcStack_238 = pcVar7;
  pppuStack_230 = &pppuStack_1b0;
  _objc_msgSendSuper2(&pcStack_250,PTR_s_init_1125d9248);
  if (ppcVar5 != (char **)0x0) {
    pcVar1 = (char *)ppcVar5;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar5 + 8) = pcVar1;
  }
  return (char *)ppcVar5;
}



/* Entry: 106db2754; end: 106db2983;  */

char * FUN_106db2754(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  char *unaff_x23;
  undefined8 *unaff_x24;
  char *pcStack_1d0;
  undefined *puStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  pcVar4 = (char *)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11097b6a8,pcVar5,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar10 = 0;
    pcVar4 = (char *)auStack_78;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar9 = acStack_120;
  pcStack_a8 = FUN_106db2984;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar8 = pcVar5;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = (undefined8 *)pcVar4;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  plVar11 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar11 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_100;
    func_0x00010002b838(auStack_100,pcVar4);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    pcVar7 = "\x01";
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11097b6f8,acStack_120,pcVar5);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar8 = pcVar9;
    pcVar4 = acStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar8 = pcVar9;
      pcVar4 = acStack_120;
    }
  }
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar5;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar2 = pcVar5;
  __Unwind_Resume();
  pcStack_128 = FUN_106db2af8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar4;
  plStack_148 = plVar11;
  pcStack_140 = pcVar5;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar7);
  if (pcVar2 != (char *)0x0) {
    plVar11 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_180,pcVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11097b748,&uStack_1a0,pcVar8);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
    }
  }
  pcVar1 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  _objc_release(pcVar7);
  pcVar5 = pcVar1;
  __Unwind_Resume();
  ppcVar6 = &pcStack_1d0;
  pcStack_1a8 = FUN_106db2c6c;
  puStack_1c8 = PTR_PTR_1126f6e68;
  pcStack_1d0 = pcVar5;
  pcStack_1c0 = pcVar1;
  pcStack_1b8 = pcVar7;
  pppuStack_1b0 = &ppuStack_130;
  _objc_msgSendSuper2(&pcStack_1d0,PTR_s_init_1125d9248);
  if (ppcVar6 != (char **)0x0) {
    pcVar1 = (char *)ppcVar6;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar6 + 8) = pcVar1;
  }
  return (char *)ppcVar6;
}



/* Entry: 106db2984; end: 106db2af7;  */

char * FUN_106db2984(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcStack_130;
  undefined *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11097b6f8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_106db2af8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11097b748,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_130;
  pcStack_108 = FUN_106db2c6c;
  puStack_128 = PTR_PTR_1126f6e68;
  pcStack_130 = pcVar3;
  pcStack_120 = pcVar2;
  pcStack_118 = pcVar1;
  ppuStack_110 = &puStack_90;
  _objc_msgSendSuper2(&pcStack_130,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 106db2af8; end: 106db2c6b;  */

char * FUN_106db2af8(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  long *plVar4;
  char *pcStack_b0;
  undefined *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11097b748,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_b0;
  pcStack_88 = FUN_106db2c6c;
  puStack_a8 = PTR_PTR_1126f6e68;
  pcStack_b0 = pcVar2;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 106db2c6c; end: 106db2cdf; -[SCGrapheneMemFacetIndexMetric2 init] */

undefined1 * FUN_106db2c6c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6e68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106db2ce0; end: 106db2e53;  */

char * FUN_106db2ce0(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  char *pcStack_2b0;
  undefined *puStack_2a8;
  char *pcStack_2a0;
  char *pcStack_298;
  undefined8 **ppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 **ppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11097b828,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_106db2e54;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puVar7 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar4 = "\x02";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11097b878,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  pcStack_108 = FUN_106db2fc8;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar4;
  puVar5 = puVar7;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_160,pcVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11097b8c8,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  __Unwind_Resume();
  puVar6 = &uStack_200;
  pcStack_188 = FUN_106db313c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puVar7 = puVar5;
  ppuStack_190 = &ppuStack_110;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_1e0,pcVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    pcVar4 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11097b918,&uStack_200,puVar5);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_208 = FUN_106db32b0;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_210 = &ppuStack_190;
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_260,pcVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11097b968,&uStack_280,puVar7);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x00010007e5dc(&puStack_268);
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
    }
  }
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_2b0;
  pcStack_288 = FUN_106db3424;
  puStack_2a8 = PTR_PTR_1126f6e70;
  pcStack_2b0 = pcVar2;
  pcStack_2a0 = pcVar1;
  pcStack_298 = pcVar4;
  ppuStack_290 = &ppuStack_210;
  _objc_msgSendSuper2(&pcStack_2b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 106db2e54; end: 106db2fc7;  */

char * FUN_106db2e54(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  char *pcStack_230;
  undefined *puStack_228;
  char *pcStack_220;
  char *pcStack_218;
  undefined8 **ppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x02";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11097b878,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_106db2fc8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar1;
  puVar7 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar3 = "\x01";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11097b8c8,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  pcStack_108 = FUN_106db313c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar3;
  puVar5 = puVar7;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar3);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_160,pcVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11097b918,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  __Unwind_Resume();
  pcStack_188 = FUN_106db32b0;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_190 = &ppuStack_110;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_1e0,pcVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11097b968,&uStack_200,puVar5);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_230;
  pcStack_208 = FUN_106db3424;
  puStack_228 = PTR_PTR_1126f6e70;
  pcStack_230 = pcVar3;
  pcStack_220 = pcVar2;
  pcStack_218 = pcVar1;
  ppuStack_210 = &ppuStack_190;
  _objc_msgSendSuper2(&pcStack_230,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 106db2fc8; end: 106db313b;  */

char * FUN_106db2fc8(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  char *pcStack_1b0;
  undefined *puStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined8 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11097b8c8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar6 = &uStack_100;
  pcStack_88 = FUN_106db313c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puVar7 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar4 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11097b918,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_106db32b0;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_160,pcVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_148,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11097b968,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  pcVar1 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_1b0;
  pcStack_188 = FUN_106db3424;
  puStack_1a8 = PTR_PTR_1126f6e70;
  pcStack_1b0 = pcVar2;
  pcStack_1a0 = pcVar1;
  pcStack_198 = pcVar4;
  ppuStack_190 = &ppuStack_110;
  _objc_msgSendSuper2(&pcStack_1b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 106db313c; end: 106db32af;  */

char * FUN_106db313c(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcStack_130;
  undefined *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11097b918,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_106db32b0;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11097b968,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  ppcVar4 = &pcStack_130;
  pcStack_108 = FUN_106db3424;
  puStack_128 = PTR_PTR_1126f6e70;
  pcStack_130 = pcVar3;
  pcStack_120 = pcVar2;
  pcStack_118 = pcVar1;
  ppuStack_110 = &puStack_90;
  _objc_msgSendSuper2(&pcStack_130,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 106db32b0; end: 106db3423;  */

char * FUN_106db32b0(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  long *plVar4;
  char *pcStack_b0;
  undefined *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11097b968,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_b0;
  pcStack_88 = FUN_106db3424;
  puStack_a8 = PTR_PTR_1126f6e70;
  pcStack_b0 = pcVar2;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 106db3424; end: 106db3497; -[SCGrapheneMemoriesSemanticSearchMetric2 init] */

undefined1 * FUN_106db3424(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f6e70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106db3498; end: 106db36c7;  */

char * FUN_106db3498(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  char *pcStack_d0;
  undefined *puStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = acStack_98;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_11097ba08,pcVar1,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar5 = 0;
    do {
      if ((&cStack_49)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppcVar3 = &pcStack_d0;
  pcStack_a8 = FUN_106db36c8;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  puStack_c8 = PTR_PTR_1126f6e78;
  pcStack_d0 = pcVar2;
  _objc_msgSendSuper2(&pcStack_d0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    _objc_retain(pcVar1);
    uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
    *(char **)((long)ppcVar3 + 8) = pcVar1;
    _objc_release(uVar4);
  }
  _objc_release(pcVar1);
  return (char *)ppcVar3;
}



/* Entry: 106db36c8; end: 106db373b; -[SCMemoriesInlineSearchDataServices initWithInlineSearchDataSource:] */

undefined1 * FUN_106db36c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6e78;
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



/* Entry: 106db373c; end: 106db3743; -[SCMemoriesInlineSearchDataServices inlineSearchDataSource] */

undefined8 FUN_106db373c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106db3744; end: 106db374f; -[SCMemoriesInlineSearchDataServices .cxx_destruct] */

void FUN_106db3744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106db3750; end: 106db3927; -[SCMemoriesRemixController initWithRemixScopeExposer:remixScopeServices:memoriesSnapTranscoder:videoImportProcessing:galleryExportLogger:contextActionSource:musicMediaLoader:userTrackedLogger:grapheneRegistry:] */

undefined1 *
FUN_106db3750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126f6e80;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x50) = param_7;
    *(undefined8 *)((long)puVar1 + 0x60) = param_8;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release();
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106db3928; end: 106db3aef; -[SCMemoriesRemixController presentRemixWithGallerySnap:galleryEntryType:presentingViewController:memSessionId:contextSessionId:currentMemoriesTab:collectionCategory:completion:] */

void FUN_106db3928(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  *(undefined1 *)(param_1 + 0x40) = 0;
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_10);
  uStack_70 = param_4;
  _objc_retain(param_6);
  uStack_78 = param_8;
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_7);
  func_0x00010be0d780(param_1);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_10);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106db3af0; end: 106db3d23;  */

void FUN_106db3af0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1 + 0x50;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 == 0) {
LAB_106db3c34:
    lVar4 = *(long *)(param_1 + 0x48);
    pcVar6 = *(code **)(lVar4 + 0x10);
    uVar5 = 0;
  }
  else {
    cVar1 = *(char *)(lVar2 + 0x40);
    if (param_4 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      func_0x00010bf3ec40(param_4);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    func_0x00010be52e20(lVar2);
    _objc_release(puVar9);
    if (cVar1 == '\0') {
      if ((param_4 == 0) && (param_2 != 0)) {
        uVar8 = *(undefined8 *)(lVar2 + 0x18);
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c241220(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf23640(uVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        uVar5 = *(undefined8 *)(param_1 + 0x48);
        _objc_retainBlock();
        uVar7 = *(undefined8 *)(lVar2 + 0x48);
        *(undefined8 *)(lVar2 + 0x48) = uVar5;
        _objc_release(uVar7);
        func_0x00010be0d240(lVar2);
        _objc_release(uVar8);
        goto LAB_106db3c48;
      }
      goto LAB_106db3c34;
    }
    lVar4 = *(long *)(param_1 + 0x48);
    pcVar6 = *(code **)(lVar4 + 0x10);
    uVar5 = 1;
  }
  (*pcVar6)(lVar4,0,uVar5);
LAB_106db3c48:
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106db3d24; end: 106db3e73; -[SCMemoriesRemixController presentRemixWithCameraRollAsset:presentingViewController:contextSessionId:completion:] */

void FUN_106db3d24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  *(undefined1 *)(param_1 + 0x40) = 0;
  func_0x00010beaf320(param_1);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be0d740(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106db3e74; end: 106db3fb3;  */

void FUN_106db3e74(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
LAB_106db3ed4:
    lVar2 = *(long *)(param_1 + 0x30);
    pcVar5 = *(code **)(lVar2 + 0x10);
    uVar4 = 0;
  }
  else {
    if (*(char *)(lVar1 + 0x40) != '\x01') {
      if ((param_3 == 0) && (param_2 != 0)) {
        uVar4 = *(undefined8 *)(lVar1 + 0x18);
        lVar2 = lVar1;
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf23640(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        _objc_retainBlock();
        uVar6 = *(undefined8 *)(lVar1 + 0x48);
        *(undefined8 *)(lVar1 + 0x48) = uVar3;
        _objc_release(uVar6);
        func_0x00010be0d240(lVar1);
        func_0x00010c069d00(*(undefined8 *)(lVar1 + 0x28));
        _objc_release(uVar4);
        goto LAB_106db3ee8;
      }
      goto LAB_106db3ed4;
    }
    lVar2 = *(long *)(param_1 + 0x30);
    pcVar5 = *(code **)(lVar2 + 0x10);
    uVar4 = 1;
  }
  (*pcVar5)(lVar2,0,uVar4);
LAB_106db3ee8:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106db3fb4; end: 106db404f; -[SCMemoriesRemixController _exposeRemixScope:] */

void FUN_106db3fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106db4050; end: 106db414f; -[SCMemoriesRemixController _externalMediaItemFromCameraRollAsset:completion:] */

void FUN_106db4050(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106db4150; end: 106db434f;  */

void FUN_106db4150(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
LAB_106db41f8:
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c0c6c20();
    if (lVar2 < 2) {
      if (lVar2 == 0) goto LAB_106db41f8;
      if (lVar2 != 1) goto LAB_106db4264;
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar3);
      func_0x00010be372e0(lVar1);
    }
    else {
      if (lVar2 != 2) {
        if (lVar2 != 3) goto LAB_106db4264;
        goto LAB_106db41f8;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar3);
      func_0x00010bee9180(lVar1);
    }
    _objc_release(uVar3);
  }
LAB_106db4264:
  _objc_release(lVar1);
  return;
}



/* Entry: 106db4350; end: 106db436f;  */

void FUN_106db4350(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106db4368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20),0);
    return;
  }
  return;
}



/* Entry: 106db4370; end: 106db446b;  */

void FUN_106db4370(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c6978;
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29be60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106db446c;
  puStack_50 = &UNK_11084a9e8;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  puStack_48 = puVar2;
  uStack_40 = param_3;
  uStack_38 = uVar3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(puVar2);
  return;
}



/* Entry: 106db446c; end: 106db4487;  */

void FUN_106db446c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106db4480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))
              (lVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 106db4488; end: 106db458f; -[SCMemoriesRemixController _imageFromPhotoAsset:completion:] */

void FUN_106db4488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106db4590;
  puStack_50 = &UNK_110842e18;
  uStack_48 = param_1;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_68);
  puVar2 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x106db45a4;
  puStack_78 = &UNK_11097bad8;
  uStack_70 = param_4;
  _objc_retain(param_4);
  func_0x000107f6e46c(puVar2,param_3,0,1,0,&puStack_90);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(uStack_70);
  _objc_release(param_4);
  return;
}



/* Entry: 106db4590; end: 106db45b7;  */

void FUN_106db4590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3f800000,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),
             PTR_s_setProgress_animated__112656bd0,1);
  return;
}



/* Entry: 106db45b8; end: 106db47a7; -[SCMemoriesRemixController _videoURLFromPhotoAsset:completion:] */

void FUN_106db45b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf165a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d28f8;
  _objc_opt_new();
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bdc0da0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar5 = uVar4;
  func_0x00010bfbc3e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar2);
  _objc_retain(uVar1);
  _objc_retain(puVar3);
  _objc_retain(param_4);
  func_0x00010c297260(uVar5);
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106db47a8; end: 106db47ff;  */

void FUN_106db47a8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0ca20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106db4800; end: 106db49d7; -[SCMemoriesRemixController _exportedUrlForImportedCameraRollAVAsset:strategy:logger:importedContentId:completion:] */

void FUN_106db4800(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_80,*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf9d400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106db49d8; end: 106db4a5f;  */

void FUN_106db49d8(undefined4 param_1,long param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106db4a60;
  puStack_48 = &UNK_11085ae18;
  _objc_copyWeak(auStack_40,param_2 + 0x20);
  uStack_38 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 106db4a60; end: 106db4a97;  */

void FUN_106db4a60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1e46a0(*(undefined4 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106db4a98; end: 106db4aff;  */

void FUN_106db4a98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bf9d420(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106db4b00; end: 106db4bff; -[SCMemoriesRemixController _externalMediaItemMusicTrackInfoFromGallerySnap:completion:] */

void FUN_106db4b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be0d760(param_1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106db4c00; end: 106db4d0b;  */

void FUN_106db4c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,0,param_3);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    _objc_retain(param_2);
    _objc_retain(param_3);
    func_0x00010becdf40(lVar2);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106db4d0c; end: 106db4d23;  */

void FUN_106db4d0c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000106db4d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),param_2,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106db4d24; end: 106db4e63; -[SCMemoriesRemixController _externalMediaItemFromGallerySnap:completion:] */

void FUN_106db4d24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010beaf320(param_1);
  _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x28));
  _objc_initWeak(auStack_40,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_50,auStack_40);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_48,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106db4e64; end: 106db5077;  */

void FUN_106db4e64(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
  }
  else {
    func_0x00010be52e60(lVar2);
    uVar3 = *(undefined8 *)(lVar2 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106db5078;
    puStack_88 = &UNK_110851440;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uStack_80 = uVar4;
    _objc_copyWeak(auStack_78,param_1 + 0x38);
    puStack_d0 = puVar1;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_106db51bc;
    puStack_b8 = &UNK_11097bb98;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    uStack_b0 = uVar4;
    _objc_copyWeak(auStack_a8,param_1 + 0x38);
    puStack_f8 = puVar1;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_106db531c;
    puStack_e0 = &UNK_1108dd2b8;
    _objc_copyWeak(auStack_d8,param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    _objc_copyWeak(auStack_100,param_1 + 0x38);
    func_0x00010c279b60(uVar3);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_100);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_d8);
    _objc_destroyWeak(auStack_a8);
    _objc_release(uStack_b0);
    _objc_destroyWeak(auStack_78);
    _objc_release(uStack_80);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 106db5078; end: 106db5173;  */

void FUN_106db5078(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c6978;
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe95c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106db5174;
  puStack_50 = &UNK_110848378;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  puStack_48 = puVar2;
  uStack_40 = uVar3;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_40);
  _objc_release(puVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 106db5174; end: 106db51bb;  */

void FUN_106db5174(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20),0);
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c069d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106db51bc; end: 106db52d3;  */

void FUN_106db51bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c6978;
  puVar1 = PTR_PTR_1126ae558;
  func_0x00010bfe9ca0(PTR_PTR_1126ae558);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29be60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106db52d4;
  puStack_60 = &UNK_110848378;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  puStack_58 = puVar2;
  uStack_50 = uVar3;
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  func_0x000100162d98("APPSTORE",&puStack_78);
  _objc_destroyWeak(auStack_48);
  _objc_release(uStack_50);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106db52d4; end: 106db531b;  */

void FUN_106db52d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20),0);
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c069d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106db531c; end: 106db53a3;  */

void FUN_106db531c(undefined4 param_1,long param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106db53a4;
  puStack_48 = &UNK_11085ae18;
  _objc_copyWeak(auStack_40,param_2 + 0x20);
  uStack_38 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 106db53a4; end: 106db53db;  */

void FUN_106db53a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1e46a0(*(undefined4 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106db53dc; end: 106db549b;  */

void FUN_106db53dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106db549c;
  puStack_50 = &UNK_110848378;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  _objc_retain(param_2);
  uStack_48 = param_2;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_destroyWeak(auStack_38);
  _objc_release(uStack_48);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 106db549c; end: 106db54e3;  */

void FUN_106db549c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0,*(undefined8 *)(param_1 + 0x20));
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c069d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106db54e4; end: 106db56b3; -[SCMemoriesRemixController _setupProgressController] */

void FUN_106db54e4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined **ppuStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b24c0;
  _objc_alloc();
  puVar2 = PTR_PTR_1126b24b8;
  _objc_alloc();
  func_0x00010c03b480(0x40000000);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff0fa0();
  puVar7 = (undefined8 *)(param_1 + 0x28);
  uVar6 = *puVar7;
  *puVar7 = puVar1;
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_initWeak(auStack_58,*puVar7);
  _objc_initWeak(auStack_60,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106db56b4;
  puStack_78 = &UNK_110854350;
  _objc_copyWeak(auStack_70,auStack_60);
  _objc_copyWeak(auStack_68,auStack_58);
  func_0x00010c178040(*puVar7);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_106db57ac;
  puStack_a0 = &UNK_110842e18;
  lStack_98 = param_1;
  func_0x0001000d76cc("APPSTORE",&puStack_b8);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_60);
  puVar4 = auStack_58;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  puVar5 = puVar4;
  __Unwind_Resume(puVar4);
  pcStack_c8 = FUN_106db56b4;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_106db575c;
  puStack_f8 = &UNK_110854350;
  ppuStack_e0 = &puStack_90;
  puStack_d8 = puVar4;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_copyWeak(auStack_f0,puVar5 + 0x20);
  _objc_copyWeak(auStack_e8,puVar5 + 0x28);
  func_0x0001000d76cc("APPSTORE",&puStack_110);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_f0);
  return;
}



/* Entry: 106db56b4; end: 106db575b;  */

void FUN_106db56b4(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106db575c;
  puStack_38 = &UNK_110854350;
  _objc_copyWeak(auStack_30,param_1 + 0x20);
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_28);
  _objc_destroyWeak(auStack_30);
  return;
}



/* Entry: 106db575c; end: 106db57ab;  */

void FUN_106db575c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c069d00();
    _objc_release(param_1);
    *(undefined1 *)(lVar1 + 0x40) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106db57ac; end: 106db57b7;  */

void FUN_106db57ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c239690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),PTR_s_showProgressOverlay_11266bfc8);
  return;
}



/* Entry: 106db57b8; end: 106db5857; -[SCMemoriesRemixController remixScopeDidComplete] */

void FUN_106db57b8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + 0x48);
    if (lVar2 == 0) {
      return;
    }
    (**(code **)(lVar2 + 0x10))(lVar2,1,0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106db5858; end: 106db586f; -[SCMemoriesRemixController _logExportStart] */

void FUN_106db5858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0bb570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_markExportStart_exportSessionId__11260c770,
             *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x58),1,
             *(undefined8 *)(param_1 + 0x80));
  return;
}



/* Entry: 106db5870; end: 106db58d3; -[SCMemoriesRemixController _logExportCompleteWithSuccess:galleryEntryType:errorType:errorSource:cancelled:memSessionId:currentMemoriesTab:collectionCategory:] */

void FUN_106db5870(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  func_0x00010bf73d60(*(undefined8 *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x58),
                      param_8,param_9,*(undefined8 *)(param_1 + 0x60),1,param_3,param_5,param_6,
                      param_7,param_4,0);
  return;
}



/* Entry: 106db58d4; end: 106db5adf; -[SCMemoriesRemixController _trackInfoFromGallerySnap:completion:] */

void FUN_106db58d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106db59ec;
  puStack_50 = &UNK_11097bbc8;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135240(uVar2,param_2,uVar1,0,PTR___dispatch_main_q_11034be20,&puStack_68,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 106db5ae0; end: 106db5b8f; -[SCMemoriesRemixController .cxx_destruct] */

void FUN_106db5ae0(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106db5b90; end: 106db5b97; -[SCMemoriesRemixVideoImportStrategy retryAVAssetImportMaxAttempts] */

undefined8 FUN_106db5b90(void)

{
  return 3;
}



/* Entry: 106db5b98; end: 106db5bc7; -[SCMemoriesRemixVideoImportStrategy initialExportSessionPreset] */

void FUN_106db5b98(void)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)PTR__AVAssetExportPreset1280x720_110347e90;
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106db5bc8; end: 106db5bf7; -[SCMemoriesRemixVideoImportStrategy exportSessionPresetForFailedExportWithPreset:failureCount:] */

void FUN_106db5bc8(void)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)PTR__AVAssetExportPreset1280x720_110347e90;
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106db5bf8; end: 106db5bff; -[SCMemoriesRemixVideoImportStrategy outputFilePath] */

undefined8 FUN_106db5bf8(void)

{
  return 0;
}



/* Entry: 106db5c00; end: 106db5c07; -[SCMemoriesRemixVideoImportStrategy rotateLandscapeVideoToPortraitOrientationRight] */

undefined8 FUN_106db5c00(void)

{
  return 0;
}



/* Entry: 106db5c08; end: 106db5c0f; -[SCMemoriesRemixVideoImportStrategy allowDownloadFromiCloud] */

undefined8 FUN_106db5c08(void)

{
  return 1;
}



/* Entry: 106db5c10; end: 106db5c17; -[SCMemoriesRemixVideoImportStrategy requestUnmodifiedOriginal] */

undefined8 FUN_106db5c10(void)

{
  return 0;
}



/* Entry: 106db5c18; end: 106db5e57; -[SCMemoriesScreenshopCategoryDataSource initWithDelegate:performer:screenshopPersistenceService:screenshopNetworkService:categoryStore:assetIdToAsset:badgeObservable:skipOnDeviceScanEnabled:] */

undefined1 *
FUN_106db5c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f6e88;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x88) = param_10;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_9;
    _objc_release(uVar2);
    func_0x00010be65b00(puVar1);
    func_0x00010bdd63e0(puVar1);
    puVar3 = PTR_PTR_1126d2908;
    _objc_alloc();
    func_0x00010c00aaa0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106db5e58; end: 106db5e63; -[SCMemoriesScreenshopCategoryDataSource startCategoryExtractionProcess] */

void FUN_106db5e58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c114990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_processEvent__112622c80,5);
  return;
}



/* Entry: 106db5e64; end: 106db5ec3; -[SCMemoriesScreenshopCategoryDataSource updateDataSourceWithMap:] */

void FUN_106db5e64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bdd63e0(param_1);
  func_0x00010c114980(*(undefined8 *)(param_1 + 0x28),param_2,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106db5ec4; end: 106db5ed7; -[SCMemoriesScreenshopCategoryDataSource setDataSourceProcessingEnabled:] */

void FUN_106db5ec4(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_3 != 0) {
    uVar1 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c114990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_processEvent__112622c80,uVar1);
  return;
}



/* Entry: 106db5ed8; end: 106db5f73; -[SCMemoriesScreenshopCategoryDataSource _observeAppStateChanges] */

void FUN_106db5ed8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106db5f74; end: 106db5fcb; -[SCMemoriesScreenshopCategoryDataSource _willEnterForeground] */

void FUN_106db5f74(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106db5fcc;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 106db5fcc; end: 106db5fdb;  */

void FUN_106db5fcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c114990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),PTR_s_processEvent__112622c80,1);
  return;
}



/* Entry: 106db5fdc; end: 106db6033; -[SCMemoriesScreenshopCategoryDataSource _didEnterBackground] */

void FUN_106db5fdc(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106db6034;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 106db6034; end: 106db6043;  */

void FUN_106db6034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c114990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),PTR_s_processEvent__112622c80,0);
  return;
}



/* Entry: 106db6044; end: 106db63c3; -[SCMemoriesScreenshopCategoryDataSource _buildInitialState] */

void FUN_106db6044(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 *puVar20;
  long unaff_x22;
  undefined1 *puVar21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined1 *puVar22;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_1a0;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar9 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar18 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar17;
  _objc_release(uVar18);
  puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar18 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar17;
  _objc_release(uVar18);
  puVar17 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar18 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar17;
  _objc_release(uVar18);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar2;
  func_0x00010bfaa200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar19);
  puVar10 = auStack_f0;
  puVar17 = (undefined *)0x10;
  lVar3 = lVar19;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    unaff_x27 = *plStack_120;
    do {
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(lVar19);
        }
        unaff_x22 = *(long *)(lStack_128 + unaff_x28 * 8);
        lVar2 = *(long *)(param_1 + 0x50);
        unaff_x24 = unaff_x22;
        func_0x00010c09da80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(unaff_x24);
        unaff_x23 = 0;
        if (lVar2 != 0) {
          uVar18 = *(undefined8 *)(param_1 + 0x78);
          lVar2 = unaff_x22;
          func_0x00010c09da80(unaff_x22);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar18);
          _objc_release(lVar2);
          lVar2 = unaff_x22;
          func_0x00010bf33060();
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar2;
          func_0x00010bf529e0();
          unaff_x23 = unaff_x22;
          if (lVar13 == 0) {
            lVar13 = unaff_x22;
            func_0x00010bf416c0();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar13;
            func_0x00010bf529e0();
            if (lVar4 != 0) {
              _objc_release(lVar13);
              goto LAB_106db61f8;
            }
            unaff_x25 = unaff_x22;
            func_0x00010c0f5ae0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010bf529e0();
            _objc_release(unaff_x25);
            _objc_release(lVar13);
            _objc_release(lVar2);
            if (unaff_x26 != 0) goto LAB_106db6200;
            unaff_x24 = *(long *)(param_1 + 0x70);
            func_0x00010c09da80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(unaff_x24);
          }
          else {
LAB_106db61f8:
            _objc_release(lVar2);
LAB_106db6200:
            lVar2 = unaff_x22;
            func_0x00010bf33060(unaff_x22);
            _objc_retainAutoreleasedReturnValue();
            lVar13 = unaff_x22;
            func_0x00010c09da80(unaff_x22);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be75bc0(param_1);
            _objc_release(lVar13);
            _objc_release(lVar2);
            lVar2 = unaff_x22;
            func_0x00010bf416c0(unaff_x22);
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = unaff_x22;
            func_0x00010c09da80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be75bc0(param_1);
            _objc_release(unaff_x24);
            _objc_release(lVar2);
            func_0x00010c0f5ae0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c09da80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010be75bc0(param_1);
            _objc_release(unaff_x22);
          }
          _objc_release(unaff_x23);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (lVar3 != unaff_x28);
      puVar10 = auStack_f0;
      puVar17 = (undefined *)0x10;
      lVar3 = lVar19;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
      lVar2 = 0;
    } while (lVar3 != 0);
  }
  _objc_release(lVar19);
  func_0x00010bdebdc0(param_1);
  lVar3 = lVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar16 = &uStack_260;
  pcStack_138 = FUN_106db63c4;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_190 = unaff_x28;
  lStack_188 = unaff_x27;
  lStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  lStack_170 = unaff_x24;
  lStack_168 = unaff_x23;
  lStack_160 = unaff_x22;
  lStack_158 = lVar2;
  lStack_150 = lVar19;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  _objc_retain(puVar17);
  lVar2 = *(long *)(lVar3 + 0x50);
  puVar5 = puVar10;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    _objc_retain(puVar9);
    puVar5 = (undefined1 *)puVar9;
    func_0x00010bf52a60();
    if (puVar5 != (undefined1 *)0x0) {
      lVar2 = *plStack_250;
      do {
        puVar22 = (undefined1 *)0x0;
        do {
          if (*plStack_250 != lVar2) {
            _objc_enumerationMutation(puVar9);
          }
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          puVar7 = puVar17;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar8 = puVar6;
          if (puVar7 != (undefined *)0x0) {
            puVar8 = puVar17;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
          }
          func_0x00010befa120(puVar8);
          func_0x00010c1d0560(puVar17);
          _objc_release(puVar8);
          puVar22 = puVar22 + 1;
        } while (puVar5 != puVar22);
        puVar5 = (undefined1 *)puVar9;
        puVar16 = &uStack_260;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined1 *)0x0);
    }
    _objc_release(puVar9);
    puVar5 = (undefined1 *)puVar16;
  }
  _objc_release(puVar17);
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar22 = puVar5;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar22;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar10 != (undefined1 *)0x0) {
    puVar21 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar22);
      }
      uVar18 = *(undefined8 *)((long)puVar21 * 8);
      puVar11 = puVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010bf529e0();
      _objc_release(puVar11);
      iVar1 = (int)*(undefined8 *)((long)puVar9 + 0x68);
      if (puVar12 < (undefined1 *)0x5) {
        func_0x00010befa120();
      }
      else {
        func_0x00010bf4b900();
        if (iVar1 != 0) {
          func_0x00010c12d360(*(undefined8 *)((long)puVar9 + 0x68));
        }
        puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar12;
        func_0x00010bf52a60();
        lVar3 = lRam0000000000000000;
        while (puVar11 != (undefined1 *)0x0) {
          puVar20 = (undefined1 *)0x0;
          do {
            if (lRam0000000000000000 != lVar3) {
              _objc_enumerationMutation(puVar12);
            }
            lVar13 = *(long *)((long)puVar9 + 0x50);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar13 != 0) {
              lVar4 = lVar13;
              FUN_106dbda6c(lVar13);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar6);
              _objc_release(lVar4);
            }
            _objc_release(lVar13);
            puVar20 = puVar20 + 1;
          } while (puVar11 != puVar20);
          puVar11 = puVar12;
          func_0x00010bf52a60();
        }
        _objc_release(puVar12);
        puVar7 = PTR_PTR_1126d2910;
        _objc_opt_new(PTR_PTR_1126d2910);
        func_0x00010c17a1a0();
        func_0x00010bf529e0(puVar6);
        func_0x00010c17a200(puVar7);
        func_0x00010befa120(*(undefined8 *)((long)puVar9 + 0x60));
        puVar8 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        func_0x00010c246960();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar6;
        func_0x00010c246cc0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar8);
        func_0x0001000f6108(uVar18,&PTR____CFConstantStringClassReference_110e83c38,0);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126d2918;
        _objc_alloc(PTR_PTR_1126d2918);
        puVar14 = puVar15;
        func_0x00010bfb1920(puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bffd120(puVar8);
        _objc_release(puVar14);
        func_0x00010befa120(puVar17);
        _objc_release(puVar8);
        _objc_release(uVar18);
        _objc_release(puVar15);
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
      puVar21 = puVar21 + 1;
    } while (puVar21 != puVar10);
    puVar10 = puVar22;
    func_0x00010bf52a60();
  }
  _objc_release(puVar22);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
    return;
  }
  ___stack_chk_fail();
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar18 = *(undefined8 *)(puVar5 + 0x58);
  *(undefined **)(puVar5 + 0x58) = puVar17;
  _objc_release(uVar18);
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar18 = *(undefined8 *)(puVar5 + 0x60);
  *(undefined **)(puVar5 + 0x60) = puVar17;
  _objc_release(uVar18);
  puVar10 = puVar5;
  func_0x00010bdf2340();
  _objc_retainAutoreleasedReturnValue();
  if (puVar10 != (undefined1 *)0x0) {
    func_0x00010befa120(*(undefined8 *)(puVar5 + 0x58));
  }
  uVar18 = *(undefined8 *)(puVar5 + 0x58);
  puVar22 = puVar5;
  func_0x00010bdedbc0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar18);
  _objc_release(puVar22);
  uVar18 = *(undefined8 *)(puVar5 + 0x58);
  puVar22 = puVar5;
  func_0x00010bdedbc0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar18);
  _objc_release(puVar22);
  uVar18 = *(undefined8 *)(puVar5 + 0x58);
  puVar22 = puVar5;
  func_0x00010bdedbc0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar18);
  _objc_release(puVar22);
  puVar22 = puVar5;
  func_0x00010bdebde0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar22 != (undefined1 *)0x0) {
    func_0x00010befa120(*(undefined8 *)(puVar5 + 0x58));
  }
  func_0x00010bdf8c20(puVar5);
  func_0x00010c17a040(*(undefined8 *)(puVar5 + 0x30));
  _objc_release(puVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 106db63c4; end: 106db6593; -[SCMemoriesScreenshopCategoryDataSource _populateCategories:withIdentifier:forMap:] */

void FUN_106db63c4(long param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                  undefined *param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar16 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 0x50);
  puVar15 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar19 = *plStack_120;
      do {
        lVar21 = 0;
        do {
          if (*plStack_120 != lVar19) {
            _objc_enumerationMutation(param_3);
          }
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_opt_new();
          puVar4 = param_5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar5 = puVar3;
          if (puVar4 != (undefined *)0x0) {
            puVar5 = param_5;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar3);
          }
          func_0x00010befa120(puVar5);
          func_0x00010c1d0560(param_5);
          _objc_release(puVar5);
          lVar21 = lVar21 + 1;
        } while (lVar2 != lVar21);
        lVar2 = param_3;
        puVar16 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(param_3);
    puVar15 = (undefined1 *)puVar16;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar15);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = puVar15;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar7 != (undefined1 *)0x0) {
    puVar18 = (undefined1 *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar6);
      }
      uVar20 = *(undefined8 *)((long)puVar18 * 8);
      puVar8 = puVar15;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf529e0();
      _objc_release(puVar8);
      iVar1 = (int)*(undefined8 *)(param_3 + 0x68);
      if (puVar9 < (undefined1 *)0x5) {
        func_0x00010befa120();
      }
      else {
        func_0x00010bf4b900();
        if (iVar1 != 0) {
          func_0x00010c12d360(*(undefined8 *)(param_3 + 0x68));
        }
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar15;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar9;
        func_0x00010bf52a60();
        lVar21 = lRam0000000000000000;
        while (puVar8 != (undefined1 *)0x0) {
          puVar17 = (undefined1 *)0x0;
          do {
            if (lRam0000000000000000 != lVar21) {
              _objc_enumerationMutation(puVar9);
            }
            lVar10 = *(long *)(param_3 + 0x50);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar10 != 0) {
              lVar11 = lVar10;
              FUN_106dbda6c(lVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar4);
              _objc_release(lVar11);
            }
            _objc_release(lVar10);
            puVar17 = puVar17 + 1;
          } while (puVar8 != puVar17);
          puVar8 = puVar9;
          func_0x00010bf52a60();
        }
        _objc_release(puVar9);
        puVar5 = PTR_PTR_1126d2910;
        _objc_opt_new(PTR_PTR_1126d2910);
        func_0x00010c17a1a0();
        func_0x00010bf529e0(puVar4);
        func_0x00010c17a200(puVar5);
        func_0x00010befa120(*(undefined8 *)(param_3 + 0x60));
        puVar12 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        func_0x00010c246960();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar4;
        func_0x00010c246cc0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        _objc_release(puVar12);
        func_0x0001000f6108(uVar20,&PTR____CFConstantStringClassReference_110e83c38,0);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR_PTR_1126d2918;
        _objc_alloc(PTR_PTR_1126d2918);
        puVar13 = puVar14;
        func_0x00010bfb1920(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bffd120(puVar12);
        _objc_release(puVar13);
        func_0x00010befa120(puVar3);
        _objc_release(puVar12);
        _objc_release(uVar20);
        _objc_release(puVar14);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar7);
    puVar7 = puVar6;
    func_0x00010bf52a60();
  }
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar20 = *(undefined8 *)(puVar15 + 0x58);
  *(undefined **)(puVar15 + 0x58) = puVar3;
  _objc_release(uVar20);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar20 = *(undefined8 *)(puVar15 + 0x60);
  *(undefined **)(puVar15 + 0x60) = puVar3;
  _objc_release(uVar20);
  puVar7 = puVar15;
  func_0x00010bdf2340();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (undefined1 *)0x0) {
    func_0x00010befa120(*(undefined8 *)(puVar15 + 0x58));
  }
  uVar20 = *(undefined8 *)(puVar15 + 0x58);
  puVar6 = puVar15;
  func_0x00010bdedbc0(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar20);
  _objc_release(puVar6);
  uVar20 = *(undefined8 *)(puVar15 + 0x58);
  puVar6 = puVar15;
  func_0x00010bdedbc0(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar20);
  _objc_release(puVar6);
  uVar20 = *(undefined8 *)(puVar15 + 0x58);
  puVar6 = puVar15;
  func_0x00010bdedbc0(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar20);
  _objc_release(puVar6);
  puVar6 = puVar15;
  func_0x00010bdebde0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined1 *)0x0) {
    func_0x00010befa120(*(undefined8 *)(puVar15 + 0x58));
  }
  func_0x00010bdf8c20(puVar15);
  func_0x00010c17a040(*(undefined8 *)(puVar15 + 0x30));
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 106db6594; end: 106db695f; -[SCMemoriesScreenshopCategoryDataSource _createFilledCategoryForMap:] */

void FUN_106db6594(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar5 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (uVar6 != 0) {
    uVar18 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar5);
      }
      uVar19 = *(undefined8 *)(uVar18 * 8);
      uVar7 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf529e0();
      _objc_release(uVar7);
      iVar3 = (int)*(undefined8 *)(param_1 + 0x68);
      if (uVar8 < 5) {
        func_0x00010befa120();
      }
      else {
        func_0x00010bf4b900();
        if (iVar3 != 0) {
          func_0x00010c12d360(*(undefined8 *)(param_1 + 0x68));
        }
        puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar8;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        while (uVar7 != 0) {
          uVar17 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(uVar8);
            }
            lVar10 = *(long *)(param_1 + 0x50);
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar10 != 0) {
              lVar11 = lVar10;
              FUN_106dbda6c(lVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar9);
              _objc_release(lVar11);
            }
            _objc_release(lVar10);
            uVar17 = uVar17 + 1;
          } while (uVar7 != uVar17);
          uVar7 = uVar8;
          func_0x00010bf52a60();
        }
        _objc_release(uVar8);
        puVar12 = PTR_PTR_1126d2910;
        _objc_opt_new(PTR_PTR_1126d2910);
        func_0x00010c17a1a0();
        func_0x00010bf529e0(puVar9);
        func_0x00010c17a200(puVar12);
        func_0x00010befa120(*(undefined8 *)(param_1 + 0x60));
        puVar13 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
        func_0x00010c246960();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar9;
        func_0x00010c246cc0(puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar14);
        _objc_release(puVar13);
        func_0x0001000f6108(uVar19,&PTR____CFConstantStringClassReference_110e83c38,0);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = PTR_PTR_1126d2918;
        _objc_alloc(PTR_PTR_1126d2918);
        puVar14 = puVar15;
        func_0x00010bfb1920(puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bffd120(puVar13);
        _objc_release(puVar14);
        func_0x00010befa120(puVar4);
        _objc_release(puVar13);
        _objc_release(uVar19);
        _objc_release(puVar15);
        _objc_release(puVar12);
        _objc_release(puVar9);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar6);
    uVar6 = uVar5;
    func_0x00010bf52a60();
  }
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar19 = *(undefined8 *)(param_3 + 0x58);
  *(undefined **)(param_3 + 0x58) = puVar4;
  _objc_release(uVar19);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar19 = *(undefined8 *)(param_3 + 0x60);
  *(undefined **)(param_3 + 0x60) = puVar4;
  _objc_release(uVar19);
  uVar6 = param_3;
  func_0x00010bdf2340();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_3 + 0x58));
  }
  uVar19 = *(undefined8 *)(param_3 + 0x58);
  uVar5 = param_3;
  func_0x00010bdedbc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar19);
  _objc_release(uVar5);
  uVar19 = *(undefined8 *)(param_3 + 0x58);
  uVar5 = param_3;
  func_0x00010bdedbc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar19);
  _objc_release(uVar5);
  uVar19 = *(undefined8 *)(param_3 + 0x58);
  uVar5 = param_3;
  func_0x00010bdedbc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar19);
  _objc_release(uVar5);
  uVar5 = param_3;
  func_0x00010bdebde0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_3 + 0x58));
  }
  func_0x00010bdf8c20(param_3);
  func_0x00010c17a040(*(undefined8 *)(param_3 + 0x30));
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 106db6960; end: 106db6aaf; -[SCMemoriesScreenshopCategoryDataSource _createCategoriesForComposer] */

void FUN_106db6960(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar4);
  lVar2 = param_1;
  func_0x00010bdf2340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x58),param_2,lVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  lVar3 = param_1;
  func_0x00010bdedbc0(param_1,param_2,*(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar4,param_2,lVar3);
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  lVar3 = param_1;
  func_0x00010bdedbc0(param_1,param_2,*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar4,param_2,lVar3);
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  lVar3 = param_1;
  func_0x00010bdedbc0(param_1,param_2,*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar4,param_2,lVar3);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bdebde0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x58),param_2,lVar3);
  }
  func_0x00010bdf8c20(param_1);
  func_0x00010c17a040(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x60));
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106db6ab0; end: 106db6ab7; -[SCMemoriesScreenshopCategoryDataSource getSessionTotalItemCount] */

void FUN_106db6ab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfca230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_getSessionTotalItemCount_1125d0230);
  return;
}



/* Entry: 106db6ab8; end: 106db6cc3; -[SCMemoriesScreenshopCategoryDataSource _createRecentsCategory] */

void FUN_106db6ab8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  long in_x5;
  long in_x6;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *unaff_x23;
  undefined8 *puVar18;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 uStack_570;
  long lStack_568;
  long *plStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined1 auStack_528 [128];
  long lStack_4a8;
  long *plStack_4a0;
  long *plStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  long *plStack_458;
  undefined8 **ppuStack_450;
  code *pcStack_448;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_370;
  long *plStack_360;
  long *plStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  long *plStack_320;
  undefined8 *puStack_318;
  undefined8 **ppuStack_310;
  code *pcStack_308;
  undefined8 *puStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 auStack_2b0 [16];
  long lStack_230;
  long *plStack_220;
  long *plStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined1 **ppuStack_1d0;
  code *pcStack_1c8;
  long *plStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_158;
  undefined1 auStack_150 [128];
  long lStack_d0;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)param_1[0xf];
  func_0x00010bf529e0();
  if (puVar1 < (undefined8 *)0x4) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    uVar2 = param_1[0xf];
    func_0x00010bf00560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010bdec3c0(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d2910;
    _objc_opt_new();
    func_0x00010c17a1a0();
    puVar6 = puVar1;
    func_0x00010bf529e0(puVar1);
    func_0x00010c17a200(puVar3,param_2,puVar6);
    func_0x00010befa120(param_1[0xc],param_2,puVar3);
    puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                        &PTR____CFConstantStringClassReference_110e86938,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar1;
    func_0x00010c246cc0(puVar1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar6 = puVar18;
    func_0x00010bf529e0();
    if ((undefined8 *)0x63 < puVar6) {
      puVar6 = (undefined8 *)0x64;
    }
    unaff_x23 = puVar18;
    func_0x00010c25e980(puVar18,param_2,0,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined8 *)PTR_PTR_1126d2918;
    _objc_alloc();
    unaff_x24 = puVar6;
    func_0x000106dbdf4c();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = unaff_x23;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd120(puVar6,param_2,unaff_x24,unaff_x23,unaff_x25);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(puVar18);
    _objc_release(puVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_68 = FUN_106db6cc4;
    lStack_d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar18 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_70 = &stack0xfffffffffffffff0;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    lStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    puStack_190 = (undefined8 *)0x0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    lVar15 = puVar1[0xd];
    puStack_1a8 = puVar18;
    _objc_retain(lVar15);
    lStack_1b0 = lVar15;
    func_0x00010bf52a60(lVar15,param_2,&uStack_1a0,auStack_150,0x10);
    if (lVar15 != 0) {
      unaff_x26 = (undefined8 *)*puStack_190;
      unaff_x27 = puVar1 + 7;
      unaff_x28 = puVar1 + 8;
      plStack_1b8 = puVar1 + 9;
      do {
        lVar16 = 0;
        do {
          if ((undefined8 *)*puStack_190 != unaff_x26) {
            _objc_enumerationMutation(lStack_1b0);
          }
          puVar18 = *(undefined8 **)(lStack_198 + lVar16 * 8);
          puVar6 = (undefined8 *)*unaff_x27;
          func_0x00010bf002e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = puVar6;
          func_0x00010bf4b900();
          _objc_release(puVar6);
          plVar13 = unaff_x27;
          if (((ulong)unaff_x25 & 1) == 0) {
            puVar6 = (undefined8 *)*unaff_x28;
            func_0x00010bf002e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = puVar6;
            func_0x00010bf4b900();
            _objc_release(puVar6);
            plVar7 = plStack_1b8;
            plVar13 = unaff_x28;
            if (((ulong)unaff_x25 & 1) != 0) goto LAB_106db6e20;
            unaff_x24 = (undefined8 *)*plStack_1b8;
            func_0x00010bf002e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = unaff_x24;
            func_0x00010bf4b900();
            _objc_release(unaff_x24);
            plVar13 = plVar7;
            unaff_x23 = puVar18;
            if ((int)unaff_x25 != 0) goto LAB_106db6e20;
          }
          else {
LAB_106db6e20:
            unaff_x23 = (undefined8 *)*plVar13;
            func_0x00010c0dff20(unaff_x23,param_2,puVar18);
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = puVar1;
            func_0x00010bdec3c0(puVar1,param_2,unaff_x23);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(puStack_1a8,param_2,unaff_x24);
            _objc_release(unaff_x24);
            _objc_release(unaff_x23);
          }
          lVar16 = lVar16 + 1;
        } while (lVar15 != lVar16);
        lVar15 = lStack_1b0;
        func_0x00010bf52a60(lStack_1b0,param_2,&uStack_1a0,auStack_150,0x10);
        puVar6 = (undefined8 *)0x0;
      } while (lVar15 != 0);
    }
    _objc_release(lStack_1b0);
    lVar15 = puVar1[0xe];
    func_0x00010bf529e0();
    puVar8 = puStack_1a8;
    puVar18 = puVar6;
    if (lVar15 != 0) {
      uVar2 = puVar1[0xe];
      func_0x00010bf00560(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar1;
      func_0x00010bdec3c0(puVar1,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar8,param_2,puVar18);
      _objc_release(puVar18);
      _objc_release(uVar2);
    }
    puVar3 = PTR_PTR_1126d2910;
    _objc_opt_new();
    func_0x00010c17a1a0();
    puVar6 = puVar8;
    func_0x00010bf529e0(puVar8);
    func_0x00010c17a200(puVar3,param_2,puVar6);
    func_0x00010befa120(puVar1[0xc],param_2,puVar3);
    puVar1 = puVar8;
    func_0x00010bf529e0();
    if (puVar1 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
      func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                          &PTR____CFConstantStringClassReference_110e86938,0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_158 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_158,1);
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = puVar8;
      func_0x00010c246cc0(puVar8,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar6 = (undefined8 *)PTR_PTR_1126d2918;
      _objc_alloc();
      puVar18 = puVar6;
      func_0x000106dbdf34();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = unaff_x23;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffd120(puVar6,param_2,puVar18,unaff_x23,unaff_x24);
      _objc_release(unaff_x24);
      _objc_release(puVar18);
      _objc_release(unaff_x23);
    }
    _objc_release(puVar3);
    puVar1 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d0) {
      ___stack_chk_fail();
      puStack_1d8 = puVar8;
      pcStack_1c8 = FUN_106db7068;
      lStack_230 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar7 = (long *)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      plStack_220 = unaff_x28;
      plStack_218 = unaff_x27;
      puStack_210 = unaff_x26;
      puStack_208 = unaff_x25;
      puStack_200 = unaff_x24;
      puStack_1f8 = unaff_x23;
      puStack_1f0 = puVar18;
      puStack_1e8 = puVar3;
      puStack_1e0 = puVar6;
      ppuStack_1d0 = &puStack_70;
      _objc_opt_new();
      lStack_2e8 = 0;
      lStack_2f0 = 0;
      uStack_2d8 = 0;
      puStack_2e0 = (undefined8 *)0x0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      puVar17 = (undefined8 *)puVar1[0xb];
      _objc_retain(puVar17);
      plVar13 = &lStack_2f0;
      puVar8 = auStack_2b0;
      puVar6 = puVar17;
      puStack_2f8 = puVar17;
      func_0x00010bf52a60();
      if (puVar6 != (undefined8 *)0x0) {
        unaff_x28 = (long *)*puStack_2e0;
        do {
          puVar17 = (undefined8 *)0x0;
          do {
            if ((long *)*puStack_2e0 != unaff_x28) {
              _objc_enumerationMutation(puStack_2f8);
            }
            unaff_x24 = *(undefined8 **)(lStack_2e8 + (long)puVar17 * 8);
            puVar18 = unaff_x24;
            func_0x00010bf538a0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar18;
            func_0x00010c0844e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = puVar8;
            func_0x00010c0844e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = plVar7;
            func_0x00010bf4b900(plVar7,param_2,unaff_x26);
            _objc_release(unaff_x26);
            _objc_release(puVar8);
            _objc_release(puVar18);
            if ((int)unaff_x27 != 0) {
              puVar18 = puVar1;
              func_0x00010be1e1c0(puVar1,param_2,plVar7,unaff_x24);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = (undefined8 *)puVar1[10];
              func_0x00010c0e00e0(puVar8,param_2,puVar18);
              _objc_retainAutoreleasedReturnValue();
              if (puVar8 != (undefined8 *)0x0) {
                unaff_x26 = puVar8;
                FUN_106dbda6c();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c184c20(unaff_x24,param_2,unaff_x26);
                _objc_release(unaff_x26);
              }
              _objc_release(puVar8);
              _objc_release(puVar18);
            }
            func_0x00010bf538a0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x25 = unaff_x24;
            func_0x00010c0844e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x23 = unaff_x25;
            func_0x00010c0844e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x25);
            _objc_release(unaff_x24);
            if (unaff_x23 != (undefined8 *)0x0) {
              func_0x00010befa120(plVar7,param_2,unaff_x23);
            }
            _objc_release(unaff_x23);
            puVar17 = (undefined8 *)((long)puVar17 + 1);
          } while (puVar6 != puVar17);
          plVar13 = &lStack_2f0;
          puVar8 = auStack_2b0;
          puVar6 = puStack_2f8;
          func_0x00010bf52a60();
          puVar18 = (undefined8 *)0x0;
        } while (puVar6 != (undefined8 *)0x0);
      }
      _objc_release(puStack_2f8);
      _objc_release(plVar7);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_230) {
        return;
      }
      ___stack_chk_fail();
      pcStack_308 = FUN_106db72b0;
      lStack_370 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plStack_360 = unaff_x28;
      plStack_358 = unaff_x27;
      puStack_350 = unaff_x26;
      puStack_348 = unaff_x25;
      puStack_340 = unaff_x24;
      puStack_338 = unaff_x23;
      puStack_330 = puVar18;
      puStack_328 = puVar17;
      plStack_320 = plVar7;
      puStack_318 = puVar1;
      ppuStack_310 = &ppuStack_1d0;
      _objc_retain(plVar13);
      _objc_retain(puVar8);
      puVar1 = puVar8;
      func_0x00010bf538a0();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar1;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar18;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar18);
      _objc_release(puVar1);
      uStack_408 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      lStack_428 = 0;
      uStack_430 = 0;
      uStack_418 = 0;
      puStack_420 = (undefined8 *)0x0;
      puVar9 = puVar8;
      func_0x00010bf33500();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = &uStack_430;
      puVar10 = puVar9;
      func_0x00010bf52a60();
      if (puVar10 != (undefined8 *)0x0) {
        unaff_x28 = (long *)*puStack_420;
        puStack_438 = puVar6;
        do {
          puVar17 = (undefined8 *)0x0;
          do {
            if ((long *)*puStack_420 != unaff_x28) {
              _objc_enumerationMutation(puVar9);
            }
            puVar18 = *(undefined8 **)(lStack_428 + (long)puVar17 * 8);
            unaff_x25 = puVar18;
            func_0x00010c0844e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010c0844e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = plVar13;
            puVar1 = unaff_x26;
            func_0x00010bf4b900();
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
            if (((ulong)unaff_x27 & 1) == 0) {
              func_0x00010c0844e0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar18;
              func_0x00010c0844e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puStack_438);
              _objc_release(puVar18);
              goto LAB_106db7450;
            }
            puVar17 = (undefined8 *)((long)puVar17 + 1);
          } while (puVar10 != puVar17);
          puVar1 = &uStack_430;
          puVar10 = puVar9;
          func_0x00010bf52a60();
        } while (puVar10 != (undefined8 *)0x0);
        puVar18 = (undefined8 *)0x0;
        puVar6 = puStack_438;
      }
LAB_106db7450:
      _objc_release(puVar9);
      _objc_release(puVar8);
      plVar7 = plVar13;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_370) {
        ___stack_chk_fail();
        puVar10 = &uStack_570;
        pcStack_448 = FUN_106db74a8;
        lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        plStack_4a0 = unaff_x28;
        plStack_498 = unaff_x27;
        puStack_490 = unaff_x26;
        puStack_488 = unaff_x25;
        puStack_480 = puVar6;
        puStack_478 = puVar18;
        puStack_470 = puVar9;
        puStack_468 = puVar17;
        puStack_460 = puVar8;
        plStack_458 = plVar13;
        ppuStack_450 = &ppuStack_310;
        _objc_retain(puVar1);
        puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        lStack_568 = 0;
        uStack_570 = 0;
        uStack_558 = 0;
        plStack_560 = (long *)0x0;
        uStack_548 = 0;
        uStack_550 = 0;
        uStack_538 = 0;
        uStack_540 = 0;
        _objc_retain(puVar1);
        iVar14 = (int)auStack_528;
        lVar15 = 0x10;
        puVar18 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,&uStack_570);
        if (puVar18 != (undefined8 *)0x0) {
          lVar16 = *plStack_560;
          do {
            puVar8 = (undefined8 *)0x0;
            do {
              if (*plStack_560 != lVar16) {
                _objc_enumerationMutation(puVar1);
              }
              lVar15 = plVar7[10];
              func_0x00010c0e00e0(lVar15,param_2,*(undefined8 *)(lStack_568 + (long)puVar8 * 8));
              _objc_retainAutoreleasedReturnValue();
              if (lVar15 != 0) {
                lVar11 = lVar15;
                FUN_106dbda6c();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(puVar6,param_2,lVar11);
                _objc_release(lVar11);
              }
              _objc_release(lVar15);
              puVar8 = (undefined8 *)((long)puVar8 + 1);
            } while (puVar18 != puVar8);
            iVar14 = (int)auStack_528;
            lVar15 = 0x10;
            puVar18 = puVar1;
            puVar10 = &uStack_570;
            func_0x00010bf52a60(puVar1,param_2,&uStack_570);
          } while (puVar18 != (undefined8 *)0x0);
        }
        _objc_release(puVar1);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4a8) {
          ___stack_chk_fail();
          _objc_retain(puVar10);
          _objc_retain(lVar15);
          _objc_retain(in_x5);
          _objc_retain(in_x6);
          uVar12 = puVar1[0xb];
          func_0x00010bf529e0();
          puVar6 = puVar1 + 1;
          _objc_loadWeakRetained(puVar6);
          func_0x00010bf771e0();
          _objc_release(puVar6);
          if (iVar14 != 0) {
            func_0x00010befa120(puVar1[0xf],param_2,puVar10);
            lVar16 = lVar15;
            func_0x00010bf529e0();
            if (((lVar16 == 0) && (lVar16 = in_x5, func_0x00010bf529e0(), lVar16 == 0)) &&
               (lVar16 = in_x6, func_0x00010bf529e0(), lVar16 == 0)) {
              func_0x00010befa120(puVar1[0xe],param_2,puVar10);
            }
            func_0x00010be75bc0(puVar1,param_2,lVar15,puVar10,puVar1[7]);
            func_0x00010be75bc0(puVar1,param_2,in_x5,puVar10,puVar1[8]);
            func_0x00010be75bc0(puVar1,param_2,in_x6,puVar10,puVar1[9]);
            func_0x00010bdebdc0(puVar1);
            if (uVar12 < 2) {
              lVar16 = puVar1[0xb];
              func_0x00010bf529e0();
              if (lVar16 == 2) {
                uVar2 = puVar1[0x10];
                puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0d9840(uVar2,param_2,puVar3);
                _objc_release(puVar3);
              }
            }
          }
          _objc_release(in_x6);
          _objc_release(in_x5);
          _objc_release(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_release_11034d2d0)(puVar10);
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106db6cc4; end: 106db7067; -[SCMemoriesScreenshopCategoryDataSource _createCategoryWithLeftOverItems] */

void FUN_106db6cc4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  long in_x5;
  long in_x6;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *puVar18;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 uStack_510;
  long lStack_508;
  long *plStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined1 auStack_4c8 [128];
  long lStack_448;
  long *plStack_440;
  long *plStack_438;
  undefined8 *puStack_430;
  undefined8 *puStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  long *plStack_3f8;
  undefined8 **ppuStack_3f0;
  code *pcStack_3e8;
  undefined8 *puStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_310;
  long *plStack_300;
  long *plStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  long *plStack_2c0;
  undefined8 *puStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined8 *puStack_298;
  long lStack_290;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 auStack_250 [16];
  long lStack_1d0;
  long *plStack_1c0;
  long *plStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  long *plStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
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
  lVar15 = param_1[0xd];
  puStack_148 = puVar1;
  _objc_retain(lVar15);
  lStack_150 = lVar15;
  func_0x00010bf52a60(lVar15,param_2,&uStack_140,auStack_f0,0x10);
  if (lVar15 != 0) {
    unaff_x26 = (undefined8 *)*puStack_130;
    unaff_x27 = param_1 + 7;
    unaff_x28 = param_1 + 8;
    plStack_158 = param_1 + 9;
    do {
      lVar16 = 0;
      do {
        if ((undefined8 *)*puStack_130 != unaff_x26) {
          _objc_enumerationMutation(lStack_150);
        }
        puVar18 = *(undefined8 **)(lStack_138 + lVar16 * 8);
        puVar1 = (undefined8 *)*unaff_x27;
        func_0x00010bf002e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = puVar1;
        func_0x00010bf4b900();
        _objc_release(puVar1);
        plVar13 = unaff_x27;
        if (((ulong)unaff_x25 & 1) == 0) {
          puVar1 = (undefined8 *)*unaff_x28;
          func_0x00010bf002e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = puVar1;
          func_0x00010bf4b900();
          _objc_release(puVar1);
          plVar7 = plStack_158;
          plVar13 = unaff_x28;
          if (((ulong)unaff_x25 & 1) != 0) goto LAB_106db6e20;
          unaff_x24 = (undefined8 *)*plStack_158;
          func_0x00010bf002e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x24;
          func_0x00010bf4b900();
          _objc_release(unaff_x24);
          plVar13 = plVar7;
          unaff_x23 = puVar18;
          if ((int)unaff_x25 != 0) goto LAB_106db6e20;
        }
        else {
LAB_106db6e20:
          unaff_x23 = (undefined8 *)*plVar13;
          func_0x00010c0dff20(unaff_x23,param_2,puVar18);
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = param_1;
          func_0x00010bdec3c0(param_1,param_2,unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puStack_148,param_2,unaff_x24);
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
        }
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
      lVar15 = lStack_150;
      func_0x00010bf52a60(lStack_150,param_2,&uStack_140,auStack_f0,0x10);
      unaff_x22 = (undefined8 *)0x0;
    } while (lVar15 != 0);
  }
  _objc_release(lStack_150);
  lVar15 = param_1[0xe];
  func_0x00010bf529e0();
  puVar1 = puStack_148;
  if (lVar15 != 0) {
    uVar2 = param_1[0xe];
    func_0x00010bf00560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_1;
    func_0x00010bdec3c0(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,unaff_x22);
    _objc_release(unaff_x22);
    _objc_release(uVar2);
  }
  puVar3 = PTR_PTR_1126d2910;
  _objc_opt_new();
  func_0x00010c17a1a0();
  puVar18 = puVar1;
  func_0x00010bf529e0(puVar1);
  func_0x00010c17a200(puVar3,param_2,puVar18);
  func_0x00010befa120(param_1[0xc],param_2,puVar3);
  puVar18 = puVar1;
  func_0x00010bf529e0();
  if (puVar18 == (undefined8 *)0x0) {
    puVar18 = (undefined8 *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246960(PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8,param_2,
                        &PTR____CFConstantStringClassReference_110e86938,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_f8 = puVar4;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f8,1);
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = puVar1;
    func_0x00010c246cc0(puVar1,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar18 = (undefined8 *)PTR_PTR_1126d2918;
    _objc_alloc();
    unaff_x22 = puVar18;
    FUN_106dbdf34();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x23;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffd120(puVar18,param_2,unaff_x22,unaff_x23,unaff_x24);
    _objc_release(unaff_x24);
    _objc_release(unaff_x22);
    _objc_release(unaff_x23);
  }
  _objc_release(puVar3);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puStack_178 = puVar1;
    pcStack_168 = FUN_106db7068;
    lStack_1d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plVar7 = (long *)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    plStack_1c0 = unaff_x28;
    plStack_1b8 = unaff_x27;
    puStack_1b0 = unaff_x26;
    puStack_1a8 = unaff_x25;
    puStack_1a0 = unaff_x24;
    puStack_198 = unaff_x23;
    puStack_190 = unaff_x22;
    puStack_188 = puVar3;
    puStack_180 = puVar18;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_opt_new();
    lStack_288 = 0;
    lStack_290 = 0;
    uStack_278 = 0;
    puStack_280 = (undefined8 *)0x0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    puVar17 = (undefined8 *)puVar6[0xb];
    _objc_retain(puVar17);
    plVar13 = &lStack_290;
    puVar1 = auStack_250;
    puVar18 = puVar17;
    puStack_298 = puVar17;
    func_0x00010bf52a60();
    if (puVar18 != (undefined8 *)0x0) {
      unaff_x28 = (long *)*puStack_280;
      do {
        puVar17 = (undefined8 *)0x0;
        do {
          if ((long *)*puStack_280 != unaff_x28) {
            _objc_enumerationMutation(puStack_298);
          }
          unaff_x24 = *(undefined8 **)(lStack_288 + (long)puVar17 * 8);
          puVar1 = unaff_x24;
          func_0x00010bf538a0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar1;
          func_0x00010c0844e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = puVar8;
          func_0x00010c0844e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = plVar7;
          func_0x00010bf4b900(plVar7,param_2,unaff_x26);
          _objc_release(unaff_x26);
          _objc_release(puVar8);
          _objc_release(puVar1);
          if ((int)unaff_x27 != 0) {
            puVar1 = puVar6;
            func_0x00010be1e1c0(puVar6,param_2,plVar7,unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = (undefined8 *)puVar6[10];
            func_0x00010c0e00e0(puVar8,param_2,puVar1);
            _objc_retainAutoreleasedReturnValue();
            if (puVar8 != (undefined8 *)0x0) {
              unaff_x26 = puVar8;
              FUN_106dbda6c();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c184c20(unaff_x24,param_2,unaff_x26);
              _objc_release(unaff_x26);
            }
            _objc_release(puVar8);
            _objc_release(puVar1);
          }
          func_0x00010bf538a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x24;
          func_0x00010c0844e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = unaff_x25;
          func_0x00010c0844e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          if (unaff_x23 != (undefined8 *)0x0) {
            func_0x00010befa120(plVar7,param_2,unaff_x23);
          }
          _objc_release(unaff_x23);
          puVar17 = (undefined8 *)((long)puVar17 + 1);
        } while (puVar18 != puVar17);
        plVar13 = &lStack_290;
        puVar1 = auStack_250;
        puVar18 = puStack_298;
        func_0x00010bf52a60();
        unaff_x22 = (undefined8 *)0x0;
      } while (puVar18 != (undefined8 *)0x0);
    }
    _objc_release(puStack_298);
    _objc_release(plVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d0) {
      return;
    }
    ___stack_chk_fail();
    pcStack_2a8 = FUN_106db72b0;
    lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
    plStack_300 = unaff_x28;
    plStack_2f8 = unaff_x27;
    puStack_2f0 = unaff_x26;
    puStack_2e8 = unaff_x25;
    puStack_2e0 = unaff_x24;
    puStack_2d8 = unaff_x23;
    puStack_2d0 = unaff_x22;
    puStack_2c8 = puVar17;
    plStack_2c0 = plVar7;
    puStack_2b8 = puVar6;
    ppuStack_2b0 = &puStack_170;
    _objc_retain(plVar13);
    _objc_retain(puVar1);
    puVar6 = puVar1;
    func_0x00010bf538a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar8;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar6);
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    lStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    puStack_3c0 = (undefined8 *)0x0;
    puVar9 = puVar1;
    func_0x00010bf33500();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = &uStack_3d0;
    puVar10 = puVar9;
    func_0x00010bf52a60();
    if (puVar10 != (undefined8 *)0x0) {
      unaff_x28 = (long *)*puStack_3c0;
      puStack_3d8 = puVar18;
      do {
        puVar17 = (undefined8 *)0x0;
        do {
          if ((long *)*puStack_3c0 != unaff_x28) {
            _objc_enumerationMutation(puVar9);
          }
          puVar8 = *(undefined8 **)(lStack_3c8 + (long)puVar17 * 8);
          unaff_x25 = puVar8;
          func_0x00010c0844e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x25;
          func_0x00010c0844e0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = plVar13;
          puVar6 = unaff_x26;
          func_0x00010bf4b900();
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          if (((ulong)unaff_x27 & 1) == 0) {
            func_0x00010c0844e0();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar8;
            func_0x00010c0844e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puStack_3d8);
            _objc_release(puVar8);
            goto LAB_106db7450;
          }
          puVar17 = (undefined8 *)((long)puVar17 + 1);
        } while (puVar10 != puVar17);
        puVar6 = &uStack_3d0;
        puVar10 = puVar9;
        func_0x00010bf52a60();
      } while (puVar10 != (undefined8 *)0x0);
      puVar8 = (undefined8 *)0x0;
      puVar18 = puStack_3d8;
    }
LAB_106db7450:
    _objc_release(puVar9);
    _objc_release(puVar1);
    plVar7 = plVar13;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_310) {
      ___stack_chk_fail();
      puVar10 = &uStack_510;
      pcStack_3e8 = FUN_106db74a8;
      lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plStack_440 = unaff_x28;
      plStack_438 = unaff_x27;
      puStack_430 = unaff_x26;
      puStack_428 = unaff_x25;
      puStack_420 = puVar18;
      puStack_418 = puVar8;
      puStack_410 = puVar9;
      puStack_408 = puVar17;
      puStack_400 = puVar1;
      plStack_3f8 = plVar13;
      ppuStack_3f0 = &ppuStack_2b0;
      _objc_retain(puVar6);
      puVar18 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_508 = 0;
      uStack_510 = 0;
      uStack_4f8 = 0;
      plStack_500 = (long *)0x0;
      uStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_4d8 = 0;
      uStack_4e0 = 0;
      _objc_retain(puVar6);
      iVar14 = (int)auStack_4c8;
      lVar15 = 0x10;
      puVar1 = puVar6;
      func_0x00010bf52a60(puVar6,param_2,&uStack_510);
      if (puVar1 != (undefined8 *)0x0) {
        lVar16 = *plStack_500;
        do {
          puVar17 = (undefined8 *)0x0;
          do {
            if (*plStack_500 != lVar16) {
              _objc_enumerationMutation(puVar6);
            }
            lVar15 = plVar7[10];
            func_0x00010c0e00e0(lVar15,param_2,*(undefined8 *)(lStack_508 + (long)puVar17 * 8));
            _objc_retainAutoreleasedReturnValue();
            if (lVar15 != 0) {
              lVar11 = lVar15;
              FUN_106dbda6c();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar18,param_2,lVar11);
              _objc_release(lVar11);
            }
            _objc_release(lVar15);
            puVar17 = (undefined8 *)((long)puVar17 + 1);
          } while (puVar1 != puVar17);
          iVar14 = (int)auStack_4c8;
          lVar15 = 0x10;
          puVar1 = puVar6;
          puVar10 = &uStack_510;
          func_0x00010bf52a60(puVar6,param_2,&uStack_510);
        } while (puVar1 != (undefined8 *)0x0);
      }
      _objc_release(puVar6);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_448) {
        ___stack_chk_fail();
        _objc_retain(puVar10);
        _objc_retain(lVar15);
        _objc_retain(in_x5);
        _objc_retain(in_x6);
        uVar12 = puVar6[0xb];
        func_0x00010bf529e0();
        puVar1 = puVar6 + 1;
        _objc_loadWeakRetained(puVar1);
        func_0x00010bf771e0();
        _objc_release(puVar1);
        if (iVar14 != 0) {
          func_0x00010befa120(puVar6[0xf],param_2,puVar10);
          lVar16 = lVar15;
          func_0x00010bf529e0();
          if (((lVar16 == 0) && (lVar16 = in_x5, func_0x00010bf529e0(), lVar16 == 0)) &&
             (lVar16 = in_x6, func_0x00010bf529e0(), lVar16 == 0)) {
            func_0x00010befa120(puVar6[0xe],param_2,puVar10);
          }
          func_0x00010be75bc0(puVar6,param_2,lVar15,puVar10,puVar6[7]);
          func_0x00010be75bc0(puVar6,param_2,in_x5,puVar10,puVar6[8]);
          func_0x00010be75bc0(puVar6,param_2,in_x6,puVar10,puVar6[9]);
          func_0x00010bdebdc0(puVar6);
          if (uVar12 < 2) {
            lVar16 = puVar6[0xb];
            func_0x00010bf529e0();
            if (lVar16 == 2) {
              uVar2 = puVar6[0x10];
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0d9840(uVar2,param_2,puVar3);
              _objc_release(puVar3);
            }
          }
        }
        _objc_release(in_x6);
        _objc_release(in_x5);
        _objc_release(lVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar10);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}


