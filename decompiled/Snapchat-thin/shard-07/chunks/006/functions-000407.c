/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105779630; end: 10577965b;  */

void FUN_105779630(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec03c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10577965c; end: 10577970b; -[SCAdWebViewPrefetchHintsLoadWorker _startLoadPrefetchHints] */

void FUN_10577965c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010c2a3bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c107720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf162c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09b640(lVar1,param_2,uVar2,puVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10577970c; end: 105779807; -[SCAdWebViewPrefetchHintsLoadWorker webView:didFinishNavigation:] */

void FUN_10577970c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c2a3bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb840();
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105779808; end: 105779833;  */

void FUN_105779808(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be900a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105779834; end: 10577991f; -[SCAdWebViewPrefetchHintsLoadWorker _reportPrefetchHintsLoadComplete] */

void FUN_105779834(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  
  func_0x00010028941c();
  dVar5 = *(double *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c2a4380();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bde68;
  func_0x00010c107780(PTR_PTR_1126bde68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(uVar4,param_3,puVar2,(long)((param_1 - dVar5) * 1000.0));
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar1);
  lVar3 = param_2 + 0x18;
  _objc_loadWeakRetained(lVar3);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010c2a3bc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c107760(lVar3,param_3,uVar4,param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 105779920; end: 1057799c7; -[SCAdWebViewPrefetchHintsLoadWorker webView] */

void FUN_105779920(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf91a80();
    uVar3 = uVar1;
    func_0x00010c1199c0(uVar1,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010c1cb840(*(undefined8 *)(param_1 + 0x30),param_2,param_1);
    lVar5 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 1057799c8; end: 105779a3b; -[SCAdWebViewPrefetchHintsLoadWorker .cxx_destruct] */

void FUN_1057799c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105779a3c; end: 105779b37; -[SCAdWebViewPrefetchHintsLoadWorkerProvider initWithBrowserViewProvider:webBrowsingConfigProvider:queuePerformer:grapheneRegistry:] */

undefined1 *
FUN_105779a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ea1e8;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105779b38; end: 105779bdb; -[SCAdWebViewPrefetchHintsLoadWorkerProvider createPrefetchHintsLoadWorker:prefetchHintsId:delegate:] */

void FUN_105779b38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bde80;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038500();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105779bdc; end: 105779c23; -[SCAdWebViewPrefetchHintsLoadWorkerProvider .cxx_destruct] */

void FUN_105779bdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105779c24; end: 105779e0f; -[SCAdWebViewPrefetchHintsManagerImpl initWithPrefetchHintsDataSource:adConfigProvider:adConfigProviderV2:webBrowsingConfigProvider:grapheneRegistry:webViewPool:prefetchHintsLoadWorkerProvider:queuePerformer:] */

undefined1 *
FUN_105779c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

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
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ea1f0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105779e10; end: 105779f6f; -[SCAdWebViewPrefetchHintsManagerImpl preparePrefetchHints:adSwipeUpLikely:isPrefetchOptIn:adType:metadata:completion:] */

void FUN_105779e10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf1f480();
  if ((int)uVar3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf90f80();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_105779f70;
      puStack_70 = &UNK_1108b0810;
      _objc_retain(param_8);
      lStack_68 = param_8;
      func_0x00010c109d60(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,&puStack_88);
      _objc_release(lStack_68);
      goto LAB_105779f38;
    }
  }
  else {
    _objc_release(uVar1);
  }
  (**(code **)(param_8 + 0x10))(param_8);
LAB_105779f38:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 105779f70; end: 105779f7b;  */

void FUN_105779f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105779f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105779f7c; end: 10577a467; -[SCAdWebViewPrefetchHintsManagerImpl prepareAndLoadPrefetchHintsFor:] */

void FUN_105779f7c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
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
  undefined8 uVar17;
  long lStack_2a0;
  long lStack_298;
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf90f80();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      lStack_1c8 = 0;
      uStack_1d0 = 0;
      uStack_1b8 = 0;
      plStack_1c0 = (long *)0x0;
      _objc_retain(param_3);
      lStack_2a0 = param_3;
      func_0x00010bf52a60();
      if (lStack_2a0 != 0) {
        lVar13 = *plStack_1c0;
        do {
          lStack_298 = 0;
          do {
            if (*plStack_1c0 != lVar13) {
              _objc_enumerationMutation(param_3);
            }
            lVar4 = *(long *)(lStack_1c8 + lStack_298 * 8);
            lStack_208 = 0;
            uStack_210 = 0;
            uStack_1f8 = 0;
            plStack_200 = (long *)0x0;
            uStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1d8 = 0;
            uStack_1e0 = 0;
            lVar5 = lVar4;
            func_0x00010bef52c0();
            _objc_retainAutoreleasedReturnValue();
            lVar6 = lVar5;
            func_0x00010bf52a60();
            if (lVar6 != 0) {
              lVar14 = *plStack_200;
              do {
                lVar15 = 0;
                do {
                  if (*plStack_200 != lVar14) {
                    _objc_enumerationMutation(lVar5);
                  }
                  lVar16 = *(long *)(lStack_208 + lVar15 * 8);
                  lVar7 = lVar16;
                  func_0x00010bef60a0();
                  if (lVar7 == 3) {
                    lVar7 = lVar16;
                    func_0x00010bf5ac40();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    if (lVar7 != 0) {
                      lVar7 = lVar16;
                      func_0x00010c242040();
                      _objc_retainAutoreleasedReturnValue();
                      lVar8 = lVar7;
                      func_0x00010bf20540();
                      _objc_retainAutoreleasedReturnValue();
                      lVar9 = lVar8;
                      func_0x00010c2a4740();
                      _objc_retainAutoreleasedReturnValue();
                      lVar10 = lVar9;
                      func_0x00010c2a4740();
                      _objc_retainAutoreleasedReturnValue();
                      lVar11 = lVar10;
                      func_0x00010c28f340();
                      _objc_retainAutoreleasedReturnValue();
                      lVar12 = lVar11;
                      FUN_10577b728();
                      _objc_release(lVar11);
                      _objc_release(lVar10);
                      _objc_release(lVar9);
                      _objc_release(lVar8);
                      _objc_release(lVar7);
                      if ((int)lVar12 != 0) {
                        puStack_238 = &uStack_240;
                        uStack_240 = 0;
                        uStack_230 = 0x3032000000;
                        pcStack_228 = FUN_10577a468;
                        uStack_220 = 0x10577a478;
                        lVar7 = lVar16;
                        func_0x00010bf5ac40();
                        _objc_retainAutoreleasedReturnValue();
                        lVar8 = lVar16;
                        lStack_218 = lVar7;
                        func_0x00010c242040(lVar16);
                        _objc_retainAutoreleasedReturnValue();
                        lVar7 = lVar8;
                        func_0x00010bf20540();
                        _objc_retainAutoreleasedReturnValue();
                        lVar9 = lVar7;
                        func_0x00010c2a4740();
                        _objc_retainAutoreleasedReturnValue();
                        func_0x00010bf1d600();
                        _objc_release(lVar9);
                        _objc_release(lVar7);
                        _objc_release(lVar8);
                        lVar7 = lVar16;
                        func_0x00010c242040(lVar16);
                        _objc_retainAutoreleasedReturnValue();
                        lVar8 = lVar7;
                        func_0x00010bf20540();
                        _objc_retainAutoreleasedReturnValue();
                        lVar9 = lVar8;
                        func_0x00010c2a4740();
                        _objc_retainAutoreleasedReturnValue();
                        lVar10 = lVar9;
                        func_0x00010c0cc0c0();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_release(lVar9);
                        _objc_release(lVar8);
                        _objc_release(lVar7);
                        _objc_initWeak(auStack_248,param_1);
                        uVar17 = *(undefined8 *)(param_1 + 8);
                        func_0x00010bef5840(lVar4);
                        func_0x00010bef60a0(lVar16);
                        _objc_copyWeak(auStack_250,auStack_248);
                        func_0x00010c109d60(uVar17);
                        _objc_destroyWeak(auStack_250);
                        _objc_destroyWeak(auStack_248);
                        _objc_release(lVar10);
                        __Block_object_dispose(&uStack_240,8);
                        _objc_release(lStack_218);
                      }
                    }
                  }
                  lVar15 = lVar15 + 1;
                } while (lVar6 != lVar15);
                lVar6 = lVar5;
                func_0x00010bf52a60();
              } while (lVar6 != 0);
            }
            _objc_release(lVar5);
            lStack_298 = lStack_298 + 1;
          } while (lStack_298 != lStack_2a0);
          lStack_2a0 = param_3;
          func_0x00010bf52a60();
        } while (lStack_2a0 != 0);
      }
      _objc_release(param_3);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_250);
  _objc_destroyWeak(auStack_248);
  lVar13 = 8;
  __Block_object_dispose(&uStack_240);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar13 + 0x28);
  *(undefined8 *)(lVar13 + 0x28) = 0;
  return;
}



/* Entry: 10577a468; end: 10577a47f;  */

void FUN_10577a468(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10577a480; end: 10577a4e3;  */

void FUN_10577a480(long param_1,long param_2)

{
  if (param_2 != 0) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010be4e460();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10577a4e4; end: 10577a567; -[SCAdWebViewPrefetchHintsManagerImpl retrievePrefetchHintsWithPrefetchHintsId:] */

void FUN_10577a4e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90f80();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c13ede0(uVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10577a568; end: 10577a613; -[SCAdWebViewPrefetchHintsManagerImpl prefetchHintsLoadComplete:webview:] */

void FUN_10577a568(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90f80();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf26ba0();
    _objc_release(uVar3);
    func_0x00010be8a5e0(param_1,param_2,param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10577a614; end: 10577a713; -[SCAdWebViewPrefetchHintsManagerImpl _loadPrefetchHints:prefetchHintsId:] */

void FUN_10577a614(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
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



/* Entry: 10577a714; end: 10577a747;  */

void FUN_10577a714(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec03e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10577a748; end: 10577a7eb; -[SCAdWebViewPrefetchHintsManagerImpl _startLoadPrefetchHints:prefetchHintsId:] */

void FUN_10577a748(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfda7a0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010bebe860(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f1a0();
    _objc_release(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10577a7ec; end: 10577a893; -[SCAdWebViewPrefetchHintsManagerImpl _spawnWorkerForPrefetchHints:prefetchHintsId:] */

void FUN_10577a7ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c0e00e0(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf57d80(uVar2,param_2,param_3,param_4,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x50),param_2,uVar2,param_4);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10577a894; end: 10577a89b; -[SCAdWebViewPrefetchHintsManagerImpl _releaseWorker:] */

void FUN_10577a894(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 10577a89c; end: 10577a92b; -[SCAdWebViewPrefetchHintsManagerImpl .cxx_destruct] */

void FUN_10577a89c(long param_1)

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



/* Entry: 10577a92c; end: 10577aa4f; -[SCAdWebViewPreloadManagerImpl initWithPreloadWorkerProvider:adConfigProvider:grapheneRegistry:webViewPool:] */

undefined1 *
FUN_10577a92c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ea1f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10577aa50; end: 10577aa53; -[SCAdWebViewPreloadManagerImpl preloadWebUrlFor:] */

void FUN_10577aa50(void)

{
  return;
}



/* Entry: 10577aa54; end: 10577ab7b; -[SCAdWebViewPreloadManagerImpl preloadComplete:] */

void FUN_10577aa54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2bd360();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b65a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c108d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf26bc0(uVar4,param_2,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  func_0x00010c1287c0(param_1,param_2,param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10577ab7c; end: 10577abd7; -[SCAdWebViewPreloadManagerImpl preloadFail:] */

void FUN_10577ab7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  func_0x00010c1287c0(param_1,param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10577abd8; end: 10577ac5b; -[SCAdWebViewPreloadManagerImpl preloadWebUrl:] */

void FUN_10577abd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfda800();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c248180(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c108c00();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10577ac5c; end: 10577acab; -[SCAdWebViewPreloadManagerImpl activePreloadWorkerSize] */

undefined8 FUN_10577ac5c(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf529e0(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x30);
  return uVar1;
}



/* Entry: 10577acac; end: 10577ad3f; -[SCAdWebViewPreloadManagerImpl spawnWorker] */

void FUN_10577acac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf5a160(uVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = uVar1;
  func_0x00010c2bd440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10577ad40; end: 10577ad7f; -[SCAdWebViewPreloadManagerImpl releaseWorker:] */

void FUN_10577ad40(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_assert_owner(param_1 + 0x30);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10577ad80; end: 10577add3; -[SCAdWebViewPreloadManagerImpl .cxx_destruct] */

void FUN_10577ad80(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10577add4; end: 10577af07; -[SCAdWebViewPreloadWorker initWithWorkerId:preloadWorkerDelegate:browserViewProvider:webViewPool:grapheneRegistry:] */

undefined1 *
FUN_10577add4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ea200;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined ***)((long)puVar1 + 0x38) = &PTR____CFConstantStringClassReference_110daafd8;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10577af08; end: 10577afef; -[SCAdWebViewPreloadWorker preloadWebsite:] */

void FUN_10577af08(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c1e0920(param_1);
    _objc_initWeak(auStack_28,param_1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10577aff0;
    puStack_40 = &UNK_110841fb0;
    _objc_copyWeak(auStack_30,auStack_28);
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
    _objc_release(lStack_38);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10577aff0; end: 10577b023;  */

void FUN_10577aff0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be77c40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10577b024; end: 10577b0bb; -[SCAdWebViewPreloadWorker _preloadUrl:] */

void FUN_10577b024(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
  func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010028941c();
  *(undefined8 *)(param_2 + 0x28) = param_1;
  func_0x00010c2a3bc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09c060();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10577b0bc; end: 10577b2c3; -[SCAdWebViewPreloadWorker webView] */

void FUN_10577b0bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x40);
  if (lVar10 == 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1;
    func_0x00010bf39b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar10 != 0) {
      lVar1 = lVar10;
      func_0x00010bf46560(lVar10);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c1067a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b65a0();
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010c1cb840(lVar10,param_2,param_1);
      _objc_retain(lVar10);
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      *(long *)(param_1 + 0x40) = lVar10;
      _objc_release(uVar3);
      goto LAB_10577b174;
    }
    puVar4 = PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48;
    _objc_alloc_init(PTR__OBJC_CLASS___WKWebViewConfiguration_1126bde48);
    puVar5 = PTR__OBJC_CLASS___WKPreferences_1126bde50;
    _objc_opt_new(PTR__OBJC_CLASS___WKPreferences_1126bde50);
    func_0x00010c1b65a0();
    func_0x00010c1dfdc0(puVar4,param_2,puVar5);
    func_0x00010c189540(puVar4,param_2,5);
    func_0x00010c167600(puVar4,param_2,1);
    puVar7 = PTR_PTR_1126af390;
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    lVar10 = param_1;
    func_0x00010c108d20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar6,param_2,lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf07bc0(puVar7,param_2,puVar6,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c169940(puVar4,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar10);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar8;
    func_0x00010c2a4500(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    _objc_release(uVar9);
    _objc_release(uVar8);
    func_0x00010c1cb840(*(undefined8 *)(param_1 + 0x40),param_2,param_1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    lVar10 = *(long *)(param_1 + 0x40);
  }
  _objc_retain(lVar10);
LAB_10577b174:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
  return;
}



/* Entry: 10577b2c4; end: 10577b41f; -[SCAdWebViewPreloadWorker webView:didFinishNavigation:] */

void FUN_10577b2c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a43a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bde88;
  func_0x00010c108b20(PTR_PTR_1126bde88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010028941c();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2a43a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bde88;
  func_0x00010c108780(PTR_PTR_1126bde88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar5 = uVar4;
  _objc_opt_respondsToSelector();
  _objc_release(uVar4);
  if ((uVar5 & 1) != 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c108600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10577b420; end: 10577b4ef; -[SCAdWebViewPreloadWorker webView:didFailNavigation:withError:] */

void FUN_10577b420(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c2a43a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bde88;
  func_0x00010c1086e0(PTR_PTR_1126bde88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar6);
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar1);
  uVar3 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar4 = uVar3;
  _objc_opt_respondsToSelector();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    lVar5 = param_1 + 8;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c108700();
    _objc_release(lVar5);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 10577b4f0; end: 10577b4f7; -[SCAdWebViewPreloadWorker workerId] */

undefined8 FUN_10577b4f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10577b4f8; end: 10577b4ff; -[SCAdWebViewPreloadWorker preloadedUrl] */

undefined8 FUN_10577b4f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10577b500; end: 10577b507; -[SCAdWebViewPreloadWorker setPreloadedUrl:] */

void FUN_10577b500(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10577b508; end: 10577b50f; -[SCAdWebViewPreloadWorker wkWebView] */

undefined8 FUN_10577b508(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10577b510; end: 10577b53f; -[SCAdWebViewPreloadWorker setWkWebView:] */

void FUN_10577b510(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10577b540; end: 10577b5a7; -[SCAdWebViewPreloadWorker .cxx_destruct] */

void FUN_10577b540(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10577b5a8; end: 10577b673; -[SCAdWebViewPreloadWorkerProvider initWithBrowserViewProvider:webViewPool:grapheneRegistry:] */

undefined1 *
FUN_10577b5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ea208;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10577b674; end: 10577b6eb; -[SCAdWebViewPreloadWorkerProvider createWebViewPreloadWorkerWithDelegate:] */

void FUN_10577b674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bde90;
  _objc_alloc(PTR_PTR_1126bde90);
  func_0x00010c063440();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10577b6ec; end: 10577b727; -[SCAdWebViewPreloadWorkerProvider .cxx_destruct] */

void FUN_10577b6ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10577b728; end: 10577b7db;  */

undefined8 FUN_10577b728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bfb6820();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c08fa60();
  if (((puVar4 == (undefined *)0x0) ||
      (puVar4 = puVar2,
      func_0x00010c0720c0(puVar2,param_2,&PTR____CFConstantStringClassReference_110dacf38),
      (int)puVar4 != 0)) && (puVar4 = puVar3, func_0x00010c08fa60(), puVar4 != (undefined *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return uVar5;
}



/* Entry: 10577b7dc; end: 10577bc5b;  */

undefined ** FUN_10577b7dc(undefined *param_1,long param_2,long param_3,int param_4)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined1 *puStack_2f0;
  code *pcStack_2e8;
  ulong uStack_2e0;
  undefined **ppuStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  int iStack_2b4;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iStack_2b4 = param_4;
  _objc_retain();
  lStack_2c0 = param_2;
  _objc_retain(param_2);
  lStack_2c8 = param_3;
  _objc_retain(param_3);
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  puStack_2d0 = param_1;
  func_0x00010bf52a60();
  if (param_1 == (undefined *)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dfd8f8;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dfd8f8;
    lVar9 = *plStack_220;
    do {
      puVar7 = (undefined *)0x0;
      ppuVar3 = ppuVar2;
      do {
        if (*plStack_220 != lVar9) {
          _objc_enumerationMutation(puStack_2d0);
        }
        uVar10 = *(ulong *)(lStack_228 + (long)puVar7 * 8);
        _objc_retain(uVar10);
        uVar1 = uVar10;
        func_0x00010bf4bb00();
        ppuVar4 = &PTR____CFConstantStringClassReference_110dfd9d8;
        if ((uVar1 & 1) == 0) {
          uVar1 = uVar10;
          func_0x00010bf4bb00();
          ppuVar4 = &PTR____CFConstantStringClassReference_110dbf3b8;
          if ((uVar1 & 1) == 0) {
            uVar1 = uVar10;
            func_0x00010bf4bb00();
            ppuVar4 = &PTR____CFConstantStringClassReference_110dbff38;
            if ((int)uVar1 == 0) {
              ppuVar4 = &PTR____CFConstantStringClassReference_110db6dd8;
            }
          }
        }
        _objc_release(uVar10);
        _objc_retain(ppuVar4);
        uVar1 = uVar10;
        func_0x00010c08fa60();
        ppuVar2 = ppuVar3;
        if (uVar1 != 0) {
          puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uStack_2e0 = uVar10;
          ppuStack_2d8 = ppuVar4;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ce40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar3);
          _objc_release(puVar5);
        }
        _objc_release(ppuVar4);
        puVar7 = puVar7 + 1;
        ppuVar3 = ppuVar2;
      } while (param_1 != puVar7);
      param_1 = puStack_2d0;
      func_0x00010bf52a60();
    } while (param_1 != (undefined *)0x0);
  }
  lVar9 = lStack_2c0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  _objc_retain(lStack_2c0);
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar6 = *plStack_260;
    do {
      lVar8 = 0;
      do {
        if (*plStack_260 != lVar6) {
          _objc_enumerationMutation(lStack_2c0);
        }
        uVar10 = *(ulong *)(lStack_268 + lVar8 * 8);
        uVar1 = uVar10;
        func_0x00010c08fa60();
        if (uVar1 != 0) {
          puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uStack_2e0 = uVar10;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar2;
          func_0x00010c25ce40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar2);
          ppuVar2 = ppuVar3;
          if (iStack_2b4 != 0) {
            puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            uStack_2e0 = uVar10;
            func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ce40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar3);
            _objc_release(puVar5);
          }
          _objc_release(puVar7);
        }
        lVar8 = lVar8 + 1;
      } while (lVar9 != lVar8);
      lVar9 = lStack_2c0;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(lStack_2c0);
  lVar9 = lStack_2c8;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  _objc_retain(lStack_2c8);
  func_0x00010bf52a60();
  if (lVar9 != 0) {
    lVar6 = *plStack_2a0;
    do {
      lVar8 = 0;
      ppuVar3 = ppuVar2;
      do {
        if (*plStack_2a0 != lVar6) {
          _objc_enumerationMutation(lStack_2c8);
        }
        uVar10 = *(ulong *)(lStack_2a8 + lVar8 * 8);
        uVar1 = uVar10;
        func_0x00010c08fa60();
        ppuVar2 = ppuVar3;
        if (uVar1 != 0) {
          puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          uStack_2e0 = uVar10;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ce40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar3);
          _objc_release(puVar7);
        }
        lVar8 = lVar8 + 1;
        ppuVar3 = ppuVar2;
      } while (lVar9 != lVar8);
      lVar9 = lStack_2c8;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  lVar9 = lStack_2c8;
  _objc_release(lStack_2c8);
  ppuVar3 = ppuVar2;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(lVar9);
  _objc_release(lStack_2c0);
  puVar7 = puStack_2d0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar4 = &puStack_310;
    pcStack_2e8 = FUN_10577bc5c;
    puStack_308 = PTR_PTR_1126ea210;
    puStack_310 = puVar7;
    ppuStack_300 = ppuVar2;
    ppuStack_2f8 = ppuVar3;
    puStack_2f0 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&puStack_310,PTR_s_init_1125d9248);
    if (ppuVar4 != (undefined **)0x0) {
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = ppuVar4[1];
      ppuVar4[1] = puVar7;
      _objc_release(puVar5);
      *(undefined4 *)(ppuVar4 + 2) = 0;
    }
    return ppuVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return ppuVar3;
}



/* Entry: 10577bc5c; end: 10577bccb; -[SCWebBrowsingScriptCacheImpl init] */

undefined1 * FUN_10577bc5c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea210;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10577bccc; end: 10577bd5f; -[SCWebBrowsingScriptCacheImpl cacheScriptString:forUrl:] */

void FUN_10577bccc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_3, func_0x00010c08fa60(), lVar1 != 0)) {
    _os_unfair_lock_lock(param_1 + 0x10);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10577bd60; end: 10577bddb; -[SCWebBrowsingScriptCacheImpl getScriptStringForUrl:] */

void FUN_10577bd60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10577bddc; end: 10577bde7; -[SCWebBrowsingScriptCacheImpl .cxx_destruct] */

void FUN_10577bddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10577bde8; end: 10577be13; +[SCGrapheneWebViewPrefetchMetric download] */

void FUN_10577bde8(void)

{
  _objc_alloc(PTR_PTR_1126bde68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577be14; end: 10577be3f; +[SCGrapheneWebViewPrefetchMetric downloadSuccess] */

void FUN_10577be14(void)

{
  _objc_alloc(PTR_PTR_1126bde68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577be40; end: 10577be6b; +[SCGrapheneWebViewPrefetchMetric downloadFail] */

void FUN_10577be40(void)

{
  _objc_alloc(PTR_PTR_1126bde68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577be6c; end: 10577be97; +[SCGrapheneWebViewPrefetchMetric downloadCacheHit] */

void FUN_10577be6c(void)

{
  _objc_alloc(PTR_PTR_1126bde68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577be98; end: 10577bec3; +[SCGrapheneWebViewPrefetchMetric loadSuccess] */

void FUN_10577be98(void)

{
  _objc_alloc(PTR_PTR_1126bde68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577bec4; end: 10577beef; +[SCGrapheneWebViewPrefetchMetric loadFail] */

void FUN_10577bec4(void)

{
  _objc_alloc(PTR_PTR_1126bde68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577bef0; end: 10577bf1b; +[SCGrapheneWebViewPrefetchMetric loadParseError] */

void FUN_10577bef0(void)

{
  _objc_alloc(PTR_PTR_1126bde68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577bf1c; end: 10577bf47; +[SCGrapheneWebViewPrefetchMetric workerLoad] */

void FUN_10577bf1c(void)

{
  _objc_alloc(PTR_PTR_1126bde68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577bf48; end: 10577bf73; +[SCGrapheneWebViewPrefetchMetric workerLoadFinish] */

void FUN_10577bf48(void)

{
  _objc_alloc(PTR_PTR_1126bde68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577bf74; end: 10577bf9f; +[SCGrapheneWebViewPrefetchMetric workerLoadFail] */

void FUN_10577bf74(void)

{
  _objc_alloc(PTR_PTR_1126bde68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577bfa0; end: 10577bfcb; +[SCGrapheneWebViewPrefetchMetric noDownload] */

void FUN_10577bfa0(void)

{
  _objc_alloc(PTR_PTR_1126bde68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577bfcc; end: 10577bff7; +[SCGrapheneWebViewPrefetchMetric emptyResources] */

void FUN_10577bfcc(void)

{
  _objc_alloc(PTR_PTR_1126bde68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577bff8; end: 10577c023; +[SCGrapheneWebViewPrefetchMetric resourcesCount] */

void FUN_10577bff8(void)

{
  _objc_alloc(PTR_PTR_1126bde68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577c024; end: 10577c04f; +[SCGrapheneWebViewPrefetchMetric prepareHints] */

void FUN_10577c024(void)

{
  _objc_alloc(PTR_PTR_1126bde68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577c050; end: 10577c07b; +[SCGrapheneWebViewPrefetchMetric cacheHints] */

void FUN_10577c050(void)

{
  _objc_alloc(PTR_PTR_1126bde68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577c07c; end: 10577c0a7; +[SCGrapheneWebViewPrefetchMetric loadFromCache] */

void FUN_10577c07c(void)

{
  _objc_alloc(PTR_PTR_1126bde68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577c0a8; end: 10577c0d3; +[SCGrapheneWebViewPrefetchMetric noMetadata] */

void FUN_10577c0a8(void)

{
  _objc_alloc(PTR_PTR_1126bde68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577c0d4; end: 10577c0ff; +[SCGrapheneWebViewPrefetchMetric prefetchHintsLoadLatency] */

void FUN_10577c0d4(void)

{
  _objc_alloc(PTR_PTR_1126bde68);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577c100; end: 10577c19f; -[SCGrapheneWebViewPrefetchMetric description] */

void FUN_10577c100(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dfda38;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dfda38,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ea218;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10577c1a0; end: 10577c397; -[SCGrapheneRegistry webViewPrefetchGraphene] */

void FUN_10577c1a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10577c228;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bfe78 != -1) {
    func_0x00010002a2fc(0x1136bfe78,&puStack_48);
  }
  uVar1 = uRam00000001136bfe70;
  _objc_retain(uRam00000001136bfe70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10577c398; end: 10577c3c3; +[SCGrapheneWebViewPreloadMetric preloadSuccess] */

void FUN_10577c398(void)

{
  _objc_alloc(PTR_PTR_1126bde88);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577c3c4; end: 10577c3ef; +[SCGrapheneWebViewPreloadMetric preloadError] */

void FUN_10577c3c4(void)

{
  _objc_alloc(PTR_PTR_1126bde88);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577c3f0; end: 10577c41b; +[SCGrapheneWebViewPreloadMetric preloadLatency] */

void FUN_10577c3f0(void)

{
  _objc_alloc(PTR_PTR_1126bde88);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10577c41c; end: 10577c4bb; -[SCGrapheneWebViewPreloadMetric description] */

void FUN_10577c41c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dfdcb8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dfdcb8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ea220;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10577c4bc; end: 10577c613; -[SCGrapheneRegistry webViewPreloadGraphene] */

void FUN_10577c4bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10577c544;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bfe88 != -1) {
    func_0x00010002a2fc(0x1136bfe88,&puStack_48);
  }
  uVar1 = uRam00000001136bfe80;
  _objc_retain(uRam00000001136bfe80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10577c614; end: 10577c68f; +[SCWebViewWebViewPrefetchHints descriptor] */

undefined * FUN_10577c614(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfe90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a620b0,
                        &PTR____CFConstantStringClassReference_110dfdd38,&PTR_DAT_1130fa6f0,
                        &PTR_DAT_1130fa728,8,0x48,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bfe90 = puVar1;
  }
  return puRam00000001136bfe90;
}



/* Entry: 10577c690; end: 10577c71b; +[SCWebViewWebViewPrefetchHints_ResourceLinkInfo descriptor] */

undefined * FUN_10577c690(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfe98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a62100,
                        &PTR____CFConstantStringClassReference_110dfdd58,&PTR_DAT_1130fa6f0,
                        &PTR_DAT_1130fa708,1,0x10,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112a620b0);
    puRam00000001136bfe98 = puVar1;
  }
  return puRam00000001136bfe98;
}



/* Entry: 10577c71c; end: 10577ca2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10577c71c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    lVar9 = param_1 + _DAT_112729278;
    _objc_loadWeakRetained();
    lVar1 = lVar9;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar9);
    if (lVar2 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar2;
      func_0x00010c247060(lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR_PTR_1126bde98;
    _objc_alloc(PTR_PTR_1126bde98);
    lVar1 = param_1 + _DAT_112729270;
    _objc_loadWeakRetained(lVar1);
    lVar4 = lVar1;
    func_0x00010bf4c240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003000(puVar3);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_initWeak(auStack_68,puVar3);
    lVar1 = param_1 + _DAT_112729274;
    _objc_loadWeakRetained(lVar1);
    lVar4 = lVar1;
    func_0x00010bf058c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar4;
    func_0x00010c269d40(lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126ae960;
    puVar5 = PTR_PTR_1126bdea0;
    func_0x00010c247340(PTR_PTR_1126bdea0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c268800(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae970;
    func_0x00010c0b5920(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x11;
    func_0x0001000819a8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c2a14e0(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar10);
    _objc_release(puVar5);
    _objc_release(lVar1);
    puVar10 = PTR_PTR_1126bdea8;
    _objc_alloc(PTR_PTR_1126bdea8);
    lVar1 = param_1 + _DAT_11272926c;
    _objc_loadWeakRetained(lVar1);
    lVar8 = lVar1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04a460(puVar10);
    _objc_release(lVar8);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_70);
    _objc_release(lVar4);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar9);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10577ca30; end: 10577ca5b;  */

void FUN_10577ca30(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c107b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10577ca5c; end: 10577cab7; -[SCSoundServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10577ca5c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729278);
  _objc_destroyWeak(param_1 + _DAT_112729274);
  _objc_destroyWeak(param_1 + _DAT_112729270);
  _objc_destroyWeak(param_1 + _DAT_11272926c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729268);
  return;
}



/* Entry: 10577cab8; end: 10577cb5b; -[SCSoundContentDelivery initWithContentDelivery:graphene:] */

undefined1 *
FUN_10577cab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea228;
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



/* Entry: 10577cb5c; end: 10577cccf; -[SCSoundContentDelivery createPlayerForSound:completion:] */

void FUN_10577cb5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10577cc18;
  puStack_58 = &UNK_1108b08a0;
  uStack_50 = uVar1;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_4);
  _objc_retain(uVar1);
  func_0x00010bdf7c60(param_1,param_2,param_3,&puStack_70);
  _objc_release(uStack_40);
  _objc_release(uStack_50);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 10577ccd0; end: 10577cdf3; -[SCSoundContentDelivery createPlayerFromData:] */

void FUN_10577ccd0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_48;
  
  lStack_48 = 0;
  FUN_10577f428(param_3,&lStack_48);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_48;
  _objc_retain(lStack_48);
  if ((param_3 == 0) || (lVar1 != 0)) {
    puVar2 = PTR_PTR_1126bdeb8;
    func_0x00010c100aa0(PTR_PTR_1126bdeb8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    if (lVar1 == 0) {
      func_0x00010c2ac460(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    func_0x00010bfec2a0(*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar3);
    lVar5 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    puVar2 = PTR_PTR_1126bdeb8;
    func_0x00010c100ac0(PTR_PTR_1126bdeb8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar4);
    _objc_release(puVar2);
    _objc_retain(param_3);
    lVar5 = param_3;
  }
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10577cdf4; end: 10577cf33; -[SCSoundContentDelivery prefetchNotificationSounds] */

void FUN_10577cdf4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bdc34e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puVar6 != (undefined *)0x0) {
    lVar9 = 0;
    do {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dfdd98;
      if (lVar9 != 2) {
        ppuVar1 = (undefined **)0x0;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110dfdd78;
      if (lVar9 != 1) {
        ppuVar2 = ppuVar1;
      }
      if (ppuVar2 != (undefined **)0x0) {
        puVar5 = puVar6;
        func_0x00010bdc2c60(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010bfacbe0(puVar3,param_2,puVar7);
        _objc_release(puVar7);
        if (((ulong)puVar8 & 1) == 0) {
          func_0x00010be98da0(param_1,param_2,lVar9,puVar5);
        }
        _objc_release(puVar5);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 7);
  }
  _objc_release(puVar6);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10577cf34; end: 10577d123; -[SCSoundContentDelivery _dataForSound:completion:] */

void FUN_10577cf34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_10577f3c8(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puVar4 = PTR_PTR_1126b4960;
  FUN_10577f31c(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0c5180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58680(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_3);
  lVar5 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    puVar6 = PTR_PTR_1126b9f60;
    _objc_alloc(PTR_PTR_1126b9f60);
    func_0x00010c040f00();
    _objc_retain(param_4);
    func_0x00010c1267e0(lVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(puVar6);
  }
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 10577d124; end: 10577d137;  */

void FUN_10577d124(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010577d134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  return;
}



/* Entry: 10577d138; end: 10577d27f; -[SCSoundContentDelivery _saveDataForSound:toFile:] */

void FUN_10577d138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10577d1cc;
  puStack_48 = &UNK_1108b08d0;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_4);
  func_0x00010bdf7c60(param_1,param_2,param_3,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 10577d280; end: 10577d2af; -[SCSoundContentDelivery .cxx_destruct] */

void FUN_10577d280(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10577d2b0; end: 10577d4c7; -[SCSoundEffects initWithSoundContentDelivery:graphene:circumstanceEngine:] */

undefined8 *
FUN_10577d2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126ea230;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf1f440(param_5);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    func_0x00010bf11fe0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bdec0;
    _objc_alloc();
    func_0x00010c04a480();
    uVar4 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126bdec0;
    _objc_alloc();
    func_0x00010c04a480();
    uVar4 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10577d4c8; end: 10577d507;  */

void FUN_10577d4c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110dfddf8,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 10577d508; end: 10577d5a3; -[SCSoundEffects dealloc] */

void FUN_10577d508(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c2560c0();
  func_0x00010c255780(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  func_0x00010c255780(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x30) != 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14ca60();
    _objc_release(puVar2);
  }
  puStack_28 = PTR_PTR_1126ea230;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10577d5a4; end: 10577d5b7; -[SCSoundEffects playSound:] */

void FUN_10577d5a4(long param_1)

{
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0fe750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_playOnce__11261d3f0);
  return;
}



/* Entry: 10577d5b8; end: 10577d5bb; -[SCSoundEffects vibrateOnce] */

void FUN_10577d5b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee8910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__vibrateOnce_112597be8);
  return;
}



/* Entry: 10577d5bc; end: 10577d6af; -[SCSoundEffects _startVibration] */

void FUN_10577d5bc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c150360(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  func_0x00010c24ee80(param_1);
  func_0x00010bee8900(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10577d6b0; end: 10577d717;  */

void FUN_10577d6b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bee8900();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (param_1 == 0) {
    func_0x00010c069d00(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


