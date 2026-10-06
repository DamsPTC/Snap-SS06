/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105b0cbb0; end: 105b0cc37; -[SCDiscoverFeedGrapheneMetricsEmitter logDiscoverFeedShowsPageEvent:timeInterval:] */

void FUN_105b0cbb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1088;
  if (param_3 == 1) {
    _objc_alloc_init(PTR_PTR_1126c1088);
    func_0x00010852c578();
  }
  else {
    if (param_3 != 0) {
      return;
    }
    _objc_alloc_init(PTR_PTR_1126c1088);
    func_0x00010852c0d0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b0cc38; end: 105b0cc43; -[SCSpotlightBadgeProvider endSubscribeBadgeUpdate] */

void FUN_105b0cc38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeObserver__112628f78,param_1);
  return;
}



/* Entry: 105b0cc44; end: 105b0cc87; -[SCSpotlightBadgeProvider dealloc] */

void FUN_105b0cc44(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf955a0();
  puStack_28 = PTR_PTR_1126ebd78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105b0cc88; end: 105b0ce5b; -[SCSpotlightBadgeProvider _setUpBadgeRanker:] */

void FUN_105b0cc88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1468;
  _objc_alloc(PTR_PTR_1126b1468);
  func_0x00010c055e20();
  uVar4 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c1270c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126ae820;
  _objc_opt_new();
  _objc_retain();
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar3;
  _objc_release(uVar4);
  _objc_initWeak(auStack_58,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c13cc80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar3);
  uVar4 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105b0ce5c; end: 105b0cecb;  */

void FUN_105b0ce5c(undefined8 param_1,long param_2)

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



/* Entry: 105b0cecc; end: 105b0cfd7;  */

void FUN_105b0cecc(long param_1,undefined **param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    ppuVar2 = param_2;
    func_0x00010c06b700();
    if ((int)ppuVar2 == 0) {
      ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2f50;
    }
    else {
      ppuVar3 = param_2;
      func_0x00010c296d80();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2f50;
      }
      else {
        ppuVar2 = param_2;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar3);
    }
    ppuVar3 = ppuVar2;
    func_0x00010c067ec0();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c067ec0();
    _objc_release(uVar4);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    if (0 < (int)ppuVar3 == (int)uVar5 < 1) {
      func_0x00010be50760(lVar1);
    }
    _objc_release(ppuVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105b0cfd8; end: 105b0d02f; -[SCSpotlightBadgeProvider _viewWillEnterForeground] */

void FUN_105b0cfd8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105b0d030;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_38);
  return;
}



/* Entry: 105b0d030; end: 105b0d037;  */

void FUN_105b0d030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed27d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateActiveBadgeStatus_112592398);
  return;
}



/* Entry: 105b0d038; end: 105b0d0cf;  */

void FUN_105b0d038(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x28);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  bVar1 = lVar4 < 1;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (bVar1) {
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x30)
                       );
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x28)
                       );
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010beb5be0(lVar2,param_2,puVar3,bVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105b0d0d0; end: 105b0d2df; -[SCSpotlightBadgeProvider _spotlightBadgeCountChanged:] */

void FUN_105b0d0d0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c1008;
  func_0x00010c22f320(PTR_PTR_1126c1008);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar1 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126c1008;
  func_0x00010bf151a0(PTR_PTR_1126c1008);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
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
  uVar6 = uVar4;
  func_0x00010c067ec0();
  uVar5 = uVar4;
  if ((int)uVar6 < 1) {
    uVar5 = uVar1;
  }
  _objc_retain(uVar5);
  _objc_initWeak(auStack_58,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105b0d2e0;
  puStack_78 = &UNK_110848218;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(uVar5);
  uStack_70 = uVar5;
  _objc_retain(uVar4);
  uStack_68 = uVar4;
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105b0d2e0; end: 105b0d32f;  */

void FUN_105b0d2e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c067ec0(uVar3);
  func_0x00010beb5be0(lVar2,param_2,uVar1,(int)uVar3 == 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105b0d330; end: 105b0d35b;  */

void FUN_105b0d330(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee9e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b0d35c; end: 105b0d55f;  */

ulong FUN_105b0d35c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = *(ulong *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c11c420(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010c11c420(param_3);
  _objc_release(param_3);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0();
  _objc_release(puVar1);
  uVar2 = (ulong)(uVar3 < uVar4);
  if (uVar4 < uVar3) {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}



/* Entry: 105b0d560; end: 105b0d70b; -[SCSpotlightBadgeProvider _shouldShowBadge:hideBadgeCount:] */

void FUN_105b0d560(long param_1,undefined8 param_2,undefined **param_3,undefined1 param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar5;
  
  _objc_retain(param_3);
  lVar3 = param_1;
  func_0x00010be1e460();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    iVar2 = 0;
  }
  else {
    lVar4 = param_1;
    func_0x00010be1e460();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0720c0();
    iVar2 = (int)lVar5;
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  ppuVar6 = param_3;
  func_0x00010c067ec0();
  if ((0 < (int)ppuVar6) && (iVar2 != 0)) {
    _objc_release(param_3);
    param_3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c2f50;
  }
  ppuVar6 = param_3;
  if (*(char *)(param_1 + 0x31) == '\x01') {
    ppuVar7 = param_3;
    func_0x00010c282760();
    if (*(ulong *)(param_1 + 0x38) < ((ulong)ppuVar7 & 0xffffffff)) {
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
    }
  }
  *(undefined1 *)(param_1 + 0x50) = param_4;
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x58));
  puVar8 = PTR_PTR_1126ae820;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar10 = *(ulong *)(param_1 + 0x98);
    _objc_retain(uVar10);
    _objc_opt_class(puVar8);
    uVar9 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar8);
    uVar1 = uVar10;
    if ((uVar9 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar10);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
    _objc_release(uVar1);
    _objc_release(puVar8);
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    func_0x00010be50760(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar6);
  return;
}



/* Entry: 105b0d70c; end: 105b0d717;  */

void FUN_105b0d70c(void)

{
  return;
}



/* Entry: 105b0d718; end: 105b0d73f; -[SCSpotlightBadgeProvider _getCurrentPage] */

void FUN_105b0d718(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b0d740; end: 105b0d7af; -[SCSpotlightBadgeProvider _logBadgeWithCount:] */

void FUN_105b0d740(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010c067ec0();
  if (((*(byte *)(param_1 + 0x50) & 1) == 0) && (0 < param_3)) {
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e1e4b8;
      goto LAB_105b0d798;
    }
  }
  else if (param_3 < 1) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dabe78;
    goto LAB_105b0d798;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e1e4d8;
LAB_105b0d798:
                    /* WARNING: Could not recover jumptable at 0x00010c0b03f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x78),PTR_s_logSpotlightBadgeStatusChangeWit_112609b08,
             0 < param_3,ppuVar1);
  return;
}



/* Entry: 105b0d7b0; end: 105b0d86f; -[SCSpotlightBadgeProvider .cxx_destruct] */

void FUN_105b0d7b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105b0d870; end: 105b0dad7; -[SCStoriesBackgroundPrefetcher initWithUserSession:storiesDataCoordinator:storiesMediaCoordinator:storiesSyncNetworkRequester:circumstanceEngine:imageFetchingService:storiesConfigProvider:] */

undefined8 *
FUN_105b0d870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126ebd80;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar3 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c2478;
    _objc_alloc_init();
    uVar3 = puVar1[9];
    puVar1[9] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[4];
    puVar1[4] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = puVar1[6];
    puVar1[6] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[8];
    puVar1[8] = uVar3;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar3 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar3);
    _objc_release(param_5);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105b0dad8; end: 105b0db33;  */

void FUN_105b0dad8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c2480;
  _objc_alloc(PTR_PTR_1126c2480);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d1e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105b0db34; end: 105b0dc3b; -[SCStoriesBackgroundPrefetcher _handleFetchStoriesWithStartTimestamp:prefetchCompletion:] */

void FUN_105b0db34(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_1;
  _objc_retain(param_4);
  func_0x00010c11f8c0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 105b0dc3c; end: 105b0dc93;  */

void FUN_105b0dc3c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be28b00(*(undefined8 *)(param_1 + 0x30));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b0dc94; end: 105b0ddc7; -[SCStoriesBackgroundPrefetcher _handleDownloadStoriesWithRankedStoryIds:startTimestamp:prefetchCompletion:] */

void FUN_105b0dc94(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c25b360(uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105b0ddc8; end: 105b0de37;  */

void FUN_105b0ddc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be28ae0(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b0de38; end: 105b0e08b; -[SCStoriesBackgroundPrefetcher _handleDownloadStoriesWithPlaybackInfoMap:startTimestamp:viewStateMap:rankedStoryIds:prefetchCompletion:] */

void FUN_105b0de38(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_78,param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  puVar1 = PTR_PTR_1126c2488;
  _objc_alloc_init(PTR_PTR_1126c2488);
  func_0x00010c1cf000();
  func_0x00010c1cefe0(puVar1);
  func_0x00010c1c3480(puVar1);
  func_0x00010c1e0560(puVar1);
  puVar2 = PTR_PTR_1126bc058;
  _objc_alloc_init(PTR_PTR_1126bc058);
  func_0x00010c195460();
  func_0x00010c17fa20(puVar2);
  func_0x00010c1e0460(puVar1);
  puVar3 = PTR_PTR_1126af7d0;
  _objc_alloc_init(PTR_PTR_1126af7d0);
  puVar4 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_copyWeak(auStack_88,auStack_78);
  uStack_80 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c1195c0(uVar5);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105b0e08c; end: 105b0e0e7;  */

void FUN_105b0e08c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be30fc0(*(undefined8 *)(param_1 + 0x48));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b0e0e8; end: 105b0e2df; -[SCStoriesBackgroundPrefetcher _handleStoriesPrefetchWithConfig:startTimestamp:playbackInfoMap:viewStateMap:rankedStoryIds:prefetchCompletion:] */

void FUN_105b0e0e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126c2488;
  _objc_retain(param_4);
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010c296d80(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c008360();
  _objc_retain(0);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010c107420();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf926c0();
  _objc_release(puVar3);
  if ((int)puVar4 == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c258100();
    _objc_release(uVar5);
    if ((int)uVar2 != 0) {
      (**(code **)(param_8 + 0x10))(param_8,0,0);
    }
  }
  else {
    func_0x00010c0de380();
    func_0x00010c0de360(puVar1);
    func_0x00010c0c2720(puVar1);
    puVar3 = puVar1;
    func_0x00010c107420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43aa0();
    func_0x00010be28ac0(param_1,param_2);
    _objc_release(puVar3);
  }
  _objc_release(puVar1);
  _objc_release(0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105b0e2e0; end: 105b0e727; -[SCStoriesBackgroundPrefetcher _handleDownloadStoriesWithPlaybackInfoMap:startTimestamp:viewStateMap:rankedStoryIds:numOfFriendStoriesToDownload:numOfSnapsInEachStoryToDownload:maxNumOfSnapsInEachStoryToDownload:completePrefetch:prefetchCompletion:] */

void FUN_105b0e2e0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined1 *param_5,long param_6,undefined *param_7,undefined *param_8,
                  ulong param_9,undefined1 param_10,undefined4 param_11,undefined *param_12)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  undefined1 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  undefined1 *puVar23;
  ulong uVar24;
  undefined *puStack_328;
  undefined8 uStack_320;
  code *pcStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined1 *puStack_300;
  undefined *puStack_2f8;
  undefined1 auStack_2f0 [8];
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = param_5;
  lVar3 = param_6;
  puVar19 = param_7;
  uVar14 = param_1;
  _objc_retain(param_4);
  uVar17 = (undefined1)lVar3;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_12);
  lVar3 = *(long *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar15 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  puVar4 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf07b60();
  _objc_release(puVar4);
  puVar4 = puVar15;
  if (puVar5 == (undefined *)0x2) {
    uVar14 = 0;
    _objc_retain(param_6);
    puVar16 = auStack_100;
    uVar18 = 0x10;
    lVar6 = param_6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    uVar17 = (undefined1)uVar18;
    while (lVar6 != 0) {
      lVar20 = 0;
      do {
        uVar17 = (undefined1)uVar18;
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_6);
        }
        puVar23 = *(undefined1 **)(lVar20 * 8);
        puVar5 = puVar15;
        func_0x00010bf529e0();
        if (param_7 <= puVar5) goto LAB_105b0e628;
        lVar7 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        uVar14 = 0;
        _objc_retain(lVar7);
        puVar16 = auStack_180;
        uVar18 = 0x10;
        lVar8 = lVar7;
        func_0x00010bf52a60();
        lVar2 = lRam0000000000000000;
        if (lVar8 == 0) {
          uVar24 = 0;
        }
        else {
          uVar24 = 0;
          do {
            lVar22 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar7);
              }
              uVar21 = *(undefined8 *)(lVar22 * 8);
              puVar9 = puVar5;
              func_0x00010bf529e0();
              if (param_8 <= puVar9) goto LAB_105b0e5b0;
              uVar10 = uVar21;
              func_0x00010c15f2e0(uVar21);
              _objc_retainAutoreleasedReturnValue();
              puVar11 = param_5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(uVar10);
              if (puVar11 == (undefined1 *)0x0) {
                func_0x000107d22a6c(uVar21,1,1);
                _objc_retainAutoreleasedReturnValue();
                lVar12 = lVar3;
                func_0x00010c0c6980();
                if (lVar12 == 0) {
                  func_0x00010befa120(puVar5);
                }
                else {
                  uVar24 = uVar24 + 1;
                }
                _objc_release(uVar21);
              }
              lVar22 = lVar22 + 1;
            } while (lVar8 != lVar22);
            puVar16 = auStack_180;
            uVar18 = 0x10;
            lVar8 = lVar7;
            func_0x00010bf52a60();
          } while (lVar8 != 0);
        }
LAB_105b0e5b0:
        _objc_release(lVar7);
        puVar9 = puVar5;
        func_0x00010bf529e0();
        if ((puVar9 != (undefined *)0x0) && (uVar24 < param_9)) {
          func_0x00010c1d0640(puVar15);
          puVar16 = puVar23;
        }
        _objc_release(puVar5);
        _objc_release(lVar7);
        lVar20 = lVar20 + 1;
      } while (lVar20 != lVar6);
      puVar16 = auStack_100;
      uVar18 = 0x10;
      lVar6 = param_6;
      func_0x00010bf52a60();
      uVar17 = (undefined1)uVar18;
    }
LAB_105b0e628:
    _objc_release(param_6);
    func_0x00010bf51e00();
  }
  else {
    _objc_retain(puVar15);
  }
  _objc_release(puVar15);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar3);
  _objc_release(lVar3);
  puVar15 = puVar4;
  func_0x00010bf529e0();
  if (puVar15 == (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
    (**(code **)(param_12 + 0x10))(param_12,0);
  }
  else {
    puVar15 = puVar4;
    puVar16 = param_5;
    puVar19 = param_12;
    uVar17 = param_10;
    func_0x00010be28a80(param_2);
    uVar14 = param_1;
  }
  _objc_release(puVar4);
  _objc_release(param_12);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar15);
  _objc_retain(puVar16);
  _objc_retain(puVar19);
  _objc_initWeak(auStack_2d8,param_4);
  puStack_328 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_320 = 0xc2000000;
  pcStack_318 = FUN_105b0e8c4;
  puStack_310 = &UNK_1108d5280;
  _objc_copyWeak(auStack_2f0,auStack_2d8);
  _objc_retain(puVar15);
  puStack_308 = puVar15;
  uStack_2e8 = uVar14;
  _objc_retain(puVar16);
  puStack_300 = puVar16;
  uStack_2e0 = uVar17;
  _objc_retain(puVar19);
  ppuVar13 = &puStack_328;
  puStack_2f8 = puVar19;
  _objc_retainBlock(ppuVar13);
  uVar14 = *(undefined8 *)(param_4 + 8);
  func_0x00010c269d40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar15;
  func_0x00010bf002e0(puVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b4c0(uVar14);
  _objc_release(puVar4);
  _objc_release(uVar14);
  _objc_release(puStack_2f8);
  _objc_release(puStack_300);
  _objc_release(puStack_308);
  _objc_destroyWeak(auStack_2f0);
  _objc_destroyWeak(auStack_2d8);
  _objc_release(ppuVar13);
  _objc_release(puVar19);
  _objc_release(puVar16);
  _objc_release(puVar15);
  return;
}



/* Entry: 105b0e728; end: 105b0e8c3; -[SCStoriesBackgroundPrefetcher _handleDownloadStoriesWithFilteredPlaybackInfoMap:startTimestamp:viewStateMap:completePrefetch:prefetchCompletion:] */

void FUN_105b0e728(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_2);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105b0e8c4;
  puStack_a0 = &UNK_1108d5280;
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_4);
  uStack_98 = param_4;
  uStack_78 = param_1;
  _objc_retain(param_5);
  uStack_90 = param_5;
  uStack_70 = param_6;
  _objc_retain(param_7);
  ppuVar1 = &puStack_b8;
  uStack_88 = param_7;
  _objc_retainBlock(ppuVar1);
  uVar2 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf002e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25b4c0(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(ppuVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105b0e8c4; end: 105b0e9e7;  */

void FUN_105b0e8c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105b0e9e8;
    puStack_80 = &UNK_1108d5250;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lStack_78 = lVar1;
    _objc_retain(uVar3);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uStack_70 = uVar3;
    _objc_retain(uVar4);
    uStack_48 = *(undefined1 *)(param_1 + 0x48);
    uStack_68 = uVar4;
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = param_2;
    _objc_retain(uVar3);
    uStack_58 = uVar3;
    func_0x00010007380c(uVar2,&puStack_98);
    _objc_release(uVar2);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 105b0e9e8; end: 105b0ea0b;  */

void FUN_105b0e9e8(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be28ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x48),*(long *)(param_1 + 0x20),
               PTR_s__handleDownloadStoriesWithFilter_112567c48,*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x50),
               *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
    return;
  }
  return;
}



/* Entry: 105b0ea0c; end: 105b0ef37; -[SCStoriesBackgroundPrefetcher _handleDownloadStoriesWithFilteredPlaybackInfoMap:startTimestamp:viewStateMap:completePrefetch:summaryData:prefetchCompletion:] */

void FUN_105b0ea0c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lStack_370;
  undefined *puStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  undefined *puStack_338;
  long lStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar7 = param_8;
  _objc_retain();
  puStack_198 = &uStack_1a0;
  uStack_190 = 0x2020000000;
  uStack_188 = 0;
  puStack_1b8 = &uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b0 = 0x2020000000;
  uStack_1a8 = 3;
  uStack_1a0 = 0;
  _dispatch_group_create();
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  _objc_retain(param_4);
  lVar8 = param_4;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar9 = *plStack_1f0;
    do {
      lStack_370 = 0;
      do {
        if (*plStack_1f0 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        uVar13 = *(undefined8 *)(lStack_1f8 + lStack_370 * 8);
        lVar2 = param_4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_208 = 0;
        uStack_210 = 0;
        lStack_238 = 0;
        uStack_240 = 0;
        uStack_228 = 0;
        plStack_230 = (long *)0x0;
        _objc_retain();
        lVar3 = lVar2;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar12 = *plStack_230;
          do {
            lVar11 = 0;
            do {
              if (*plStack_230 != lVar12) {
                _objc_enumerationMutation(lVar2);
              }
              uVar10 = *(undefined8 *)(lStack_238 + lVar11 * 8);
              _dispatch_group_enter(uVar7);
              uVar4 = uVar10;
              func_0x000107d22a6c(uVar10,1,1);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar10;
              func_0x0001084d1fa0(uVar10,*(undefined8 *)(param_2 + 0x40));
              _objc_retainAutoreleasedReturnValue();
              uVar6 = *(undefined8 *)(param_2 + 0x20);
              func_0x00010c269d40(uVar6);
              _objc_retainAutoreleasedReturnValue();
              puStack_290 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_288 = 0xc2000000;
              pcStack_280 = FUN_105b0ef38;
              puStack_278 = &UNK_1108d52b0;
              puStack_248 = &uStack_1c0;
              puStack_250 = &uStack_1a0;
              uStack_270 = uVar10;
              uStack_268 = uVar13;
              lStack_260 = param_2;
              _objc_retain(uVar7);
              uStack_258 = uVar7;
              func_0x00010bf89060(uVar6);
              _objc_release(uVar6);
              _objc_release(uStack_258);
              _objc_release(uVar5);
              _objc_release(uVar4);
              lVar11 = lVar11 + 1;
            } while (lVar3 != lVar11);
            lVar3 = lVar2;
            func_0x00010bf52a60();
          } while (lVar3 != 0);
        }
        _objc_release(lVar2);
        lVar3 = param_7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar3;
        func_0x00010c26d760();
        _objc_retainAutoreleasedReturnValue();
        if (lVar12 != 0) {
          _dispatch_group_enter(uVar7);
          puVar1 = PTR___NSConcreteStackBlock_11034bd00;
          puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_2b0 = 0xc2000000;
          pcStack_2a8 = FUN_105b0efbc;
          puStack_2a0 = &UNK_110842e18;
          _objc_retain(uVar7);
          puStack_308 = puVar1;
          uStack_300 = 0xc2000000;
          pcStack_2f8 = FUN_105b0efc4;
          puStack_2f0 = &UNK_1108bd210;
          puStack_2c8 = &uStack_1a0;
          puStack_2c0 = &uStack_1c0;
          uStack_2e8 = uVar13;
          lStack_2e0 = param_2;
          uStack_298 = uVar7;
          _objc_retain(lVar3);
          lStack_2d8 = lVar3;
          _objc_retain(uVar7);
          uStack_2d0 = uVar7;
          func_0x00010be06260(param_2);
          _objc_release(uStack_2d0);
          _objc_release(lStack_2d8);
          _objc_release(uStack_298);
        }
        _objc_release(lVar12);
        _objc_release(lVar3);
        _objc_release(lVar2);
        lStack_370 = lStack_370 + 1;
      } while (lStack_370 != lVar8);
      lVar8 = param_4;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(param_4);
  uVar13 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c11de00(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puStack_350 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_348 = 0xc2000000;
  pcStack_340 = FUN_105b0f044;
  puStack_338 = &UNK_1108d52e0;
  puStack_320 = &uStack_1a0;
  puStack_318 = &uStack_1c0;
  lStack_330 = param_2;
  uStack_328 = param_8;
  uStack_310 = param_1;
  _objc_retain();
  func_0x000100bc0718(uVar7,uVar13,&puStack_350);
  _objc_release(uVar13);
  _objc_release(uStack_328);
  _objc_release(param_8);
  _objc_release(uVar7);
  __Block_object_dispose(&uStack_1c0,8);
  __Block_object_dispose(&uStack_1a0,8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1c0,8);
  lVar8 = 8;
  __Block_object_dispose(&uStack_1a0);
  __Unwind_Resume();
  if (lVar8 != 2) {
    *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x40) + 8) + 0x18) = 2;
    *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x48) + 8) + 0x18) = 1;
    uVar7 = *(undefined8 *)(param_4 + 0x30);
    func_0x00010bec5040(uVar7);
    _objc_retainAutoreleasedReturnValue();
    FUN_105b0fb48(*(undefined8 *)(*(long *)(param_4 + 0x30) + 0x48),
                  &PTR____CFConstantStringClassReference_110e1e578,uVar7,1);
    _objc_release(uVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_4 + 0x38));
  return;
}



/* Entry: 105b0ef38; end: 105b0efbb;  */

void FUN_105b0ef38(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 2) {
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 2;
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bec5040(uVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    FUN_105b0fb48(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x48),
                  &PTR____CFConstantStringClassReference_110e1e578,uVar1,1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 105b0efbc; end: 105b0efc3;  */

void FUN_105b0efbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105b0efc4; end: 105b0f043;  */

void FUN_105b0efc4(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = 2;
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = 2;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c27dd80(*(undefined8 *)(param_1 + 0x30));
  func_0x00010bec5060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_105b0fb48(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48),
                &PTR____CFConstantStringClassReference_110e1e598,uVar1,1);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105b0f044; end: 105b0f15f;  */

void FUN_105b0f044(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010bf5fd80(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50));
  param_1 = param_1 - *(double *)(param_2 + 0x40);
  lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18);
  if (lVar2 - 1U < 2) {
    FUN_105b0f9d4(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x48),
                  &PTR____CFConstantStringClassReference_110e1a258,(long)param_1);
    lVar2 = *(long *)(param_2 + 0x28);
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  if (lVar2 == 0) {
    FUN_105b0f9d4(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x48),
                  &PTR____CFConstantStringClassReference_110dd8998,(long)param_1);
    FUN_105b0fd78(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x48),1);
                    /* WARNING: Could not recover jumptable at 0x000105b0f14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
              (*(long *)(param_2 + 0x28),
               *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x18),0);
    return;
  }
  return;
}



/* Entry: 105b0f160; end: 105b0f367; -[SCStoriesBackgroundPrefetcher _downloadThumbnail:storyId:completion:failure:] */

void FUN_105b0f160(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x000107d23c68();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    (**(code **)(param_6 + 0x10))(param_6);
  }
  else {
    lVar1 = param_3;
    func_0x000107dd5184();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      (**(code **)(param_6 + 0x10))(param_6);
    }
    else {
      lVar2 = param_3;
      func_0x000107dd4c00(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126aebf0;
      _objc_alloc(PTR_PTR_1126aebf0);
      lVar4 = param_1;
      _objc_opt_class(param_1);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c011b80(puVar3,param_2,lVar4,0x2d);
      _objc_release(lVar4);
      puVar5 = PTR_PTR_1126b85a8;
      _objc_alloc(PTR_PTR_1126b85a8);
      puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14e120();
      func_0x00010c01cf00(puVar5,param_2,lVar2,puVar3);
      _objc_release(puVar6);
      uVar7 = *(undefined8 *)(param_1 + 0x58);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_105b0f368;
      puStack_78 = &UNK_1108b2448;
      _objc_retain(param_5);
      uStack_70 = param_5;
      _objc_retain(param_6);
      lStack_68 = param_6;
      func_0x00010c107860(uVar7,param_2,puVar5,&puStack_90);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lStack_68);
      _objc_release(uStack_70);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105b0f368; end: 105b0f423;  */

void FUN_105b0f368(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105b0f424; end: 105b0f43b;  */

void FUN_105b0f424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105b0f42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105b0f43c; end: 105b0f463; -[SCStoriesBackgroundPrefetcher _storyTypeFromSummaryType:] */

undefined ** FUN_105b0f43c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 6) {
    return (undefined **)(&PTR_PTR_1108d5400)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 105b0f464; end: 105b0f5cf; -[SCStoriesBackgroundPrefetcher _storyTypeFromPlaybackInfo:] */

void FUN_105b0f464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105b0f5d0;
  uStack_40 = 0x105b0f5e0;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110db8b78;
  uVar1 = param_3;
  func_0x00010bf0e700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1340();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(ppuStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b0f5d0; end: 105b0f657;  */

void FUN_105b0f5d0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105b0f658; end: 105b0f663; -[SCStoriesBackgroundPrefetcher dataSyncerIdentifier] */

undefined ** FUN_105b0f658(void)

{
  return &PTR____CFConstantStringClassReference_110e1e518;
}



/* Entry: 105b0f664; end: 105b0f733; -[SCStoriesBackgroundPrefetcher jobConfig] */

void FUN_105b0f664(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c258140();
  _objc_release(lVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1e518;
  func_0x00010aee3094(&PTR____CFConstantStringClassReference_110e1e518,lVar3 * 0x3c);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c258160();
    ppuVar5 = ppuVar2;
    func_0x00010c085560(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cc140();
    _objc_release(ppuVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105b0f734; end: 105b0f73b; -[SCStoriesBackgroundPrefetcher submitOnRegister] */

undefined8 FUN_105b0f734(void)

{
  return 1;
}



/* Entry: 105b0f73c; end: 105b0f88b; -[SCStoriesBackgroundPrefetcher onSync:] */

void FUN_105b0f73c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x50));
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c258180();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    _objc_initWeak(auStack_48,param_2);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_1;
    _objc_retain(param_4);
    func_0x00010bfa6cc0(uVar2);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  else {
    func_0x00010be29960(param_1,param_2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105b0f88c; end: 105b0f8c3;  */

void FUN_105b0f88c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be29960(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b0f8c4; end: 105b0f95f; -[SCStoriesBackgroundPrefetcher .cxx_destruct] */

void FUN_105b0f8c4(long param_1)

{
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



/* Entry: 105b0f960; end: 105b0f9d3; -[SCGrapheneStoriesBackgroundPrefetchMetric2 init] */

undefined1 * FUN_105b0f960(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ebd88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105b0f9d4; end: 105b0fb47;  */

void FUN_105b0f9d4(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
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
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f329a3d;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1108d5430;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108d5430,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_105b0fb48;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar4);
  if (puVar2 != (undefined *)0x0) {
    plVar6 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f329a3d;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar2 = &UNK_10f329a3d;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar3 = &UNK_1108d5480;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108d5480,&uStack_118,param_4);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar7 = 0;
    do {
      if ((&cStack_c9)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(puVar4);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar4);
  _objc_release(puVar1);
  __Unwind_Resume();
  puStack_148 = (undefined1 *)&uStack_160;
  pcStack_128 = FUN_105b0fd78;
  if (puVar2 != (undefined *)0x0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    puStack_140 = puVar4;
    puStack_138 = puVar1;
    ppuStack_130 = &puStack_90;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_1108d54d0,&uStack_160,puVar3);
    func_0x00010007e5dc(&puStack_148);
  }
  return;
}



/* Entry: 105b0fb48; end: 105b0fd77;  */

void FUN_105b0fb48(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f329a3d;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f329a3d;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_1108d5480;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108d5480,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar3 = 0;
    do {
      if ((&cStack_49)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != -0x30);
  }
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_105b0fd78;
  if (puVar2 != (undefined *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_c0 = param_3;
    puStack_b8 = param_2;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_1108d54d0,&uStack_e0,puVar1);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 105b0fd78; end: 105b0fdef;  */

void FUN_105b0fd78(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108d54d0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105b0fdf0; end: 105b0fe57; +[StoriesBackgroundPrefetchConfig descriptor] */

void FUN_105b0fdf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1c28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a8b5a0,
                        &PTR____CFConstantStringClassReference_110e1e698,&PTR_DAT_11311b170,
                        &PTR_DAT_11311b188,8,0x28,0x1c);
    puRam00000001136c1c28 = puVar1;
  }
  return;
}



/* Entry: 105b0fe58; end: 105b1031b; -[SCCustomStoryCreationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b0fe58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
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
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
  puVar1 = PTR_PTR_1126c2490;
  _objc_alloc();
  lVar24 = (long)_DAT_11272fb4c;
  lVar2 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(param_1 + _DAT_11272fb50);
  lVar6 = param_1 + _DAT_11272fb54;
  _objc_loadWeakRetained();
  lVar19 = (long)_DAT_11272fb5c;
  uVar21 = *(undefined8 *)(param_1 + _DAT_11272fb58);
  lVar7 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar23 = lVar7;
  func_0x00010bf620c0();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_11272fb60;
  lVar8 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar10 = lVar25;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_11272fb64;
  lVar13 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11272fb68;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_11272fb6c;
  _objc_loadWeakRetained();
  func_0x00010c0586e0(puVar1,param_2,lVar3,lVar5,uVar20,lVar6,uVar21,lVar23,lVar9,lVar12,lVar14,
                      lVar16,lVar17);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar25);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar23);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar18 = PTR_PTR_1126c2498;
  _objc_alloc();
  lVar2 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar25 = lVar2;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar13 = lVar19;
  func_0x00010bf62080();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar15 = lVar22;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11272fb70;
  _objc_loadWeakRetained();
  lVar17 = lVar4;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11272fb74;
  _objc_loadWeakRetained();
  lVar3 = lVar6;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar23 = lVar7;
  func_0x00010c247a20();
  lVar8 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c247a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0406e0(puVar18,param_2,puVar1,lVar25,lVar13,lVar15,lVar17,lVar5,lVar23,lVar9);
  lVar23 = (long)_DAT_11272fb78;
  uVar20 = *(undefined8 *)(param_1 + lVar23);
  *(undefined **)(param_1 + lVar23) = puVar18;
  _objc_release(uVar20);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar17);
  _objc_release(lVar4);
  _objc_release(lVar15);
  _objc_release(lVar22);
  _objc_release(lVar13);
  _objc_release(lVar19);
  _objc_release(lVar25);
  _objc_release(lVar2);
  lVar2 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010c259620();
  _objc_release(lVar2);
  if (lVar4 == 1) {
    uVar20 = *(undefined8 *)(param_1 + lVar23);
    param_1 = param_1 + lVar24;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010bf5aaa0();
    func_0x00010c24e780(uVar20,param_2,lVar2);
  }
  else {
    lVar2 = param_1 + lVar24;
    _objc_loadWeakRetained();
    lVar4 = lVar2;
    func_0x00010c259620();
    _objc_release(lVar2);
    uVar20 = *(undefined8 *)(param_1 + lVar23);
    if (lVar4 != 3) {
      func_0x00010bf192c0(uVar20);
      goto LAB_105b102f8;
    }
    param_1 = param_1 + lVar24;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010bf5aaa0();
    func_0x00010c24e7a0(uVar20,param_2,lVar2);
  }
  _objc_release(param_1);
LAB_105b102f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105b1031c; end: 105b103d7; -[SCCustomStoryCreationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105b1031c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272fb6c);
  _objc_destroyWeak(param_1 + _DAT_11272fb70);
  _objc_destroyWeak(param_1 + _DAT_11272fb68);
  _objc_storeStrong(param_1 + _DAT_11272fb58,0);
  _objc_destroyWeak(param_1 + _DAT_11272fb54);
  _objc_storeStrong(param_1 + _DAT_11272fb50,0);
  _objc_destroyWeak(param_1 + _DAT_11272fb60);
  _objc_destroyWeak(param_1 + _DAT_11272fb64);
  _objc_destroyWeak(param_1 + _DAT_11272fb5c);
  _objc_destroyWeak(param_1 + _DAT_11272fb74);
  _objc_destroyWeak(param_1 + _DAT_11272fb4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272fb78,0);
  return;
}



/* Entry: 105b103d8; end: 105b10713; -[SCCustomStoryCreationRouterImpl initWithUiContainer:presentingViewController:recipientPickerScopeExposer:recipientPickerScopeServices:webBrowsingScopeExposer:customStoriesOnboardingManager:displayNameProvider:currentUsername:storiesBlizzardLogger:circumstanceEngine:complianceEngine:] */

undefined8 *
FUN_105b103d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
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
  puStack_98 = PTR_PTR_1126ebd90;
  puVar1 = &uStack_a0;
  puVar7 = PTR_s_init_1125d9248;
  uStack_a0 = param_1;
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
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xb) = 0;
    _objc_retain(param_11);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_13;
    _objc_release(uVar2);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = &PTR___NSConcreteGlobalBlock_1108d5550;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110f488f8;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110f487d8;
    ppuStack_80 = &PTR____CFConstantStringClassReference_110f487b8;
    ppuStack_78 = &PTR____CFConstantStringClassReference_110f48958;
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    func_0x00010befa120(puVar4);
    func_0x00010befa120(puVar4);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar4;
    _objc_release(uVar2);
  }
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
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)PTR_PTR_1126b2898;
  _objc_retain(puVar7);
  _objc_opt_new(puVar1);
  ppuVar5 = &PTR____CFConstantStringClassReference_110e1e6d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e6d8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bb3c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  func_0x00010bf529e0(puVar7);
  _objc_release(puVar7);
  func_0x00010c2b06a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 105b10714; end: 105b107d7;  */

void FUN_105b10714(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b2898;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1e6d8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e6d8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bb3c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  func_0x00010bf529e0(param_2);
  _objc_release(param_2);
  func_0x00010c2b06a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105b107d8; end: 105b10c2b; -[SCCustomStoryCreationRouterImpl beginCustomStoryTypeSelectionWithDelegate:] */

void FUN_105b107d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x50,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1e6f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e6f8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x000108f57b8c();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_80,param_3);
  puVar4 = PTR_PTR_1126b10a0;
  func_0x00010bf6e3c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105b10c2c;
  puStack_90 = &UNK_110852cd0;
  _objc_copyWeak(auStack_88,auStack_80);
  puVar5 = puVar4;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010befa120();
  func_0x000108f57bd4();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x000108f57c04();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_b0,param_1);
  puVar7 = PTR_PTR_1126b10a0;
  func_0x00010bf6e3c0(PTR_PTR_1126b10a0);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar8;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_105b10cfc;
  puStack_c8 = &UNK_11085daa8;
  _objc_copyWeak(auStack_c0,auStack_b0);
  _objc_copyWeak(auStack_b8,auStack_80);
  puVar8 = puVar7;
  func_0x00010bf1d200(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  uVar9 = *(ulong *)(param_1 + 0x98);
  func_0x000108f496f4(uVar9,*(undefined8 *)(param_1 + 0xa0));
  if ((uVar9 & 1) == 0) {
    uVar10 = *(ulong *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar10;
    func_0x00010c22c2a0();
    _objc_release(uVar10);
    if ((uVar9 & 1) == 0) {
      func_0x000108f57bec();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16ed60(puVar8);
      _objc_release(uVar10);
    }
    func_0x00010befa120(puVar1);
  }
  puVar7 = PTR_PTR_1126b10a0;
  ppuVar11 = &PTR____CFConstantStringClassReference_110dbb618;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_e8,auStack_80);
  puVar12 = puVar7;
  func_0x00010bf1d200(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(ppuVar11);
  puVar7 = PTR_PTR_1126b10a8;
  _objc_alloc();
  puVar13 = puVar7;
  func_0x000108f57b74();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  func_0x00010bf51e00(puVar1);
  func_0x00010c019f40();
  uVar15 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar7;
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x48));
  func_0x00010c10af80(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar12);
  _objc_destroyWeak(auStack_e8);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105b10c2c; end: 105b10ccf;  */

void FUN_105b10c2c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b10cd0; end: 105b10cfb;  */

void FUN_105b10cd0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7a840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b10cfc; end: 105b10dbb;  */

void FUN_105b10cfc(long param_1,undefined8 param_2)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 105b10dbc; end: 105b10e2f;  */

void FUN_105b10dbc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ff1e0();
    _objc_release(uVar2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf7a860();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105b10e30; end: 105b10ed3;  */

void FUN_105b10e30(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010bf83000(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105b10ed4; end: 105b10eff;  */

void FUN_105b10ed4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7a780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b10f00; end: 105b10f0b; -[SCCustomStoryCreationRouterImpl endCustomStoryTypeSelection] */

void FUN_105b10f00(long param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 105b10f0c; end: 105b10f43; -[SCCustomStoryCreationRouterImpl actionSheetDidDismiss:] */

void FUN_105b10f0c(long param_1)

{
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    return;
  }
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b10f44; end: 105b110e7; -[SCCustomStoryCreationRouterImpl beginPrivateStoryMemberSelectionWithDelegate:] */

void FUN_105b10f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b2890;
  _objc_retain(param_3);
  _objc_alloc();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1e6f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e6f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0539a0();
  _objc_release(ppuVar2);
  puVar3 = PTR_PTR_1126c24a0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(puVar1);
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000108f57c1c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b9e0();
  func_0x00010bf24020(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18));
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 105b110e8; end: 105b1110f;  */

void FUN_105b110e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b11110; end: 105b112a7; -[SCCustomStoryCreationRouterImpl beginCustomStoryMemberSelectionWithDelegate:] */

void FUN_105b11110(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar3 = PTR_PTR_1126b2890;
  _objc_retain(param_3);
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000108f57bbc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0539a0(puVar3,param_2,&PTR____CFConstantStringClassReference_110daafd8,puVar4,1,0,1,0
                     );
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c24a0;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105b112a8;
  puStack_70 = &UNK_11086a520;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  puStack_68 = puVar3;
  _objc_retain(puVar3);
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000108f57c34();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b9e0(puVar4,param_2,puVar5);
  func_0x00010bf24020(uVar6,param_2,uVar7,uVar2,PTR____NSArray0__struct_11034ab48,
                      PTR____NSArray0__struct_11034ab48,&puStack_88,uVar1,puVar4,0,0,0,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar5);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(puStack_68);
  _objc_release(puVar3);
  return;
}



/* Entry: 105b112a8; end: 105b112cf;  */

void FUN_105b112a8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b112d0; end: 105b11467; -[SCCustomStoryCreationRouterImpl beginSharedStoryMemberSelectionWithDelegate:] */

void FUN_105b112d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar3 = PTR_PTR_1126b2890;
  _objc_retain(param_3);
  _objc_alloc();
  puVar4 = puVar3;
  func_0x000108f57bd4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0539a0(puVar3,param_2,&PTR____CFConstantStringClassReference_110daafd8,puVar4,1,0,1,0
                     );
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c24a0;
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105b11468;
  puStack_70 = &UNK_11086a520;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  puStack_68 = puVar3;
  _objc_retain(puVar3);
  _objc_alloc();
  puVar5 = puVar4;
  func_0x000108f57c7c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00b9e0(puVar4,param_2,puVar5);
  func_0x00010bf24020(uVar6,param_2,uVar7,uVar2,PTR____NSArray0__struct_11034ab48,
                      PTR____NSArray0__struct_11034ab48,&puStack_88,uVar1,puVar4,0,0,0,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar5);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18),param_2,uVar6);
  _objc_release(uVar6);
  _objc_release(puStack_68);
  _objc_release(puVar3);
  return;
}



/* Entry: 105b11468; end: 105b1148f;  */

void FUN_105b11468(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105b11490; end: 105b115c7; -[SCCustomStoryCreationRouterImpl showSharedStoryTrustAndSafetyPromptWithOnAccept:uiContainer:] */

void FUN_105b11490(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(ulong *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22c3c0();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar4);
    puVar1 = PTR_PTR_1126c24a8;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105b115c8;
    puStack_68 = &UNK_11084aaa8;
    uStack_60 = uVar4;
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x90);
    lStack_58 = param_3;
    _objc_retain(uVar4);
    func_0x00010c236d60(puVar1,param_2,&puStack_80,0,param_4,uVar5,param_1,0,uVar6);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
    _objc_release(uVar4);
  }
  else {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b115c8; end: 105b1160f;  */

void FUN_105b115c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff280();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000105b1160c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 105b11610; end: 105b1169f; -[SCCustomStoryCreationRouterImpl completeMemberSelectionWithCompletion:] */

void FUN_105b11610(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105b116a0;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf6f440(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105b116a0; end: 105b116e7;  */

void FUN_105b116a0(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105b116d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105b116e8; end: 105b11707; -[SCCustomStoryCreationRouterImpl dismissMemberSelection] */

void FUN_105b116e8(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 105b11708; end: 105b11a73; -[SCCustomStoryCreationRouterImpl beginStoryNameSelectionWithStoryType:delegate:] */

void FUN_105b11708(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_storeWeak(param_1 + 0x78,param_4);
  _objc_initWeak(auStack_78,param_4);
  puVar1 = PTR_PTR_1126aed70;
  ppuVar4 = &PTR____CFConstantStringClassReference_110dbb618;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dbb618,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105b11a74;
  puStack_88 = &UNK_1108482a8;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010beff480(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  puVar2 = PTR_PTR_1126aed70;
  func_0x000108f57ba4();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010beff4c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar4);
  puVar3 = PTR_PTR_1126aed78;
  ppuVar4 = &PTR____CFConstantStringClassReference_110e1e718;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e718,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8c520();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar3;
  _objc_release(uVar7);
  _objc_release(ppuVar4);
  ppuVar4 = *(undefined ***)(param_1 + 0x70);
  func_0x00010c18b5e0(ppuVar4);
  if (param_3 == 1) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110e1e778;
  }
  else {
    if (param_3 == 3) {
      func_0x000108f57c94();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105b11904;
    }
    if (param_3 != 2) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
      goto LAB_105b11904;
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_110e1e798;
  }
  func_0x00010bcbeaa8(ppuVar4,0);
  _objc_retainAutoreleasedReturnValue();
LAB_105b11904:
  lVar5 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  if (lVar6 == 0) {
    lVar8 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  lVar6 = lVar8;
  if (param_3 == 3) {
    func_0x00010901e6c8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2132c0(*(undefined8 *)(param_1 + 0x70));
  _objc_release(puVar3);
  func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x10));
  _objc_release(lVar6);
  _objc_release(ppuVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  return;
}



/* Entry: 105b11a74; end: 105b11b67;  */

void FUN_105b11a74(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  func_0x00010bf84b00(param_2);
  ppuVar2 = param_2;
  func_0x00010c26bc00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain(ppuVar1);
  func_0x00010c2a4be0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c25d0a0(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar3);
  func_0x00010bf7c120(param_1);
  _objc_release(ppuVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 105b11b68; end: 105b11ba7;  */

void FUN_105b11b68(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf72ba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b11ba8; end: 105b11c1b; -[SCCustomStoryCreationRouterImpl dialogDidDismiss:] */

void FUN_105b11ba8(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 == *(long *)(param_1 + 0x70)) {
    param_1 = param_1 + 0x78;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf72ba0();
  }
  else {
    if (param_3 != *(long *)(param_1 + 0x80)) goto LAB_105b11c0c;
    param_1 = param_1 + 0x88;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf74d00();
  }
  _objc_release(param_1);
LAB_105b11c0c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105b11c1c; end: 105b11fcf; -[SCCustomStoryCreationRouterImpl beginStoryNameErrorDialogWithResponseCode:delegate:] */

void FUN_105b11c1c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  ppuVar1 = (undefined **)(param_1 + 0x88);
  _objc_storeWeak(ppuVar1,param_4);
  uVar9 = 0;
  ppuVar8 = (undefined **)0x0;
  if (param_3 < 4) {
    if (param_3 < 2) {
      if (param_3 == 0) {
LAB_105b11d7c:
        ppuVar1 = &PTR____CFConstantStringClassReference_110dc3e98;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3e98,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar1;
        func_0x000108f57ed4();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar7 = (undefined **)0x0;
        if (param_3 != 1) goto LAB_105b11e0c;
        ppuVar1 = &PTR____CFConstantStringClassReference_110dc3e98;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3e98,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar1;
        func_0x000108f57e8c();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (param_3 == 2) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dc3e98;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3e98,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar1;
      func_0x000108f57ea4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar7 = (undefined **)0x0;
      if (param_3 != 3) goto LAB_105b11e0c;
      ppuVar1 = &PTR____CFConstantStringClassReference_110dc3e98;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3e98,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = ppuVar1;
      func_0x000108f57ebc();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    if (param_3 < 6) {
      if (param_3 == 4) {
        ppuVar7 = &PTR____CFConstantStringClassReference_110e1e738;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e738,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar7;
        func_0x000108f57e5c();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar7 = (undefined **)0x0;
        if (param_3 != 5) goto LAB_105b11e0c;
        ppuVar7 = &PTR____CFConstantStringClassReference_110e1e738;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1e738,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar7;
        func_0x000108f57e74();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar9 = 1;
      goto LAB_105b11e0c;
    }
    if (param_3 == 6) goto LAB_105b11d7c;
    ppuVar7 = (undefined **)0x0;
    if (param_3 != 7) goto LAB_105b11e0c;
    func_0x000108f58c0c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar1;
    func_0x000108f58c24();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar9 = 0;
  ppuVar7 = ppuVar1;
LAB_105b11e0c:
  _objc_initWeak(auStack_68,param_4);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_68;
  _objc_copyWeak(auStack_78,puVar5);
  uStack_70 = uVar9;
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  puVar10 = (undefined8 *)(param_1 + 0x80);
  uVar6 = *puVar10;
  *puVar10 = puVar3;
  _objc_release(uVar6);
  _objc_release(puVar4);
  func_0x00010c18b5e0(*puVar10);
  func_0x00010c10eda0(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  func_0x00010bf84b00(puVar5);
  param_4 = param_4 + 0x20;
  _objc_loadWeakRetained(param_4);
  func_0x00010bf74d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105b11fd0; end: 105b12013;  */

void FUN_105b11fd0(long param_1,undefined8 param_2)

{
  func_0x00010bf84b00(param_2,param_2,1,0);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b12014; end: 105b1205b; -[SCCustomStoryCreationRouterImpl webBrowserDidDismiss:] */

void FUN_105b12014(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105b1205c; end: 105b1214b; -[SCCustomStoryCreationRouterImpl .cxx_destruct] */

void FUN_105b1205c(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 105b1214c; end: 105b121df;  */

void FUN_105b1214c(undefined8 param_1,long param_2,ulong param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  if (param_2 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db7338;
    if (param_2 != 2) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e1e7b8;
    }
    if (param_3 < 4) {
      ppuVar2 = (undefined **)(&PTR_PTR_1108d55f0)[param_3];
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e1e7d8;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c0a46f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_logCustomStoryNewStoryActionsOpt_112606bc8,ppuVar1,ppuVar2);
    return;
  }
  return;
}



/* Entry: 105b121e0; end: 105b12367; -[SCCustomStoryCreationWorkflow initWithRouter:delegate:customStoriesDataMutator:storiesBlizzardLogger:storiesGrapheneMetricsEmitter:currentUserId:sourcePageType:sourcePageSessionId:] */

undefined1 *
FUN_105b121e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ebd98;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x70) = 0;
  }
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105b12368; end: 105b12373; -[SCCustomStoryCreationWorkflow beginWorkflow] */

void FUN_105b12368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf17eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_beginCustomStoryTypeSelectionWit_1125a3950,param_1);
  return;
}



/* Entry: 105b12374; end: 105b123a3; -[SCCustomStoryCreationWorkflow startCreatePrivateStoryWithCreationStyle:] */

void FUN_105b12374(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  *(undefined8 *)(param_1 + 0x78) = param_3;
  func_0x00010bf7a840();
  if (*(long *)(param_1 + 0x78) != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db7338;
    if (*(long *)(param_1 + 0x78) != 2) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e1e7b8;
    }
    if (*(ulong *)(param_1 + 0x48) < 4) {
      ppuVar2 = (undefined **)(&PTR_PTR_1108d55f0)[*(ulong *)(param_1 + 0x48)];
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e1e7d8;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c0a46f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_logCustomStoryNewStoryActionsOpt_112606bc8,
               ppuVar1,ppuVar2);
    return;
  }
  return;
}



/* Entry: 105b123a4; end: 105b123d3; -[SCCustomStoryCreationWorkflow startCreateSharedStoryWithCreationStyle:] */

void FUN_105b123a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  *(undefined8 *)(param_1 + 0x78) = param_3;
  func_0x00010bf7a860();
  if (*(long *)(param_1 + 0x78) != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db7338;
    if (*(long *)(param_1 + 0x78) != 2) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e1e7b8;
    }
    if (*(ulong *)(param_1 + 0x48) < 4) {
      ppuVar2 = (undefined **)(&PTR_PTR_1108d55f0)[*(ulong *)(param_1 + 0x48)];
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e1e7d8;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c0a46f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_logCustomStoryNewStoryActionsOpt_112606bc8,
               ppuVar1,ppuVar2);
    return;
  }
  return;
}



/* Entry: 105b123d4; end: 105b1242f; -[SCCustomStoryCreationWorkflow didSelectCreatePrivateStory] */

void FUN_105b123d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x48) = 1;
  uVar1 = 2;
  if (*(long *)(param_1 + 0x30) != 9) {
    uVar1 = 0xffffffffffffffff;
  }
  if (*(long *)(param_1 + 0x30) == 6) {
    uVar1 = 1;
  }
  func_0x00010c0a4640(*(undefined8 *)(param_1 + 0x20),param_2,2,uVar1,
                      *(undefined8 *)(param_1 + 0x40));
  func_0x00010bf94620(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bf18890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_beginPrivateStoryMemberSelection_1125a3bc8,param_1);
  return;
}



/* Entry: 105b12430; end: 105b12487; -[SCCustomStoryCreationWorkflow didSelectCreateCustomStory] */

void FUN_105b12430(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x48) = 2;
  uVar1 = 2;
  if (*(long *)(param_1 + 0x30) != 9) {
    uVar1 = 0xffffffffffffffff;
  }
  if (*(long *)(param_1 + 0x30) == 6) {
    uVar1 = 1;
  }
  func_0x00010c0a4640(*(undefined8 *)(param_1 + 0x20),param_2,0,uVar1,
                      *(undefined8 *)(param_1 + 0x40));
  func_0x00010bf94620(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bf17e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_beginCustomStoryMemberSelectionW_1125a3948,param_1);
  return;
}



/* Entry: 105b12488; end: 105b124e3; -[SCCustomStoryCreationWorkflow didSelectCreateSharedStory] */

void FUN_105b12488(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x48) = 3;
  uVar1 = 2;
  if (*(long *)(param_1 + 0x30) != 9) {
    uVar1 = 0xffffffffffffffff;
  }
  if (*(long *)(param_1 + 0x30) == 6) {
    uVar1 = 1;
  }
  func_0x00010c0a4640(*(undefined8 *)(param_1 + 0x20),param_2,5,uVar1,
                      *(undefined8 *)(param_1 + 0x40));
  func_0x00010bf94620(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bf18a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_beginSharedStoryMemberSelectionW_1125a3c28,param_1);
  return;
}



/* Entry: 105b124e4; end: 105b12527; -[SCCustomStoryCreationWorkflow didSelectCancel] */

void FUN_105b124e4(long param_1)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  func_0x00010bf94620(*(undefined8 *)(param_1 + 8));
  func_0x00010be54c60(param_1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b12528; end: 105b1255f; -[SCCustomStoryCreationWorkflow didDismissFromSwipeOrTap] */

void FUN_105b12528(long param_1)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  func_0x00010be54c60();
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf74ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b12560; end: 105b126b7; -[SCCustomStoryCreationWorkflow didConfirmWithSelectedItems:title:uiContainer:] */

void FUN_105b12560(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x48) == 3) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c239ee0(uVar1);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    func_0x00010bf55a60(param_1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b126b8; end: 105b126ef;  */

void FUN_105b126b8(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf55a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b126f0; end: 105b12827; -[SCCustomStoryCreationWorkflow createCustomStoryWithSelectedItems:title:uiContainer:] */

void FUN_105b126f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  *(undefined1 *)(param_1 + 0x70) = 1;
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf439c0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105b12828; end: 105b1285f;  */

void FUN_105b12828(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdec9c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105b12860; end: 105b12aa3; -[SCCustomStoryCreationWorkflow _createCustomStoryAfterMemeberSelectionWithSelectedItems:title:uiContainer:] */

void FUN_105b12860(undefined1 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  plVar10 = (long *)(param_1 + 0x58);
  *plVar10 = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_retain(param_3);
  puVar6 = auStack_e8;
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(param_3);
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puVar4 = puVar2;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar4;
      func_0x00010bf0a0c0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x50);
      *(undefined **)(param_1 + 0x50) = puVar5;
      _objc_release(uVar8);
      _objc_release(puVar4);
      lVar3 = param_4;
      func_0x00010c08fa60();
      if (lVar3 == 0) {
        puVar7 = *(undefined **)(param_1 + 0x48);
        func_0x00010bf18b00(*(undefined8 *)(param_1 + 8));
      }
      else {
        _objc_retain(param_4);
        uVar8 = *(undefined8 *)(param_1 + 0x68);
        *(long *)(param_1 + 0x68) = param_4;
        _objc_release(uVar8);
        func_0x00010bdec9a0(param_1);
        param_1 = puVar6;
      }
      _objc_release(puVar2);
      _objc_release(param_4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return;
      }
      ___stack_chk_fail();
      _objc_retain(param_1);
      if ((*(byte *)(param_3 + 0x70) & 1) == 0) {
        uVar8 = *(undefined8 *)(param_3 + 8);
        _objc_retain(puVar7);
        func_0x00010bf83d20(uVar8);
        puVar2 = puVar7;
        func_0x000100504554(puVar7,&PTR___NSConcreteGlobalBlock_1108d55a0);
        _objc_release(puVar7);
        uVar8 = *(undefined8 *)(param_3 + 0x50);
        *(undefined **)(param_3 + 0x50) = puVar2;
        _objc_release(uVar8);
        puVar6 = param_1;
        func_0x00010c08fa60();
        if (puVar6 != (undefined1 *)0x0) {
          _objc_retain(param_1);
          uVar8 = *(undefined8 *)(param_3 + 0x68);
          *(undefined1 **)(param_3 + 0x68) = param_1;
          _objc_release(uVar8);
        }
        func_0x00010be54c60(param_3);
        param_3 = param_3 + 0x10;
        _objc_loadWeakRetained(param_3);
        func_0x00010bf74ce0();
        _objc_release(param_3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar9 = *(undefined8 *)(lVar11 * 8);
      uVar8 = uVar9;
      func_0x000108425a5c();
      if ((int)uVar8 == 0) {
        uVar8 = uVar9;
        func_0x000108425b30();
        if ((int)uVar8 != 0) {
          *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
          func_0x000108425f4c(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar2);
          goto LAB_105b12994;
        }
      }
      else {
        *plVar10 = *plVar10 + 1;
        func_0x000108425950(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
LAB_105b12994:
        _objc_release(uVar9);
      }
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    puVar6 = auStack_e8;
    lVar3 = param_3;
    func_0x00010bf52a60();
  } while( true );
}


