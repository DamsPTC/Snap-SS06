/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f81428; end: 104f814c3; -[SCMessagingPlaybackLensPrefetchPlugin initWithLensPrefetchingFactory:] */

undefined1 * FUN_104f81428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5490;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f814c4; end: 104f814cb;  */

void FUN_104f814c4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf56db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_createLensPrefetcher_1125b3510);
  return;
}



/* Entry: 104f814cc; end: 104f814d7; -[SCMessagingPlaybackLensPrefetchPlugin setPlaylistItemController:] */

void FUN_104f814cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 104f814d8; end: 104f8156b; -[SCMessagingPlaybackLensPrefetchPlugin registeredEventsForOperaSession] */

void FUN_104f814d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_30 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x00010be36bc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be77360(puVar1,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104f8156c; end: 104f815ab; -[SCMessagingPlaybackLensPrefetchPlugin operaViewDidSendEvent:page:params:] */

void FUN_104f8156c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be77360(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f815ac; end: 104f815e7; -[SCMessagingPlaybackLensPrefetchPlugin _prefetchLensesForPageId:] */

void FUN_104f815ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be4b0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be77340(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f815e8; end: 104f81753; -[SCMessagingPlaybackLensPrefetchPlugin _lensIdsForPageId:] */

void FUN_104f815e8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar2 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar2);
    puVar4 = (undefined *)(param_1 + 0x10);
    _objc_loadWeakRetained();
    puVar5 = puVar4;
    func_0x00010bf63e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b2c68;
    _objc_opt_class(PTR_PTR_1126b2c68);
    puVar6 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar4);
    puVar1 = puVar5;
    if (((ulong)puVar6 & 1) == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar5);
    puVar4 = PTR____NSArray0__struct_11034ab48;
    if (puVar1 != (undefined *)0x0) {
      func_0x00010c0cb140(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c0cb340();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      FUN_104f76c8c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar5);
      puVar5 = puVar6;
      func_0x00010c242120(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010bf07ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar6);
    }
    _objc_release(puVar1);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104f81754; end: 104f81803; -[SCMessagingPlaybackLensPrefetchPlugin _prefetchLensIds:] */

void FUN_104f81754(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b2e20;
    _objc_alloc(PTR_PTR_1126b2e20);
    func_0x00010c0241c0();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c1079a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f81804; end: 104f81807;  */

void FUN_104f81804(void)

{
  return;
}



/* Entry: 104f81808; end: 104f8183f; -[SCMessagingPlaybackLensPrefetchPlugin .cxx_destruct] */

void FUN_104f81808(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f81840; end: 104f81887; -[SCMessagingPlaybackMediaCarouselPlugin initWithMessageType:] */

void FUN_104f81840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e5498;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 104f81888; end: 104f81893; -[SCMessagingPlaybackMediaCarouselPlugin setPlaylistItemController:] */

void FUN_104f81888(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 104f81894; end: 104f81897; -[SCMessagingPlaybackMediaCarouselPlugin extraPropertiesProvider] */

void FUN_104f81894(void)

{
  return;
}



/* Entry: 104f81898; end: 104f819ef; -[SCMessagingPlaybackMediaCarouselPlugin operaViewDidSendEvent:page:params:] */

void FUN_104f81898(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_5);
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e496f8);
  if ((int)param_3 != 0) {
    lVar1 = param_5;
    func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110e49718);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c067fc0();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfcf800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
    if ((lVar4 != 0) && (lVar1 = lVar4, func_0x00010bf529e0(), lVar2 < lVar1)) {
      lVar1 = lVar4;
      func_0x00010c0dfd40(lVar4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        lVar1 = lVar4;
        func_0x00010c0dfd40(lVar4,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010be36bc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        param_1 = param_1 + 0x10;
        _objc_loadWeakRetained(param_1);
        func_0x00010c1ddd60();
        _objc_release(param_1);
        _objc_release(lVar2);
      }
    }
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104f819f0; end: 104f81a5f; -[SCMessagingPlaybackMediaCarouselPlugin registeredEventsForOperaSession] */

void FUN_104f819f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined ***pppuVar7;
  long in_x5;
  long lVar8;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar7 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110e496f8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pppuVar7);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (in_x5 != 0) {
    _objc_retain(in_x5);
    _objc_opt_new(puVar2);
    puVar3 = PTR_PTR_1126b2c68;
    _objc_retain(pppuVar7);
    _objc_opt_class(puVar3);
    puVar4 = (undefined1 *)pppuVar7;
    _objc_opt_isKindOfClass(pppuVar7,puVar3);
    puVar5 = (undefined1 *)pppuVar7;
    if (((ulong)puVar4 & 1) == 0) {
      puVar5 = (undefined1 *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(pppuVar7);
    puVar4 = puVar5;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    FUN_104f76fac();
    _objc_release(puVar5);
    if ((puVar6 == (undefined1 *)0xa) && (*(long *)(puVar1 + 8) == 0)) {
      _objc_opt_class();
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b2e30;
      func_0x00010bfd5460(PTR_PTR_1126b2e30);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar1);
    }
    puVar1 = puVar2;
    func_0x00010bf51e00(puVar2);
    (**(code **)(in_x5 + 0x10))(in_x5,puVar1,PTR____NSDictionary0__struct_11034ab58);
    _objc_release(in_x5);
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(pppuVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)((undefined1 *)((long)pppuVar7 + 0x10));
  return;
}



/* Entry: 104f81a60; end: 104f81c53; -[SCMessagingPlaybackMediaCarouselPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_104f81a60(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (param_6 != 0) {
    _objc_retain(param_6);
    _objc_opt_new(puVar1);
    puVar2 = PTR_PTR_1126b2c68;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar4 = param_3;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(param_3);
    uVar3 = uVar4;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_104f76fac();
    _objc_release(uVar4);
    if ((uVar5 == 10) && (*(long *)(param_1 + 8) == 0)) {
      _objc_opt_class();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126b2e30;
      func_0x00010bfd5460(PTR_PTR_1126b2e30);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar2);
    }
    puVar2 = puVar1;
    func_0x00010bf51e00(puVar1);
    (**(code **)(param_6 + 0x10))(param_6,puVar2,PTR____NSDictionary0__struct_11034ab58);
    _objc_release(param_6);
    _objc_release(puVar2);
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_3 + 0x10);
  return;
}



/* Entry: 104f81c54; end: 104f81c5b; -[SCMessagingPlaybackMediaCarouselPlugin .cxx_destruct] */

void FUN_104f81c54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 104f81c5c; end: 104f81d53; -[SCMessagingPlaybackMediaLoggerPlugin initWithConversationId:loggingSource:conversationActionHandler:contentDelivery:] */

undefined1 *
FUN_104f81c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e54a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b2e38;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f81d54; end: 104f81d5f; -[SCMessagingPlaybackMediaLoggerPlugin setPlaylistItemController:] */

void FUN_104f81d54(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 104f81d60; end: 104f81e8b; -[SCMessagingPlaybackMediaLoggerPlugin registeredEventsForOperaSession] */

void FUN_104f81d60(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined8 in_x4;
  undefined *puVar12;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  ppuVar10 = &puStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2338;
  puStack_70 = puVar2;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2330;
  puStack_68 = puVar3;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2e40;
  puStack_60 = puVar12;
  func_0x00010c24a1a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2e40;
  puStack_58 = puVar4;
  func_0x00010c24a180();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 5;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar12);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar10);
  _objc_retain(uVar11);
  _objc_retain(in_x4);
  uVar7 = uVar11;
  func_0x00010be36bc0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = (undefined1 *)ppuVar10;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)puVar8 == 0) {
    puVar3 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined1 *)ppuVar10;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)puVar8 != 0) {
      uVar9 = uVar11;
      FUN_104f82290();
      if ((int)uVar9 != 0) {
        func_0x00010be2c340(puVar2);
      }
      goto LAB_104f821a0;
    }
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010bf3df00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined1 *)ppuVar10;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)puVar8 == 0) {
      puVar3 = PTR_PTR_1126b2e40;
      func_0x00010c24a180(PTR_PTR_1126b2e40);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = (undefined1 *)ppuVar10;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      if ((int)puVar8 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = *(undefined **)(puVar2 + 0x30);
        *(undefined **)(puVar2 + 0x30) = puVar3;
        goto LAB_104f82104;
      }
      puVar3 = PTR_PTR_1126b2e40;
      func_0x00010c24a1a0(PTR_PTR_1126b2e40);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = (undefined1 *)ppuVar10;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      if ((int)puVar8 == 0) goto LAB_104f821a0;
    }
    func_0x00010be55be0(puVar2);
  }
  else {
    puVar3 = puVar2;
    func_0x00010be74d20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_retain(puVar12);
    puStack_f8 = &uStack_100;
    uStack_100 = 0;
    uStack_f0 = 0x2020000000;
    uStack_e8 = 0;
    puVar3 = puVar12;
    func_0x00010c0cb340(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bfe80();
    _objc_release(puVar3);
    uVar1 = *(undefined1 *)(puStack_f8 + 3);
    __Block_object_dispose(&uStack_100,8);
    _objc_release(puVar12);
    puVar2[0x38] = uVar1;
    _objc_retain(puVar12);
    uStack_100 = 0;
    uStack_f0 = 0x2020000000;
    uStack_e8 = 0;
    puVar3 = puVar12;
    puStack_f8 = &uStack_100;
    func_0x00010c0cb340(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bfe80();
    _objc_release(puVar3);
    uVar1 = *(undefined1 *)(puStack_f8 + 3);
    __Block_object_dispose(&uStack_100,8);
    _objc_release(puVar12);
    puVar2[0x39] = uVar1;
    _objc_retain(puVar12);
    uStack_100 = 0;
    uStack_f0 = 0x2020000000;
    uStack_e8 = 0;
    puVar3 = puVar12;
    puStack_f8 = &uStack_100;
    func_0x00010c0cb340(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bfe80();
    _objc_release(puVar3);
    uVar1 = *(undefined1 *)(puStack_f8 + 3);
    __Block_object_dispose(&uStack_100,8);
    _objc_release(puVar12);
    puVar2[0x3a] = uVar1;
    uVar9 = uVar11;
    FUN_104f82290();
    if ((uVar9 & 1) == 0) {
      func_0x00010be2c340(puVar2);
    }
LAB_104f82104:
    _objc_release(puVar12);
  }
LAB_104f821a0:
  _objc_release(uVar7);
  _objc_release(in_x4);
  _objc_release(uVar11);
  _objc_release(ppuVar10);
  return;
}



/* Entry: 104f81e8c; end: 104f8228f; -[SCMessagingPlaybackMediaLoggerPlugin operaViewDidSendEvent:page:params:] */

void FUN_104f81e8c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar3);
  if ((int)uVar4 == 0) {
    puVar3 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)uVar4 != 0) {
      uVar6 = param_4;
      FUN_104f82290();
      if ((int)uVar6 != 0) {
        func_0x00010be2c340(param_1);
      }
      goto LAB_104f821a0;
    }
    puVar3 = PTR_PTR_1126b2330;
    func_0x00010bf3df00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    if ((int)uVar4 == 0) {
      puVar3 = PTR_PTR_1126b2e40;
      func_0x00010c24a180(PTR_PTR_1126b2e40);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      if ((int)uVar4 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = *(long *)(param_1 + 0x30);
        *(undefined **)(param_1 + 0x30) = puVar3;
        goto LAB_104f82104;
      }
      puVar3 = PTR_PTR_1126b2e40;
      func_0x00010c24a1a0(PTR_PTR_1126b2e40);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      if ((int)uVar4 == 0) goto LAB_104f821a0;
    }
    func_0x00010be55be0(param_1);
  }
  else {
    lVar5 = param_1;
    func_0x00010be74d20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_retain(lVar7);
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    uStack_78 = 0;
    lVar5 = lVar7;
    func_0x00010c0cb340(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bfe80();
    _objc_release(lVar5);
    uVar1 = *(undefined1 *)(puStack_88 + 3);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(lVar7);
    *(undefined1 *)(param_1 + 0x38) = uVar1;
    _objc_retain(lVar7);
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    uStack_78 = 0;
    lVar5 = lVar7;
    puStack_88 = &uStack_90;
    func_0x00010c0cb340(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bfe80();
    _objc_release(lVar5);
    uVar1 = *(undefined1 *)(puStack_88 + 3);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(lVar7);
    *(undefined1 *)(param_1 + 0x39) = uVar1;
    _objc_retain(lVar7);
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    uStack_78 = 0;
    lVar5 = lVar7;
    puStack_88 = &uStack_90;
    func_0x00010c0cb340(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bfe80();
    _objc_release(lVar5);
    uVar1 = *(undefined1 *)(puStack_88 + 3);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(lVar7);
    *(undefined1 *)(param_1 + 0x3a) = uVar1;
    uVar6 = param_4;
    FUN_104f82290();
    if ((uVar6 & 1) == 0) {
      func_0x00010be2c340(param_1);
    }
LAB_104f82104:
    _objc_release(lVar7);
  }
LAB_104f821a0:
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f82290; end: 104f822e7;  */

bool FUN_104f82290(long param_1)

{
  long lVar1;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 104f822e8; end: 104f82367; -[SCMessagingPlaybackMediaLoggerPlugin _handleMediaViewStartForPageId:params:] */

void FUN_104f822e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar1;
  _objc_release(uVar2);
  func_0x00010be55ac0(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f82368; end: 104f8294b; -[SCMessagingPlaybackMediaLoggerPlugin _logMediaViewForPageId:params:] */

void FUN_104f82368(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be74d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    func_0x0001070a4fd8(*(undefined8 *)(param_1 + 0x40),
                        &PTR____CFConstantStringClassReference_110dbddb8,1);
  }
  else {
    puStack_c0 = &uStack_c8;
    uStack_c8 = 0;
    uStack_b8 = 0x3032000000;
    pcStack_b0 = FUN_104f8294c;
    uStack_a8 = 0x104f8295c;
    uStack_a0 = 0;
    puStack_f0 = &uStack_f8;
    uStack_f8 = 0;
    uStack_e8 = 0x3032000000;
    pcStack_e0 = FUN_104f8294c;
    uStack_d8 = 0x104f8295c;
    uStack_d0 = 0;
    puStack_120 = &uStack_128;
    uStack_128 = 0;
    uStack_118 = 0x3032000000;
    pcStack_110 = FUN_104f8294c;
    uStack_108 = 0x104f8295c;
    uStack_100 = 0;
    lVar3 = lVar2;
    func_0x00010c0cb340(lVar2);
    _objc_retainAutoreleasedReturnValue();
    dVar12 = 1.60807493534087e-314;
    func_0x00010c0bfe80();
    _objc_release(lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x000100c6f294();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001070a5794(*(undefined8 *)(param_1 + 0x40),puStack_120[5],uVar4,1);
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    dVar13 = dVar12;
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b2348;
    func_0x00010c0f62c0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    dVar14 = dVar13;
    _objc_release(uVar6);
    _objc_release(puVar5);
    func_0x00010c0720c0(puStack_120[5]);
    puVar5 = PTR_PTR_1126b2e48;
    func_0x00010bf4f180(PTR_PTR_1126b2e48);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_4;
    func_0x00010c0e00e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    uVar6 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126b2348;
    func_0x00010c0c2c20(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar9 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar5);
    uVar6 = uVar8;
    if ((uVar9 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar8);
    func_0x00010bf885a0(uVar6);
    dVar15 = dVar14;
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126b2348;
    func_0x00010c0cd980(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar9 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar5);
    uVar6 = uVar8;
    if ((uVar9 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar8);
    func_0x00010bf885a0(uVar6);
    dVar16 = dVar15;
    _objc_release(uVar6);
    puVar5 = PTR_PTR_1126b2348;
    func_0x00010c0fc300(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar9 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar5);
    uVar6 = uVar8;
    if ((uVar9 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar8);
    func_0x00010bf885a0(uVar6);
    _objc_release(uVar6);
    func_0x00010c243160();
    puVar5 = PTR_PTR_1126b2e58;
    _objc_alloc(PTR_PTR_1126b2e58);
    uVar10 = puStack_c0[5];
    func_0x00010c0c5180(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0622e0(dVar12 - dVar13,dVar14,dVar15,dVar16,puVar5);
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = lVar2;
    func_0x00010c0cb5a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x00010c0f4aa0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    FUN_104f7794c();
    func_0x00010c0aa1a0(uVar10);
    _objc_release(lVar11);
    _objc_release(lVar3);
    _objc_release(puVar5);
    _objc_release(uVar7);
    _objc_release(uVar4);
    __Block_object_dispose(&uStack_128,8);
    _objc_release(uStack_100);
    __Block_object_dispose(&uStack_f8,8);
    _objc_release(uStack_d0);
    __Block_object_dispose(&uStack_c8,8);
    _objc_release(uStack_a0);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f8294c; end: 104f82963;  */

void FUN_104f8294c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f82964; end: 104f82a03;  */

void FUN_104f82964(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010c1197a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined ***)(lVar3 + 0x28) = &PTR____CFConstantStringClassReference_110dbddd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f82a04; end: 104f82abb;  */

void FUN_104f82a04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110dbddf8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f82abc; end: 104f82b7f; -[SCMessagingPlaybackMediaLoggerPlugin _playbackItemFromPageId:] */

void FUN_104f82abc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  uVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b2c68;
  _objc_opt_class(PTR_PTR_1126b2c68);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar3 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104f82b80; end: 104f82d13; -[SCMessagingPlaybackMediaLoggerPlugin _logMediaConsumedForPageId:params:] */

void FUN_104f82b80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010be74d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_104f76c8c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c0c5180(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a39a0(uVar5,param_2,lVar3,1);
    _objc_release(lVar3);
    _objc_release(uVar5);
    lVar3 = lVar4;
    func_0x00010c0ef6e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar6 = lVar2;
      func_0x00010c0efbe0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0ec5e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar6);
      _objc_release(lVar3);
      if (lVar7 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c0efbe0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010c0ec5e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a39a0(uVar5,param_2,lVar6,1);
        _objc_release(lVar6);
        _objc_release(lVar3);
        _objc_release(uVar5);
      }
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f82d14; end: 104f82d6f; -[SCMessagingPlaybackMediaLoggerPlugin .cxx_destruct] */

void FUN_104f82d14(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f82d70; end: 104f82df7;  */

void FUN_104f82d70(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c100380();
  if (lVar1 == 2) {
    lVar1 = param_2;
    func_0x00010c14ba60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    *(bool *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar2 != 0;
    _objc_release(lVar1);
  }
  else {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f82df8; end: 104f82e57;  */

void FUN_104f82df8(long param_1,undefined1 param_2)

{
  func_0x00010c06b1c0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 104f82e58; end: 104f83017; -[SCMessagingPlaybackMessagePreparer initWithConversationId:userId:isGroupConversation:chatMessageActionHandler:messagingExperimentService:contentDelivery:] */

undefined1 *
FUN_104f82e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e54a8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x3c) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf90ea0();
    *(char *)((long)puVar1 + 0x38) = (char)uVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf7fa60();
    *(char *)((long)puVar1 + 0x39) = (char)uVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c07a3a0();
    *(char *)((long)puVar1 + 0x3a) = (char)uVar2;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar4;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f83018; end: 104f830e3; -[SCMessagingPlaybackMessagePreparer contentStateForMediaContent:] */

undefined8 FUN_104f83018(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b4c0(uVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = param_1;
    func_0x00010beb5360(param_1,param_2,param_3);
    if ((uVar3 & 1) == 0) {
      func_0x00010beb4c80(param_1,param_2,param_3);
      uVar4 = 2;
      if ((int)param_1 == 0) {
        uVar4 = 4;
      }
    }
    else {
      uVar4 = 2;
    }
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 104f830e4; end: 104f83127; -[SCMessagingPlaybackMessagePreparer loadContentForMessageId:mediaContent:completion:] */

void FUN_104f830e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010c09b920(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 8),param_3,
                      param_4,*(undefined1 *)(param_1 + 0x10),5,3,param_5);
  return;
}



/* Entry: 104f83128; end: 104f832ab; -[SCMessagingPlaybackMessagePreparer postProcessChatMedia:messageId:completion:] */

void FUN_104f83128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined1 *)(param_1 + 0x3a);
  lVar2 = param_1;
  func_0x00010beb5360();
  if ((int)lVar2 == 0) {
    func_0x00010be766c0(param_1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    uStack_50 = uVar1;
    func_0x00010c125f80(uVar3);
    _objc_release(uVar3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f832ac; end: 104f833a7;  */

void FUN_104f832ac(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdffd20(lVar1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010beb4c80();
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010be766c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x40) != '\x01') {
      return;
    }
    uVar2 = 0xc;
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000104f83394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),1,0,1,uVar2,3);
  return;
}



/* Entry: 104f833a8; end: 104f834eb; -[SCMessagingPlaybackMessagePreparer _postProcessChatMedia:messageId:completion:] */

void FUN_104f833a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c104be0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f834ec; end: 104f83537;  */

void FUN_104f834ec(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfeca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f83538; end: 104f83543; -[SCMessagingPlaybackMessagePreparer playbackMessageFromMediaContent:nativeMessage:contentState:] */

void FUN_104f83538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be74e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__playbackMessageFromMediaContent_11257ad30,param_3,param_4,0,param_5);
  return;
}



/* Entry: 104f83544; end: 104f835d3; -[SCMessagingPlaybackMessagePreparer playbackMessageFromMediaContent:nativeMessage:oldMessage:] */

void FUN_104f83544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010bf4d6e0(param_5);
  func_0x00010be74e40(param_1,param_2,param_3,param_4,param_5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104f835d4; end: 104f83afb; -[SCMessagingPlaybackMessagePreparer _playbackMessageFromMediaContent:nativeMessage:oldMessage:contentState:] */

void FUN_104f835d4(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 uStack_90;
  uint uStack_8c;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be6eb00(param_1,param_2,param_3,param_6,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_4;
  func_0x00010c0c5b00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_4;
  func_0x00010c07ea80();
  if ((int)puVar13 == 0) {
    puVar13 = param_4;
    func_0x00010c07fd80();
    if ((int)puVar13 != 0) {
      puVar13 = PTR_PTR_1126b2e78;
      _objc_alloc(PTR_PTR_1126b2e78);
      puVar12 = param_4;
      func_0x00010bf2c580(param_4);
      func_0x00010c029080(puVar13,param_2,param_3,puVar12);
      puVar3 = PTR_PTR_1126b2e70;
      func_0x00010c131dc0(PTR_PTR_1126b2e70,param_2,puVar13);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104f839d0;
    }
    if (((*(byte *)(param_1 + 0x39) & 1) == 0) &&
       (puVar13 = puVar2, func_0x00010c0ed1a0(), puVar13 == (undefined *)0x8)) {
      puVar12 = param_4;
      func_0x00010bf4df40(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar12;
      func_0x00010bf9e280();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c245400();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar4;
      func_0x000107d61ef0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar12);
    }
    else {
      puVar13 = (undefined *)0x0;
    }
    puVar12 = PTR_PTR_1126b2e80;
    _objc_alloc(PTR_PTR_1126b2e80);
    puVar3 = param_4;
    func_0x00010c27dd80(param_4);
    puVar4 = param_4;
    func_0x00010bf2c580(param_4);
    func_0x00010c0290a0(puVar12,param_2,param_3,puVar3,puVar4,puVar13);
    puVar3 = PTR_PTR_1126b2e70;
    func_0x00010bf36e00(PTR_PTR_1126b2e70,param_2,puVar12);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar13 = param_4;
    func_0x00010c083520();
    if ((int)puVar13 == 0) {
      uStack_8c = 0;
    }
    else {
      puVar13 = param_4;
      func_0x00010c07a2c0();
      uStack_8c = (uint)puVar13 ^ 1;
    }
    puVar13 = param_4;
    func_0x00010c0791e0(param_4,param_2,*(undefined8 *)(param_1 + 0x30));
    if (((ulong)puVar13 & 1) == 0) {
      puVar13 = param_4;
      func_0x00010c07d940(param_4,param_2,*(undefined8 *)(param_1 + 0x30));
      uStack_90 = SUB81(puVar13,0);
    }
    else {
      uStack_90 = 1;
    }
    puVar12 = param_4;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar12;
    func_0x00010c0bc380();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0bc340();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar12);
    puVar12 = param_4;
    func_0x00010c07e9e0();
    if ((int)puVar12 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR_PTR_1126b2e60;
      _objc_alloc();
      puVar3 = param_4;
      func_0x00010c241f20(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_4;
      func_0x00010c07ea00(param_4);
      func_0x00010c032580(puVar12,param_2,puVar3,puVar4);
      _objc_release(puVar3);
    }
    puVar4 = PTR_PTR_1126b2e68;
    _objc_alloc(PTR_PTR_1126b2e68);
    puVar3 = param_4;
    func_0x00010c243480();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c100380();
    puVar6 = param_4;
    func_0x00010bf2c580(param_4);
    puVar7 = param_4;
    func_0x00010c14ba60(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_4;
    func_0x00010c07ebc0(param_4);
    puVar9 = param_4;
    func_0x00010c1197a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_4;
    func_0x00010c270d80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_4;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0290c0(puVar4,param_2,param_3,puVar5,puVar6,puVar7,puVar8,uStack_8c,puVar9,puVar10,
                        puVar11,uStack_90,puVar13,puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b2e70;
    func_0x00010c244000(PTR_PTR_1126b2e70,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  _objc_release(puVar12);
LAB_104f839d0:
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126b2e88;
  _objc_alloc(PTR_PTR_1126b2e88);
  puVar12 = param_4;
  func_0x00010bf490e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_4;
  func_0x00010c0cb8c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_4;
  func_0x00010c0ecae0(param_4);
  puVar6 = param_4;
  func_0x00010c0cb9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_4;
  func_0x00010bf026e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_4;
  func_0x00010c07d080();
  puVar9 = puVar2;
  func_0x00010c0ed1a0();
  func_0x00010c02b760(puVar13,param_2,puVar12,puVar4,puVar5,puVar3,param_6,lVar1,puVar6,puVar7,
                      (ulong)puVar8 & 0xff,puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar12);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 104f83afc; end: 104f83cab; -[SCMessagingPlaybackMessagePreparer readyToDisplayPlaybackMessageFromPlaybackMessage:] */

void FUN_104f83afc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_104f76c8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be6eb00(param_1,param_2,uVar2,4,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2e88;
  _objc_alloc(PTR_PTR_1126b2e88);
  uVar1 = param_3;
  func_0x00010c0cb5a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0cb8c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0ecae0(param_3);
  uVar6 = param_3;
  func_0x00010c0cb340(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c15e3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf026e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c07d080();
  func_0x00010c0c5b00();
  _objc_release(param_3);
  func_0x00010c02b760(puVar3,param_2,uVar1,uVar4,uVar5,uVar6,4,param_1,uVar7,uVar8,(char)uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104f83cac; end: 104f83dbf; -[SCMessagingPlaybackMessagePreparer _overlayCacheKeyWithMedia:contentState:oldMessage:] */

void FUN_104f83cac(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar4 = param_5;
  func_0x00010c0efbe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 == (undefined *)0x0) {
    if (param_4 == 4) {
      uVar1 = param_3;
      func_0x000108543920(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf4b4c0();
      _objc_release(uVar2);
      puVar4 = PTR_PTR_1126ae750;
      if ((int)uVar3 == 0) {
        func_0x00010c0db140(PTR_PTR_1126ae750);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c2468a0(PTR_PTR_1126ae750,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(uVar1);
    }
    else {
      puVar4 = (undefined *)0x0;
    }
  }
  else {
    puVar4 = param_5;
    func_0x00010c0efbe0(param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104f83dc0; end: 104f83e63; -[SCMessagingPlaybackMessagePreparer _shouldRegisterMediaContent:] */

uint FUN_104f83dc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    _os_unfair_lock_lock(param_1 + 0x3c);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar1 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar3,param_2,uVar1);
    uVar2 = (uint)uVar3 ^ 1;
    _objc_release(uVar1);
    _os_unfair_lock_unlock(param_1 + 0x3c);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 104f83e64; end: 104f84003; -[SCMessagingPlaybackMessagePreparer _shouldPostProcessForMediaContent:] */

uint FUN_104f83e64(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0c6c20();
  if ((uVar1 < 0x16) && ((1L << (uVar1 & 0x3f) & 0x363f36U) != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c299f80(uVar2);
    uVar7 = (uint)uVar5 ^ 1;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0c6c20();
    uVar7 = 0;
    if ((0x13 < uVar1) || ((1L << (uVar1 & 0x3f) & 0x9c080U) == 0)) goto LAB_104f83ef8;
    uVar1 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 1;
    uVar2 = 1;
    func_0x0001085436d4(1,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 3;
    func_0x0001085436d4(3,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf4b4c0();
    if ((int)uVar5 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010bf4b4c0();
      uVar7 = (uint)uVar5 ^ 1;
      _objc_release(uVar6);
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_104f83ef8:
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 104f84004; end: 104f8406f; -[SCMessagingPlaybackMessagePreparer _didRegisterMediaId:success:] */

void FUN_104f84004(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  _objc_retain(param_3);
  if (param_4 != 0) {
    _os_unfair_lock_lock(param_1 + 0x3c);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
    _os_unfair_lock_unlock(param_1 + 0x3c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f84070; end: 104f84133; -[SCMessagingPlaybackMessagePreparer _didPostProcessMessageId:success:error:completion:] */

void FUN_104f84070(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong in_x3;
  undefined8 uVar3;
  ulong in_x4;
  undefined8 uVar4;
  long in_x5;
  code *pcVar5;
  
  _objc_retain(in_x5);
  iVar1 = 4;
  func_0x000107d6fcc4();
  if (iVar1 == 0) {
    if (((in_x3 & 1) == 0) && ((in_x4 & 0xfffffffffffffffe) != 6)) {
      if (in_x4 < 0xc) {
        uVar4 = *(undefined8 *)(&UNK_10dd8d858 + in_x4 * 8);
      }
      else {
        uVar4 = 5;
      }
      pcVar5 = *(code **)(in_x5 + 0x10);
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      pcVar5 = *(code **)(in_x5 + 0x10);
      uVar2 = 1;
      uVar3 = 1;
      uVar4 = 0;
    }
  }
  else {
    pcVar5 = *(code **)(in_x5 + 0x10);
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 6;
  }
  (*pcVar5)(in_x5,uVar2,0,uVar3,uVar4,3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(in_x5);
  return;
}



/* Entry: 104f84134; end: 104f84193; -[SCMessagingPlaybackMessagePreparer .cxx_destruct] */

void FUN_104f84134(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f84194; end: 104f842bf; -[SCMessagingPlaybackReportingPlugin initWithConversationId:conversationActionHandler:messagingExperimentService:source:delegate:circumstanceEngine:] */

undefined1 *
FUN_104f84194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e54b0;
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
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f842c0; end: 104f842cb; -[SCMessagingPlaybackReportingPlugin setPlaylistItemController:] */

void FUN_104f842c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 104f842cc; end: 104f84387; -[SCMessagingPlaybackReportingPlugin registeredEventsForOperaSession] */

void FUN_104f842cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c133ba0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d30;
  puStack_48 = puVar1;
  func_0x00010c153020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_48;
  uVar7 = 2;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  func_0x00010be36bc0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010c133ba0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar6;
  func_0x00010c0720c0(ppuVar6,param_2,puVar2);
  _objc_release(puVar2);
  if (((ulong)ppuVar4 & 1) == 0) {
    puVar2 = PTR_PTR_1126b2d30;
    func_0x00010c153020(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar6;
    func_0x00010c0720c0(ppuVar6,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)ppuVar5 == 0) goto LAB_104f84438;
  }
  func_0x00010be2f000(puVar1,param_2,uVar7,(uint)ppuVar4 ^ 1);
LAB_104f84438:
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 104f84388; end: 104f84457; -[SCMessagingPlaybackReportingPlugin operaViewDidSendEvent:page:params:] */

void FUN_104f84388(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c133ba0(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126b2d30;
    func_0x00010c153020(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar3 == 0) goto LAB_104f84438;
  }
  func_0x00010be2f000(param_1,param_2,param_4,(uint)uVar2 ^ 1);
LAB_104f84438:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f84458; end: 104f8463f; -[SCMessagingPlaybackReportingPlugin _handleReportSnapForPageId:blockFirst:] */

void FUN_104f84458(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b2c68;
  _objc_opt_class(PTR_PTR_1126b2c68);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar3 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = uVar4;
  func_0x00010c0cb5a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(uVar4);
  _objc_retain(uVar3);
  uStack_70 = param_4;
  func_0x00010bfaa1a0(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104f84640; end: 104f846db;  */

void FUN_104f84640(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb5a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be90380(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f846dc; end: 104f8517b; -[SCMessagingPlaybackReportingPlugin _reportSnapForServerMessageId:clientMessageId:serverConversationId:playbackOperaItem:playbackMessage:blockFirst:] */

void FUN_104f846dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  uVar5 = 0x104f8518c;
  pcStack_a0 = FUN_104f8517c;
  uStack_98 = 0x104f8518c;
  uStack_90 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0x3032000000;
  pcStack_d0 = FUN_104f8517c;
  uStack_c8 = 0x104f8518c;
  uStack_c0 = 0;
  uStack_108 = 0;
  uStack_f8 = 0x2020000000;
  uStack_f0 = 0;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_104f8517c;
  uStack_118 = 0x104f8518c;
  uStack_110 = 0;
  uStack_168 = 0;
  uStack_158 = 0x3032000000;
  pcStack_150 = FUN_104f8517c;
  uStack_148 = 0x104f8518c;
  uStack_140 = 0;
  uVar3 = param_6;
  puStack_160 = &uStack_168;
  puStack_130 = &uStack_138;
  puStack_100 = &uStack_108;
  puStack_e0 = &uStack_e8;
  puStack_b0 = &uStack_b8;
  func_0x00010c0f4aa0(param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_198 = 0xc2000000;
  pcStack_190 = FUN_104f85194;
  puStack_188 = &UNK_11085ebb0;
  puStack_178 = &uStack_b8;
  _objc_retain(param_7);
  puStack_1f0 = puVar14;
  uStack_1e8 = 0xc2000000;
  pcStack_1e0 = FUN_104f85244;
  puStack_1d8 = &UNK_11085f2a0;
  uStack_180 = param_7;
  puStack_170 = &uStack_e8;
  _objc_retain(param_7);
  uStack_1d0 = param_7;
  puStack_1c8 = &uStack_b8;
  puStack_1c0 = &uStack_e8;
  puStack_1b8 = &uStack_108;
  puStack_1b0 = &uStack_138;
  puStack_1a8 = &uStack_168;
  func_0x00010c0bf240(uVar3);
  _objc_release(uVar3);
  puStack_218 = &uStack_220;
  uStack_220 = 0;
  uStack_210 = 0x3032000000;
  pcStack_208 = FUN_104f8517c;
  uStack_200 = 0x104f8518c;
  uStack_1f8 = 0;
  puStack_238 = &uStack_240;
  uStack_240 = 0;
  uStack_230 = 0x2020000000;
  uStack_228 = 0;
  puStack_268 = &uStack_270;
  uStack_270 = 0;
  uStack_260 = 0x3032000000;
  pcStack_258 = FUN_104f8517c;
  uStack_250 = 0x104f8518c;
  uStack_248 = 0;
  puStack_298 = &uStack_2a0;
  uStack_2a0 = 0;
  uStack_290 = 0x3032000000;
  pcStack_288 = FUN_104f8517c;
  uStack_280 = 0x104f8518c;
  uStack_278 = 0;
  uVar3 = param_7;
  func_0x00010c0cb340(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_retain(param_7);
  func_0x00010c0bfe80(uVar3);
  _objc_release(uVar3);
  if (puStack_218[5] != 0) {
    puVar2 = PTR_PTR_1126b2bf8;
    _objc_opt_new(PTR_PTR_1126b2bf8);
    uVar3 = puStack_218[5];
    func_0x00010bf4cce0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1822a0(puVar2);
    _objc_release(uVar3);
    lVar4 = puStack_218[5];
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (lVar4 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      uVar5 = puStack_218[5];
      func_0x00010c086560(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf649c0(puVar14);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1b6b40(puVar2);
    if (lVar4 != 0) {
      _objc_release(puVar14);
      _objc_release(uVar5);
    }
    _objc_release(lVar4);
    lVar4 = puStack_218[5];
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (lVar4 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      uVar5 = puStack_218[5];
      func_0x00010c085300(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf649c0(puVar14);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1b64a0(puVar2);
    if (lVar4 != 0) {
      _objc_release(puVar14);
      _objc_release(uVar5);
    }
    _objc_release(lVar4);
    puVar14 = PTR_PTR_1126b2c00;
    _objc_alloc();
    func_0x00010c047ac0();
    func_0x00010c1c2d80();
    lVar6 = puStack_218[5];
    func_0x00010c242120();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    if (lVar4 == 0) {
      puStack_370 = (undefined *)0x0;
      puStack_368 = (undefined *)0x0;
    }
    else {
      uVar3 = puStack_218[5];
      func_0x00010c242120(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bf4e840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b2378;
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puStack_218[5];
      func_0x00010c086560(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf43580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      puVar10 = puVar9;
      func_0x00010c091b80();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bf62d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_368 = puVar11;
      func_0x00010bf62c60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar10);
      puVar10 = puVar9;
      func_0x00010c091b80();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bf62d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_370 = puVar11;
      func_0x00010bf62d20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(uVar5);
    }
    uVar12 = puStack_218[5];
    func_0x00010c23f480(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar12;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c2a2e80();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010c2a2ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar12);
    if (*(char *)(puStack_238 + 3) == '\x01') {
      puVar7 = PTR_PTR_1126b2e90;
      _objc_alloc(PTR_PTR_1126b2e90);
      func_0x00010c0b4ca0(param_3);
      func_0x00010c004c20(puVar7);
      func_0x00010c1eb6c0();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b1920(puVar7);
      _objc_release(puVar8);
      func_0x00010c1a4640(puVar7);
      func_0x00010c183d60(puVar7);
      puVar8 = PTR_PTR_1126b2e98;
      func_0x00010bf36fe0(PTR_PTR_1126b2e98);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
      func_0x00010bf1f440();
      if (iVar1 == 0) {
        puVar7 = PTR_PTR_1126b2ea0;
        _objc_alloc(PTR_PTR_1126b2ea0);
        func_0x00010c0b4ca0(param_3);
        uVar5 = param_7;
        func_0x00010c15e3a0(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        func_0x00010c005260(puVar7);
        _objc_release(uVar5);
        func_0x00010c16b3c0(puVar7);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21f9c0(puVar7);
        _objc_release(puVar8);
        func_0x00010c1eb680(puVar7);
        func_0x00010c1bb560(puVar7);
        func_0x00010c1bb540(puVar7);
        puVar8 = PTR_PTR_1126b2e98;
        func_0x00010c114320(PTR_PTR_1126b2e98);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar7 = PTR_PTR_1126b2e90;
        _objc_alloc(PTR_PTR_1126b2e90);
        func_0x00010c0b4ca0(param_3);
        func_0x00010c004c20(puVar7);
        func_0x00010c1eb6c0();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b1920(puVar7);
        _objc_release(puVar8);
        func_0x00010c1a4640(puVar7);
        puVar8 = PTR_PTR_1126b2e98;
        func_0x00010bf36fe0(PTR_PTR_1126b2e98);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    _objc_release(puVar7);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    if (param_8 == 0) {
      func_0x00010c133bc0(param_1);
    }
    else {
      func_0x00010bf1d260(param_1);
    }
    _objc_release(param_1);
    _objc_release(puVar8);
    _objc_release(uVar13);
    _objc_release(puStack_370);
    _objc_release(puStack_368);
    _objc_release(puVar14);
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_7);
  __Block_object_dispose(&uStack_2a0,8);
  _objc_release(uStack_278);
  __Block_object_dispose(&uStack_270,8);
  _objc_release(uStack_248);
  __Block_object_dispose(&uStack_240,8);
  __Block_object_dispose(&uStack_220,8);
  _objc_release(uStack_1f8);
  _objc_release(uStack_1d0);
  _objc_release(uStack_180);
  __Block_object_dispose(&uStack_168,8);
  _objc_release(uStack_140);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  __Block_object_dispose(&uStack_108,8);
  __Block_object_dispose(&uStack_e8,8);
  _objc_release(uStack_c0);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f8517c; end: 104f85193;  */

void FUN_104f8517c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f85194; end: 104f85243;  */

void FUN_104f85194(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  _objc_release(uVar1);
  uVar4 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar1 = uVar4;
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104f85244; end: 104f853bf;  */

void FUN_104f85244(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cb8c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x000108ef3c74(lVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  if (lVar1 == 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c0cb8c0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(lVar4);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar4;
  _objc_release(uVar2);
  if (lVar1 == 0) {
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar1;
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = 1;
  lVar1 = param_2;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar1;
  _objc_release(uVar2);
  lVar1 = param_2;
  func_0x00010bf508e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104f853c0; end: 104f8548f;  */

void FUN_104f853c0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  return;
}



/* Entry: 104f85490; end: 104f85547;  */

void FUN_104f85490(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf026e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010c0bc340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104f85548; end: 104f856df;  */

void FUN_104f85548(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  return;
}



/* Entry: 104f856e0; end: 104f856e3;  */

void FUN_104f856e0(void)

{
  return;
}



/* Entry: 104f856e4; end: 104f8573b; -[SCMessagingPlaybackReportingPlugin .cxx_destruct] */

void FUN_104f856e4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f8573c; end: 104f85817; -[SCMessagingPlaybackSavePlugin initWithConversationId:conversationActionHandler:playbackSource:notificationPool:] */

undefined1 *
FUN_104f8573c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e54b8;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f85818; end: 104f85823; -[SCMessagingPlaybackSavePlugin setPlaylistItemController:] */

void FUN_104f85818(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 104f85824; end: 104f858df; -[SCMessagingPlaybackSavePlugin registeredEventsForOperaSession] */

void FUN_104f85824(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c14a760();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2d30;
  puStack_48 = puVar1;
  func_0x00010c282460();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_48;
  uVar7 = 2;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  _objc_retain(uVar7);
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010c14a760(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar6;
  func_0x00010c0720c0(ppuVar6,param_2,puVar2);
  _objc_release(puVar2);
  uVar5 = uVar7;
  if ((int)ppuVar4 == 0) {
    puVar2 = PTR_PTR_1126b2d30;
    func_0x00010c282460(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar6;
    func_0x00010c0720c0(ppuVar6,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)ppuVar4 == 0) goto LAB_104f859c0;
    func_0x00010be36bc0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed1ec0(puVar1,param_2,uVar5);
  }
  else {
    func_0x00010be36bc0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be99360(puVar1,param_2,uVar5);
  }
  _objc_release(uVar5);
LAB_104f859c0:
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 104f858e0; end: 104f859df; -[SCMessagingPlaybackSavePlugin operaViewDidSendEvent:page:params:] */

void FUN_104f858e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010c14a760(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  uVar3 = param_4;
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b2d30;
    func_0x00010c282460(PTR_PTR_1126b2d30);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) goto LAB_104f859c0;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed1ec0(param_1,param_2,uVar3);
  }
  else {
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be99360(param_1,param_2,uVar3);
  }
  _objc_release(uVar3);
LAB_104f859c0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f859e0; end: 104f85b07; -[SCMessagingPlaybackSavePlugin _saveInChatForPageId:] */

void FUN_104f859e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be74e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = lVar2;
  func_0x00010c0cb5a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c14a9e0(uVar1);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104f85b08; end: 104f85bf7;  */

void FUN_104f85b08(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  puVar2 = PTR_PTR_1126afde0;
  if (param_2 == 0) {
    lVar1 = param_1;
    func_0x0001070b06f0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf54760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104f85bf8;
    puStack_48 = &UNK_110841fb0;
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    _objc_retain(puVar2);
    puStack_40 = puVar2;
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    _objc_release(puStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 104f85bf8; end: 104f85c2b;  */

void FUN_104f85bf8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be000a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f85c2c; end: 104f85ca3; -[SCMessagingPlaybackSavePlugin _didSaveInChatWithPresenter:] */

void FUN_104f85c2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126affa8;
  func_0x00010c22bc20(PTR_PTR_1126affa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8760();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f85ca4; end: 104f85d13; -[SCMessagingPlaybackSavePlugin _unsaveInChatForPageId:] */

void FUN_104f85ca4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1;
  func_0x00010be74e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar4 = lVar3;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2824a0(uVar2,param_2,uVar1,lVar4,*(undefined8 *)(param_1 + 0x18));
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104f85d14; end: 104f85df3; -[SCMessagingPlaybackSavePlugin _playbackMessageForPageId:] */

void FUN_104f85d14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  uVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b2c68;
  _objc_opt_class(PTR_PTR_1126b2c68);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar3 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c0cb140(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104f85df4; end: 104f85e37; -[SCMessagingPlaybackSavePlugin .cxx_destruct] */

void FUN_104f85df4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f85e38; end: 104f85edb; -[SCMessagingPlaybackScreenDetectorPlugin initWithConversationId:conversationActionHandler:] */

undefined1 *
FUN_104f85e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e54c0;
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



/* Entry: 104f85edc; end: 104f85ee7; -[SCMessagingPlaybackScreenDetectorPlugin setPlaylistItemController:] */

void FUN_104f85edc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 104f85ee8; end: 104f85ff3; -[SCMessagingPlaybackScreenDetectorPlugin registeredEventsForOperaSession] */

void FUN_104f85ee8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2338;
  puStack_68 = puVar1;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2ea8;
  puStack_60 = puVar2;
  func_0x00010c268600();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2ea8;
  puStack_58 = puVar3;
  func_0x00010c2685e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &puStack_68;
  uVar10 = 4;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  _objc_retain(uVar10);
  uVar6 = uVar10;
  func_0x00010be36bc0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar9;
  func_0x00010c0720c0(ppuVar9,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)ppuVar7 == 0) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar9;
    func_0x00010c0720c0(ppuVar9,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)ppuVar7 == 0) {
      puVar2 = PTR_PTR_1126b2ea8;
      func_0x00010c268600(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = ppuVar9;
      func_0x00010c0720c0(ppuVar9,param_2,puVar2);
      _objc_release(puVar2);
      if ((int)ppuVar7 == 0) {
        puVar2 = PTR_PTR_1126b2ea8;
        func_0x00010c2685e0(PTR_PTR_1126b2ea8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar9;
        func_0x00010c0720c0(ppuVar9,param_2,puVar2);
        _objc_release(puVar2);
        if ((int)ppuVar7 != 0) {
          func_0x00010be2f9c0(puVar1,param_2,uVar6);
        }
      }
      else {
        func_0x00010be2f9e0(puVar1,param_2,uVar6);
      }
      goto LAB_104f86148;
    }
    uVar8 = uVar10;
    FUN_104f86174();
    if ((int)uVar8 == 0) goto LAB_104f86148;
  }
  else {
    uVar8 = uVar10;
    FUN_104f86174();
    if ((uVar8 & 1) != 0) goto LAB_104f86148;
  }
  func_0x00010b738094();
LAB_104f86148:
  _objc_release(uVar6);
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar9);
  return;
}



/* Entry: 104f85ff4; end: 104f86173; -[SCMessagingPlaybackScreenDetectorPlugin operaViewDidSendEvent:page:params:] */

void FUN_104f85ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)uVar3 == 0) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c6900(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)uVar3 == 0) {
      puVar2 = PTR_PTR_1126b2ea8;
      func_0x00010c268600(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar2);
      _objc_release(puVar2);
      if ((int)uVar3 == 0) {
        puVar2 = PTR_PTR_1126b2ea8;
        func_0x00010c2685e0(PTR_PTR_1126b2ea8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar2);
        _objc_release(puVar2);
        if ((int)uVar3 != 0) {
          func_0x00010be2f9c0(param_1,param_2,uVar1);
        }
      }
      else {
        func_0x00010be2f9e0(param_1,param_2,uVar1);
      }
      goto LAB_104f86148;
    }
    uVar4 = param_4;
    FUN_104f86174();
    if ((int)uVar4 == 0) goto LAB_104f86148;
  }
  else {
    uVar4 = param_4;
    FUN_104f86174();
    if ((uVar4 & 1) != 0) goto LAB_104f86148;
  }
  func_0x00010b738094();
LAB_104f86148:
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f86174; end: 104f861cb;  */

bool FUN_104f86174(long param_1)

{
  long lVar1;
  
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 104f861cc; end: 104f8622f; -[SCMessagingPlaybackScreenDetectorPlugin _handleScreenshotForPageId:] */

void FUN_104f861cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1;
  func_0x00010be74e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar4 = lVar3;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf503e0(uVar2,param_2,uVar1,lVar4);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104f86230; end: 104f86293; -[SCMessagingPlaybackScreenDetectorPlugin _handleScreenRecordForPageId:] */

void FUN_104f86230(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1;
  func_0x00010be74e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar4 = lVar3;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf503c0(uVar2,param_2,uVar1,lVar4);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 104f86294; end: 104f86373; -[SCMessagingPlaybackScreenDetectorPlugin _playbackMessageForPageId:] */

void FUN_104f86294(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  uVar3 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b2c68;
  _objc_opt_class(PTR_PTR_1126b2c68);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar3 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  uVar4 = uVar3;
  func_0x00010c0cb140(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104f86374; end: 104f863ab; -[SCMessagingPlaybackScreenDetectorPlugin .cxx_destruct] */

void FUN_104f86374(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f863ac; end: 104f86477; -[SCMessagingPlaybackStoryLoggerPlugin initWithConversationId:conversationActionHandler:logger:] */

undefined1 *
FUN_104f863ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e54c8;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f86478; end: 104f86483; -[SCMessagingPlaybackStoryLoggerPlugin setPlaylistItemController:] */

void FUN_104f86478(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 104f86484; end: 104f8648f; -[SCMessagingPlaybackStoryLoggerPlugin setOperaControlling:] */

void FUN_104f86484(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 104f86490; end: 104f8654b; -[SCMessagingPlaybackStoryLoggerPlugin registeredEventsForOperaSession] */

void FUN_104f86490(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_48 = puVar1;
  func_0x00010bf3df20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = &puStack_48;
  uVar5 = 2;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar4);
  func_0x00010be36bc0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar4;
  func_0x00010c0720c0(ppuVar4,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)ppuVar3 == 0) {
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010bf3df20(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x00010c0720c0(ppuVar4,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)ppuVar3 == 0) goto LAB_104f86670;
    puVar2 = puVar1;
    func_0x00010be74d20(puVar1,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar6;
    func_0x00010c0cb5a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be55f40(puVar1,param_2,uVar5,puVar2);
    _objc_release(puVar2);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = *(undefined **)(puVar1 + 0x30);
    *(undefined **)(puVar1 + 0x30) = puVar2;
  }
  _objc_release(puVar6);
LAB_104f86670:
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 104f8654c; end: 104f8668f; -[SCMessagingPlaybackStoryLoggerPlugin operaViewDidSendEvent:page:params:] */

void FUN_104f8654c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9cc0(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b2330;
    func_0x00010bf3df20(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) goto LAB_104f86670;
    lVar3 = param_1;
    func_0x00010be74d20(param_1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar4;
    func_0x00010c0cb5a0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be55f40(param_1,param_2,param_4,lVar3);
    _objc_release(lVar3);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
  }
  _objc_release(lVar4);
LAB_104f86670:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f86690; end: 104f86753; -[SCMessagingPlaybackStoryLoggerPlugin _playbackItemFromPageId:] */

void FUN_104f86690(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  uVar3 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b2c68;
  _objc_opt_class(PTR_PTR_1126b2c68);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar3 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104f86754; end: 104f8692b; -[SCMessagingPlaybackStoryLoggerPlugin _logMessageViewIfNeededForMediaId:messageId:] */

void FUN_104f86754(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0688c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar5);
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_104f8692c;
    uStack_60 = 0x104f8693c;
    _objc_retain(param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    lStack_58 = param_1;
    _objc_retain(param_3);
    _objc_retain(lVar3);
    _objc_retain(uVar5);
    func_0x00010bfa89a0(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(lStack_58);
    _objc_release(uVar5);
    _objc_release(lVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f8692c; end: 104f86943;  */

void FUN_104f8692c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f86944; end: 104f86abb;  */

void FUN_104f86944(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  if ((param_2 != 0) && (uVar5 = param_2, func_0x00010c27dd80(), uVar5 == 0xc)) {
    uVar5 = 0;
    do {
      uVar1 = param_2;
      func_0x00010c0c72c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf529e0();
      _objc_release(uVar1);
      if (uVar2 <= uVar5) break;
      uVar1 = param_2;
      func_0x00010c0c72c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar1 = uVar2;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      uVar5 = uVar5 + 1;
      _objc_release(uVar2);
    } while ((int)uVar3 == 0);
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010bfdc820(param_2);
    uVar5 = param_2;
    func_0x00010c0c72c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0ae960(uVar7,uVar6);
    _objc_release(uVar5);
    lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = 0;
    _objc_release(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f86abc; end: 104f86bd7; -[SCMessagingPlaybackStoryLoggerPlugin logSCAChatDirectStoryViewForMemoriesStoryWithMediaId:viewTimeSec:lastInteraction:isLaguna:numberOfSnaps:numberOfSnapsViewed:conversationId:] */

void FUN_104f86abc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b2eb0;
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_alloc_init(puVar1);
  func_0x00010c1c8600();
  _objc_release(param_9);
  func_0x00010c2156e0((double)(long)(param_1 * 10.0) / 10.0,puVar1);
  func_0x00010c205ae0(puVar1,param_3,param_8);
  func_0x00010c203cc0(puVar1,param_3,param_7);
  func_0x00010c20ddc0(puVar1,param_3,2);
  uVar2 = 10;
  if (param_6 == 0) {
    uVar2 = 1;
  }
  func_0x00010c20de00(puVar1,param_3,uVar2);
  func_0x00010c27dd80(param_5);
  _objc_release(param_5);
  func_0x00010c198340(puVar1,param_3,0xffffffffffffffff);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f86bd8; end: 104f86c2f; -[SCMessagingPlaybackStoryLoggerPlugin .cxx_destruct] */

void FUN_104f86bd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f86c30; end: 104f86cc3;  */

void FUN_104f86c30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b23f8;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c064120(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfb1140(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c0087a0(puVar1,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f86cc4; end: 104f87243; -[SCMessagingPlaybackWorkflow initWithPlaybackScope:userId:operaSessionScopeExposer:operaSessionScopeServices:safetyReportScopeExposer:chatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:delegate:parentViewController:contentDelivery:contextOperaPluginProvider:musicContentRestrictionServices:conversationActionHandler:notificationPool:playbackGrapheneLogger:remixOperaPluginProvider:snapCountDownManager:circumstanceEngine:messagingExperimentService:cachedSummaryInfoProvider:imageDownloader:contextOperaChromeLayerPluginProvider:featureSettingsService:logger:deckTransitionEventObservable:lensPrefetchingFactory:snapProIdValidity:scwUserBlocker:] */

undefined8 *
FUN_104f86cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
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
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  puStack_70 = PTR_PTR_1126e54d0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,param_10);
    _objc_storeWeak(puVar1 + 9,param_11);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_29;
    _objc_release(uVar2);
    func_0x00010be030e0(puVar1);
  }
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



/* Entry: 104f87244; end: 104f87453; -[SCMessagingPlaybackWorkflow beginWorkflowWithConversationId:isLockedConversation:messageType:participants:featurePlugin:baseView:useCircularTransitions:featureMajorName:viewSource:viewLocation:loggingSource:playbackSource:snapTapLatencyBuilder:] */

void FUN_104f87244(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  char param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_16);
  _objc_initWeak(auStack_70,param_1);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_7;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c08b5a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = 4;
  if (param_9 != '\0') {
    uStack_a8 = 1;
  }
  _objc_copyWeak(auStack_b8,auStack_70);
  _objc_retain(param_3);
  uStack_b0 = param_5;
  uStack_78 = param_4;
  _objc_retain(param_8);
  uStack_a0 = param_11;
  uStack_98 = param_12;
  uStack_90 = param_13;
  uStack_88 = param_14;
  uStack_80 = param_15;
  uVar2 = param_16;
  _objc_retain(param_16);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_16);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_16);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 104f87454; end: 104f87573;  */

void FUN_104f87454(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      uVar3 = *(undefined8 *)(lVar1 + 0x90);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ac700();
      _objc_release(uVar3);
      param_1 = lVar1 + 0x40;
      _objc_loadWeakRetained(param_1);
      func_0x00010c1000a0();
    }
    else if ((*(long *)(param_1 + 0x40) == 1) &&
            (uVar2 = param_2, func_0x00010c077e40(), (uVar2 & 1) == 0)) {
      param_1 = param_1 + 0x38;
      _objc_loadWeakRetained(param_1);
      func_0x00010bdd3c00();
    }
    else {
      param_1 = param_1 + 0x38;
      _objc_loadWeakRetained(param_1);
      func_0x00010bdd32a0();
    }
    _objc_release(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f87574; end: 104f87b07; -[SCMessagingPlaybackWorkflow _beginSnapWorkflowWithConversationId:isLockedConversation:launchCandidates:baseView:transitionMode:featureMajorName:viewSource:viewLocation:loggingSource:playbackSource:snapTapLatencyBuilder:] */

void FUN_104f87574(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long in_stack_00000020;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(in_stack_00000020);
  _CACurrentMediaTime();
  lVar1 = in_stack_00000020;
  func_0x00010c2afd80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000020);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b23f0;
  _objc_alloc();
  func_0x00010c011ae0();
  uVar4 = param_5;
  FUN_104f86c30();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126aead8;
  _objc_alloc();
  lVar6 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c038f40();
  _objc_release(lVar6);
  puVar7 = PTR_PTR_1126b2400;
  _objc_alloc();
  func_0x00010c018aa0(0);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  func_0x00010befa120();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0;
  uVar19 = param_5;
  func_0x00010c064120(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar19;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar18;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010c0bfe80(uVar11);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar18);
  _objc_release(uVar19);
  puVar12 = PTR_PTR_1126b2eb8;
  _objc_alloc();
  func_0x00010c005000();
  func_0x00010befa120(puVar8);
  lVar13 = *(long *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar13;
  func_0x00010bf556a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  if (lVar6 != 0) {
    func_0x00010befa120(puVar8);
  }
  lVar14 = *(long *)(param_1 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar14;
  func_0x00010bf58300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  if (lVar13 != 0) {
    func_0x00010befa120(puVar8);
  }
  lVar15 = *(long *)(param_1 + 0x98);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar15;
  func_0x00010bf544a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  if (lVar14 != 0) {
    func_0x00010befa120(puVar8);
  }
  lVar16 = *(long *)(param_1 + 0xd0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar16;
  func_0x00010bf55660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar16);
  if (lVar15 != 0) {
    func_0x00010befa120(puVar8);
  }
  uVar19 = *(undefined8 *)(param_1 + 0x20);
  lVar16 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar16);
  puVar17 = puVar8;
  func_0x00010bf51e00();
  func_0x00010bf23920(uVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar17);
  _objc_release(lVar16);
  _CACurrentMediaTime();
  lVar16 = lVar1;
  func_0x00010c2b4ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar16 != 0) {
    uVar18 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar18);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar16;
    func_0x00010bf21f60(lVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0afde0(uVar18);
    _objc_release(lVar1);
    _objc_release(uVar18);
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18));
  _objc_release(uVar19);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar6);
  _objc_release(puVar12);
  _objc_release(param_5);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar16);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}


