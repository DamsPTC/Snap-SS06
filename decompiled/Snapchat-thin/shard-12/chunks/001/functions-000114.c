/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e096b0; end: 108e096ef; -[SCCaptionDataProviderAggregatorImpl _setAllCaptionStyles:] */

void FUN_108e096b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x30);
  return;
}



/* Entry: 108e096f0; end: 108e0972b; -[SCCaptionDataProviderAggregatorImpl _localCaptionStyles] */

void FUN_108e096f0(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e0972c; end: 108e0976b; -[SCCaptionDataProviderAggregatorImpl _setLocalCaptionStyles:] */

void FUN_108e0972c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x38);
  return;
}



/* Entry: 108e0976c; end: 108e097a7; -[SCCaptionDataProviderAggregatorImpl _remoteCaptionStyles] */

void FUN_108e0976c(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x34);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x34);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e097a8; end: 108e097f3; -[SCCaptionDataProviderAggregatorImpl _setRemoteCaptionStyles:] */

void FUN_108e097a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c2292c0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  _os_unfair_lock_lock(param_1 + 0x34);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x34);
  return;
}



/* Entry: 108e097f4; end: 108e0982f; -[SCCaptionDataProviderAggregatorImpl _allCaptionStylesNoRecents] */

void FUN_108e097f4(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x3c);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x3c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e09830; end: 108e0986f; -[SCCaptionDataProviderAggregatorImpl _setAllCaptionStylesNoRecents:] */

void FUN_108e09830(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x3c);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x3c);
  return;
}



/* Entry: 108e09870; end: 108e09887; -[SCCaptionDataProviderAggregatorImpl delegate] */

void FUN_108e09870(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108e09888; end: 108e09893; -[SCCaptionDataProviderAggregatorImpl setDelegate:] */

void FUN_108e09888(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 108e09894; end: 108e0989f; -[SCCaptionDataProviderAggregatorImpl allCaptionStylesArray] */

void FUN_108e09894(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x50,1);
  return;
}



/* Entry: 108e098a0; end: 108e098a7; -[SCCaptionDataProviderAggregatorImpl setAllCaptionStylesArray:] */

void FUN_108e098a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 108e098a8; end: 108e098b3; -[SCCaptionDataProviderAggregatorImpl remoteCaptionStylesArray] */

void FUN_108e098a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x58,1);
  return;
}



/* Entry: 108e098b4; end: 108e098bb; -[SCCaptionDataProviderAggregatorImpl setRemoteCaptionStylesArray:] */

void FUN_108e098b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 108e098bc; end: 108e098c7; -[SCCaptionDataProviderAggregatorImpl localCaptionStylesArray] */

void FUN_108e098bc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x60,1);
  return;
}



/* Entry: 108e098c8; end: 108e098cf; -[SCCaptionDataProviderAggregatorImpl setLocalCaptionStylesArray:] */

void FUN_108e098c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 108e098d0; end: 108e098db; -[SCCaptionDataProviderAggregatorImpl allCaptionStylesNoRecentsArray] */

void FUN_108e098d0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x68,1);
  return;
}



/* Entry: 108e098dc; end: 108e098e3; -[SCCaptionDataProviderAggregatorImpl setAllCaptionStylesNoRecentsArray:] */

void FUN_108e098dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 108e098e4; end: 108e0997b; -[SCCaptionDataProviderAggregatorImpl .cxx_destruct] */

void FUN_108e098e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e0997c; end: 108e09a43; -[SCCaptionDataProviderCTPDataSource initWithCTPRepositoryServices:grapheneLogger:creativeToolsABProvider:] */

undefined1 *
FUN_108e0997c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fea10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar3);
    func_0x00010beac9a0(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e09a44; end: 108e09b67; -[SCCaptionDataProviderCTPDataSource _setupFeedsObserving] */

void FUN_108e09a44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 8) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfa4700();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bfa4760();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_initWeak(auStack_38,param_1);
    lVar5 = *(long *)(param_1 + 8);
    if (lVar5 != 0) {
      _objc_copyWeak(auStack_40,auStack_38);
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar5;
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_40);
    }
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 108e09b68; end: 108e09bd3;  */

void FUN_108e09b68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_2;
    _objc_release(uVar1);
    if (*(char *)(param_1 + 0x41) == '\x01') {
      func_0x00010be6ffc0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e09bd4; end: 108e09c23; -[SCCaptionDataProviderCTPDataSource captionStyleObservable] */

void FUN_108e09bd4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    *(undefined1 *)(param_1 + 0x41) = 1;
  }
  else if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    func_0x00010be6ffc0(param_1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e09c24; end: 108e09c83; -[SCCaptionDataProviderCTPDataSource _parseCTPFeedResponse] */

void FUN_108e09c24(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108e09c84;
  puStack_20 = &UNK_1108b4818;
  lStack_18 = param_1;
  func_0x00010c0c0800(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38,
                      &PTR___NSConcreteGlobalBlock_110ac5f50);
  return;
}



/* Entry: 108e09c84; end: 108e09eef;  */

void FUN_108e09c84(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **unaff_x26;
  undefined1 *puVar9;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  _objc_retain(param_2);
  if (param_2 != (undefined1 *)0x0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c085260();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    puVar3 = param_2;
    func_0x00010bf38dc0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined1 *)0x0) {
      lVar1 = *plStack_130;
      unaff_x26 = &puStack_170;
      do {
        puVar9 = (undefined1 *)0x0;
        do {
          if (*plStack_130 != lVar1) {
            _objc_enumerationMutation(puVar3);
          }
          lVar8 = *(long *)(lStack_138 + (long)puVar9 * 8);
          func_0x00010bfa3d00();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar8;
          func_0x00010c27dd80();
          _objc_release(lVar8);
          if (lVar5 == 0xc) {
            lVar5 = lVar2;
            func_0x00010c0850a0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar5 != 0) {
              _objc_initWeak(auStack_148,*(long *)(param_1 + 0x20));
              *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x40) = 1;
              puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_168 = 0xc2000000;
              pcStack_160 = FUN_108e09ef0;
              puStack_158 = &UNK_11084a018;
              puVar6 = auStack_148;
              _objc_copyWeak(auStack_150,puVar6);
              lVar8 = lVar5;
              func_0x00010c25ff60();
              _objc_retainAutoreleasedReturnValue();
              uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
              *(long *)(*(long *)(param_1 + 0x20) + 0x28) = lVar8;
              _objc_release(uVar7);
              _objc_destroyWeak(auStack_150);
              _objc_destroyWeak(auStack_148);
            }
            _objc_release(lVar5);
          }
          puVar9 = puVar9 + 1;
        } while (puVar4 != puVar9);
        puVar4 = puVar3;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined1 *)0x0);
    }
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 4);
  _objc_destroyWeak(auStack_148);
  __Unwind_Resume();
  _objc_retain(puVar6);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != (undefined1 *)0x0) {
    func_0x00010c0c0800(puVar6);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 108e09ef0; end: 108e09f7f;  */

void FUN_108e09ef0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0c0800(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e09f80; end: 108e09f93;  */

void FUN_108e09f80(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde9610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__convertToDynamicCaptionStyles__112557f20,param_2
            );
  return;
}



/* Entry: 108e09f94; end: 108e0a1af; -[SCCaptionDataProviderCTPDataSource _convertToDynamicCaptionStyles:] */

void FUN_108e09f94(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar5 = *(long *)(lVar12 * 8);
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar6 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar5);
          }
          lVar7 = param_1;
          func_0x00010bde8fe0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar7 != 0) {
            func_0x00010bee7bc0(param_1);
            func_0x00010befa120(puVar3);
          }
          _objc_release(lVar7);
          lVar10 = lVar10 + 1;
        } while (lVar6 != lVar10);
        lVar6 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar4);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  puVar8 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c0d9840(uVar11);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be54e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108e0a1b0; end: 108e0a1b3; -[SCCaptionDataProviderCTPDataSource _validateRemoteCaptionStyle:] */

void FUN_108e0a1b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be54e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__logInvalidContentMediaOnCaption_112572d28);
  return;
}



/* Entry: 108e0a1b4; end: 108e0a2d3; -[SCCaptionDataProviderCTPDataSource _logInvalidContentMediaOnCaptionStyle:] */

void FUN_108e0a1b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c25e0a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar2 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a28c0();
        _objc_release(uVar2);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = param_3;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar7 = (undefined1 *)puVar6;
  func_0x00010bf96f00();
  if (puVar7 == (undefined1 *)0xc) {
    puVar3 = (undefined1 *)puVar6;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126dbfe0;
    _objc_opt_class(PTR_PTR_1126dbfe0);
    puVar5 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar4);
    puVar7 = puVar3;
    if (((ulong)puVar5 & 1) == 0) {
      puVar7 = (undefined1 *)0x0;
    }
    _objc_retain(puVar7);
    _objc_release(puVar3);
  }
  else {
    puVar7 = (undefined1 *)0x0;
  }
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108e0a2d4; end: 108e0a367; -[SCCaptionDataProviderCTPDataSource _convertCTPItemToDynamicCaptionStyle:] */

void FUN_108e0a2d4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010bf96f00();
  if (uVar4 == 0xc) {
    uVar1 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126dbfe0;
    _objc_opt_class(PTR_PTR_1126dbfe0);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    uVar4 = uVar1;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108e0a368; end: 108e0a3d3; -[SCCaptionDataProviderCTPDataSource .cxx_destruct] */

void FUN_108e0a368(long param_1)

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



/* Entry: 108e0a3d4; end: 108e0a49b; -[SCCaptionDataProviderLocalDataSource initWithUserPreferences:creativeToolsABProvider:] */

undefined1 * FUN_108e0a3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fea18;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e0a49c; end: 108e0a77f; -[SCCaptionDataProviderLocalDataSource _initializeRecentIdsAndPreloadStylesFromRemoteStyles:] */

void FUN_108e0a49c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0d3c80();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  lVar2 = lVar1;
  FUN_108e0b118();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar7 = *plStack_1b0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1b0 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        uVar5 = *(undefined8 *)(lStack_1b8 + lVar8 * 8);
        func_0x00010c113040(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar5;
        func_0x00010c25e080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(lVar1);
        _objc_release(uVar4);
        _objc_release(uVar5);
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = lVar2;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(lVar2);
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_1f0;
    do {
      lVar7 = 0;
      do {
        if (*plStack_1f0 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = *(undefined8 *)(lStack_1f8 + lVar7 * 8);
        func_0x00010c113040(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar5;
        func_0x00010c25e080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(lVar1);
        _objc_release(uVar4);
        _objc_release(uVar5);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  lVar2 = lVar1;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar2;
  _objc_release(uVar4);
  lVar2 = param_1;
  func_0x00010c122620(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_220 = 0xc2000000;
  pcStack_218 = FUN_108e0a780;
  puStack_210 = &UNK_110ac5f70;
  ppuVar3 = &puStack_228;
  lVar6 = lVar2;
  lStack_208 = param_1;
  func_0x000107c31908();
  lVar7 = param_1;
  func_0x00010bdd1bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar7;
  _objc_release(uVar4);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_3 + 0x20) + 0x10),
             PTR_s_objectForKeyedSubscript__112615a50,ppuVar3);
  return;
}



/* Entry: 108e0a780; end: 108e0a78f;  */

void FUN_108e0a780(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
             PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 108e0a790; end: 108e0aa97; -[SCCaptionDataProviderLocalDataSource updateRecentsWithCaptionStyle:] */

void FUN_108e0a790(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = param_3;
  _objc_retain(param_3);
  FUN_108e0b118();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010c113040();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar10;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c113040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((uVar10 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c122620();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d3c80();
    _objc_release(uVar2);
    _objc_retain(uVar3);
    uVar2 = uVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (uVar10 = uVar3, uVar2 != 0) {
      uVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(uVar3);
        }
        uVar9 = *(ulong *)(uVar10 * 8);
        uVar5 = param_3;
        func_0x00010c113040(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c25e080();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        func_0x00010c0720c0();
        _objc_release(uVar6);
        if ((uVar9 & 1) != 0) {
          _objc_release(uVar3);
          uVar10 = param_3;
          func_0x00010c113040(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar10;
          func_0x00010c25e080();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d360(uVar3);
          _objc_release(uVar2);
          goto LAB_108e0a9a8;
        }
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
      uVar2 = uVar3;
      func_0x00010bf52a60();
    }
LAB_108e0a9a8:
    _objc_release(uVar10);
    uVar2 = param_3;
    func_0x00010c113040(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066b00(uVar3);
    _objc_release(uVar10);
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010bf529e0();
    if (3 < uVar2) {
      func_0x00010c12cd60(uVar3);
    }
    uVar2 = param_1;
    func_0x00010bdd1ba0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = uVar2;
    _objc_release(uVar8);
    func_0x00010be99840(param_1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar3);
  }
  _objc_release(uVar4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be3b9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 108e0aa98; end: 108e0aa9b; -[SCCaptionDataProviderLocalDataSource setupRecentsWithRemoteCaptionStyles:] */

void FUN_108e0aa98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3b9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__initializeRecentIdsAndPreloadSt_11256c808);
  return;
}



/* Entry: 108e0aa9c; end: 108e0aceb; -[SCCaptionDataProviderLocalDataSource _availableStylesWithRecentStyleIds:] */

void FUN_108e0aa9c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_3;
  _objc_retain();
  FUN_108e0b118();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = lVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d3c80();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_alloc();
  lVar5 = lVar2;
  func_0x00010c113040(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar5;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0309a0(puVar3,param_2,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar5);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_140,auStack_f8,0x10);
  if (lVar5 != 0) {
    lVar10 = *plStack_130;
    do {
      lVar11 = 0;
      do {
        if (*plStack_130 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        lVar6 = *(long *)(param_1 + 0x10);
        func_0x00010c296f60(lVar6,param_2,*(undefined8 *)(lStack_138 + lVar11 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 != 0) {
          func_0x00010bdc8760(param_1,param_2,lVar6,puVar3,puVar4);
        }
        _objc_release(lVar6);
        lVar11 = lVar11 + 1;
      } while (lVar5 != lVar11);
      lVar5 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_140,auStack_f8,0x10);
    } while (lVar5 != 0);
  }
  _objc_release(param_3);
  lVar5 = lVar1;
  func_0x00010c089820(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar5;
  puVar8 = puVar3;
  puVar9 = puVar4;
  func_0x00010bdc8760(param_1,param_2,lVar5,puVar3,puVar4);
  puVar7 = puVar4;
  func_0x00010bf51e00();
  _objc_release(lVar5);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar10);
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  lVar1 = lVar10;
  func_0x00010c113040(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = puVar8;
  func_0x00010bf4b900(puVar8,param_2,lVar2);
  if (((ulong)puVar3 & 1) == 0) {
    func_0x00010befa120(puVar8,param_2,lVar2);
    func_0x00010befa120(puVar9,param_2,lVar10);
  }
  _objc_release(lVar2);
  _objc_release(puVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar10);
  return;
}



/* Entry: 108e0acec; end: 108e0ada7; -[SCCaptionDataProviderLocalDataSource _addStyleIfPossibleWithStyle:styleIds:availableStyles:] */

void FUN_108e0acec(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c113040(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = param_4;
  func_0x00010bf4b900(param_4,param_2,uVar2);
  if ((uVar3 & 1) == 0) {
    func_0x00010befa120(param_4,param_2,uVar2);
    func_0x00010befa120(param_5,param_2,param_3);
  }
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e0ada8; end: 108e0adcf; -[SCCaptionDataProviderLocalDataSource captionStyleObservable] */

void FUN_108e0ada8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e0add0; end: 108e0ae27; -[SCCaptionDataProviderLocalDataSource _saveRecentStyleIds:] */

void FUN_108e0add0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e0ae28; end: 108e0ae9f; -[SCCaptionDataProviderLocalDataSource recentStyleIds] */

void FUN_108e0ae28(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = *(undefined **)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf0a000();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar3;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e0aea0; end: 108e0b0cb; -[SCCaptionDataProviderLocalDataSource _availableStylesWithRecentStyles:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e0aea0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
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
  undefined *puStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined *puStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
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
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = param_3;
  _objc_retain();
  FUN_108e0b118();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar14;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = lVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_alloc();
  lVar4 = lVar1;
  func_0x00010c113040();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar4;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  uStack_140 = 0;
  func_0x00010c0309a0(puVar2,param_2,lVar12);
  _objc_release(lVar12);
  _objc_release(lVar4);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar4 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010bdc8760(param_1,param_2,*(undefined8 *)(lStack_128 + lVar13 * 8),puVar2,puVar3);
        lVar13 = lVar13 + 1;
      } while (lVar4 != lVar13);
      lVar4 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  lVar4 = lVar14;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc8760(param_1,param_2,lVar4,puVar2,puVar3);
  puVar5 = puVar3;
  func_0x00010bf51e00();
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(lVar14);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_148 = FUN_108e0b0cc;
    lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = PTR_PTR_1126cbf68;
    puStack_170 = puVar5;
    lStack_168 = lVar1;
    lStack_160 = lVar14;
    lStack_158 = param_3;
    puStack_150 = &stack0xfffffffffffffff0;
    func_0x00010bf8b640();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cbf68;
    puStack_188 = puVar2;
    func_0x00010bf8b5c0(PTR_PTR_1126cbf68,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_180 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_188,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
      ___stack_chk_fail();
      puVar2 = puVar2 + 0x20;
      _objc_loadWeakRetained(puVar2);
      puVar3 = puVar2 + _DAT_11277bf18;
      _objc_loadWeakRetained(puVar3);
      puVar6 = puVar3;
      func_0x00010bf30080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar7 = PTR_PTR_1126dbfd8;
      _objc_alloc(PTR_PTR_1126dbfd8);
      func_0x00010c018300();
      puVar8 = PTR_PTR_1126dbfe8;
      _objc_alloc(PTR_PTR_1126dbfe8);
      puVar3 = puVar2 + _DAT_11277bf1c;
      _objc_loadWeakRetained(puVar3);
      lVar14 = (long)_DAT_11277bf20;
      puVar5 = puVar2 + lVar14;
      _objc_loadWeakRetained(puVar5);
      puVar9 = puVar5;
      func_0x00010bf5aea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffa5c0(puVar8,param_2,puVar3,puVar6,puVar9);
      _objc_release(puVar9);
      _objc_release(puVar5);
      _objc_release(puVar3);
      puVar9 = PTR_PTR_1126dbff0;
      _objc_alloc(PTR_PTR_1126dbff0);
      puVar3 = puVar2 + _DAT_11277bf24;
      _objc_loadWeakRetained(puVar3);
      puVar10 = puVar3;
      func_0x00010c1067a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2 + lVar14;
      _objc_loadWeakRetained(puVar5);
      puVar11 = puVar5;
      func_0x00010bf5aea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05cac0(puVar9,param_2,puVar10,puVar11);
      _objc_release(puVar11);
      _objc_release(puVar5);
      _objc_release(puVar10);
      _objc_release(puVar3);
      puVar5 = PTR_PTR_1126dbff8;
      _objc_alloc(PTR_PTR_1126dbff8);
      func_0x00010c03dfe0();
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108e0b0cc; end: 108e0b0cf; -[SCCaptionDataProviderLocalDataSource predefinedStyles] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e0b0cc(undefined8 param_1,undefined8 param_2)

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
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cbf68;
  func_0x00010bf8b640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cbf68;
  puStack_48 = puVar1;
  func_0x00010bf8b5c0(PTR_PTR_1126cbf68,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar1 = puVar1 + 0x20;
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1 + _DAT_11277bf18;
    _objc_loadWeakRetained(puVar2);
    puVar4 = puVar2;
    func_0x00010bf30080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar5 = PTR_PTR_1126dbfd8;
    _objc_alloc(PTR_PTR_1126dbfd8);
    func_0x00010c018300();
    puVar6 = PTR_PTR_1126dbfe8;
    _objc_alloc(PTR_PTR_1126dbfe8);
    puVar2 = puVar1 + _DAT_11277bf1c;
    _objc_loadWeakRetained(puVar2);
    lVar10 = (long)_DAT_11277bf20;
    puVar3 = puVar1 + lVar10;
    _objc_loadWeakRetained(puVar3);
    puVar7 = puVar3;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffa5c0(puVar6,param_2,puVar2,puVar4,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar7 = PTR_PTR_1126dbff0;
    _objc_alloc(PTR_PTR_1126dbff0);
    puVar2 = puVar1 + _DAT_11277bf24;
    _objc_loadWeakRetained(puVar2);
    puVar8 = puVar2;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1 + lVar10;
    _objc_loadWeakRetained(puVar3);
    puVar9 = puVar3;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05cac0(puVar7,param_2,puVar8,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126dbff8;
    _objc_alloc(PTR_PTR_1126dbff8);
    func_0x00010c03dfe0();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e0b0d0; end: 108e0b117; -[SCCaptionDataProviderLocalDataSource .cxx_destruct] */

void FUN_108e0b0d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e0b118; end: 108e0b1d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e0b118(undefined8 param_1,undefined8 param_2)

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
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126cbf68;
  func_0x00010bf8b640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cbf68;
  puStack_48 = puVar1;
  func_0x00010bf8b5c0(PTR_PTR_1126cbf68,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar1 = puVar1 + 0x20;
    _objc_loadWeakRetained(puVar1);
    puVar2 = puVar1 + _DAT_11277bf18;
    _objc_loadWeakRetained(puVar2);
    puVar4 = puVar2;
    func_0x00010bf30080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar5 = PTR_PTR_1126dbfd8;
    _objc_alloc(PTR_PTR_1126dbfd8);
    func_0x00010c018300();
    puVar6 = PTR_PTR_1126dbfe8;
    _objc_alloc(PTR_PTR_1126dbfe8);
    puVar2 = puVar1 + _DAT_11277bf1c;
    _objc_loadWeakRetained(puVar2);
    lVar10 = (long)_DAT_11277bf20;
    puVar3 = puVar1 + lVar10;
    _objc_loadWeakRetained(puVar3);
    puVar7 = puVar3;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffa5c0(puVar6,param_2,puVar2,puVar4,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar7 = PTR_PTR_1126dbff0;
    _objc_alloc(PTR_PTR_1126dbff0);
    puVar2 = puVar1 + _DAT_11277bf24;
    _objc_loadWeakRetained(puVar2);
    puVar8 = puVar2;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1 + lVar10;
    _objc_loadWeakRetained(puVar3);
    puVar9 = puVar3;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05cac0(puVar7,param_2,puVar8,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126dbff8;
    _objc_alloc(PTR_PTR_1126dbff8);
    func_0x00010c03dfe0();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108e0b1d8; end: 108e0b3a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e0b1d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1 + _DAT_11277bf18;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf30080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126dbfd8;
  _objc_alloc(PTR_PTR_1126dbfd8);
  func_0x00010c018300();
  puVar4 = PTR_PTR_1126dbfe8;
  _objc_alloc(PTR_PTR_1126dbfe8);
  lVar1 = param_1 + _DAT_11277bf1c;
  _objc_loadWeakRetained(lVar1);
  lVar9 = (long)_DAT_11277bf20;
  lVar5 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffa5c0(puVar4,param_2,lVar1,lVar2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126dbff0;
  _objc_alloc(PTR_PTR_1126dbff0);
  lVar1 = param_1 + _DAT_11277bf24;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar6 = lVar9;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cac0(puVar7,param_2,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar1);
  puVar8 = PTR_PTR_1126dbff8;
  _objc_alloc(PTR_PTR_1126dbff8);
  func_0x00010c03dfe0();
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108e0b3a4; end: 108e0b41f; -[SCCaptionDataProviderServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e0b3a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277bf2c,0);
  _objc_destroyWeak(param_1 + _DAT_11277bf20);
  _objc_destroyWeak(param_1 + _DAT_11277bf18);
  _objc_destroyWeak(param_1 + _DAT_11277bf1c);
  _objc_destroyWeak(param_1 + _DAT_11277bf24);
  _objc_destroyWeak(param_1 + _DAT_11277bf30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277bf28,0);
  return;
}



/* Entry: 108e0b420; end: 108e0b5a7; -[SCDynamicCaptionFetcherImpl initWithGrapheneLogger:] */

undefined1 * FUN_108e0b420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fea20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126b9940;
    _objc_alloc(PTR_PTR_1126b9940);
    func_0x00010c02d5c0();
    puVar4 = PTR_PTR_1126dc000;
    _objc_alloc();
    func_0x00010c02d680();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e0b5a8; end: 108e0b79f; -[SCDynamicCaptionFetcherImpl prepareCaptionStyle:completionBlock:] */

void FUN_108e0b5a8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c113040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb4120();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    lVar4 = param_4;
    func_0x00010c113040(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010be185c0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar6 == 0) {
      _CACurrentMediaTime();
      _objc_initWeak(auStack_78,param_2);
      uVar7 = *(undefined8 *)(param_2 + 8);
      _objc_copyWeak(auStack_88,auStack_78);
      _objc_retain(param_5);
      _objc_retain(param_4);
      uStack_80 = param_1;
      func_0x00010c0f7fc0(uVar7);
      _objc_release(param_4);
      _objc_release(param_5);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_78);
      goto LAB_108e0b750;
    }
  }
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,param_4);
  }
LAB_108e0b750:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108e0b7a0; end: 108e0b7ef;  */

void FUN_108e0b7a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
              (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010be78100(*(undefined8 *)(param_1 + 0x38),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e0b7f0; end: 108e0bb7b; -[SCDynamicCaptionFetcherImpl _prepareCaptionStyle:startTime:completionBlock:] */

void FUN_108e0b7f0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar4 = *(long *)(param_2 + 0x28);
  lVar3 = param_4;
  func_0x00010c113040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (param_5 == 0) {
    if (lVar4 != 0) goto LAB_108e0bb34;
LAB_108e0b994:
    _dispatch_group_create();
    _dispatch_group_enter();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_108e0bb7c;
    puStack_88 = &UNK_110848bd8;
    _objc_retain(param_4);
    lStack_80 = param_4;
    _objc_retain(lVar3);
    lStack_78 = lVar3;
    func_0x00010be894e0(param_2);
    _dispatch_group_enter(lVar3);
    lVar1 = param_4;
    func_0x00010c113040(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bfb40c0();
    _objc_retainAutoreleasedReturnValue();
    puStack_d0 = puVar2;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x108e0bb84;
    puStack_b8 = &UNK_110848bd8;
    _objc_retain(param_4);
    lStack_b0 = param_4;
    _objc_retain(lVar3);
    lStack_a8 = lVar3;
    func_0x00010be78660(param_2);
    _objc_release(lVar4);
    _objc_release(lVar1);
    _objc_initWeak(auStack_d8,param_2);
    uVar5 = *(undefined8 *)(param_2 + 8);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = puVar2;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_108e0bb8c;
    puStack_100 = &UNK_1108484f8;
    _objc_copyWeak(auStack_e8,auStack_d8);
    _objc_retain(param_4);
    lStack_f8 = param_4;
    uStack_e0 = param_1;
    _objc_retain(param_5);
    lStack_f0 = param_5;
    func_0x000107c27d98(lVar3,uVar5,&puStack_118);
    _objc_release(uVar5);
    _objc_release(lStack_f0);
    _objc_release(lStack_f8);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_d8);
    _objc_release(lStack_a8);
    _objc_release(lStack_b0);
    _objc_release(lStack_78);
    _objc_release(lStack_80);
  }
  else {
    if (lVar4 == 0) {
      lVar3 = param_5;
      _objc_retainBlock();
      func_0x00010bf0a100(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      lVar1 = param_4;
      func_0x00010c113040(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c25e080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar5);
      _objc_release(lVar4);
      _objc_release(lVar1);
      _objc_release(puVar2);
      _objc_release();
      goto LAB_108e0b994;
    }
    lVar3 = *(long *)(param_2 + 0x28);
    lVar1 = param_4;
    func_0x00010c113040(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar1);
    lVar1 = param_5;
    _objc_retainBlock(param_5);
    func_0x00010befa120(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(lVar3);
LAB_108e0bb34:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108e0bb7c; end: 108e0bb8b;  */

void FUN_108e0bb7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108e0bb8c; end: 108e0bbc3;  */

void FUN_108e0bb8c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be2e5a0(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108e0bbc4; end: 108e0bdef; -[SCDynamicCaptionFetcherImpl _handlePreparedCaptionStyle:startTime:completionBlock:] */

void FUN_108e0bbc4(double param_1,long param_2,undefined8 param_3,long param_4,undefined1 *param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar6 = param_1;
  _objc_retain(param_4);
  _CACurrentMediaTime();
  dVar7 = *(double *)(param_2 + 0x30);
  if (*(double *)(param_2 + 0x30) <= dVar6 - param_1) {
    dVar7 = dVar6 - param_1;
  }
  *(double *)(param_2 + 0x30) = dVar7;
  lVar4 = *(long *)(param_2 + 0x28);
  lVar1 = param_4;
  func_0x00010c113040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 != 0) {
    lVar4 = *(long *)(param_2 + 0x28);
    lVar1 = param_4;
    func_0x00010c113040(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_retain(lVar4);
    param_5 = auStack_e8;
    lVar1 = lVar4;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar4);
        }
        (**(code **)(*(long *)(lVar5 * 8) + 0x10))(*(long *)(lVar5 * 8),param_4);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      param_5 = auStack_e8;
      lVar1 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    lVar1 = param_4;
    func_0x00010c113040();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c12d3e0(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar4);
  }
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar5);
  _objc_retain(param_5);
  lVar1 = lVar5;
  func_0x00010bf14140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,1);
  }
  else {
    lVar1 = lVar5;
    func_0x00010bf14140(lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_5);
    func_0x00010bfa4fa0(param_4);
    _objc_release(lVar1);
    _objc_release(param_5);
  }
  _objc_release(param_5);
  _objc_release(lVar5);
  return;
}



/* Entry: 108e0bdf0; end: 108e0bedf; -[SCDynamicCaptionFetcherImpl _prepareImageAssets:collectorBlock:] */

void FUN_108e0bdf0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf14140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
  else {
    lVar1 = param_3;
    func_0x00010bf14140(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010bfa4fa0(param_1);
    _objc_release(lVar1);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108e0bee0; end: 108e0bef3;  */

void FUN_108e0bee0(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000108e0bef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 != 0);
  return;
}



/* Entry: 108e0bef4; end: 108e0c0f3; -[SCDynamicCaptionFetcherImpl _registerFont:collectorBlock:] */

void FUN_108e0bef4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c113040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb4120();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar5 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    lVar2 = param_3;
    func_0x00010c113040(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb40c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfb4120();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(uVar1);
    func_0x00010bfa4fa0(param_1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108e0c0f4; end: 108e0c37f;  */

void FUN_108e0c0f4(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lStack_68;
  
  _objc_retain(param_2);
  uVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (uVar1 == 0) goto LAB_108e0c32c;
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
    goto LAB_108e0c32c;
  }
  uVar2 = param_2;
  _CGDataProviderCreateWithCFData();
  uVar3 = uVar2;
  _CGFontCreateWithDataProvider();
  uVar4 = uVar3;
  _CGFontCopyPostScriptName();
  if (uVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c113040(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfb40c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfb3f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  _CGDataProviderRelease(uVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c113040(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010be185c0();
  _objc_release(uVar6);
  _objc_release(uVar7);
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar3;
    _CTFontManagerRegisterGraphicsFont(uVar3,&lStack_68);
    if ((uVar2 & 1) != 0) {
      func_0x00010c0a2840(*(undefined8 *)(param_1 + 0x28));
LAB_108e0c25c:
      func_0x00010c09faa0(*(undefined8 *)(uVar1 + 0x20));
      uVar5 = *(undefined8 *)(uVar1 + 0x18);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c113040(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar7;
      func_0x00010c25e080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar5);
      _objc_release(uVar6);
      _objc_release(uVar7);
      func_0x00010c280b40(*(undefined8 *)(uVar1 + 0x20));
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c113040(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfb40c0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfb4120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdd77e0(uVar1);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),1);
      goto LAB_108e0c31c;
    }
    func_0x00010c0a2840(*(undefined8 *)(param_1 + 0x28));
    lVar8 = lStack_68;
    func_0x00010bf3ec40();
    if (lVar8 == 0x69) {
      _objc_release(lStack_68);
      goto LAB_108e0c25c;
    }
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
    _CGFontRelease(uVar3);
    _objc_release(lStack_68);
  }
  else {
LAB_108e0c31c:
    _CGFontRelease(uVar3);
  }
  _objc_release(uVar4);
LAB_108e0c32c:
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 108e0c380; end: 108e0c3ef; -[SCDynamicCaptionFetcherImpl _fontInstalled:] */

undefined8 FUN_108e0c380(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf4b900(uVar2,param_2,param_3);
    func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 108e0c3f0; end: 108e0c413; -[SCDynamicCaptionFetcherImpl _cacheFontFile:forKey:] */

void FUN_108e0c3f0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if ((param_3 != 0) && (param_4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c1d0510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_setObject_dataEncoding_forKey_ex_112651b68,
               param_3,0,param_4,0,0);
    return;
  }
  return;
}



/* Entry: 108e0c414; end: 108e0c553; -[SCDynamicCaptionFetcherImpl fetchAssetFromURLString:completionBlock:] */

void FUN_108e0c414(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0dff40(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108e0c554; end: 108e0c8bb;  */

void FUN_108e0c554(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar5 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar5 != 0) {
    if (param_4 == 0) {
      func_0x00010c0a2880(*(undefined8 *)(param_1 + 0x20));
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078c00();
      if ((((ulong)puVar7 & 1) != 0) ||
         (puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0, func_0x00010c078c00(), (int)puVar7 != 0)) {
        func_0x00010c0a28a0(*(undefined8 *)(param_1 + 0x20));
        goto LAB_108e0c664;
      }
      puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 == (undefined *)0x0) {
        func_0x00010c0a28a0(*(undefined8 *)(param_1 + 0x20));
      }
      else {
        func_0x00010c0a28a0(*(undefined8 *)(param_1 + 0x20));
        puVar4 = PTR_PTR_1126b4960;
        puVar1 = PTR_PTR_1126b19f8;
        func_0x00010bf28e60();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126bbf20;
        func_0x00010bdc1d20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf58700(puVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar1);
        puVar1 = PTR_PTR_1126b7f68;
        func_0x00010c22b6a0(PTR_PTR_1126b7f68);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(lVar5 + 8);
        func_0x00010c11de00(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar10);
        uVar11 = *(undefined8 *)(param_1 + 0x28);
        _objc_retain(uVar11);
        uVar8 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar8);
        func_0x00010c25f560(puVar1);
        _objc_release(uVar9);
        _objc_release(puVar1);
        puVar1 = puVar4;
        func_0x00010c086560(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2193a0(puVar4);
        _objc_release(puVar1);
        _objc_release(uVar8);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(puVar4);
      }
    }
    else {
      func_0x00010c0a2880(*(undefined8 *)(param_1 + 0x20));
      uVar9 = *(undefined8 *)(lVar5 + 8);
      puVar7 = *(undefined **)(param_1 + 0x30);
      _objc_retain(puVar7);
      _objc_retain(param_4);
      func_0x00010c0f7fc0(uVar9);
      _objc_release(param_4);
    }
    _objc_release(puVar7);
  }
LAB_108e0c664:
  _objc_release(lVar5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(param_3 + 0x28);
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108e0c8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x10))(lVar5,*(undefined8 *)(param_3 + 0x20));
  return;
}



/* Entry: 108e0c8bc; end: 108e0c8d7;  */

void FUN_108e0c8bc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108e0c8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 108e0c8d8; end: 108e0c967;  */

void FUN_108e0c8d8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_4);
  func_0x00010c252ee0();
  if (((param_5 == 0) && (param_4 != 0)) && (param_3 == 200)) {
    func_0x00010c0a2820(*(undefined8 *)(param_1 + 0x20));
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 == 0) goto LAB_108e0c954;
    pcVar3 = *(code **)(lVar1 + 0x10);
    lVar2 = param_4;
  }
  else {
    func_0x00010c0a2820(*(undefined8 *)(param_1 + 0x20));
    lVar1 = *(long *)(param_1 + 0x30);
    pcVar3 = *(code **)(lVar1 + 0x10);
    lVar2 = 0;
  }
  (*pcVar3)(lVar1,lVar2);
LAB_108e0c954:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e0c968; end: 108e0cb3f; -[SCDynamicCaptionFetcherImpl loadDependencyOfCaptionStyles:completeBlock:] */

void FUN_108e0c968(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar4 = param_3;
  func_0x00010bf529e0();
  if ((param_4 != 0) && (lVar4 == 0)) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  puVar3 = PTR_PTR_1126b33c0;
  _objc_alloc_init();
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      _objc_retain(puVar3);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c1090a0(param_1);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(puVar3);
      lVar6 = lVar6 + 1;
    } while (lVar4 != lVar6);
    lVar4 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  iVar2 = (int)*(undefined8 *)(param_3 + 0x20);
  func_0x00010bfec280();
  lVar4 = *(long *)(param_3 + 0x28);
  func_0x00010bf529e0();
  if ((lVar4 == iVar2) && (*(long *)(param_3 + 0x30) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108e0cb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_3 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108e0cb40; end: 108e0cb8f;  */

void FUN_108e0cb40(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfec280();
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if ((lVar2 == iVar1) && (*(long *)(param_1 + 0x30) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108e0cb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108e0cb90; end: 108e0cbcb; -[SCDynamicCaptionFetcherImpl clearCache] */

void FUN_108e0cb90(long param_1)

{
  func_0x00010c09faa0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c280b40(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c12aed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeAllObjectsWithBlock__1126285d0,0);
  return;
}



/* Entry: 108e0cbcc; end: 108e0cbd3; -[SCDynamicCaptionFetcherImpl isFontCachedForURL:] */

void FUN_108e0cbcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_contains__1125b06d8);
  return;
}



/* Entry: 108e0cbd4; end: 108e0cc23; -[SCDynamicCaptionFetcherImpl maxLoadingDurationWithGrapheneLogging] */

undefined8 FUN_108e0cbd4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2860(uVar2);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108e0cc24; end: 108e0cc27; -[SCDynamicCaptionFetcherImpl captionResourceFromURL:resourceBlock:] */

void FUN_108e0cc24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa4fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_fetchAssetFromURLString_completi_1125c6d90);
  return;
}



/* Entry: 108e0cc28; end: 108e0cc87; -[SCDynamicCaptionFetcherImpl .cxx_destruct] */

void FUN_108e0cc28(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e0cc88; end: 108e0cc93; -[SCCaptionDataProviderServices .cxx_destruct] */

void FUN_108e0cc88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e0cc94; end: 108e0cdc7;  */

void FUN_108e0cc94(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar3 = param_1;
    func_0x00010bf40c40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar6 = PTR_PTR_1126dc008;
    _objc_alloc(PTR_PTR_1126dc008);
    lVar3 = param_1;
    func_0x00010bf41300(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf41400();
    uVar1 = 3;
    if (lVar5 != 0x7bf02fb1) {
      uVar1 = lVar5 == 0x3f26f14;
    }
    uVar2 = 2;
    if (lVar5 != -0x7678639d) {
      uVar2 = uVar1;
    }
    lVar5 = param_1;
    func_0x00010bf41440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf41020(param_1);
    func_0x00010bfffc80(puVar6,param_2,lVar4,lVar3,uVar2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108e0cdc8; end: 108e0cdd7;  */

void FUN_108e0cdc8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf414d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithARGBHexString__1125aded8,param_2);
  return;
}



/* Entry: 108e0cdd8; end: 108e0cf9f;  */

void FUN_108e0cdd8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf416c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126dc010;
    _objc_alloc_init(PTR_PTR_1126dc010);
    puVar4 = puVar3;
    func_0x00010c17e800();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bf41360(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c17e9e0(puVar4,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bf413c0();
    if (lVar6 - 1U < 3) {
      uVar10 = *(undefined8 *)(&UNK_10dfa37e8 + (lVar6 - 1U) * 8);
    }
    else {
      uVar10 = 0xffffffffb54ecf33;
    }
    puVar7 = puVar5;
    func_0x00010c17eaa0(puVar5,param_2,uVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bf41420(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c17eac0(puVar7,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf41000(param_1);
    puVar9 = puVar8;
    func_0x00010c17e920(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(lVar6);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(lVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 108e0cfa0; end: 108e0cfa7;  */

void FUN_108e0cfa0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf09c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_argbHexString_1125a00b8);
  return;
}



/* Entry: 108e0cfa8; end: 108e0d07b;  */

void FUN_108e0cfa8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126dc018;
  puVar4 = (undefined *)0x0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_alloc(puVar1);
    lVar2 = param_2;
    func_0x00010bf40c40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_108e0cc94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2beb40(param_2);
    uVar5 = param_1;
    func_0x00010c2bed60(param_2);
    uVar6 = uVar5;
    func_0x00010c11efa0(param_2);
    _objc_release(param_2);
    func_0x00010bfffbc0(param_1,uVar5,uVar6,puVar1,param_3,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar4 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e0d07c; end: 108e0d1c3;  */

void FUN_108e0d07c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126dc020;
  puVar8 = (undefined *)0x0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_alloc_init(puVar1);
    lVar2 = param_2;
    func_0x00010bf40c40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_108e0cdd8();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c17e800(puVar1,param_3,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bea40(param_2);
    puVar5 = puVar4;
    func_0x00010c227680(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bec60(param_2);
    puVar6 = puVar5;
    func_0x00010c227840(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11ef60(param_2);
    _objc_release(param_2);
    puVar7 = puVar6;
    func_0x00010c1e6ec0(param_1,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108e0d1c4; end: 108e0d1d3;  */

void FUN_108e0d1c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126dc018;
  puVar4 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    lVar2 = param_3;
    func_0x00010bf40c40(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_108e0cc94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2beb40(param_3);
    uVar5 = param_1;
    func_0x00010c2bed60(param_3);
    uVar6 = uVar5;
    func_0x00010c11efa0(param_3);
    _objc_release(param_3);
    func_0x00010bfffbc0(param_1,uVar5,uVar6,puVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar4 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e0d1d4; end: 108e0dda3;  */

void FUN_108e0d1d4(undefined8 param_1,undefined **param_2,ulong param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined **ppuVar27;
  undefined *puVar28;
  long lVar29;
  undefined **ppuVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined **ppuVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined **ppuStack_d8;
  
  lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar1 = param_2;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  _objc_release(ppuVar1);
  puVar35 = (undefined *)0x0;
  if (ppuVar2 == (undefined **)0x0) goto LAB_108e0dd4c;
  ppuVar1 = param_2;
  func_0x00010bfb40c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (ppuVar1 == (undefined **)0x0) {
    puVar35 = (undefined *)0x0;
  }
  else {
    puVar35 = PTR_PTR_1126dc038;
    _objc_alloc();
    if ((param_3 & 1) == 0) {
      ppuStack_d8 = ppuVar1;
      func_0x00010bfb3f20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuStack_d8 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    ppuVar2 = ppuVar1;
    func_0x00010bfb4140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb4080(ppuVar1);
    uVar37 = param_1;
    func_0x00010c0cd740(ppuVar1);
    uVar38 = uVar37;
    func_0x00010bfb3be0(ppuVar1);
    ppuVar3 = ppuVar1;
    uVar39 = uVar38;
    func_0x00010bfb3c40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    FUN_108e0cc94();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar1;
    func_0x00010bf1fb20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    FUN_108e0cc94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26ca20();
    func_0x00010c26bb40();
    func_0x00010c26b780();
    ppuVar7 = ppuVar1;
    func_0x00010c26c7a0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar34 = (undefined **)0x0;
    }
    else {
      ppuVar34 = ppuVar7;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar8 = ppuVar1;
    func_0x00010c0f0ba0();
    _objc_retainAutoreleasedReturnValue();
    puVar36 = PTR_PTR_1126dc028;
    if (ppuVar8 == (undefined **)0x0) {
      puVar36 = (undefined *)0x0;
    }
    else {
      _objc_retain(ppuVar8);
      _objc_alloc();
      func_0x00010c275080(ppuVar8);
      uVar42 = uVar39;
      func_0x00010c08eae0(ppuVar8);
      uVar40 = uVar42;
      func_0x00010c140dc0(ppuVar8);
      uVar41 = uVar40;
      func_0x00010bf20740(ppuVar8);
      _objc_release(ppuVar8);
      func_0x00010c0542a0(uVar39,uVar42,uVar40,uVar41);
    }
    func_0x00010c0989e0(ppuVar1);
    uVar42 = uVar39;
    func_0x00010c0992e0(ppuVar1);
    ppuVar9 = ppuVar1;
    func_0x00010bf14160();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf143c0();
    func_0x00010c013ba0(param_1,uVar37,uVar38,uVar39,uVar42);
    _objc_release(ppuVar9);
    _objc_release(puVar36);
    _objc_release(ppuVar8);
    _objc_release(ppuVar34);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    if ((param_3 & 1) == 0) {
      _objc_release(ppuStack_d8);
    }
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  ppuVar1 = param_2;
  func_0x00010bf144e0();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = PTR_PTR_1126dc048;
  if (ppuVar1 == (undefined **)0x0) {
    puVar36 = (undefined *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    _objc_alloc();
    ppuVar2 = ppuVar1;
    func_0x00010bf40c40(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    FUN_108e0cc94();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar1;
    func_0x00010bf20d60(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    FUN_108e0cfa8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1fc00(ppuVar1);
    _objc_release(ppuVar1);
    func_0x00010bff63e0(param_1);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
  }
  _objc_release(ppuVar1);
  ppuVar1 = param_2;
  func_0x00010bf15ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (ppuVar2 < (undefined **)0x6) {
    _objc_release(ppuVar1);
    _objc_release(ppuVar1);
LAB_108e0d87c:
    puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c08fa60();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063c0();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = puVar11;
    func_0x00010bf99aa0();
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(ppuVar1);
    _objc_release(ppuVar1);
    puVar10 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if ((int)puVar31 == 0) goto LAB_108e0d87c;
    ppuVar1 = param_2;
    func_0x00010bf15ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf414c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
  func_0x00010c27dde0();
  ppuVar1 = param_2;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c071ae0();
  _objc_release(ppuVar1);
  puVar11 = puVar35;
  puVar31 = puVar36;
  if ((int)ppuVar2 != 0) {
    puVar12 = PTR_PTR_1126dc008;
    _objc_alloc();
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfffc80(0);
    _objc_release(puVar31);
    _objc_release(puVar11);
    puVar33 = PTR_PTR_1126dc008;
    _objc_alloc();
    puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41580();
    _objc_retainAutoreleasedReturnValue();
    puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfffc80(0);
    _objc_release(puVar31);
    _objc_release(puVar11);
    puVar13 = PTR_PTR_1126dc028;
    _objc_alloc();
    uVar42 = 0x4039000000000000;
    func_0x00010c0542a0(0x4039000000000000,0x4034000000000000,0x4034000000000000,0x4014000000000000)
    ;
    puVar11 = PTR_PTR_1126dc038;
    _objc_alloc();
    puVar31 = puVar35;
    func_0x00010bfb3f20(puVar35);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar35;
    func_0x00010bfb4120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb4000(puVar35);
    uVar37 = uVar42;
    func_0x00010c0cd720(puVar35);
    uVar38 = uVar37;
    func_0x00010c26ca00(puVar35);
    func_0x00010c26bb00(puVar35);
    func_0x00010c26b7a0();
    puVar15 = puVar35;
    func_0x00010c26c7e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0989c0(puVar35);
    uVar39 = uVar38;
    func_0x00010c099280(puVar35);
    puVar16 = puVar35;
    func_0x00010bf14140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf143a0();
    func_0x00010c013ba0(uVar42,uVar37,0x3ff0000000000000,uVar38,uVar39);
    _objc_release(puVar35);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar31);
    puVar31 = PTR_PTR_1126dc048;
    _objc_alloc();
    puVar35 = puVar36;
    func_0x00010bf13d40(puVar36);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar36;
    func_0x00010bf20d60(puVar36);
    _objc_retainAutoreleasedReturnValue();
    param_1 = 0x4034000000000000;
    func_0x00010bff63e0(0x4034000000000000);
    _objc_release(puVar36);
    _objc_release(puVar14);
    _objc_release(puVar35);
    _objc_release(puVar13);
    _objc_release(puVar33);
    _objc_release(puVar12);
  }
  puVar35 = PTR_PTR_1126dc058;
  _objc_alloc();
  ppuVar1 = param_2;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf40d40(param_2);
  func_0x00010c04eda0();
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(puVar10);
  _objc_release(puVar31);
  _objc_release(puVar11);
LAB_108e0dd4c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar29) {
    ___stack_chk_fail();
    _objc_retain();
    ppuVar1 = param_2;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c08fa60();
    _objc_release(ppuVar1);
    if (ppuVar2 == (undefined **)0x0) {
      puVar35 = (undefined *)0x0;
    }
    else {
      puVar36 = PTR_PTR_1126dc060;
      _objc_alloc_init();
      ppuVar1 = param_2;
      func_0x00010c25e080();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar36;
      func_0x00010c20eb00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_2;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c18fca0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_2;
      func_0x00010bfb40c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      if (ppuVar3 == (undefined **)0x0) {
        puVar31 = (undefined *)0x0;
      }
      else {
        puVar35 = PTR_PTR_1126dc040;
        _objc_alloc_init();
        ppuVar4 = ppuVar3;
        func_0x00010bfb3f20();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar35;
        func_0x00010c19e560();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar3;
        func_0x00010bfb4120();
        _objc_retainAutoreleasedReturnValue();
        puVar33 = puVar12;
        func_0x00010c19e660();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb4000(ppuVar3);
        puVar13 = puVar33;
        func_0x00010c19e600();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0cd720(ppuVar3);
        puVar14 = puVar13;
        func_0x00010c1c7bc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb3bc0(ppuVar3);
        puVar15 = puVar14;
        func_0x00010c19e4e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar3;
        func_0x00010c26b920();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar6;
        FUN_108e0cdd8();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar15;
        func_0x00010c19e500();
        _objc_retainAutoreleasedReturnValue();
        ppuVar34 = ppuVar3;
        func_0x00010bf1fb20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar34;
        FUN_108e0cdd8();
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar16;
        func_0x00010c173280();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26ca00();
        puVar18 = puVar17;
        func_0x00010c2138a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26bb00();
        puVar19 = puVar18;
        func_0x00010c213280();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26b7a0();
        puVar20 = puVar19;
        func_0x00010c213020();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar3;
        func_0x00010c26c7e0();
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar9 == (undefined **)0x0) {
          ppuVar30 = (undefined **)0x0;
        }
        else {
          ppuVar30 = ppuVar9;
          func_0x00010c0b8600();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar21 = puVar20;
        func_0x00010c213700();
        _objc_retainAutoreleasedReturnValue();
        ppuVar22 = ppuVar3;
        func_0x00010c26c540();
        _objc_retainAutoreleasedReturnValue();
        puVar31 = PTR_PTR_1126dc030;
        if (ppuVar22 == (undefined **)0x0) {
          puVar32 = (undefined *)0x0;
        }
        else {
          _objc_retain(ppuVar22);
          _objc_alloc_init();
          func_0x00010c274800(ppuVar22);
          puVar23 = puVar31;
          func_0x00010c2176c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c08e8a0(ppuVar22);
          puVar24 = puVar23;
          func_0x00010c1ba380();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c140ce0(ppuVar22);
          puVar25 = puVar24;
          func_0x00010c1ee280();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf203c0(ppuVar22);
          _objc_release(ppuVar22);
          puVar26 = puVar25;
          func_0x00010c1737e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar32 = puVar26;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar26);
          _objc_release(puVar25);
          _objc_release(puVar24);
          _objc_release(puVar23);
          _objc_release(puVar31);
        }
        puVar23 = puVar21;
        func_0x00010c1d7e40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0989c0(ppuVar3);
        puVar24 = puVar23;
        func_0x00010c1bd7e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c099280(ppuVar3);
        puVar25 = puVar24;
        func_0x00010c1bdc20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar27 = ppuVar3;
        func_0x00010bf14140(ppuVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar26 = puVar25;
        func_0x00010c16e7a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf143a0();
        puVar28 = puVar26;
        func_0x00010c16e860();
        _objc_retainAutoreleasedReturnValue();
        puVar31 = puVar28;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar28);
        _objc_release(puVar26);
        _objc_release(ppuVar27);
        _objc_release(puVar25);
        _objc_release(puVar24);
        _objc_release(puVar23);
        _objc_release(puVar32);
        _objc_release(ppuVar22);
        _objc_release(puVar21);
        _objc_release(ppuVar30);
        _objc_release(ppuVar9);
        _objc_release(puVar20);
        _objc_release(puVar19);
        _objc_release(puVar18);
        _objc_release(puVar17);
        _objc_release(ppuVar8);
        _objc_release(ppuVar34);
        _objc_release(puVar16);
        _objc_release(ppuVar7);
        _objc_release(ppuVar6);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar13);
        _objc_release(puVar33);
        _objc_release(ppuVar5);
        _objc_release(puVar12);
        _objc_release(ppuVar4);
        _objc_release(puVar35);
      }
      _objc_release(ppuVar3);
      puVar12 = puVar11;
      func_0x00010c19e620();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = param_2;
      func_0x00010bf144e0();
      _objc_retainAutoreleasedReturnValue();
      puVar35 = PTR_PTR_1126dc050;
      if (ppuVar4 == (undefined **)0x0) {
        puVar33 = (undefined *)0x0;
      }
      else {
        _objc_retain(ppuVar4);
        _objc_alloc_init();
        ppuVar5 = ppuVar4;
        func_0x00010bf13d40(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar5;
        FUN_108e0cdd8();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar35;
        func_0x00010c17e800(puVar35);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar4;
        func_0x00010bf20d60(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar34 = ppuVar7;
        FUN_108e0d07c();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010c173a20(puVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1fbe0(ppuVar4);
        _objc_release(ppuVar4);
        puVar15 = puVar14;
        func_0x00010c173320(param_1,puVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar33 = puVar15;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(ppuVar34);
        _objc_release(ppuVar7);
        _objc_release(puVar13);
        _objc_release(ppuVar6);
        _objc_release(ppuVar5);
        _objc_release(puVar35);
      }
      puVar13 = puVar12;
      func_0x00010c16e900(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06ebe0(param_2);
      puVar14 = puVar13;
      func_0x00010c17e8e0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = param_2;
      func_0x00010bf15ec0(param_2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar5;
      func_0x00010bf09c40();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010c16f2c0(puVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25e260();
      puVar16 = puVar15;
      func_0x00010c21ace0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar35 = puVar16;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar33);
      _objc_release(ppuVar4);
      _objc_release(puVar12);
      _objc_release(puVar31);
      _objc_release(ppuVar3);
      _objc_release(puVar11);
      _objc_release(ppuVar2);
      _objc_release(puVar10);
      _objc_release(ppuVar1);
      _objc_release(puVar36);
    }
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar35);
  return;
}



/* Entry: 108e0dda4; end: 108e0e67b;  */

void FUN_108e0dda4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  undefined *puVar31;
  undefined8 uVar32;
  long lVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar37 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126dc060;
    _objc_alloc_init();
    lVar1 = param_2;
    func_0x00010c25e080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c20eb00(puVar3,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c18fca0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_2;
    func_0x00010bfb40c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (lVar6 == 0) {
      puVar34 = (undefined *)0x0;
    }
    else {
      puVar37 = PTR_PTR_1126dc040;
      _objc_alloc_init();
      lVar7 = lVar6;
      func_0x00010bfb3f20();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar37;
      func_0x00010c19e560(puVar37,param_3,lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar6;
      func_0x00010bfb4120();
      _objc_retainAutoreleasedReturnValue();
      puVar36 = puVar8;
      func_0x00010c19e660(puVar8,param_3,lVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb4000(lVar6);
      puVar10 = puVar36;
      func_0x00010c19e600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cd720(lVar6);
      puVar11 = puVar10;
      func_0x00010c1c7bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb3bc0(lVar6);
      puVar12 = puVar11;
      func_0x00010c19e4e0();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar6;
      func_0x00010c26b920();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      FUN_108e0cdd8();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar12;
      func_0x00010c19e500();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar6;
      func_0x00010bf1fb20();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar16;
      FUN_108e0cdd8();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar15;
      func_0x00010c173280();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar6;
      func_0x00010c26ca00();
      if (lVar19 - 1U < 3) {
        uVar32 = *(undefined8 *)(&UNK_10dfa3800 + (lVar19 - 1U) * 8);
      }
      else {
        uVar32 = 0xffffffff9f3c7b6f;
      }
      puVar20 = puVar18;
      func_0x00010c2138a0(puVar18,param_3,uVar32);
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar6;
      func_0x00010c26bb00();
      if (lVar19 - 1U < 4) {
        uVar32 = *(undefined8 *)(&UNK_10dfa3818 + (lVar19 - 1U) * 8);
      }
      else {
        uVar32 = 0x7ef1a8ed;
      }
      puVar21 = puVar20;
      func_0x00010c213280(puVar20,param_3,uVar32);
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar6;
      func_0x00010c26b7a0();
      if (lVar19 - 1U < 3) {
        uVar32 = *(undefined8 *)(&UNK_10dfa3838 + (lVar19 - 1U) * 8);
      }
      else {
        uVar32 = 0xffffffffc9ddb1e6;
      }
      puVar22 = puVar21;
      func_0x00010c213020(puVar21,param_3,uVar32);
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar6;
      func_0x00010c26c7e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar19 == 0) {
        lVar33 = 0;
      }
      else {
        lVar33 = lVar19;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar23 = puVar22;
      func_0x00010c213700(puVar22,param_3,lVar33);
      _objc_retainAutoreleasedReturnValue();
      lVar24 = lVar6;
      func_0x00010c26c540();
      _objc_retainAutoreleasedReturnValue();
      puVar34 = PTR_PTR_1126dc030;
      if (lVar24 == 0) {
        puVar35 = (undefined *)0x0;
      }
      else {
        _objc_retain(lVar24);
        _objc_alloc_init();
        func_0x00010c274800(lVar24);
        puVar25 = puVar34;
        func_0x00010c2176c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08e8a0(lVar24);
        puVar26 = puVar25;
        func_0x00010c1ba380();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c140ce0(lVar24);
        puVar27 = puVar26;
        func_0x00010c1ee280();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf203c0(lVar24);
        _objc_release(lVar24);
        puVar28 = puVar27;
        func_0x00010c1737e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar35 = puVar28;
        func_0x00010bf21f60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar28);
        _objc_release(puVar27);
        _objc_release(puVar26);
        _objc_release(puVar25);
        _objc_release(puVar34);
      }
      puVar25 = puVar23;
      func_0x00010c1d7e40(puVar23,param_3,puVar35);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0989c0(lVar6);
      puVar26 = puVar25;
      func_0x00010c1bd7e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c099280(lVar6);
      puVar27 = puVar26;
      func_0x00010c1bdc20();
      _objc_retainAutoreleasedReturnValue();
      lVar29 = lVar6;
      func_0x00010bf14140(lVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar28 = puVar27;
      func_0x00010c16e7a0(puVar27,param_3,lVar29);
      _objc_retainAutoreleasedReturnValue();
      lVar30 = lVar6;
      func_0x00010bf143a0();
      if (lVar30 - 1U < 6) {
        uVar32 = *(undefined8 *)(&UNK_10dfa3850 + (lVar30 - 1U) * 8);
      }
      else {
        uVar32 = 0x171f8f7;
      }
      puVar31 = puVar28;
      func_0x00010c16e860(puVar28,param_3,uVar32);
      _objc_retainAutoreleasedReturnValue();
      puVar34 = puVar31;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar31);
      _objc_release(puVar28);
      _objc_release(lVar29);
      _objc_release(puVar27);
      _objc_release(puVar26);
      _objc_release(puVar25);
      _objc_release(puVar35);
      _objc_release(lVar24);
      _objc_release(puVar23);
      _objc_release(lVar33);
      _objc_release(lVar19);
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(puVar20);
      _objc_release(puVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(puVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar36);
      _objc_release(lVar9);
      _objc_release(puVar8);
      _objc_release(lVar7);
      _objc_release(puVar37);
    }
    _objc_release(lVar6);
    puVar8 = puVar5;
    func_0x00010c19e620(puVar5,param_3,puVar34);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_2;
    func_0x00010bf144e0();
    _objc_retainAutoreleasedReturnValue();
    puVar37 = PTR_PTR_1126dc050;
    if (lVar7 == 0) {
      puVar36 = (undefined *)0x0;
    }
    else {
      _objc_retain(lVar7);
      _objc_alloc_init();
      lVar9 = lVar7;
      func_0x00010bf13d40(lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar9;
      FUN_108e0cdd8();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar37;
      func_0x00010c17e800(puVar37,param_3,lVar13);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar7;
      func_0x00010bf20d60(lVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar14;
      FUN_108e0d07c();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c173a20(puVar10,param_3,lVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1fbe0(lVar7);
      _objc_release(lVar7);
      puVar12 = puVar11;
      func_0x00010c173320(param_1,puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar36 = puVar12;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(lVar16);
      _objc_release(lVar14);
      _objc_release(puVar10);
      _objc_release(lVar13);
      _objc_release(lVar9);
      _objc_release(puVar37);
    }
    puVar10 = puVar8;
    func_0x00010c16e900(puVar8,param_3,puVar36);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_2;
    func_0x00010c06ebe0(param_2);
    puVar11 = puVar10;
    func_0x00010c17e8e0(puVar10,param_3,lVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_2;
    func_0x00010bf15ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar9;
    func_0x00010bf09c40();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c16f2c0(puVar11,param_3,lVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_2;
    func_0x00010c25e260();
    if (lVar14 - 1U < 7) {
      uVar32 = *(undefined8 *)(&UNK_10dfa3880 + (lVar14 - 1U) * 8);
    }
    else {
      uVar32 = 0x3d3f922f;
    }
    puVar15 = puVar12;
    func_0x00010c21ace0(puVar12,param_3,uVar32);
    _objc_retainAutoreleasedReturnValue();
    puVar37 = puVar15;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar12);
    _objc_release(lVar13);
    _objc_release(lVar9);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar36);
    _objc_release(lVar7);
    _objc_release(puVar8);
    _objc_release(puVar34);
    _objc_release(lVar6);
    _objc_release(puVar5);
    _objc_release(lVar2);
    _objc_release(puVar4);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar37);
  return;
}



/* Entry: 108e0e67c; end: 108e0e79f;  */

void FUN_108e0e67c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf8b600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf303a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_108e0d1d4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010befcf40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126dbfe0;
  _objc_alloc(PTR_PTR_1126dbfe0);
  func_0x00010c03a080();
  _objc_release(uVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e0e7a0; end: 108e0e7ef;  */

void FUN_108e0e7a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf303a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  FUN_108e0d1d4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e0e7f0; end: 108e0fb33;  */

void FUN_108e0e7f0(undefined *param_1,undefined8 param_2,undefined *param_3,int param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  puVar2 = param_1;
  func_0x00010c25cd40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010c08fa60();
  lStack_70 = 0;
  lStack_68 = 0;
  if (puVar2 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    uVar15 = *(undefined8 *)PTR__NSUnderlineStyleAttributeName_110345880;
    uVar13 = *(undefined8 *)PTR__NSStrokeColorAttributeName_110345868;
    uVar16 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    uVar18 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    uVar17 = *(undefined8 *)PTR__NSBackgroundColorAttributeName_1103457b8;
    uVar9 = *(undefined8 *)PTR__NSStrokeWidthAttributeName_110345870;
    uVar10 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
    uVar11 = *(undefined8 *)PTR__NSLigatureAttributeName_110345810;
    uVar12 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    do {
      puVar3 = param_1;
      func_0x00010bf0e760(param_1,param_2,puVar8,&lStack_70);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar8 != (undefined *)0x0) {
        puVar8 = puVar3;
        func_0x00010c0e00e0(puVar3,param_2,uVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6f20(puVar1,param_2,uVar15,puVar8,lStack_70,lStack_68);
        _objc_release(puVar8);
        puVar8 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        puVar4 = puVar3;
        func_0x00010c0e00e0(puVar3,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bee2ca0(puVar8,param_2,puVar3,puVar1,puVar4,lStack_70,lStack_68);
        _objc_release(puVar4);
      }
      if (param_4 != 0) {
        puVar8 = puVar3;
        func_0x00010c0e00e0(puVar3,param_2,uVar16);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar8 != (undefined *)0x0) {
          puVar8 = puVar3;
          func_0x00010c0e00e0(puVar3,param_2,uVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef6f20(puVar1,param_2,uVar16,puVar8,lStack_70,lStack_68);
          _objc_release(puVar8);
        }
        puVar8 = puVar3;
        func_0x00010c0e00e0(puVar3,param_2,uVar18);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar8 != (undefined *)0x0) {
          puVar8 = puVar3;
          func_0x00010c0e00e0(puVar3,param_2,uVar18);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef6f20(puVar1,param_2,uVar18,puVar8,lStack_70,lStack_68);
          _objc_release(puVar8);
        }
        puVar8 = puVar3;
        func_0x00010c0e00e0(puVar3,param_2,uVar17);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar8 != (undefined *)0x0) {
          puVar8 = puVar3;
          func_0x00010c0e00e0(puVar3,param_2,uVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef6f20(puVar1,param_2,uVar17,puVar8,lStack_70,lStack_68);
          _objc_release(puVar8);
        }
        puVar8 = puVar3;
        func_0x00010c0e00e0(puVar3,param_2,uVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar8 != (undefined *)0x0) {
          puVar8 = puVar3;
          func_0x00010c0e00e0(puVar3,param_2,uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef6f20(puVar1,param_2,uVar9,puVar8,lStack_70,lStack_68);
          _objc_release(puVar8);
        }
        puVar8 = puVar3;
        func_0x00010c0e00e0(puVar3,param_2,uVar13);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar8 != (undefined *)0x0) {
          puVar8 = puVar3;
          func_0x00010c0e00e0(puVar3,param_2,uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef6f20(puVar1,param_2,uVar13,puVar8,lStack_70,lStack_68);
          _objc_release(puVar8);
        }
        puVar8 = puVar3;
        func_0x00010c0e00e0(puVar3,param_2,uVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar8 != (undefined *)0x0) {
          puVar8 = puVar3;
          func_0x00010c0e00e0(puVar3,param_2,uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef6f20(puVar1,param_2,uVar10,puVar8,lStack_70,lStack_68);
          _objc_release(puVar8);
        }
        puVar8 = puVar3;
        func_0x00010c0e00e0(puVar3,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar8 != (undefined *)0x0) {
          puVar8 = puVar3;
          func_0x00010c0e00e0(puVar3,param_2,uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef6f20(puVar1,param_2,uVar11,puVar8,lStack_70,lStack_68);
          _objc_release(puVar8);
        }
      }
      puVar8 = puVar3;
      func_0x00010c0e00e0(puVar3,param_2,uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar8 != (undefined *)0x0) {
        puVar4 = puVar3;
        func_0x00010c0e00e0(puVar3,param_2,uVar12);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puVar5 = param_1;
        func_0x00010c25cd40(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c260c80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071760(puVar8,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar5);
        if (param_5 == 0) {
          uVar14 = 0;
        }
        else {
          puVar5 = puVar4;
          func_0x00010bfa0820();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = param_3;
          func_0x00010bfa0820(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar5;
          func_0x00010c0720c0(puVar5,param_2,puVar6);
          uVar14 = (uint)puVar7 ^ 1;
          _objc_release(puVar6);
          _objc_release(puVar5);
        }
        if ((((uint)puVar8 | uVar14) & 1) == 0) {
          puVar8 = puVar4;
          func_0x00010c14d220();
          if ((param_4 == 0) || ((int)puVar8 == 0)) {
            func_0x00010c102de0(param_3);
            puVar8 = param_3;
            goto LAB_108e0edbc;
          }
          func_0x00010c14d200(puVar4);
          func_0x00010c14d1e0();
          puVar8 = param_3;
          func_0x00010bfb3ce0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar8;
          func_0x00010bfb3d60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
          if (puVar5 == (undefined *)0x0) {
            func_0x00010c102de0(param_3);
            puVar8 = param_3;
            func_0x00010bfb41c0(param_3);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010c102de0(param_3);
            func_0x00010bfb4160(puVar8,param_2,puVar5);
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(puVar5);
        }
        else {
          func_0x00010c102de0(param_3);
          puVar8 = puVar4;
LAB_108e0edbc:
          func_0x00010bfb41c0(puVar8);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010bef6f20(puVar1,param_2,uVar12,puVar8,lStack_70,lStack_68);
        _objc_release(puVar8);
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
      puVar8 = (undefined *)(lStack_68 + lStack_70);
    } while (puVar8 < puVar2);
  }
  func_0x00010bed7600(PTR__OBJC_CLASS___NSAttributedString_1126af068,param_2,param_1,puVar1);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e0fb34; end: 108e0ff77;  */

void FUN_108e0fb34(double param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_80;
  long lStack_78;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  uVar2 = param_2;
  func_0x00010c25cd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c08fa60();
  lStack_80 = 0;
  lStack_78 = 0;
  if (uVar2 != 0) {
    uVar5 = 0;
    uVar9 = *(undefined8 *)PTR__NSUnderlineStyleAttributeName_110345880;
    uVar10 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
    uVar11 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
    uVar12 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    uVar13 = *(undefined8 *)PTR__NSBackgroundColorAttributeName_1103457b8;
    uVar14 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
    uVar8 = *(undefined8 *)PTR__NSLigatureAttributeName_110345810;
    uVar6 = *(undefined8 *)PTR__NSStrokeWidthAttributeName_110345870;
    uVar7 = *(undefined8 *)PTR__NSStrokeColorAttributeName_110345868;
    do {
      uVar3 = param_2;
      func_0x00010bf0e760(param_2,param_3,uVar5,&lStack_80);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar5 != 0) {
        uVar5 = uVar3;
        func_0x00010c0e00e0(uVar3,param_3,uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6f20(puVar1,param_3,uVar9,uVar5,lStack_80,lStack_78);
        _objc_release(uVar5);
        func_0x00010bee2ca0(PTR__OBJC_CLASS___NSAttributedString_1126af068,param_3,uVar3,puVar1,
                            param_4,lStack_80,lStack_78);
      }
      uVar5 = uVar3;
      func_0x00010c0e00e0(uVar3,param_3,uVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar5 != 0) {
        uVar5 = uVar3;
        func_0x00010c0e00e0(uVar3,param_3,uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6f20(puVar1,param_3,uVar10,uVar5,lStack_80,lStack_78);
        _objc_release(uVar5);
      }
      uVar5 = uVar3;
      func_0x00010c0e00e0(uVar3,param_3,uVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar5 != 0) {
        uVar5 = uVar3;
        func_0x00010c0e00e0(uVar3,param_3,uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6f20(puVar1,param_3,uVar11,uVar5,lStack_80,lStack_78);
        _objc_release(uVar5);
      }
      uVar5 = uVar3;
      func_0x00010c0e00e0(uVar3,param_3,uVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar5 != 0) {
        uVar5 = uVar3;
        func_0x00010c0e00e0(uVar3,param_3,uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6f20(puVar1,param_3,uVar12,uVar5,lStack_80,lStack_78);
        _objc_release(uVar5);
      }
      uVar5 = uVar3;
      func_0x00010c0e00e0(uVar3,param_3,uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar5 != 0) {
        uVar5 = uVar3;
        func_0x00010c0e00e0(uVar3,param_3,uVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6f20(puVar1,param_3,uVar13,uVar5,lStack_80,lStack_78);
        _objc_release(uVar5);
      }
      uVar5 = uVar3;
      func_0x00010c0e00e0(uVar3,param_3,uVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar5 != 0) {
        uVar5 = uVar3;
        func_0x00010c0e00e0(uVar3,param_3,uVar14);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6f20(puVar1,param_3,uVar14,uVar5,lStack_80,lStack_78);
        _objc_release(uVar5);
      }
      uVar5 = uVar3;
      func_0x00010c0e00e0(uVar3,param_3,uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar5 != 0) {
        uVar5 = uVar3;
        func_0x00010c0e00e0(uVar3,param_3,uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6f20(puVar1,param_3,uVar8,uVar5,lStack_80,lStack_78);
        _objc_release(uVar5);
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(-param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6f20(puVar1,param_3,uVar6,puVar4,lStack_80,lStack_78);
      _objc_release(puVar4);
      func_0x00010bef6f20(puVar1,param_3,uVar7,param_4,lStack_80,lStack_78);
      _objc_release(uVar3);
      uVar5 = lStack_78 + lStack_80;
    } while (uVar5 < uVar2);
  }
  func_0x00010bed7600(PTR__OBJC_CLASS___NSAttributedString_1126af068,param_3,param_2,puVar1);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e0ff78; end: 108e105f3;  */

void FUN_108e0ff78(ulong param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uStack_70;
  ulong uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  func_0x00010c04e820();
  uVar2 = param_1;
  func_0x00010c08fa60();
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x00010c08fa60();
  uVar3 = param_5;
  func_0x00010c08fa60();
  uVar4 = param_5;
  func_0x00010c08fa60();
  uVar5 = uVar2;
  if (uVar4 <= uVar2) {
    uVar5 = uVar4;
  }
  if (uVar5 != 0) {
    do {
      uVar5 = param_1;
      func_0x00010bf0e760();
      _objc_retainAutoreleasedReturnValue();
      if (((uStack_68 + uStack_70 == uVar2) ||
          (uVar4 = param_5, func_0x00010c08fa60(), uVar4 <= uStack_68 + uStack_70)) &&
         ((param_3 != 0 || (uVar4 = param_5, func_0x00010c08fa60(), uVar4 < uVar2)))) {
        uStack_68 = param_5;
        func_0x00010c08fa60();
        uStack_68 = uStack_68 - uStack_70;
        FUN_108e3ebf0(uStack_70,uStack_68,param_5);
      }
      uVar4 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if ((uVar4 != 0) && ((param_3 == 0 || (uStack_70 != param_4)))) {
        if ((param_3 != 0) && (param_4 < uStack_70)) {
          uVar6 = param_5;
          func_0x00010c08fa60();
          uVar4 = uStack_68;
          if (uVar6 - uStack_70 <= uStack_68) {
            uVar4 = uVar6 - uStack_70;
          }
          FUN_108e3ebf0((uVar3 - uVar2) + uStack_70,uVar4,param_5);
        }
        uVar4 = uVar5;
        func_0x00010c0e00e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6f20(puVar1);
        _objc_release(uVar4);
        puVar8 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        uVar4 = uVar5;
        func_0x00010c0e00e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bee2ca0(puVar8);
        _objc_release(uVar4);
      }
      uVar4 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 != 0) {
        uVar4 = param_5;
        func_0x00010c260c80(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071760();
        _objc_release(uVar4);
        uVar4 = uVar5;
        func_0x00010c0e00e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6f20(puVar1);
        _objc_release(uVar4);
      }
      uVar4 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 != 0) {
        uVar4 = uVar5;
        func_0x00010c0e00e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6f20(puVar1);
        _objc_release(uVar4);
      }
      uVar4 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 != 0) {
        uVar4 = uVar5;
        func_0x00010c0e00e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_5;
        func_0x00010c260c80(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c071760();
        _objc_release(uVar6);
        func_0x00010bef6f20(puVar1);
        _objc_release(uVar4);
      }
      uVar4 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 != 0) {
        uVar4 = uVar5;
        func_0x00010c0e00e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6f20(puVar1);
        _objc_release(uVar4);
      }
      uVar4 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 != 0) {
        uVar4 = uVar5;
        func_0x00010c0e00e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6f20(puVar1);
        _objc_release(uVar4);
      }
      uVar4 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 != 0) {
        uVar4 = uVar5;
        func_0x00010c0e00e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef6f20(puVar1);
        _objc_release(uVar4);
      }
      _objc_release(uVar5);
      uVar4 = param_5;
      func_0x00010c08fa60();
      uVar5 = uVar2;
      if (uVar4 <= uVar2) {
        uVar5 = uVar4;
      }
    } while (uStack_68 + uStack_70 < uVar5);
  }
  if (param_3 != 0) {
    lVar7 = param_3;
    func_0x00010c08fa60(param_3);
    FUN_108e3ebf0(param_4,lVar7 + -1,param_5);
    func_0x00010bef6f20(puVar1);
    func_0x00010bf0e760(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    uVar5 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee2ca0(puVar8);
    _objc_release(uVar5);
    _objc_release(param_1);
  }
  func_0x00010bed7600(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  puVar8 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 108e105f4; end: 108e10697;  */

void FUN_108e105f4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  uVar1 = param_1;
  func_0x00010c08fa60();
  lStack_40 = 0;
  lStack_38 = 0;
  if (uVar1 != 0) {
    uVar3 = 0;
    uVar4 = *(undefined8 *)PTR__NSUnderlineStyleAttributeName_110345880;
    do {
      uVar2 = param_1;
      func_0x00010bf0dde0(param_1,param_2,uVar4,uVar3,&lStack_40);
      _objc_retainAutoreleasedReturnValue();
      if ((uVar2 != 0) && (uVar3 = uVar2, func_0x00010c067ec0(), (int)uVar3 != 0)) {
        _objc_release(uVar2);
        return;
      }
      _objc_release(uVar2);
      uVar3 = lStack_38 + lStack_40;
    } while (uVar3 < uVar1);
  }
  return;
}



/* Entry: 108e10698; end: 108e10857;  */

void FUN_108e10698(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  
  uVar1 = param_1;
  func_0x00010c08fa60();
  lStack_50 = 0;
  lStack_48 = 0;
  if (uVar1 != 0) {
    uVar4 = 0;
    uVar5 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
    do {
      uVar2 = param_1;
      func_0x00010bf0e760(param_1,param_2,uVar4,&lStack_50);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 != 0) {
        uVar4 = uVar2;
        func_0x00010c0e00e0(uVar2,param_2,uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x00010c14d200();
        _objc_release(uVar4);
        if ((uVar3 & 1) != 0) {
          _objc_release(uVar2);
          return;
        }
      }
      _objc_release(uVar2);
      uVar4 = lStack_48 + lStack_50;
    } while (uVar4 < uVar1);
  }
  return;
}



/* Entry: 108e10858; end: 108e1090f;  */

void FUN_108e10858(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    if (param_4 != 0) goto LAB_108e108c0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c071ae0(param_3,param_2,puVar1);
    uVar3 = 0;
    if ((param_4 == 0) || ((uVar2 & 1) == 0)) goto LAB_108e108e4;
LAB_108e108c0:
    uVar2 = param_4;
    func_0x00010c071ae0(param_4,param_2,puVar1);
    if ((uVar2 & 1) == 0) {
      _objc_retain(param_4);
      uVar3 = param_4;
      goto LAB_108e108e4;
    }
  }
  uVar3 = 0;
LAB_108e108e4:
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108e10910; end: 108e109e7;  */

void FUN_108e10910(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  _objc_retain(param_5);
  func_0x00010c0e00e0(param_3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdca4a0(param_1,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  if (param_1 != 0) {
    func_0x00010bef6f20(param_4,param_2,*(undefined8 *)PTR__NSUnderlineColorAttributeName_110345878,
                        param_1,param_6,param_7);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108e109e8; end: 108e10b1b;  */

void FUN_108e109e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c25cd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar1);
  if ((int)puVar2 != 0) {
    uVar3 = uVar1;
    func_0x00010c08fa60(uVar1);
    uVar4 = param_3;
    func_0x00010bf0e780(param_3,param_2,0,0,0,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108e10b1c;
    puStack_60 = &UNK_110ac6180;
    uStack_58 = uVar4;
    uStack_48 = param_1;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(uVar4);
    func_0x00010bf98040(uVar1,param_2,0,uVar3,2,&puStack_78);
    _objc_release(uStack_50);
    _objc_release(uStack_58);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108e10b1c; end: 108e10c17;  */

void FUN_108e10b1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c071760(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_2);
  if ((int)puVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdca4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (lVar4 != 0) {
      func_0x00010bef6f20(*(undefined8 *)(param_1 + 0x28));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
  return;
}



/* Entry: 108e10c18; end: 108e10c87; -[SCCaptionBigTextPlusView setKillSwitchProvider:] */

void FUN_108e10c18(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0xf0,param_3);
  func_0x00010c06e1c0(param_3);
  _objc_release(param_3);
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c210280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e10c88; end: 108e10fd3; -[SCCaptionBigTextPlusView initWithState:editingDelegate:isLagunaMedia:shouldEnableUserTagging:initialTransform:originalContentBounds:captionCarouselContainerView:superviewBounds:superviewContentBounds:superviewEdgeInsets:useFirstNameForTagging:] */

undefined8 *
FUN_108e10c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 *param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined1 param_25)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_11;
  uVar7 = param_13;
  uVar8 = param_3;
  uVar9 = param_4;
  uVar10 = param_5;
  uVar11 = param_6;
  uVar12 = param_7;
  uVar13 = param_8;
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_16);
  puStack_c0 = PTR_PTR_1126fea30;
  puVar1 = &uStack_c8;
  uStack_c8 = param_9;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = param_11;
    func_0x00010c25e1c0();
    puVar1[1] = puVar2;
    puVar2 = param_11;
    func_0x00010bfd6620();
    *(char *)((long)puVar1 + 0xc2) = (char)puVar2;
    *(char *)((long)puVar1 + 0xc9) = (char)param_13;
    *(undefined1 *)(puVar1 + 0xc) = param_14;
    func_0x000107c308a4();
    puVar1[0x37] = param_3;
    puVar1[0x38] = param_4;
    puVar1[0x39] = uVar8;
    puVar1[0x3a] = uVar9;
    puVar1[0x2f] = param_5;
    puVar1[0x30] = param_6;
    puVar1[0x31] = param_7;
    puVar1[0x32] = param_8;
    puVar1[0x33] = param_17;
    puVar1[0x34] = param_18;
    puVar1[0x35] = param_19;
    puVar1[0x36] = param_20;
    puVar1[0x14] = param_21;
    puVar1[0x15] = param_22;
    puVar1[0x16] = param_23;
    puVar1[0x17] = param_24;
    puVar2 = param_11;
    func_0x00010c247520();
    puVar1[0xd] = puVar2;
    _objc_retain(param_16);
    uVar3 = puVar1[0x21];
    puVar1[0x21] = param_16;
    _objc_release(uVar3);
    _objc_storeWeak(puVar1 + 4,param_12);
    puVar2 = param_11;
    func_0x00010beffa20();
    uVar3 = puVar1[10];
    puVar1[10] = 0;
    puVar1[0xb] = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 199) = 0;
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b0 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[6];
    puVar1[6] = puVar5;
    _objc_release(uVar3);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_b8 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[7];
    puVar1[7] = puVar5;
    _objc_release(uVar3);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[8];
    puVar1[8] = puVar4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = puVar4;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xc1) = param_25;
    *(undefined1 *)((long)puVar1 + 0xc3) = 0;
    *(undefined1 *)((long)puVar1 + 0xc5) = 0;
    func_0x00010c0ff520(param_11);
    func_0x00010c1dd660(puVar1);
    puVar2 = param_11;
    func_0x00010bf8c1c0(param_11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193640(puVar1);
    _objc_release(puVar2);
    puVar6 = param_11;
    func_0x00010bfc0860();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010c1a2740(puVar1);
    _objc_release(puVar6);
    func_0x00010befa2c0(puVar1);
    param_1 = param_24;
    param_2 = param_23;
  }
  _objc_release(param_16);
  _objc_release(param_12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  _objc_retain(uVar7);
  func_0x00010c04be60(param_1,param_2,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
  if (param_11 != (undefined8 *)0x0) {
    _objc_storeWeak(param_11 + 5,uVar7);
    func_0x00010c064b80(param_11);
  }
  _objc_release(uVar7);
  _objc_release(puVar2);
  return param_11;
}



/* Entry: 108e10fd4; end: 108e11137; -[SCCaptionBigTextPlusView initWithState:editingDelegate:resourceDelegate:isLagunaMedia:shouldEnableUserTagging:initialTransform:originalContentBounds:captionCarouselContainerView:superviewBounds:superviewContentBounds:superviewEdgeInsets:useFirstNameForTagging:shouldKeepStyles:] */

long FUN_108e10fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  _objc_retain(param_11);
  _objc_retain(param_13);
  func_0x00010c04be60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (param_9 != 0) {
    _objc_storeWeak(param_9 + 0x28,param_13);
    func_0x00010c064b80(param_9);
  }
  _objc_release(param_13);
  _objc_release(param_11);
  return param_9;
}



/* Entry: 108e11138; end: 108e1128b; -[SCCaptionBigTextPlusView initWithState:editingDelegate:backgroundImage:isLagunaMedia:shouldEnableUserTagging:initialTransform:originalContentBounds:captionCarouselContainerView:superviewBounds:superviewContentBounds:superviewEdgeInsets:useFirstNameForTagging:shouldKeepStyles:] */

long FUN_108e11138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 *param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined4 param_26)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  _objc_retain(param_11);
  _objc_retain(param_13);
  uStack_c8 = param_16[1];
  uStack_d0 = *param_16;
  uStack_b8 = param_16[3];
  uStack_c0 = param_16[2];
  uStack_a8 = param_16[5];
  uStack_b0 = param_16[4];
  func_0x00010c04be60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_14,param_15,&uStack_d0,param_17,param_18,
                      param_19,param_20,param_21,param_22,param_23,param_24,param_25,
                      (undefined1)param_26);
  if (param_9 != 0) {
    func_0x00010c064b80(param_9,param_10,param_11,param_13,param_26._1_1_);
  }
  _objc_release(param_13);
  _objc_release(param_11);
  return param_9;
}



/* Entry: 108e1128c; end: 108e1130f; -[SCCaptionBigTextPlusView setEditing:] */

void FUN_108e1128c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0xc6) = param_3;
  lVar1 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
  _objc_release(lVar1);
  func_0x00010c26ba60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e11310; end: 108e11317; -[SCCaptionBigTextPlusView alignment] */

undefined8 FUN_108e11310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 108e11318; end: 108e113d7; -[SCCaptionBigTextPlusView setAlignment:] */

void FUN_108e11318(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  uStack_38 = param_3 - 1;
  if (uStack_38 < 3) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uVar2 = 0xc0000000;
    uStack_50 = 0xc0000000;
    pcStack_48 = FUN_108e113d8;
    puStack_40 = &UNK_110ac61b0;
    func_0x00010be5c920(param_1,param_2,&puStack_58);
    *(long *)(param_1 + 0x58) = param_3;
    func_0x00010bea4040(param_1);
    func_0x00010bea84e0(param_1);
    lVar1 = param_1;
    func_0x00010c26ba60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27ada0();
    func_0x00010bdca740(param_1);
    _objc_release(lVar1);
    func_0x00010c1b8d00(uVar2,param_1);
  }
  return;
}



/* Entry: 108e113d8; end: 108e113e3;  */

void FUN_108e113d8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c213050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setTextAlignment__112662638,*(undefined8 *)(param_1 + 0x20));
  return;
}


