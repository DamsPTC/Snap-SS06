/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054fbccc; end: 1054fbd4f; -[SCChatMediaFetcher _mapToImageWithMetrics:] */

void FUN_1054fbccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1054fbd50;
  puStack_30 = &UNK_110892f08;
  uStack_28 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1054fbd50; end: 1054fbd5f;  */

void FUN_1054fbd50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001054fbd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_4);
  return;
}



/* Entry: 1054fbd60; end: 1054fbe7b; -[SCChatMediaFetcher _fetchThumbnailFromUnarchivedMediaWithKey:requestSource:cancelableGroup:completion:] */

void FUN_1054fbd60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_90;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1054fbe7c;
  puStack_78 = &UNK_110892f38;
  uStack_70 = param_5;
  uStack_60 = param_6;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_68 = param_3;
  uStack_50 = param_4;
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_90);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(uStack_70);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1054fbe7c; end: 1054fbf2b;  */

void FUN_1054fbe7c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c06e0e0();
    if (iVar1 == 0) {
      lVar2 = param_1 + 0x38;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010be37100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if (lVar3 != 0) {
        func_0x00010bef7460(*(undefined8 *)(param_1 + 0x20));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
    lVar2 = *(long *)(param_1 + 0x30);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x10);
    param_2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x30);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x0001054fbed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar2,0,0,param_2);
  return;
}



/* Entry: 1054fbf2c; end: 1054fbf7b; -[SCChatMediaFetcher profileThumbnailCacheKeyForMediaContent:] */

void FUN_1054fbf2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 5;
  func_0x0001085436d4(5,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054fbf7c; end: 1054fc00f; -[SCChatMediaFetcher _logFetchCachedMediaCompletedForMediaId:mediaType:loadMessageResult:error:startTimestamp:] */

void FUN_1054fbf7c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = param_1;
  _objc_retain(param_4);
  func_0x00010beec800(uVar1);
  func_0x00010be55620(param_1,uVar2,param_2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010be526f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,uVar2,param_2,PTR_s__logDisplayError_mediaType_start_112572358,param_7,param_5)
  ;
  return;
}



/* Entry: 1054fc010; end: 1054fc08b; -[SCChatMediaFetcher _logLoadMessageStepForMediaId:startTimestamp:endTimestamp:result:] */

void FUN_1054fc010(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0a20(param_1,param_2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054fc08c; end: 1054fc217; -[SCChatMediaFetcher _logDisplayError:mediaType:startTimestamp:endTimestamp:] */

void FUN_1054fc08c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x0001070a5de0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf51e00();
  _objc_release(param_3);
  func_0x0001070b5b08();
  lVar2 = param_4;
  func_0x00010bf51e00();
  _objc_release(param_4);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    puVar3 = PTR_PTR_1126b2950;
    func_0x00010bf4c3a0(PTR_PTR_1126b2950);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar4;
    func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110db9478,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf366a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf366a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054fc218; end: 1054fc2af; -[SCChatMediaFetcher .cxx_destruct] */

void FUN_1054fc218(long param_1)

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



/* Entry: 1054fc2b0; end: 1054fc32f;  */

void FUN_1054fc2b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar3 = PTR_PTR_1126ba1a8;
  _objc_alloc(PTR_PTR_1126ba1a8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar4 = PTR_PTR_1126ba1b0;
  _objc_opt_new(PTR_PTR_1126ba1b0);
  func_0x00010c003100(puVar3,param_2,uVar1,uVar2,uVar5,puVar4,*(undefined8 *)(param_1 + 0x38));
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054fc330; end: 1054fc3d7; -[SCChatMediaFetchingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054fc330(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112724e30);
  _objc_destroyWeak(param_1 + _DAT_112724e28);
  _objc_destroyWeak(param_1 + _DAT_112724e24);
  _objc_destroyWeak(param_1 + _DAT_112724e2c);
  _objc_destroyWeak(param_1 + _DAT_112724e20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724e34);
  return;
}



/* Entry: 1054fc3d8; end: 1054fc5e3; -[SCReceiveMessageLoggerServiceProvider _loadMessageLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054fc3d8(long param_1,undefined8 param_2)

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
  undefined *puVar10;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2cc292);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x15,0,9);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ba1c8;
  _objc_alloc(PTR_PTR_1126ba1c8);
  lVar3 = param_1 + _DAT_112724e38;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112724e3c;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c09ba60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027360(puVar2,param_2,lVar5,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar10 = PTR_PTR_1126ba1d0;
  _objc_alloc(PTR_PTR_1126ba1d0);
  func_0x00010c02be20();
  param_1 = param_1 + _DAT_112724e40;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bf36240();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010c0a9060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25fd20(puVar10,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1054fc5e4; end: 1054fc633; -[SCReceiveMessageLoggerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054fc5e4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112724e40);
  _objc_destroyWeak(param_1 + _DAT_112724e3c);
  _objc_destroyWeak(param_1 + _DAT_112724e38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724e44);
  return;
}



/* Entry: 1054fc634; end: 1054fc70b; -[SCLoadMessageLogAggregator initWithMetricsEmitter:performer:] */

undefined1 *
FUN_1054fc634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8c20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054fc70c; end: 1054fc983; -[SCLoadMessageLogAggregator logLoadMessageTimestamp:] */

void FUN_1054fc70c(long param_1,undefined **param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_70;
  
  puVar6 = &uStack_160;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010becc0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010befc040();
  lVar2 = lVar1;
  FUN_1054ff0d8();
  if ((int)lVar2 != 0) {
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_1054fc984;
    puStack_100 = &UNK_110892ff8;
    param_2 = &puStack_118;
    lStack_f8 = param_1;
    FUN_1054ff230(lVar1,param_2);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    puVar3 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(puVar3);
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    lVar2 = lVar1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar10 = *plStack_150;
      do {
        lVar11 = 0;
        do {
          if (*plStack_150 != lVar10) {
            _objc_enumerationMutation(lVar2);
          }
          lVar8 = *(long *)(lStack_158 + lVar11 * 8);
          lVar5 = lVar8;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar5 != 0) {
            lVar9 = *(long *)(param_1 + 0x18);
            lVar5 = lVar8;
            func_0x00010bf50280(lVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            puVar3 = param_3;
            func_0x00010c0c5180(param_3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d360(lVar9);
            _objc_release(puVar3);
            lVar5 = lVar9;
            func_0x00010bf529e0();
            if (lVar5 == 0) {
              uVar7 = *(undefined8 *)(param_1 + 0x18);
              func_0x00010bf50280(lVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(uVar7);
              _objc_release(lVar8);
            }
            _objc_release(lVar9);
          }
          lVar11 = lVar11 + 1;
        } while (lVar4 != lVar11);
        lVar4 = lVar2;
        puVar6 = &uStack_160;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar2);
    puVar3 = (undefined1 *)puVar6;
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0a9b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_3 + 0x20) + 8),PTR_s_logLoadMessage_metadata__1126080e8
             ,param_2,puVar3);
  return;
}



/* Entry: 1054fc984; end: 1054fc997;  */

void FUN_1054fc984(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a9b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),PTR_s_logLoadMessage_metadata__1126080e8
             ,param_2,param_3);
  return;
}



/* Entry: 1054fc998; end: 1054fca7f; -[SCLoadMessageLogAggregator addMetadata:completionStep:shouldListenToFeedUpdates:] */

void FUN_1054fc998(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bef9ca0(uVar3,param_2,param_3);
  func_0x00010c17fc40(uVar3,param_2,param_4);
  if (param_5 != 0) {
    uVar1 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf50280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcfbe0(param_1,param_2,uVar1,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054fca80; end: 1054fcabf; -[SCLoadMessageLogAggregator setMediaSizeBytes:forMediaId:] */

void FUN_1054fca80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054fcac0; end: 1054fcaff; -[SCLoadMessageLogAggregator setLensSizeBytes:forMediaId:] */

void FUN_1054fcac0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bcc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054fcb00; end: 1054fcb4b; -[SCLoadMessageLogAggregator mediaIdsForConversationId:] */

void FUN_1054fcb00(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0e00e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf51e00();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054fcb4c; end: 1054fcc43; -[SCLoadMessageLogAggregator _timelineForTimestamp:] */

void FUN_1054fcb4c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = (undefined *)0x0;
  if (uVar1 != 0) {
    puVar3 = *(undefined **)(param_1 + 0x10);
    uVar1 = param_3;
    func_0x00010c0c5180(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (puVar3 == (undefined *)0x0) {
      uVar1 = param_3;
      func_0x00010c2536e0();
      if ((uVar1 < 0xe) && ((0x3fc3U >> (ulong)((uint)uVar1 & 0x1f) & 1) != 0)) {
        puVar3 = (undefined *)0x0;
      }
      else {
        puVar3 = PTR_PTR_1126ba1d8;
        _objc_opt_new(PTR_PTR_1126ba1d8);
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        uVar1 = param_3;
        func_0x00010c0c5180(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar2,param_2,puVar3,uVar1);
        _objc_release(uVar1);
      }
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054fcc44; end: 1054fcd1b; -[SCLoadMessageLogAggregator _associateMediaId:toConversationId:] */

void FUN_1054fcc44(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    puVar2 = *(undefined **)(param_1 + 0x18);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c0e00e0(puVar2,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00);
    }
    else {
      _objc_retain(puVar2);
      puVar1 = puVar2;
    }
    _objc_release(puVar2);
    func_0x00010befa120(puVar1,param_2,param_3);
    _objc_release(param_3);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar1,param_4);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1054fcd1c; end: 1054fcd63; -[SCLoadMessageLogAggregator .cxx_destruct] */

void FUN_1054fcd1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054fcd64; end: 1054fce37; -[SCLoadMessageLogger initWithMetricsEmitter:performer:] */

undefined1 *
FUN_1054fcd64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8c28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ba1e0;
    _objc_alloc();
    func_0x00010c02be20();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054fce38; end: 1054fce7f; -[SCLoadMessageLogger dealloc] */

void FUN_1054fce38(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x18));
  puStack_28 = PTR_PTR_1126e8c28;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1054fce80; end: 1054fcf3f; -[SCLoadMessageLogger logStepWithMediaId:loadStep:startTimestampSeconds:endTimestampSeconds:result:] */

void FUN_1054fce80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  if (param_5 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 8);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1054fcf40;
    puStack_88 = &UNK_110853530;
    lStack_80 = param_3;
    _objc_retain(param_5);
    lStack_78 = param_5;
    uStack_70 = param_6;
    uStack_68 = param_1;
    uStack_60 = param_2;
    uStack_58 = param_7;
    func_0x00010c0f7fc0(uVar1,param_4,&puStack_a0);
    _objc_release(lStack_78);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 1054fcf40; end: 1054fcf5b;  */

void FUN_1054fcf40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be59090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x20),PTR_s__logStepWithMediaId_timestampTyp_112573dc0,
             *(undefined8 *)(param_1 + 0x28),1,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 1054fcf5c; end: 1054fd007; -[SCLoadMessageLogger logDiscreteStepWithMediaId:loadStep:timestampInSeconds:] */

void FUN_1054fcf5c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 8);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1054fd008;
    puStack_68 = &UNK_110844fe0;
    lStack_60 = param_2;
    _objc_retain(param_4);
    lStack_58 = param_4;
    uStack_50 = param_5;
    uStack_48 = param_1;
    func_0x00010c0f7fc0(uVar1,param_3,&puStack_80);
    _objc_release(lStack_58);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1054fd008; end: 1054fd01b;  */

void FUN_1054fd008(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be52630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             PTR_s__logDiscreteStepWithMediaId_load_112572328,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1054fd01c; end: 1054fd02f; -[SCLoadMessageLogger _logDiscreteStepWithMediaId:loadStep:timestampInSeconds:] */

void FUN_1054fd01c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be59090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_1,param_2,PTR_s__logStepWithMediaId_timestampTyp_112573dc0,param_4,0,
             param_5,0);
  return;
}



/* Entry: 1054fd030; end: 1054fd0bf; -[SCLoadMessageLogger logTimestamp:] */

void FUN_1054fd030(long param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_50 = FUN_1054fd0c0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054fd0c0; end: 1054fd0cb;  */

void FUN_1054fd0c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a9b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
             PTR_s_logLoadMessageTimestamp__1126080f0,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1054fd0cc; end: 1054fd267; -[SCLoadMessageLogger setMetadataForMessageId:mediaId:conversationId:isGroupConversation:messageBodyType:mediaType:mediaDurationSec:multiSnapBundleId:multiSnapSegmentIndex:multiSnapSegmentCount:] */

void FUN_1054fd0cc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined1 param_7,long param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  if ((param_5 != 0) && (param_8 != 0)) {
    uVar1 = *(undefined8 *)(param_2 + 8);
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1054fd268;
    puStack_d8 = &UNK_110893028;
    lStack_98 = param_8;
    uStack_90 = param_9;
    uStack_80 = param_7;
    _objc_retain(param_4);
    uStack_d0 = param_4;
    _objc_retain(param_5);
    lStack_c8 = param_5;
    _objc_retain(param_6);
    uStack_c0 = param_6;
    uStack_88 = param_1;
    _objc_retain(param_10);
    uStack_b8 = param_10;
    _objc_retain(param_11);
    uStack_b0 = param_11;
    _objc_retain(param_12);
    uStack_a8 = param_12;
    lStack_a0 = param_2;
    func_0x00010c0f7fc0(uVar1,param_3,&puStack_f0);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(uStack_b8);
    _objc_release(uStack_c0);
    _objc_release(lStack_c8);
    _objc_release(uStack_d0);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1054fd268; end: 1054fd35f;  */

void FUN_1054fd268(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x58);
  lVar3 = lVar5;
  func_0x00010b62cb88(lVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 9;
  if (lVar5 != 8) {
    uVar1 = 10;
  }
  uVar2 = 0xd;
  if (lVar5 != 0x10) {
    uVar2 = uVar1;
  }
  puVar4 = PTR_PTR_1126ba1e8;
  _objc_alloc(PTR_PTR_1126ba1e8);
  func_0x00010c02b740(*(undefined8 *)(param_1 + 0x68));
  func_0x00010bef9cc0(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x10),param_2,puVar4,uVar2,
                      lVar5 == 0x10);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1054fd360; end: 1054fd3ff; -[SCLoadMessageLogger setMediaSizeBytes:forMediaId:] */

void FUN_1054fd360(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1054fd400;
    puStack_50 = &UNK_110844b80;
    lStack_48 = param_1;
    uStack_38 = param_3;
    _objc_retain(param_4);
    lStack_40 = param_4;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1054fd400; end: 1054fd413;  */

void FUN_1054fd400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1c52b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
             PTR_s_setMediaSizeBytes_forMediaId__11264eed0,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1054fd414; end: 1054fd4b3; -[SCLoadMessageLogger setLensSizeBytes:forMediaId:] */

void FUN_1054fd414(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1054fd4b4;
    puStack_50 = &UNK_110844b80;
    lStack_48 = param_1;
    uStack_38 = param_3;
    _objc_retain(param_4);
    lStack_40 = param_4;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1054fd4b4; end: 1054fd4c7;  */

void FUN_1054fd4b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bcc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
             PTR_s_setLensSizeBytes_forMediaId__11264cd40,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1054fd4c8; end: 1054fd5a3; -[SCLoadMessageLogger subscribe:] */

void FUN_1054fd4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054fd5a4; end: 1054fd5eb;  */

void FUN_1054fd5a4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2bba0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054fd5ec; end: 1054fd69f; -[SCLoadMessageLogger _handleLogItem:] */

void FUN_1054fd5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1054fd6a0;
  puStack_20 = &UNK_110893088;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1054fd7b8;
  puStack_48 = &UNK_110893088;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x1054fd864;
  puStack_70 = &UNK_1108930f8;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1054fd88c;
  puStack_98 = &UNK_1108930f8;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bd920(param_3,param_2,&puStack_38,&puStack_60,&PTR___NSConcreteGlobalBlock_1108930d8
                      ,&puStack_88,&puStack_b0);
  return;
}



/* Entry: 1054fd6a0; end: 1054fd7b7;  */

void FUN_1054fd6a0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    func_0x00010c0d7ca0();
    _objc_retainAutoreleasedReturnValue();
    if (param_6 != 0) {
      func_0x00010c13b780();
      uVar1 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010c0f66a0(param_6);
      func_0x00010c1c52a0(uVar1);
      func_0x00010c0b0a20(param_1,param_2,*(undefined8 *)(param_3 + 0x20));
      func_0x00010c0b0a20(param_2,param_2,*(undefined8 *)(param_3 + 0x20));
    }
    _objc_release(param_6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054fd7b8; end: 1054fd85f;  */

void FUN_1054fd7b8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  if ((param_4 != 0) && (lVar1 = param_6, func_0x00010c09c1e0(), lVar1 == 1)) {
    func_0x00010c0b0a20(param_1,param_2,*(undefined8 *)(param_3 + 0x20));
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054fd860; end: 1054fd8b3;  */

void FUN_1054fd860(void)

{
  return;
}



/* Entry: 1054fd8b4; end: 1054fd94f; -[SCLoadMessageLogger _logStepWithMediaId:timestampType:loadStep:startTimestampSeconds:endTimestampSeconds:result:] */

void FUN_1054fd8b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba1f0;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c0296e0(param_1,param_2);
  _objc_release(param_5);
  func_0x00010c0a9b80(*(undefined8 *)(param_3 + 0x10),param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1054fd950; end: 1054fd9e3; -[SCLoadMessageLogger didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_1054fd950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb8178);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110eb81f8);
    if ((int)uVar1 != 0) {
      func_0x00010be292e0(param_1,param_2,param_5);
    }
  }
  else {
    func_0x00010be292a0(param_1,param_2,param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054fd9e4; end: 1054fdb3f; -[SCLoadMessageLogger _handleExtraDataForFeedItemStart:] */

void FUN_1054fd9e4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010bf885a0(uVar1);
  _objc_release(uVar1);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126ba1f8;
  _objc_opt_class(PTR_PTR_1126ba1f8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 1054fdb40; end: 1054fdb4f;  */

void FUN_1054fdb40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be306f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s__handleSnapLoadingTrackingData_a_112569b58,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1054fdb50; end: 1054fdcab; -[SCLoadMessageLogger _handleExtraDataForFeedVisibleStart:] */

void FUN_1054fdb50(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar5 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar3);
  uVar2 = uVar4;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  func_0x00010bf885a0(uVar2);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar6);
  _objc_release(uVar1);
  _objc_release(uVar1);
  return;
}



/* Entry: 1054fdcac; end: 1054fddff;  */

void FUN_1054fdcac(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
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
  uVar11 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar7);
  lVar5 = lVar7;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        puVar2 = PTR_PTR_1126ba1f8;
        uVar8 = *(ulong *)(lStack_128 + lVar10 * 8);
        _objc_retain(uVar8);
        _objc_opt_class(puVar2);
        uVar3 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar2);
        uVar1 = uVar8;
        if ((uVar3 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar8);
        uVar11 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010be306e0(uVar11,*(undefined8 *)(param_1 + 0x28));
        _objc_release(uVar1);
        lVar10 = lVar10 + 1;
      } while (lVar5 != lVar10);
      lVar5 = lVar7;
      puVar6 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  if ((puVar6 != (undefined8 *)0x0) &&
     (puVar4 = (undefined1 *)puVar6, func_0x00010c076be0(), (int)puVar4 != 0)) {
    puVar4 = (undefined1 *)puVar6;
    func_0x00010bf50280(puVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(lVar7 + 0x10);
    func_0x00010c0c5260();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      lVar9 = lVar5;
      func_0x00010bfb1920(lVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be52620(uVar11,lVar7);
      _objc_release(lVar9);
    }
    _objc_release(lVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1054fde00; end: 1054fdec7; -[SCLoadMessageLogger _handleSnapLoadingTrackingData:atTime:] */

void FUN_1054fde00(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  if ((param_4 != 0) && (lVar1 = param_4, func_0x00010c076be0(), (int)lVar1 != 0)) {
    lVar1 = param_4;
    func_0x00010bf50280(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_2 + 0x10);
    func_0x00010c0c5260(lVar2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x00010bfb1920(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be52620(param_1,param_2,param_3,lVar3,1);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054fdec8; end: 1054fdf03; -[SCLoadMessageLogger .cxx_destruct] */

void FUN_1054fdec8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054fdf04; end: 1054fdf9f; -[SCLoadMessageTimeline init] */

undefined1 * FUN_1054fdf04(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8c30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1054fdfa0; end: 1054fdfa7; -[SCLoadMessageTimeline addTimestamp:] */

void FUN_1054fdfa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 1054fdfa8; end: 1054fdfbf; -[SCLoadMessageTimeline timestamps] */

void FUN_1054fdfa8(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054fdfc0; end: 1054fe007; -[SCLoadMessageTimeline addMetadata:] */

void FUN_1054fdfc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054fe008; end: 1054fe01f; -[SCLoadMessageTimeline metadata] */

void FUN_1054fe008(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054fe020; end: 1054fe027; -[SCLoadMessageTimeline loadMessageAttemptId] */

undefined8 FUN_1054fe020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1054fe028; end: 1054fe02f; -[SCLoadMessageTimeline completionStep] */

undefined8 FUN_1054fe028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1054fe030; end: 1054fe037; -[SCLoadMessageTimeline setCompletionStep:] */

void FUN_1054fe030(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 1054fe038; end: 1054fe03f; -[SCLoadMessageTimeline mediaSizeBytes] */

undefined8 FUN_1054fe038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1054fe040; end: 1054fe047; -[SCLoadMessageTimeline setMediaSizeBytes:] */

void FUN_1054fe040(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 1054fe048; end: 1054fe04f; -[SCLoadMessageTimeline lensSizeBytes] */

undefined8 FUN_1054fe048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1054fe050; end: 1054fe057; -[SCLoadMessageTimeline setLensSizeBytes:] */

void FUN_1054fe050(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 1054fe058; end: 1054fe093; -[SCLoadMessageTimeline .cxx_destruct] */

void FUN_1054fe058(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054fe094; end: 1054fe127; -[SCReceiveFlowMetricsEmitter initWithLogger:loadMessageGraphene:] */

undefined1 *
FUN_1054fe094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8c38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054fe128; end: 1054fe3f7; -[SCReceiveFlowMetricsEmitter logLoadMessage:metadata:] */

void FUN_1054fe128(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  undefined8 uVar10;
  long lVar11;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0b2e60();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf0a640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110db9478);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110dbbb58);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110de77f8);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110de7798);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110de77b8);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110de7818);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110de7838);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,&PTR____CFConstantStringClassReference_110de77d8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010bf506e0(param_4);
  lVar11 = lVar9;
  func_0x00010c0b4ca0(lVar9);
  func_0x00010be555e0(param_1,param_2,lVar2,lVar3,uVar10,lVar11,lVar4,lVar8);
  uVar10 = param_4;
  func_0x00010bf506e0(param_4);
  func_0x00010be55580(param_1,param_2,lVar2,lVar3,uVar10,lVar4,lVar5);
  uVar10 = param_4;
  func_0x00010bf506e0(param_4);
  func_0x00010be55560(param_1,param_2,lVar2,lVar3,uVar10,lVar4,lVar5);
  uVar10 = param_4;
  func_0x00010bf506e0(param_4);
  func_0x00010be555a0(param_1,param_2,lVar2,lVar3,uVar10,lVar4,lVar5);
  lVar11 = lVar7;
  func_0x00010c0b4ca0(lVar7);
  uVar10 = param_4;
  func_0x00010bf506e0(param_4);
  func_0x00010be555c0((double)lVar11,param_1,param_2,lVar2,lVar3,lVar8,lVar4,uVar10);
  uVar10 = param_4;
  func_0x00010bf506e0(param_4);
  _objc_release(param_4);
  func_0x00010be55640(param_1,param_2,lVar2,lVar3,lVar8,lVar6,uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054fe3f8; end: 1054fe5eb; -[SCReceiveFlowMetricsEmitter _logLoadMessageResultWithMediaType:messageType:mode:mediaSizeBytes:loadMessageStatus:triggerStep:] */

void FUN_1054fe3f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR_PTR_1126ba200;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c09bae0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dbbb58,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar2);
  if (param_5 - 1U < 3) {
    ppuVar5 = (undefined **)(&PTR_PTR_110893158)[param_5 - 1U];
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110de7858;
  }
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dcf2b8,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = param_7;
  FUN_1054fe5ec(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dab0d8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110de7778,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(puVar1);
  lVar4 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bfec2a0();
  _objc_release(lVar4);
  if (param_6 != 0) {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bef9180();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054fe5ec; end: 1054fe66b;  */

void FUN_1054fe5ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  uVar1 = 0;
  func_0x00010ba98d60(0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0720c0(param_1,param_2,uVar1);
  _objc_release(param_1);
  func_0x00010c25d8c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054fe66c; end: 1054fe82f; -[SCReceiveFlowMetricsEmitter _logLoadMessageFailureWithMediaType:messageType:mode:loadMessageStatus:failedStep:] */

void FUN_1054fe66c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  puVar2 = PTR_PTR_1126ba200;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c09ba20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbbb58,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar3);
  if (param_5 - 1U < 3) {
    ppuVar6 = (undefined **)(&PTR_PTR_110893158)[param_5 - 1U];
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110de7858;
  }
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dcf2b8,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = 2;
  func_0x00010ba98d60(2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010c0720c0(param_6,param_2,uVar4);
  _objc_release(param_6);
  uVar1 = param_7;
  if ((int)uVar5 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbdaf8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfec2a0();
  _objc_release(param_1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054fe830; end: 1054fe9f3; -[SCReceiveFlowMetricsEmitter _logLoadMessageConnectivityWithMediaType:messageType:mode:loadMessageStatus:failedStep:] */

void FUN_1054fe830(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  puVar2 = PTR_PTR_1126ba200;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c09b9c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbbb58,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar3);
  if (param_5 - 1U < 3) {
    ppuVar6 = (undefined **)(&PTR_PTR_110893158)[param_5 - 1U];
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110de7858;
  }
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dcf2b8,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = 3;
  func_0x00010ba98d60(3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010c0720c0(param_6,param_2,uVar4);
  _objc_release(param_6);
  uVar1 = param_7;
  if ((int)uVar5 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbdaf8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfec2a0();
  _objc_release(param_1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054fe9f4; end: 1054febb7; -[SCReceiveFlowMetricsEmitter _logLoadMessageFatalWithMediaType:messageType:mode:loadMessageStatus:failedStep:] */

void FUN_1054fe9f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  puVar2 = PTR_PTR_1126ba200;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c09ba40(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbbb58,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar3);
  if (param_5 - 1U < 3) {
    ppuVar6 = (undefined **)(&PTR_PTR_110893158)[param_5 - 1U];
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110de7858;
  }
  puVar3 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dcf2b8,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar4 = 1;
  func_0x00010ba98d60(1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_6;
  func_0x00010c0720c0(param_6,param_2,uVar4);
  _objc_release(param_6);
  uVar1 = param_7;
  if ((int)uVar5 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  puVar2 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dbdaf8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfec2a0();
  _objc_release(param_1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054febb8; end: 1054fedaf; -[SCReceiveFlowMetricsEmitter _logLoadMessagePerceivedLatencyWithMediaType:messageType:triggerType:loadMessageStatus:latencyInMillis:mode:] */

void FUN_1054febb8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR_PTR_1126ba200;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c09bac0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dbbb58,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110de7778,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(puVar1);
  uVar3 = param_7;
  FUN_1054fe5ec(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2,param_3,&PTR____CFConstantStringClassReference_110dab0d8,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar3);
  if (param_8 - 1U < 3) {
    ppuVar5 = (undefined **)(&PTR_PTR_110893158)[param_8 - 1U];
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110de7858;
  }
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_3,&PTR____CFConstantStringClassReference_110dcf2b8,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar4 = param_2 + 0x10;
  _objc_loadWeakRetained(lVar4);
  func_0x00010befbfe0();
  _objc_release(lVar4);
  if (0.0 < param_1) {
    param_2 = param_2 + 0x10;
    _objc_loadWeakRetained(param_2);
    func_0x00010bfec2a0();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054fedb0; end: 1054fef1f; -[SCReceiveFlowMetricsEmitter _logLoadMessageStepLatencyWithMediaType:messageType:triggerType:stepToLatencyString:mode:] */

void FUN_1054fedb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf64920(param_6,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  if (param_6 != 0) {
    lStack_58 = 0;
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_6,0,&lStack_58
                       );
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_58;
    _objc_retain(lStack_58);
    if ((lVar1 == 0) && (puVar3 = puVar2, func_0x00010bf529e0(), puVar3 != (undefined *)0x0)) {
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_1054fef20;
      puStack_88 = &UNK_110893128;
      _objc_retain(param_3);
      uStack_80 = param_3;
      _objc_retain(param_4);
      uStack_78 = param_4;
      uStack_60 = param_7;
      _objc_retain(param_5);
      uStack_70 = param_5;
      uStack_68 = param_1;
      func_0x00010bf97ce0(puVar2,param_2,&puStack_a0);
      _objc_release(uStack_70);
      _objc_release(uStack_78);
      _objc_release(uStack_80);
    }
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054fef20; end: 1054ff0af;  */

void FUN_1054fef20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ba200;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c09bb00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2ac460(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar3 = *(long *)(param_1 + 0x38) + 0x10;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c0b4ca0(param_3);
  _objc_release(param_3);
  func_0x00010befbfe0(lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054ff0b0; end: 1054ff0d7; -[SCReceiveFlowMetricsEmitter .cxx_destruct] */

void FUN_1054ff0b0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1054ff0d8; end: 1054ff20b;  */

bool FUN_1054ff0d8(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = param_1;
    func_0x00010c270ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c13ca20();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_retain(param_1);
    uVar2 = param_1;
    func_0x00010c270ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if ((uVar3 == 0) || (uVar2 = uVar3, func_0x00010c270c40(), uVar2 != 1)) {
      _objc_release(uVar3);
      _objc_release(param_1);
      if (1 < uVar4) {
        bVar1 = true;
        goto LAB_1054ff1ec;
      }
    }
    else {
      uVar2 = uVar3;
      func_0x00010c2536e0();
      uVar5 = param_1;
      func_0x00010bf44180();
      _objc_release(uVar3);
      _objc_release(param_1);
      bVar1 = true;
      if ((uVar2 == uVar5) || (1 < uVar4)) goto LAB_1054ff1ec;
    }
    bVar1 = uVar4 == 1;
  }
LAB_1054ff1ec:
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1054ff20c; end: 1054ff22f;  */

undefined8 FUN_1054ff20c(long param_1)

{
  if (param_1 - 6U < 8) {
    return *(undefined8 *)(&UNK_10ddb11c8 + (param_1 - 6U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 1054ff230; end: 1054ffa6b;  */

undefined * FUN_1054ff230(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined **unaff_x20;
  undefined *unaff_x21;
  undefined **ppuVar14;
  ulong unaff_x23;
  ulong uVar15;
  undefined *puVar16;
  undefined *unaff_x24;
  long unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long unaff_x28;
  double dVar17;
  double dVar18;
  double unaff_d8;
  undefined8 unaff_d9;
  double dVar19;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  double dStack_2b8;
  long lStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  long lStack_298;
  undefined *puStack_290;
  ulong uStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined **ppuStack_270;
  undefined *puStack_268;
  undefined1 *puStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  long lStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  ulong uStack_220;
  undefined *puStack_218;
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
  undefined1 auStack_190 [256];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puStack_230 = param_2;
  _objc_retain(param_2);
  dVar18 = 0.0;
  lStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  plStack_200 = (long *)0x0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  puVar1 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = &uStack_210;
  puVar9 = auStack_190;
  uVar10 = 0x10;
  puStack_248 = puVar1;
  func_0x00010bf52a60();
  puStack_228 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    lStack_240 = *plStack_200;
    unaff_d9 = 0x408f400000000000;
    unaff_x20 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    puStack_238 = param_1;
    do {
      param_2 = (undefined *)0x0;
      do {
        if (*plStack_200 != lStack_240) {
          _objc_enumerationMutation(puStack_248);
        }
        uVar15 = *(ulong *)(lStack_208 + (long)param_2 * 8);
        puVar1 = param_1;
        func_0x00010c270ce0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        if (((puVar2 != (undefined *)0x0) &&
            (puVar1 = puVar2, func_0x00010c270c40(), puVar1 == (undefined *)0x0)) &&
           (puVar1 = puVar2, func_0x00010c2536e0(), puVar1 != (undefined *)0x1)) {
          func_0x00010c2536e0();
        }
        _objc_release(puVar2);
        unaff_x24 = PTR_PTR_1126ba208;
        _objc_opt_new();
        uVar3 = uVar15;
        func_0x00010c0cb5a0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c6f00(unaff_x24);
        _objc_release(uVar3);
        uVar3 = uVar15;
        func_0x00010c0c5180(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c4880(unaff_x24);
        _objc_release(uVar3);
        uVar3 = uVar15;
        func_0x00010c0cb2a0(uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c7160(unaff_x24);
        _objc_release(uVar3);
        uVar3 = uVar15;
        func_0x00010c0c6c20();
        ppuVar14 = &PTR____CFConstantStringClassReference_110db6dd8;
        if (uVar3 < 8) {
          ppuVar14 = (undefined **)(&PTR_PTR_110893170)[uVar3];
        }
        _objc_retain(ppuVar14);
        func_0x00010c1c5440(unaff_x24);
        _objc_release(ppuVar14);
        func_0x00010c0c4be0(uVar15);
        if (0.0 < dVar18) {
          func_0x00010c0c4be0(uVar15);
          func_0x00010c1c4600(unaff_x24);
        }
        uVar3 = uVar15;
        func_0x00010c0d20e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar3 != 0) {
          uVar3 = uVar15;
          func_0x00010c0d20e0(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c96c0(unaff_x24);
          _objc_release(uVar3);
        }
        uVar3 = uVar15;
        func_0x00010c0d23a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar3 != 0) {
          uVar3 = uVar15;
          func_0x00010c0d23a0(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067fc0();
          func_0x00010c1fa9e0(unaff_x24);
          _objc_release(uVar3);
        }
        uVar3 = uVar15;
        func_0x00010c0d23e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (uVar3 != 0) {
          uVar3 = uVar15;
          func_0x00010c0d23e0(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c067fc0();
          func_0x00010c1faa60(unaff_x24);
          _objc_release(uVar3);
        }
        puVar1 = param_1;
        func_0x00010c09b9a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1be6c0(unaff_x24);
        _objc_release(puVar1);
        puVar1 = param_1;
        func_0x00010c270ce0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        if ((puVar2 != (undefined *)0x0) &&
           (puVar1 = puVar2, func_0x00010c13ca20(), (undefined *)0x1 < puVar1)) {
          func_0x00010c2536e0(puVar2);
          FUN_1054ff20c();
        }
        _objc_release(puVar2);
        func_0x00010c199f20(unaff_x24);
        func_0x00010c1be6e0(unaff_x24);
        puVar1 = param_1;
        func_0x00010c270ce0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        func_0x00010c13ca20();
        uStack_220 = uVar15;
        puStack_218 = param_2;
        _objc_release(puVar2);
        func_0x00010c1be740(unaff_x24);
        puVar1 = param_1;
        func_0x00010c270ce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        func_0x00010c2511a0(puVar2);
        unaff_d8 = dVar18 * 1000.0;
        _objc_release(puVar2);
        func_0x00010c1be720(unaff_x24);
        puVar1 = param_1;
        func_0x00010c270ce0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c089820();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        func_0x00010bf95860(puVar2);
        dVar19 = dVar18 * 1000.0;
        _objc_release(puVar2);
        func_0x00010c1be700(unaff_x24);
        _objc_retain(param_1);
        puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        dVar18 = 0.0;
        lStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        plStack_1c0 = (long *)0x0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        func_0x00010c270ce0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_1;
        func_0x00010bf52a60();
        if (puVar2 != (undefined *)0x0) {
          lVar13 = *plStack_1c0;
          do {
            puVar16 = (undefined *)0x0;
            do {
              if (*plStack_1c0 != lVar13) {
                _objc_enumerationMutation(param_1);
              }
              unaff_x28 = *(long *)(lStack_1c8 + (long)puVar16 * 8);
              lVar4 = unaff_x28;
              func_0x00010c270c40();
              if (lVar4 == 1) {
                lVar4 = unaff_x28;
                func_0x00010c2536e0();
                FUN_1054ff20c();
                func_0x00010ba98d80();
                _objc_retainAutoreleasedReturnValue();
                puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                dVar17 = dVar18;
                if (lVar4 != 0) {
                  func_0x00010bf95860(unaff_x28);
                  dVar17 = dVar18;
                  func_0x00010c2511a0(unaff_x28);
                  dVar17 = (dVar18 - dVar17) * 1000.0;
                  func_0x00010c0df720(puVar5);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar1);
                  _objc_release(puVar5);
                  unaff_d8 = dVar18;
                }
                dVar18 = dVar17;
                _objc_release(lVar4);
              }
              puVar16 = puVar16 + 1;
            } while (puVar2 != puVar16);
            puVar2 = param_1;
            func_0x00010bf52a60();
            unaff_x27 = (undefined *)0x0;
          } while (puVar2 != (undefined *)0x0);
        }
        _objc_release(param_1);
        unaff_x21 = puVar1;
        func_0x00010c085d00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        param_1 = puStack_238;
        _objc_release(puStack_238);
        func_0x00010c20a700(unaff_x24);
        _objc_release(unaff_x21);
        dVar18 = 0.0;
        lStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        plStack_1c0 = (long *)0x0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        uStack_1a0 = 0;
        unaff_x26 = param_1;
        func_0x00010c270ce0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = unaff_x26;
        func_0x00010bf52a60();
        unaff_x23 = uStack_220;
        if (puVar1 != (undefined *)0x0) {
          lVar13 = *plStack_1c0;
          unaff_x27 = puVar1;
          do {
            unaff_x21 = (undefined *)0x0;
            do {
              if (*plStack_1c0 != lVar13) {
                _objc_enumerationMutation(unaff_x26);
              }
              unaff_x25 = *(long *)(lStack_1c8 + (long)unaff_x21 * 8);
              lVar4 = unaff_x25;
              func_0x00010c2536e0();
              if ((((lVar4 == 1) || (lVar4 = unaff_x25, func_0x00010c2536e0(), lVar4 == 2)) ||
                  (lVar4 = unaff_x25, func_0x00010c2536e0(), lVar4 == 3)) &&
                 (lVar4 = unaff_x25, func_0x00010c270c40(), lVar4 == 0)) {
                _objc_retain(unaff_x25);
                _objc_release(unaff_x26);
                if (unaff_x25 != 0) {
                  func_0x00010c2511a0(unaff_x25);
                  unaff_d8 = dVar18 * 1000.0;
                  func_0x00010c21ef00(unaff_x24);
                  dVar18 = dVar19 - unaff_d8;
                }
                goto LAB_1054ff95c;
              }
              unaff_x21 = unaff_x21 + 1;
            } while (unaff_x27 != unaff_x21);
            unaff_x27 = unaff_x26;
            func_0x00010bf52a60();
          } while (unaff_x27 != (undefined *)0x0);
        }
        _objc_release(unaff_x26);
        unaff_x25 = 0;
LAB_1054ff95c:
        param_2 = puStack_218;
        func_0x00010c1be760(unaff_x24);
        func_0x00010c0c6740(param_1);
        func_0x00010c1c5280(unaff_x24);
        func_0x00010c096be0(param_1);
        func_0x00010c1bcc40(unaff_x24);
        func_0x00010bf506e0(unaff_x23);
        func_0x00010c1b1940(unaff_x24);
        (**(code **)(puStack_230 + 0x10))(puStack_230,unaff_x24,unaff_x23);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        param_2 = param_2 + 1;
      } while (param_2 != puStack_228);
      puVar8 = &uStack_210;
      puVar9 = auStack_190;
      uVar10 = 0x10;
      puVar1 = puStack_248;
      func_0x00010bf52a60();
      puStack_228 = puVar1;
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(puStack_248);
  _objc_release(puStack_230);
  puVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    ___stack_chk_fail();
    lVar13 = lStack_240;
    puVar2 = puStack_248;
    ppuVar14 = &puStack_2d0;
    pcStack_258 = FUN_1054ffa6c;
    uStack_2c0 = unaff_d9;
    dStack_2b8 = unaff_d8;
    lStack_2b0 = unaff_x28;
    puStack_2a8 = unaff_x27;
    puStack_2a0 = unaff_x26;
    lStack_298 = unaff_x25;
    puStack_290 = unaff_x24;
    uStack_288 = unaff_x23;
    puStack_280 = param_1;
    puStack_278 = unaff_x21;
    ppuStack_270 = unaff_x20;
    puStack_268 = param_2;
    puStack_260 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    _objc_retain(puVar9);
    _objc_retain(uVar10);
    _objc_retain(in_x6);
    _objc_retain(uStack_250);
    _objc_retain(puVar2);
    _objc_retain(lVar13);
    puStack_2c8 = PTR_PTR_1126e8c40;
    puStack_2d0 = puVar1;
    _objc_msgSendSuper2(&puStack_2d0,PTR_s_init_1125d9248);
    if (ppuVar14 != (undefined **)0x0) {
      puVar6 = puVar8;
      func_0x00010bf51e00();
      uVar11 = *(undefined8 *)((long)ppuVar14 + 8);
      *(undefined8 **)((long)ppuVar14 + 8) = puVar6;
      _objc_release(uVar11);
      puVar7 = puVar9;
      func_0x00010bf51e00();
      uVar11 = *(undefined8 *)((long)ppuVar14 + 0x10);
      *(undefined1 **)((long)ppuVar14 + 0x10) = puVar7;
      _objc_release(uVar11);
      uVar11 = uVar10;
      func_0x00010bf51e00();
      uVar12 = *(undefined8 *)((long)ppuVar14 + 0x18);
      *(undefined8 *)((long)ppuVar14 + 0x18) = uVar11;
      _objc_release(uVar12);
      *(undefined8 *)((long)ppuVar14 + 0x20) = in_x5;
      uVar11 = in_x6;
      func_0x00010bf51e00();
      uVar12 = *(undefined8 *)((long)ppuVar14 + 0x28);
      *(undefined8 *)((long)ppuVar14 + 0x28) = uVar11;
      _objc_release(uVar12);
      *(undefined8 *)((long)ppuVar14 + 0x30) = in_x7;
      *(double *)((long)ppuVar14 + 0x38) = dVar18;
      uVar11 = uStack_250;
      func_0x00010bf51e00();
      uVar12 = *(undefined8 *)((long)ppuVar14 + 0x40);
      *(undefined8 *)((long)ppuVar14 + 0x40) = uVar11;
      _objc_release(uVar12);
      puVar1 = puVar2;
      func_0x00010bf51e00();
      uVar11 = *(undefined8 *)((long)ppuVar14 + 0x48);
      *(undefined **)((long)ppuVar14 + 0x48) = puVar1;
      _objc_release(uVar11);
      lVar4 = lVar13;
      func_0x00010bf51e00();
      uVar11 = *(undefined8 *)((long)ppuVar14 + 0x50);
      *(long *)((long)ppuVar14 + 0x50) = lVar4;
      _objc_release(uVar11);
    }
    _objc_release(lVar13);
    _objc_release(puVar2);
    _objc_release(uStack_250);
    _objc_release(in_x6);
    _objc_release(uVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    return (undefined *)ppuVar14;
  }
  return puVar1;
}



/* Entry: 1054ffa6c; end: 1054ffc27; -[SCLoadMessageMetadata initWithMessageId:mediaId:conversationId:conversationMode:messageBodyType:mediaType:mediaDurationSec:multiSnapBundleId:multiSnapSegmentIndex:multiSnapSegmentCount:] */

undefined1 *
FUN_1054ffa6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_78 = PTR_PTR_1126e8c40;
  uStack_80 = param_2;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    *(undefined8 *)((long)puVar1 + 0x38) = param_1;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1054ffc28; end: 1054ffc4b; -[SCLoadMessageMetadata copyWithZone:] */

undefined8 FUN_1054ffc28(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1054ffc4c; end: 1054ffd37; -[SCLoadMessageMetadata hash] */

undefined8 * FUN_1054ffc4c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = uVar3;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  lStack_60 = -lVar6;
  if (-1 < lVar6) {
    lStack_60 = lVar6;
  }
  uStack_68 = uVar2;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x30);
  lStack_50 = -lVar6;
  if (-1 < lVar6) {
    lStack_50 = lVar6;
  }
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = uVar3;
  func_0x00010bfde980();
  puVar4 = &uStack_78;
  uStack_30 = uVar2;
  func_0x000100505190(puVar4,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_1054ffe84:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1054ffe90;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) && ((puVar4[4] == param_3[4] && (puVar4[6] == param_3[6])))) {
      dVar10 = ABS((double)puVar4[7] - (double)param_3[7]);
      dVar9 = ABS((double)puVar4[7] + (double)param_3[7]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (((((bVar1) &&
            ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0))))
           && ((lVar6 = puVar4[2], lVar6 == param_3[2] || (func_0x00010c071ae0(), (int)lVar6 != 0)))
           ) && ((((lVar6 = puVar4[3], lVar6 == param_3[3] ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)) &&
                  ((lVar6 = puVar4[5], lVar6 == param_3[5] ||
                   (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                 ((lVar6 = puVar4[8], lVar6 == param_3[8] ||
                  (func_0x00010c071ae0(), (int)lVar6 != 0)))))) &&
         ((lVar6 = puVar4[9], lVar6 == param_3[9] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[10];
        if (puVar8 != (undefined8 *)param_3[10]) {
          func_0x00010c071ae0();
          goto LAB_1054ffe90;
        }
        goto LAB_1054ffe84;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_1054ffe90:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 1054ffd38; end: 1054ffeab; -[SCLoadMessageMetadata isEqual:] */

long FUN_1054ffd38(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1054ffe84:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1054ffe90;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
      dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (((((bVar1) &&
            ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
         ((lVar4 = *(long *)(param_1 + 0x48), lVar4 == *(long *)(param_3 + 0x48) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x50);
        if (lVar4 != *(long *)(param_3 + 0x50)) {
          func_0x00010c071ae0();
          goto LAB_1054ffe90;
        }
        goto LAB_1054ffe84;
      }
    }
    lVar4 = 0;
  }
LAB_1054ffe90:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1054ffeac; end: 1054ffeb3; -[SCLoadMessageMetadata messageId] */

undefined8 FUN_1054ffeac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1054ffeb4; end: 1054ffebb; -[SCLoadMessageMetadata mediaId] */

undefined8 FUN_1054ffeb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1054ffebc; end: 1054ffec3; -[SCLoadMessageMetadata conversationId] */

undefined8 FUN_1054ffebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1054ffec4; end: 1054ffecb; -[SCLoadMessageMetadata conversationMode] */

undefined8 FUN_1054ffec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1054ffecc; end: 1054ffed3; -[SCLoadMessageMetadata messageBodyType] */

undefined8 FUN_1054ffecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1054ffed4; end: 1054ffedb; -[SCLoadMessageMetadata mediaType] */

undefined8 FUN_1054ffed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1054ffedc; end: 1054ffee3; -[SCLoadMessageMetadata mediaDurationSec] */

undefined8 FUN_1054ffedc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1054ffee4; end: 1054ffeeb; -[SCLoadMessageMetadata multiSnapBundleId] */

undefined8 FUN_1054ffee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1054ffeec; end: 1054ffef3; -[SCLoadMessageMetadata multiSnapSegmentIndex] */

undefined8 FUN_1054ffeec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1054ffef4; end: 1054ffefb; -[SCLoadMessageMetadata multiSnapSegmentCount] */

undefined8 FUN_1054ffef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1054ffefc; end: 1054fff67; -[SCLoadMessageMetadata .cxx_destruct] */

void FUN_1054ffefc(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054fff68; end: 1054fff93; +[SCGrapheneLoadMessageMetric loadMessageResult] */

void FUN_1054fff68(void)

{
  _objc_alloc(PTR_PTR_1126ba200);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054fff94; end: 1054fffbf; +[SCGrapheneLoadMessageMetric loadMessageFailure] */

void FUN_1054fff94(void)

{
  _objc_alloc(PTR_PTR_1126ba200);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054fffc0; end: 1054fffeb; +[SCGrapheneLoadMessageMetric loadMessageConnectivity] */

void FUN_1054fffc0(void)

{
  _objc_alloc(PTR_PTR_1126ba200);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054fffec; end: 105500017; +[SCGrapheneLoadMessageMetric loadMessageFatal] */

void FUN_1054fffec(void)

{
  _objc_alloc(PTR_PTR_1126ba200);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105500018; end: 105500043; +[SCGrapheneLoadMessageMetric loadMessagePerceivedLatency] */

void FUN_105500018(void)

{
  _objc_alloc(PTR_PTR_1126ba200);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105500044; end: 10550006f; +[SCGrapheneLoadMessageMetric loadMessageStepLatency] */

void FUN_105500044(void)

{
  _objc_alloc(PTR_PTR_1126ba200);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


