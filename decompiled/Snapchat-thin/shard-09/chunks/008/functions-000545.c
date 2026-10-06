/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10721cfb8; end: 10721d123; -[SCGalleryStorySaver .cxx_destruct] */

void FUN_10721cfb8(long param_1)

{
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



/* Entry: 10721d124; end: 10721d133;  */

void FUN_10721d124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010721d130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10721d134; end: 10721d29f; +[SCRequestManager requestContextsForWatchingFriendStories:] */

void FUN_10721d134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126b19f8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb8bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &puStack_58;
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_58 = puVar2;
  puStack_50 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar8;
  func_0x00010c0d3c80();
  _objc_release(ppuVar8);
  uVar1 = param_3;
  func_0x00010c07dc00();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
    ppuVar8 = (undefined **)PTR_PTR_1126b19f8;
    func_0x00010bf81400();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar8;
    func_0x00010befa120(ppuVar4);
    _objc_release(ppuVar8);
  }
  ppuVar8 = ppuVar4;
  func_0x00010bf51e00();
  _objc_release(ppuVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    ppuVar4 = ppuVar7;
    _objc_retain();
    func_0x000109175a2c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar4;
    func_0x00010c2946e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar8);
    ppuVar8 = ppuVar6;
    func_0x00010c08fa60();
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      ppuVar8 = ppuVar7;
      func_0x00010b26c238(ppuVar7,ppuVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar6);
    _objc_release(ppuVar4);
    _objc_release(ppuVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar8);
  return;
}



/* Entry: 10721d2a0; end: 10721d36b; +[SCRequestManager requestContextForFriendStoriesInChatViewWithUsername:] */

void FUN_10721d2a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_3;
  _objc_retain();
  func_0x000109175a2c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar4);
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_3;
    func_0x00010b26c238(param_3,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10721d36c; end: 10721d4d3; +[SCRequestManager pageContextForFriendStories:] */

undefined1 *
FUN_10721d36c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar7 = param_3;
  func_0x00010c077600();
  if ((int)uVar7 == 0) {
    uVar7 = param_3;
    func_0x00010bfb91a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x000108f227f4();
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126b19f8;
    if ((int)uVar5 != 0) {
      func_0x00010c0cbb20();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126b19f8;
      puStack_50 = puVar3;
      func_0x00010bf81400();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &puStack_50;
      uVar7 = 2;
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_48 = puVar1;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      goto LAB_10721d490;
    }
    func_0x00010bf81400();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &puStack_58;
    puStack_58 = puVar3;
  }
  else {
    puVar3 = PTR_PTR_1126b19f8;
    func_0x00010c0b85e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &puStack_40;
    puStack_40 = puVar3;
  }
  uVar7 = 1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
LAB_10721d490:
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_c0;
  _objc_retain(ppuVar6);
  _objc_retain(uVar7);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_b8 = PTR_PTR_1126f8c78;
  uStack_c0 = param_3;
  _objc_msgSendSuper2(&uStack_c0,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar5 = *(undefined8 *)((long)puVar4 + 8);
    *(undefined8 *)((long)puVar4 + 8) = param_6;
    _objc_release(uVar5);
    _objc_retain(ppuVar6);
    uVar5 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined ***)((long)puVar4 + 0x18) = ppuVar6;
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar4 + 0x18);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar5);
    _objc_retain(uVar7);
    uVar5 = *(undefined8 *)((long)puVar4 + 0x20);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar7;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = *(undefined8 *)((long)puVar4 + 0x28);
    *(undefined8 *)((long)puVar4 + 0x28) = param_5;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar4 + 0x30);
    *(undefined **)((long)puVar4 + 0x30) = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar5 = *(undefined8 *)((long)puVar4 + 0x40);
    *(undefined **)((long)puVar4 + 0x40) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar1);
    puVar3 = PTR_PTR_1126d5350;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar4 + 0x48);
    *(undefined **)((long)puVar4 + 0x48) = puVar3;
    _objc_release(uVar5);
    func_0x00010bea9700(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar7);
  _objc_release(ppuVar6);
  return (undefined1 *)puVar4;
}



/* Entry: 10721d4d4; end: 10721d69b; -[SCStoriesCachedSummaryInfoProvider initWithStoriesDataCoordinator:myStoriesDataCoordinator:readReceiptCoordinator:currentUserId:] */

undefined1 *
FUN_10721d4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126f8c78;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126d5350;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
    func_0x00010bea9700(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10721d69c; end: 10721d69f; -[SCStoriesCachedSummaryInfoProvider warmUpCache] */

void FUN_10721d69c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee1750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSummaries_112595f78);
  return;
}



/* Entry: 10721d6a0; end: 10721d717; -[SCStoriesCachedSummaryInfoProvider storiesSummaryInfoForStoryId:] */

void FUN_10721d6a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 8));
    if ((int)lVar1 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c0e00e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      _objc_retain(uVar2);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10721d718; end: 10721d71f; -[SCStoriesCachedSummaryInfoProvider addListener:] */

void FUN_10721d718(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 10721d720; end: 10721d727; -[SCStoriesCachedSummaryInfoProvider removeListener:] */

void FUN_10721d720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10721d728; end: 10721d903; -[SCStoriesCachedSummaryInfoProvider _setUpMyStoryObservable] */

void FUN_10721d728(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  uVar2 = uVar1;
  func_0x00010c0d4c40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c258b20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0e0e80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar1 = uVar2;
  func_0x00010bf41860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10721d904; end: 10721ddcb;  */

void FUN_10721d904(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_2);
    _objc_retain(param_3);
    lVar2 = param_2;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    dVar17 = 0.0;
    lVar5 = param_2;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    if (lVar6 == 0) {
      dVar18 = 0.0;
      dVar20 = 0.0;
      dVar21 = 0.0;
    }
    else {
      dVar18 = 0.0;
      dVar20 = 0.0;
      dVar21 = 0.0;
      do {
        lVar15 = 0;
        dVar19 = dVar18;
        dVar22 = dVar21;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar5);
          }
          lVar16 = *(long *)(lVar15 * 8);
          lVar7 = lVar16;
          func_0x00010c26f2a0(lVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9c720();
          dVar21 = dVar17;
          _objc_release(lVar7);
          dVar18 = dVar17;
          if (dVar17 <= dVar19) {
            dVar18 = dVar19;
          }
          lVar7 = lVar16;
          func_0x00010c15f2e0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c08fa60();
          if (lVar8 == 0) {
            _objc_release(lVar7);
LAB_10721db04:
            func_0x00010c26f2a0(lVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2709c0();
            dVar17 = dVar21;
            _objc_release(lVar16);
            func_0x00010befa120(puVar4);
          }
          else {
            lVar8 = lVar16;
            func_0x00010c15f2e0(lVar16);
            _objc_retainAutoreleasedReturnValue();
            uVar9 = param_3;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar9;
            func_0x00010c29ea60();
            _objc_release(uVar9);
            _objc_release(lVar8);
            _objc_release(lVar7);
            if ((uVar10 & 1) == 0) goto LAB_10721db04;
            func_0x00010c26f2a0(lVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2709c0();
            dVar17 = dVar21;
            _objc_release(lVar16);
            dVar20 = dVar21;
            dVar21 = dVar22;
          }
          lVar15 = lVar15 + 1;
          dVar19 = dVar18;
          dVar22 = dVar21;
        } while (lVar6 != lVar15);
        lVar6 = lVar5;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
    }
    _objc_release(lVar5);
    puVar14 = puVar4;
    func_0x00010bf529e0();
    if (puVar14 != (undefined *)0x0) {
      puVar14 = PTR_PTR_1126d5358;
      _objc_alloc();
      puVar11 = puVar4;
      func_0x00010c0dfd20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f4380();
      _objc_release(puVar11);
      _objc_release(puVar14);
      puVar14 = PTR_PTR_1126d5358;
      _objc_alloc();
      func_0x00010c0f43a0();
      _objc_release(puVar14);
    }
    puVar14 = PTR_PTR_1126d5360;
    _objc_alloc();
    lVar2 = param_2;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c26d760(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    lVar15 = lVar3;
    func_0x00010c26f2a0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    func_0x00010c25b720(param_2);
    lVar7 = lVar3;
    func_0x00010c12fc80();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar7;
    func_0x00010bf30620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04dce0(dVar18,dVar17,dVar21,dVar20,0,puVar14);
    _objc_release(lVar16);
    _objc_release(lVar7);
    _objc_release(lVar15);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(param_3);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar12);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  func_0x00010be6a360();
  _objc_release(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10721ddcc; end: 10721de13;  */

void FUN_10721ddcc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a360();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10721de14; end: 10721dedf; -[SCStoriesCachedSummaryInfoProvider _updateSummaries] */

void FUN_10721de14(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c25b4c0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10721dee0; end: 10721df27;  */

void FUN_10721dee0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29bc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10721df28; end: 10721dfaf; -[SCStoriesCachedSummaryInfoProvider _handleFetchedSummaries:] */

void FUN_10721df28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10721dfb0;
  puStack_38 = &UNK_110841f80;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10721dfb0; end: 10721e04b;  */

void FUN_10721dfb0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10721e04c;
  puStack_48 = &UNK_110841f80;
  _objc_retain(uVar2);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_60);
  _objc_release(uStack_40);
  return;
}



/* Entry: 10721e04c; end: 10721e22f;  */

void FUN_10721e04c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
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
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf00d20();
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
        uVar9 = *(ulong *)(lStack_128 + lVar11 * 8);
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
        uVar4 = uVar9;
        func_0x00010c259cc0(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar8,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        uVar4 = uVar9;
        func_0x00010c071ae0(uVar9,param_2,uVar8);
        if ((uVar4 & 1) == 0) {
          func_0x00010c259cc0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1,param_2,uVar9);
          _objc_release(uVar9);
        }
        _objc_release(uVar8);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar2;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  _objc_retain(uVar8);
  uVar5 = *(undefined8 *)(lVar3 + 0x50);
  *(undefined8 *)(lVar3 + 0x50) = uVar8;
  _objc_release(uVar5);
  puVar6 = puVar1;
  func_0x00010bf529e0();
  if (puVar6 != (undefined *)0x0) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48);
    puVar6 = puVar1;
    func_0x00010bf51e00();
    puVar7 = (undefined8 *)puVar6;
    func_0x00010bf7e0a0(uVar8);
    _objc_release(puVar6);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  uVar8 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 **)(puVar1 + 0x10) = puVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 10721e230; end: 10721e25f; -[SCStoriesCachedSummaryInfoProvider _onMyStorySummary:] */

void FUN_10721e230(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10721e260; end: 10721e2bf; -[SCStoriesCachedSummaryInfoProvider didUpdateSummaryInfo:] */

void FUN_10721e260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  uStack_28 = 0x10721e2c4;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010c0bf7c0(param_3,param_2,&PTR___NSConcreteGlobalBlock_110993680,&puStack_38);
  return;
}



/* Entry: 10721e2c0; end: 10721e2cb;  */

void FUN_10721e2c0(void)

{
  return;
}



/* Entry: 10721e2cc; end: 10721e35b; -[SCStoriesCachedSummaryInfoProvider .cxx_destruct] */

void FUN_10721e2cc(long param_1)

{
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



/* Entry: 10721e35c; end: 10721e4d7; -[SCStoryMediaStateListenerAnnouncer description] */

void FUN_10721e35c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_10721e4d8(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10721e4d8; end: 10721e537;  */

void FUN_10721e4d8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 10721e538; end: 10721e7e3; -[SCStoryMediaStateListenerAnnouncer addListener:] */

undefined8 FUN_10721e538(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_1109936b0;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_10721e7e4(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_10721e924(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_10721e6ec:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_10721e70c;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10721e7e4(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10721e7e4(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_10721e924(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_10721e6ec;
    }
  }
  uVar9 = 1;
LAB_10721e70c:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 10721e7e4; end: 10721e923;  */

void FUN_10721e7e4(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_10721ecd8();
LAB_10721e920:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_10721e920;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 10721e924; end: 10721e96b;  */

void FUN_10721e924(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 10721e96c; end: 10721eb9b; -[SCStoryMediaStateListenerAnnouncer removeListener:] */

void FUN_10721e96c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_10721eb20;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10721e9d4;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10721e924(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10721eb20;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_10721e9d4:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_1109936b0;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_10721e7e4(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_10721e924(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10721eb20;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_10721eb20:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10721eb9c; end: 10721ec8f; -[SCStoryMediaStateListenerAnnouncer story:didChangeMediaState:] */

void FUN_10721eb9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  FUN_10721e4d8(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c258f60();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10721ec90; end: 10721ecb7; -[SCStoryMediaStateListenerAnnouncer .cxx_destruct] */

void FUN_10721ec90(long param_1)

{
  FUN_10721ecec(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10721ecb8; end: 10721ecd7; -[SCStoryMediaStateListenerAnnouncer .cxx_construct] */

void FUN_10721ecb8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 10721ecd8; end: 10721eceb;  */

undefined * FUN_10721ecd8(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 10721ecec; end: 10721ed43;  */

long FUN_10721ecec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10721ed44; end: 10721ed53;  */

void FUN_10721ed44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109936b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10721ed54; end: 10721ed73;  */

void FUN_10721ed54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109936b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10721ed74; end: 10721eddb;  */

void FUN_10721ed74(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10721eddc; end: 10721eddf;  */

void FUN_10721eddc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10721ede0; end: 10721eee7; -[SCLegacyStoriesPlaybackConfig initWithPlaybackConfig:recentUpdateFriendNameList:sortOrderId:viewLocationPosition:showViewersTable:enableCriticalModeWhenLoading:resetMuteOverrideOnDismiss:] */

undefined1 *
FUN_10721ede0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f8c80;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    *(undefined1 *)((long)puVar1 + 10) = param_9;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10721eee8; end: 10721ef0b; -[SCLegacyStoriesPlaybackConfig copyWithZone:] */

undefined8 FUN_10721eee8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10721ef0c; end: 10721efab; -[SCLegacyStoriesPlaybackConfig hash] */

undefined8 * FUN_10721ef0c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x28);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = (ulong)*(byte *)(param_1 + 9);
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  uStack_50 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10721f084:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10721f090;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28) &&
          (*(char *)((long)puVar3 + 8) == param_3[8])) &&
         (*(char *)((long)puVar3 + 9) == param_3[9])))) &&
       (*(char *)((long)puVar3 + 10) == param_3[10])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10721f090;
          }
          goto LAB_10721f084;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10721f090:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10721efac; end: 10721f0ab; -[SCLegacyStoriesPlaybackConfig isEqual:] */

long FUN_10721efac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10721f084:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10721f090;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) &&
       (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10721f090;
          }
          goto LAB_10721f084;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10721f090:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10721f0ac; end: 10721f0b3; -[SCLegacyStoriesPlaybackConfig playbackConfig] */

undefined8 FUN_10721f0ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10721f0b4; end: 10721f0bb; -[SCLegacyStoriesPlaybackConfig recentUpdateFriendNameList] */

undefined8 FUN_10721f0b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10721f0bc; end: 10721f0c3; -[SCLegacyStoriesPlaybackConfig sortOrderId] */

undefined8 FUN_10721f0bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10721f0c4; end: 10721f0cb; -[SCLegacyStoriesPlaybackConfig viewLocationPosition] */

undefined8 FUN_10721f0c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10721f0cc; end: 10721f0d3; -[SCLegacyStoriesPlaybackConfig showViewersTable] */

undefined1 FUN_10721f0cc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10721f0d4; end: 10721f0db; -[SCLegacyStoriesPlaybackConfig enableCriticalModeWhenLoading] */

undefined1 FUN_10721f0d4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10721f0dc; end: 10721f0e3; -[SCLegacyStoriesPlaybackConfig resetMuteOverrideOnDismiss] */

undefined1 FUN_10721f0dc(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10721f0e4; end: 10721f11f; -[SCLegacyStoriesPlaybackConfig .cxx_destruct] */

void FUN_10721f0e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10721f120; end: 10721f527;  */

void FUN_10721f120(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf9d2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf1d1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126d5340;
  func_0x00010bfbdaa0(PTR_PTR_1126d5340);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2b9ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010c2b5120(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2b3b00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2b84e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (lVar1 != 0) {
    func_0x00010c2b6d80(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar8 = param_4;
  func_0x00010bf529e0();
  if (lVar8 != 0) {
    func_0x00010c2b91c0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  puVar3 = puVar7;
  func_0x00010bf21f60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf09780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10721f528; end: 10721f56b; -[SCOperaPlaylistStoriesPlugin setFanPassUpsellPlaylistFiltering:] */

void FUN_10721f528(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0xe0,param_3);
  func_0x00010c19a380(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10721f56c; end: 1072201ab; -[SCOperaPlaylistStoriesPlugin initWithUserSession:storiesPlaybackDataProvider:storiesMediaCoordinator:startChatDelegate:navigationServices:loggingInfo:playbackConfig:operaPageProviderSubject:playSingleSnap:isJoinedPlayback:initialClientId:type:snapchatterFetcher:snapchatterPublicInfoFetcher:snapchattersSynchronousDataFetcher:discoverFeedEventsController:discoverFeedInteractionHistoryManager:spotlightShareSender:spotlightPlatformAnalyticsCreator:discoverFeedDataFetcher:deepLinkingUrlInterceptor:chromeInteractionSessionBuildingFunc:storiesSharingSessionBuildingFunc:customStoriesDataFetcher:conversationUpdatesPublisher:nativeSessionManager:shakePromptHelper:debugViewer:storiesCachedSummaryInfoProvider:storiesBlizzardLogger:storiesUsageLogger:readReceiptCoordinator:firstStoryId:impalaLegacyServices:lazyEventsController:circumstanceEngine:storiesConfigProvider:remixOperaPluginProvider:saveFriendStoryOperaPluginProvider:networkConnectivityMonitor:blizzardLogger:unlockableViewTracker:lazyDataFetcher:grapheneMetricsEmitter:grapheneRegistry:legacyStoriesTooltipsService:musicContentRestrictionServices:imageDownloader:snapchatterUserInfoProvider:safetyReportScopeExposer:externalLinkSendingService:playbackAssetRepository:crashLogger:subscriptionWorkflowStarter:boostCoordinator:offPlatformLinkGenerationService:bloopsReportScopeExposer:temporaryFileWriter:playbackMediaResolver:dsaExplainerScopeExposer:dsaExplainerScopeServices:notificationOSSettingsRetriever:offPlatformShareServices:isExpandedFeedController:pageType:profilesProvider:spotlightDataFetcher:p2pOptions:triggeringSection:contentRemovalDelegate:shareNotificationService:mapContentFilter:contentSharerUserId:contentSharerMischiefId:contentShareId:imageFetchingService:thumbnailCoordinator:searchSessionId:searchQueryId:searchActionId:searchResultRankingId:snapchatterObservableRepository:source:subscriptionsInfoProvider:creatorInfoProvider:] */

undefined8 *
FUN_10721f56c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined1 in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
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
  _objc_retain(in_stack_00000080);
  _objc_retain(in_stack_00000088);
  _objc_retain(in_stack_00000090);
  _objc_retain(in_stack_000000a0);
  _objc_retain(in_stack_000000a8);
  _objc_retain(in_stack_000000b0);
  _objc_retain(in_stack_000000b8);
  _objc_retain(in_stack_000000c0);
  _objc_retain(in_stack_000000c8);
  _objc_retain(in_stack_000000d0);
  _objc_retain(in_stack_000000d8);
  _objc_retain(in_stack_000000e0);
  _objc_retain(in_stack_000000e8);
  _objc_retain(in_stack_000000f0);
  _objc_retain(in_stack_000000f8);
  _objc_retain(in_stack_00000100);
  _objc_retain(in_stack_00000108);
  _objc_retain(in_stack_00000110);
  _objc_retain(in_stack_00000118);
  _objc_retain(in_stack_00000120);
  _objc_retain(in_stack_00000128);
  _objc_retain(in_stack_00000130);
  _objc_retain(in_stack_00000138);
  _objc_retain(in_stack_00000140);
  _objc_retain(in_stack_00000148);
  _objc_retain(in_stack_00000150);
  _objc_retain(in_stack_00000158);
  _objc_retain(in_stack_00000160);
  _objc_retain(in_stack_00000168);
  _objc_retain(in_stack_00000170);
  _objc_retain(in_stack_00000178);
  _objc_retain(in_stack_00000180);
  _objc_retain(in_stack_00000188);
  _objc_retain(in_stack_00000190);
  _objc_retain(in_stack_00000198);
  _objc_retain(in_stack_000001a0);
  _objc_retain(in_stack_000001a8);
  _objc_retain(in_stack_000001b0);
  _objc_retain(in_stack_000001b8);
  _objc_retain(in_stack_000001d0);
  _objc_retain(in_stack_000001d8);
  _objc_retain(in_stack_000001e0);
  _objc_retain(in_stack_000001f0);
  _objc_retain(in_stack_000001f8);
  _objc_retain(in_stack_00000200);
  _objc_retain(in_stack_00000208);
  _objc_retain(in_stack_00000210);
  _objc_retain(in_stack_00000218);
  _objc_retain(in_stack_00000220);
  _objc_retain(in_stack_00000228);
  _objc_retain(in_stack_00000230);
  _objc_retain(in_stack_00000240);
  _objc_retain(in_stack_00000248);
  _objc_retain(in_stack_00000250);
  _objc_retain(in_stack_00000260);
  _objc_retain(in_stack_00000268);
  puStack_70 = PTR_PTR_1126f8c88;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_9;
    func_0x00010c29f4a0();
    puVar1[7] = uVar2;
    _objc_retain(param_3);
    uVar2 = puVar1[4];
    puVar1[4] = param_3;
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c29d360();
    puVar1[9] = uVar2;
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_23;
    _objc_release(uVar2);
    _objc_retain(in_stack_000000e0);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = in_stack_000000e0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000000e8);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = in_stack_000000e8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000000f0);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = in_stack_000000f0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000000f8);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = in_stack_000000f8;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000130);
    uVar2 = puVar1[10];
    puVar1[10] = in_stack_00000130;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000170);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = in_stack_00000170;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000198);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = in_stack_00000198;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d5368;
    _objc_alloc();
    uVar2 = in_stack_000000e8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c062380();
    uVar5 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_retain(in_stack_00000108);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = in_stack_00000108;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d5370;
    _objc_alloc();
    func_0x00010c0271a0();
    puVar4 = PTR_PTR_1126d5378;
    _objc_alloc();
    func_0x00010c25a720(param_9);
    func_0x00010c29f280();
    func_0x00010c0fe880();
    func_0x00010c251fe0();
    func_0x00010c05e7c0();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000178);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = in_stack_00000178;
    _objc_release(uVar2);
    _objc_retain(in_stack_000001a0);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = in_stack_000001a0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000001a8);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = in_stack_000001a8;
    _objc_release(uVar2);
    uVar2 = in_stack_000000e0;
    func_0x000108f4ae38();
    *(char *)(puVar1 + 0x19) = (char)uVar2;
    *(undefined1 *)((long)puVar1 + 0xc9) = in_stack_000001c0;
    _objc_release(puVar3);
  }
  _objc_release(in_stack_00000268);
  _objc_release(in_stack_00000260);
  _objc_release(in_stack_00000250);
  _objc_release(in_stack_00000248);
  _objc_release(in_stack_00000240);
  _objc_release(in_stack_00000230);
  _objc_release(in_stack_00000228);
  _objc_release(in_stack_00000220);
  _objc_release(in_stack_00000218);
  _objc_release(in_stack_00000210);
  _objc_release(in_stack_00000208);
  _objc_release(in_stack_00000200);
  _objc_release(in_stack_000001f8);
  _objc_release(in_stack_000001f0);
  _objc_release(in_stack_000001e0);
  _objc_release(in_stack_000001d8);
  _objc_release(in_stack_000001d0);
  _objc_release(in_stack_000001b8);
  _objc_release(in_stack_000001b0);
  _objc_release(in_stack_000001a8);
  _objc_release(in_stack_000001a0);
  _objc_release(in_stack_00000198);
  _objc_release(in_stack_00000190);
  _objc_release(in_stack_00000188);
  _objc_release(in_stack_00000180);
  _objc_release(in_stack_00000178);
  _objc_release(in_stack_00000170);
  _objc_release(in_stack_00000168);
  _objc_release(in_stack_00000160);
  _objc_release(in_stack_00000158);
  _objc_release(in_stack_00000150);
  _objc_release(in_stack_00000148);
  _objc_release(in_stack_00000140);
  _objc_release(in_stack_00000138);
  _objc_release(in_stack_00000130);
  _objc_release(in_stack_00000128);
  _objc_release(in_stack_00000120);
  _objc_release(in_stack_00000118);
  _objc_release(in_stack_00000110);
  _objc_release(in_stack_00000108);
  _objc_release(in_stack_00000100);
  _objc_release(in_stack_000000f8);
  _objc_release(in_stack_000000f0);
  _objc_release(in_stack_000000e8);
  _objc_release(in_stack_000000e0);
  _objc_release(in_stack_000000d8);
  _objc_release(in_stack_000000d0);
  _objc_release(in_stack_000000c8);
  _objc_release(in_stack_000000c0);
  _objc_release(in_stack_000000b8);
  _objc_release(in_stack_000000b0);
  _objc_release(in_stack_000000a8);
  _objc_release(in_stack_000000a0);
  _objc_release(in_stack_00000090);
  _objc_release(in_stack_00000088);
  _objc_release(in_stack_00000080);
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



/* Entry: 1072201ac; end: 1072202eb; -[SCOperaPlaylistStoriesPlugin initWithUserSession:storiesPlaybackDataProvider:storiesMediaCoordinator:startChatDelegate:navigationServices:loggingInfo:playbackConfig:operaPageProviderSubject:playSingleSnap:initialClientId:type:snapchatterFetcher:snapchattersSynchronousDataFetcher:discoverFeedEventsController:discoverFeedInteractionHistoryManager:spotlightShareSender:spotlightPlatformAnalyticsCreator:discoverFeedDataFetcher:deepLinkingUrlInterceptor:chromeInteractionSessionBuildingFunc:storiesSharingSessionBuildingFunc:customStoriesDataFetcher:conversationUpdatesPublisher:nativeSessionManager:shakePromptHelper:debugViewer:storiesCachedSummaryInfoProvider:storiesBlizzardLogger:storiesUsageLogger:readReceiptCoordinator:firstStoryId:impalaLegacyServices:lazyEventsController:circumstanceEngine:remixOperaPluginProvider:saveFriendStoryOperaPluginProvider:networkConnectivityMonitor:blizzardLogger:unlockableViewTracker:lazyDataFetcher:grapheneMetricsEmitter:grapheneRegistry:legacyStoriesTooltipsService:musicContentRestrictionServices:imageDownloader:snapchatterUserInfoProvider:safetyReportScopeExposer:externalLinkSendingService:playbackAssetRepository:crashLogger:subscriptionWorkflowStarter:boostCoordinator:offPlatformLinkGenerationService:bloopsReportScopeExposer:temporaryFileWriter:playbackMediaResolver:notificationOSSettingsRetriever:offPlatformShareServices:shareNotificationService:mapContentFilter:imageFetchingService:thumbnailCoordinator:snapchatterObservableRepository:subscriptionsInfoProvider:creatorInfoProvider:] */

void FUN_1072201ac(void)

{
  func_0x00010c05e8a0();
  return;
}



/* Entry: 1072202ec; end: 1072202f3; -[SCOperaPlaylistStoriesPlugin reloadGroupWithID:] */

void FUN_1072202ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_reloadGroupWithID__112627d60);
  return;
}



/* Entry: 1072202f4; end: 1072202fb; -[SCOperaPlaylistStoriesPlugin refreshGroupFromLocalCacheWithID:dataProvider:] */

void FUN_1072202f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1252f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_refreshGroupFromLocalCacheWithID_112626ed8);
  return;
}



/* Entry: 1072202fc; end: 10722045f; -[SCOperaPlaylistStoriesPlugin appendGroups:] */

void FUN_1072202fc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 unaff_x22;
  long lVar5;
  long lVar6;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf06be0(*(undefined8 *)(param_1 + 8));
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        func_0x00010c259cc0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(uVar3);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  puVar4 = puVar1;
  func_0x00010c28a5c0(param_1);
  _objc_release(puVar1);
  lVar2 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_107220460;
  uStack_150 = unaff_x22;
  puStack_148 = puVar1;
  lStack_140 = param_1;
  lStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_initWeak(auStack_158,lVar2);
  lVar2 = lVar2 + 0x28;
  _objc_loadWeakRetained(lVar2);
  lVar5 = lVar2;
  func_0x00010c29d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_160,auStack_158);
  _objc_retain(puVar4);
  func_0x00010c134d60(lVar5);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_158);
  _objc_release(puVar4);
  return;
}



/* Entry: 107220460; end: 107220567; -[SCOperaPlaylistStoriesPlugin updateStoryIdsList:] */

void FUN_107220460(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c134d60(lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107220568; end: 1072205bb;  */

void FUN_107220568(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c28a5c0(*(undefined8 *)(lVar1 + 8),param_2,*(undefined8 *)(param_1 + 0x20));
    uVar3 = *(undefined8 *)(lVar1 + 0xd8);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010bfba540(uVar2);
    func_0x00010bf7e240(uVar3,param_2,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1072205bc; end: 1072205f7; -[SCOperaPlaylistStoriesPlugin stopLoggingEventIfNecessary] */

void FUN_1072205bc(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0xd8);
  func_0x00010bfdbec0();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c197690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0xd8),PTR_s_setEventAnnouncing__1126437c0,0);
    return;
  }
  return;
}



/* Entry: 1072205f8; end: 1072205ff; -[SCOperaPlaylistStoriesPlugin viewingType] */

undefined8 FUN_1072205f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107220600; end: 107220607; -[SCOperaPlaylistStoriesPlugin storyPlayMode] */

undefined8 FUN_107220600(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107220608; end: 107220643; -[SCOperaPlaylistStoriesPlugin isViewingLongform] */

undefined8 FUN_107220608(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfb8fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0836a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107220644; end: 10722064b; -[SCOperaPlaylistStoriesPlugin viewLocation] */

undefined8 FUN_107220644(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10722064c; end: 107220673; -[SCOperaPlaylistStoriesPlugin type] */

void FUN_10722064c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107220674; end: 10722069b; -[SCOperaPlaylistStoriesPlugin playlistDataSource] */

void FUN_107220674(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10722069c; end: 107220717; -[SCOperaPlaylistStoriesPlugin addEventListenersWithEventAnnouncing:] */

void FUN_10722069c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  _objc_retain(param_3);
  func_0x00010c197680(uVar2,param_2,param_3);
  func_0x00010c197680(*(undefined8 *)(param_1 + 8),param_2,param_3);
  lVar1 = param_1;
  func_0x00010c127820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(param_3,param_2,param_1,lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107220718; end: 10722076b; -[SCOperaPlaylistStoriesPlugin _operaPageModeOnNilNextViewModel] */

undefined8 FUN_107220718(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001084837e8(uVar2,uVar1);
  _objc_release(uVar1);
  uVar1 = 1;
  if ((int)uVar2 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 10722076c; end: 10722076f; -[SCOperaPlaylistStoriesPlugin extraPropertiesProvider] */

void FUN_10722076c(void)

{
  return;
}



/* Entry: 107220770; end: 107220813; -[SCOperaPlaylistStoriesPlugin updateOperaDependencies:] */

void FUN_107220770(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b23c8;
  func_0x00010c0ea380(PTR_PTR_1126b23c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ab0c0(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c2bc220(puVar1,param_2,*(undefined8 *)(param_1 + 0x68));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107220814; end: 10722094b; -[SCOperaPlaylistStoriesPlugin updateOperaConfiguration:] */

void FUN_107220814(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b23c0;
  func_0x00010c0ea1a0(PTR_PTR_1126b23c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b5ea0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be6dbe0(param_1);
  func_0x00010c2b4880(puVar1,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b69c0(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    func_0x00010c2afda0(puVar1,param_2,1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (*(long *)(param_1 + 0x48) == 0x15) {
    func_0x00010c2b5480(puVar1,param_2,0x93);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ac520(puVar1,param_2,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2b5480(puVar1,param_2,0xb8);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010c2bc8c0(puVar1,param_2,*(undefined8 *)(param_1 + 0x48));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xd8);
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2881c0(uVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10722094c; end: 1072209d7; -[SCOperaPlaylistStoriesPlugin setPlaylistItemController:] */

void FUN_10722094c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c1ddde0(uVar2);
  puVar1 = PTR_PTR_1126d5380;
  _objc_alloc();
  func_0x00010c037300();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1d5580(*(undefined8 *)(param_1 + 0xd8));
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0xd8));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_next__112614028,*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1072209d8; end: 107220b03; -[SCOperaPlaylistStoriesPlugin setOperaControlling:] */

void FUN_1072209d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x28,param_3);
  func_0x00010c1d53c0(*(undefined8 *)(param_1 + 0xd8));
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdbc20();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c08f5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ebe0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d6c60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c08f5e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ebe0();
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107220b04; end: 107220c93; -[SCOperaPlaylistStoriesPlugin dependentPlugins] */

void FUN_107220b04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = *(long *)(param_1 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf58300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x00010befa120(puVar1,param_2,lVar3);
  }
  lVar4 = *(long *)(param_1 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010bf544a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar2 != 0) {
    func_0x00010befa120(puVar1,param_2,lVar2);
  }
  lVar5 = *(long *)(param_1 + 0x88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010bf58a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (lVar4 != 0) {
    func_0x00010befa120(puVar1,param_2,lVar4);
  }
  if ((((*(char *)(param_1 + 200) == '\x01') && (*(long *)(param_1 + 0xb0) != 0)) &&
      (*(long *)(param_1 + 0xb8) != 0)) &&
     ((uVar7 = *(long *)(param_1 + 0x48) - 0x2c, uVar7 < 0x28 &&
      ((1L << (uVar7 & 0x3f) & 0x8000000003U) != 0)))) {
    puVar6 = PTR_PTR_1126cfff0;
    _objc_alloc(PTR_PTR_1126cfff0);
    func_0x00010c0081a0();
    func_0x00010befa120(puVar1,param_2,puVar6);
    _objc_release(puVar6);
  }
  puVar6 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 107220c94; end: 107220ccb; -[SCOperaPlaylistStoriesPlugin teardown] */

void FUN_107220c94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c2569c0(*(undefined8 *)(param_1 + 0xd8));
  func_0x00010c197680(*(undefined8 *)(param_1 + 0xd8),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107220ccc; end: 107220f5b; -[SCOperaPlaylistStoriesPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_107220ccc(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  long param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    puVar3 = PTR_PTR_1126b5bc0;
    _objc_opt_class(PTR_PTR_1126b5bc0);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if ((uVar1 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0xd8);
      _objc_retain(puVar3);
      _objc_retain(puVar4);
      func_0x00010bf9ea80(uVar7);
      uVar7 = *(undefined8 *)(param_1 + 8);
      _objc_retain(puVar3);
      _objc_retain(puVar4);
      func_0x00010bf9ea80(uVar7);
      if (*(long *)(param_1 + 0x48) == 0x15) {
LAB_107220e98:
        func_0x00010c1d0640(puVar3);
      }
      else if (*(long *)(param_1 + 0x48) == 0x2a) {
        func_0x00010c1d0640(puVar3);
        goto LAB_107220e98;
      }
      puVar5 = puVar3;
      func_0x00010bf51e00(puVar3);
      puVar6 = puVar4;
      func_0x00010bf51e00(puVar4);
      (**(code **)(param_6 + 0x10))(param_6,puVar5,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar4);
      _objc_release(puVar3);
      goto LAB_107220f18;
    }
  }
  (**(code **)(param_6 + 0x10))(param_6,0,0);
LAB_107220f18:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107220f5c; end: 107221003;  */

void FUN_107220f5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bef7f60(uVar1);
  func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107221004; end: 10722100b; -[SCOperaPlaylistStoriesPlugin shouldUseExtendedResetToCamera] */

void FUN_107221004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd8),PTR_s_shouldUseExtendedResetToCamera_11266aec8);
  return;
}



/* Entry: 10722100c; end: 10722107b; -[SCOperaPlaylistStoriesPlugin registeredEventsForOperaSession] */

void FUN_10722100c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar2 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110ebeb98;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  func_0x00010c0720c0(pppuVar2,param_2,&PTR____CFConstantStringClassReference_110ebeb98);
  if ((int)pppuVar2 != 0) {
    uVar3 = param_5;
    func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110ebebd8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c067ec0();
    func_0x00010bee3780(puVar1,param_2,(long)(int)uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10722107c; end: 107221103; -[SCOperaPlaylistStoriesPlugin operaViewDidSendEvent:page:params:] */

void FUN_10722107c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110ebeb98);
  if ((int)param_3 != 0) {
    uVar1 = param_5;
    func_0x00010c0e00e0(param_5,param_2,&PTR____CFConstantStringClassReference_110ebebd8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c067ec0();
    func_0x00010bee3780(param_1,param_2,(long)(int)uVar2);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107221104; end: 10722111f; -[SCOperaPlaylistStoriesPlugin _updateViewLocationIfNeeded:] */

void FUN_107221104(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != -1) && (param_3 != *(long *)(param_1 + 0x48))) {
    *(long *)(param_1 + 0x48) = param_3;
  }
  return;
}



/* Entry: 107221120; end: 107221127; -[SCOperaPlaylistStoriesPlugin friendStoryViewingSession] */

undefined8 FUN_107221120(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 107221128; end: 10722113f; -[SCOperaPlaylistStoriesPlugin fanPassUpsellPlaylistFiltering] */

void FUN_107221128(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107221140; end: 107221263; -[SCOperaPlaylistStoriesPlugin .cxx_destruct] */

void FUN_107221140(long param_1)

{
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
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
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107221264; end: 10722139f; +[SCOperaSnapPlaybackLoggingInfo storiesSnapPlaybackAttributesFromPlaybackSequence:customStoryMetadata:isLoggingFrom4thTabFriendStorySection:baseMediaContentKey:] */

void FUN_107221264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfcaca0(param_1,param_2,param_3,param_4,param_5);
  uVar2 = param_1;
  func_0x00010be1fce0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec44c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db9f38);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2dc0;
  _objc_alloc(PTR_PTR_1126b2dc0);
  func_0x00010bb14c74(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ff20(puVar4,param_2,param_1,uVar1,puVar3,param_6);
  _objc_release(param_6);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1072213a0; end: 107221587; +[SCOperaSnapPlaybackLoggingInfo getStoriesOperaItemTypeFromPlaybackSequence:customStoryMetadata:isLoggingFrom4thTabFriendStorySection:] */

undefined8
FUN_1072213a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  _objc_retain(param_4);
  func_0x00010c0bdf40(param_3);
  uVar1 = puStack_68[3];
  _objc_release(param_4);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107221588; end: 10722178b;  */

void FUN_107221588(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  long lStack_140;
  ulong uStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  ulong *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  _objc_retain(param_2);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  puStack_110 = (ulong *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uVar1 = param_2;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    unaff_x23 = *puStack_110;
    unaff_x22 = uVar2;
    do {
      unaff_x24 = 0;
      do {
        if (*puStack_110 != unaff_x23) {
          _objc_enumerationMutation(uVar1);
        }
        uVar2 = *(ulong *)(lStack_118 + unaff_x24 * 8);
        func_0x000108539930();
        if ((uVar2 & 1) != 0) {
          _objc_release(uVar1);
          lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
          uVar7 = 0xf;
          goto LAB_107221690;
        }
        unaff_x24 = unaff_x24 + 1;
      } while (unaff_x22 != unaff_x24);
      unaff_x22 = uVar1;
      func_0x00010bf52a60();
    } while (unaff_x22 != 0);
  }
  _objc_release(uVar1);
  uVar2 = param_2;
  func_0x00010c073b60();
  if ((uVar2 & 1) == 0) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    }
    else {
      uVar1 = param_2;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = uVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = unaff_x22;
      func_0x00010853a244();
      _objc_release(unaff_x22);
      _objc_release(uVar1);
      if ((int)unaff_x23 != 0) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
        uVar7 = 4;
        goto LAB_107221690;
      }
      uVar1 = param_2;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = uVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = unaff_x22;
      func_0x00010853a0e0();
      _objc_release(unaff_x22);
      _objc_release(uVar1);
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      if ((int)unaff_x23 != 0) goto LAB_107221674;
    }
    uVar7 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 8);
LAB_107221674:
    uVar7 = 5;
  }
LAB_107221690:
  *(undefined8 *)(lVar6 + 0x18) = uVar7;
  uVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_128 = FUN_10722178c;
    uStack_160 = unaff_x24;
    uStack_158 = unaff_x23;
    uStack_150 = unaff_x22;
    uStack_148 = uVar1;
    lStack_140 = param_1;
    uStack_138 = param_2;
    puStack_130 = &stack0xfffffffffffffff0;
    _objc_retain(uVar5);
    lVar6 = *(long *)(uVar2 + 0x20);
    if (lVar6 == 0) {
      uVar1 = uVar5;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      if (uVar3 == 0) {
        uVar7 = 0;
      }
      else {
        puStack_178 = &uStack_180;
        uStack_180 = 0;
        uStack_170 = 0x2020000000;
        uStack_168 = 0;
        uVar4 = uVar3;
        func_0x00010bf0e700(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c1320();
        _objc_release(uVar4);
        uVar7 = puStack_178[3];
        __Block_object_dispose(&uStack_180,8);
      }
      _objc_release(uVar3);
      *(undefined8 *)(*(long *)(*(long *)(uVar2 + 0x28) + 8) + 0x18) = uVar7;
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
    else {
      func_0x00010c27dd80();
      if (lVar6 - 1U < 10) {
        uVar7 = *(undefined8 *)(&UNK_10de20850 + (lVar6 - 1U) * 8);
      }
      else {
        uVar7 = 0;
      }
      *(undefined8 *)(*(long *)(*(long *)(uVar2 + 0x28) + 8) + 0x18) = uVar7;
    }
    lVar6 = *(long *)(*(long *)(uVar2 + 0x28) + 8);
    if (*(long *)(lVar6 + 0x18) == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0xffffffffffffffff;
    }
    _objc_release(uVar5);
    return;
  }
  return;
}



/* Entry: 10722178c; end: 107221947;  */

void FUN_10722178c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      puStack_58 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x2020000000;
      uStack_48 = 0;
      lVar3 = lVar2;
      func_0x00010bf0e700(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c1320();
      _objc_release(lVar3);
      uVar4 = puStack_58[3];
      __Block_object_dispose(&uStack_60,8);
    }
    _objc_release(lVar2);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar4;
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    func_0x00010c27dd80();
    if (lVar1 - 1U < 10) {
      uVar4 = *(undefined8 *)(&UNK_10de20850 + (lVar1 - 1U) * 8);
    }
    else {
      uVar4 = 0;
    }
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar4;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if (*(long *)(lVar1 + 0x18) == 0) {
    *(undefined8 *)(lVar1 + 0x18) = 0xffffffffffffffff;
  }
  _objc_release(param_2);
  return;
}



/* Entry: 107221948; end: 1072219bf;  */

void FUN_107221948(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 10;
  return;
}



/* Entry: 1072219c0; end: 107221aeb; +[SCOperaSnapPlaybackLoggingInfo _getItemTypeSpecificFromPlaybackSequence:] */

void FUN_1072219c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0bdf40(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107221aec; end: 107221b23;  */

void FUN_107221aec(long param_1,int param_2)

{
  func_0x00010c073b60();
  if (param_2 != 0) {
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x27;
  }
  return;
}



/* Entry: 107221b24; end: 107221b3f;  */

void FUN_107221b24(void)

{
  return;
}



/* Entry: 107221b40; end: 107221d0b; +[SCOperaSnapPlaybackLoggingInfo _storiesOperaPlaybackSequenceCheetahLoggingInfoItemId:] */

void FUN_107221b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107221d0c;
  uStack_40 = 0x107221d1c;
  uStack_38 = 0;
  func_0x00010c0bdf40(param_3);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107221d0c; end: 107221d23;  */

void FUN_107221d0c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107221d24; end: 107221e0f;  */

void FUN_107221d24(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf82560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf45460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    lVar1 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    lVar4 = *(long *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar1;
  }
  else {
    lVar4 = param_2;
    func_0x00010bf82560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar1 = lVar4;
    func_0x00010bf45460();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 107221e10; end: 107221f37;  */

void FUN_107221e10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126c6980;
  _objc_retain(param_2);
  _objc_alloc();
  uVar7 = param_2;
  func_0x00010bf622e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c25b340(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c089820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c26f2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c1058a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c005fa0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  puVar6 = puVar1;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar6;
  _objc_release(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107221f38; end: 1072220cf;  */

void FUN_107221f38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0ee360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1072220d0; end: 107222117;  */

void FUN_1072220d0(void)

{
  return;
}



/* Entry: 107222118; end: 107222183; -[SCOperaStoriesPageProviderPlaylistAdapter initWithPlaylistItemController:] */

undefined1 * FUN_107222118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8c90;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107222184; end: 1072221cb; -[SCOperaStoriesPageProviderPlaylistAdapter updatePageForID:] */

void FUN_107222184(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101400();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1072221cc; end: 10722222b; -[SCOperaStoriesPageProviderPlaylistAdapter initialPlaylistItemIDToDisplay] */

void FUN_1072221cc(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c064160();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}


