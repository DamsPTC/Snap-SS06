/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afb0084; end: 10afb009f; +[SCDiscoverOperaSessionLoggingContextBuilder discoverOperaSessionLoggingContext] */

void FUN_10afb0084(void)

{
  _objc_alloc_init(PTR_PTR_1126d6048);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afb00a0; end: 10afb026b; +[SCDiscoverOperaSessionLoggingContextBuilder discoverOperaSessionLoggingContextFromExistingDiscoverOperaSessionLoggingContext:] */

void FUN_10afb00a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  puVar1 = PTR_PTR_1126d6048;
  _objc_retain(param_3);
  func_0x00010bf826a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c278ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2bbb20(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c29d360(param_3);
  puVar5 = puVar3;
  func_0x00010c2bc8c0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf3fe40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2aa8a0(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf400c0(param_3);
  puVar8 = puVar6;
  func_0x00010c2aa9a0(puVar6,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010bf3ffe0(param_3);
  puVar9 = puVar8;
  func_0x00010c2aa920(puVar8,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c251fe0(param_3);
  puVar10 = puVar9;
  func_0x00010c2b9f80(puVar9,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c25b040(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar11 = puVar10;
  func_0x00010c2ba620(puVar10,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10afb026c; end: 10afb02b3; -[SCDiscoverOperaSessionLoggingContextBuilder build] */

void FUN_10afb026c(void)

{
  _objc_alloc(PTR_PTR_1126ceec0);
  func_0x00010c055000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afb02b4; end: 10afb02eb; -[SCDiscoverOperaSessionLoggingContextBuilder withTrackingId:] */

long FUN_10afb02b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afb02ec; end: 10afb02f3; -[SCDiscoverOperaSessionLoggingContextBuilder withViewLocation:] */

void FUN_10afb02ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10afb02f4; end: 10afb032b; -[SCDiscoverOperaSessionLoggingContextBuilder withCollectionId:] */

long FUN_10afb02f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afb032c; end: 10afb0333; -[SCDiscoverOperaSessionLoggingContextBuilder withCollectionType:] */

void FUN_10afb032c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10afb0334; end: 10afb033b; -[SCDiscoverOperaSessionLoggingContextBuilder withCollectionPosition:] */

void FUN_10afb0334(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10afb033c; end: 10afb0343; -[SCDiscoverOperaSessionLoggingContextBuilder withStartingEntryEvent:] */

void FUN_10afb033c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10afb0344; end: 10afb037b; -[SCDiscoverOperaSessionLoggingContextBuilder withStorySessionId:] */

long FUN_10afb0344(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afb037c; end: 10afb03b7; -[SCDiscoverOperaSessionLoggingContextBuilder .cxx_destruct] */

void FUN_10afb037c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afb03b8; end: 10afb043f; -[SCDiscoverOperaSessionBloopsMetadata initWithCoder:] */

undefined1 * FUN_10afb03b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703828;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afb0440; end: 10afb048f; -[SCDiscoverOperaSessionBloopsMetadata initWithIsCameos:hasCameosSelfie:] */

void FUN_10afb0440(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112703828;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 10afb0490; end: 10afb04b3; -[SCDiscoverOperaSessionBloopsMetadata copyWithZone:] */

undefined8 FUN_10afb0490(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afb04b4; end: 10afb0513; -[SCDiscoverOperaSessionBloopsMetadata encodeWithCoder:] */

void FUN_10afb04b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f413d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f413f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afb0514; end: 10afb056f; -[SCDiscoverOperaSessionBloopsMetadata hash] */

ulong * FUN_10afb0514(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = (ulong)*(byte *)(param_1 + 8);
  uStack_20 = (ulong)*(byte *)(param_1 + 9);
  puVar1 = &uStack_28;
  func_0x000107c3191c(puVar1,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == param_3) {
    puVar3 = (ulong *)0x1;
  }
  else {
    puVar3 = (ulong *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar3 = puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || ((char)puVar1[1] != (char)param_3[1])) {
        puVar3 = (ulong *)0x0;
      }
      else {
        puVar3 = (ulong *)(ulong)(*(char *)((long)puVar1 + 9) == *(char *)((long)param_3 + 9));
      }
    }
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10afb0570; end: 10afb0607; -[SCDiscoverOperaSessionBloopsMetadata isEqual:] */

bool FUN_10afb0570(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 9) == *(char *)(param_3 + 9);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10afb0608; end: 10afb060f; -[SCDiscoverOperaSessionBloopsMetadata isCameos] */

undefined1 FUN_10afb0608(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afb0610; end: 10afb0617; -[SCDiscoverOperaSessionBloopsMetadata hasCameosSelfie] */

undefined1 FUN_10afb0610(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afb0618; end: 10afb0633; +[SCDiscoverOperaSessionBloopsMetadataBuilder discoverOperaSessionBloopsMetadata] */

void FUN_10afb0618(void)

{
  _objc_alloc_init(PTR_PTR_1126df2a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afb0634; end: 10afb06db; +[SCDiscoverOperaSessionBloopsMetadataBuilder discoverOperaSessionBloopsMetadataFromExistingDiscoverOperaSessionBloopsMetadata:] */

void FUN_10afb0634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126df2a0;
  _objc_retain(param_3);
  func_0x00010bf82680(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c06dc80(param_3);
  puVar3 = puVar1;
  func_0x00010c2b0360(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfd5080(param_3);
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010c2af140(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10afb06dc; end: 10afb070f; -[SCDiscoverOperaSessionBloopsMetadataBuilder build] */

void FUN_10afb06dc(void)

{
  _objc_alloc(PTR_PTR_1126df2a8);
  func_0x00010c01ed60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afb0710; end: 10afb0717; -[SCDiscoverOperaSessionBloopsMetadataBuilder withIsCameos:] */

void FUN_10afb0710(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10afb0718; end: 10afb071f; -[SCDiscoverOperaSessionBloopsMetadataBuilder withHasCameosSelfie:] */

void FUN_10afb0718(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10afb0720; end: 10afb0733; -[SCBridgeServicesExposer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb0720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112787cd8,0);
  return;
}



/* Entry: 10afb0734; end: 10afb0743; -[SCMultiScopeExposerProxy removeScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb0734(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787cdc),PTR_s_removeScope__112629298);
  return;
}



/* Entry: 10afb0744; end: 10afb0753; -[SCMultiScopeExposerProxy isExposed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb0744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c072570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787cdc),PTR_s_isExposed__1125fa368);
  return;
}



/* Entry: 10afb0754; end: 10afb0767; -[SCMultiScopeExposerProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb0754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112787cdc,0);
  return;
}



/* Entry: 10afb0768; end: 10afb0777; -[SCOptionalMultiScopeExposerProxy exposeScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb0768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787ce0),PTR_s_exposeScope__1125c4f30);
  return;
}



/* Entry: 10afb0778; end: 10afb0787; -[SCOptionalMultiScopeExposerProxy removeScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb0778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787ce0),PTR_s_removeScope__112629298);
  return;
}



/* Entry: 10afb0788; end: 10afb0797; -[SCOptionalMultiScopeExposerProxy isExposed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb0788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c072570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787ce0),PTR_s_isExposed__1125fa368);
  return;
}



/* Entry: 10afb0798; end: 10afb07a7; -[SCOptionalMultiScopeExposerProxy scopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb0798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c150770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787ce0),PTR_s_scopeExposer_112631bf8);
  return;
}



/* Entry: 10afb07a8; end: 10afb07b7; -[SCOptionalMultiScopeExposerProxy isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb07a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787ce0),PTR_s_isEnabled_1125fa010);
  return;
}



/* Entry: 10afb07b8; end: 10afb07cb; -[SCOptionalMultiScopeExposerProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb07b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112787ce0,0);
  return;
}



/* Entry: 10afb07cc; end: 10afb07db; -[SCOptionalScopeExposerProxy scope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb07cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c150530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787ce4),PTR_s_scope_112631b68);
  return;
}



/* Entry: 10afb07dc; end: 10afb07eb; -[SCOptionalScopeExposerProxy exposeScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb07dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787ce4),PTR_s_exposeScope__1125c4f30);
  return;
}



/* Entry: 10afb07ec; end: 10afb07fb; -[SCOptionalScopeExposerProxy removeScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb07ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787ce4),PTR_s_removeScope_112629290);
  return;
}



/* Entry: 10afb07fc; end: 10afb080f; -[SCOptionalScopeExposerProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb07fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112787ce4,0);
  return;
}



/* Entry: 10afb0810; end: 10afb081f; -[SCPlugInScopeExposerProxy scope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb0810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c150530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787ce8),PTR_s_scope_112631b68);
  return;
}



/* Entry: 10afb0820; end: 10afb082f; -[SCPlugInScopeExposerProxy removeScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb0820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787ce8),PTR_s_removeScope_112629290);
  return;
}



/* Entry: 10afb0830; end: 10afb0843; -[SCPlugInScopeExposerProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb0830(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112787ce8,0);
  return;
}



/* Entry: 10afb0844; end: 10afb0853; -[SCScopeExposerProxy removeScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb0844(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787cec),PTR_s_removeScope_112629290);
  return;
}



/* Entry: 10afb0854; end: 10afb0867; -[SCScopeExposerProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10afb0854(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112787cec,0);
  return;
}



/* Entry: 10afb0868; end: 10afb08ab; -[SCSpotlightWidgetContext initWithPostingObservable:previewLauncher:dismissListener:blizzardLogger:hideDismissButton:] */

void FUN_10afb0868(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112703860;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10afb08ac; end: 10afb08bf; +[SCSpotlightWidgetContext valdiMarshallableObjectDescriptor] */

void FUN_10afb08ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca8c38;
  param_1[1] = &PTR_s_SCBridgeObservable_110ca8cc8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afb08c0; end: 10afb093b;  */

undefined * FUN_10afb08c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0f48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43b98,
                        &UNK_10e53f928,&UNK_10e53f96c,4,FUN_10afb093c,0);
    do {
      if (puRam00000001137f0f48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0f48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0f48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0f48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0f48;
}



/* Entry: 10afb093c; end: 10afb0947;  */

bool FUN_10afb093c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10afb0948; end: 10afb09c3;  */

undefined * FUN_10afb0948(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0f50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43bb8,
                        &UNK_10e53f97c,&UNK_10e53fa04,6,FUN_10afb09c4,0);
    do {
      if (puRam00000001137f0f50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0f50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0f50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0f50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0f50;
}



/* Entry: 10afb09c4; end: 10afb09cf;  */

bool FUN_10afb09c4(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10afb09d0; end: 10afb0a4b;  */

undefined * FUN_10afb09d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0f58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43bd8,
                        &UNK_10e53fa1c,&UNK_10e53fa68,4,FUN_10afb0a4c,0);
    do {
      if (puRam00000001137f0f58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0f58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0f58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0f58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0f58;
}



/* Entry: 10afb0a4c; end: 10afb0a57;  */

bool FUN_10afb0a4c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10afb0a58; end: 10afb0ad3;  */

undefined * FUN_10afb0a58(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0f60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43bf8,
                        &UNK_10e53fa78,&UNK_10e53fb14,0xc,FUN_10afb0ad4,0);
    do {
      if (puRam00000001137f0f60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0f60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0f60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0f60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0f60;
}



/* Entry: 10afb0ad4; end: 10afb0adf;  */

bool FUN_10afb0ad4(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 10afb0ae0; end: 10afb0b5b;  */

undefined * FUN_10afb0ae0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0f68 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43c18,
                        &UNK_10e53fb44,&UNK_10e53fb60,3,FUN_10afb0b5c,0);
    do {
      if (puRam00000001137f0f68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0f68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0f68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0f68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0f68;
}



/* Entry: 10afb0b5c; end: 10afb0b67;  */

bool FUN_10afb0b5c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10afb0b68; end: 10afb0be3;  */

undefined * FUN_10afb0b68(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0f70 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43c38,
                        &UNK_10e53fb6c,&UNK_10e53fb88,3,FUN_10afb0be4,0);
    do {
      if (puRam00000001137f0f70 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0f70;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0f70,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0f70 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0f70;
}



/* Entry: 10afb0be4; end: 10afb0bef;  */

bool FUN_10afb0be4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10afb0bf0; end: 10afb0c6b;  */

undefined * FUN_10afb0bf0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0f78 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43c58,
                        &UNK_10e53fb94,&UNK_10e53fbb4,5,FUN_10afb0c6c,0);
    do {
      if (puRam00000001137f0f78 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0f78;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0f78,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0f78 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0f78;
}



/* Entry: 10afb0c6c; end: 10afb0c83;  */

uint FUN_10afb0c6c(uint param_1)

{
  return (uint)(param_1 < 6) & 0x3dU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10afb0c84; end: 10afb0cff;  */

undefined * FUN_10afb0c84(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0f80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43c78,
                        &UNK_10e53fbc8,&UNK_10e53fd90,0x17,FUN_10afb0d00,0);
    do {
      if (puRam00000001137f0f80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0f80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0f80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0f80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0f80;
}



/* Entry: 10afb0d00; end: 10afb0d0b;  */

bool FUN_10afb0d00(uint param_1)

{
  return param_1 < 0x17;
}



/* Entry: 10afb0d0c; end: 10afb0d87;  */

undefined * FUN_10afb0d0c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0f88 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43c98,
                        &UNK_10e53fdec,&UNK_10e53fed8,0xc,FUN_10afb0d88,0);
    do {
      if (puRam00000001137f0f88 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0f88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0f88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0f88 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0f88;
}



/* Entry: 10afb0d88; end: 10afb0d93;  */

bool FUN_10afb0d88(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 10afb0d94; end: 10afb0e23;  */

undefined * FUN_10afb0d94(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0f90 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43cb8,
                        &UNK_10e53ff08,&UNK_10e540080,0x15,FUN_10afb0e24,0,&UNK_10e5400d4);
    do {
      if (puRam00000001137f0f90 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0f90;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0f90,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0f90 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0f90;
}



/* Entry: 10afb0e24; end: 10afb0e2f;  */

bool FUN_10afb0e24(uint param_1)

{
  return param_1 < 0x15;
}



/* Entry: 10afb0e30; end: 10afb0eab;  */

undefined * FUN_10afb0e30(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0f98 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43cd8,
                        &UNK_10e5400f1,&UNK_10e54010c,2,FUN_10afb0eac,0);
    do {
      if (puRam00000001137f0f98 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0f98;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0f98,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0f98 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0f98;
}



/* Entry: 10afb0eac; end: 10afb0eb7;  */

bool FUN_10afb0eac(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10afb0eb8; end: 10afb0f33;  */

undefined * FUN_10afb0eb8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0fa0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43cf8,
                        &UNK_10e540114,&UNK_10e540140,2,FUN_10afb0f34,0);
    do {
      if (puRam00000001137f0fa0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0fa0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0fa0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0fa0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0fa0;
}



/* Entry: 10afb0f34; end: 10afb0f3f;  */

bool FUN_10afb0f34(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10afb0f40; end: 10afb0fbb;  */

undefined * FUN_10afb0f40(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0fa8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43d18,
                        &UNK_10e540148,&UNK_10e540164,3,FUN_10afb0fbc,0);
    do {
      if (puRam00000001137f0fa8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0fa8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0fa8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0fa8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0fa8;
}



/* Entry: 10afb0fbc; end: 10afb0fc7;  */

bool FUN_10afb0fbc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10afb0fc8; end: 10afb1043;  */

undefined * FUN_10afb0fc8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0fb0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43d38,
                        &UNK_10e540170,&UNK_10e540198,4,FUN_10afb1044,0);
    do {
      if (puRam00000001137f0fb0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0fb0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0fb0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0fb0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0fb0;
}



/* Entry: 10afb1044; end: 10afb104f;  */

bool FUN_10afb1044(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10afb1050; end: 10afb10cb;  */

undefined * FUN_10afb1050(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0fb8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43d58,
                        &UNK_10e5401a8,&UNK_10e5401c8,3,FUN_10afb10cc,0);
    do {
      if (puRam00000001137f0fb8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0fb8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0fb8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0fb8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0fb8;
}



/* Entry: 10afb10cc; end: 10afb10d7;  */

bool FUN_10afb10cc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10afb10d8; end: 10afb1153;  */

undefined * FUN_10afb10d8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0fc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43d78,
                        &UNK_10e5401d4,&UNK_10e5402a0,10,FUN_10afb1154,0);
    do {
      if (puRam00000001137f0fc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0fc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0fc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0fc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0fc0;
}



/* Entry: 10afb1154; end: 10afb115f;  */

bool FUN_10afb1154(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10afb1160; end: 10afb11db;  */

undefined * FUN_10afb1160(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0fc8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43d98,
                        &UNK_10e5402c8,&UNK_10e5402e0,4,FUN_10afb11dc,0);
    do {
      if (puRam00000001137f0fc8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0fc8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0fc8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0fc8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0fc8;
}



/* Entry: 10afb11dc; end: 10afb11e7;  */

bool FUN_10afb11dc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10afb11e8; end: 10afb1263;  */

undefined * FUN_10afb11e8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0fd0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43db8,
                        &UNK_10e5402f0,&UNK_10e540318,2,FUN_10afb1264,0);
    do {
      if (puRam00000001137f0fd0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0fd0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0fd0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0fd0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0fd0;
}



/* Entry: 10afb1264; end: 10afb126f;  */

bool FUN_10afb1264(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10afb1270; end: 10afb12eb;  */

undefined * FUN_10afb1270(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0fd8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43dd8,
                        &UNK_10e540320,&UNK_10e540344,3,FUN_10afb12ec,0);
    do {
      if (puRam00000001137f0fd8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0fd8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0fd8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0fd8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0fd8;
}



/* Entry: 10afb12ec; end: 10afb12f7;  */

bool FUN_10afb12ec(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10afb12f8; end: 10afb1373;  */

undefined * FUN_10afb12f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0fe0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43df8,
                        &UNK_10e540350,&UNK_10e54036c,3,FUN_10afb1374,0);
    do {
      if (puRam00000001137f0fe0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0fe0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0fe0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0fe0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0fe0;
}



/* Entry: 10afb1374; end: 10afb137f;  */

bool FUN_10afb1374(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10afb1380; end: 10afb13fb;  */

undefined * FUN_10afb1380(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0fe8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43e18,
                        &UNK_10e540378,&UNK_10e5403c0,6,FUN_10afb13fc,0);
    do {
      if (puRam00000001137f0fe8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0fe8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0fe8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0fe8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0fe8;
}



/* Entry: 10afb13fc; end: 10afb1407;  */

bool FUN_10afb13fc(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10afb1408; end: 10afb1483;  */

undefined * FUN_10afb1408(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0ff0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43e38,
                        &UNK_10e5403d8,&UNK_10e54043c,7,FUN_10afb1484,0);
    do {
      if (puRam00000001137f0ff0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0ff0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0ff0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0ff0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0ff0;
}



/* Entry: 10afb1484; end: 10afb148f;  */

bool FUN_10afb1484(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10afb1490; end: 10afb150b;  */

undefined * FUN_10afb1490(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f0ff8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43e58,
                        &UNK_10e540458,&UNK_10e54046c,3,FUN_10afb150c,0);
    do {
      if (puRam00000001137f0ff8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f0ff8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f0ff8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f0ff8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f0ff8;
}



/* Entry: 10afb150c; end: 10afb1517;  */

bool FUN_10afb150c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10afb1518; end: 10afb1593;  */

undefined * FUN_10afb1518(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f1000 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43e78,
                        &UNK_10e540478,&UNK_10e540490,3,FUN_10afb1594,0);
    do {
      if (puRam00000001137f1000 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f1000;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f1000,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f1000 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f1000;
}



/* Entry: 10afb1594; end: 10afb159f;  */

bool FUN_10afb1594(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10afb15a0; end: 10afb161b;  */

undefined * FUN_10afb15a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f1008 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43e98,
                        &UNK_10e54049c,&UNK_10e540584,0xe,FUN_10afb161c,0);
    do {
      if (puRam00000001137f1008 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f1008;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f1008,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f1008 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f1008;
}



/* Entry: 10afb161c; end: 10afb1627;  */

bool FUN_10afb161c(uint param_1)

{
  return param_1 < 0xe;
}



/* Entry: 10afb1628; end: 10afb16a3;  */

undefined * FUN_10afb1628(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f1010 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43eb8,
                        &UNK_10e5403d8,&UNK_10e5405bc,7,FUN_10afb16a4,0);
    do {
      if (puRam00000001137f1010 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f1010;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f1010,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f1010 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f1010;
}



/* Entry: 10afb16a4; end: 10afb16af;  */

bool FUN_10afb16a4(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10afb16b0; end: 10afb172b;  */

undefined * FUN_10afb16b0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f1018 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43ed8,
                        &UNK_10e5405d8,&UNK_10e540614,4,FUN_10afb172c,0);
    do {
      if (puRam00000001137f1018 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f1018;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f1018,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f1018 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f1018;
}



/* Entry: 10afb172c; end: 10afb1737;  */

bool FUN_10afb172c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10afb1738; end: 10afb17b3;  */

undefined * FUN_10afb1738(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f1020 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f43ef8,
                        &UNK_10e540624,&UNK_10e540654,4,FUN_10afb17b4,0);
    do {
      if (puRam00000001137f1020 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f1020;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f1020,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f1020 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f1020;
}


