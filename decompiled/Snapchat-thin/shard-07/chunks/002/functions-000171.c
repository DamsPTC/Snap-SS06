/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105318a50; end: 105318aaf; -[SCPasswordHashRepositoryImpl .cxx_destruct] */

void FUN_105318a50(long param_1)

{
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



/* Entry: 105318ab0; end: 105318b93; -[SCPasswordHashRepositoryImplServiceProvider provide] */

void FUN_105318ab0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b75a0;
  _objc_alloc(PTR_PTR_1126b75a0);
  func_0x00010c0344c0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105318b94; end: 105318d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105318b94(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR_PTR_1126b7598;
    _objc_alloc(PTR_PTR_1126b7598);
    lVar1 = param_1 + _DAT_1127217d4;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_1127217d0;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_1127217d8;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c0f53e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_1127217dc;
    _objc_loadWeakRetained(lVar9);
    lVar10 = lVar9;
    func_0x00010c292f40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0380c0(puVar11,param_2,lVar2,lVar4,lVar8,lVar10);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105318d20; end: 105318d7b; -[SCPasswordHashRepositoryImplServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105318d20(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127217dc);
  _objc_destroyWeak(param_1 + _DAT_1127217d8);
  _objc_destroyWeak(param_1 + _DAT_1127217d4);
  _objc_destroyWeak(param_1 + _DAT_1127217d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127217cc);
  return;
}



/* Entry: 105318d7c; end: 105318da7; +[SCGraphenePasswordHashMetric savePassword] */

void FUN_105318d7c(void)

{
  _objc_alloc(PTR_PTR_1126b7570);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105318da8; end: 105318dd3; +[SCGraphenePasswordHashMetric deletePassword] */

void FUN_105318da8(void)

{
  _objc_alloc(PTR_PTR_1126b7570);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105318dd4; end: 105318dff; +[SCGraphenePasswordHashMetric loadPassword] */

void FUN_105318dd4(void)

{
  _objc_alloc(PTR_PTR_1126b7570);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105318e00; end: 105318e9f; -[SCGraphenePasswordHashMetric description] */

void FUN_105318e00(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd1e18;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dd1e18,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e78a8;
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



/* Entry: 105318ea0; end: 105318ff7; -[SCGrapheneRegistry passwordHashGraphene] */

void FUN_105318ea0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105318f28;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bb4a0 != -1) {
    func_0x00010002a2fc(0x1136bb4a0,&puStack_48);
  }
  uVar1 = uRam00000001136bb498;
  _objc_retain(uRam00000001136bb498);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105318ff8; end: 10531903b; -[SCPagePageViewReporterServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105318ff8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127217e8);
  _objc_destroyWeak(param_1 + _DAT_1127217e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127217e0);
  return;
}



/* Entry: 10531903c; end: 105319043; -[SCPagePageViewReporter setExitEvent:] */

void FUN_10531903c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 105319044; end: 10531904b; -[SCPagePageViewReporter setFriendsFeedBadgeOn:] */

void FUN_105319044(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10531904c; end: 105319053; -[SCPagePageViewReporter setDiscoverFeedBadgeOn:] */

void FUN_10531904c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x31) = param_3;
  return;
}



/* Entry: 105319054; end: 10531905b; -[SCPagePageViewReporter setAddFriendsBadgeOn:] */

void FUN_105319054(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x32) = param_3;
  return;
}



/* Entry: 10531905c; end: 105319063; -[SCPagePageViewReporter setMemoriesBadgeOn:] */

void FUN_10531905c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x33) = param_3;
  return;
}



/* Entry: 105319064; end: 10531906b; -[SCPagePageViewReporter setSpotlightBadgeOn:] */

void FUN_105319064(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x34) = param_3;
  return;
}



/* Entry: 10531906c; end: 10531907b; -[SCPagePageViewReporter setProfileBadgeOn:] */

void FUN_10531906c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x35) = param_3;
  return;
}



/* Entry: 10531907c; end: 105319083; -[SCPagePageViewReporter presentedInteractively] */

undefined1 FUN_10531907c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x36);
}



/* Entry: 105319084; end: 1053190bf; -[SCPagePageViewReporter .cxx_destruct] */

void FUN_105319084(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053190c0; end: 1053190cf; -[SCDeferredDeepLinkStorageServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053190c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272181c);
  return;
}



/* Entry: 1053190d0; end: 1053190ff; -[SCDeferredDeepLinkStoreImpl storeDeferredDeepLinkData:] */

void FUN_1053190d0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105319100; end: 10531910b; -[SCDeferredDeepLinkStoreImpl .cxx_destruct] */

void FUN_105319100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10531910c; end: 105319127;  */

void FUN_10531910c(void)

{
  _objc_alloc_init(PTR_PTR_1126b75d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105319128; end: 105319137; -[SCDiscoverFeedCardConversionServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105319128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721824);
  return;
}



/* Entry: 105319138; end: 1053191d3; -[SCDiscoverFeedCardConverter init] */

undefined1 * FUN_105319138(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e78b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b75e8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b75f0;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b75f8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1053191d4; end: 10531946b; -[SCDiscoverFeedCardConverter MFCGetFeedsResponseToStoriesResponse:feedCardGrapheneMetricsEmitter:isPaginationRequest:] */

void FUN_1053191d4(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 unaff_x25;
  undefined *unaff_x26;
  undefined *puVar12;
  undefined *unaff_x27;
  undefined *puVar13;
  undefined *unaff_x28;
  undefined8 uStack_520;
  long lStack_518;
  long *plStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined1 auStack_4e0 [128];
  long lStack_460;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined8 uStack_410;
  undefined *puStack_408;
  undefined8 **ppuStack_400;
  code *pcStack_3f8;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined1 auStack_390 [128];
  long lStack_310;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined1 *puStack_288;
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
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined4 uStack_13c;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_13c = param_5;
  _objc_retain(param_3);
  puStack_138 = param_4;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b7600;
  _objc_opt_new();
  puVar11 = param_1;
  func_0x00010bdf4520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a2c0(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  puVar11 = param_3;
  func_0x00010c135700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  puVar2 = param_3;
  func_0x00010bfa4600();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = auStack_f0;
  puStack_148 = puVar2;
  func_0x00010bf52a60();
  puVar8 = param_3;
  if (puVar2 != (undefined *)0x0) {
    puVar8 = (undefined *)*puStack_120;
    do {
      param_4 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_120 != puVar8) {
          _objc_enumerationMutation(puStack_148);
        }
        puVar12 = *(undefined **)(lStack_128 + (long)param_4 * 8);
        func_0x00010bee1080(param_1,param_2,puVar1,puVar12,param_3);
        puVar11 = puVar12;
        func_0x00010c15fac0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = puVar11;
        func_0x00010c1605e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = param_1;
        func_0x00010bdf4080(param_1,param_2,unaff_x28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d6200(puVar1,param_2,puVar9);
        _objc_release(puVar9);
        _objc_release(unaff_x28);
        _objc_release(puVar11);
        puVar11 = puVar12;
        func_0x00010bfa3700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa4340(puVar12);
        unaff_x26 = param_1;
        func_0x00010be23040(param_1,param_2,puVar11,puVar12,uStack_13c,puStack_138);
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = puVar1;
        func_0x00010c0ece40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c179880();
        _objc_release(unaff_x27);
        _objc_release(unaff_x26);
        _objc_release(puVar11);
        param_4 = param_4 + 1;
      } while (puVar2 != param_4);
      puVar6 = auStack_f0;
      puVar2 = puStack_148;
      func_0x00010bf52a60(puStack_148,param_2,&uStack_130,puVar6,0x10);
      unaff_x25 = 0;
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puStack_148);
  puVar2 = param_3;
  func_0x00010c125a80();
  func_0x00010c1e96a0(puVar1);
  _objc_release(puStack_138);
  puVar9 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_158 = FUN_10531946c;
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_1b0 = unaff_x28;
    puStack_1a8 = unaff_x27;
    puStack_1a0 = unaff_x26;
    uStack_198 = unaff_x25;
    puStack_190 = puVar11;
    puStack_188 = param_1;
    puStack_180 = param_3;
    puStack_178 = puVar1;
    puStack_170 = param_4;
    puStack_168 = puVar8;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(puVar2);
    puStack_288 = puVar6;
    _objc_retain(puVar6);
    puVar1 = PTR_PTR_1126b7608;
    _objc_opt_new();
    puVar8 = puVar2;
    func_0x00010c135700(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd20(puVar1,param_2,puVar8);
    _objc_release(puVar8);
    puVar8 = puVar9;
    func_0x00010bdf4520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a2c0(puVar1,param_2,puVar8);
    _objc_release(puVar8);
    puVar12 = puVar2;
    func_0x00010bfde1e0();
    if ((int)puVar12 != 0) {
      puVar8 = puVar2;
      func_0x00010c293740();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar8;
      func_0x00010c142580();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eed00(puVar1,param_2,puVar11);
      _objc_release(puVar11);
      _objc_release(puVar8);
    }
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puStack_290 = puVar1;
    _objc_opt_new();
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    puVar1 = puVar2;
    puStack_298 = puVar12;
    func_0x00010bfa4600();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = auStack_240;
    uVar7 = 0x10;
    puStack_2a0 = puVar1;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar10 = *plStack_270;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_270 != lVar10) {
            _objc_enumerationMutation(puStack_2a0);
          }
          puVar13 = *(undefined **)(lStack_278 + (long)puVar8 * 8);
          unaff_x26 = PTR_PTR_1126b7600;
          _objc_opt_new();
          puVar11 = puVar2;
          func_0x00010c135700(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ebd20(unaff_x26,param_2,puVar11);
          _objc_release(puVar11);
          puVar11 = puStack_290;
          func_0x00010c252d60(puStack_290);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c20a2c0(unaff_x26,param_2,puVar11);
          _objc_release(puVar11);
          func_0x00010bee1080(puVar9,param_2,unaff_x26,puVar13,puVar2);
          unaff_x28 = puVar13;
          func_0x00010c15fac0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = unaff_x28;
          func_0x00010c1605e0();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar9;
          func_0x00010bdf4080(puVar9,param_2,puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d6200(unaff_x26,param_2,puVar12);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(unaff_x28);
          puVar12 = puVar13;
          func_0x00010bfa3700(puVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa4340(puVar13);
          puVar11 = puVar9;
          func_0x00010be23040(puVar9,param_2,puVar12,puVar13,0,puStack_288);
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = unaff_x26;
          func_0x00010c0ece40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c179880();
          _objc_release(unaff_x27);
          _objc_release(puVar11);
          _objc_release(puVar12);
          func_0x00010befa120(puStack_298,param_2,unaff_x26);
          _objc_release(unaff_x26);
          puVar8 = puVar8 + 1;
        } while (puVar1 != puVar8);
        puVar6 = auStack_240;
        uVar7 = 0x10;
        puVar1 = puStack_2a0;
        func_0x00010bf52a60(puStack_2a0,param_2,&uStack_280,puVar6);
        unaff_x25 = 0;
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(puStack_2a0);
    puVar1 = puStack_290;
    puVar12 = puStack_298;
    func_0x00010c20c860(puStack_290,param_2,puStack_298);
    puVar13 = puVar2;
    func_0x00010c125a80();
    func_0x00010c1e96a0(puVar1);
    _objc_release(puVar12);
    _objc_release(puStack_288);
    puVar3 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      puStack_2c8 = puVar12;
      puStack_2c0 = puVar1;
      pcStack_2a8 = FUN_1053197e8;
      lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_300 = unaff_x28;
      puStack_2f8 = unaff_x27;
      puStack_2f0 = unaff_x26;
      uStack_2e8 = unaff_x25;
      puStack_2e0 = puVar11;
      puStack_2d8 = puVar8;
      puStack_2d0 = puVar9;
      puStack_2b8 = puVar2;
      ppuStack_2b0 = &puStack_160;
      _objc_retain(puVar13);
      _objc_retain(uVar7);
      puVar1 = PTR_PTR_1126b7608;
      _objc_opt_new();
      puVar11 = puVar1;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ebd20(puVar1,param_2,puVar11);
      _objc_release(puVar11);
      puVar11 = puVar3;
      func_0x00010bdf4520(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a2c0(puVar1,param_2,puVar11);
      _objc_release(puVar11);
      puVar11 = PTR_PTR_1126b7600;
      _objc_opt_new();
      puVar2 = puVar1;
      func_0x00010c135700(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ebd20(puVar11,param_2,puVar2);
      _objc_release(puVar2);
      puStack_3e0 = puVar1;
      func_0x00010c252d60(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a2c0(puVar11,param_2,puVar1);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b7610;
      _objc_opt_new(PTR_PTR_1126b7610);
      func_0x00010c19b0c0(puVar11,param_2,puVar1);
      _objc_release(puVar1);
      puVar1 = puVar11;
      func_0x00010bfa3f40(puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19b200();
      _objc_release(puVar1);
      func_0x00010c196c80(puVar11,param_2,1);
      puVar1 = puVar3;
      func_0x00010bdf4080(puVar3,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_3e8 = puVar11;
      func_0x00010c1d6200(puVar11,param_2,puVar1);
      _objc_release(puVar1);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lStack_3c8 = 0;
      uStack_3d0 = 0;
      uStack_3b8 = 0;
      plStack_3c0 = (long *)0x0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      puStack_3d8 = puVar13;
      func_0x00010bfa3800();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar13;
      func_0x00010bf52a60();
      if (puVar1 != (undefined *)0x0) {
        lVar10 = *plStack_3c0;
        do {
          puVar11 = (undefined *)0x0;
          do {
            if (*plStack_3c0 != lVar10) {
              _objc_enumerationMutation(puVar13);
            }
            unaff_x28 = *(undefined **)(lStack_3c8 + (long)puVar11 * 8);
            func_0x00010bfa3700();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar3;
            func_0x00010be23040(puVar3,param_2,unaff_x28,puVar6,0,uVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(puVar2,param_2,puVar8);
            _objc_release(puVar8);
            _objc_release(unaff_x28);
            puVar11 = puVar11 + 1;
          } while (puVar1 != puVar11);
          puVar1 = puVar13;
          func_0x00010bf52a60(puVar13,param_2,&uStack_3d0,auStack_390,0x10);
          unaff_x27 = (undefined *)0x0;
        } while (puVar1 != (undefined *)0x0);
      }
      _objc_release(puVar13);
      puVar8 = puStack_3e8;
      puVar1 = puStack_3e8;
      func_0x00010c0ece40(puStack_3e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179880();
      _objc_release(puVar1);
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puStack_3e0;
      puVar5 = puVar9;
      func_0x00010c20c860(puStack_3e0);
      _objc_release(puVar9);
      _objc_release(puVar2);
      _objc_release(puVar8);
      _objc_release(uVar7);
      puVar12 = puStack_3d8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_310) {
        ___stack_chk_fail();
        puStack_420 = puVar8;
        puStack_418 = puVar1;
        pcStack_3f8 = FUN_105319b30;
        lStack_460 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_450 = unaff_x28;
        puStack_448 = unaff_x27;
        puStack_440 = puVar13;
        puStack_438 = puVar2;
        puStack_430 = puVar11;
        puStack_428 = puVar3;
        uStack_410 = uVar7;
        puStack_408 = puVar9;
        ppuStack_400 = &ppuStack_2b0;
        _objc_retain(puVar5);
        puVar1 = PTR_PTR_1126b7618;
        _objc_opt_new();
        puVar11 = puVar5;
        func_0x00010c135700(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ebd20(puVar1,param_2,puVar11);
        _objc_release(puVar11);
        puVar11 = puVar12;
        func_0x00010bdf4520(puVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20a2c0(puVar1,param_2,puVar11);
        _objc_release(puVar11);
        puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        lStack_518 = 0;
        uStack_520 = 0;
        uStack_508 = 0;
        plStack_510 = (long *)0x0;
        uStack_4f8 = 0;
        uStack_500 = 0;
        uStack_4e8 = 0;
        uStack_4f0 = 0;
        puVar2 = puVar5;
        func_0x00010bfa3700();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
        func_0x00010bf52a60();
        if (puVar8 != (undefined *)0x0) {
          lVar10 = *plStack_510;
          do {
            puVar9 = (undefined *)0x0;
            do {
              if (*plStack_510 != lVar10) {
                _objc_enumerationMutation(puVar2);
              }
              uVar7 = *(undefined8 *)(lStack_518 + (long)puVar9 * 8);
              puVar13 = puVar12;
              func_0x00010be23020(puVar12,param_2,uVar7,0xf0);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR_PTR_1126b7620;
              _objc_opt_new(PTR_PTR_1126b7620);
              if (puVar13 != (undefined *)0x0) {
                func_0x00010c20cd00(puVar3,param_2,puVar13);
              }
              func_0x00010bfa3740(uVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1805c0(puVar3,param_2,uVar7);
              _objc_release(uVar7);
              puVar4 = puVar12;
              func_0x00010bdf4520(puVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1ed140(puVar3,param_2,puVar4);
              _objc_release(puVar4);
              func_0x00010c1ed840(puVar3,param_2,1);
              func_0x00010c20a2c0(puVar3,param_2,1);
              func_0x00010befa120(puVar11,param_2,puVar3);
              _objc_release(puVar3);
              _objc_release(puVar13);
              puVar9 = puVar9 + 1;
            } while (puVar8 != puVar9);
            puVar8 = puVar2;
            func_0x00010bf52a60(puVar2,param_2,&uStack_520,auStack_4e0,0x10);
          } while (puVar8 != (undefined *)0x0);
        }
        _objc_release(puVar2);
        puVar2 = puVar11;
        func_0x00010c1ed040(puVar1,param_2,puVar11);
        _objc_release(puVar11);
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_460) {
          ___stack_chk_fail();
          puVar1 = PTR_PTR_1126b7628;
          _objc_retain(puVar2);
          _objc_opt_new(puVar1);
          puVar11 = puVar2;
          func_0x00010c135700(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ebd20(puVar1,param_2,puVar11);
          _objc_release(puVar11);
          puVar11 = puVar5;
          func_0x00010bdf4520(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c20a2c0(puVar1,param_2,puVar11);
          _objc_release(puVar11);
          puVar11 = puVar2;
          func_0x00010bfa3700(puVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          puVar2 = puVar11;
          func_0x00010bfb1920(puVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar11);
          puVar11 = puVar5;
          func_0x00010be23020(puVar5,param_2,puVar2,0xf0);
          _objc_retainAutoreleasedReturnValue();
          if (puVar11 != (undefined *)0x0) {
            func_0x00010c20cd00(puVar1,param_2,puVar11);
          }
          puVar8 = PTR_PTR_1126b7620;
          _objc_opt_new(PTR_PTR_1126b7620);
          puVar9 = puVar2;
          func_0x00010bfa3740(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1805c0(puVar8,param_2,puVar9);
          _objc_release(puVar9);
          func_0x00010bdf4520(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ed140(puVar8,param_2,puVar5);
          _objc_release(puVar5);
          func_0x00010c1ed840(puVar8,param_2,1);
          func_0x00010c20a2c0(puVar8,param_2,1);
          func_0x00010c1ed020(puVar1,param_2,puVar8);
          _objc_release(puVar8);
          _objc_release(puVar11);
          _objc_release(puVar2);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10531946c; end: 1053197e7; -[SCDiscoverFeedCardConverter MFCGetFeedsResponseToStoriesBatchResponse:feedCardGrapheneMetricsEmitter:] */

void FUN_10531946c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *unaff_x24;
  undefined8 unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined8 uVar14;
  undefined8 unaff_x28;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined1 auStack_390 [128];
  long lStack_310;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
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
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_138 = param_4;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b7608;
  _objc_opt_new();
  puVar13 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar1,param_2,puVar13);
  _objc_release(puVar13);
  puVar13 = param_1;
  func_0x00010bdf4520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a2c0(puVar1,param_2,puVar13);
  _objc_release(puVar13);
  puVar2 = param_3;
  func_0x00010bfde1e0();
  if ((int)puVar2 != 0) {
    puVar13 = param_3;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = puVar13;
    func_0x00010c142580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eed00(puVar1,param_2,unaff_x24);
    _objc_release(unaff_x24);
    _objc_release(puVar13);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_140 = puVar1;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar1 = param_3;
  puStack_148 = puVar2;
  func_0x00010bfa4600();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_f0;
  uVar10 = 0x10;
  puStack_150 = puVar1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    lVar12 = *plStack_120;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(puStack_150);
        }
        uVar14 = *(undefined8 *)(lStack_128 + (long)puVar13 * 8);
        unaff_x26 = PTR_PTR_1126b7600;
        _objc_opt_new();
        puVar2 = param_3;
        func_0x00010c135700(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ebd20(unaff_x26,param_2,puVar2);
        _objc_release(puVar2);
        puVar2 = puStack_140;
        func_0x00010c252d60(puStack_140);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20a2c0(unaff_x26,param_2,puVar2);
        _objc_release(puVar2);
        func_0x00010bee1080(param_1,param_2,unaff_x26,uVar14,param_3);
        unaff_x28 = uVar14;
        func_0x00010c15fac0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = unaff_x28;
        func_0x00010c1605e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_1;
        func_0x00010bdf4080(param_1,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d6200(unaff_x26,param_2,puVar2);
        _objc_release(puVar2);
        _objc_release(uVar10);
        _objc_release(unaff_x28);
        uVar10 = uVar14;
        func_0x00010bfa3700(uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa4340(uVar14);
        unaff_x24 = param_1;
        func_0x00010be23040(param_1,param_2,uVar10,uVar14,0,uStack_138);
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = unaff_x26;
        func_0x00010c0ece40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c179880();
        _objc_release(unaff_x27);
        _objc_release(unaff_x24);
        _objc_release(uVar10);
        func_0x00010befa120(puStack_148,param_2,unaff_x26);
        _objc_release(unaff_x26);
        puVar13 = puVar13 + 1;
      } while (puVar1 != puVar13);
      puVar9 = auStack_f0;
      uVar10 = 0x10;
      puVar1 = puStack_150;
      func_0x00010bf52a60(puStack_150,param_2,&uStack_130,puVar9);
      unaff_x25 = 0;
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puStack_150);
  puVar1 = puStack_140;
  puVar2 = puStack_148;
  func_0x00010c20c860(puStack_140,param_2,puStack_148);
  puVar3 = param_3;
  func_0x00010c125a80();
  func_0x00010c1e96a0(puVar1);
  _objc_release(puVar2);
  _objc_release(uStack_138);
  puVar11 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puStack_178 = puVar2;
    puStack_170 = puVar1;
    pcStack_158 = FUN_1053197e8;
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_1b0 = unaff_x28;
    puStack_1a8 = unaff_x27;
    puStack_1a0 = unaff_x26;
    uStack_198 = unaff_x25;
    puStack_190 = unaff_x24;
    puStack_188 = puVar13;
    puStack_180 = param_1;
    puStack_168 = param_3;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(puVar3);
    _objc_retain(uVar10);
    puVar1 = PTR_PTR_1126b7608;
    _objc_opt_new();
    puVar13 = puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd20(puVar1,param_2,puVar13);
    _objc_release(puVar13);
    puVar13 = puVar11;
    func_0x00010bdf4520(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a2c0(puVar1,param_2,puVar13);
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126b7600;
    _objc_opt_new();
    puVar2 = puVar1;
    func_0x00010c135700(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd20(puVar13,param_2,puVar2);
    _objc_release(puVar2);
    puStack_290 = puVar1;
    func_0x00010c252d60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a2c0(puVar13,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b7610;
    _objc_opt_new(PTR_PTR_1126b7610);
    func_0x00010c19b0c0(puVar13,param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = puVar13;
    func_0x00010bfa3f40(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19b200();
    _objc_release(puVar1);
    func_0x00010c196c80(puVar13,param_2,1);
    puVar1 = puVar11;
    func_0x00010bdf4080(puVar11,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_298 = puVar13;
    func_0x00010c1d6200(puVar13,param_2,puVar1);
    _objc_release(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    puStack_288 = puVar3;
    func_0x00010bfa3800();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar12 = *plStack_270;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_270 != lVar12) {
            _objc_enumerationMutation(puVar3);
          }
          unaff_x28 = *(undefined8 *)(lStack_278 + (long)puVar13 * 8);
          func_0x00010bfa3700();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar11;
          func_0x00010be23040(puVar11,param_2,unaff_x28,puVar9,0,uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar2,param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(unaff_x28);
          puVar13 = puVar13 + 1;
        } while (puVar1 != puVar13);
        puVar1 = puVar3;
        func_0x00010bf52a60(puVar3,param_2,&uStack_280,auStack_240,0x10);
        unaff_x27 = (undefined *)0x0;
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    puVar4 = puStack_298;
    puVar1 = puStack_298;
    func_0x00010c0ece40(puStack_298);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179880();
    _objc_release(puVar1);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puStack_290;
    puVar8 = puVar5;
    func_0x00010c20c860(puStack_290);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(puVar4);
    _objc_release(uVar10);
    puVar6 = puStack_288;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      puStack_2d0 = puVar4;
      puStack_2c8 = puVar1;
      pcStack_2a8 = FUN_105319b30;
      lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uStack_300 = unaff_x28;
      puStack_2f8 = unaff_x27;
      puStack_2f0 = puVar3;
      puStack_2e8 = puVar2;
      puStack_2e0 = puVar13;
      puStack_2d8 = puVar11;
      uStack_2c0 = uVar10;
      puStack_2b8 = puVar5;
      ppuStack_2b0 = &puStack_160;
      _objc_retain(puVar8);
      puVar1 = PTR_PTR_1126b7618;
      _objc_opt_new();
      puVar13 = puVar8;
      func_0x00010c135700(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ebd20(puVar1,param_2,puVar13);
      _objc_release(puVar13);
      puVar13 = puVar6;
      func_0x00010bdf4520(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a2c0(puVar1,param_2,puVar13);
      _objc_release(puVar13);
      puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      lStack_3c8 = 0;
      uStack_3d0 = 0;
      uStack_3b8 = 0;
      plStack_3c0 = (long *)0x0;
      uStack_3a8 = 0;
      uStack_3b0 = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      puVar2 = puVar8;
      func_0x00010bfa3700();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf52a60();
      if (puVar3 != (undefined *)0x0) {
        lVar12 = *plStack_3c0;
        do {
          puVar11 = (undefined *)0x0;
          do {
            if (*plStack_3c0 != lVar12) {
              _objc_enumerationMutation(puVar2);
            }
            uVar10 = *(undefined8 *)(lStack_3c8 + (long)puVar11 * 8);
            puVar4 = puVar6;
            func_0x00010be23020(puVar6,param_2,uVar10,0xf0);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR_PTR_1126b7620;
            _objc_opt_new(PTR_PTR_1126b7620);
            if (puVar4 != (undefined *)0x0) {
              func_0x00010c20cd00(puVar5,param_2,puVar4);
            }
            func_0x00010bfa3740(uVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1805c0(puVar5,param_2,uVar10);
            _objc_release(uVar10);
            puVar7 = puVar6;
            func_0x00010bdf4520(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1ed140(puVar5,param_2,puVar7);
            _objc_release(puVar7);
            func_0x00010c1ed840(puVar5,param_2,1);
            func_0x00010c20a2c0(puVar5,param_2,1);
            func_0x00010befa120(puVar13,param_2,puVar5);
            _objc_release(puVar5);
            _objc_release(puVar4);
            puVar11 = puVar11 + 1;
          } while (puVar3 != puVar11);
          puVar3 = puVar2;
          func_0x00010bf52a60(puVar2,param_2,&uStack_3d0,auStack_390,0x10);
        } while (puVar3 != (undefined *)0x0);
      }
      _objc_release(puVar2);
      puVar2 = puVar13;
      func_0x00010c1ed040(puVar1,param_2,puVar13);
      _objc_release(puVar13);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_310) {
        ___stack_chk_fail();
        puVar1 = PTR_PTR_1126b7628;
        _objc_retain(puVar2);
        _objc_opt_new(puVar1);
        puVar13 = puVar2;
        func_0x00010c135700(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ebd20(puVar1,param_2,puVar13);
        _objc_release(puVar13);
        puVar13 = puVar8;
        func_0x00010bdf4520(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20a2c0(puVar1,param_2,puVar13);
        _objc_release(puVar13);
        puVar13 = puVar2;
        func_0x00010bfa3700(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        puVar2 = puVar13;
        func_0x00010bfb1920(puVar13);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
        puVar13 = puVar8;
        func_0x00010be23020(puVar8,param_2,puVar2,0xf0);
        _objc_retainAutoreleasedReturnValue();
        if (puVar13 != (undefined *)0x0) {
          func_0x00010c20cd00(puVar1,param_2,puVar13);
        }
        puVar3 = PTR_PTR_1126b7620;
        _objc_opt_new(PTR_PTR_1126b7620);
        puVar11 = puVar2;
        func_0x00010bfa3740(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1805c0(puVar3,param_2,puVar11);
        _objc_release(puVar11);
        func_0x00010bdf4520(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ed140(puVar3,param_2,puVar8);
        _objc_release(puVar8);
        func_0x00010c1ed840(puVar3,param_2,1);
        func_0x00010c20a2c0(puVar3,param_2,1);
        func_0x00010c1ed020(puVar1,param_2,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar13);
        _objc_release(puVar2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053197e8; end: 105319b2f; -[SCDiscoverFeedCardConverter MFCBatchGetFeedCardsByOwnersResponseToStoriesBatchResponse:feedType:feedCardGrapheneMetricsEmitter:] */

void FUN_1053197e8(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 unaff_x27;
  undefined8 uVar12;
  undefined8 unaff_x28;
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
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b7608;
  _objc_opt_new();
  puVar11 = puVar1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar1,param_2,puVar11);
  _objc_release(puVar11);
  uVar12 = param_1;
  func_0x00010bdf4520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a2c0(puVar1,param_2,uVar12);
  _objc_release(uVar12);
  puVar11 = PTR_PTR_1126b7600;
  _objc_opt_new();
  puVar2 = puVar1;
  func_0x00010c135700(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar11,param_2,puVar2);
  _objc_release(puVar2);
  puStack_140 = puVar1;
  func_0x00010c252d60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a2c0(puVar11,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b7610;
  _objc_opt_new(PTR_PTR_1126b7610);
  func_0x00010c19b0c0(puVar11,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = puVar11;
  func_0x00010bfa3f40(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b200();
  _objc_release(puVar1);
  func_0x00010c196c80(puVar11,param_2,1);
  uVar12 = param_1;
  func_0x00010bdf4080(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar11;
  func_0x00010c1d6200(puVar11,param_2,uVar12);
  _objc_release(uVar12);
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
  puStack_138 = param_3;
  func_0x00010bfa3800();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar10 = *plStack_120;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x28 = *(undefined8 *)(lStack_128 + (long)puVar11 * 8);
        func_0x00010bfa3700();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = param_1;
        func_0x00010be23040(param_1,param_2,unaff_x28,param_4,0,param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar1,param_2,uVar12);
        _objc_release(uVar12);
        _objc_release(unaff_x28);
        puVar11 = puVar11 + 1;
      } while (puVar2 != puVar11);
      puVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
      unaff_x27 = 0;
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_3);
  puVar4 = puStack_148;
  puVar2 = puStack_148;
  func_0x00010c0ece40(puStack_148);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179880();
  _objc_release(puVar2);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a100(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puStack_140;
  puVar8 = puVar9;
  func_0x00010c20c860(puStack_140);
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(param_5);
  puVar3 = puStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puStack_180 = puVar4;
    puStack_178 = puVar2;
    pcStack_158 = FUN_105319b30;
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_1b0 = unaff_x28;
    uStack_1a8 = unaff_x27;
    puStack_1a0 = param_3;
    puStack_198 = puVar1;
    puStack_190 = puVar11;
    uStack_188 = param_1;
    uStack_170 = param_5;
    puStack_168 = puVar9;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    puVar2 = PTR_PTR_1126b7618;
    _objc_opt_new();
    puVar11 = puVar8;
    func_0x00010c135700(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd20(puVar2,param_2,puVar11);
    _objc_release(puVar11);
    puVar11 = puVar3;
    func_0x00010bdf4520(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a2c0(puVar2,param_2,puVar11);
    _objc_release(puVar11);
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    puVar1 = puVar8;
    func_0x00010bfa3700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar10 = *plStack_270;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_270 != lVar10) {
            _objc_enumerationMutation(puVar1);
          }
          uVar12 = *(undefined8 *)(lStack_278 + (long)puVar9 * 8);
          puVar5 = puVar3;
          func_0x00010be23020(puVar3,param_2,uVar12,0xf0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126b7620;
          _objc_opt_new(PTR_PTR_1126b7620);
          if (puVar5 != (undefined *)0x0) {
            func_0x00010c20cd00(puVar6,param_2,puVar5);
          }
          func_0x00010bfa3740(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1805c0(puVar6,param_2,uVar12);
          _objc_release(uVar12);
          puVar7 = puVar3;
          func_0x00010bdf4520(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1ed140(puVar6,param_2,puVar7);
          _objc_release(puVar7);
          func_0x00010c1ed840(puVar6,param_2,1);
          func_0x00010c20a2c0(puVar6,param_2,1);
          func_0x00010befa120(puVar11,param_2,puVar6);
          _objc_release(puVar6);
          _objc_release(puVar5);
          puVar9 = puVar9 + 1;
        } while (puVar4 != puVar9);
        puVar4 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,&uStack_280,auStack_240,0x10);
      } while (puVar4 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    puVar1 = puVar11;
    func_0x00010c1ed040(puVar2,param_2,puVar11);
    _objc_release(puVar11);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      puVar2 = PTR_PTR_1126b7628;
      _objc_retain(puVar1);
      _objc_opt_new(puVar2);
      puVar11 = puVar1;
      func_0x00010c135700(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ebd20(puVar2,param_2,puVar11);
      _objc_release(puVar11);
      puVar11 = puVar8;
      func_0x00010bdf4520(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20a2c0(puVar2,param_2,puVar11);
      _objc_release(puVar11);
      puVar11 = puVar1;
      func_0x00010bfa3700(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = puVar11;
      func_0x00010bfb1920(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      puVar11 = puVar8;
      func_0x00010be23020(puVar8,param_2,puVar1,0xf0);
      _objc_retainAutoreleasedReturnValue();
      if (puVar11 != (undefined *)0x0) {
        func_0x00010c20cd00(puVar2,param_2,puVar11);
      }
      puVar4 = PTR_PTR_1126b7620;
      _objc_opt_new(PTR_PTR_1126b7620);
      puVar9 = puVar1;
      func_0x00010bfa3740(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1805c0(puVar4,param_2,puVar9);
      _objc_release(puVar9);
      func_0x00010bdf4520(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ed140(puVar4,param_2,puVar8);
      _objc_release(puVar8);
      func_0x00010c1ed840(puVar4,param_2,1);
      func_0x00010c20a2c0(puVar4,param_2,1);
      func_0x00010c1ed020(puVar2,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar11);
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105319b30; end: 105319d9b; -[SCDiscoverFeedCardConverter MFCGetFeedsResponseToStoriesBatchLookupResponse:feedCardGrapheneMetricsEmitter:] */

void FUN_105319b30(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7618;
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bdf4520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a2c0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_3;
  func_0x00010bfa3700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lVar2);
        }
        uVar10 = *(undefined8 *)(lStack_128 + lVar9 * 8);
        lVar5 = param_1;
        func_0x00010be23020(param_1,param_2,uVar10,0xf0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b7620;
        _objc_opt_new(PTR_PTR_1126b7620);
        if (lVar5 != 0) {
          func_0x00010c20cd00(puVar6,param_2,lVar5);
        }
        func_0x00010bfa3740(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1805c0(puVar6,param_2,uVar10);
        _objc_release(uVar10);
        lVar7 = param_1;
        func_0x00010bdf4520(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ed140(puVar6,param_2,lVar7);
        _objc_release(lVar7);
        func_0x00010c1ed840(puVar6,param_2,1);
        func_0x00010c20a2c0(puVar6,param_2,1);
        func_0x00010befa120(puVar3,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(lVar5);
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar2);
  puVar6 = puVar3;
  func_0x00010c1ed040(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126b7628;
    _objc_retain(puVar6);
    _objc_opt_new(puVar1);
    puVar3 = puVar6;
    func_0x00010c135700(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd20(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    lVar2 = param_3;
    func_0x00010bdf4520(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a2c0(puVar1,param_2,lVar2);
    _objc_release(lVar2);
    puVar3 = puVar6;
    func_0x00010bfa3700(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar3;
    func_0x00010bfb1920(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    lVar2 = param_3;
    func_0x00010be23020(param_3,param_2,puVar6,0xf0);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010c20cd00(puVar1,param_2,lVar2);
    }
    puVar3 = PTR_PTR_1126b7620;
    _objc_opt_new(PTR_PTR_1126b7620);
    puVar8 = puVar6;
    func_0x00010bfa3740(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1805c0(puVar3,param_2,puVar8);
    _objc_release(puVar8);
    func_0x00010bdf4520(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ed140(puVar3,param_2,param_3);
    _objc_release(param_3);
    func_0x00010c1ed840(puVar3,param_2,1);
    func_0x00010c20a2c0(puVar3,param_2,1);
    func_0x00010c1ed020(puVar1,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105319d9c; end: 105319f3b; -[SCDiscoverFeedCardConverter MFCGetFeedsResponseToStoriesLookupResponse:feedCardGrapheneMetricsEmitter:] */

void FUN_105319d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b7628;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010c135700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010bdf4520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a2c0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  uVar2 = param_3;
  func_0x00010bfa3700(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar2;
  func_0x00010bfb1920(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010be23020(param_1,param_2,uVar4,0xf0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010c20cd00(puVar1,param_2,lVar3);
  }
  puVar5 = PTR_PTR_1126b7620;
  _objc_opt_new(PTR_PTR_1126b7620);
  uVar2 = uVar4;
  func_0x00010bfa3740(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1805c0(puVar5,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010bdf4520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ed140(puVar5,param_2,param_1);
  _objc_release(param_1);
  func_0x00010c1ed840(puVar5,param_2,1);
  func_0x00010c20a2c0(puVar5,param_2,1);
  func_0x00010c1ed020(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105319f3c; end: 10531a0cb; -[SCDiscoverFeedCardConverter _getStoryCardFromFeedCardEnvelope:feedType:] */

void FUN_105319f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4bb0;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010bfa36a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = 0;
  func_0x00010c008360(puVar1,param_2,uVar2,&uStack_58);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bf52260();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfa3740();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf52680();
  _objc_release(puVar4);
  _objc_release(puVar3);
  iVar6 = (int)puVar5;
  if (iVar6 - 0x11U < 2) {
    func_0x00010be21cc0(param_1,param_2,param_4,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
  }
  else if (iVar6 == 0x10) {
    uVar2 = param_1;
    func_0x00010be41ac0(param_1,param_2,param_3);
    if ((int)uVar2 == 0) {
      func_0x00010be21ce0(param_1,param_2,param_4,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
    }
    else {
      func_0x00010be20540(param_1,param_2,param_4,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
    }
  }
  else {
    uVar2 = 0;
    if (iVar6 == 0x23) {
      func_0x00010be22a00(param_1,param_2,param_4,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
    }
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10531a0cc; end: 10531a117; -[SCDiscoverFeedCardConverter _createStoriesSteamWithSessionToken:] */

void FUN_10531a0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7630;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c20e580();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10531a118; end: 10531a14b; -[SCDiscoverFeedCardConverter _createSuccessfullyResponseStatus] */

void FUN_10531a118(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7638;
  _objc_opt_new(PTR_PTR_1126b7638);
  func_0x00010c17dba0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10531a14c; end: 10531a1ef; -[SCDiscoverFeedCardConverter _updateStoryRespone:withFeed:getFeedsResponse:] */

void FUN_10531a14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010c293740(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010bfde1e0(param_5);
  _objc_release(param_5);
  func_0x00010bee10a0(param_1,param_2,param_3,param_4,uVar1,uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10531a1f0; end: 10531a3e3; -[SCDiscoverFeedCardConverter _updateStoryRespone:withFeed:userSession:hasUserSession:] */

void FUN_10531a1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b7610;
  _objc_opt_new(PTR_PTR_1126b7610);
  uVar2 = param_4;
  func_0x00010bfa4340(param_4);
  func_0x00010c19b200(puVar1,param_2,uVar2);
  uVar2 = param_4;
  func_0x00010bf85d80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18fca0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bfd8b60();
  if ((int)uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c0b3920(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b3b40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0720(puVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  func_0x00010c19b0c0(param_3,param_2,puVar1);
  uVar2 = param_4;
  func_0x00010bfdade0();
  if ((int)uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c11f9e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf3d480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d0c0(param_3,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c11f9e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1065e0();
    func_0x00010c1dfd00(param_3,param_2,uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_4;
  func_0x00010bfdbea0();
  if ((int)uVar2 != 0) {
    uVar2 = param_4;
    func_0x00010c15fac0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf98260();
    func_0x00010c196c80(param_3,param_2,uVar3);
    _objc_release(uVar2);
  }
  if (param_6 != 0) {
    uVar2 = param_5;
    func_0x00010c142580(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eed00(param_3,param_2,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10531a3e4; end: 10531a53b; -[SCDiscoverFeedCardConverter _getStoryCardsFromCardEnvelopes:feedType:isPaginationRequest:feedCardGrapheneMetricsEmitter:] */

void FUN_10531a3e4(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
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
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
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
  _objc_retain(param_3);
  puVar7 = auStack_e8;
  uVar8 = 0x10;
  puVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar7,0x10);
  if (puVar2 != (undefined *)0x0) {
    lVar9 = *plStack_120;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        lVar3 = param_1;
        func_0x00010be23020(param_1,param_2,*(undefined8 *)(lStack_128 + (long)puVar10 * 8),param_4)
        ;
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x00010befa120(puVar1,param_2,lVar3);
        }
        _objc_release(lVar3);
        puVar10 = puVar10 + 1;
      } while (puVar2 != puVar10);
      puVar7 = auStack_e8;
      uVar8 = 0x10;
      puVar2 = param_3;
      puVar6 = &uStack_130;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,puVar7,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(uVar8);
    _objc_retain(puVar7);
    puVar2 = param_3;
    func_0x00010be70180(param_3,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010bdd2bc0(param_3,param_2,puVar6,uVar8,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010bfb1920(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010bdeee00(param_3,param_2,puVar7,uVar8,puVar10,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    func_0x00010c1b6520(puVar1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar10);
    uVar5 = *(undefined8 *)(param_3 + 8);
    func_0x00010bf58ea0(uVar5,param_2,uVar8,puVar2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    func_0x00010c202bc0(puVar1,param_2,uVar5);
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10531a53c; end: 10531a667; -[SCDiscoverFeedCardConverter _getSingleSnapStoryCardConvertedForFeedType:fromFeedCardEnvelope:feedCard:] */

void FUN_10531a53c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be70180(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdd2bc0(param_1,param_2,param_3,param_5,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfb1920(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bdeee00(param_1,param_2,param_4,param_5,lVar3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1b6520(lVar2,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf58ea0(uVar5,param_2,param_5,lVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c202bc0(lVar2,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10531a668; end: 10531a793; -[SCDiscoverFeedCardConverter _getPublicUserStoryCardConvertedForFeedType:fromFeedCardEnvelope:feedCard:] */

void FUN_10531a668(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be70180(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdd2bc0(param_1,param_2,param_3,param_5,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfb1920(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bdeee00(param_1,param_2,param_4,param_5,lVar3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1b6520(lVar2,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf58180(uVar5,param_2,param_5,lVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c1e59e0(lVar2,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10531a794; end: 10531a8bf; -[SCDiscoverFeedCardConverter _getLongFormStoryCardConvertedForFeedType:fromFeedCardEnvelope:feedCard:] */

void FUN_10531a794(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be70180(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdd2bc0(param_1,param_2,param_3,param_5,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfb1920(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bdeee00(param_1,param_2,param_4,param_5,lVar3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1b6520(lVar2,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf58e60(uVar5,param_2,param_5,lVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c1e5be0(lVar2,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10531a8c0; end: 10531a9eb; -[SCDiscoverFeedCardConverter _getPublisherCardConvertedForFeedType:fromFeedCardEnvelope:feedCard:] */

void FUN_10531a8c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be70180(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdd2bc0(param_1,param_2,param_3,param_5,lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfb1920(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bdeee00(param_1,param_2,param_4,param_5,lVar3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c1b6520(lVar2,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf581a0(uVar5,param_2,param_5,lVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c1e5be0(lVar2,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10531a9ec; end: 10531ab97; -[SCDiscoverFeedCardConverter _isLongFormShow:] */

bool FUN_10531a9ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c2456c0();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    puVar3 = PTR_PTR_1126b7640;
    _objc_alloc();
    lVar2 = param_3;
    func_0x00010c2456a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = 0;
    func_0x00010c008360(puVar3,param_2,lVar4,&uStack_68);
    _objc_release(lVar4);
    _objc_release(lVar2);
    puVar5 = puVar3;
    func_0x00010bfdc2e0();
    if ((int)puVar5 == 0) {
      bVar1 = false;
    }
    else {
      puVar5 = puVar3;
      func_0x00010c23fe00();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfda540();
      if ((int)puVar6 == 0) {
        bVar1 = false;
      }
      else {
        puVar6 = puVar3;
        func_0x00010c23fe00();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bfda560();
        if ((int)puVar8 == 0) {
          bVar1 = false;
        }
        else {
          puVar8 = puVar3;
          func_0x00010c23fe00(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x00010c0fee00();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          func_0x00010c0fef80();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010c157040();
          bVar1 = puVar11 != (undefined *)0x0;
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
        }
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10531ab98; end: 10531b27f; -[SCDiscoverFeedCardConverter _baseStoryCardForFeedType:feedCard:feedSnapsArray:] */

void FUN_10531ab98(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b0ef0;
  _objc_opt_new(PTR_PTR_1126b0ef0);
  uVar2 = param_4;
  func_0x00010bf52260();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd7060();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar2 = param_4;
    func_0x00010bf52260(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa3740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1805c0(puVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf52260();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa3740();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf52680();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 == 0x12) {
      uVar2 = param_5;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c23fe00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c270d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23fb40();
      _objc_release(uVar4);
    }
    else {
      uVar2 = param_4;
      func_0x00010bf52260();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa3740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c298be0();
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_4;
    func_0x00010bf52260();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa3740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf52680();
    uVar4 = param_4;
    func_0x00010bf52260();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfa3740();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar9,param_2,&PTR____CFConstantStringClassReference_110dd1ed8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar1,param_2,puVar9);
    _objc_release(puVar9);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf52260();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa3740();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf52680();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (((int)uVar4 != 6) && ((int)uVar4 != 0x12)) {
      uVar2 = param_4;
      func_0x00010bf52260();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfa3740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf52680();
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar2 = param_4;
    func_0x00010bf52260();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa3740();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_4;
    func_0x00010bf52260();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfa3740();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298be0();
    func_0x00010c14de00(puVar9,param_2,&PTR____CFConstantStringClassReference_110dd1ef8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar7 = puVar9;
    func_0x00010bfde980(puVar9);
    func_0x00010c20d1c0(puVar1,param_2,puVar7);
    uVar2 = param_4;
    func_0x00010bf52260(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfa3740();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_10531c050();
    func_0x00010c20ce00(puVar1,param_2,uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c20d180(puVar1,param_2,param_3);
    func_0x00010c1cdd00(puVar1,param_2,1);
    puVar7 = PTR_PTR_1126b7648;
    _objc_opt_new(PTR_PTR_1126b7648);
    uVar2 = param_4;
    func_0x00010bf2f9e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f640();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf80d20();
    func_0x00010c1af980(puVar7,param_2,(uint)uVar4 ^ 1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c1730e0(puVar1,param_2,puVar7);
    uVar2 = param_4;
    func_0x00010bfd8b60();
    if ((int)uVar2 != 0) {
      uVar2 = param_4;
      func_0x00010c0b3920(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c25b480();
      func_0x00010c20dc20(puVar1,param_2,uVar3);
      _objc_release(uVar2);
    }
    uVar2 = param_4;
    func_0x00010bfdae20();
    if ((int)uVar2 != 0) {
      puVar8 = PTR_PTR_1126b7650;
      _objc_opt_new(PTR_PTR_1126b7650);
      uVar2 = param_4;
      func_0x00010c11fca0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c07d8e0();
      func_0x00010c1b43a0(puVar8,param_2,uVar3);
      _objc_release(uVar2);
      uVar2 = param_4;
      func_0x00010c11fca0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf9cd20();
      func_0x00010c198e20(puVar8,param_2,uVar3);
      _objc_release(uVar2);
      uVar2 = param_4;
      func_0x00010c11fca0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0803a0();
      func_0x00010c1b4d80(puVar8,param_2,uVar3);
      _objc_release(uVar2);
      uVar2 = param_4;
      func_0x00010c11fca0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c06d780();
      func_0x00010c1af9c0(puVar8,param_2,uVar3);
      _objc_release(uVar2);
      uVar2 = param_4;
      func_0x00010c11fca0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0820c0();
      func_0x00010c1b54e0(puVar8,param_2,uVar3);
      _objc_release(uVar2);
      func_0x00010c1b5240(puVar8,param_2,0);
      uVar2 = param_4;
      func_0x00010c11fca0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c11f680();
      func_0x00010c1e7080(puVar8,param_2,uVar3);
      _objc_release(uVar2);
      uVar2 = param_4;
      func_0x00010c11fca0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c11ce20();
      func_0x00010c1e6240(puVar8,param_2,uVar3);
      _objc_release(uVar2);
      func_0x00010c17cfa0(puVar1,param_2,puVar8);
      _objc_release(puVar8);
    }
    uVar2 = param_4;
    func_0x00010bfd5160();
    if ((int)uVar2 != 0) {
      uVar2 = param_4;
      func_0x00010bf2f9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfdce00();
      _objc_release(uVar2);
      if ((int)uVar3 != 0) {
        uVar2 = param_4;
        func_0x00010bf2f9e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c25fd00();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c29efe0();
        func_0x00010c1b4ca0(puVar1,param_2,uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
    }
    _objc_retain(puVar1);
    _objc_release(puVar7);
    _objc_release(puVar9);
    puVar9 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10531b280; end: 10531b4b3; -[SCDiscoverFeedCardConverter _createJaguarClientLoggingForCardEnvelope:feedCard:feedCardSnap:explorationSource:] */

void FUN_10531b280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b7658;
  _objc_opt_new(PTR_PTR_1126b7658);
  puVar6 = param_4;
  func_0x00010bfd8b60();
  if ((int)puVar6 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = param_4;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = param_4;
  func_0x00010c0b3920(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfdec20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185c40(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (param_5 != 0) {
    lVar4 = param_5;
    func_0x00010c241220(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bdc1b20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214920(puVar1,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  if (puVar6 == (undefined *)0x0) {
    func_0x00010c211d80(puVar1,param_2,0);
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ab2e0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161b00(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = puVar6;
    func_0x00010c2693c0(puVar6);
    func_0x00010c211d80(puVar1,param_2,puVar2);
    puVar2 = puVar6;
    func_0x00010bfea9e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ab2e0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = puVar6;
    func_0x00010beee8a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161b00(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    puVar2 = puVar6;
    func_0x00010beee8a0(puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c222b80(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c198e00(puVar1,param_2,param_6);
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10531b4b4; end: 10531b60f; -[SCDiscoverFeedCardConverter _parseFeedCardSnapsFromFeedCardEnvelope:] */

void FUN_10531b4b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar3 = param_3;
  func_0x00010c2456a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      puVar5 = PTR_PTR_1126b7640;
      _objc_alloc(PTR_PTR_1126b7640);
      func_0x00010c008360();
      func_0x00010befa120(puVar2);
      _objc_release(puVar5);
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10531b610; end: 10531b64b; -[SCDiscoverFeedCardConverter .cxx_destruct] */

void FUN_10531b610(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10531b64c; end: 10531b73b;  */

void FUN_10531b64c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_10531b73c;
    uStack_30 = 0x10531b74c;
    uStack_28 = 0;
    func_0x00010bf97e80(param_1);
    uVar2 = puStack_48[5];
    _objc_retain(uVar2);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10531b73c; end: 10531b753;  */

void FUN_10531b73c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10531b754; end: 10531b97f;  */

void FUN_10531b754(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c0c55e0();
  if (lVar2 == *(long *)(param_1 + 0x28)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10531b980; end: 10531bc87;  */

void FUN_10531b980(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126b7668;
  _objc_opt_new(PTR_PTR_1126b7668);
  uVar2 = param_1;
  func_0x00010bf53980();
  if (uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010bf53960();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar4 = param_2;
    func_0x00010c23fe00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_10531bc88();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar2 = uVar3;
    func_0x00010bfd8ea0();
    if ((uVar2 & 1) == 0) {
      func_0x00010c214440(puVar1);
    }
    else {
      uVar2 = uVar3;
      func_0x00010c0c3fe0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      func_0x00010c24d840();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf4db80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214440(puVar1);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar2);
    }
    uVar4 = uVar5;
    func_0x00010c0c3fe0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf93e60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214180(puVar1);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar4);
    uVar4 = uVar5;
    func_0x00010c0c3fe0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf93e60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c49e0(puVar1);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar4);
    uVar4 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4880(puVar1);
    _objc_release(uVar4);
    uVar2 = param_1;
    func_0x00010bf52260();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bfa3740();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf52680();
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar4 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar7 == 0x12) {
      func_0x00010c204680(puVar1);
    }
    else {
      uVar8 = uVar4;
      func_0x00010bdc1b20(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c204680(puVar1);
      _objc_release(uVar8);
    }
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10531bc88; end: 10531be13;  */

void FUN_10531bc88(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bfda540();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0ff680();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puStack_48 = &uStack_50;
      uStack_50 = 0;
      uStack_40 = 0x2020000000;
      uStack_38 = 0;
      puStack_78 = &uStack_80;
      uStack_80 = 0;
      uStack_70 = 0x3032000000;
      pcStack_68 = FUN_10531b73c;
      uStack_60 = 0x10531b74c;
      uStack_58 = 0;
      lVar1 = param_1;
      func_0x00010c0fee00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf97e80();
      _objc_release(lVar2);
      _objc_release(lVar1);
      uVar3 = puStack_78[5];
      _objc_retain(uVar3);
      __Block_object_dispose(&uStack_80,8);
      _objc_release(uStack_58);
      __Block_object_dispose(&uStack_50,8);
      goto LAB_10531bdd0;
    }
  }
  uVar3 = 0;
LAB_10531bdd0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10531be14; end: 10531beb7;  */

void FUN_10531be14(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar2 != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8),
     *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1,
     *(int *)(param_1 + 0x30) == *(int *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18))) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10531beb8; end: 10531bedf;  */

undefined4 FUN_10531beb8(int param_1)

{
  if (param_1 - 2U < 10) {
    return *(undefined4 *)(&UNK_10dd962a0 + (ulong)(param_1 - 2U) * 4);
  }
  return 0xfbadbeef;
}



/* Entry: 10531bee0; end: 10531c017;  */

void FUN_10531bee0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar4 = PTR_PTR_1126b7670;
  _objc_opt_new();
  uVar5 = param_1;
  func_0x00010c247c60();
  uVar2 = (int)uVar5 - 4;
  if ((uVar2 < 7) && ((0x75U >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
    iVar1 = *(int *)(&UNK_10dd962c8 + (ulong)uVar2 * 4);
  }
  else {
    uVar5 = param_1;
    func_0x00010bf05f80();
    iVar3 = (int)uVar5;
    iVar1 = iVar3;
    if (iVar3 != 2) {
      iVar1 = 0;
    }
    if (iVar3 == 1) {
      iVar1 = 1;
    }
  }
  func_0x00010c206c40(puVar4,param_2,iVar1);
  puVar6 = puVar4;
  func_0x00010c247520();
  if ((int)puVar6 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar4);
    puVar6 = puVar4;
  }
  _objc_release(puVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10531c018; end: 10531c04f;  */

void FUN_10531c018(undefined4 param_1,undefined8 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_1;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSMutableData_1126b4958,param_2,&uStack_14,4);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10531c050; end: 10531c153;  */

ulong FUN_10531c050(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  
  _objc_retain();
  uVar6 = param_1;
  func_0x00010bf52680();
  uVar2 = (uint)uVar6;
  if (uVar2 == 0) {
    uVar6 = uVar6 & 0xffffffff;
  }
  else {
    uVar5 = uVar2;
    if (uVar2 == 0x12) {
      uVar5 = 0x11;
    }
    uVar1 = 1;
    if (uVar2 != 6) {
      uVar1 = uVar5;
    }
    uVar3 = (ulong)uVar1;
    FUN_10531c018();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010c08fa60();
    _objc_release(uVar6);
    if (uVar4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = param_1;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar6;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      uVar6 = 0;
      if ((uVar3 != 0) && (uVar4 != 0)) {
        func_0x00010bf06ae0(uVar3,param_2,uVar4);
        uVar6 = uVar3;
        func_0x00010531bf9c(uVar3);
      }
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
  }
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 10531c154; end: 10531d193; -[SCDiscoverFeedCardPublicUserStoryConverter _getFeedCardSnapsToStorySnaps:forFeedCard:] */

void FUN_10531c154(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puStack_2c8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  long lStack_298;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined *puStack_268;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010bfd5160();
  if ((int)uVar3 == 0) {
    uStack_280 = 0;
  }
  else {
    uStack_280 = param_4;
    func_0x00010bf2f9e0();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_278 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(param_3);
  lStack_298 = param_3;
  func_0x00010bf52a60();
  if (lStack_298 != 0) {
    lVar17 = *plStack_1b0;
    do {
      lVar21 = 0;
      do {
        if (*plStack_1b0 != lVar17) {
          _objc_enumerationMutation(param_3);
        }
        puVar19 = *(undefined **)(lStack_1b8 + lVar21 * 8);
        puStack_1e8 = &uStack_1f0;
        uStack_1f0 = 0;
        uStack_1e0 = 0x3032000000;
        pcStack_1d8 = FUN_10531d194;
        uStack_1d0 = 0x10531d1a4;
        puVar1 = PTR_PTR_1126b7678;
        _objc_opt_new();
        puVar4 = puVar19;
        puStack_1c8 = puVar1;
        func_0x00010c241220(puVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e7920(puStack_1e8[5]);
        _objc_release(puVar4);
        puVar1 = puVar19;
        func_0x00010c241220(puVar19);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ff260(puStack_1e8[5]);
        _objc_release(puVar1);
        puVar1 = puVar19;
        func_0x00010bfdc260();
        if ((int)puVar1 == 0) {
          puStack_268 = (undefined *)0x0;
        }
        else {
          puStack_268 = puVar19;
          func_0x00010c23f6c0();
          _objc_retainAutoreleasedReturnValue();
        }
        uVar3 = param_4;
        func_0x00010bfd5f00();
        if ((int)uVar3 == 0) {
          func_0x00010c185c80(puStack_1e8[5]);
        }
        else {
          puVar1 = PTR_PTR_1126b7680;
          _objc_opt_new(PTR_PTR_1126b7680);
          uVar3 = param_4;
          func_0x00010bf5b080(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar3;
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21ecc0(puVar1);
          _objc_release(uVar2);
          _objc_release(uVar3);
          uVar3 = param_4;
          func_0x00010bf5b080(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar3;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21e620(puVar1);
          _objc_release(uVar2);
          _objc_release(uVar3);
          uVar3 = param_4;
          func_0x00010bf5b080(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar3;
          func_0x00010bf5b3e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c185c00(puVar1);
          _objc_release(uVar2);
          _objc_release(uVar3);
          func_0x00010c185c80(puStack_1e8[5]);
          _objc_release(puVar1);
        }
        func_0x00010c1b3a20(puStack_1e8[5]);
        puVar1 = PTR_PTR_1126b7688;
        _objc_opt_new(PTR_PTR_1126b7688);
        func_0x00010c19f080(puStack_1e8[5]);
        _objc_release(puVar1);
        uVar3 = puStack_1e8[5];
        func_0x00010bfb68a0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21acc0();
        _objc_release(uVar3);
        func_0x00010bf529e0(puStack_278);
        uVar3 = puStack_1e8[5];
        func_0x00010bfb68a0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fcea0();
        _objc_release(uVar3);
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c203bc0(puStack_1e8[5]);
        _objc_release(uVar3);
        puVar1 = puVar19;
        func_0x00010bfdc2e0();
        if ((int)puVar1 != 0) {
          puVar1 = puVar19;
          func_0x00010c23fe00();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar1;
          func_0x00010c270d80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23fb40();
          func_0x00010c185760(puStack_1e8[5]);
          _objc_release(puVar4);
          puVar4 = puVar1;
          func_0x00010bfd4420();
          if ((int)puVar4 == 0) {
            puVar4 = (undefined *)0x0;
          }
          else {
            puVar4 = puVar1;
            func_0x00010bf0d7e0();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar5 = puVar4;
          func_0x00010bf0d800();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf97e80();
          _objc_release(puVar5);
          puVar5 = puVar1;
          func_0x00010bfddcc0();
          if ((int)puVar5 == 0) {
            puVar5 = (undefined *)0x0;
          }
          else {
            puVar5 = puVar1;
            func_0x00010c2814e0();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar6 = puVar5;
          func_0x00010bfddce0();
          if ((int)puVar6 != 0) {
            puVar6 = puVar5;
            func_0x00010c281680(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010bf63640();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1fd120(puStack_1e8[5]);
            _objc_release(puVar7);
            _objc_release(puVar6);
            puVar6 = puVar1;
            func_0x00010c2814e0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c281680();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010bfaec20();
            _objc_release(puVar7);
            _objc_release(puVar6);
            puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            if (puVar8 != (undefined *)0x0) {
              puVar7 = puVar1;
              func_0x00010c2814e0();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              func_0x00010c281680();
              _objc_retainAutoreleasedReturnValue();
              puVar20 = puVar8;
              func_0x00010bfaec00();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar20;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2810a0();
              func_0x00010c14de00(puVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c19c120(puStack_1e8[5]);
              _objc_release(puVar6);
              _objc_release(puVar9);
              _objc_release(puVar20);
              _objc_release(puVar8);
              _objc_release(puVar7);
            }
          }
          puVar7 = puVar1;
          func_0x00010bfd84e0();
          puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if ((int)puVar7 != 0) {
            puVar7 = puVar1;
            func_0x00010c08fb40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe5ea0();
            func_0x00010c14de00(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1bbd60(puStack_1e8[5]);
            _objc_release(puVar6);
            _objc_release(puVar7);
            puVar6 = puVar1;
            func_0x00010c08fb40(puVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c11fae0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1bc920(puStack_1e8[5]);
            _objc_release(puVar7);
            _objc_release(puVar6);
            puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
            func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1bc1e0(puStack_1e8[5]);
            _objc_release(puVar6);
          }
          puVar6 = puVar1;
          func_0x00010bfdabc0();
          if ((int)puVar6 != 0) {
            puVar6 = puVar1;
            func_0x00010c1197a0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            FUN_10531bee0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2056c0(puStack_1e8[5]);
            _objc_release(puVar7);
            _objc_release(puVar6);
            puVar6 = puVar1;
            func_0x00010c1197a0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010bfdc3a0();
            _objc_release(puVar6);
            if ((int)puVar7 != 0) {
              puVar6 = PTR_PTR_1126b7690;
              _objc_opt_new(PTR_PTR_1126b7690);
              puVar7 = puVar1;
              func_0x00010c1197a0(puVar1);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              func_0x00010c241c00();
              _objc_retainAutoreleasedReturnValue();
              puVar20 = puVar8;
              func_0x00010c247580();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c206c80(puVar6);
              _objc_release(puVar20);
              _objc_release(puVar8);
              _objc_release(puVar7);
              puVar7 = puVar1;
              func_0x00010c1197a0();
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              func_0x00010c241c00();
              _objc_retainAutoreleasedReturnValue();
              puVar20 = puVar8;
              func_0x00010bfdc760();
              _objc_release(puVar8);
              _objc_release(puVar7);
              if ((int)puVar20 != 0) {
                puVar7 = puVar1;
                func_0x00010c1197a0();
                _objc_retainAutoreleasedReturnValue();
                puVar8 = puVar7;
                func_0x00010c241c00(puVar7);
                _objc_retainAutoreleasedReturnValue();
                puVar20 = puVar8;
                func_0x00010c2475a0();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar20;
                func_0x00010bfe2ee0();
                puVar10 = puVar1;
                func_0x00010c1197a0(puVar1);
                _objc_retainAutoreleasedReturnValue();
                puVar11 = puVar10;
                func_0x00010c241c00();
                _objc_retainAutoreleasedReturnValue();
                puVar12 = puVar11;
                func_0x00010c2475a0();
                _objc_retainAutoreleasedReturnValue();
                puVar13 = puVar12;
                func_0x00010c0b5940();
                func_0x000100c4a928(puVar9,puVar13);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c206cc0(puVar6);
                _objc_release(puVar9);
                _objc_release(puVar12);
                _objc_release(puVar11);
                _objc_release(puVar10);
                _objc_release(puVar20);
                _objc_release(puVar8);
                _objc_release(puVar7);
              }
              func_0x00010c203c20(puStack_1e8[5]);
              _objc_release(puVar6);
            }
          }
          puVar6 = puVar1;
          func_0x00010bfd4460();
          if ((int)puVar6 != 0) {
            puVar6 = puVar1;
            func_0x00010bf0e960(puVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c24a0a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c207f00(puStack_1e8[5]);
            _objc_release(puVar7);
            _objc_release(puVar6);
          }
          puVar6 = puVar1;
          func_0x00010bfd3e40();
          if ((int)puVar6 != 0) {
            puVar6 = puVar1;
            func_0x00010befe1a0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c166200(puStack_1e8[5]);
            _objc_release(puVar6);
          }
          puVar6 = puVar1;
          func_0x00010bfd5000();
          if ((int)puVar6 != 0) {
            puVar6 = puVar1;
            func_0x00010bf28a40(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c175d40(puStack_1e8[5]);
            _objc_release(puVar6);
          }
          puVar6 = puVar1;
          func_0x00010bfd5040();
          if ((int)puVar6 != 0) {
            puVar6 = puVar1;
            func_0x00010bf28ba0(puVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c175e20(puStack_1e8[5]);
            _objc_release(puVar6);
          }
          puVar6 = puVar1;
          func_0x00010bfd84a0();
          if ((int)puVar6 != 0) {
            puVar6 = puVar1;
            func_0x00010c08f220();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c0eebe0();
            _objc_release(puVar6);
            if ((int)puVar7 != 0) {
              puVar6 = PTR_PTR_1126b7698;
              _objc_opt_new(PTR_PTR_1126b7698);
              puVar7 = puVar1;
              func_0x00010c08f220(puVar1);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = puVar7;
              func_0x00010bf24a40();
              _objc_retainAutoreleasedReturnValue();
              puVar20 = puVar8;
              func_0x00010bfe2ee0();
              puVar9 = puVar1;
              func_0x00010c08f220(puVar1);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar9;
              func_0x00010bf24a40();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar10;
              func_0x00010c0b5940();
              func_0x000100c4a928(puVar20,puVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1c96c0(puVar6);
              _objc_release(puVar20);
              _objc_release(puVar10);
              _objc_release(puVar9);
              _objc_release(puVar8);
              _objc_release(puVar7);
              puVar7 = puVar1;
              func_0x00010c08f220(puVar1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0eebe0();
              func_0x00010c1c9960(puVar6);
              _objc_release(puVar7);
              puVar7 = puVar1;
              func_0x00010c08f220(puVar1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0eede0();
              func_0x00010c1c9980(puVar6);
              _objc_release(puVar7);
              func_0x00010c1c97a0(puStack_1e8[5]);
              _objc_release(puVar6);
            }
          }
          puVar6 = puVar19;
          func_0x00010c241220(puVar19);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_1;
          func_0x00010bdefea0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c4940(puStack_1e8[5]);
          _objc_release(uVar3);
          _objc_release(puVar6);
          puVar7 = PTR_PTR_1126b76a0;
          _objc_opt_new(PTR_PTR_1126b76a0);
          puVar8 = puVar4;
          func_0x00010bf0d800();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar8;
          func_0x00010bf52a60();
          lVar15 = lRam0000000000000000;
          while (puVar6 != (undefined *)0x0) {
            puVar20 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar15) {
                _objc_enumerationMutation(puVar8);
              }
              lVar18 = *(long *)((long)puVar20 * 8);
              lVar14 = lVar18;
              func_0x00010bf4e080();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar14 != 0) {
                func_0x00010bf4e080();
                _objc_retainAutoreleasedReturnValue();
                goto LAB_10531cd54;
              }
              puVar20 = puVar20 + 1;
            } while (puVar6 != puVar20);
            puVar6 = puVar8;
            func_0x00010bf52a60();
          }
          lVar18 = 0;
LAB_10531cd54:
          _objc_release(puVar8);
          lVar15 = lVar18;
          func_0x00010c297e20(lVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2208c0(puVar7);
          _objc_release(lVar15);
          lVar15 = lVar18;
          func_0x00010bfd5c60();
          if ((int)lVar15 == 0) {
            func_0x00010c183080(puVar7);
          }
          else {
            lVar15 = lVar18;
            func_0x00010bf4e840(lVar18);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c183080(puVar7);
            _objc_release(lVar15);
          }
          func_0x00010c1dbfa0(puStack_1e8[5]);
          puVar6 = puVar19;
          func_0x00010bfdc3c0();
          if ((int)puVar6 == 0) {
            puStack_2b0 = PTR__OBJC_CLASS___NSData_1126ae778;
            func_0x00010bf63640();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puStack_2a8 = puVar19;
            func_0x00010c241da0();
            _objc_retainAutoreleasedReturnValue();
            puStack_2c8 = puStack_2a8;
            func_0x00010bf9a280();
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010c197a80(puStack_1e8[5]);
          puVar8 = puStack_2b0;
          if ((int)puVar6 != 0) {
            _objc_release(puStack_2c8);
            puVar8 = puStack_2a8;
          }
          _objc_release(puVar8);
          func_0x00010c23fe00(puVar19);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar19;
          func_0x00010c270d80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0c4300();
          func_0x00010c206de0(puStack_1e8[5]);
          _objc_release(puVar6);
          _objc_release(puVar19);
          func_0x00010befa120(puStack_278);
          _objc_release(lVar18);
          _objc_release(puVar7);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar1);
        }
        puVar1 = puStack_268;
        func_0x00010bfd6e60();
        if ((int)puVar1 != 0) {
          puVar1 = puStack_268;
          func_0x00010bf9c6e0(puStack_268);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9c8a0();
          func_0x00010c198c60(puStack_1e8[5]);
          _objc_release(puVar1);
        }
        uVar3 = uStack_280;
        func_0x00010bfd63a0();
        if ((int)uVar3 != 0) {
          puVar1 = PTR_PTR_1126b76a8;
          _objc_opt_new(PTR_PTR_1126b76a8);
          uVar3 = param_4;
          func_0x00010bf2f9e0(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar3;
          func_0x00010bf6e6e0();
          _objc_retainAutoreleasedReturnValue();
          uVar16 = uVar2;
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c212f20(puVar1);
          _objc_release(uVar16);
          _objc_release(uVar2);
          _objc_release(uVar3);
          func_0x00010c203e40(puStack_1e8[5]);
          _objc_release(puVar1);
        }
        puVar1 = puStack_268;
        func_0x00010bfd3e00();
        if ((int)puVar1 != 0) {
          puVar1 = puStack_268;
          func_0x00010befddc0(puStack_268);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfbe4e0();
          func_0x00010c1a2240(puStack_1e8[5]);
          _objc_release(puVar1);
        }
        _objc_release(puStack_268);
        __Block_object_dispose(&uStack_1f0,8);
        _objc_release(puStack_1c8);
        lVar21 = lVar21 + 1;
      } while (lVar21 != lStack_298);
      lStack_298 = param_3;
      func_0x00010bf52a60();
    } while (lStack_298 != 0);
  }
  _objc_release(param_3);
  puVar4 = puStack_278;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puStack_278;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf5ab80();
  puVar6 = puVar19;
  func_0x00010bf5ab80();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if ((long)puVar5 < (long)puVar6) {
    puVar5 = puStack_278;
    func_0x00010c140180(puStack_278);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_278);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puStack_278 = puVar1;
  }
  _objc_release(puVar19);
  _objc_release(puVar4);
  _objc_release(uStack_280);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_278);
    return;
  }
  ___stack_chk_fail();
  lVar17 = 8;
  __Block_object_dispose(&uStack_1f0);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar17 + 0x28);
  *(undefined8 *)(lVar17 + 0x28) = 0;
  return;
}



/* Entry: 10531d194; end: 10531d1ab;  */

void FUN_10531d194(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10531d1ac; end: 10531d257;  */

void FUN_10531d1ac(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2a3a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c2a3a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
    _objc_release(lVar2);
    _objc_release(lVar1);
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10531d258; end: 10531da83; -[SCDiscoverFeedCardPublicUserStoryConverter _createMediaInfoFromFeedCardSnapDoc:snapId:capabilities:] */

void FUN_10531d258(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
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
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  double dVar16;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar15 = param_3;
  func_0x00010bfda540();
  if ((int)puVar15 != 0) {
    puVar15 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar15;
    func_0x00010c0ff680();
    _objc_release(puVar15);
    if (puVar1 != (undefined *)0x0) {
      puVar1 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = PTR_PTR_1126b76b0;
      _objc_opt_new(PTR_PTR_1126b76b0);
      puVar2 = param_3;
      func_0x00010c0c6280();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c0ff660(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0c55e0();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = puVar2;
      FUN_10531b64c(puVar2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6c20();
      FUN_10531beb8();
      func_0x00010c1c5440(puVar15);
      puVar4 = param_3;
      FUN_10531bc88(param_3,1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0c55e0();
      puVar8 = puVar2;
      FUN_10531b64c(puVar2,puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      func_0x00010c1c4880(puVar15);
      if (puVar8 == (undefined *)0x0) {
        func_0x00010c1c5520(puVar15);
      }
      else {
        puVar5 = puVar8;
        func_0x00010bdc2b80(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c5520(puVar15);
        _objc_release(puVar5);
      }
      if (puVar4 == (undefined *)0x0) {
        func_0x00010c1b5c20(puVar15);
      }
      else {
        puVar5 = puVar4;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bfd6a20();
        _objc_release(puVar5);
        if ((int)puVar6 != 0) {
          puVar5 = puVar4;
          func_0x00010c0c3fe0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bf93e60();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c085300();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010bf15da0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c49c0(puVar15);
          _objc_release(puVar9);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
          puVar5 = puVar4;
          func_0x00010c0c3fe0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bf93e60();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010bf15da0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c49e0(puVar15);
          _objc_release(puVar9);
          _objc_release(puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
        }
        puVar5 = puVar4;
        func_0x00010c0c3fe0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2bf020();
        func_0x00010c1b5c20(puVar15);
        _objc_release(puVar5);
      }
      puVar5 = puVar4;
      func_0x00010c0c3fe0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0c4bc0();
      _objc_release(puVar5);
      if (puVar4 == (undefined *)0x0) {
        dVar16 = 0.0;
      }
      else {
        dVar16 = (double)((ulong)puVar6 & 0xffffffff) / 1000.0;
      }
      func_0x00010c192d40(dVar16,puVar15);
      puVar5 = puVar1;
      func_0x00010bfda560();
      if (((ulong)puVar5 & 1) == 0) {
        func_0x00010c1b1de0(puVar15);
      }
      else {
        puVar5 = puVar1;
        func_0x00010c0fef80(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bfed700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b1de0(puVar15);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      puVar5 = PTR_PTR_1126b76b8;
      _objc_opt_new(PTR_PTR_1126b76b8);
      func_0x00010c203aa0(puVar15);
      _objc_release(puVar5);
      puVar5 = puVar8;
      func_0x00010bf4cce0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar7 = puVar15;
      func_0x00010c23f5c0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4380();
      _objc_release(puVar7);
      if (puVar5 == (undefined *)0x0) {
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
      puVar5 = param_3;
      FUN_10531bc88(param_3,2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_3;
      func_0x00010c0c6280();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c0c3fe0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c0c55e0();
      puVar11 = puVar6;
      FUN_10531b64c(puVar6,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar6 = puVar11;
      func_0x00010bf4cce0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar9 = puVar15;
      func_0x00010c23f5c0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d74e0();
      _objc_release(puVar9);
      if (puVar6 == (undefined *)0x0) {
        _objc_release(puVar7);
      }
      _objc_release(puVar6);
      puVar6 = puVar1;
      func_0x00010bfb11c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010c0c55e0();
      _objc_release(puVar7);
      _objc_release(puVar6);
      puVar6 = puVar2;
      FUN_10531b64c(puVar2,puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf4cce0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 == (undefined *)0x0) {
        puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19d000(puVar15);
        _objc_release(puVar9);
      }
      else {
        func_0x00010c19d000(puVar15);
      }
      _objc_release(puVar7);
      lVar12 = param_5;
      func_0x00010bfdbfa0();
      if ((int)lVar12 != 0) {
        lVar12 = param_5;
        func_0x00010c22a700();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010bf1f280();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar13;
        func_0x00010c08fa60();
        _objc_release(lVar13);
        _objc_release(lVar12);
        if (lVar14 != 0) {
          lVar12 = param_5;
          func_0x00010c22a700(param_5);
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar12;
          func_0x00010bf1f280();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c172fc0(puVar15);
          _objc_release(lVar13);
          _objc_release(lVar12);
        }
        lVar12 = param_5;
        func_0x00010c22a700();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010bfd4b80();
        _objc_release(lVar12);
        if ((int)lVar13 != 0) {
          lVar12 = param_5;
          func_0x00010c22a700(param_5);
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar12;
          func_0x00010bf1f260();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c172fa0(puVar15);
          _objc_release(lVar13);
          _objc_release(lVar12);
        }
        lVar12 = param_5;
        func_0x00010c22a700();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010c0db0c0();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar13;
        func_0x00010c08fa60();
        _objc_release(lVar13);
        _objc_release(lVar12);
        if (lVar14 != 0) {
          lVar12 = param_5;
          func_0x00010c22a700(param_5);
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar12;
          func_0x00010c0db0c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21b500(puVar15);
          _objc_release(lVar13);
          _objc_release(lVar12);
        }
      }
      _objc_release(puVar6);
      _objc_release(puVar11);
      _objc_release(puVar5);
      _objc_release(puVar8);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      goto LAB_10531da48;
    }
  }
  puVar15 = (undefined *)0x0;
LAB_10531da48:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 10531da84; end: 10531dc4b; -[SCDiscoverFeedCardPublicUserStoryConverter createPublicUserStoryCardForFeedCard:feedSnapsArray:feedType:] */

void FUN_10531da84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b76c0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x00010be1f000(param_1,param_2,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206240(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010bdf21c0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c1c73c0(puVar1,param_2,param_1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126b76c8;
  _objc_opt_new(PTR_PTR_1126b76c8);
  func_0x00010c19f080(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bfb68a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcf80();
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c2456a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  puVar4 = puVar1;
  func_0x00010bfb68a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcf60();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bfb68a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcec0();
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c2456a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  puVar4 = puVar1;
  func_0x00010bfb68a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcee0();
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10531dc4c; end: 10531dc6f; -[SCDiscoverFeedCardPublicUserStoryConverter _businessProfileCategoryToImpalaUserInfo:] */

undefined4 FUN_10531dc4c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (param_3 < 4) {
    return *(undefined4 *)(&UNK_10dd962f0 + (ulong)param_3 * 4);
  }
  return 0xfbadbeef;
}



/* Entry: 10531dc70; end: 10531e39f; -[SCDiscoverFeedCardPublicUserStoryConverter _createPublicUserStoryMetadataWithFeedCard:feedSnapsArray:] */

void FUN_10531dc70(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  long lVar17;
  double dVar18;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b76d0;
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c089820(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  FUN_10531b980(param_3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20dce0(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f760(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18fca0(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bf529e0(param_4);
  func_0x00010c218680(puVar1);
  lVar2 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf8e2c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c194460(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf8e7e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1946c0(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170a80(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1ade0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c170b60(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b76d8;
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174420(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174480(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b4680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c174460(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c116660();
  func_0x00010bdd7100(param_1);
  func_0x00010c174500(puVar4);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf25320();
  func_0x00010c1746e0(puVar4);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c116e60();
  func_0x00010c1e5980(puVar4);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf5b080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf68960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126b1a60;
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf68960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099880(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1745c0(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c117380();
  func_0x00010c1b2ee0(puVar1);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf2f9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25fd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29efe0();
  func_0x00010c1b11a0(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c1b3620(puVar1);
  lVar2 = param_4;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c23fe00();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar3;
  func_0x00010c270d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23fb40();
  _objc_release(lVar17);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c18ffe0(puVar1);
  _objc_retain(param_4);
  puVar16 = auStack_100;
  lVar3 = param_4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar3 == 0) {
    dVar18 = 0.0;
  }
  else {
    dVar18 = 0.0;
    do {
      lVar17 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_4);
        }
        uVar7 = *(ulong *)(lVar17 * 8);
        func_0x00010c23fe00();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c0ff660();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010c0c4bc0();
        dVar18 = dVar18 + (double)(uVar12 & 0xffffffff) / 1000.0;
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        lVar17 = lVar17 + 1;
      } while (lVar3 != lVar17);
      puVar16 = auStack_100;
      lVar3 = param_4;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_4);
  func_0x00010c218380(dVar18,puVar1);
  puVar5 = puVar4;
  func_0x00010c1aaf80(puVar1);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    puVar1 = PTR_PTR_1126b76e0;
    _objc_retain(puVar16);
    _objc_opt_new(puVar1);
    lVar2 = param_3;
    func_0x00010bdf4220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5aa0(puVar1);
    _objc_release(lVar2);
    func_0x00010be1ebe0(param_3);
    func_0x00010c193c40(puVar1);
    puVar6 = puVar5;
    func_0x00010bfd5d80();
    if (((ulong)puVar6 & 1) == 0) {
      func_0x00010c1e5a80(puVar1);
    }
    else {
      puVar6 = puVar5;
      func_0x00010bf52260(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c105420();
      func_0x00010c1e5a80(puVar1);
      _objc_release(puVar6);
    }
    puVar6 = puVar5;
    func_0x00010bfd5d80();
    if (((ulong)puVar6 & 1) == 0) {
      func_0x00010c1d6740(puVar1);
    }
    else {
      puVar6 = puVar5;
      func_0x00010bf52260(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c105420();
      func_0x00010c1d6740(puVar1);
      _objc_release(puVar6);
    }
    lVar2 = param_3;
    func_0x00010be1e2e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010be1efe0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar16);
    func_0x00010c206220(puVar1);
    _objc_release(lVar3);
    puVar6 = puVar1;
    func_0x00010c245680(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c2456a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bdf21e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163d80(puVar1);
    _objc_release(lVar3);
    _objc_release(puVar4);
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010bf2f9e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf80d20();
    func_0x00010c1b44a0(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar6);
    puVar6 = puVar5;
    func_0x00010bf2f9e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c252d20();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    func_0x00010531b7c4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196440(puVar1);
    _objc_release(puVar13);
    _objc_release(puVar4);
    _objc_release(puVar6);
    lVar3 = param_3;
    func_0x00010bdeb700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173120(puVar1);
    _objc_release(lVar3);
    func_0x00010bdf5ba0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c224a40(puVar1);
    _objc_release(param_3);
    puVar6 = puVar5;
    func_0x00010bf2f9e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c252d20();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    func_0x00010bf95f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29c5c0();
    func_0x00010c222500(puVar1);
    _objc_release(puVar13);
    _objc_release(puVar4);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b76c8;
    _objc_opt_new(PTR_PTR_1126b76c8);
    func_0x00010c19f080(puVar1);
    _objc_release(puVar6);
    puVar6 = puVar1;
    func_0x00010bfb68a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcf80();
    _objc_release(puVar6);
    puVar6 = puVar1;
    func_0x00010c245680(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar6;
    func_0x00010c2456a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar4;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010bfb68a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15e560();
    puVar15 = puVar1;
    func_0x00010bfb68a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fcf60();
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar4);
    _objc_release(puVar6);
    _objc_release(lVar2);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10531e3a0; end: 10531e7cf; -[SCDiscoverFeedCardPublisherStoryConverter createPublisherStoryCardForFeedCard:feedSnapsArray:feedType:] */

void FUN_10531e3a0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b76e0;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x00010bdf4220(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5aa0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010be1ebe0(param_1,param_2,param_3);
  func_0x00010c193c40(puVar1,param_2,uVar2);
  uVar3 = param_3;
  func_0x00010bfd5d80();
  if ((uVar3 & 1) == 0) {
    func_0x00010c1e5a80(puVar1,param_2,0);
  }
  else {
    uVar3 = param_3;
    func_0x00010bf52260(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c105420();
    func_0x00010c1e5a80(puVar1,param_2,uVar4);
    _objc_release(uVar3);
  }
  uVar3 = param_3;
  func_0x00010bfd5d80();
  if ((uVar3 & 1) == 0) {
    func_0x00010c1d6740(puVar1,param_2,0);
  }
  else {
    uVar3 = param_3;
    func_0x00010bf52260(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c105420();
    func_0x00010c1d6740(puVar1,param_2,uVar4);
    _objc_release(uVar3);
  }
  uVar2 = param_1;
  func_0x00010be1e2e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010be1efe0(param_1,param_2,param_4,param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c206220(puVar1,param_2,uVar5);
  _objc_release(uVar5);
  puVar6 = puVar1;
  func_0x00010c245680(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2456a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bdf21e0(param_1,param_2,param_3,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163d80(puVar1,param_2,uVar5);
  _objc_release(uVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  uVar3 = param_3;
  func_0x00010bf2f9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf80d20();
  func_0x00010c1b44a0(puVar1,param_2,(uint)uVar8 ^ 1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf2f9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c252d20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010531b7c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196440(puVar1,param_2,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar5 = param_1;
  func_0x00010bdeb700(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173120(puVar1,param_2,uVar5);
  _objc_release(uVar5);
  func_0x00010bdf5ba0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224a40(puVar1,param_2,param_1);
  _objc_release(param_1);
  uVar3 = param_3;
  func_0x00010bf2f9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c252d20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010bf95f00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c29c5c0();
  func_0x00010c222500(puVar1,param_2,uVar9);
  _objc_release(uVar8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126b76c8;
  _objc_opt_new(PTR_PTR_1126b76c8);
  func_0x00010c19f080(puVar1,param_2,puVar6);
  _objc_release(puVar6);
  puVar6 = puVar1;
  func_0x00010bfb68a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcf80();
  _objc_release(puVar6);
  puVar6 = puVar1;
  func_0x00010c245680(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2456a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bfb68a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15e560();
  puVar12 = puVar1;
  func_0x00010bfb68a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcf60();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10531e7d0; end: 10531ed87; -[SCDiscoverFeedCardPublisherStoryConverter createShowStoryCardForFeedCard:feedSnapsArray:feedType:] */

void FUN_10531e7d0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b76e0;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x00010bdf4220(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5aa0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010be1ebe0(param_1,param_2,param_3);
  func_0x00010c193c40(puVar1,param_2,uVar2);
  uVar3 = param_3;
  func_0x00010bfd5d80();
  if ((uVar3 & 1) == 0) {
    func_0x00010c1e5a80(puVar1,param_2,0);
  }
  else {
    uVar3 = param_3;
    func_0x00010bf52260(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c105420();
    func_0x00010c1e5a80(puVar1,param_2,uVar4);
    _objc_release(uVar3);
  }
  uVar3 = param_3;
  func_0x00010bfd5d80();
  if ((uVar3 & 1) == 0) {
    func_0x00010c1d6740(puVar1,param_2,0);
  }
  else {
    uVar3 = param_3;
    func_0x00010bf52260(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c105420();
    func_0x00010c1d6740(puVar1,param_2,uVar4);
    _objc_release(uVar3);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = param_1;
  func_0x00010be1e2e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010be22a80(param_1,param_2,param_3,param_4,uVar2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010be22a80(param_1,param_2,param_3,param_4,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010be1efc0(param_1,param_2,param_4,param_3,puVar5,uVar6,uVar7,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206220(puVar1,param_2,uVar8);
  _objc_release(uVar8);
  uVar8 = param_1;
  func_0x00010bdf5760(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c222180(puVar1,param_2,uVar8);
  _objc_release(uVar8);
  puVar9 = puVar1;
  func_0x00010c245680(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c2456a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c23fe00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c0fef80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c157020();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x00010bdefbe0(param_1,param_2,param_3,puVar10,puVar5,uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163d80(puVar1,param_2,uVar14);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  uVar3 = param_3;
  func_0x00010bf2f9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar4;
  func_0x00010bf80d20();
  func_0x00010c1b44a0(puVar1,param_2,(uint)uVar15 ^ 1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_3;
  func_0x00010bf2f9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c252d20();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar4;
  func_0x00010531b7c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196440(puVar1,param_2,uVar15);
  _objc_release(uVar15);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar8 = param_1;
  func_0x00010bdeb700(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173120(puVar1,param_2,uVar8);
  _objc_release(uVar8);
  uVar8 = param_1;
  func_0x00010bdf5ba0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c224a40(puVar1,param_2,uVar8);
  _objc_release(uVar8);
  uVar3 = param_3;
  func_0x00010bf2f9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c252d20();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar4;
  func_0x00010bf95f00();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010c29c5c0();
  func_0x00010c222500(puVar1,param_2,uVar16);
  _objc_release(uVar15);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar9 = PTR_PTR_1126b76c8;
  _objc_opt_new(PTR_PTR_1126b76c8);
  func_0x00010c19f080(puVar1,param_2,puVar9);
  _objc_release(puVar9);
  puVar9 = puVar1;
  func_0x00010bfb68a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcf80();
  _objc_release(puVar9);
  puVar9 = puVar1;
  func_0x00010c245680(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010c2456a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar10;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar17;
  func_0x00010bfb68a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15e560();
  puVar19 = puVar1;
  func_0x00010bfb68a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcf60();
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar10);
  _objc_release(puVar9);
  uVar8 = uVar6;
  func_0x00010c23fe00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bef3b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf4c00(param_1,param_2,uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c215900(puVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar11);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10531ed88; end: 10531f42f; -[SCDiscoverFeedCardPublisherStoryConverter _getFeedCardSnapsToPublisherStorySnaps:forFeedCard:uuid:] */

void FUN_10531ed88(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b76e8;
  _objc_opt_new();
  func_0x00010c16f420();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_4;
  func_0x00010bf2f9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010bf4bca0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bef3b60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfb21e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010befde00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar14);
  uVar14 = uVar7;
  func_0x00010bf529e0();
  if (uVar14 != 0) {
    uVar14 = 0;
    do {
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar4 = uVar7;
      func_0x00010c0dfd40(uVar7,param_2,uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfec9e0();
      func_0x00010c0df820(puVar8,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar8);
      _objc_release(puVar8);
      _objc_release(uVar4);
      uVar14 = uVar14 + 1;
      uVar4 = uVar7;
      func_0x00010bf529e0();
    } while (uVar14 < uVar4);
  }
  uVar14 = param_4;
  func_0x00010bf2f9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar14;
  func_0x00010bf4bca0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bef58c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf8c980();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar6;
  func_0x00010c0b4ca0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar14);
  uVar14 = param_3;
  func_0x00010bf529e0();
  if (uVar14 != 0) {
    uVar14 = 0;
    lStack_80 = 1;
    do {
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar3;
      func_0x00010bf4b900(puVar3,param_2,puVar8);
      _objc_release(puVar8);
      if ((int)puVar10 != 0) {
        puVar8 = PTR_PTR_1126b76f0;
        _objc_opt_new(PTR_PTR_1126b76f0);
        func_0x00010c2059c0();
        func_0x00010c164dc0(puVar8,param_2,1);
        uVar11 = param_1;
        func_0x00010bdf2200(param_1,param_2,param_4,lStack_80);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c163d80(puVar8,param_2,uVar11);
        _objc_release(uVar11);
        uVar11 = param_1;
        func_0x00010bdd83c0(param_1,param_2,uVar9,uVar14);
        func_0x00010c204680(puVar8,param_2,uVar11);
        func_0x00010c1b3440(puVar8,param_2,1);
        puVar10 = PTR_PTR_1126b7688;
        _objc_opt_new(PTR_PTR_1126b7688);
        func_0x00010c19f080(puVar8,param_2,puVar10);
        _objc_release(puVar10);
        puVar10 = puVar8;
        func_0x00010bfb68a0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c21acc0();
        _objc_release(puVar10);
        func_0x00010bf529e0(puVar2);
        puVar10 = puVar8;
        func_0x00010bfb68a0(puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fcea0();
        _objc_release(puVar10);
        func_0x00010befa120(puVar2,param_2,puVar8);
        lStack_80 = lStack_80 + 1;
        _objc_release(puVar8);
      }
      uVar4 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b76f0;
      _objc_opt_new(PTR_PTR_1126b76f0);
      uVar5 = uVar4;
      func_0x00010c23f6c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfd3e00();
      _objc_release(uVar5);
      if ((int)uVar6 != 0) {
        uVar5 = uVar4;
        func_0x00010c23f6c0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010befddc0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar6;
        func_0x00010bfbe4e0();
        func_0x00010c1a2240(puVar8,param_2,uVar12);
        _objc_release(uVar6);
        _objc_release(uVar5);
      }
      uVar5 = uVar4;
      func_0x00010c241220(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0b4ca0();
      func_0x00010c204680(puVar8,param_2,uVar6);
      _objc_release(uVar5);
      uVar5 = uVar4;
      func_0x00010c23fe00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c203f00(puVar8,param_2,uVar5);
      _objc_release(uVar5);
      puVar10 = PTR_PTR_1126b7688;
      _objc_opt_new(PTR_PTR_1126b7688);
      func_0x00010c21acc0();
      uVar5 = uVar4;
      func_0x00010bfdc320();
      if ((uVar5 & 1) == 0) {
        func_0x00010c19f080(puVar8,param_2,puVar10);
      }
      else {
        uVar5 = uVar4;
        func_0x00010c241140(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19f080(puVar8,param_2,uVar5);
        _objc_release(uVar5);
      }
      func_0x00010bf529e0(puVar2);
      puVar13 = puVar8;
      func_0x00010bfb68a0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fcea0();
      _objc_release(puVar13);
      uVar5 = uVar4;
      func_0x00010c23f6c0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c252d20();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar6;
      func_0x00010531b7c4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c196440(puVar8,param_2,uVar12);
      _objc_release(uVar12);
      _objc_release(uVar6);
      _objc_release(uVar5);
      uVar5 = uVar4;
      func_0x00010c23f6c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c2606c0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar6;
      func_0x00010c080100();
      _objc_release(uVar6);
      _objc_release(uVar5);
      if ((int)uVar12 == 0) {
        func_0x00010c2059c0(puVar8,param_2,&PTR____CFConstantStringClassReference_110dd1f38);
        func_0x00010c1c5440(puVar8,param_2,1);
        uVar5 = uVar4;
        func_0x00010c241220(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = param_1;
        func_0x00010bdf2220(param_1,param_2,param_4,uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c214700(puVar8,param_2,uVar11);
        _objc_release(uVar11);
        _objc_release(uVar5);
        func_0x00010c1b3440(puVar8,param_2,1);
        func_0x00010c1a92e0(puVar8,param_2,param_5);
      }
      else {
        func_0x00010c2059c0(puVar8,param_2,&PTR____CFConstantStringClassReference_110dd1f58);
        func_0x00010c1c5440(puVar8,param_2,2);
      }
      func_0x00010befa120(puVar2,param_2,puVar8);
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(uVar4);
      uVar14 = uVar14 + 1;
      uVar4 = param_3;
      func_0x00010bf529e0();
    } while (uVar14 < uVar4);
  }
  func_0x00010c206240(puVar1,param_2,puVar2);
  _objc_release(uVar7);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10531f430; end: 10531f9c7; -[SCDiscoverFeedCardPublisherStoryConverter _createPublisherAdPlacementMetadata:forSnapsArray:] */

void FUN_10531f430(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bfd5160();
  if ((int)puVar1 == 0) {
LAB_10531f980:
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar1 = param_3;
    func_0x00010bf2f9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar1;
    func_0x00010bfd5b00();
    if ((int)puVar10 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = param_3;
      func_0x00010bf2f9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar10;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfd3d20();
      _objc_release(puVar2);
      _objc_release(puVar10);
      _objc_release(puVar1);
      if ((int)puVar3 == 0) goto LAB_10531f980;
      puVar10 = PTR_PTR_1126b76f8;
      _objc_opt_new();
      puVar1 = param_3;
      func_0x00010bf2f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bef58c0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar3;
      func_0x00010bef6180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c164e00(puVar10,param_2,puVar11);
      _objc_release(puVar11);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b7700;
      _objc_opt_new();
      puVar2 = param_3;
      func_0x00010bf2f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar3;
      func_0x00010bef58c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar11;
      func_0x00010c06a380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ae8c0(puVar1,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar11);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = param_3;
      func_0x00010bf2f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar3;
      func_0x00010bef58c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar11;
      func_0x00010c06a3a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ae880(puVar1,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar11);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = param_3;
      func_0x00010bf2f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar3;
      func_0x00010bef58c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar11;
      func_0x00010bf35680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17ab60(puVar1,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar11);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = param_3;
      func_0x00010bf2f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar3;
      func_0x00010bef58c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar11;
      func_0x00010c125a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21f140(puVar1,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar11);
      _objc_release(puVar3);
      _objc_release(puVar2);
      func_0x00010c212760(puVar10,param_2,puVar1);
      func_0x00010c1ae680(puVar10,param_2,0);
      uVar5 = param_1;
      func_0x00010bdea680(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1647e0(puVar10,param_2,uVar5);
      _objc_release(uVar5);
      puVar2 = param_3;
      func_0x00010bf2f9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar3;
      func_0x00010bfd3ce0();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if ((int)puVar11 != 0) {
        puVar2 = PTR_PTR_1126b7708;
        _objc_opt_new(PTR_PTR_1126b7708);
        uVar5 = param_1;
        func_0x00010be1ebe0(param_1,param_2,param_3);
        puVar3 = param_3;
        func_0x00010bf2f9e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar3;
        func_0x00010bf4bca0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar11;
        func_0x00010bef3b60();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010bfb21e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c0ec680();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar4);
        _objc_release(puVar11);
        _objc_release(puVar3);
        puVar3 = puVar7;
        func_0x00010c246ca0(puVar7,param_2,&PTR___NSConcreteGlobalBlock_110879240);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar3;
        func_0x00010bf529e0();
        if (puVar11 != (undefined *)0x0) {
          puVar11 = (undefined *)0x0;
          do {
            puVar4 = puVar3;
            func_0x00010c0dfd40(puVar3,param_2,puVar11);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_PTR_1126b76f0;
            _objc_opt_new(PTR_PTR_1126b76f0);
            func_0x00010c2059c0();
            func_0x00010c164dc0(puVar6,param_2,2);
            puVar11 = puVar11 + 1;
            uVar8 = param_1;
            func_0x00010bdf2200(param_1,param_2,param_3,puVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c163d80(puVar6,param_2,uVar8);
            _objc_release(uVar8);
            puVar9 = puVar4;
            func_0x00010bfec9e0(puVar4);
            uVar8 = param_1;
            func_0x00010bdd83c0(param_1,param_2,uVar5,(ulong)puVar9 & 0xffffffff);
            func_0x00010c204680(puVar6,param_2,uVar8);
            puVar9 = puVar4;
            func_0x00010bfec9e0(puVar4);
            func_0x00010c1d0560(puVar2,param_2,puVar6,puVar9);
            _objc_release(puVar6);
            _objc_release(puVar4);
            puVar4 = puVar3;
            func_0x00010bf529e0();
          } while (puVar11 < puVar4);
        }
        func_0x00010c1d5f00(puVar10,param_2,puVar2);
        _objc_release(puVar3);
        _objc_release(puVar7);
        _objc_release(puVar2);
      }
    }
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10531f9c8; end: 10531fa1f;  */

bool FUN_10531f9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfec9e0(param_2);
  uVar1 = param_3;
  func_0x00010bfec9e0(param_3);
  _objc_release(param_3);
  return (uint)uVar1 < (uint)param_2;
}



/* Entry: 10531fa20; end: 10532007f; -[SCDiscoverFeedCardPublisherStoryConverter _createLongfromShowAdPlacementMetadata:forSnapsArray:andPlacementIndices:seekPointMsArray:] */

void FUN_10531fa20(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar9 = param_3;
  func_0x00010bfd5160();
  if ((int)puVar9 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar1 = param_3;
    func_0x00010bf2f9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bfd5b00();
    if ((int)puVar9 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = param_3;
      func_0x00010bf2f9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfd3d20();
      _objc_release(puVar2);
      _objc_release(puVar9);
      _objc_release(puVar1);
      if ((int)puVar3 == 0) {
        puVar9 = (undefined *)0x0;
        goto LAB_10532003c;
      }
      puVar9 = PTR_PTR_1126b76f8;
      _objc_opt_new();
      puVar1 = param_3;
      func_0x00010bf2f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bef58c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bef6180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c164e00(puVar9,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b7700;
      _objc_opt_new();
      puVar2 = param_3;
      func_0x00010bf2f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bef58c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c06a380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ae8c0(puVar1,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = param_3;
      func_0x00010bf2f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bef58c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c06a3a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ae880(puVar1,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = param_3;
      func_0x00010bf2f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bef58c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf35680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17ab60(puVar1,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = param_3;
      func_0x00010bf2f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bef58c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c125a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21f140(puVar1,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      func_0x00010c212760(puVar9,param_2,puVar1);
      func_0x00010c1ae680(puVar9,param_2,0);
      uVar6 = param_1;
      func_0x00010bdea680(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1647e0(puVar9,param_2,uVar6);
      _objc_release(uVar6);
      puVar2 = param_3;
      func_0x00010bf2f9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfd3ce0();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if ((int)puVar4 != 0) {
        puVar2 = PTR_PTR_1126b7708;
        _objc_opt_new();
        uVar6 = param_1;
        func_0x00010be1ebe0(param_1,param_2,param_3);
        uVar10 = param_6;
        func_0x00010bf529e0();
        if (uVar10 != 0) {
          uVar10 = 0;
          do {
            if (uVar10 != 0) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar10);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = param_5;
              func_0x00010bf4b900(param_5,param_2,puVar3);
              _objc_release(puVar3);
              if ((uVar7 & 1) == 0) {
                puVar3 = PTR_PTR_1126b76f0;
                _objc_opt_new(PTR_PTR_1126b76f0);
                func_0x00010c164dc0();
                func_0x00010c2059c0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd1f38)
                ;
                puVar4 = PTR_PTR_1126b7710;
                _objc_opt_new(PTR_PTR_1126b7710);
                func_0x00010c162f80(puVar3,param_2,puVar4);
                _objc_release(puVar4);
                puVar4 = PTR_PTR_1126b7718;
                _objc_opt_new(PTR_PTR_1126b7718);
                puVar5 = puVar3;
                func_0x00010bef1ae0(puVar3);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c221920();
                _objc_release(puVar5);
                _objc_release(puVar4);
                puVar4 = puVar3;
                func_0x00010bef1ae0(puVar3);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar4;
                func_0x00010c29a500();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c214f20();
                _objc_release(puVar5);
                _objc_release(puVar4);
                func_0x00010c296de0(param_6,param_2,uVar10);
                puVar4 = puVar3;
                func_0x00010bef1ae0(puVar3);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar4;
                func_0x00010c29a500();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c209a20();
                _objc_release(puVar5);
                _objc_release(puVar4);
                puVar4 = puVar2;
                func_0x00010bf529e0(puVar2);
                uVar8 = param_1;
                func_0x00010bdf2200(param_1,param_2,param_3,puVar4 + 1);
                _objc_retainAutoreleasedReturnValue();
                puVar4 = puVar3;
                func_0x00010bef1ae0(puVar3);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c163d80();
                _objc_release(puVar4);
                _objc_release(uVar8);
                uVar8 = param_1;
                func_0x00010bdd83c0(param_1,param_2,uVar6,uVar10);
                func_0x00010c204680(puVar3,param_2,uVar8);
                func_0x00010c1d0560(puVar2,param_2,puVar3,uVar10);
                _objc_release(puVar3);
              }
            }
            uVar10 = uVar10 + 1;
            uVar7 = param_6;
            func_0x00010bf529e0();
          } while (uVar10 < uVar7);
        }
        func_0x00010c1d5f00(puVar9,param_2,puVar2);
        _objc_release(puVar2);
      }
    }
    _objc_release(puVar1);
  }
LAB_10532003c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105320080; end: 105320373; -[SCDiscoverFeedCardPublisherStoryConverter _createTimeBasedAdPlacementsFromShowSnapAdPlacements:] */

void FUN_105320080(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
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
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar14 = PTR_PTR_1126b7720;
  _objc_opt_new();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163da0(puVar14,param_2,puVar1);
  _objc_release(puVar1);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  lVar2 = param_3;
  func_0x00010c26f080();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef3bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar10 = &uStack_1b0;
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_1a0;
    do {
      lVar17 = 0;
      do {
        if (*plStack_1a0 != lVar11) {
          _objc_enumerationMutation(lVar3);
        }
        lVar15 = *(long *)(lStack_1a8 + lVar17 * 8);
        puVar1 = PTR_PTR_1126b7728;
        _objc_opt_new(PTR_PTR_1126b7728);
        lVar4 = lVar15;
        func_0x00010c25bde0(lVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c20e200(puVar1,param_2,lVar4);
        _objc_release(lVar4);
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c214c40(puVar1,param_2,puVar5);
        _objc_release(puVar5);
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        func_0x00010c26f0a0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar15;
        func_0x00010bf52a60();
        if (lVar4 != 0) {
          lVar13 = *plStack_1e0;
          do {
            lVar12 = 0;
            do {
              if (*plStack_1e0 != lVar13) {
                _objc_enumerationMutation(lVar15);
              }
              uVar16 = *(undefined8 *)(lStack_1e8 + lVar12 * 8);
              puVar5 = PTR_PTR_1126b7730;
              _objc_opt_new(PTR_PTR_1126b7730);
              func_0x00010bef3be0(uVar16);
              func_0x00010c163dc0(puVar5);
              puVar6 = puVar1;
              func_0x00010c26f0a0(puVar1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120();
              _objc_release(puVar6);
              _objc_release(puVar5);
              lVar12 = lVar12 + 1;
            } while (lVar4 != lVar12);
            lVar4 = lVar15;
            func_0x00010bf52a60(lVar15,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar4 != 0);
        }
        _objc_release(lVar15);
        puVar5 = puVar14;
        func_0x00010bef3bc0(puVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar5);
        _objc_release(puVar1);
        lVar17 = lVar17 + 1;
      } while (lVar17 != lVar2);
      puVar10 = &uStack_1b0;
      lVar2 = lVar3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar10);
    puVar7 = puVar10;
    func_0x00010bfd5f00();
    if ((int)puVar7 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR_PTR_1126b7738;
      _objc_opt_new(PTR_PTR_1126b7738);
      puVar7 = puVar10;
      func_0x00010bf5b080(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c11b3a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cafa0(puVar14,param_2,puVar8);
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar7 = puVar10;
      func_0x00010bf5b080(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c11b3a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5b80(puVar14,param_2,puVar8);
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar7 = puVar10;
      func_0x00010bf5b080(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5b40(puVar14,param_2,puVar8);
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar7 = puVar10;
      func_0x00010bf5b080(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c08f3c0();
      func_0x00010c1e5b60(puVar14,param_2,puVar8);
      _objc_release(puVar7);
      puVar7 = puVar10;
      func_0x00010bf5b080(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c116a20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1745a0(puVar14,param_2,puVar8);
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar7 = puVar10;
      func_0x00010bf5b080(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf68960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e5ae0(puVar14,param_2,puVar8);
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar7 = puVar10;
      func_0x00010bf5b080(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0b4680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19bce0(puVar14,param_2,puVar8);
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar7 = puVar10;
      func_0x00010bf2f9e0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c25fd00();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf80d20();
      func_0x00010c1b4c80(puVar14,param_2,(uint)puVar9 ^ 1);
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar7 = puVar10;
      func_0x00010bf2f9e0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0dbb80();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf80d20();
      func_0x00010c1671a0(puVar14,param_2,(uint)puVar9 ^ 1);
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar7 = puVar10;
      func_0x00010bf2f9e0(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c131980();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf80d20();
      func_0x00010c1b00a0(puVar14,param_2,puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar7 = puVar10;
      func_0x00010bf2f9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar7);
      if (puVar8 != (undefined8 *)0x0) {
        puVar7 = puVar10;
        func_0x00010bf2f9e0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bf4bca0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010befe160();
        func_0x00010c164600(puVar14,param_2,(uint)puVar9 ^ 1);
        _objc_release(puVar8);
        _objc_release(puVar7);
      }
      func_0x00010c1b2da0(puVar14,param_2,0);
      func_0x00010c1ee640(puVar14,param_2,0);
    }
    _objc_release(puVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 105320374; end: 1053206d7; -[SCDiscoverFeedCardPublisherStoryConverter _createStoryPublisher:] */

void FUN_105320374(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfd5f00();
  if ((int)lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b7738;
    _objc_opt_new(PTR_PTR_1126b7738);
    lVar1 = param_3;
    func_0x00010bf5b080(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c11b3a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cafa0(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf5b080(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c11b3a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5b80(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf5b080(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5b40(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf5b080(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08f3c0();
    func_0x00010c1e5b60(puVar4,param_2,lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf5b080(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1745a0(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf5b080(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf68960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5ae0(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf5b080(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0b4680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bce0(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf2f9e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c25fd00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf80d20();
    func_0x00010c1b4c80(puVar4,param_2,(uint)lVar3 ^ 1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf2f9e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dbb80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf80d20();
    func_0x00010c1671a0(puVar4,param_2,(uint)lVar3 ^ 1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf2f9e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c131980();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf80d20();
    func_0x00010c1b00a0(puVar4,param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf2f9e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf4bca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_3;
      func_0x00010bf2f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010befe160();
      func_0x00010c164600(puVar4,param_2,(uint)lVar3 ^ 1);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    func_0x00010c1b2da0(puVar4,param_2,0);
    func_0x00010c1ee640(puVar4,param_2,0);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1053206d8; end: 105320d73; -[SCDiscoverFeedCardPublisherStoryConverter _createPublisherAdPlacementMetadataJSON:position:] */

void FUN_1053206d8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd5160();
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010bf2f9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd5b00();
    if ((uVar2 & 1) == 0) {
      _objc_release(uVar1);
    }
    else {
      uVar2 = param_3;
      func_0x00010bf2f9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfd3d20();
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar4 != 0) {
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        uVar1 = param_3;
        func_0x00010bf2f9e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf4bca0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bef58c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bef6180();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5,param_2,uVar4,&PTR____CFConstantStringClassReference_110dd1f78);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
        uVar1 = param_3;
        func_0x00010bf2f9e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf4bca0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bef58c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c06a3a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6,param_2,uVar4,&PTR____CFConstantStringClassReference_110dd1f98);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        uVar1 = param_3;
        func_0x00010bf2f9e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf4bca0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bef58c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c116320();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6,param_2,uVar4,&PTR____CFConstantStringClassReference_110dd1fb8);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        uVar1 = param_3;
        func_0x00010bf2f9e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf4bca0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bef58c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf356e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6,param_2,uVar4,&PTR____CFConstantStringClassReference_110dd1fd8);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        uVar1 = param_3;
        func_0x00010bf2f9e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf4bca0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bef58c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf35520();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6,param_2,uVar4,&PTR____CFConstantStringClassReference_110dd1ff8);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        uVar1 = param_3;
        func_0x00010bf2f9e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf4bca0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bef58c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf8c980();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6,param_2,uVar4,&PTR____CFConstantStringClassReference_110dd2018);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        uVar1 = param_3;
        func_0x00010bf2f9e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf4bca0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bef58c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c08f3e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6,param_2,uVar4,&PTR____CFConstantStringClassReference_110dd2038);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        uVar1 = param_3;
        func_0x00010bf2f9e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf4bca0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bef58c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c06a4a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6,param_2,uVar4,&PTR____CFConstantStringClassReference_110dd2058);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        uVar1 = param_3;
        func_0x00010bf2f9e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf4bca0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bef58c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c125a80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6,param_2,uVar4,&PTR____CFConstantStringClassReference_110dd2078);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        uVar1 = param_3;
        func_0x00010bf2f9e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf4bca0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bef58c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf35680();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6,param_2,uVar4,&PTR____CFConstantStringClassReference_110dd2098);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        uVar1 = param_3;
        func_0x00010bf2f9e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf4bca0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bef58c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c06a380();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6,param_2,uVar4,&PTR____CFConstantStringClassReference_110dd20b8);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        _objc_release(uVar1);
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6,param_2,puVar7,&PTR____CFConstantStringClassReference_110daf598);
        _objc_release(puVar7);
        func_0x00010c1d0640(puVar5,param_2,puVar6,&PTR____CFConstantStringClassReference_110dd20d8);
        uStack_58 = 0;
        puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
        func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,puVar5,0,
                            &uStack_58);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar5);
        goto LAB_105320d4c;
      }
    }
  }
  puVar7 = (undefined *)0x0;
LAB_105320d4c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105320d74; end: 105320ed7; -[SCDiscoverFeedCardPublisherStoryConverter _createAdSlotsWithSnaps:] */

void FUN_105320d74(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar4 = param_3;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    uVar4 = 0;
    do {
      uVar5 = param_3;
      func_0x00010c0dfd40(param_3,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bef60a0();
      _objc_release(uVar5);
      if ((int)uVar6 != 0) {
        if (uVar4 == 0) {
          uVar5 = 0;
        }
        else {
          uVar6 = param_3;
          func_0x00010c0dfd40(param_3,param_2,uVar4 - 1);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar6;
          func_0x00010c241220();
          _objc_release(uVar6);
        }
        uVar6 = param_3;
        func_0x00010bf529e0();
        if (uVar4 < uVar6 - 1) {
          uVar2 = param_3;
          func_0x00010c0dfd40(param_3,param_2,uVar4 + 1);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar2;
          func_0x00010c241220();
          _objc_release(uVar2);
        }
        else {
          uVar6 = 0;
        }
        puVar3 = PTR_PTR_1126b7740;
        _objc_opt_new(PTR_PTR_1126b7740);
        func_0x00010c164780();
        func_0x00010c1e1800(puVar3,param_2,uVar5);
        func_0x00010c1cd4e0(puVar3,param_2,uVar6);
        func_0x00010befa120(puVar1,param_2,puVar3);
        _objc_release(puVar3);
      }
      uVar4 = uVar4 + 1;
      uVar5 = param_3;
      func_0x00010bf529e0();
    } while (uVar4 < uVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105320ed8; end: 105321247; -[SCDiscoverFeedCardPublisherStoryConverter _createPublisherAdPlacementMetadata:] */

void FUN_105320ed8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfd5160();
  if ((int)puVar1 == 0) {
LAB_105321210:
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar1 = param_3;
    func_0x00010bf2f9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bfd5b00();
    if ((int)puVar6 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = param_3;
      func_0x00010bf2f9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar6;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfd3d20();
      _objc_release(puVar2);
      _objc_release(puVar6);
      _objc_release(puVar1);
      if ((int)puVar3 == 0) goto LAB_105321210;
      puVar6 = PTR_PTR_1126b76f8;
      _objc_opt_new(PTR_PTR_1126b76f8);
      puVar1 = param_3;
      func_0x00010bf2f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bef58c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bef6180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c164e00(puVar6,param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126b7700;
      _objc_opt_new(PTR_PTR_1126b7700);
      puVar2 = param_3;
      func_0x00010bf2f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bef58c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c06a380();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ae8c0(puVar1,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = param_3;
      func_0x00010bf2f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bef58c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c06a3a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ae880(puVar1,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = param_3;
      func_0x00010bf2f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bef58c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf35680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17ab60(puVar1,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = param_3;
      func_0x00010bf2f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bef58c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c125a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21f140(puVar1,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      func_0x00010c212760(puVar6,param_2,puVar1);
      func_0x00010c1ae680(puVar6,param_2,0);
      puVar2 = param_3;
      func_0x00010bf2f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd3ce0();
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105321248; end: 10532161b; -[SCDiscoverFeedCardPublisherStoryConverter _createPublisherSnapTile:forSnapId:] */

void FUN_105321248(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar7;
  undefined8 unaff_x28;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010bf53980();
  if (lVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b7748;
    _objc_opt_new(PTR_PTR_1126b7748);
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_10532161c;
    uStack_70 = 0x10532162c;
    uStack_68 = 0;
    lVar3 = param_3;
    func_0x00010bf53960(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010bf97e80(lVar3);
    _objc_release(lVar3);
    uVar4 = puStack_88[5];
    func_0x00010c2711a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7c00(puVar6);
    _objc_release(uVar4);
    iVar2 = (int)puStack_88[5];
    func_0x00010bfd8ea0();
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      unaff_x24 = puStack_88[5];
      func_0x00010c0c3fe0(unaff_x24);
      _objc_retainAutoreleasedReturnValue();
      unaff_x25 = unaff_x24;
      func_0x00010c24d840();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = unaff_x25;
      func_0x00010bf4db80();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c1aa800(puVar6);
    if (iVar2 != 0) {
      _objc_release(uVar4);
      _objc_release(unaff_x25);
      _objc_release(unaff_x24);
    }
    uVar5 = puStack_88[5];
    func_0x00010bfd8b80();
    if ((int)uVar5 == 0) {
      bVar1 = false;
      uVar7 = 0;
    }
    else {
      unaff_x24 = puStack_88[5];
      func_0x00010c0b4520();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = unaff_x24;
      func_0x00010bfd8ea0();
      if ((int)uVar7 == 0) {
        bVar1 = false;
        uVar7 = 0;
      }
      else {
        unaff_x25 = puStack_88[5];
        func_0x00010c0b4520(unaff_x25);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = unaff_x25;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = uVar4;
        func_0x00010c24d840();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = unaff_x28;
        func_0x00010bf4db80();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
      }
    }
    func_0x00010c1c0ac0(puVar6);
    if (bVar1) {
      _objc_release(uVar7);
      _objc_release(unaff_x28);
      _objc_release(uVar4);
      _objc_release(unaff_x25);
    }
    if ((int)uVar5 != 0) {
      _objc_release(unaff_x24);
    }
    func_0x00010be20500(param_1);
    func_0x00010c1c0a60(puVar6);
    iVar2 = (int)puStack_88[5];
    func_0x00010bfd8b80();
    if (iVar2 == 0) {
      bVar1 = false;
      uVar4 = 0;
    }
    else {
      uVar5 = puStack_88[5];
      func_0x00010c0b4520();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010bfd9da0();
      if ((int)uVar4 == 0) {
        bVar1 = false;
        uVar4 = 0;
      }
      else {
        unaff_x24 = puStack_88[5];
        func_0x00010c0b4520(unaff_x24);
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010c0ef4a0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = unaff_x25;
        func_0x00010bfcd8a0();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
      }
    }
    func_0x00010c1c0aa0(puVar6);
    if (bVar1) {
      _objc_release(uVar4);
      _objc_release(unaff_x25);
      _objc_release(unaff_x24);
    }
    if (iVar2 != 0) {
      _objc_release(uVar5);
    }
    uVar4 = param_4;
    func_0x00010bdc1b20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214840(puVar6);
    _objc_release(uVar4);
    _objc_release(param_4);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(uStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10532161c; end: 105321633;  */

void FUN_10532161c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105321634; end: 1053216c3;  */

void FUN_105321634(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar1 != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_2;
    _objc_release(uVar2);
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053216c4; end: 10532176b; -[SCDiscoverFeedCardPublisherStoryConverter _getLogoLocation:] */

uint FUN_1053216c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd8b80();
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c0b4520();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd8ea0();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar1 = param_3;
      func_0x00010c0b4520();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c104260();
      _objc_release(uVar1);
      uVar3 = (uint)uVar2;
      if (3 < (uint)uVar2) {
        uVar3 = 0xfbadbeef;
      }
      goto LAB_105321750;
    }
  }
  uVar3 = 0;
LAB_105321750:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10532176c; end: 1053219ab; -[SCDiscoverFeedCardPublisherStoryConverter _createVideoTracksArrayForFeedCardSnaps:] */

void FUN_10532176c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfdc2e0();
  if ((int)uVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c23fe00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be20740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar2 = param_1;
    func_0x00010bfd8fc0();
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010c0c5180(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c55e0();
      _objc_release(uVar2);
    }
    uVar1 = param_3;
    func_0x00010c23fe00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0c6280();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_10531b64c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar1);
    puVar7 = PTR_PTR_1126b7750;
    _objc_opt_new(PTR_PTR_1126b7750);
    puVar5 = PTR_PTR_1126b7758;
    _objc_opt_new(PTR_PTR_1126b7758);
    uVar1 = param_3;
    func_0x00010bfdc3c0();
    if ((uVar1 & 1) == 0) {
      func_0x00010c2218e0(puVar5);
    }
    else {
      uVar1 = param_3;
      func_0x00010c241da0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c29a460();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2218e0(puVar5);
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
    func_0x00010c0c4bc0(param_1);
    func_0x00010c192d40(puVar5);
    func_0x00010c214f20(puVar5);
    uVar1 = uVar4;
    func_0x00010bdc2b80(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a8c80(puVar5);
    _objc_release(uVar1);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    func_0x00010c2221a0(puVar7);
    _objc_release(puVar6);
    puVar6 = puVar7;
    func_0x00010c29ba60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1053219ac; end: 105321a43; -[SCDiscoverFeedCardPublisherStoryConverter _getEditionIdFromFeedCard:] */

undefined8 FUN_1053219ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010bf2f9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf4bca0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef58c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf8c980();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b4ca0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 105321a44; end: 105321afb; -[SCDiscoverFeedCardPublisherStoryConverter _getCreatorUUIDFromFeedCard:] */

void FUN_105321a44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd5f00();
  if ((int)uVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf5b080(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100576d08();
    _objc_release(uVar2);
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126afad0;
    _objc_opt_new(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105321afc; end: 105321e1f; -[SCDiscoverFeedCardPublisherStoryConverter _getSnapFromFeedCard:feedCardSnaps:userId:ofShowType:] */

void FUN_105321afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,int param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bf529e0();
  if (uVar1 < 2) {
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar1 = param_4;
    if (param_6 == 0) {
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar9 = PTR_PTR_1126b76f0;
    _objc_opt_new(PTR_PTR_1126b76f0);
    uVar2 = uVar1;
    func_0x00010c241220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b4ca0();
    func_0x00010c204680(puVar9,param_2,uVar3);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bfdc2e0();
    if ((uVar2 & 1) == 0) {
      func_0x00010c203f00(puVar9,param_2,0);
    }
    else {
      uVar2 = uVar1;
      func_0x00010c23fe00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c203f00(puVar9,param_2,uVar2);
      _objc_release(uVar2);
    }
    puVar4 = PTR_PTR_1126b7688;
    _objc_opt_new(PTR_PTR_1126b7688);
    func_0x00010c21acc0();
    uVar2 = uVar1;
    func_0x00010bfdc320();
    if ((uVar2 & 1) == 0) {
      func_0x00010c19f080(puVar9,param_2,puVar4);
    }
    else {
      uVar2 = uVar1;
      func_0x00010c241140(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f080(puVar9,param_2,uVar2);
      _objc_release(uVar2);
    }
    uVar2 = uVar1;
    func_0x00010c241220(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d6820(puVar9,param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010c164dc0(puVar9,param_2,0);
    func_0x00010c1b3440(puVar9,param_2,1);
    func_0x00010c1a92e0(puVar9,param_2,param_5);
    if (param_6 == 0) {
      func_0x00010c2059c0(puVar9,param_2,&PTR____CFConstantStringClassReference_110dd1f58);
      func_0x00010c1c5440(puVar9,param_2,2);
    }
    else {
      func_0x00010c2059c0(puVar9,param_2,&PTR____CFConstantStringClassReference_110dd1f38);
      func_0x00010c1c5440(puVar9,param_2,1);
      uVar2 = uVar1;
      func_0x00010c241220(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010bdf2220(param_1,param_2,param_3,uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214700(puVar9,param_2,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar2);
      func_0x00010be23520(param_1,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19d000(puVar9,param_2,param_1);
      _objc_release(param_1);
      puVar6 = PTR_PTR_1126b7760;
      _objc_opt_new(PTR_PTR_1126b7760);
      puVar7 = PTR_PTR_1126b7718;
      _objc_opt_new(PTR_PTR_1126b7718);
      func_0x00010c214f20();
      func_0x00010c221920(puVar6,param_2,puVar7);
      func_0x00010c17ac20(puVar9,param_2,puVar6);
      puVar8 = puVar9;
      func_0x00010bfb68a0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fcea0();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    _objc_release(puVar4);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105321e20; end: 1053221cb; -[SCDiscoverFeedCardPublisherStoryConverter _createChapterSnapsWithSnapDoc:andFirstFrameCO:] */

void FUN_105321e20(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar9 = param_3;
  func_0x00010bfda540();
  if ((int)uVar9 != 0) {
    uVar9 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar9;
    func_0x00010bfda560();
    if ((uVar1 & 1) == 0) {
      _objc_release(uVar9);
    }
    else {
      uVar1 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0fef80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c157000();
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(uVar9);
      if (uVar3 != 0) {
        puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        uVar9 = param_3;
        func_0x00010c0fee00();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar9;
        func_0x00010c0fef80();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c157000();
        _objc_release(uVar1);
        _objc_release(uVar9);
        if (1 < uVar2) {
          uVar9 = 1;
          do {
            uVar1 = param_3;
            func_0x00010c0fee00(param_3);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010c0fef80();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c156fe0();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar3);
            _objc_release(uVar2);
            _objc_release(uVar1);
            uVar1 = param_3;
            func_0x00010c0fee00(param_3);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010c0fef80();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c157020();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c296de0();
            _objc_release(uVar3);
            _objc_release(uVar2);
            _objc_release(uVar1);
            puVar5 = PTR_PTR_1126b76f0;
            _objc_opt_new(PTR_PTR_1126b76f0);
            uVar1 = uVar4;
            func_0x00010bf35880(uVar4);
            func_0x00010c204680(puVar5,param_2,uVar1);
            func_0x00010c2059c0(puVar5,param_2,&PTR____CFConstantStringClassReference_110dd1f38);
            func_0x00010c19d000(puVar5,param_2,param_4);
            puVar6 = PTR_PTR_1126b7760;
            _objc_opt_new(PTR_PTR_1126b7760);
            func_0x00010c17ac20(puVar5,param_2,puVar6);
            _objc_release(puVar6);
            puVar6 = PTR_PTR_1126b7718;
            _objc_opt_new(PTR_PTR_1126b7718);
            puVar7 = puVar5;
            func_0x00010bf35840(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c221920();
            _objc_release(puVar7);
            _objc_release(puVar6);
            puVar6 = puVar5;
            func_0x00010bf35840(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c29a500();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c214f20();
            _objc_release(puVar7);
            _objc_release(puVar6);
            puVar6 = puVar5;
            func_0x00010bf35840(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c29a500();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c209a20();
            _objc_release(puVar7);
            _objc_release(puVar6);
            func_0x00010c1b3440(puVar5,param_2,1);
            puVar6 = PTR_PTR_1126b7688;
            _objc_opt_new(PTR_PTR_1126b7688);
            func_0x00010c21acc0();
            func_0x00010c19f080(puVar5,param_2,puVar6);
            func_0x00010befa120(puVar8,param_2,puVar5);
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(uVar4);
            uVar9 = uVar9 + 1;
            uVar1 = param_3;
            func_0x00010c0fee00();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010c0fef80();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c157000();
            _objc_release(uVar2);
            _objc_release(uVar1);
          } while (uVar9 < uVar3);
        }
        goto LAB_10532219c;
      }
    }
  }
  puVar8 = (undefined *)0x0;
LAB_10532219c:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1053221cc; end: 10532232f; -[SCDiscoverFeedCardPublisherStoryConverter _getFeedCardSnapsToLongformShowSnaps:forFeedCard:andPlacementIndices:longformShowSnap:subscriptionSnap:uuid:] */

void FUN_1053221cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b76e8;
  _objc_opt_new(PTR_PTR_1126b76e8);
  func_0x00010c16f420();
  if ((param_6 != 0) && (param_7 != 0)) {
    lVar2 = param_6;
    func_0x00010c23fe00(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_6;
    func_0x00010bfb1200(param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010bdebea0(param_1,param_2,lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010bdf3520(param_1,param_2,param_4,param_8,param_6,param_7,uVar4,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c206240(puVar1,param_2,param_1);
    _objc_release(param_1);
    _objc_release(uVar4);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105322330; end: 105322a43; -[SCDiscoverFeedCardPublisherStoryConverter _createShowSnapsWithAdPlacementMetadataForFeedCard:userId:withShowSnap:subscriptionsnap:chaptersSnaps:andPlacementIndices:] */

void FUN_105322330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  ulong uVar14;
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
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar12 = param_5;
  func_0x00010bfdc2e0();
  if ((int)uVar12 != 0) {
    uVar12 = param_5;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar12;
    func_0x00010bfd3ce0();
    if ((uVar5 & 1) != 0) {
      uVar5 = param_5;
      func_0x00010c23fe00();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar5;
      func_0x00010bef3b60();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfdd560();
      if ((uVar2 & 1) != 0) {
        uVar2 = param_5;
        func_0x00010c23fe00();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar2;
        func_0x00010bfda540();
        if ((int)uVar14 != 0) {
          uVar14 = param_5;
          func_0x00010c23fe00();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar14;
          func_0x00010c0fee00();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010bfda560();
          _objc_release(uVar3);
          _objc_release(uVar14);
          _objc_release(uVar2);
          _objc_release(uVar1);
          _objc_release(uVar5);
          _objc_release(uVar12);
          if ((int)uVar4 == 0) {
            puVar10 = (undefined *)0x0;
          }
          else {
            puStack_a0 = &uStack_a8;
            uStack_a8 = 0;
            uStack_98 = 0x3032000000;
            pcStack_90 = FUN_10532161c;
            uStack_88 = 0x10532162c;
            uStack_80 = 0;
            uVar12 = param_5;
            func_0x00010c23fe00(param_5);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar12;
            func_0x00010bef3b60();
            _objc_retainAutoreleasedReturnValue();
            uVar1 = uVar5;
            func_0x00010c26f080();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010bef3bc0();
            _objc_retainAutoreleasedReturnValue();
            uVar14 = 0xc2000000;
            func_0x00010bf97e80();
            _objc_release(uVar2);
            _objc_release(uVar1);
            _objc_release(uVar5);
            _objc_release(uVar12);
            puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            uVar12 = param_5;
            func_0x00010bfb68a0(param_5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1fcea0();
            _objc_release(uVar12);
            func_0x00010befa120(puVar10);
            func_0x00010be1ebe0();
            uVar12 = param_5;
            func_0x00010c23fe00();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar12;
            func_0x00010c0fee00();
            _objc_retainAutoreleasedReturnValue();
            uVar1 = uVar5;
            func_0x00010c0fef80();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = uVar1;
            func_0x00010c157020();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar1);
            _objc_release(uVar5);
            _objc_release(uVar12);
            uVar12 = 0;
            for (lVar11 = 1; uVar5 = param_7, func_0x00010bf529e0(), lVar11 - 1U < uVar5;
                lVar11 = lVar11 + 1) {
              uVar5 = puStack_a0[5];
              func_0x00010bf529e0();
              fVar13 = (float)uVar14;
              if (uVar12 < uVar5) {
                uVar6 = puStack_a0[5];
                func_0x00010c0dfd40(uVar6);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bef3be0();
                _objc_release(uVar6);
                uVar5 = uVar2;
                func_0x00010c296de0();
                fVar13 = fVar13 * 1000.0 + -100.0;
                uVar14 = (ulong)(uint)fVar13;
                if (fVar13 < (float)(long)uVar5) {
                  puVar7 = PTR_PTR_1126b76f0;
                  _objc_opt_new(PTR_PTR_1126b76f0);
                  func_0x00010c164dc0();
                  func_0x00010c2059c0(puVar7);
                  puVar8 = PTR_PTR_1126b7710;
                  _objc_opt_new(PTR_PTR_1126b7710);
                  func_0x00010c162f80(puVar7);
                  _objc_release(puVar8);
                  puVar8 = PTR_PTR_1126b7718;
                  _objc_opt_new(PTR_PTR_1126b7718);
                  puVar9 = puVar7;
                  func_0x00010bef1ae0(puVar7);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c221920();
                  _objc_release(puVar9);
                  _objc_release(puVar8);
                  puVar8 = puVar7;
                  func_0x00010bef1ae0(puVar7);
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = puVar8;
                  func_0x00010c29a500();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c214f20();
                  _objc_release(puVar9);
                  _objc_release(puVar8);
                  func_0x00010c296de0(uVar2);
                  puVar8 = puVar7;
                  func_0x00010bef1ae0(puVar7);
                  _objc_retainAutoreleasedReturnValue();
                  puVar9 = puVar8;
                  func_0x00010c29a500();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c209a20();
                  _objc_release(puVar9);
                  _objc_release(puVar8);
                  uVar12 = uVar12 + 1;
                  uVar6 = param_1;
                  func_0x00010bdf2200(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = puVar7;
                  func_0x00010bef1ae0(puVar7);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c163d80();
                  _objc_release(puVar8);
                  _objc_release(uVar6);
                  puVar8 = PTR_PTR_1126b7688;
                  _objc_opt_new(PTR_PTR_1126b7688);
                  func_0x00010c21acc0();
                  func_0x00010bf529e0(puVar10);
                  func_0x00010c1fcea0(puVar8);
                  func_0x00010c19f080(puVar7);
                  func_0x00010c1b3440(puVar7);
                  func_0x00010c1a92e0(puVar7);
                  func_0x00010bdd83c0(param_1);
                  func_0x00010c204680(puVar7);
                  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010befa120(param_8);
                  _objc_release(puVar9);
                  func_0x00010befa120(puVar10);
                  _objc_release(puVar8);
                  _objc_release(puVar7);
                }
              }
              func_0x00010bf529e0(puVar10);
              uVar5 = param_7;
              func_0x00010c0dfd40(param_7);
              _objc_retainAutoreleasedReturnValue();
              uVar1 = uVar5;
              func_0x00010bfb68a0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1fcea0();
              _objc_release(uVar1);
              _objc_release(uVar5);
              uVar5 = param_7;
              func_0x00010c0dfd40(param_7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar10);
              _objc_release(uVar5);
            }
            func_0x00010bf529e0(puVar10);
            uVar6 = param_6;
            func_0x00010bfb68a0(param_6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1fcea0();
            _objc_release(uVar6);
            func_0x00010befa120(puVar10);
            _objc_release(uVar2);
            __Block_object_dispose(&uStack_a8,8);
            _objc_release(uStack_80);
          }
          goto LAB_105322938;
        }
        _objc_release(uVar2);
      }
      _objc_release(uVar1);
      _objc_release(uVar5);
    }
    _objc_release(uVar12);
  }
  puVar10 = (undefined *)0x0;
LAB_105322938:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105322a44; end: 105322b1b;  */

void FUN_105322a44(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c25bde0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c071ae0();
  if ((int)uVar3 == 0) {
    uVar3 = param_2;
    func_0x00010c25bde0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((int)uVar2 == 0) goto LAB_105322b04;
  }
  else {
    _objc_release(uVar1);
  }
  uVar1 = param_2;
  func_0x00010c26f0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar3);
  *param_4 = 1;
LAB_105322b04:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105322b1c; end: 105322d23; -[SCDiscoverFeedCardPublisherStoryConverter _createBoostMetadataWithFeedCard:] */

void FUN_105322b1c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bfd5160();
  if ((int)puVar1 != 0) {
    puVar1 = param_3;
    func_0x00010bf2f9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bfd4ba0();
    _objc_release(puVar1);
    if ((int)puVar6 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar6 = PTR_PTR_1126b7768;
      _objc_opt_new();
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      puVar2 = param_3;
      func_0x00010bf2f9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar2;
      func_0x00010bf1f640();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar9;
      func_0x00010c0cc100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar2);
      puVar2 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_130,auStack_f0,0x10);
      if (puVar2 != (undefined *)0x0) {
        lVar8 = *plStack_120;
        do {
          puVar9 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar8) {
              _objc_enumerationMutation(puVar3);
            }
            uVar7 = *(undefined8 *)(lStack_128 + (long)puVar9 * 8);
            puVar4 = PTR_PTR_1126b7770;
            _objc_opt_new(PTR_PTR_1126b7770);
            uVar5 = uVar7;
            func_0x00010bf1f9c0(uVar7);
            func_0x00010c173180(puVar4,param_2,uVar5);
            func_0x00010c270ac0(uVar7);
            func_0x00010c215e60(puVar4,param_2,uVar7);
            func_0x00010befa120(puVar1,param_2,puVar4);
            _objc_release(puVar4);
            puVar9 = puVar9 + 1;
          } while (puVar2 != puVar9);
          puVar2 = puVar3;
          func_0x00010bf52a60(puVar3,param_2,&uStack_130,auStack_f0,0x10);
        } while (puVar2 != (undefined *)0x0);
      }
      _objc_release(puVar3);
      puVar2 = puVar1;
      func_0x00010c1caa60(puVar6);
      _objc_release(puVar1);
      goto LAB_105322cdc;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_105322cdc:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar2);
    puVar6 = PTR_PTR_1126b7778;
    _objc_opt_new(PTR_PTR_1126b7778);
    puVar1 = puVar2;
    func_0x00010bf2f9e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bfde660();
    _objc_release(puVar1);
    if ((int)puVar9 != 0) {
      puVar1 = puVar2;
      func_0x00010bf2f9e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010c2a2840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = puVar9;
      func_0x00010c08abc0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b90e0(puVar6,param_2,puVar1);
      _objc_release(puVar1);
      puVar1 = puVar9;
      func_0x00010c08a020(puVar9);
      func_0x00010c2051e0(puVar6,param_2,puVar1);
      _objc_release(puVar9);
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105322d24; end: 105322e03; -[SCDiscoverFeedCardPublisherStoryConverter _createWatchedState:] */

void FUN_105322d24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7778;
  _objc_opt_new(PTR_PTR_1126b7778);
  uVar2 = param_3;
  func_0x00010bf2f9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfde660();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    uVar2 = param_3;
    func_0x00010bf2f9e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2a2840();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010c08abc0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b90e0(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010c08a020(uVar3);
    func_0x00010c2051e0(puVar1,param_2,uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105322e04; end: 105322e1f; -[SCDiscoverFeedCardPublisherStoryConverter _calculateAdSnapIdWithEditionId:adSlotPosition:] */

long FUN_105322e04(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  return (long)(-((double)param_4 * 1e+16) - (double)param_3);
}



/* Entry: 105322e20; end: 105322f73; -[SCDiscoverFeedCardPublisherStoryConverter _getMediaLayerMetadataFromSnapDoc:] */

void FUN_105322e20(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfda540();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0ff680();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      puStack_58 = &uStack_60;
      uStack_60 = 0;
      uStack_50 = 0x3032000000;
      pcStack_48 = FUN_10532161c;
      uStack_40 = 0x10532162c;
      uStack_38 = 0;
      lVar1 = param_3;
      func_0x00010c0fee00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf97e80();
      _objc_release(lVar2);
      _objc_release(lVar1);
      uVar3 = puStack_58[5];
      _objc_retain(uVar3);
      __Block_object_dispose(&uStack_60,8);
      _objc_release(uStack_38);
      goto LAB_105322f3c;
    }
  }
  uVar3 = 0;
LAB_105322f3c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105322f74; end: 105322ff7;  */

void FUN_105322f74(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar1;
    _objc_release(uVar2);
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105322ff8; end: 105323177; -[SCDiscoverFeedCardPublisherStoryConverter _getThumbnailContentObject:] */

void FUN_105322ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfdc2e0();
  if ((int)uVar1 == 0) {
LAB_105323140:
    uVar7 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010bfdd480();
    if ((int)uVar7 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = param_3;
      func_0x00010c23fe00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfdd4a0();
      _objc_release(uVar2);
      _objc_release(uVar7);
      _objc_release(uVar1);
      if ((int)uVar3 == 0) goto LAB_105323140;
      uVar7 = param_3;
      func_0x00010c23fe00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar7;
      func_0x00010c0c6280();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c23fe00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c26e060();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0c55e0();
      uVar1 = uVar2;
      FUN_10531b64c(uVar2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar7);
      uVar7 = uVar1;
      func_0x00010bf4cce0(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 105323178; end: 10532347f; -[SCDiscoverFeedCardSingleSnapStoryConverter createSingleSnapStoryCardForFeedCard:feedSnapsArray:feedType:] */

void FUN_105323178(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7780;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x00010be1f000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c206240(puVar1);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bfb1920(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar3 = param_3;
  FUN_10531b980(param_3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20dce0(puVar1);
  _objc_release(lVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bdf35c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c202c00(puVar1);
  _objc_release(uVar2);
  lVar3 = param_3;
  func_0x00010bfd5160();
  if ((int)lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010bf2f9e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c252d20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010531b7c4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196440(puVar1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010bf2f9e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bdebb20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c175d00(puVar1);
    _objc_release(uVar2);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010bf2f9e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c131980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf80d20();
    func_0x00010c1eae80(puVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010bf2f9e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf4bca0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bef3b60();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c26f080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar6 != 0) {
      lVar3 = param_3;
      func_0x00010bf2f9e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf4bca0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bef3b60();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c26f080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c215900(puVar1);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
    }
  }
  func_0x00010bdeb700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173120(puVar1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105323480; end: 1053235f3; -[SCDiscoverFeedCardSingleSnapStoryConverter _createCalloutLabelFromCapabilities:] */

void FUN_105323480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7788;
  _objc_opt_new(PTR_PTR_1126b7788);
  uVar2 = param_3;
  func_0x00010bfd4fc0();
  if ((int)uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010bf28940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd4fe0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar2 = param_3;
      func_0x00010bf28940(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf28980();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c27dd80();
      func_0x00010bde9780(param_1,param_2,uVar4);
      func_0x00010c21acc0(puVar1,param_2,param_1);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = param_3;
      func_0x00010bf28940(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf28980();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfb7f40();
      func_0x00010c19fbe0(puVar1,param_2,uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = param_3;
      func_0x00010bf28940(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf28980();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfb9180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a0420(puVar1,param_2,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053235f4; end: 105323753; -[SCDiscoverFeedCardSingleSnapStoryConverter _createSingleSnapStoryMetadataFromFeedCard:] */

void FUN_1053235f4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7790;
  _objc_opt_new(PTR_PTR_1126b7790);
  uVar2 = param_3;
  func_0x00010bfd5f00();
  if ((int)uVar2 == 0) {
    func_0x00010c18fca0(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  }
  else {
    uVar2 = param_3;
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08fa60();
    if (uVar4 == 0) {
      func_0x00010c18fca0(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
    }
    else {
      uVar4 = param_3;
      func_0x00010bf5b080(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18fca0(puVar1,param_2,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010bfd5f00();
  if ((uVar2 & 1) == 0) {
    func_0x00010c1745a0(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  }
  else {
    uVar2 = param_3;
    func_0x00010bf5b080(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1745a0(puVar1,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105323754; end: 10532395b; -[SCDiscoverFeedCardSingleSnapStoryConverter _createBoostMetadataWithFeedCard:] */

undefined * FUN_105323754(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 uVar8;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_3;
  _objc_retain(param_3);
  uVar6 = (uint)lVar1;
  lVar1 = param_3;
  func_0x00010bfd5160();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf2f9e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x00010bfd4ba0();
    _objc_release(lVar1);
    if ((int)lVar9 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      puVar7 = PTR_PTR_1126b7768;
      _objc_opt_new(PTR_PTR_1126b7768);
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lVar1 = param_3;
      func_0x00010bf2f9e0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar1;
      func_0x00010bf1f640();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar9;
      func_0x00010c0cc100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      _objc_release(lVar1);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
      if (lVar1 != 0) {
        lVar9 = *plStack_120;
        do {
          lVar10 = 0;
          do {
            if (*plStack_120 != lVar9) {
              _objc_enumerationMutation(lVar3);
            }
            uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
            puVar4 = PTR_PTR_1126b7770;
            _objc_opt_new(PTR_PTR_1126b7770);
            uVar5 = uVar8;
            func_0x00010bf1f9c0(uVar8);
            func_0x00010c173180(puVar4,param_2,uVar5);
            func_0x00010c270ac0(uVar8);
            func_0x00010c215e60(puVar4,param_2,uVar8);
            func_0x00010befa120(puVar2,param_2,puVar4);
            _objc_release(puVar4);
            lVar10 = lVar10 + 1;
          } while (lVar1 != lVar10);
          lVar1 = lVar3;
          func_0x00010bf52a60(lVar3,param_2,&uStack_130,auStack_f0,0x10);
        } while (lVar1 != 0);
      }
      _objc_release(lVar3);
      puVar4 = puVar2;
      func_0x00010c1caa60(puVar7);
      uVar6 = (uint)puVar4;
      _objc_release(puVar2);
      goto LAB_105323914;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_105323914:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return puVar7;
  }
  ___stack_chk_fail();
  if (6 < uVar6) {
    uVar6 = 0xfbadbeef;
  }
  return (undefined *)(ulong)uVar6;
}



/* Entry: 10532395c; end: 10532396f; -[SCDiscoverFeedCardSingleSnapStoryConverter _convertTypeToSingleCardCalloutType:] */

uint FUN_10532395c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if (6 < param_3) {
    param_3 = 0xfbadbeef;
  }
  return param_3;
}



/* Entry: 105323970; end: 105324877; -[SCDiscoverFeedCardSingleSnapStoryConverter _getFeedCardSnapsToStorySnaps:forFeedCard:] */

void FUN_105323970(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  undefined *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined *puStack_2c8;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  long lStack_290;
  undefined8 uStack_278;
  undefined *puStack_268;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfd5160();
  if ((int)uVar1 == 0) {
    uStack_278 = 0;
  }
  else {
    uStack_278 = param_4;
    func_0x00010bf2f9e0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(param_3);
  lStack_290 = param_3;
  func_0x00010bf52a60();
  if (lStack_290 != 0) {
    lVar18 = *plStack_1b0;
    do {
      lVar22 = 0;
      do {
        if (*plStack_1b0 != lVar18) {
          _objc_enumerationMutation(param_3);
        }
        puVar20 = *(undefined **)(lStack_1b8 + lVar22 * 8);
        puStack_1e8 = &uStack_1f0;
        uStack_1f0 = 0;
        uStack_1e0 = 0x3032000000;
        pcStack_1d8 = FUN_105324878;
        uStack_1d0 = 0x105324888;
        puVar4 = PTR_PTR_1126b7678;
        _objc_opt_new();
        puVar5 = puVar20;
        puStack_1c8 = puVar4;
        func_0x00010c241220(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e7920(puStack_1e8[5]);
        _objc_release(puVar5);
        puVar4 = puVar20;
        func_0x00010c241220(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d6820(puStack_1e8[5]);
        _objc_release(puVar4);
        puVar4 = puVar20;
        func_0x00010c241220(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c199560(puStack_1e8[5]);
        _objc_release(puVar4);
        puVar4 = puVar20;
        func_0x00010c241220(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ff260(puStack_1e8[5]);
        _objc_release(puVar4);
        puVar4 = puVar20;
        func_0x00010bfdc260();
        if ((int)puVar4 == 0) {
          puStack_268 = (undefined *)0x0;
        }
        else {
          puStack_268 = puVar20;
          func_0x00010c23f6c0();
          _objc_retainAutoreleasedReturnValue();
        }
        uVar1 = param_4;
        func_0x00010bfd5f00();
        if ((int)uVar1 == 0) {
          puVar4 = (undefined *)puStack_1e8[5];
          func_0x00010c185c80(puVar4);
        }
        else {
          puVar4 = PTR_PTR_1126b7680;
          _objc_opt_new(PTR_PTR_1126b7680);
          uVar1 = param_4;
          func_0x00010bf5b080(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar1;
          func_0x00010c294420();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21ecc0(puVar4);
          _objc_release(uVar3);
          _objc_release(uVar1);
          uVar1 = param_4;
          func_0x00010bf5b080(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar1;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21e620(puVar4);
          _objc_release(uVar3);
          _objc_release(uVar1);
          uVar1 = param_4;
          func_0x00010bf5b080(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar1;
          func_0x00010bf5b3e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c185c00(puVar4);
          _objc_release(uVar3);
          _objc_release(uVar1);
          func_0x00010c185c80(puStack_1e8[5]);
          _objc_release(puVar4);
        }
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c203bc0(puStack_1e8[5]);
        _objc_release(puVar4);
        puVar4 = puVar20;
        func_0x00010bfdc2e0();
        if ((int)puVar4 != 0) {
          puVar4 = puVar20;
          func_0x00010c23fe00();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c270d80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23fb40();
          func_0x00010c185760(puStack_1e8[5]);
          _objc_release(puVar5);
          puVar5 = puVar4;
          func_0x00010bfd4420();
          if ((int)puVar5 == 0) {
            puVar5 = (undefined *)0x0;
          }
          else {
            puVar5 = puVar4;
            func_0x00010bf0d7e0();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar6 = puVar5;
          func_0x00010bf0d800();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf97e80();
          _objc_release(puVar6);
          puVar6 = puVar4;
          func_0x00010bfddcc0();
          if ((int)puVar6 == 0) {
            puVar6 = (undefined *)0x0;
          }
          else {
            puVar6 = puVar4;
            func_0x00010c2814e0();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar7 = puVar6;
          func_0x00010bfddce0();
          if ((int)puVar7 != 0) {
            puVar7 = puVar6;
            func_0x00010c281680(puVar6);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010bf63640();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1fd120(puStack_1e8[5]);
            _objc_release(puVar8);
            _objc_release(puVar7);
            puVar7 = puVar4;
            func_0x00010c2814e0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c281680();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010bfaec20();
            _objc_release(puVar8);
            _objc_release(puVar7);
            puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            if (puVar9 != (undefined *)0x0) {
              puVar8 = puVar4;
              func_0x00010c2814e0();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar8;
              func_0x00010c281680();
              _objc_retainAutoreleasedReturnValue();
              puVar21 = puVar9;
              func_0x00010bfaec00();
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar21;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2810a0();
              func_0x00010c14de00(puVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c19c120(puStack_1e8[5]);
              _objc_release(puVar7);
              _objc_release(puVar10);
              _objc_release(puVar21);
              _objc_release(puVar9);
              _objc_release(puVar8);
            }
          }
          puVar8 = puVar4;
          func_0x00010bfd84e0();
          puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if ((int)puVar8 != 0) {
            puVar8 = puVar4;
            func_0x00010c08fb40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfe5ea0();
            func_0x00010c14de00(puVar7);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1bbd60(puStack_1e8[5]);
            _objc_release(puVar7);
            _objc_release(puVar8);
            puVar7 = puVar4;
            func_0x00010c08fb40(puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c11fae0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1bc920(puStack_1e8[5]);
            _objc_release(puVar8);
            _objc_release(puVar7);
            puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
            func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1bc1e0(puStack_1e8[5]);
            _objc_release(puVar7);
          }
          puVar7 = puVar4;
          func_0x00010bfdabc0();
          if ((int)puVar7 != 0) {
            puVar7 = puVar4;
            func_0x00010c1197a0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            FUN_10531bee0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2056c0(puStack_1e8[5]);
            _objc_release(puVar8);
            _objc_release(puVar7);
            puVar7 = puVar4;
            func_0x00010c1197a0();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010bfdc3a0();
            _objc_release(puVar7);
            if ((int)puVar8 != 0) {
              puVar7 = PTR_PTR_1126b7690;
              _objc_opt_new(PTR_PTR_1126b7690);
              puVar8 = puVar4;
              func_0x00010c1197a0(puVar4);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar8;
              func_0x00010c241c00();
              _objc_retainAutoreleasedReturnValue();
              puVar21 = puVar9;
              func_0x00010c247580();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c206c80(puVar7);
              _objc_release(puVar21);
              _objc_release(puVar9);
              _objc_release(puVar8);
              puVar8 = puVar4;
              func_0x00010c1197a0();
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar8;
              func_0x00010c241c00();
              _objc_retainAutoreleasedReturnValue();
              puVar21 = puVar9;
              func_0x00010bfdc760();
              _objc_release(puVar9);
              _objc_release(puVar8);
              if ((int)puVar21 != 0) {
                puVar8 = puVar4;
                func_0x00010c1197a0();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar8;
                func_0x00010c241c00(puVar8);
                _objc_retainAutoreleasedReturnValue();
                puVar21 = puVar9;
                func_0x00010c2475a0();
                _objc_retainAutoreleasedReturnValue();
                puVar10 = puVar21;
                func_0x00010bfe2ee0();
                puVar11 = puVar4;
                func_0x00010c1197a0(puVar4);
                _objc_retainAutoreleasedReturnValue();
                puVar12 = puVar11;
                func_0x00010c241c00();
                _objc_retainAutoreleasedReturnValue();
                puVar13 = puVar12;
                func_0x00010c2475a0();
                _objc_retainAutoreleasedReturnValue();
                puVar14 = puVar13;
                func_0x00010c0b5940();
                func_0x000100c4a928(puVar10,puVar14);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c206cc0(puVar7);
                _objc_release(puVar10);
                _objc_release(puVar13);
                _objc_release(puVar12);
                _objc_release(puVar11);
                _objc_release(puVar21);
                _objc_release(puVar9);
                _objc_release(puVar8);
              }
              func_0x00010c203c20(puStack_1e8[5]);
              _objc_release(puVar7);
            }
          }
          puVar7 = puVar4;
          func_0x00010bfd4460();
          if ((int)puVar7 != 0) {
            puVar7 = puVar4;
            func_0x00010bf0e960(puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c24a0a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c207f00(puStack_1e8[5]);
            _objc_release(puVar8);
            _objc_release(puVar7);
          }
          puVar7 = puVar4;
          func_0x00010bfd3e40();
          if ((int)puVar7 != 0) {
            puVar7 = puVar4;
            func_0x00010befe1a0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c166200(puStack_1e8[5]);
            _objc_release(puVar7);
          }
          puVar7 = puVar4;
          func_0x00010bfd5000();
          if ((int)puVar7 != 0) {
            puVar7 = puVar4;
            func_0x00010bf28a40(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c175d40(puStack_1e8[5]);
            _objc_release(puVar7);
          }
          puVar7 = puVar4;
          func_0x00010bfd5040();
          if ((int)puVar7 != 0) {
            puVar7 = puVar4;
            func_0x00010bf28ba0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c175e20(puStack_1e8[5]);
            _objc_release(puVar7);
          }
          puVar7 = puVar4;
          func_0x00010bfd84a0();
          if ((int)puVar7 != 0) {
            puVar7 = puVar4;
            func_0x00010c08f220();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar7;
            func_0x00010c0eebe0();
            _objc_release(puVar7);
            if ((int)puVar8 != 0) {
              puVar7 = PTR_PTR_1126b7698;
              _objc_opt_new(PTR_PTR_1126b7698);
              puVar8 = puVar4;
              func_0x00010c08f220(puVar4);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar8;
              func_0x00010bf24a40();
              _objc_retainAutoreleasedReturnValue();
              puVar21 = puVar9;
              func_0x00010bfe2ee0();
              puVar10 = puVar4;
              func_0x00010c08f220(puVar4);
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar10;
              func_0x00010bf24a40();
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar11;
              func_0x00010c0b5940();
              func_0x000100c4a928(puVar21,puVar12);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1c96c0(puVar7);
              _objc_release(puVar21);
              _objc_release(puVar11);
              _objc_release(puVar10);
              _objc_release(puVar9);
              _objc_release(puVar8);
              puVar8 = puVar4;
              func_0x00010c08f220(puVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0eebe0();
              func_0x00010c1c9960(puVar7);
              _objc_release(puVar8);
              puVar8 = puVar4;
              func_0x00010c08f220(puVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0eede0();
              func_0x00010c1c9980(puVar7);
              _objc_release(puVar8);
              func_0x00010c1c97a0(puStack_1e8[5]);
              _objc_release(puVar7);
            }
          }
          puVar7 = puVar20;
          func_0x00010c241220(puVar20);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = param_1;
          func_0x00010bdefea0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c4940(puStack_1e8[5]);
          _objc_release(uVar1);
          _objc_release(puVar7);
          puVar8 = PTR_PTR_1126b76a0;
          _objc_opt_new(PTR_PTR_1126b76a0);
          puVar9 = puVar5;
          func_0x00010bf0d800();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar9;
          func_0x00010bf52a60();
          lVar16 = lRam0000000000000000;
          while (puVar7 != (undefined *)0x0) {
            puVar21 = (undefined *)0x0;
            do {
              if (lRam0000000000000000 != lVar16) {
                _objc_enumerationMutation(puVar9);
              }
              lVar19 = *(long *)((long)puVar21 * 8);
              lVar15 = lVar19;
              func_0x00010bf4e080();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar15 != 0) {
                func_0x00010bf4e080();
                _objc_retainAutoreleasedReturnValue();
                goto LAB_105324534;
              }
              puVar21 = puVar21 + 1;
            } while (puVar7 != puVar21);
            puVar7 = puVar9;
            func_0x00010bf52a60();
          }
          lVar19 = 0;
LAB_105324534:
          _objc_release(puVar9);
          lVar16 = lVar19;
          func_0x00010c297e20(lVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2208c0(puVar8);
          _objc_release(lVar16);
          lVar16 = lVar19;
          func_0x00010bfd5c60();
          if ((int)lVar16 == 0) {
            func_0x00010c183080(puVar8);
          }
          else {
            lVar16 = lVar19;
            func_0x00010bf4e840(lVar19);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c183080(puVar8);
            _objc_release(lVar16);
          }
          func_0x00010c1dbfa0(puStack_1e8[5]);
          puVar7 = puVar20;
          func_0x00010bfdc3c0();
          if ((int)puVar7 == 0) {
            puStack_2a8 = PTR__OBJC_CLASS___NSData_1126ae778;
            func_0x00010bf63640();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010c241da0();
            _objc_retainAutoreleasedReturnValue();
            puStack_2c8 = puVar20;
            func_0x00010bf9a280();
            _objc_retainAutoreleasedReturnValue();
            puStack_2a0 = puVar20;
          }
          func_0x00010c197a80(puStack_1e8[5]);
          puVar20 = puStack_2a8;
          if ((int)puVar7 != 0) {
            _objc_release(puStack_2c8);
            puVar20 = puStack_2a0;
          }
          _objc_release(puVar20);
          func_0x00010befa120(puVar2);
          _objc_release(lVar19);
          _objc_release(puVar8);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
        puVar4 = puStack_268;
        func_0x00010bfd6e60();
        if ((int)puVar4 != 0) {
          puVar4 = puStack_268;
          func_0x00010bf9c6e0(puStack_268);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf9c8a0();
          func_0x00010c198c60(puStack_1e8[5]);
          _objc_release(puVar4);
        }
        uVar1 = uStack_278;
        func_0x00010bfd63a0();
        if ((int)uVar1 != 0) {
          puVar4 = PTR_PTR_1126b76a8;
          _objc_opt_new(PTR_PTR_1126b76a8);
          uVar1 = param_4;
          func_0x00010bf2f9e0(param_4);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar1;
          func_0x00010bf6e6e0();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uVar3;
          func_0x00010c26b700();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c212f20(puVar4);
          _objc_release(uVar17);
          _objc_release(uVar3);
          _objc_release(uVar1);
          func_0x00010c203e40(puStack_1e8[5]);
          _objc_release(puVar4);
        }
        puVar4 = puStack_268;
        func_0x00010bfd3e00();
        if ((int)puVar4 != 0) {
          puVar4 = puStack_268;
          func_0x00010befddc0(puStack_268);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfbe4e0();
          func_0x00010c1a2240(puStack_1e8[5]);
          _objc_release(puVar4);
        }
        _objc_release(puStack_268);
        __Block_object_dispose(&uStack_1f0,8);
        _objc_release(puStack_1c8);
        lVar22 = lVar22 + 1;
      } while (lVar22 != lStack_290);
      lStack_290 = param_3;
      func_0x00010bf52a60();
    } while (lStack_290 != 0);
  }
  _objc_release(param_3);
  _objc_release(uStack_278);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  lVar18 = 8;
  __Block_object_dispose(&uStack_1f0);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar18 + 0x28);
  *(undefined8 *)(lVar18 + 0x28) = 0;
  return;
}



/* Entry: 105324878; end: 10532488f;  */

void FUN_105324878(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105324890; end: 10532493b;  */

void FUN_105324890(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2a3a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010c2a3a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b3a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
    _objc_release(lVar2);
    _objc_release(lVar1);
    *param_4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10532493c; end: 10532526f; -[SCDiscoverFeedCardSingleSnapStoryConverter _createMediaInfoFromFeedCardSnapDoc:snapId:capabilities:] */

void FUN_10532493c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  double dVar16;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar14 = param_3;
  func_0x00010bfda540();
  if ((int)puVar14 != 0) {
    puVar14 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar14;
    func_0x00010c0ff680();
    _objc_release(puVar14);
    if (puVar1 != (undefined *)0x0) {
      puVar1 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR_PTR_1126b76b0;
      _objc_opt_new(PTR_PTR_1126b76b0);
      puVar2 = param_3;
      func_0x00010c0c6280();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c0ff660(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar6;
      func_0x00010c0c55e0();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = puVar2;
      FUN_10531b64c(puVar2,puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c6c20();
      FUN_10531beb8();
      func_0x00010c1c5440(puVar14);
      puVar4 = param_3;
      FUN_10531bc88(param_3,1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar6;
      func_0x00010c0c55e0();
      puVar7 = puVar2;
      FUN_10531b64c(puVar2,puVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      func_0x00010c1c4880(puVar14);
      if (puVar7 == (undefined *)0x0) {
        func_0x00010c1c5520(puVar14);
      }
      else {
        puVar5 = puVar7;
        func_0x00010bdc2b80(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c5520(puVar14);
        _objc_release(puVar5);
      }
      if (puVar4 == (undefined *)0x0) {
        func_0x00010c1b5c20(puVar14);
      }
      else {
        puVar5 = puVar4;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bfd6a20();
        _objc_release(puVar5);
        if ((int)puVar6 != 0) {
          puVar5 = puVar4;
          func_0x00010c0c3fe0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bf93e60();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar6;
          func_0x00010c085300();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar15;
          func_0x00010bf15da0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c49c0(puVar14);
          _objc_release(puVar8);
          _objc_release(puVar15);
          _objc_release(puVar6);
          _objc_release(puVar5);
          puVar5 = puVar4;
          func_0x00010c0c3fe0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bf93e60();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar6;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar15;
          func_0x00010bf15da0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c49e0(puVar14);
          _objc_release(puVar8);
          _objc_release(puVar15);
          _objc_release(puVar6);
          _objc_release(puVar5);
        }
        puVar5 = puVar4;
        func_0x00010c0c3fe0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2bf020();
        func_0x00010c1b5c20(puVar14);
        _objc_release(puVar5);
      }
      puVar5 = puVar4;
      func_0x00010c0c3fe0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c0c4bc0();
      _objc_release(puVar5);
      if (puVar4 == (undefined *)0x0) {
        dVar16 = 0.0;
      }
      else {
        dVar16 = (double)((ulong)puVar6 & 0xffffffff) / 1000.0;
      }
      func_0x00010c192d40(dVar16,puVar14);
      puVar5 = puVar1;
      func_0x00010bfda560();
      if (((ulong)puVar5 & 1) == 0) {
        func_0x00010c1b1de0(puVar14);
      }
      else {
        puVar5 = puVar1;
        func_0x00010c0fef80(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bfed700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b1de0(puVar14);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      puVar5 = PTR_PTR_1126b76b8;
      _objc_opt_new(PTR_PTR_1126b76b8);
      func_0x00010c203aa0(puVar14);
      _objc_release(puVar5);
      puVar5 = puVar7;
      func_0x00010bf4cce0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      if (puVar5 == (undefined *)0x0) {
        puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar15 = puVar14;
      func_0x00010c23f5c0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4380();
      _objc_release(puVar15);
      if (puVar5 == (undefined *)0x0) {
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
      puVar5 = puVar1;
      func_0x00010bfdcf00();
      if ((int)puVar5 == 0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        puVar6 = puVar1;
        func_0x00010c261180(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar6;
        func_0x00010c260e60();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar8 = puVar14;
      func_0x00010c23f5c0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16c5a0();
      _objc_release(puVar8);
      if ((int)puVar5 != 0) {
        _objc_release(puVar15);
        _objc_release(puVar6);
      }
      puVar5 = puVar1;
      func_0x00010bfdcf00();
      puVar6 = puVar1;
      if ((int)puVar5 == 0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        func_0x00010c261180(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar6;
        func_0x00010c260e00();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar8 = puVar14;
      func_0x00010c23f5c0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16c580();
      _objc_release(puVar8);
      if ((int)puVar5 != 0) {
        _objc_release(puVar15);
        _objc_release(puVar6);
      }
      puVar5 = param_3;
      FUN_10531bc88(param_3,2);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_3;
      func_0x00010c0c6280();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar5;
      func_0x00010c0c3fe0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar15;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c0c55e0();
      puVar10 = puVar6;
      FUN_10531b64c(puVar6,puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar15);
      _objc_release(puVar6);
      puVar6 = puVar10;
      func_0x00010bf4cce0();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        puVar15 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar8 = puVar14;
      func_0x00010c23f5c0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d74e0();
      _objc_release(puVar8);
      if (puVar6 == (undefined *)0x0) {
        _objc_release(puVar15);
      }
      _objc_release(puVar6);
      puVar6 = puVar1;
      func_0x00010bfb11c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar6;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar15;
      func_0x00010c0c55e0();
      _objc_release(puVar15);
      _objc_release(puVar6);
      puVar6 = puVar2;
      FUN_10531b64c(puVar2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar6;
      func_0x00010bf4cce0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar15 == (undefined *)0x0) {
        puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19d000(puVar14);
        _objc_release(puVar8);
      }
      else {
        func_0x00010c19d000(puVar14);
      }
      _objc_release(puVar15);
      lVar11 = param_5;
      func_0x00010bfdbfa0();
      if ((int)lVar11 != 0) {
        lVar11 = param_5;
        func_0x00010c22a700();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010bf1f280();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010c08fa60();
        _objc_release(lVar12);
        _objc_release(lVar11);
        if (lVar13 != 0) {
          lVar11 = param_5;
          func_0x00010c22a700(param_5);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar11;
          func_0x00010bf1f280();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c172fc0(puVar14);
          _objc_release(lVar12);
          _objc_release(lVar11);
        }
        lVar11 = param_5;
        func_0x00010c22a700();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010bfd4b80();
        _objc_release(lVar11);
        if ((int)lVar12 != 0) {
          lVar11 = param_5;
          func_0x00010c22a700(param_5);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar11;
          func_0x00010bf1f260();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c172fa0(puVar14);
          _objc_release(lVar12);
          _objc_release(lVar11);
        }
        lVar11 = param_5;
        func_0x00010c22a700();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010c0db0c0();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010c08fa60();
        _objc_release(lVar12);
        _objc_release(lVar11);
        if (lVar13 != 0) {
          lVar11 = param_5;
          func_0x00010c22a700(param_5);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar11;
          func_0x00010c0db0c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21b500(puVar14);
          _objc_release(lVar12);
          _objc_release(lVar11);
        }
      }
      _objc_release(puVar6);
      _objc_release(puVar10);
      _objc_release(puVar5);
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      goto LAB_105325234;
    }
  }
  puVar14 = (undefined *)0x0;
LAB_105325234:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}


