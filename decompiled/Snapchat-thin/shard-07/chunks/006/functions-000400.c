/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105748bc0; end: 105748c47;  */

/* WARNING: Possible PIC construction at 0x000105748c20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105748c24) */

void FUN_105748bc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR_PTR_1126bdbb8;
  func_0x00010bfa0240(PTR_PTR_1126bdbb8,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar2);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be07d80(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x90),PTR_s_removeObjectForKey__112628f18,
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 105748c48; end: 105748e57; -[SCAdProvider _emitInFlightFieldDiffMetricForKind:field:creatorKind:inventoryType:] */

void FUN_105748c48(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined **param_6)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = PTR_PTR_1126b8d98;
  if (param_3 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dfb918;
    if (param_3 != 2) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110dfb8f8;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110dfb938;
    if (param_3 != 3) {
      ppuVar1 = ppuVar2;
    }
    _objc_retain(ppuVar1);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_4);
    func_0x00010bfed840(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110f24f38,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110f24ef8,param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf1f480();
    ppuVar2 = &PTR____CFConstantStringClassReference_110db6ad8;
    if ((int)uVar6 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110db6af8;
    }
    _objc_retain(ppuVar2);
    _objc_release(uVar5);
    puVar3 = puVar4;
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110f24f78,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(puVar4);
    ppuVar2 = &PTR____CFConstantStringClassReference_110db8b78;
    if (param_6 != (undefined **)0x0) {
      ppuVar2 = param_6;
    }
    puVar4 = puVar3;
    func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd2058,ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(puVar3);
    func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18),param_2,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 105748e58; end: 1057492eb; -[SCAdProvider _recordInFlightJoinWithCreatorMetadata:joinerMetadata:joinerIsPrefetch:joinerIsEarlyFetch:inventoryType:] */

void FUN_105748e58(long param_1,undefined8 param_2,long param_3,long param_4,uint param_5,
                  uint param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  if (param_3 != 0) {
    lVar4 = param_3;
    func_0x00010c0b39c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c107cc0();
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010c0b39c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf8be80();
    _objc_release(lVar4);
    ppuVar2 = &PTR____CFConstantStringClassReference_110de3fd8;
    if ((uint)lVar5 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110dfb5f8;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_110dfb5d8;
    if ((uint)lVar6 == 0) {
      ppuVar1 = ppuVar2;
    }
    _objc_retain(ppuVar1);
    ppuVar2 = &PTR____CFConstantStringClassReference_110de3fd8;
    if (param_5 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110dfb5f8;
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_110dfb5d8;
    if (param_6 == 0) {
      ppuVar3 = ppuVar2;
    }
    _objc_retain(ppuVar3);
    puVar7 = PTR_PTR_1126b8d98;
    func_0x00010bfed860();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar8;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = puVar7;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18));
    if (((((param_5 & 1) == 0) && ((param_6 & 1) == 0)) && (param_4 != 0)) &&
       ((((uint)lVar5 | (uint)lVar6) & 1) != 0)) {
      lVar4 = param_3;
      func_0x00010bef3aa0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_4;
      func_0x00010bef3aa0(param_4);
      _objc_retainAutoreleasedReturnValue();
      FUN_1057492ec(lVar4,lVar5,1);
      func_0x00010be07da0(param_1);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = param_3;
      func_0x00010c283180(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_4;
      func_0x00010c283180(param_4);
      _objc_retainAutoreleasedReturnValue();
      FUN_1057492ec(lVar4,lVar5,0);
      func_0x00010be07da0(param_1);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = param_3;
      func_0x00010c29f3e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_4;
      func_0x00010c29f3e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      FUN_1057492ec(lVar4,lVar5,0);
      func_0x00010be07da0(param_1);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = param_3;
      func_0x00010c29d360();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_4;
      func_0x00010c29d360();
      _objc_retainAutoreleasedReturnValue();
      if ((lVar4 != 0) && (lVar5 != 0)) {
        func_0x00010c071f40();
      }
      func_0x00010be07da0(param_1);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = param_3;
      func_0x00010bef28c0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_4;
      func_0x00010bef28c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be07da0(param_1);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = param_3;
      func_0x00010bef4300();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_4;
      func_0x00010bef4300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be07da0(param_1);
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
    _objc_release(puVar8);
    _objc_release(ppuVar3);
    _objc_release(ppuVar1);
  }
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057492ec; end: 1057493af;  */

undefined1 FUN_1057492ec(long param_1,long param_2,int param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_1;
  func_0x00010bf529e0();
  lVar3 = param_2;
  func_0x00010bf529e0();
  uVar1 = lVar2 != 0 || lVar3 != 0;
  if ((lVar2 != 0) && (uVar1 = 2, lVar3 != 0)) {
    lVar2 = param_1;
    func_0x00010bf529e0();
    lVar3 = param_2;
    func_0x00010bf529e0();
    if ((lVar2 == lVar3) &&
       ((param_3 == 0 || (lVar2 = param_1, func_0x00010c071b60(), (int)lVar2 != 0)))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 3;
    }
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1057493b0; end: 105749513; -[SCAdProvider _emitInFlightCreatorOutcomeForKey:inventoryType:] */

void FUN_1057493b0(long param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0xa0);
  func_0x00010c0e00e0(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c0b39c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c107cc0();
    _objc_release(lVar3);
    if ((int)lVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x98);
      func_0x00010c0e00e0(uVar5,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(uVar5);
      puVar6 = PTR_PTR_1126b8d98;
      func_0x00010bfed880(PTR_PTR_1126b8d98);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
      if (param_4 != (undefined **)0x0) {
        ppuVar1 = param_4;
      }
      puVar6 = puVar7;
      func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110dd2058,ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18),param_2,puVar6);
      _objc_release(puVar6);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105749514; end: 10574982b; -[SCAdProvider _handleAdFetchSuccessWithResponses:fetchRequest:targetingParameters:adsPreferences:adProductType:loggingContext:adRequestClientIds:engagement:adOrganicSignals:upcomingStoriesContext:adViewLocation:viewingSessionRecords:operaType:brandSafetyInventoryType:purgedAdResponses:startTimestampInMillis:skipCaching:treatAsConsumer:] */

void FUN_105749514(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined1 param_19)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_15);
  _objc_retain(param_18);
  _objc_initWeak(auStack_80,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  _objc_copyWeak(auStack_b8,auStack_80);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_b0 = param_8;
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  uStack_a8 = param_14;
  _objc_retain(param_15);
  uStack_a0 = param_16;
  uStack_98 = param_17;
  _objc_retain(param_18);
  uStack_88 = param_19;
  uStack_90 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_18);
  _objc_release(param_15);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10574982c; end: 105749997;  */

void FUN_10574982c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x78;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be6aa80(*(undefined8 *)(param_1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105749998; end: 105749ee3; -[SCAdProvider _onPerformerHandleAdFetchSuccessWithResponses:fetchRequest:targetingParameters:adsPreferences:adProductType:loggingContext:adRequestClientIds:engagement:adOrganicSignals:upcomingStoriesContext:adViewLocation:viewingSessionRecords:operaType:brandSafetyInventoryType:purgedAdResponses:startTimestampInMillis:skipCaching:treatAsConsumer:] */

void FUN_105749998(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15)

{
  undefined *puVar1;
  long lVar2;
  undefined8 in_stack_00000040;
  byte in_stack_00000048;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(in_stack_00000040);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105745f84;
  uStack_88 = 0x105745f94;
  uStack_80 = 0;
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(in_stack_00000040);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(in_stack_00000040);
  func_0x00010c0bc6a0(param_4);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar1);
  lVar2 = puStack_a0[5];
  func_0x00010bf529e0();
  if (((in_stack_00000048 & 1) == 0) && (lVar2 != 0)) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar1);
    func_0x00010bf263a0(*(undefined8 *)(param_1 + 8));
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar1);
  }
  func_0x00010be562e0(param_1);
  func_0x00010be562c0(param_1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar1);
  _objc_release(in_stack_00000040);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(in_stack_00000040);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(in_stack_00000040);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105749ee4; end: 10574a08b;  */

void FUN_105749ee4(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c107cc0();
  if (iVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(byte *)(param_1 + 0x40) ^ 1;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bf8be80();
  if (iVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f480();
    if ((int)uVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf1f480();
      uVar6 = (uint)uVar5;
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  _objc_retain(uVar3);
  uVar5 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar3;
  _objc_release(uVar5);
  if (((uVar8 | uVar6) & 1) == 0) {
    lVar7 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar7 != 0) {
      func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      uVar3 = *(undefined8 *)(lVar7 + 0x28);
      *(undefined8 *)(lVar7 + 0x28) = uVar5;
      _objc_release(uVar3);
    }
  }
  lVar7 = param_2;
  func_0x00010c261740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    lVar7 = param_2;
    func_0x00010c261740();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))();
    _objc_release(lVar7);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10574a08c; end: 10574a20f;  */

void FUN_10574a08c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b8ca8;
  func_0x00010c23c9e0();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  if (((ulong)puVar1 & 1) == 0) {
    _objc_retain(uVar6);
  }
  else {
    func_0x00010bd86420(uVar6,&PTR___NSConcreteGlobalBlock_1108aed68);
  }
  uVar2 = uVar6;
  func_0x0001057444d4();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar6);
  uVar4 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar6;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10574a210;
  puStack_50 = &UNK_1108af068;
  _objc_retain(uVar3);
  uStack_48 = uVar3;
  func_0x0001006372a4(uVar4,&puStack_68);
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar4;
  _objc_release(uVar5);
  lVar7 = param_2;
  func_0x00010c261740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    lVar7 = param_2;
    func_0x00010c261740();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))();
    _objc_release(lVar7);
  }
  _objc_release(uStack_48);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10574a210; end: 10574a273;  */

uint FUN_10574a210(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bef4c60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf4b900();
  _objc_release(param_2);
  _objc_release(uVar2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10574a274; end: 10574a72b;  */

void FUN_10574a274(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b8ca8;
  func_0x00010c23c9e0();
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  if (((ulong)puVar1 & 1) == 0) {
    _objc_retain(uVar11);
  }
  else {
    func_0x00010bd86420(uVar11,&PTR___NSConcreteGlobalBlock_1108aed68);
  }
  uVar2 = uVar11;
  func_0x0001057444d4();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_2;
  func_0x00010c23eb60();
  if ((int)lVar10 == 0) {
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    _objc_retain(uVar11);
    uVar4 = *(undefined8 *)(lVar10 + 0x28);
    *(undefined8 *)(lVar10 + 0x28) = uVar11;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10574a924;
    puStack_a8 = &UNK_1108af068;
    _objc_retain(uVar3);
    uStack_a0 = uVar3;
    func_0x0001006372a4(uVar4,&puStack_c0);
    lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar12 = *(undefined8 *)(lVar10 + 0x28);
    *(undefined8 *)(lVar10 + 0x28) = uVar4;
    _objc_release(uVar12);
    puVar1 = PTR_PTR_1126bdb80;
    _objc_alloc();
    puVar5 = puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21060();
    uVar6 = uVar3;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21060();
    uVar7 = uVar3;
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21060();
    func_0x00010c01b6c0(puVar1);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar12);
    _objc_release(uVar4);
    _objc_release(puVar5);
    lVar10 = param_2;
    func_0x00010c261740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar10 != 0) {
      lVar10 = param_2;
      func_0x00010c261740();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar10 + 0x10))();
      _objc_release(lVar10);
    }
    _objc_release(puVar1);
    uVar4 = uStack_a0;
  }
  else {
    uVar4 = uVar2;
    func_0x0001006372a4(uVar2,&PTR___NSConcreteGlobalBlock_1108af0e8);
    uVar3 = uVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar12 = uVar2;
    func_0x0001006372a4(uVar2,&PTR___NSConcreteGlobalBlock_1108af108);
    uVar4 = uVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    uVar12 = uVar2;
    func_0x0001006372a4(uVar2,&PTR___NSConcreteGlobalBlock_1108af128);
    uVar6 = uVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10574a858;
    puStack_80 = &UNK_1108af148;
    _objc_retain(uVar3);
    uStack_78 = uVar3;
    _objc_retain(uVar4);
    uStack_70 = uVar4;
    _objc_retain(uVar6);
    uStack_68 = uVar6;
    func_0x0001006372a4(uVar12,&puStack_98);
    lVar10 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar9 = *(undefined8 *)(lVar10 + 0x28);
    *(undefined8 *)(lVar10 + 0x28) = uVar12;
    _objc_release(uVar9);
    puVar1 = PTR_PTR_1126bdb80;
    _objc_alloc(PTR_PTR_1126bdb80);
    puVar5 = puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b6c0(puVar1);
    _objc_release(puVar5);
    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(*(undefined8 *)(param_1 + 0x30));
    func_0x00010c0a1ce0(uVar12);
    _objc_release(uVar12);
    lVar10 = param_2;
    func_0x00010c261740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar10 != 0) {
      lVar10 = param_2;
      func_0x00010c261740();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar10 + 0x10))();
      _objc_release(lVar10);
    }
    _objc_release(puVar1);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(uVar6);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10574a72c; end: 10574a857;  */

bool FUN_10574a72c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bef4c60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf21060();
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2 == 1;
}



/* Entry: 10574a858; end: 10574a923;  */

uint FUN_10574a858(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bef4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    func_0x00010bef4c60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf4b900();
    if ((uVar2 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bef4c60(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf4b900();
      uVar6 = (uint)uVar5 ^ 1;
      _objc_release(uVar4);
    }
    else {
      uVar6 = 0;
    }
    _objc_release(uVar3);
  }
  else {
    uVar6 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 10574a924; end: 10574a987;  */

uint FUN_10574a924(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bef4c60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf4b900();
  _objc_release(param_2);
  _objc_release(uVar2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10574a988; end: 10574ab57;  */

void FUN_10574a988(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    func_0x00010be28f80(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf529e0();
    func_0x00010bf529e0();
    func_0x00010c25e980(uVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c261740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = param_2;
      func_0x00010c261740();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))();
      _objc_release(lVar2);
    }
    uVar3 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf529e0();
    uVar4 = *(ulong *)(param_1 + 0x38);
    func_0x00010bf529e0();
    if (uVar3 < uVar4) {
      func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
      func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x38));
      func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c25e980(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2808e0();
      func_0x00010bec5da0(*(undefined8 *)(param_1 + 0xa0),uVar1);
      _objc_release(uVar5);
    }
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10574ab58; end: 10574aca7; -[SCAdProvider _handleErrorResponse:fetchRequest:adRequestClientIds:] */

void FUN_10574ab58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
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
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10574aca8;
  puStack_50 = &UNK_1108af1d8;
  _objc_retain(param_3);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x10574ad20;
  puStack_78 = &UNK_1108af208;
  uStack_48 = param_3;
  _objc_retain(param_3);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x10574ad98;
  puStack_a0 = &UNK_1108af238;
  uStack_70 = param_3;
  _objc_retain(param_3);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10574ae10;
  puStack_d0 = &UNK_1108af268;
  uStack_c8 = param_5;
  uStack_c0 = param_3;
  uStack_98 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c0bc6a0(param_4,param_2,&puStack_68,&puStack_90,&puStack_b8,&puStack_e8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_98);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10574aca8; end: 10574ae0f;  */

void FUN_10574aca8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf9ffa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bf9ffa0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10574ae10; end: 10574afcb;  */

void FUN_10574ae10(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar9 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar9);
  lVar2 = lVar9;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        puVar3 = PTR_PTR_1126b8de0;
        _objc_alloc();
        if (*(long *)(param_1 + 0x28) != 0) {
          func_0x00010bf98ec0();
        }
        func_0x00010c01b680();
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar9;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar9);
  lVar2 = param_2;
  func_0x00010bf9ffa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_2;
    func_0x00010bf9ffa0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    uVar8 = *(undefined8 *)(param_2 + 0x80);
    _objc_retain(puVar7);
    func_0x00010c11de00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067f60();
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29ea80();
    lVar10 = *(long *)(param_2 + 0x28);
    func_0x00010c269d40(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar10;
    func_0x00010c067f60();
    lVar11 = *(long *)(param_2 + 0x28);
    func_0x00010c269d40(lVar11);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar11;
    func_0x00010c067f60();
    func_0x00010c08b380((double)lVar2,(double)lVar9,uVar4);
    _objc_release(puVar7);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar8);
    return;
  }
  return;
}



/* Entry: 10574afcc; end: 10574b12f; -[SCAdProvider _adViewingSessionRecords:] */

void FUN_10574afcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar10 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(param_3);
  func_0x00010c11de00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c067f60();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c29ea80();
  lVar6 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c067f60();
  lVar8 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c067f60();
  func_0x00010c08b380((double)lVar7,(double)lVar9,uVar1,param_2,uVar3,uVar5,1,uVar10,param_3);
  _objc_release(param_3);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 10574b130; end: 10574b4db; -[SCAdProvider _adRequestClientIdsWithAdProductType:isPrefetchRequest:predefinedAdRequestClientId:unviewedEligibleStoryCount:] */

undefined *
FUN_10574b130(undefined *param_1,undefined8 param_2,long param_3,int param_4,undefined *param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010bf18ba0();
  _objc_release(puVar3);
  if (param_3 < 7) {
    if (param_3 == 2) {
      if (param_4 == 0) {
        func_0x00010be19e80(param_1,param_2,param_6);
      }
      else {
        puVar5 = *(undefined **)(param_1 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        func_0x00010bfbc2e0();
        _objc_retainAutoreleasedReturnValue();
        param_1 = puVar3;
        func_0x00010bef40c0();
        _objc_release(puVar3);
        _objc_release(puVar5);
      }
    }
    else {
      if (param_3 != 5) {
        if (param_3 != 6) goto LAB_10574b3b4;
        puVar3 = *(undefined **)(param_1 + 0x20);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        param_1 = puVar3;
        func_0x00010c24b760();
LAB_10574b3a4:
        FUN_105744454();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10574b440;
      }
      puVar3 = *(undefined **)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      param_1 = puVar3;
      func_0x00010bf39620();
      _objc_release(puVar3);
    }
    FUN_105744454();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 < 0x11) {
      if (param_3 == 7) {
        lVar2 = *(long *)(param_1 + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010c067f60();
        _objc_release(lVar2);
        if (lVar4 != 0) {
          puVar3 = *(undefined **)(param_1 + 0x28);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
LAB_10574b39c:
          param_1 = puVar3;
          func_0x00010c067f60();
          goto LAB_10574b3a4;
        }
      }
      else if (param_3 == 0xd) {
        lVar2 = *(long *)(param_1 + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar2;
        func_0x00010c067f60();
        _objc_release(lVar2);
        if (lVar4 != 0) {
          puVar3 = *(undefined **)(param_1 + 0x28);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10574b39c;
        }
      }
    }
    else if (param_3 == 0x11) {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c067f60();
      _objc_release(lVar2);
      if (lVar4 != 0) {
        puVar3 = *(undefined **)(param_1 + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10574b39c;
      }
    }
    else if (param_3 == 0x15) {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c067f60();
      _objc_release(lVar2);
      if (lVar4 != 0) {
        puVar3 = *(undefined **)(param_1 + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10574b39c;
      }
    }
LAB_10574b3b4:
    puVar3 = param_5;
    func_0x00010c08fa60();
    if (puVar3 != (undefined *)0x0) {
      param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_60 = param_5;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10574b474;
    }
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_68 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,1);
    _objc_retainAutoreleasedReturnValue();
LAB_10574b440:
    _objc_release(puVar3);
  }
LAB_10574b474:
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar5 = *(undefined **)(param_5 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010bfbc340();
    _objc_release(puVar5);
    if (0 < (long)puVar3) {
      uVar6 = *(undefined8 *)(param_5 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf1f480();
      _objc_release(uVar6);
      if ((-1 < (long)puVar1) && ((int)uVar7 != 0)) {
        uVar8 = *(ulong *)(param_5 + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c067f60();
        _objc_release(uVar8);
        puVar10 = (undefined *)(uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU));
        puVar5 = puVar1 + -(long)puVar10;
        if (puVar1 < puVar10 || puVar5 == (undefined *)0x0) {
          puVar5 = (undefined *)0x1;
        }
        if ((long)puVar5 <= (long)puVar3) {
          puVar3 = puVar5;
        }
      }
    }
    return puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return param_1;
}



/* Entry: 10574b4dc; end: 10574b5b7; -[SCAdProvider _fusMultiAuctionRequestSizeWithUnviewedEligibleStoryCount:] */

long FUN_10574b4dc(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfbc340();
  _objc_release(lVar1);
  if (0 < lVar2) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f480();
    _objc_release(uVar3);
    if ((-1 < (long)param_3) && ((int)uVar4 != 0)) {
      uVar5 = *(ulong *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c067f60();
      _objc_release(uVar5);
      uVar6 = uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU);
      lVar1 = param_3 - uVar6;
      if (param_3 < uVar6 || lVar1 == 0) {
        lVar1 = 1;
      }
      if (lVar1 <= lVar2) {
        lVar2 = lVar1;
      }
    }
  }
  return lVar2;
}



/* Entry: 10574b5b8; end: 10574b75f; -[SCAdProvider _logFusMultiAuctionStoryClampWithAdProductType:loggingContext:unviewedEligibleStoryCount:requestSize:isDedupeJoiner:] */

void FUN_10574b5b8(long param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_4);
  if ((param_3 == 2) && (uVar1 = param_4, func_0x00010c107cc0(), (uVar1 & 1) == 0)) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfbc340();
    _objc_release(lVar2);
    if (0 < lVar3) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010bf1f480();
      _objc_release(uVar4);
      if ((int)uVar8 != 0) {
        if (param_5 < 0) {
          uVar1 = param_4;
          func_0x00010bf8be80();
          ppuVar9 = &PTR____CFConstantStringClassReference_110dfb898;
          if ((int)uVar1 == 0) {
            ppuVar9 = &PTR____CFConstantStringClassReference_110dfb8b8;
          }
        }
        else {
          ppuVar9 = &PTR____CFConstantStringClassReference_110dfb858;
          if (lVar3 <= param_6) {
            ppuVar9 = &PTR____CFConstantStringClassReference_110dfb878;
          }
        }
        _objc_retain(ppuVar9);
        uVar8 = *(undefined8 *)(param_1 + 0x18);
        puVar5 = PTR_PTR_1126b8d98;
        func_0x00010bfbc360(PTR_PTR_1126b8d98);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c2ac460();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c2ac460();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfec2a0(uVar8,param_2,puVar7);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(ppuVar9);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10574b760; end: 10574ba0f; -[SCAdProvider _logMultiAuctionAdResponseMetrics:adRequestClientIds:adProductType:] */

void FUN_10574b760(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfed480(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108af2b8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b8d98;
  if (param_5 == 2) {
    func_0x00010bfbc320();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_5 - 5U < 2) {
    func_0x00010bf39600();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar8 = (undefined *)0x0;
    if (param_5 < 0xd) {
      if (param_5 == 7) {
        puVar8 = PTR_PTR_1126b8d98;
        func_0x00010c0f6be0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10574b874;
      }
      if (param_5 != 8) goto LAB_10574b874;
    }
    else if (param_5 != 0xd) {
      if (param_5 == 0x11) {
        puVar8 = PTR_PTR_1126b8d98;
        func_0x00010c0f6bc0();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_10574b874;
    }
    puVar8 = PTR_PTR_1126b8d98;
    func_0x00010c238900();
    _objc_retainAutoreleasedReturnValue();
  }
LAB_10574b874:
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_4;
  func_0x00010bf529e0(param_4);
  func_0x00010c0df840(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010c2ac460(puVar8,param_2,&PTR____CFConstantStringClassReference_110dfb238,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010c0df840(puVar8,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar8;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110dfb258,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = param_3;
  func_0x00010bf529e0(param_3);
  _objc_release(param_3);
  lVar7 = lVar1;
  func_0x00010bf529e0(lVar1);
  func_0x00010c0df840(puVar8,param_2,lVar6 - lVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar8;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dfb278,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar8);
  if (puVar5 != (undefined *)0x0) {
    func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18),param_2,puVar5);
  }
  _objc_release(puVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10574ba10; end: 10574ba2f;  */

bool FUN_10574ba10(undefined8 param_1,long param_2)

{
  func_0x00010bef60a0(param_2);
  return param_2 == 7;
}



/* Entry: 10574ba30; end: 10574be9f; -[SCAdProvider _logMultiAuctionAdResponseAdTypeSplitMetrics:adProductType:] */

void FUN_10574ba30(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
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
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  lVar11 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lVar11 != 0) {
    lVar12 = *plStack_1a0;
    do {
      lVar14 = 0;
      do {
        if (*plStack_1a0 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(undefined8 *)(lStack_1a8 + lVar14 * 8);
        func_0x00010bef60a0(uVar2);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010c0e00e0(puVar1,param_2,puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c067fc0();
        func_0x00010c0df780(puVar5,param_2,puVar4 + 1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1,param_2,puVar5,puVar4);
        _objc_release(puVar4);
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar13);
        lVar14 = lVar14 + 1;
      } while (lVar11 != lVar14);
      lVar11 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar11 != 0);
  }
  _objc_release(param_3);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(puVar1);
  puVar9 = &uStack_1f0;
  puVar10 = auStack_170;
  uVar2 = 0x10;
  puVar5 = puVar1;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar11 = *plStack_1e0;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_1e0 != lVar11) {
          _objc_enumerationMutation(puVar1);
        }
        uVar2 = *(undefined8 *)(lStack_1e8 + (long)puVar13 * 8);
        puVar3 = puVar1;
        func_0x00010c0e00e0(puVar1,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c067fc0();
        _objc_release(puVar3);
        if (0 < (long)puVar4) {
          puVar3 = PTR_PTR_1126b8d98;
          func_0x00010c0d1c00();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar3;
          func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110ddd2d8,puVar7
                             );
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(puVar7);
          _objc_release(puVar6);
          func_0x00010c25d700(uVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar8;
          func_0x00010c2ac460(puVar8,param_2,&PTR____CFConstantStringClassReference_110ddfd98,uVar2)
          ;
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_release(uVar2);
          func_0x00010bef9180(*(undefined8 *)(param_1 + 0x18),param_2,puVar6,puVar4);
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          lVar12 = param_3;
          func_0x00010bf529e0(param_3);
          func_0x00010c0df840(puVar3,param_2,lVar12);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar6;
          func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dfb258,puVar7
                             );
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar7);
          _objc_release(puVar3);
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar8;
          func_0x00010c2ac460(puVar8,param_2,&PTR____CFConstantStringClassReference_110f24998,puVar4
                             );
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_release(puVar4);
          _objc_release(puVar3);
          func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18),param_2,puVar6);
          _objc_release(puVar6);
        }
        puVar13 = puVar13 + 1;
      } while (puVar5 != puVar13);
      puVar9 = &uStack_1f0;
      puVar10 = auStack_170;
      uVar2 = 0x10;
      puVar5 = puVar1;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bf26e80(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110de3a38,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar13);
  _objc_release(puVar5);
  puVar1 = puVar3;
  if ((int)puVar9 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dfb2b8,puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar13);
    _objc_release(puVar5);
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dfb298,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar13);
  _objc_release(puVar5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dfb2d8,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_3 + 0x18),param_2,puVar13);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar13);
  return;
}



/* Entry: 10574bea0; end: 10574c103; -[SCAdProvider _logCacheHit:adProductType:isBackupCache:isMultiAdPod:] */

void FUN_10574bea0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010bf26e80(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110de3a38,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = puVar4;
  if ((int)param_3 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dfb2b8,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dfb298,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dfb2d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18),param_2,puVar3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10574c104; end: 10574c23b; -[SCAdProvider _logRequestTriggerType:adProductType:] */

void FUN_10574c104(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c15ef20(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110ddd2d8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110de7778,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x18),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10574c23c; end: 10574c30b; -[SCAdProvider cacheUnviewedAdResponse:] */

void FUN_10574c23c(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c26a3a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf263a0(uVar4);
    _objc_release(param_3);
    _objc_release(lVar2);
    _objc_release();
    param_1 = puVar1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf3a750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_clearAllCache_1125ac378)
  ;
  return;
}



/* Entry: 10574c30c; end: 10574c313; -[SCAdProvider tearDown] */

void FUN_10574c30c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3a750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_clearAllCache_1125ac378)
  ;
  return;
}



/* Entry: 10574c314; end: 10574c363; -[SCAdProvider cleanupAd:] */

void FUN_10574c314(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a240();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10574c364; end: 10574c46b; -[SCAdProvider .cxx_destruct] */

void FUN_10574c364(long param_1)

{
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



/* Entry: 10574c46c; end: 10574c533; -[SCAdProviderDeDupeKey initWithAdProductType:inventoryType:inventoryId:adPosition:inventorySubtype:] */

undefined1 *
FUN_10574c46c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ea0e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10574c534; end: 10574c61b; -[SCAdProviderDeDupeKey isEqual:] */

long FUN_10574c534(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    lVar3 = 1;
    goto LAB_10574c5f8;
  }
  puVar1 = PTR_PTR_1126bdbb0;
  _objc_opt_class(PTR_PTR_1126bdbb0);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = 0;
    goto LAB_10574c5f8;
  }
  _objc_retain(param_3);
  if (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8)) &&
      (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
     (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) {
    lVar3 = *(long *)(param_1 + 0x10);
    if ((lVar3 != 0 || *(long *)(param_3 + 0x10) != 0) && (func_0x00010c0720c0(), (int)lVar3 == 0))
    goto LAB_10574c5ec;
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0 && *(long *)(param_3 + 0x18) == 0) {
      lVar3 = 1;
    }
    else {
      func_0x00010c0720c0();
    }
  }
  else {
LAB_10574c5ec:
    lVar3 = 0;
  }
  _objc_release(param_3);
LAB_10574c5f8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10574c61c; end: 10574c69b; -[SCAdProviderDeDupeKey hash] */

undefined8 * FUN_10574c61c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain();
  return (undefined8 *)(undefined1 *)puVar3;
}



/* Entry: 10574c69c; end: 10574c6bf; -[SCAdProviderDeDupeKey copyWithZone:] */

undefined8 FUN_10574c69c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10574c6c0; end: 10574c703; -[SCAdProviderDeDupeKey description] */

void FUN_10574c6c0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dfb978);
  return;
}



/* Entry: 10574c704; end: 10574c70b; -[SCAdProviderDeDupeKey adProductType] */

undefined8 FUN_10574c704(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10574c70c; end: 10574c713; -[SCAdProviderDeDupeKey inventoryType] */

undefined8 FUN_10574c70c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10574c714; end: 10574c71b; -[SCAdProviderDeDupeKey inventoryId] */

undefined8 FUN_10574c714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10574c71c; end: 10574c723; -[SCAdProviderDeDupeKey adPosition] */

undefined8 FUN_10574c71c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10574c724; end: 10574c72b; -[SCAdProviderDeDupeKey inventorySubtype] */

undefined8 FUN_10574c724(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10574c72c; end: 10574c75b; -[SCAdProviderDeDupeKey .cxx_destruct] */

void FUN_10574c72c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10574c75c; end: 10574c7b7;  */

undefined8 FUN_10574c75c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  
  _objc_retain(param_4);
  func_0x00010c13b0c0(param_3);
  dVar2 = param_1;
  func_0x00010c13b0c0(param_4);
  _objc_release(param_4);
  uVar1 = 0xffffffffffffffff;
  if (dVar2 < param_1) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 10574c7b8; end: 10574c887;  */

undefined8 FUN_10574c7b8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bef4d80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bef4d80(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c13b0c0(param_3);
  dVar4 = param_1;
  _objc_release(param_3);
  func_0x00010c13b0c0(param_4);
  uVar1 = 0xffffffffffffffff;
  if ((uint)uVar3 != (uint)(param_1 <= dVar4)) {
    uVar1 = 1;
  }
  _objc_release(param_4);
  return uVar1;
}



/* Entry: 10574c888; end: 10574c8df;  */

void FUN_10574c888(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfde980();
  func_0x00010c0df840(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10574c8e0; end: 10574c93f;  */

void FUN_10574c8e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf64c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bdbc0,PTR_s_dataWithRootObject__1125b6cb0,param_1);
  return;
}



/* Entry: 10574c940; end: 10574c9e7;  */

void FUN_10574c940(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c2a9c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c15ed60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2b0320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c2b8460(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10574c9e8; end: 10574cb4f; -[SCAdResponseCache initWithGraphene:adConfigProvider:lifecycleTracker:] */

undefined1 *
FUN_10574c9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126ea0f0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640(*(undefined8 *)((long)puVar1 + 0x20));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640(*(undefined8 *)((long)puVar1 + 0x20));
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640(*(undefined8 *)((long)puVar1 + 0x20));
    _objc_release(puVar2);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10574cb50; end: 10574cdab; -[SCAdResponseCache cacheAdResponses:cacheURL:] */

long FUN_10574cb50(long param_1,long param_2,long param_3,long param_4)

{
  double dVar1;
  double dVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 != 0) && (lVar4 = param_3, func_0x00010bf529e0(), lVar4 != 0)) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
    _objc_retain(param_3);
    lVar4 = param_3;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        lVar13 = *(long *)(lVar12 * 8);
        uVar8 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        param_2 = lVar13;
        func_0x00010bef4240();
        uVar9 = uVar8;
        FUN_10574cdac();
        if ((int)uVar9 == 0) {
          _objc_release(uVar8);
LAB_10574cca0:
          func_0x00010bef60a0();
          puVar10 = puVar6;
          if (lVar13 != 7) {
            puVar10 = puVar5;
          }
        }
        else {
          func_0x00010bf604c0(PTR_PTR_1126afec0);
          dVar1 = (double)CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,CONCAT13(
                                                  uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14)))))
                                                  ));
          func_0x00010bf9c960(lVar13);
          dVar2 = (double)CONCAT17(uVar21,CONCAT16(uVar20,CONCAT15(uVar19,CONCAT14(uVar18,CONCAT13(
                                                  uVar17,CONCAT12(uVar16,CONCAT11(uVar15,uVar14)))))
                                                  ));
          _objc_release(uVar8);
          puVar10 = puVar7;
          if (dVar1 <= dVar2) goto LAB_10574cca0;
        }
        func_0x00010befa120(puVar10);
        lVar12 = lVar12 + 1;
      } while (lVar4 != lVar12);
      lVar4 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar10 = puVar7;
    func_0x00010bf529e0();
    if (puVar10 != (undefined *)0x0) {
      func_0x00010bdd7540(param_1);
    }
    puVar10 = puVar6;
    func_0x00010bf529e0();
    if (puVar10 != (undefined *)0x0) {
      func_0x00010bdd7540(param_1);
    }
    if (puVar5 != (undefined *)0x0) {
      func_0x00010bdd7540(param_1);
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain();
  if ((param_2 == 2) || (param_2 == 5)) {
    lVar11 = param_3;
    func_0x00010bf1f480(param_3);
  }
  else {
    lVar11 = 0;
  }
  _objc_release(param_3);
  return lVar11;
}



/* Entry: 10574cdac; end: 10574ce13;  */

undefined8 FUN_10574cdac(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  if ((param_2 == 2) || (param_2 == 5)) {
    uVar1 = param_1;
    func_0x00010bf1f480(param_1);
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10574ce14; end: 10574ce43; -[SCAdResponseCache getAdResponse:brandSafetyType:] */

void FUN_10574ce14(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010be1cc60();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10574ce44; end: 10574ce6f; -[SCAdResponseCache getAdResponse:] */

void FUN_10574ce44(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010be1cc40();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10574ce70; end: 10574ce9f; -[SCAdResponseCache peekAdResponse:brandSafetyType:] */

void FUN_10574ce70(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010be1cc60();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10574cea0; end: 10574cecb; -[SCAdResponseCache peekAdResponse:] */

void FUN_10574cea0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010be1cc40();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10574cecc; end: 10574cfbf; -[SCAdResponseCache clearExpiredCache:] */

void FUN_10574cecc(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != 0) {
    _objc_retain(param_3);
    puVar1 = param_1;
    func_0x00010bde03c0(param_1,param_2,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bde03c0(param_1,param_2,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde03c0(param_1,param_2,param_3,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar3 = puVar1;
    func_0x00010bf09f80(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10574cfc0; end: 10574d0b3; -[SCAdResponseCache clearCache:] */

void FUN_10574cfc0(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != 0) {
    _objc_retain(param_3);
    puVar1 = param_1;
    func_0x00010bddff80(param_1,param_2,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bddff80(param_1,param_2,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddff80(param_1,param_2,param_3,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar3 = puVar1;
    func_0x00010bf09f80(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10574d0b4; end: 10574d0bb; -[SCAdResponseCache clearAllCache] */

void FUN_10574d0b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10574d0bc; end: 10574d20b; -[SCAdResponseCache _firstAdResponseWithBrandSafetyType:fromCachedAdResponse:] */

void FUN_10574d0bc(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
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
  
  puVar10 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  puVar13 = param_4;
  _objc_retain(param_4);
  iVar11 = (int)puVar13;
  if (param_3 == (undefined *)0x0) {
    puVar13 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    in_b0 = 0;
    in_register_00005001 = 0;
    in_register_00005002 = 0;
    in_register_00005003 = 0;
    in_register_00005004 = 0;
    in_register_00005005 = 0;
    in_register_00005006 = 0;
    in_register_00005007 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(param_4);
    puVar12 = auStack_d8;
    puVar4 = param_4;
    func_0x00010bf52a60();
    iVar11 = (int)puVar12;
    if (puVar4 != (undefined *)0x0) {
      lVar14 = *plStack_110;
      do {
        puVar15 = (undefined *)0x0;
        puVar9 = (undefined *)puVar10;
        do {
          if (*plStack_110 != lVar14) {
            _objc_enumerationMutation(param_4);
          }
          puVar13 = *(undefined **)(lStack_118 + (long)puVar15 * 8);
          puVar5 = puVar13;
          func_0x00010bf21060();
          iVar11 = (int)puVar12;
          if (puVar5 == param_3) {
            _objc_retain(puVar13);
            _objc_release(param_4);
            goto LAB_10574d1c8;
          }
          puVar15 = puVar15 + 1;
        } while (puVar4 != puVar15);
        puVar12 = auStack_d8;
        puVar4 = param_4;
        puVar10 = &uStack_120;
        func_0x00010bf52a60();
        iVar11 = (int)puVar12;
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(param_4);
    puVar13 = (undefined *)0x0;
    puVar9 = (undefined *)puVar10;
  }
LAB_10574d1c8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar9);
  if (puVar9 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar6 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_4;
    func_0x00010be17be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = param_4;
    func_0x00010be17be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_4 + 0x20);
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_4;
    func_0x00010be17be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar6);
    if (((puVar4 == (undefined *)0x0) && (puVar15 == (undefined *)0x0)) &&
       (puVar5 == (undefined *)0x0)) {
      puVar13 = PTR_PTR_1126ae750;
      func_0x00010c0db140(PTR_PTR_1126ae750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar6 = *(undefined8 *)(param_4 + 0x10);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar5;
      func_0x00010bef4240(puVar5);
      uVar8 = uVar6;
      FUN_10574cdac(uVar6,puVar13);
      _objc_release(uVar6);
      if (((puVar4 == (undefined *)0x0) && ((int)uVar8 != 0)) && (puVar15 == (undefined *)0x0)) {
        if (iVar11 != 0) {
          func_0x00010be8b920(param_4);
        }
        uVar8 = 1;
        puVar7 = puVar5;
      }
      else {
        if (puVar4 == (undefined *)0x0) {
LAB_10574d41c:
          puVar7 = puVar15;
          if (iVar11 != 0) {
            func_0x00010be8b920(param_4);
          }
        }
        else {
          if (puVar15 != (undefined *)0x0) {
            func_0x00010c13b0c0(puVar4);
            dVar1 = (double)CONCAT17(in_register_00005007,
                                     CONCAT16(in_register_00005006,
                                              CONCAT15(in_register_00005005,
                                                       CONCAT14(in_register_00005004,
                                                                CONCAT13(in_register_00005003,
                                                                         CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0)))))));
            func_0x00010c13b0c0(puVar15);
            bVar2 = false;
            bVar3 = true;
            if (!NAN(dVar1) &&
                !NAN((double)CONCAT17(in_register_00005007,
                                      CONCAT16(in_register_00005006,
                                               CONCAT15(in_register_00005005,
                                                        CONCAT14(in_register_00005004,
                                                                 CONCAT13(in_register_00005003,
                                                                          CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))))) {
              bVar2 = dVar1 == (double)CONCAT17(in_register_00005007,
                                                CONCAT16(in_register_00005006,
                                                         CONCAT15(in_register_00005005,
                                                                  CONCAT14(in_register_00005004,
                                                                           CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                               );
              bVar3 = (double)CONCAT17(in_register_00005007,
                                       CONCAT16(in_register_00005006,
                                                CONCAT15(in_register_00005005,
                                                         CONCAT14(in_register_00005004,
                                                                  CONCAT13(in_register_00005003,
                                                                           CONCAT12(
                                                  in_register_00005002,
                                                  CONCAT11(in_register_00005001,in_b0))))))) <=
                      dVar1;
            }
            if (bVar3 && !bVar2) goto LAB_10574d41c;
          }
          puVar7 = puVar4;
          if (iVar11 != 0) {
            func_0x00010be8b920(param_4);
          }
        }
        uVar8 = 0;
      }
      puVar13 = PTR_PTR_1126ae750;
      FUN_10574c940(puVar7,uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2468a0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
    }
    _objc_release(puVar5);
    _objc_release(puVar15);
    _objc_release(puVar4);
  }
  _objc_release(puVar9);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 10574d20c; end: 10574d4df; -[SCAdResponseCache _getAdResponse:removeAdResponseOnHit:brandSafetyType:] */

void FUN_10574d20c(double param_1,long param_2,undefined8 param_3,long param_4,int param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  double dVar8;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar7 = (undefined *)0x0;
    goto LAB_10574d4b4;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010be17be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010be17be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010be17be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar1);
  if (((lVar2 == 0) && (lVar3 == 0)) && (lVar4 == 0)) {
    puVar7 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bef4240(lVar4);
    uVar6 = uVar1;
    FUN_10574cdac(uVar1,lVar5);
    _objc_release(uVar1);
    if (((lVar2 == 0) && ((int)uVar6 != 0)) && (lVar3 == 0)) {
      if (param_5 != 0) {
        func_0x00010be8b920(param_2);
      }
      uVar6 = 1;
      lVar5 = lVar4;
    }
    else {
      if (lVar2 == 0) {
LAB_10574d41c:
        lVar5 = lVar3;
        if (param_5 != 0) {
          func_0x00010be8b920(param_2);
        }
      }
      else {
        if (lVar3 != 0) {
          func_0x00010c13b0c0(lVar2);
          dVar8 = param_1;
          func_0x00010c13b0c0(lVar3);
          if (dVar8 < param_1) goto LAB_10574d41c;
        }
        lVar5 = lVar2;
        if (param_5 != 0) {
          func_0x00010be8b920(param_2);
        }
      }
      uVar6 = 0;
    }
    puVar7 = PTR_PTR_1126ae750;
    FUN_10574c940(lVar5,uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2468a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_10574d4b4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10574d4e0; end: 10574d78b; -[SCAdResponseCache _getAdResponse:removeAdResponseOnHit:] */

void FUN_10574d4e0(double param_1,long param_2,undefined8 param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  double dVar9;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar8 = (undefined *)0x0;
    goto LAB_10574d764;
  }
  func_0x00010bf3b2e0(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar4 = *(long *)(param_2 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar4);
  lVar5 = *(long *)(param_2 + 0x20);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar5);
  if (((lVar3 == 0) && (lVar1 == 0)) && (lVar4 == 0)) {
    puVar8 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bef4240(lVar4);
    uVar7 = uVar6;
    FUN_10574cdac(uVar6,lVar2);
    _objc_release(uVar6);
    if (((lVar3 == 0) && ((int)uVar7 != 0)) && (lVar1 == 0)) {
      if (param_5 != 0) {
        func_0x00010be8b900(param_2);
      }
      uVar7 = 1;
      lVar2 = lVar4;
    }
    else {
      if (lVar3 == 0) {
LAB_10574d6d4:
        lVar2 = lVar1;
        if (param_5 != 0) {
          func_0x00010be8b900(param_2);
        }
      }
      else {
        if (lVar1 != 0) {
          func_0x00010c13b0c0(lVar3);
          dVar9 = param_1;
          func_0x00010c13b0c0(lVar1);
          if (dVar9 < param_1) goto LAB_10574d6d4;
        }
        lVar2 = lVar3;
        if (param_5 != 0) {
          func_0x00010be8b900(param_2);
        }
      }
      uVar7 = 0;
    }
    puVar8 = PTR_PTR_1126ae750;
    FUN_10574c940(lVar2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2468a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(lVar3);
LAB_10574d764:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10574d78c; end: 10574dc57; -[SCAdResponseCache _cacheAdResponses:cacheURL:adResponseType:] */

void FUN_10574d78c(long param_1,undefined **param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar14 = *(long *)(param_1 + 0x20);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar4);
  if (lVar14 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar16);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  puVar15 = *(undefined **)(param_1 + 0x20);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar15;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  _objc_release(puVar4);
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(uVar16);
    _objc_release(puVar4);
  }
  puVar15 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010bf529e0(puVar5);
  func_0x00010c225ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar5);
  puVar4 = puVar5;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar14) {
        _objc_enumerationMutation(puVar5);
      }
      lVar20 = *(long *)((long)puVar13 * 8);
      lVar11 = lVar20;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar11 != 0) {
        func_0x00010bef2c20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar15);
        _objc_release(lVar20);
      }
      puVar13 = puVar13 + 1;
    } while (puVar4 != puVar13);
    puVar4 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_retain(param_3);
  puVar17 = auStack_170;
  puVar4 = param_3;
  func_0x00010bf52a60();
  lVar14 = lRam0000000000000000;
  puVar13 = param_3;
  if (puVar4 == (undefined *)0x0) {
LAB_10574dbc4:
    _objc_release(puVar13);
    puVar10 = puVar17;
  }
  else {
    puVar17 = (undefined1 *)0x0;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar14) {
          _objc_enumerationMutation(param_3);
        }
        lVar20 = *(long *)((long)puVar13 * 8);
        lVar11 = lVar20;
        func_0x00010bef2c20();
        _objc_retainAutoreleasedReturnValue();
        if (lVar11 != 0) {
          func_0x00010bef2c20();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar15;
          func_0x00010bf4b900();
          _objc_release(lVar20);
          _objc_release(lVar11);
          puVar17 = puVar17 + ((ulong)puVar18 & 1);
        }
        puVar13 = puVar13 + 1;
      } while (puVar4 != puVar13);
      puVar10 = auStack_170;
      puVar4 = param_3;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
    _objc_release(param_3);
    puVar4 = PTR_PTR_1126b8d98;
    if (0 < (long)puVar17) {
      ppuVar9 = &PTR____CFConstantStringClassReference_110dfba78;
      if (param_5 != 0) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110db8b78;
      }
      ppuVar1 = &PTR____CFConstantStringClassReference_110dfba38;
      if (param_5 != 2) {
        ppuVar1 = ppuVar9;
      }
      ppuVar9 = &PTR____CFConstantStringClassReference_110dfba58;
      if (param_5 != 1) {
        ppuVar9 = ppuVar1;
      }
      _objc_retain(ppuVar9);
      func_0x00010bf26e40();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar4;
      func_0x00010c2ac460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      _objc_release(puVar4);
      func_0x00010bfec320(*(undefined8 *)(param_1 + 8));
      goto LAB_10574dbc4;
    }
  }
  func_0x00010befa160(puVar5);
  ppuVar9 = &PTR___NSConcreteGlobalBlock_1108af318;
  if (param_5 != 2) {
    ppuVar9 = &PTR___NSConcreteGlobalBlock_1108af2f8;
  }
  func_0x00010c246ba0(puVar5);
  _objc_release(puVar15);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar9);
  lVar11 = *(long *)(param_3 + 0x20);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(puVar4);
  lVar11 = lVar14;
  func_0x00010bf529e0();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (lVar11 == 0) goto LAB_10574e160;
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  dVar22 = 0.0;
  _objc_retain(lVar14);
  lVar11 = lVar14;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar14);
      }
      if (puVar10 == (undefined1 *)0x2) {
        func_0x00010bf149a0();
      }
      else {
        func_0x00010bf9c960(*(undefined8 *)(lVar12 * 8));
      }
      dVar21 = dVar22;
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      dVar22 = dVar21 - dVar22;
      puVar4 = puVar15;
      if (dVar22 <= 0.0) {
        puVar4 = puVar5;
      }
      func_0x00010befa120(puVar4);
      lVar12 = lVar12 + 1;
    } while (lVar11 != lVar12);
    lVar11 = lVar14;
    func_0x00010bf52a60();
  }
  _objc_release(lVar14);
  puVar6 = *(undefined **)(param_3 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar15;
  func_0x00010bfb1920(puVar15);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar4;
  func_0x00010bef4240();
  puVar18 = puVar6;
  FUN_10574cdac(puVar6,puVar13);
  puVar13 = puVar15;
  if ((int)puVar18 == 0) {
LAB_10574dfc8:
    _objc_release(puVar4);
    _objc_release(puVar6);
    puVar15 = puVar13;
  }
  else {
    _objc_release(puVar4);
    _objc_release(puVar6);
    if (puVar10 < (undefined1 *)0x2) {
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      dVar22 = 0.0;
      _objc_retain(puVar15);
      puVar4 = puVar15;
      func_0x00010bf52a60();
      lVar11 = lRam0000000000000000;
      while (puVar4 != (undefined *)0x0) {
        puVar18 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar11) {
            _objc_enumerationMutation(puVar15);
          }
          uVar16 = *(undefined8 *)((long)puVar18 * 8);
          func_0x00010bf604c0(PTR_PTR_1126afec0);
          dVar21 = dVar22;
          func_0x00010bf149a0(uVar16);
          dVar22 = dVar22 - dVar21;
          puVar2 = puVar13;
          if (dVar22 <= 0.0) {
            puVar2 = puVar6;
          }
          func_0x00010befa120(puVar2);
          puVar18 = puVar18 + 1;
        } while (puVar4 != puVar18);
        puVar4 = puVar15;
        func_0x00010bf52a60();
      }
      _objc_release(puVar15);
      _objc_release(puVar15);
      puVar15 = *(undefined **)(param_3 + 0x20);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar15;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      if (puVar4 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        uVar16 = *(undefined8 *)(param_3 + 0x20);
        func_0x00010c0e00e0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640();
        _objc_release(uVar16);
      }
      func_0x00010befa160(puVar4);
      func_0x00010c246ba0(puVar4);
      goto LAB_10574dfc8;
    }
  }
  uVar16 = *(undefined8 *)(param_3 + 0x20);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar16);
  _objc_release(puVar4);
  uVar16 = 0;
  _objc_retain(puVar15);
  puVar4 = puVar15;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(puVar15);
      }
      uVar19 = *(undefined8 *)((long)puVar13 * 8);
      uVar7 = *(undefined8 *)(param_3 + 0x18);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13b0c0(uVar19);
      uVar8 = 1;
      uVar19 = uVar16;
      func_0x00010574c900(1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      func_0x00010c0a0660(uVar16,uVar19,uVar7);
      _objc_release(uVar8);
      _objc_release(uVar7);
      puVar13 = puVar13 + 1;
    } while (puVar4 != puVar13);
    puVar4 = puVar15;
    func_0x00010bf52a60();
  }
  _objc_release(puVar15);
  param_2 = &PTR___NSConcreteGlobalBlock_1108af370;
  puVar4 = puVar15;
  func_0x000100504554(puVar15,&PTR___NSConcreteGlobalBlock_1108af370);
  _objc_release(puVar15);
  _objc_release(puVar5);
LAB_10574e160:
  _objc_release(lVar14);
  _objc_release(ppuVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 10574dc58; end: 10574e1b3; -[SCAdResponseCache _clearExpiredCache:adResponseType:] */

void FUN_10574dc58(long param_1,undefined **param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar11 = *(long *)(param_1 + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(puVar3);
  lVar11 = lVar4;
  func_0x00010bf529e0();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (lVar11 == 0) goto LAB_10574e160;
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  dVar18 = 0.0;
  _objc_retain(lVar4);
  lVar11 = lVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar4);
      }
      if (param_4 == 2) {
        func_0x00010bf149a0();
      }
      else {
        func_0x00010bf9c960(*(undefined8 *)(lVar12 * 8));
      }
      dVar17 = dVar18;
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      dVar18 = dVar17 - dVar18;
      puVar3 = puVar7;
      if (dVar18 <= 0.0) {
        puVar3 = puVar5;
      }
      func_0x00010befa120(puVar3);
      lVar12 = lVar12 + 1;
    } while (lVar11 != lVar12);
    lVar11 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  puVar6 = *(undefined **)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x00010bfb1920(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar3;
  func_0x00010bef4240();
  puVar14 = puVar6;
  FUN_10574cdac(puVar6,puVar13);
  puVar13 = puVar7;
  if ((int)puVar14 == 0) {
LAB_10574dfc8:
    _objc_release(puVar3);
    _objc_release(puVar6);
    puVar7 = puVar13;
  }
  else {
    _objc_release(puVar3);
    _objc_release(puVar6);
    if (param_4 < 2) {
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      dVar18 = 0.0;
      _objc_retain(puVar7);
      puVar3 = puVar7;
      func_0x00010bf52a60();
      lVar11 = lRam0000000000000000;
      while (puVar3 != (undefined *)0x0) {
        puVar14 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar11) {
            _objc_enumerationMutation(puVar7);
          }
          uVar16 = *(undefined8 *)((long)puVar14 * 8);
          func_0x00010bf604c0(PTR_PTR_1126afec0);
          dVar17 = dVar18;
          func_0x00010bf149a0(uVar16);
          dVar18 = dVar18 - dVar17;
          puVar1 = puVar13;
          if (dVar18 <= 0.0) {
            puVar1 = puVar6;
          }
          func_0x00010befa120(puVar1);
          puVar14 = puVar14 + 1;
        } while (puVar3 != puVar14);
        puVar3 = puVar7;
        func_0x00010bf52a60();
      }
      _objc_release(puVar7);
      _objc_release(puVar7);
      puVar7 = *(undefined **)(param_1 + 0x20);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar7;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      if (puVar3 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        uVar16 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0e00e0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640();
        _objc_release(uVar16);
      }
      func_0x00010befa160(puVar3);
      func_0x00010c246ba0(puVar3);
      goto LAB_10574dfc8;
    }
  }
  uVar16 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar16);
  _objc_release(puVar3);
  uVar16 = 0;
  _objc_retain(puVar7);
  puVar3 = puVar7;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(puVar7);
      }
      uVar15 = *(undefined8 *)((long)puVar13 * 8);
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13b0c0(uVar15);
      uVar9 = 1;
      uVar15 = uVar16;
      func_0x00010574c900(1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf604c0(PTR_PTR_1126afec0);
      func_0x00010c0a0660(uVar16,uVar15,uVar8);
      _objc_release(uVar9);
      _objc_release(uVar8);
      puVar13 = puVar13 + 1;
    } while (puVar3 != puVar13);
    puVar3 = puVar7;
    func_0x00010bf52a60();
  }
  _objc_release(puVar7);
  param_2 = &PTR___NSConcreteGlobalBlock_1108af370;
  puVar3 = puVar7;
  func_0x000100504554(puVar7,&PTR___NSConcreteGlobalBlock_1108af370);
  _objc_release(puVar7);
  _objc_release(puVar5);
LAB_10574e160:
  _objc_release(lVar4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 10574e1b4; end: 10574e1bb;  */

void FUN_10574e1b4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_identifier_1125d7178);
  return;
}



/* Entry: 10574e1bc; end: 10574e423; -[SCAdResponseCache _clearCache:adResponseType:] */

void FUN_10574e1bc(long param_1,undefined8 param_2,long param_3,undefined1 *param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
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
  puVar6 = param_4;
  _objc_retain(param_3);
  puVar7 = *(undefined **)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar7,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar7;
  lVar11 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf529e0();
  puVar7 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    uVar8 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(puVar2);
    puVar6 = auStack_100;
    param_5 = 0x10;
    puVar1 = puVar2;
    func_0x00010bf52a60(puVar2,param_2,&uStack_140,puVar6);
    if (puVar1 != (undefined *)0x0) {
      lVar11 = *plStack_130;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_130 != lVar11) {
            _objc_enumerationMutation(puVar2);
          }
          uVar10 = *(undefined8 *)(lStack_138 + (long)puVar7 * 8);
          uVar3 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c13b0c0(uVar10);
          uVar4 = 3;
          uVar12 = uVar8;
          func_0x00010574c900(3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf604c0(PTR_PTR_1126afec0);
          func_0x00010c0a0660(uVar8,uVar12,uVar3,param_2,uVar10,0,uVar4);
          _objc_release(uVar4);
          _objc_release(uVar3);
          puVar7 = puVar7 + 1;
        } while (puVar1 != puVar7);
        puVar6 = auStack_100;
        param_5 = 0x10;
        puVar1 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_140,puVar6);
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar8,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_3;
    func_0x00010c12d3e0();
    _objc_release(uVar8);
    _objc_release(puVar1);
    _objc_retain(puVar2);
    puVar7 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar9 = *(long *)(param_3 + 0x20);
    _objc_retain(lVar11);
    func_0x00010c0df780(puVar1,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar9,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar11);
    _objc_release(lVar9);
    _objc_release(puVar1);
    lVar11 = lVar5;
    func_0x00010bf529e0();
    if (lVar11 != 0) {
      if (param_5 == 0) {
        func_0x00010c12d3c0(lVar5,param_2,0);
      }
      else {
        func_0x00010be17be0(param_3,param_2,param_5,lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360(lVar5,param_2,param_3);
        _objc_release(param_3);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10574e424; end: 10574e51f; -[SCAdResponseCache _removeCachedObjectOnHit:adResponseType:brandSafetyType:] */

void FUN_10574e424(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0df780(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(puVar1);
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    if (param_5 == 0) {
      func_0x00010c12d3c0(lVar2,param_2,0);
    }
    else {
      func_0x00010be17be0(param_1,param_2,param_5,lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(lVar2,param_2,param_1);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10574e520; end: 10574e5d3; -[SCAdResponseCache _removeCachedObjectOnHit:adResponseType:] */

void FUN_10574e520(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c0df780(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(puVar1);
  lVar3 = lVar2;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    func_0x00010c12d3c0(lVar2,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10574e5d4; end: 10574e5db; -[SCAdResponseCache cache] */

undefined8 FUN_10574e5d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10574e5dc; end: 10574e60b; -[SCAdResponseCache setCache:] */

void FUN_10574e5dc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10574e60c; end: 10574e653; -[SCAdResponseCache .cxx_destruct] */

void FUN_10574e60c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10574e654; end: 10574e7c3; -[SCAdResponseCacheMediator initWithPrimaryCache:secondaryCache:expirationTimeProvider:graphene:lifecycleTracker:adConfigProvider:] */

undefined1 *
FUN_10574e654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ea0f8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
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



/* Entry: 10574e7c4; end: 10574e91f; -[SCAdResponseCacheMediator initInHybridMode:persistentCache:graphene:lifecycleTracker:adConfigProvider:performer:] */

undefined8
FUN_10574e7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c039f00(param_1);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c0f7fc0(param_8);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10574e920; end: 10574e9ab;  */

void FUN_10574e920(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9a60();
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10574e9ac; end: 10574ec1b; -[SCAdResponseCacheMediator cacheAdResponses:targetingParameters:cacheReason:] */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010574eb84 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_10574e9ac(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  bool bVar1;
  double dVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  FUN_10574c888(param_4);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = &PTR___NSConcreteGlobalBlock_1108af3b0;
  uVar6 = param_3;
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_1108af3b0);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar7);
  func_0x00010bf26380(*(undefined8 *)(param_1 + 8));
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar7);
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar7);
  func_0x00010bf26380(*(undefined8 *)(param_1 + 0x10));
  puVar7 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar7);
  uVar15 = 0;
  uVar17 = 0;
  uVar19 = 0;
  uVar21 = 0;
  uVar23 = 0;
  uVar25 = 0;
  uVar27 = 0;
  uVar29 = 0;
  _objc_retain(uVar6);
  uVar8 = uVar6;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (uVar8 != 0) {
    uVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(uVar6);
      }
      uVar14 = *(undefined8 *)(uVar13 * 8);
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_5;
      func_0x00010574c920(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13b0c0(uVar14);
      func_0x00010c0a0660(CONCAT17(uVar30,CONCAT16(uVar28,CONCAT15(uVar26,CONCAT14(uVar24,CONCAT13(
                                                  uVar22,CONCAT12(uVar20,CONCAT11(uVar18,uVar16)))))
                                                  )),0xbff0000000000000,uVar9);
      uVar30 = uVar29;
      uVar28 = uVar27;
      uVar26 = uVar25;
      uVar24 = uVar23;
      uVar22 = uVar21;
      uVar20 = uVar19;
      uVar18 = uVar17;
      uVar16 = uVar15;
      uVar15 = uVar16;
      uVar17 = uVar18;
      uVar19 = uVar20;
      uVar21 = uVar22;
      uVar23 = uVar24;
      uVar25 = uVar26;
      uVar27 = uVar28;
      uVar29 = uVar30;
      _objc_release(uVar10);
      _objc_release(uVar9);
      uVar13 = uVar13 + 1;
    } while (uVar8 != uVar13);
    uVar8 = uVar6;
    func_0x00010bf52a60();
  }
  _objc_release(uVar6);
  _objc_release(uVar6);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010bf9c960(ppuVar11);
  dVar2 = (double)CONCAT17(uVar29,CONCAT16(uVar27,CONCAT15(uVar25,CONCAT14(uVar23,CONCAT13(uVar21,
                                                  CONCAT12(uVar19,CONCAT11(uVar17,uVar15)))))));
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  bVar4 = false;
  bVar5 = false;
  bVar1 = NAN((double)CONCAT17(uVar29,CONCAT16(uVar27,CONCAT15(uVar25,CONCAT14(uVar23,CONCAT13(
                                                  uVar21,CONCAT12(uVar19,CONCAT11(uVar17,uVar15)))))
                                              )));
  if (!NAN(dVar2) && !bVar1) {
    bVar4 = dVar2 < (double)CONCAT17(uVar29,CONCAT16(uVar27,CONCAT15(uVar25,CONCAT14(uVar23,CONCAT13
                                                  (uVar21,CONCAT12(uVar19,CONCAT11(uVar17,uVar15))))
                                                  )));
    bVar5 = dVar2 == (double)CONCAT17(uVar29,CONCAT16(uVar27,CONCAT15(uVar25,CONCAT14(uVar23,
                                                  CONCAT13(uVar21,CONCAT12(uVar19,CONCAT11(uVar17,
                                                  uVar15)))))));
  }
  return (ulong)(!bVar5 && bVar4 == (NAN(dVar2) || bVar1));
}



/* Entry: 10574ec1c; end: 10574ec53;  */

bool FUN_10574ec1c(double param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  
  func_0x00010bf9c960(param_3);
  dVar1 = param_1;
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  return dVar1 < param_1;
}



/* Entry: 10574ec54; end: 10574ec57; -[SCAdResponseCacheMediator getAdResponse:brandSafetyType:] */

void FUN_10574ec54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1cc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__getAdResponse_brandSafetyType__112564ca8);
  return;
}



/* Entry: 10574ec58; end: 10574ec5b; -[SCAdResponseCacheMediator peekAdResponse:brandSafetyType:] */

void FUN_10574ec58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be71110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__peekAdResponse_brandSafetyType__112579de0);
  return;
}



/* Entry: 10574ec5c; end: 10574edff; -[SCAdResponseCacheMediator getAdResponse:adProductType:] */

void FUN_10574ec5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10574c888();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b2e0(param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfc1fe0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10574ee00;
  puStack_78 = &UNK_1108af3d0;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(uVar1);
  uStack_70 = uVar1;
  uStack_60 = param_4;
  _objc_copyWeak(auStack_98,auStack_58);
  _objc_retain(uVar1);
  func_0x00010c0bf0a0(uVar2);
  uVar3 = uVar2;
  func_0x00010c0ec5e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10574ee00; end: 10574ee37;  */

void FUN_10574ee00(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be50fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10574ee38; end: 10574ee8b;  */

void FUN_10574ee38(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26ba0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10574ee8c; end: 10574efe3; -[SCAdResponseCacheMediator peekAdResponse:] */

void FUN_10574ee8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10574c888();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b2e0(param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f6fa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010c0bf0a0(uVar2);
  uVar3 = uVar2;
  func_0x00010c0ec5e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10574efe4; end: 10574f02f;  */

void FUN_10574efe4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bef4240(uVar3);
  func_0x00010be50fa0(lVar2,param_2,uVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10574f030; end: 10574f12f; -[SCAdResponseCacheMediator _handleCacheHit:adResponse:] */

void FUN_10574f030(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0df840(puVar1,param_3,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x38),param_3,puVar1,param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  func_0x00010bf6b240(*(undefined8 *)(param_2 + 0x10),param_3,param_5);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b0c0(param_5);
  uVar3 = 2;
  uVar4 = param_1;
  func_0x00010574c900(2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  func_0x00010c0a0660(param_1,uVar4,uVar2,param_3,param_5,0,uVar3);
  _objc_release(param_5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10574f130; end: 10574f313; -[SCAdResponseCacheMediator clearExpiredCache:] */

void FUN_10574f130(long param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar5 = &uStack_130;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = (undefined1 *)0x0;
  if (param_3 != 0) {
    FUN_10574c888();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar1);
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bf3b2e0(lVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar1);
    func_0x00010bf3b300(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    lVar4 = lVar2;
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38),param_2,
                          &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1678,param_3);
    }
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(lVar2);
    param_4 = auStack_d8;
    lVar4 = lVar2;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar6 = *plStack_120;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(lVar2);
          }
          uStack_e0 = *(undefined8 *)(lStack_128 + lVar7 * 8);
          ppuStack_e8 = &PTR____CFConstantStringClassReference_110dfbb78;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_e0,
                              &ppuStack_e8,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          lVar7 = lVar7 + 1;
        } while (lVar4 != lVar7);
        param_4 = auStack_d8;
        lVar4 = lVar2;
        puVar5 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar2);
    _objc_release(lVar2);
    _objc_release();
    param_1 = param_3;
    puVar3 = (undefined1 *)puVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (puVar3 == (undefined1 *)0x0) {
    lVar4 = 0;
  }
  else {
    FUN_10574c888(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 8);
    func_0x00010bf3aba0(lVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3aba0(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38),param_2,puVar1,puVar3);
      _objc_release(puVar1);
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10574f314; end: 10574f3d3; -[SCAdResponseCacheMediator clearCache:reason:] */

void FUN_10574f314(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_10574c888(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf3aba0(lVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3aba0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38),param_2,puVar3,param_3);
      _objc_release(puVar3);
    }
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10574f3d4; end: 10574f403; -[SCAdResponseCacheMediator clearAllCache] */

void FUN_10574f3d4(long param_1)

{
  func_0x00010bf3a740(*(undefined8 *)(param_1 + 8));
  func_0x00010bf3a740(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10574f404; end: 10574f617; -[SCAdResponseCacheMediator _getAdResponse:brandSafetyType:] */

void FUN_10574f404(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  uVar2 = param_3;
  FUN_10574c888();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b2e0(param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfc2020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10574f618;
  puStack_88 = &UNK_1108af400;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar2);
  uStack_80 = uVar2;
  _objc_retain(param_3);
  uStack_78 = param_3;
  _objc_copyWeak(auStack_a8,auStack_68);
  _objc_retain(uVar2);
  func_0x00010c0bf0a0(uVar3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar1);
  uVar4 = uVar3;
  func_0x00010c0ec5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10574f618; end: 10574f6b7;  */

void FUN_10574f618(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bef4240(uVar3);
  func_0x00010be50fa0(lVar2,param_2,uVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10574f6b8; end: 10574f817; -[SCAdResponseCacheMediator _peekAdResponse:brandSafetyType:] */

void FUN_10574f6b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10574c888();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3b2e0(param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f6fc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010c0bf0a0(uVar2);
  uVar3 = uVar2;
  func_0x00010c0ec5e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10574f818; end: 10574f863;  */

void FUN_10574f818(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bef4240(uVar3);
  func_0x00010be50fa0(lVar2,param_2,uVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10574f864; end: 10574fbcb; -[SCAdResponseCacheMediator _syncHybridCache] */

void FUN_10574f864(double param_1,long param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 unaff_x25;
  long unaff_x26;
  long lVar13;
  double dVar14;
  undefined1 auStack_1e8 [8];
  undefined ***pppuStack_1e0;
  undefined1 auStack_1d8 [8];
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  _objc_autoreleasePoolPush();
  lStack_178 = lVar7;
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar2);
  lVar3 = *(long *)(param_2 + 0x10);
  func_0x00010bf00ce0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar2);
  dVar14 = 0.0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  _objc_retain(lVar3);
  lVar7 = lVar3;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar11 = *plStack_160;
    do {
      lVar13 = 0;
      do {
        if (*plStack_160 != lVar11) {
          _objc_enumerationMutation(lVar3);
        }
        unaff_x25 = *(undefined8 *)(lStack_168 + lVar13 * 8);
        unaff_x26 = lVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010bf26380(*(undefined8 *)(param_2 + 8));
        _objc_release(unaff_x26);
        lVar13 = lVar13 + 1;
      } while (lVar7 != lVar13);
      lVar7 = lVar3;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar2);
  func_0x00010bf529e0(lVar3);
  _objc_release(lVar3);
  func_0x00010bf604c0(PTR_PTR_1126afec0);
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  puVar2 = PTR_PTR_1126b8d98;
  func_0x00010c0cc280(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(uVar12);
  _objc_release(puVar2);
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  puVar2 = PTR_PTR_1126b8d98;
  func_0x00010c0cc260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(uVar12);
  _objc_release(puVar2);
  ppuStack_130 = &PTR____CFConstantStringClassReference_110dfbbf8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_128 = &PTR____CFConstantStringClassReference_110dfbc18;
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_118 = puVar4;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_120 = &PTR____CFConstantStringClassReference_110dfbc38;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_110 = puVar5;
  func_0x00010c0df720(dVar14 - param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &puStack_118;
  pppuVar10 = &ppuStack_130;
  puStack_108 = puVar6;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_autoreleasePoolPop(lStack_178);
  lVar7 = *(long *)(param_2 + 0x10);
  func_0x00010bf3b340();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    ppuStack_1a0 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    pcStack_188 = FUN_10574fbcc;
    lStack_1d0 = unaff_x26;
    uStack_1c8 = unaff_x25;
    puStack_1c0 = puVar2;
    puStack_1b8 = puVar6;
    puStack_1b0 = puVar5;
    puStack_1a8 = puVar4;
    lStack_198 = param_2;
    puStack_190 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar9);
    puVar2 = PTR_PTR_1126b8d98;
    func_0x00010c0cc220(PTR_PTR_1126b8d98);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c2ac460(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    ppuVar8 = *(undefined ***)(lVar7 + 0x38);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)(lVar7 + 0x18) != 0) {
      _objc_initWeak(auStack_1d8,lVar7);
      uVar12 = *(undefined8 *)(lVar7 + 0x18);
      _objc_copyWeak(auStack_1e8,auStack_1d8);
      pppuStack_1e0 = pppuVar10;
      func_0x00010c26f800(uVar12);
      _objc_destroyWeak(auStack_1e8);
      _objc_destroyWeak(auStack_1d8);
    }
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1690;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar1 = ppuVar8;
    }
    ppuVar8 = ppuVar1;
    func_0x00010c25d700(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010c2ac460(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(ppuVar8);
    func_0x00010bfec2a0(*(undefined8 *)(lVar7 + 0x20));
    _objc_release(ppuVar1);
    _objc_release(puVar2);
    _objc_release(ppuVar9);
    return;
  }
  return;
}



/* Entry: 10574fbcc; end: 10574fdb7; -[SCAdResponseCacheMediator _logCacheMiss:adProductType:] */

void FUN_10574fbcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b8d98;
  func_0x00010c0cc220(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  ppuVar6 = *(undefined ***)(param_1 + 0x38);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x18) != 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_68,auStack_58);
    uStack_60 = param_4;
    func_0x00010c26f800(uVar7);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1690;
  if (ppuVar6 != (undefined **)0x0) {
    ppuVar1 = ppuVar6;
  }
  ppuVar6 = ppuVar1;
  func_0x00010c25d700(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010c2ac460(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(ppuVar6);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(ppuVar1);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10574fdb8; end: 10574fe0b;  */

void FUN_10574fdb8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be291c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10574fe0c; end: 10574fe63; -[SCAdResponseCacheMediator _handleExpiryPeriodOptional:adProductType:] */

void FUN_10574fe0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10574fe64;
  puStack_28 = &UNK_1108af460;
  uStack_20 = param_1;
  uStack_18 = param_4;
  func_0x00010c0bf0a0(param_3,param_2,0,&puStack_40);
  return;
}



/* Entry: 10574fe64; end: 10574ff53;  */

void FUN_10574fe64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_2);
  func_0x00010c0cc1c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf885a0(param_2);
  _objc_release(param_2);
  func_0x00010bef9180(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 10574ff54; end: 10574ff5b; -[SCAdResponseCacheMediator lastEvictionReason] */

undefined8 FUN_10574ff54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10574ff5c; end: 10574ffc7; -[SCAdResponseCacheMediator .cxx_destruct] */

void FUN_10574ff5c(long param_1)

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



/* Entry: 10574ffc8; end: 10575015b; -[SCAdResponsePersistentCache initWithDocObjectContext:graphene:performer:adConfigProvider:] */

undefined1 *
FUN_10574ffc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126ea100;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10575015c; end: 1057502b3; -[SCAdResponsePersistentCache cacheAdResponses:cacheURL:] */

void FUN_10575015c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1057502b4;
  puStack_68 = &UNK_1108af490;
  lStack_60 = param_1;
  _objc_retain(param_4);
  uVar1 = param_3;
  uStack_58 = param_4;
  func_0x000100504554(param_3,&puStack_80);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057502b4; end: 1057504af;  */

void FUN_1057502b4(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bef4240();
  if (lVar1 == 2) {
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f480();
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
LAB_10575036c:
      lVar1 = param_2;
      func_0x00010bef60a0();
      if (lVar1 != 7) {
        func_0x00010bf149a0(param_2);
        goto LAB_105750384;
      }
    }
  }
  else {
    lVar1 = param_2;
    func_0x00010bef4240();
    if (lVar1 == 5) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf1f480();
      _objc_release(uVar4);
      if ((int)uVar5 != 0) goto LAB_10575036c;
    }
  }
  func_0x00010bf9c960(param_2);
LAB_105750384:
  puVar6 = PTR_PTR_1126bdbc8;
  _objc_alloc(PTR_PTR_1126bdbc8);
  lVar1 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b0c0(param_2);
  lVar7 = param_2;
  FUN_10574c8e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_2;
  func_0x00010c15ed60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c107cc0();
  func_0x00010bff1ca0(puVar6);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}


