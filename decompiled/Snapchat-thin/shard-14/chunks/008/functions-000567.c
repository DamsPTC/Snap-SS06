/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b687d48; end: 10b687e0b; -[SCCachingMediaManager cleanUpCacheWithQueue:block:] */

void FUN_10b687d48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10b687e0c;
    puStack_50 = &UNK_11084a9e8;
    lStack_48 = param_1;
    _objc_retain(param_4);
    uStack_38 = param_4;
    _objc_retain(param_3);
    uStack_40 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
    _objc_release(uStack_40);
    _objc_release(uStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b687e0c; end: 10b687f53;  */

void FUN_10b687e0c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf4dfe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      func_0x00010c12cc60(puVar2);
      puVar7 = puVar7 + 1;
    } while (puVar4 != puVar7);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x000107c27d8c(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(puVar2 + 0x50);
  _objc_retain(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 10b687f54; end: 10b687f7b; -[SCCachingMediaManager kindName] */

void FUN_10b687f54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b687f7c; end: 10b68807b; -[SCCachingMediaManager removeExpiredContentAsyncForReason:dispatchGroup:] */

void FUN_10b687f7c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) != 0) {
    if (param_4 != 0) {
      _dispatch_group_enter(param_4);
    }
    _objc_initWeak(auStack_38,param_1);
    uVar1 = 0x15;
    func_0x000107c312b8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10b68807c;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    lStack_48 = param_4;
    func_0x000107c27d8c(uVar1,&puStack_68);
    _objc_release(uVar1);
    _objc_release(lStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10b68807c; end: 10b6880bf;  */

void FUN_10b68807c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be9b420(lVar1);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    _dispatch_group_leave();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b6880c0; end: 10b6880cb; -[SCCachingMediaManager removeAllUserSessionDataAsync] */

void FUN_10b6880c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf39fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cleanUpCacheWithQueue_block__1125ac190,0,0);
  return;
}



/* Entry: 10b6880cc; end: 10b688183; -[SCCachingMediaManager handleEmergencyDiskConditionWithDispatchGroup:] */

void FUN_10b6880cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _dispatch_group_enter(param_3);
  uVar1 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  func_0x00010bf39fa0(param_1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10b688184; end: 10b68818b;  */

void FUN_10b688184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b68818c; end: 10b688297; -[SCCachingMediaManager reportMetrics] */

void FUN_10b68818c(undefined *param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 8) == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    ppuStack_58 = &PTR____CFConstantStringClassReference_110dbf1b8;
    puVar5 = *(undefined **)(param_1 + 0x50);
    puVar1 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110e62718;
    puStack_48 = puVar1;
    func_0x00010becd980(param_1);
    func_0x00010c0dea00(puVar2,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = &puStack_48;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_40 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,param_3,&ppuStack_58,2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    param_1 = puVar2;
    if (puVar5 == (undefined *)0x0) {
      _objc_release();
      param_1 = puVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 0x40);
  func_0x00010c0e00e0(lVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 8) != 0 && lVar3 == 0) {
    puVar4 = PTR_PTR_1126e0460;
    func_0x00010bf4dba0(PTR_PTR_1126e0460,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b688298; end: 10b68834b; -[SCCachingMediaManager _cleanupDiskCacheForUUID:] */

void FUN_10b688298(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 8) != 0 && lVar1 == 0) {
    puVar2 = PTR_PTR_1126e0460;
    func_0x00010bf4dba0(PTR_PTR_1126e0460,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b68834c; end: 10b6883eb; -[SCCachingMediaManager invalidateEntityForUUID:] */

void FUN_10b68834c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10b6883ec;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b6883ec; end: 10b688483;  */

void FUN_10b6883ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  func_0x00010c12d360(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  if (*(long *)(*(long *)(param_1 + 0x20) + 8) != 0) {
    puVar1 = PTR_PTR_1126e0460;
    func_0x00010bf4dba0(PTR_PTR_1126e0460,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10b688484; end: 10b689103; -[SCCachingMediaManager _scheduleOnDiskFileLruProtectingSourceFilesEvictionIfNeeded] */

undefined * FUN_10b688484(long param_1,undefined *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  undefined8 uVar25;
  undefined *puVar26;
  ulong uVar27;
  undefined *puVar28;
  undefined *puVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined *puStack_6a8;
  ulong uStack_680;
  long lStack_668;
  undefined *puStack_650;
  undefined8 uStack_648;
  code *pcStack_640;
  undefined *puStack_638;
  long lStack_630;
  undefined *puStack_628;
  long lStack_620;
  undefined *puStack_618;
  undefined8 uStack_610;
  long lStack_608;
  long *plStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  long lStack_5c8;
  long *plStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  long lStack_588;
  long *plStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  long lStack_548;
  long *plStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  long lStack_508;
  long *plStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  long *plStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_458;
  undefined *puStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_408;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar17 = *(undefined ***)(param_1 + 8);
  lStack_408 = 0;
  puVar3 = puVar2;
  func_0x00010bf4dfe0();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = lStack_408;
  _objc_retain(lStack_408);
  if (lVar30 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_448 = 0;
    puStack_450 = (undefined *)0x0;
    uStack_438 = 0;
    plStack_440 = (long *)0x0;
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    _objc_retain(puVar3);
    ppuVar17 = &puStack_450;
    puStack_6a8 = puVar3;
    func_0x00010bf52a60();
    if (puStack_6a8 == (undefined *)0x0) {
      uStack_680 = 0;
      lVar30 = 0;
    }
    else {
      uStack_680 = 0;
      lVar30 = 0;
      lVar18 = *plStack_440;
      uVar25 = *(undefined8 *)PTR__NSURLTotalFileAllocatedSizeKey_11034ab28;
      uVar19 = *(undefined8 *)PTR__NSURLContentModificationDateKey_11034aaf8;
      do {
        puVar22 = (undefined *)0x0;
        lVar31 = lVar30;
        do {
          if (*plStack_440 != lVar18) {
            _objc_enumerationMutation(puVar3);
          }
          uVar20 = *(undefined8 *)(lStack_448 + (long)puVar22 * 8);
          func_0x00010c0899c0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf09f00();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_100 = uVar25;
          uStack_f8 = uVar19;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar2;
          lStack_458 = lVar31;
          func_0x00010bf4dfe0();
          _objc_retainAutoreleasedReturnValue();
          lVar30 = lStack_458;
          _objc_retain(lStack_458);
          _objc_release(lVar31);
          _objc_release(puVar9);
          func_0x00010bf529e0(puVar10);
          lStack_498 = 0;
          uStack_4a0 = 0;
          uStack_488 = 0;
          plStack_490 = (long *)0x0;
          uStack_478 = 0;
          uStack_480 = 0;
          uStack_468 = 0;
          uStack_470 = 0;
          _objc_retain(puVar10);
          puVar9 = puVar10;
          func_0x00010bf52a60();
          if (puVar9 == (undefined *)0x0) {
            lStack_668 = 0;
          }
          else {
            lStack_668 = 0;
            lVar31 = *plStack_490;
            do {
              puVar26 = (undefined *)0x0;
              lVar21 = lVar30;
              do {
                if (*plStack_490 != lVar31) {
                  _objc_enumerationMutation(puVar10);
                }
                uVar27 = *(ulong *)(lStack_498 + (long)puVar26 * 8);
                lStack_4a8 = 0;
                lStack_4b0 = 0;
                func_0x00010bfc99e0(uVar27);
                lVar15 = lStack_4a8;
                _objc_retain(lStack_4a8);
                lVar30 = lStack_4b0;
                _objc_retain(lStack_4b0);
                _objc_release(lVar21);
                if (lVar30 == 0) {
                  lStack_4b8 = 0;
                  lStack_4c0 = 0;
                  func_0x00010bfc99e0(uVar27);
                  lVar21 = lStack_4b8;
                  _objc_retain(lStack_4b8);
                  lVar30 = lStack_4c0;
                  _objc_retain(lStack_4c0);
                  if ((lVar30 == 0) && (lVar21 != 0)) {
                    if ((lStack_668 == 0) ||
                       (lVar24 = lStack_668, func_0x00010bf433a0(), lVar24 == -1)) {
                      _objc_retain(lVar21);
                      _objc_release(lStack_668);
                      lStack_668 = lVar21;
                    }
                    lVar24 = lVar15;
                    func_0x00010c067fc0();
                    uStack_680 = lVar24 + uStack_680;
                    uVar11 = uVar27;
                    func_0x00010c0899c0();
                    _objc_retainAutoreleasedReturnValue();
                    uVar12 = uVar11;
                    func_0x00010bfda7c0();
                    _objc_release(uVar11);
                    if ((uVar12 & 1) == 0) {
                      puVar28 = PTR_PTR_1126e0488;
                      _objc_alloc(PTR_PTR_1126e0488);
                      func_0x00010c010120();
                      puVar23 = puVar4;
                    }
                    else {
                      uStack_4c8 = 0xffffffffffffffff;
                      param_2 = (undefined *)0x0;
                      FUN_10b6869a0(uVar27,0,&uStack_4c8);
                      puVar28 = PTR_PTR_1126e0488;
                      _objc_alloc(PTR_PTR_1126e0488);
                      func_0x00010c010120();
                      puVar23 = puVar8;
                    }
                    func_0x00010befa120(puVar23);
                    _objc_release(puVar28);
                  }
                  _objc_release(lVar21);
                }
                _objc_release(lVar15);
                puVar26 = puVar26 + 1;
                lVar21 = lVar30;
              } while (puVar9 != puVar26);
              puVar9 = puVar10;
              func_0x00010bf52a60();
            } while (puVar9 != (undefined *)0x0);
          }
          _objc_release(puVar10);
          uStack_4e8 = 0;
          uStack_4f0 = 0;
          uStack_4d8 = 0;
          uStack_4e0 = 0;
          lStack_508 = 0;
          uStack_510 = 0;
          uStack_4f8 = 0;
          plStack_500 = (long *)0x0;
          _objc_retain(puVar8);
          puVar9 = puVar8;
          func_0x00010bf52a60();
          bVar1 = puVar9 == (undefined *)0x0;
          if (puVar9 == (undefined *)0x0) {
            puVar26 = (undefined *)0x0;
            puVar9 = puVar8;
LAB_10b688a50:
            _objc_release(puVar9);
          }
          else {
            puVar26 = (undefined *)0x0;
            lVar31 = *plStack_500;
            do {
              puVar28 = (undefined *)0x0;
              do {
                if (*plStack_500 != lVar31) {
                  _objc_enumerationMutation(puVar8);
                }
                puVar23 = *(undefined **)(lStack_508 + (long)puVar28 * 8);
                if (puVar26 == (undefined *)0x0) {
LAB_10b688970:
                  _objc_retain(puVar23);
                  _objc_release(puVar26);
                  puVar26 = puVar23;
                }
                else {
                  puVar29 = puVar26;
                  func_0x00010c2478a0();
                  puVar13 = puVar23;
                  func_0x00010c2478a0();
                  if ((long)puVar29 < (long)puVar13) goto LAB_10b688970;
                }
                puVar28 = puVar28 + 1;
              } while (puVar9 != puVar28);
              puVar9 = puVar8;
              func_0x00010bf52a60();
            } while (puVar9 != (undefined *)0x0);
            _objc_release(puVar8);
            if (puVar26 != (undefined *)0x0) {
              puVar28 = PTR_PTR_1126e0488;
              _objc_alloc(PTR_PTR_1126e0488);
              puVar9 = puVar26;
              func_0x00010bf96f60(puVar26);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfad080(puVar26);
              puVar23 = puVar26;
              func_0x00010bfad160(puVar26);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2478a0(puVar26);
              func_0x00010c010120(puVar28);
              func_0x00010befa120(puVar5);
              _objc_release(puVar28);
              _objc_release(puVar23);
              goto LAB_10b688a50;
            }
            bVar1 = true;
          }
          uStack_528 = 0;
          uStack_530 = 0;
          uStack_518 = 0;
          uStack_520 = 0;
          lStack_548 = 0;
          uStack_550 = 0;
          uStack_538 = 0;
          plStack_540 = (long *)0x0;
          _objc_retain(puVar8);
          puVar9 = puVar8;
          func_0x00010bf52a60();
          if (puVar9 != (undefined *)0x0) {
            lVar31 = *plStack_540;
            do {
              puVar28 = (undefined *)0x0;
              do {
                if (*plStack_540 != lVar31) {
                  _objc_enumerationMutation(puVar8);
                }
                uVar27 = *(ulong *)(lStack_548 + (long)puVar28 * 8);
                if (bVar1) {
LAB_10b688b0c:
                  func_0x00010befa120(puVar4);
                }
                else {
                  func_0x00010bfad160();
                  _objc_retainAutoreleasedReturnValue();
                  puVar23 = puVar26;
                  func_0x00010bfad160(puVar26);
                  _objc_retainAutoreleasedReturnValue();
                  uVar11 = uVar27;
                  func_0x00010c071ae0();
                  _objc_release(puVar23);
                  _objc_release(uVar27);
                  if ((uVar11 & 1) == 0) goto LAB_10b688b0c;
                }
                puVar28 = puVar28 + 1;
              } while (puVar9 != puVar28);
              puVar9 = puVar8;
              func_0x00010bf52a60();
            } while (puVar9 != (undefined *)0x0);
          }
          _objc_release(puVar8);
          _objc_release(puVar26);
          _objc_release(puVar10);
          _objc_release(puVar8);
          _objc_release(lStack_668);
          _objc_release(uVar20);
          puVar22 = puVar22 + 1;
          lVar31 = lVar30;
        } while (puVar22 != puStack_6a8);
        ppuVar17 = &puStack_450;
        puStack_6a8 = puVar3;
        func_0x00010bf52a60();
      } while (puStack_6a8 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    if (*(ulong *)(param_1 + 0x18) <= uStack_680) {
      puVar22 = puVar4;
      func_0x00010c246ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar5;
      func_0x00010c246ca0();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = (long)((double)(long)uStack_680 * 0.75);
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      lStack_588 = 0;
      uStack_590 = 0;
      uStack_578 = 0;
      plStack_580 = (long *)0x0;
      uStack_568 = 0;
      uStack_570 = 0;
      uStack_558 = 0;
      uStack_560 = 0;
      _objc_retain(puVar22);
      puVar26 = puVar22;
      func_0x00010bf52a60();
      if (puVar26 == (undefined *)0x0) {
        lVar31 = 0;
      }
      else {
        lVar31 = 0;
        lVar21 = *plStack_580;
        do {
          puVar28 = (undefined *)0x0;
          lVar15 = lVar31;
          do {
            if (*plStack_580 != lVar21) {
              _objc_enumerationMutation(puVar22);
            }
            lVar32 = *(long *)(lStack_588 + (long)puVar28 * 8);
            lVar24 = lVar32;
            func_0x00010bf96f60(lVar32);
            _objc_retainAutoreleasedReturnValue();
            puVar23 = puVar6;
            func_0x00010bf4b900();
            lVar31 = lVar15;
            if ((int)puVar23 == 0) {
              lVar14 = lVar32;
              func_0x00010bf96f60(lVar32);
              _objc_retainAutoreleasedReturnValue();
              puVar23 = puVar7;
              func_0x00010bf4b900();
              _objc_release(lVar14);
              _objc_release(lVar24);
              if (((ulong)puVar23 & 1) == 0) {
                lVar31 = lVar32;
                func_0x00010c0881c0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar15);
                func_0x00010befa120(puVar9);
                func_0x00010bfad080();
                uStack_680 = uStack_680 - lVar32;
                if ((long)uStack_680 <= lVar18) goto LAB_10b688d94;
              }
            }
            else {
              _objc_release(lVar24);
            }
            puVar28 = puVar28 + 1;
            lVar15 = lVar31;
          } while (puVar26 != puVar28);
          puVar26 = puVar22;
          func_0x00010bf52a60();
        } while (puVar26 != (undefined *)0x0);
      }
LAB_10b688d94:
      _objc_release(puVar22);
      if (lVar18 < (long)uStack_680) {
        uStack_5a8 = 0;
        uStack_5b0 = 0;
        uStack_598 = 0;
        uStack_5a0 = 0;
        lStack_5c8 = 0;
        uStack_5d0 = 0;
        uStack_5b8 = 0;
        plStack_5c0 = (long *)0x0;
        _objc_retain(puVar8);
        puVar26 = puVar8;
        func_0x00010bf52a60();
        if (puVar26 != (undefined *)0x0) {
          lVar21 = *plStack_5c0;
          do {
            puVar28 = (undefined *)0x0;
            do {
              if (*plStack_5c0 != lVar21) {
                _objc_enumerationMutation(puVar8);
              }
              lVar24 = *(long *)(lStack_5c8 + (long)puVar28 * 8);
              lVar15 = lVar24;
              func_0x00010bf96f60(lVar24);
              _objc_retainAutoreleasedReturnValue();
              puVar23 = puVar7;
              func_0x00010bf4b900();
              _objc_release(lVar15);
              if (((ulong)puVar23 & 1) == 0) {
                func_0x00010befa120(puVar10);
                func_0x00010bfad080();
                uStack_680 = uStack_680 - lVar24;
                if ((long)uStack_680 <= lVar18) goto LAB_10b688e94;
              }
              puVar28 = puVar28 + 1;
            } while (puVar26 != puVar28);
            puVar26 = puVar8;
            func_0x00010bf52a60();
          } while (puVar26 != (undefined *)0x0);
        }
LAB_10b688e94:
        _objc_release(puVar8);
      }
      puVar26 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      puVar28 = puVar10;
      func_0x00010c0b8600(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar28);
      puVar28 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_608 = 0;
      uStack_610 = 0;
      uStack_5f8 = 0;
      plStack_600 = (long *)0x0;
      uStack_5e8 = 0;
      uStack_5f0 = 0;
      uStack_5d8 = 0;
      uStack_5e0 = 0;
      _objc_retain(puVar9);
      puVar23 = puVar9;
      func_0x00010bf52a60();
      if (puVar23 != (undefined *)0x0) {
        lVar18 = *plStack_600;
        do {
          puVar29 = (undefined *)0x0;
          do {
            if (*plStack_600 != lVar18) {
              _objc_enumerationMutation(puVar9);
            }
            uVar25 = *(undefined8 *)(lStack_608 + (long)puVar29 * 8);
            uVar19 = uVar25;
            func_0x00010bf96f60(uVar25);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar26;
            func_0x00010bf4b900();
            _objc_release(uVar19);
            if (((ulong)puVar13 & 1) == 0) {
              func_0x00010bf96f60(uVar25);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar28);
              _objc_release(uVar25);
            }
            puVar29 = puVar29 + 1;
          } while (puVar23 != puVar29);
          puVar23 = puVar9;
          func_0x00010bf52a60();
        } while (puVar23 != (undefined *)0x0);
      }
      _objc_release(puVar9);
      uVar19 = *(undefined8 *)(param_1 + 0x10);
      puStack_650 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_648 = 0xc2000000;
      pcStack_640 = FUN_10b689214;
      puStack_638 = &UNK_11084c4a0;
      lStack_630 = param_1;
      puStack_628 = puVar28;
      lStack_620 = lVar31;
      puStack_618 = puVar26;
      _objc_retain(puVar26);
      _objc_retain(lVar31);
      _objc_retain(puVar28);
      ppuVar17 = &puStack_650;
      func_0x00010c0f7fc0(uVar19);
      _objc_release(puStack_618);
      _objc_release(lStack_620);
      _objc_release(puStack_628);
      _objc_release(puVar26);
      _objc_release(puVar28);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(lVar31);
      _objc_release(puVar8);
      _objc_release(puVar22);
    }
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(lVar30);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(ppuVar17);
    func_0x00010c0881c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar17;
    func_0x00010c0881c0(ppuVar17);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar17);
    puVar2 = param_2;
    func_0x00010bf433a0(param_2);
    _objc_release(ppuVar16);
    _objc_release(param_2);
    return puVar2;
  }
  return puVar2;
}



/* Entry: 10b689104; end: 10b68920b;  */

undefined8 FUN_10b689104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010c0881c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0881c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_2;
  func_0x00010bf433a0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10b68920c; end: 10b689213;  */

void FUN_10b68920c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_entityUUID_1125c3580);
  return;
}



/* Entry: 10b689214; end: 10b6892d3;  */

void FUN_10b689214(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf00560(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf00560(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b6892d4;
  puStack_50 = &UNK_110842e18;
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be0b620(uVar1,param_2,uVar3,uVar2,0,uVar4,0,&puStack_68);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 10b6892d4; end: 10b6892ff;  */

void FUN_10b6892d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010becd980();
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = uVar1;
  return;
}



/* Entry: 10b689300; end: 10b6895c3; -[SCCachingMediaManager _evictItemsWithEntityUUIDsToTrim:trimDate:trimEntityIdx:entityUUIDsToDelete:deletionIdx:completionBlock:] */

void FUN_10b689300(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  ulong param_6,ulong param_7,long param_8)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (param_5 < uVar1) {
    uVar1 = param_3;
    func_0x00010c0dfd40(param_3,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010c0e00e0(lVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126e0460;
      func_0x00010bf4dba0(PTR_PTR_1126e0460,param_2,uVar1,*(undefined8 *)(param_1 + 8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdfa280(param_1,param_2,puVar3,param_4,1);
      _objc_release(puVar3);
    }
    else {
      func_0x00010c27c5e0(lVar2,param_2,param_4,1);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10b6895c4;
    puStack_98 = &UNK_1108b6770;
    lStack_90 = param_1;
    _objc_retain(param_3);
    uStack_88 = param_3;
    _objc_retain(param_4);
    uStack_80 = param_4;
    uStack_68 = param_5;
    _objc_retain(param_6);
    uStack_78 = param_6;
    _objc_retain(param_8);
    lStack_70 = param_8;
    func_0x00010c0f7fe0(0x3ff8000000000000,uVar4,param_2,&puStack_b0);
    _objc_release(lStack_70);
    _objc_release(uStack_78);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(lVar2);
  }
  else {
    uVar1 = param_6;
    func_0x00010bf529e0();
    if (uVar1 <= param_7) {
      if (param_8 != 0) {
        (**(code **)(param_8 + 0x10))(param_8);
      }
      goto LAB_10b689584;
    }
    uVar1 = param_6;
    func_0x00010c0dfd40(param_6,param_2,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bddf6e0(param_1,param_2,uVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x10b6895e0;
    puStack_f0 = &UNK_1108a8a18;
    lStack_e8 = param_1;
    _objc_retain(param_3);
    uStack_e0 = param_3;
    _objc_retain(param_4);
    uStack_d8 = param_4;
    uStack_c0 = param_5;
    _objc_retain(param_6);
    uStack_d0 = param_6;
    uStack_b8 = param_7;
    _objc_retain(param_8);
    lStack_c8 = param_8;
    func_0x00010c0f7fe0(0x3ff8000000000000,uVar4,param_2,&puStack_108);
    _objc_release(lStack_c8);
    _objc_release(uStack_d0);
    _objc_release(uStack_d8);
    _objc_release(uStack_e0);
  }
  _objc_release(uVar1);
LAB_10b689584:
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b6895c4; end: 10b6895fb;  */

void FUN_10b6895c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0b630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__evictItemsWithEntityUUIDsToTrim_112560728,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(long *)(param_1 + 0x48) + 1,*(undefined8 *)(param_1 + 0x38),0,
             *(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 10b6895fc; end: 10b689987; -[SCCachingMediaManager _deleteItemsAtEntityDirectory:withLastAccessTimeBefore:shouldSkipHighestLevelSource:] */

void FUN_10b6895fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5
                  )

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  uStack_78 = *(undefined8 *)PTR__NSURLContentModificationDateKey_11034aaf8;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lStack_180 = 0;
  puVar6 = puVar3;
  func_0x00010bf4dfe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lStack_180;
  _objc_retain(lStack_180);
  _objc_release(puVar5);
  if (lVar2 == 0) {
    if (param_5 == 0) {
      uVar13 = 0;
    }
    else {
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      plStack_1b0 = (long *)0x0;
      _objc_retain(puVar6);
      puVar5 = puVar6;
      func_0x00010bf52a60();
      if (puVar5 == (undefined *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        lVar11 = *plStack_1b0;
        lVar10 = -1;
        do {
          puVar12 = (undefined *)0x0;
          do {
            if (*plStack_1b0 != lVar11) {
              _objc_enumerationMutation(puVar6);
            }
            uVar14 = *(undefined8 *)(lStack_1b8 + (long)puVar12 * 8);
            uVar7 = uVar14;
            func_0x00010c0899c0();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010bfda7c0();
            _objc_release(uVar7);
            if ((int)uVar8 != 0) {
              lStack_1c8 = 0;
              FUN_10b6869a0(uVar14,0,&lStack_1c8);
              lVar1 = lStack_1c8;
              if (lVar10 < lStack_1c8) {
                _objc_retain(uVar14);
                _objc_release(uVar13);
                lVar10 = lVar1;
                uVar13 = uVar14;
              }
            }
            puVar12 = puVar12 + 1;
          } while (puVar5 != puVar12);
          puVar5 = puVar6;
          func_0x00010bf52a60();
        } while (puVar5 != (undefined *)0x0);
      }
      _objc_release(puVar6);
    }
    _objc_retain(puVar6);
    puVar5 = puVar6;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (puVar5 != (undefined *)0x0) {
      puVar12 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(puVar6);
        }
        uVar15 = *(ulong *)((long)puVar12 * 8);
        uVar9 = uVar15;
        func_0x00010c071ae0();
        if ((uVar9 & 1) == 0) {
          func_0x00010bfc99e0(uVar15);
          lVar11 = 0;
          _objc_retain(0);
          _objc_retain(0);
          func_0x00010bf433a0();
          if (lVar11 == -1) {
            func_0x00010c12cc60(puVar3);
          }
          _objc_release(0);
          _objc_release(0);
        }
        puVar12 = puVar12 + 1;
      } while (puVar5 != puVar12);
      puVar5 = puVar6;
      func_0x00010bf52a60();
    }
    _objc_release(puVar6);
    _objc_release(uVar13);
  }
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x00010c0f7fc0(*(undefined8 *)(param_3 + 0x10));
    return;
  }
  return;
}



/* Entry: 10b689988; end: 10b6899df; -[SCCachingMediaManager _didReceiveMemoryWarningNotification:] */

void FUN_10b689988(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b6899e0;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 10b6899e0; end: 10b6899fb;  */

void FUN_10b6899e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf97cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),
             PTR_s_enumerateKeysAndObjectsUsingBloc_1125c38e0,&PTR___NSConcreteGlobalBlock_110d58a18
            );
  return;
}



/* Entry: 10b6899fc; end: 10b689a7f; -[SCCachingMediaManager .cxx_destruct] */

void FUN_10b6899fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b689a80; end: 10b689a97; -[SCCachingMediaManager cacheURL] */

void FUN_10b689a80(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b689a98; end: 10b689abf; -[SCCachingMediaManager performer] */

void FUN_10b689a98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b689ac0; end: 10b689b17; -[SCCachingMediaManager updateCacheDiskSize:] */

void FUN_10b689ac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10b689b18;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_40);
  return;
}



/* Entry: 10b689b18; end: 10b689b2b;  */

void FUN_10b689b18(long param_1)

{
  *(long *)(*(long *)(param_1 + 0x20) + 0x28) =
       *(long *)(*(long *)(param_1 + 0x20) + 0x28) + *(long *)(param_1 + 0x28);
  return;
}



/* Entry: 10b689b2c; end: 10b689c2b; -[SCCachingMediaRequest initWithDeliveryMode:queue:cacheMissHandler:resultHandler:] */

undefined1 *
FUN_10b689b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112709b80;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    puVar3 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b689c2c; end: 10b689c4b; -[SCCachingMediaRequest isCancelled] */

bool FUN_10b689c2c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c296d80(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 10b689c4c; end: 10b689c87; -[SCCachingMediaRequest cancel] */

void FUN_10b689c4c(long param_1)

{
  func_0x00010bfec280(*(undefined8 *)(param_1 + 0x20));
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12e080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b689c88; end: 10b689ceb; -[SCCachingMediaRequest performCacheMiss] */

void FUN_10b689c88(long param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if ((*(long *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_10b689cec;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x000107c27d8c(*(long *)(param_1 + 0x10),&puStack_38);
  }
  return;
}



/* Entry: 10b689cec; end: 10b689cfb;  */

void FUN_10b689cec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b689cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x28) + 0x10))();
  return;
}



/* Entry: 10b689cfc; end: 10b689e03; -[SCCachingMediaRequest perform:fromCache:sourceLevel:final:] */

void FUN_10b689cfc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,byte param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  byte bStack_47;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    if ((param_6 & 1) == 0) {
      if (*(long *)(param_1 + 0x18) != 0) goto LAB_10b689de4;
      _objc_retainBlock();
    }
    else {
      _objc_retainBlock();
      uVar2 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = 0;
      _objc_release(uVar2);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10b689e04;
    puStack_68 = &UNK_1108bd0f0;
    lStack_58 = lVar1;
    _objc_retain(param_3);
    uStack_60 = param_3;
    uStack_50 = param_5;
    uStack_48 = param_4;
    bStack_47 = param_6;
    _objc_retain(lVar1);
    func_0x000107c27d8c(uVar2,&puStack_80);
    _objc_release(uStack_60);
    _objc_release(lStack_58);
    _objc_release(lVar1);
  }
LAB_10b689de4:
  _objc_release(param_3);
  return;
}



/* Entry: 10b689e04; end: 10b689e1f;  */

void FUN_10b689e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b689e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x38),
             *(undefined1 *)(param_1 + 0x39));
  return;
}



/* Entry: 10b689e20; end: 10b689e37; -[SCCachingMediaRequest progressReceiver] */

void FUN_10b689e20(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b689e38; end: 10b689e43; -[SCCachingMediaRequest setProgressReceiver:] */

void FUN_10b689e38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 10b689e44; end: 10b689e5b; -[SCCachingMediaRequest requestGroup] */

void FUN_10b689e44(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b689e5c; end: 10b689e67; -[SCCachingMediaRequest setRequestGroup:] */

void FUN_10b689e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 10b689e68; end: 10b689ebf; -[SCCachingMediaRequest .cxx_destruct] */

void FUN_10b689e68(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b689ec0; end: 10b689f8b; -[SCCachingMediaRequestGroup initWithQueue:completionHandler:] */

undefined1 *
FUN_10b689ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112709b88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b689f8c; end: 10b68a037; -[SCCachingMediaRequestGroup setUpstreamRequest:] */

void FUN_10b689f8c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) != param_3) {
    func_0x00010bf2dba0();
    if (*(long *)(param_1 + 0x10) == 0) {
      func_0x00010bf2dba0(param_3);
    }
    else {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = param_3;
      _objc_release(uVar2);
      puVar1 = PTR_DAT_1126a4fc8;
      lVar4 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar4);
      lVar3 = lVar4;
      func_0x000107c318f8(lVar4,puVar1);
      _objc_release(lVar4);
      if (((int)lVar3 != 0) && (lVar4 != 0)) {
        func_0x00010c1e4860(*(undefined8 *)(param_1 + 0x28));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b68a038; end: 10b68a12f; -[SCCachingMediaRequestGroup performCacheMiss] */

void FUN_10b68a038(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 in_x5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar2 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar6 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar6);
  puVar4 = auStack_c8;
  uVar5 = 0x10;
  lVar1 = lVar6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        func_0x00010c0f84a0(*(undefined8 *)(lStack_108 + lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar4 = auStack_c8;
      uVar5 = 0x10;
      lVar1 = lVar6;
      puVar2 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lVar7 = *(long *)(lVar6 + 0x18);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60(lVar7,param_2,&uStack_240,auStack_1f8,0x10);
  if (lVar1 != 0) {
    lVar8 = *plStack_230;
    do {
      lVar9 = 0;
      do {
        if (*plStack_230 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        func_0x00010c0f8020(*(undefined8 *)(lStack_238 + lVar9 * 8),param_2,puVar2,puVar4,uVar5,
                            in_x5);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = lVar7;
      puVar3 = &uStack_240;
      func_0x00010bf52a60(lVar7,param_2,&uStack_240,auStack_1f8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar7);
  if ((int)in_x5 != 0) {
    func_0x00010c12adc0(*(undefined8 *)(lVar6 + 0x18));
    if (*(long *)(lVar6 + 0x10) != 0) {
      (**(code **)(*(long *)(lVar6 + 0x10) + 0x10))();
      uVar5 = *(undefined8 *)(lVar6 + 0x10);
      *(undefined8 *)(lVar6 + 0x10) = 0;
      _objc_release(uVar5);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  func_0x00010befa120(*(undefined8 *)((long)puVar2 + 0x18),param_2,puVar3);
  if (*(char *)((long)puVar2 + 0x20) == '\x01') {
    func_0x00010c0f84a0(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b68a130; end: 10b68a28b; -[SCCachingMediaRequestGroup perform:fromCache:sourceLevel:final:] */

void FUN_10b68a130(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  
  puVar3 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010c0f8020(*(undefined8 *)(lStack_128 + lVar6 * 8),param_2,param_3,param_4,param_5,
                            param_6);
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = lVar4;
      puVar3 = &uStack_130;
      func_0x00010bf52a60(lVar4,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar4);
  if ((int)param_6 != 0) {
    func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
    if (*(long *)(param_1 + 0x10) != 0) {
      (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      _objc_release(uVar2);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  func_0x00010befa120(*(undefined8 *)(param_3 + 0x18),param_2,puVar3);
  if (*(char *)(param_3 + 0x20) == '\x01') {
    func_0x00010c0f84a0(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b68a28c; end: 10b68a2d7; -[SCCachingMediaRequestGroup addRequest:] */

void FUN_10b68a28c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010c0f84a0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b68a2d8; end: 10b68a367; -[SCCachingMediaRequestGroup removeRequest:] */

void FUN_10b68a2d8(long param_1,undefined8 param_2,undefined8 param_3)

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
  pcStack_50 = FUN_10b68a368;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000107c27d8c(uVar1,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b68a368; end: 10b68a3f3;  */

void FUN_10b68a368(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c12d360(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  func_0x00010c0f8020(*(undefined8 *)(param_1 + 0x28),param_2,0,0,0,1);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010bf529e0();
  if ((lVar1 == 0) && (*(long *)(*(long *)(param_1 + 0x20) + 0x10) != 0)) {
    func_0x00010bf2dba0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
    (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x10))();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10b68a3f4; end: 10b68a4ab; -[SCCachingMediaRequestGroup reporterWithIdentifier:didReportProgress:] */

void FUN_10b68a3f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b68a4ac;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000107c27d8c(uVar1,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b68a4ac; end: 10b68a5c7;  */

long FUN_10b68a4ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar5 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        uVar2 = *(undefined8 *)(lStack_118 + lVar5 * 8);
        func_0x00010c1179e0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1341e0();
        _objc_release(uVar2);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar3;
  }
  ___stack_chk_fail();
  return *(long *)(lVar3 + 0x28);
}



/* Entry: 10b68a5c8; end: 10b68a5cf; -[SCCachingMediaRequestGroup upstreamRequest] */

undefined8 FUN_10b68a5c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b68a5d0; end: 10b68a617; -[SCCachingMediaRequestGroup .cxx_destruct] */

void FUN_10b68a5d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b68a618; end: 10b68a67b; -[FLAnimatedImage frameCacheSizeCurrent] */

ulong FUN_10b68a618(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bfb6ac0();
  uVar2 = param_1;
  func_0x00010bfb6a80();
  if ((uVar2 != 0) && (uVar2 = param_1, func_0x00010bfb6a80(), uVar2 <= uVar1)) {
    uVar1 = uVar2;
  }
  uVar2 = param_1;
  func_0x00010bfb6aa0();
  if ((uVar2 != 0) && (func_0x00010bfb6aa0(), param_1 <= uVar1)) {
    uVar1 = param_1;
  }
  return uVar1;
}



/* Entry: 10b68a67c; end: 10b68a6c7; -[FLAnimatedImage setFrameCacheSizeMax:] */

void FUN_10b68a67c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  if (*(ulong *)(param_1 + 0x30) != param_3) {
    uVar1 = param_1;
    func_0x00010bfb6a60();
    *(ulong *)(param_1 + 0x30) = param_3;
    if (param_3 < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010c11be50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_purgeFrameCacheIfNeeded_1126249b0);
      return;
    }
  }
  return;
}



/* Entry: 10b68a6c8; end: 10b68a713; -[FLAnimatedImage setFrameCacheSizeMaxInternal:] */

void FUN_10b68a6c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  if (*(ulong *)(param_1 + 0x48) != param_3) {
    uVar1 = param_1;
    func_0x00010bfb6a60();
    *(ulong *)(param_1 + 0x48) = param_3;
    if (param_3 < uVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010c11be50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_purgeFrameCacheIfNeeded_1126249b0);
      return;
    }
  }
  return;
}



/* Entry: 10b68a714; end: 10b68a7bb; +[FLAnimatedImage initialize] */

void FUN_10b68a714(undefined *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b4690;
  _objc_opt_class();
  if (param_1 != puVar2) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x00010c2a2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001137f7830;
  puRam00000001137f7830 = puVar2;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa280();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b68a7bc; end: 10b68a867;  */

void FUN_10b68a7bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = uRam00000001137f7830;
  _objc_retain(uRam00000001137f7830);
  _objc_sync_enter(uVar1);
  uVar2 = uRam00000001137f7830;
  func_0x00010bf00560(uRam00000001137f7830);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  _objc_release(uVar2);
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  func_0x00010c0b7540(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b68a868; end: 10b68acb3; -[FLAnimatedImage initWithAnimationImages:timeInterval:] */

undefined1 *
FUN_10b68a868(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  double dVar13;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  uVar10 = param_1;
  _objc_retain(param_5);
  puStack_78 = PTR_PTR_112709b90;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_5;
    func_0x00010bf51e00();
    uVar9 = *(undefined8 *)((long)puVar1 + 0x90);
    *(long *)((long)puVar1 + 0x90) = lVar2;
    _objc_release(uVar9);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar9 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar9);
    puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_alloc_init();
    uVar9 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    _objc_release(uVar9);
    puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_alloc_init();
    uVar9 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar3;
    _objc_release(uVar9);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    lVar2 = param_5;
    func_0x00010bf529e0();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      lVar12 = 0;
      do {
        lVar4 = param_5;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = (undefined1 *)puVar1;
        func_0x00010c105800();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar11 == (undefined1 *)0x0) {
          _objc_retain(lVar4);
          uVar9 = *(undefined8 *)((long)puVar1 + 0x10);
          *(long *)((long)puVar1 + 0x10) = lVar4;
          _objc_release(uVar9);
          func_0x00010c23d0a0(*(undefined8 *)((long)puVar1 + 0x10));
          *(undefined8 *)((long)puVar1 + 0xc0) = uVar10;
          *(double *)((long)puVar1 + 200) = param_2;
          *(long *)((long)puVar1 + 0x58) = lVar12;
          puVar11 = (undefined1 *)puVar1;
          func_0x00010bf270e0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = (undefined1 *)puVar1;
          func_0x00010c105800(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c105820(puVar1);
          func_0x00010c0df840(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(puVar11);
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar11);
          puVar11 = (undefined1 *)puVar1;
          func_0x00010bf270c0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c105820(puVar1);
          func_0x00010bef92c0(puVar11);
          _objc_release(puVar11);
        }
        ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar10 = param_1;
        func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        if ((float)uVar10 < 0.01999988) {
          _objc_release(ppuVar7);
          ppuVar7 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111186130;
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar6);
        _objc_release(ppuVar7);
        _objc_release(lVar4);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
    }
    puVar6 = puVar3;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar6;
    _objc_release(uVar10);
    *(long *)((long)puVar1 + 0x28) = lVar2;
    puVar11 = (undefined1 *)puVar1;
    func_0x00010bfb6b20();
    if (puVar11 == (undefined1 *)0x0) {
      _objc_release(puVar3);
      puVar11 = (undefined1 *)0x0;
      goto LAB_10b68ac68;
    }
    func_0x00010bfb6b20(puVar1);
    puVar11 = (undefined1 *)puVar1;
    func_0x00010c105800();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar11;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    _CGImageGetBytesPerRow();
    func_0x00010c23d0a0(puVar1);
    puVar8 = (undefined1 *)puVar1;
    func_0x00010bfb6b20();
    dVar13 = param_2 * (double)puVar5 * (double)puVar8 * 9.5367431640625e-07;
    _objc_release(puVar11);
    if (dVar13 <= 10.0) {
      puVar11 = (undefined1 *)puVar1;
      func_0x00010bfb6b20();
    }
    else {
      puVar11 = (undefined1 *)0x5;
      if (75.0 < dVar13) {
        puVar11 = (undefined1 *)0x1;
      }
    }
    *(undefined1 **)((long)puVar1 + 0x40) = puVar11;
    puVar5 = (undefined1 *)puVar1;
    func_0x00010bfb6b20();
    if (puVar5 <= puVar11) {
      puVar11 = puVar5;
    }
    *(undefined1 **)((long)puVar1 + 0x40) = puVar11;
    puVar6 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    _objc_alloc();
    func_0x00010bfb6b20(puVar1);
    func_0x00010c01d900();
    uVar10 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar6;
    _objc_release(uVar10);
    puVar6 = PTR_PTR_1126e0490;
    func_0x00010c2a2bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined **)((long)puVar1 + 0xa8) = puVar6;
    _objc_release(uVar10);
    uVar10 = uRam00000001137f7830;
    _objc_retain(uRam00000001137f7830);
    _objc_sync_enter(uVar10);
    func_0x00010befa120(uRam00000001137f7830);
    _objc_sync_exit(uVar10);
    _objc_release(uVar10);
    _objc_release(puVar3);
  }
  _objc_retain(puVar1);
  puVar11 = (undefined1 *)puVar1;
LAB_10b68ac68:
  _objc_release(param_5);
  _objc_release(puVar1);
  return puVar11;
}



/* Entry: 10b68acb4; end: 10b68b0f7; -[FLAnimatedImage initWithImageGenerating:timeInterval:] */

undefined1 *
FUN_10b68acb4(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  float fVar13;
  double dVar14;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  uVar10 = param_1;
  _objc_retain(param_5);
  puStack_78 = PTR_PTR_112709b90;
  uStack_80 = param_3;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    lVar4 = *(long *)((long)puVar1 + 0x98);
    func_0x00010bf529e0();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = (undefined1 *)puVar1;
    func_0x00010c105800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar11 == (undefined1 *)0x0) {
      uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
      func_0x00010bfe6be0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)((long)puVar1 + 0x10);
      *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
      _objc_release(uVar9);
      if (*(long *)((long)puVar1 + 0x10) != 0) {
        func_0x00010c23d0a0();
        *(undefined8 *)((long)puVar1 + 0xc0) = uVar10;
        *(double *)((long)puVar1 + 200) = param_2;
        *(undefined8 *)((long)puVar1 + 0x58) = 0;
        puVar11 = (undefined1 *)puVar1;
        func_0x00010bf270e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = (undefined1 *)puVar1;
        func_0x00010c105800(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c105820(puVar1);
        func_0x00010c0df840(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(puVar11);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar11);
        puVar11 = (undefined1 *)puVar1;
        func_0x00010bf270c0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c105820(puVar1);
        func_0x00010bef92c0(puVar11);
        _objc_release(puVar11);
      }
    }
    if (lVar4 != 0) {
      lVar12 = 0;
      do {
        ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar10 = param_1;
        func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
        fVar13 = (float)uVar10;
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        if (fVar13 < 0.01999988) {
          _objc_release(ppuVar7);
          ppuVar7 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111186130;
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar6);
        _objc_release(ppuVar7);
        lVar12 = lVar12 + 1;
      } while (lVar4 != lVar12);
    }
    puVar6 = puVar3;
    func_0x00010bf51e00();
    uVar10 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar6;
    _objc_release(uVar10);
    *(long *)((long)puVar1 + 0x28) = lVar4;
    puVar11 = (undefined1 *)puVar1;
    func_0x00010bfb6b20();
    if (puVar11 == (undefined1 *)0x0) {
      _objc_release(puVar3);
      puVar11 = (undefined1 *)0x0;
      goto LAB_10b68b0ac;
    }
    func_0x00010bfb6b20(puVar1);
    puVar11 = (undefined1 *)puVar1;
    func_0x00010c105800();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar11;
    _objc_retainAutorelease();
    func_0x00010bdc1020();
    _CGImageGetBytesPerRow();
    func_0x00010c23d0a0(puVar1);
    puVar8 = (undefined1 *)puVar1;
    func_0x00010bfb6b20();
    dVar14 = param_2 * (double)puVar5 * (double)puVar8 * 9.5367431640625e-07;
    _objc_release(puVar11);
    if (dVar14 <= 10.0) {
      puVar11 = (undefined1 *)puVar1;
      func_0x00010bfb6b20();
    }
    else {
      puVar11 = (undefined1 *)0x5;
      if (75.0 < dVar14) {
        puVar11 = (undefined1 *)0x1;
      }
    }
    *(undefined1 **)((long)puVar1 + 0x40) = puVar11;
    puVar5 = (undefined1 *)puVar1;
    func_0x00010bfb6b20();
    if (puVar5 <= puVar11) {
      puVar11 = puVar5;
    }
    *(undefined1 **)((long)puVar1 + 0x40) = puVar11;
    puVar6 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    _objc_alloc();
    func_0x00010bfb6b20(puVar1);
    func_0x00010c01d900();
    uVar10 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar6;
    _objc_release(uVar10);
    puVar6 = PTR_PTR_1126e0490;
    func_0x00010c2a2bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + 0xa8);
    *(undefined **)((long)puVar1 + 0xa8) = puVar6;
    _objc_release(uVar10);
    uVar10 = uRam00000001137f7830;
    _objc_retain(uRam00000001137f7830);
    _objc_sync_enter(uVar10);
    func_0x00010befa120(uRam00000001137f7830);
    _objc_sync_exit(uVar10);
    _objc_release(uVar10);
    _objc_release(puVar3);
  }
  _objc_retain(puVar1);
  puVar11 = (undefined1 *)puVar1;
LAB_10b68b0ac:
  _objc_release(param_5);
  _objc_release(puVar1);
  return puVar11;
}



/* Entry: 10b68b0f8; end: 10b68b707; -[FLAnimatedImage initWithAnimatedGIFData:] */

undefined8 ****
FUN_10b68b0f8(undefined8 ***param_1,undefined8 ***param_2,undefined8 ****param_3,undefined8 param_4,
             undefined8 ***param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 ****ppppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  undefined8 ***pppuVar11;
  undefined **ppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ***pppuVar14;
  long lVar15;
  undefined8 ****ppppuVar16;
  undefined8 ***pppuVar17;
  double dVar18;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_5);
  pppuVar4 = param_5;
  func_0x00010c08fa60();
  ppppuVar3 = param_3;
  if (pppuVar4 != (undefined8 ***)0x0) {
    puStack_78 = PTR_PTR_112709b90;
    ppppuVar3 = &pppuStack_80;
    pppuStack_80 = param_3;
    _objc_msgSendSuper2(ppppuVar3,PTR_s_init_1125d9248);
    if (ppppuVar3 == (undefined8 ****)0x0) {
LAB_10b68b6b0:
      _objc_retain(ppppuVar3);
      ppppuVar16 = ppppuVar3;
      goto LAB_10b68b6bc;
    }
    _objc_retain(param_5);
    pppuVar4 = ppppuVar3[7];
    ppppuVar3[7] = param_5;
    _objc_release(pppuVar4);
    pppuVar4 = (undefined8 ***)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    pppuVar14 = ppppuVar3[0xc];
    ppppuVar3[0xc] = pppuVar4;
    _objc_release(pppuVar14);
    pppuVar4 = (undefined8 ***)PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_alloc_init();
    pppuVar14 = ppppuVar3[0xd];
    ppppuVar3[0xd] = pppuVar4;
    _objc_release(pppuVar14);
    pppuVar4 = (undefined8 ***)PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_alloc_init();
    pppuVar14 = ppppuVar3[0xe];
    ppppuVar3[0xe] = pppuVar4;
    _objc_release(pppuVar14);
    pppuVar4 = param_5;
    _CGImageSourceCreateWithData(param_5,0);
    ppppuVar3[0x14] = pppuVar4;
    if (pppuVar4 != (undefined8 ***)0x0) {
      _CGImageSourceGetType();
      iVar2 = (int)pppuVar4;
      _UTTypeConformsTo();
      if (iVar2 != 0) {
        pppuVar5 = ppppuVar3[0x14];
        _CGImageSourceCopyProperties(pppuVar5,0);
        pppuVar4 = pppuVar5;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        pppuVar14 = pppuVar4;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        pppuVar17 = pppuVar14;
        func_0x00010c2827c0();
        ppppuVar3[3] = pppuVar17;
        _objc_release(pppuVar14);
        _objc_release(pppuVar4);
        pppuVar14 = ppppuVar3[0x14];
        _CGImageSourceGetCount();
        pppuVar4 = (undefined8 ***)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71fe0();
        _objc_retainAutoreleasedReturnValue();
        lVar15 = 0;
        if (pppuVar14 != (undefined8 ***)0x0) {
          pppuVar17 = (undefined8 ***)0x0;
          do {
            pppuVar6 = ppppuVar3[0x14];
            _CGImageSourceCreateImageAtIndex(pppuVar6,pppuVar17,0);
            if (pppuVar6 == (undefined8 ***)0x0) {
              lVar15 = lVar15 + 1;
            }
            else {
              pppuVar7 = (undefined8 ***)PTR__OBJC_CLASS___UIImage_1126aea68;
              func_0x00010bfe9240();
              _objc_retainAutoreleasedReturnValue();
              if (pppuVar7 == (undefined8 ***)0x0) {
                lVar15 = lVar15 + 1;
              }
              else {
                ppppuVar16 = ppppuVar3;
                func_0x00010c105800();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (ppppuVar16 == (undefined8 ****)0x0) {
                  _objc_retain(pppuVar7);
                  pppuVar8 = ppppuVar3[2];
                  ppppuVar3[2] = pppuVar7;
                  _objc_release(pppuVar8);
                  func_0x00010c23d0a0(ppppuVar3[2]);
                  ppppuVar3[0x18] = param_1;
                  ppppuVar3[0x19] = param_2;
                  ppppuVar3[0xb] = pppuVar17;
                  ppppuVar16 = ppppuVar3;
                  func_0x00010bf270e0(ppppuVar3);
                  _objc_retainAutoreleasedReturnValue();
                  ppppuVar9 = ppppuVar3;
                  func_0x00010c105800(ppppuVar3);
                  _objc_retainAutoreleasedReturnValue();
                  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                  func_0x00010c105820(ppppuVar3);
                  func_0x00010c0df840(puVar10);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0560(ppppuVar16);
                  _objc_release(puVar10);
                  _objc_release(ppppuVar9);
                  _objc_release(ppppuVar16);
                  ppppuVar16 = ppppuVar3;
                  func_0x00010bf270c0(ppppuVar3);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c105820(ppppuVar3);
                  func_0x00010bef92c0(ppppuVar16);
                  _objc_release(ppppuVar16);
                }
                pppuVar11 = ppppuVar3[0x14];
                _CGImageSourceCopyPropertiesAtIndex(pppuVar11,pppuVar17,0);
                pppuVar8 = pppuVar11;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                ppuVar12 = (undefined **)pppuVar8;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                if ((undefined8 ***)ppuVar12 == (undefined8 ***)0x0) {
                  ppuVar12 = (undefined **)pppuVar8;
                  func_0x00010c0dff20();
                  _objc_retainAutoreleasedReturnValue();
                  if ((undefined8 ***)ppuVar12 == (undefined8 ***)0x0) {
                    if (pppuVar17 == (undefined8 ***)0x0) {
                      ppuVar12 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111186130;
                    }
                    else {
                      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570);
                      _objc_retainAutoreleasedReturnValue();
                      ppuVar12 = (undefined **)pppuVar4;
                      func_0x00010c0e00e0(pppuVar4);
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(puVar10);
                    }
                  }
                }
                func_0x00010bfb2c80(ppuVar12);
                if (SUB84(param_1,0) < 0.01999988) {
                  _objc_release(ppuVar12);
                  ppuVar12 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111186130;
                }
                puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(pppuVar4);
                _objc_release(puVar10);
                _objc_release(ppuVar12);
                _objc_release(pppuVar8);
                _objc_release(pppuVar11);
              }
              _CFRelease(pppuVar6);
              _objc_release(pppuVar7);
            }
            pppuVar17 = (undefined8 ***)((long)pppuVar17 + 1);
          } while (pppuVar14 != pppuVar17);
        }
        pppuVar17 = pppuVar4;
        func_0x00010bf51e00();
        pppuVar6 = ppppuVar3[4];
        ppppuVar3[4] = pppuVar17;
        _objc_release(pppuVar6);
        ppppuVar3[5] = pppuVar14;
        ppppuVar16 = ppppuVar3;
        func_0x00010bfb6b20();
        if (ppppuVar16 == (undefined8 ****)0x0) {
          _objc_release(pppuVar4);
          _objc_release(pppuVar5);
          ppppuVar16 = (undefined8 ****)0x0;
          goto LAB_10b68b6bc;
        }
        func_0x00010bfb6b20(ppppuVar3);
        ppppuVar16 = ppppuVar3;
        func_0x00010c105800();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar9 = ppppuVar16;
        _objc_retainAutorelease();
        func_0x00010bdc1020();
        _CGImageGetBytesPerRow();
        func_0x00010c23d0a0(ppppuVar3);
        ppppuVar13 = ppppuVar3;
        func_0x00010bfb6b20();
        dVar18 = (double)param_2 * (double)ppppuVar9 * (double)(ulong)((long)ppppuVar13 - lVar15) *
                 9.5367431640625e-07;
        _objc_release(ppppuVar16);
        if (dVar18 <= 10.0) {
          ppppuVar16 = ppppuVar3;
          func_0x00010bfb6b20();
        }
        else {
          ppppuVar16 = (undefined8 ****)0x5;
          if (75.0 < dVar18) {
            ppppuVar16 = (undefined8 ****)0x1;
          }
        }
        ppppuVar3[8] = ppppuVar16;
        ppppuVar9 = ppppuVar3;
        func_0x00010bfb6b20();
        if (ppppuVar9 <= ppppuVar16) {
          ppppuVar16 = ppppuVar9;
        }
        ppppuVar3[8] = ppppuVar16;
        pppuVar14 = (undefined8 ***)PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
        _objc_alloc();
        func_0x00010bfb6b20(ppppuVar3);
        func_0x00010c01d900();
        pppuVar17 = ppppuVar3[0xf];
        ppppuVar3[0xf] = pppuVar14;
        _objc_release(pppuVar17);
        pppuVar14 = (undefined8 ***)PTR_PTR_1126e0490;
        func_0x00010c2a2bc0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar17 = ppppuVar3[0x15];
        ppppuVar3[0x15] = pppuVar14;
        _objc_release(pppuVar17);
        uVar1 = uRam00000001137f7830;
        _objc_retain(uRam00000001137f7830);
        _objc_sync_enter(uVar1);
        func_0x00010befa120(uRam00000001137f7830);
        _objc_sync_exit(uVar1);
        _objc_release(uVar1);
        _objc_release(pppuVar4);
        _objc_release(pppuVar5);
        goto LAB_10b68b6b0;
      }
    }
  }
  ppppuVar16 = (undefined8 ****)0x0;
LAB_10b68b6bc:
  _objc_release(param_5);
  _objc_release(ppppuVar3);
  return ppppuVar16;
}



/* Entry: 10b68b708; end: 10b68b76f; -[FLAnimatedImage dealloc] */

void FUN_10b68b708(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    func_0x00010bf2eb80(PTR__OBJC_CLASS___NSObject_1126b1300);
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    _CFRelease();
  }
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0xb8));
  puStack_28 = PTR_PTR_112709b90;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b68b770; end: 10b68b913; -[FLAnimatedImage imageLazilyCachedAtIndex:] */

void FUN_10b68b770(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar4 = param_1;
  func_0x00010bfb6b20();
  if (param_3 < uVar4) {
    func_0x00010c1ec300(param_1,param_2,param_3);
    uVar4 = param_1;
    func_0x00010bf270c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010bf529e0();
    uVar2 = param_1;
    func_0x00010bfb6b20();
    _objc_release(uVar4);
    if (uVar1 < uVar2) {
      uVar4 = param_1;
      func_0x00010bfb6ce0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010c0d3c80();
      _objc_release(uVar4);
      uVar4 = param_1;
      func_0x00010bf270c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cb60(uVar1,param_2,uVar4);
      _objc_release(uVar4);
      uVar4 = param_1;
      func_0x00010c137240(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cb60(uVar1,param_2,uVar4);
      _objc_release(uVar4);
      uVar4 = param_1;
      func_0x00010c105820(param_1);
      func_0x00010c12cb40(uVar1,param_2,uVar4);
      uVar4 = uVar1;
      func_0x00010bf51e00();
      uVar2 = uVar4;
      func_0x00010bf529e0();
      if (uVar2 != 0) {
        func_0x00010bef86a0(param_1,param_2,uVar4);
      }
      _objc_release(uVar4);
      _objc_release(uVar1);
    }
    uVar1 = param_1;
    func_0x00010bf270e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c0e00e0(uVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar1);
    func_0x00010c11be40(param_1);
  }
  else {
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b68b914; end: 10b68baaf; -[FLAnimatedImage addFrameIndexesToCache:] */

void FUN_10b68b914(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c137220();
  lVar2 = param_1;
  func_0x00010bfb6b20();
  lVar3 = param_1;
  func_0x00010c137220();
  lVar4 = param_1;
  func_0x00010c137220();
  func_0x00010bfb6b20(param_1);
  lVar5 = param_1;
  func_0x00010c137240(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef92e0();
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010c15e780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 == 0) {
    puVar6 = &UNK_10f798b81;
    _dispatch_queue_create(&UNK_10f798b81,0);
    uVar7 = *(undefined8 *)(param_1 + 0x88);
    *(undefined **)(param_1 + 0x88) = puVar6;
    _objc_release(uVar7);
  }
  _objc_initWeak(auStack_58,param_1);
  func_0x00010c15e780(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10b68bab0;
  puStack_90 = &UNK_110892018;
  _objc_copyWeak(auStack_80,auStack_58);
  uStack_68 = 0;
  uStack_88 = param_3;
  lStack_78 = lVar1;
  lStack_70 = lVar2 - lVar3;
  lStack_60 = lVar4;
  _objc_retain(param_3);
  func_0x000107c27d8c(param_1,&puStack_a8);
  _objc_release(param_1);
  _objc_release(uStack_88);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 10b68bab0; end: 10b68bd13;  */

void FUN_10b68bab0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c0f76e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1da2e0(uVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10b68bc94;
  puStack_50 = &UNK_110d58a58;
  _objc_retain();
  ppuVar4 = &puStack_68;
  puStack_48 = puVar3;
  _objc_retainBlock(ppuVar4);
  func_0x00010bf97f80(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),0,ppuVar4);
  func_0x00010bf97f80(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),0,ppuVar4);
  uVar2 = uVar1;
  func_0x00010c0f76e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d500(puVar3,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c0f76e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c142da0();
  if ((uVar2 & 1) == 0) {
    uVar2 = uVar1;
    func_0x00010c0f76e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    if (uVar5 != 0) {
      uVar2 = uVar1;
      func_0x00010c0f76e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c2827c0();
      func_0x00010bef86e0(uVar1,param_2,uVar6);
      _objc_release(uVar5);
      _objc_release(uVar2);
    }
  }
  _objc_release(ppuVar4);
  _objc_release(puStack_48);
  _objc_release(puVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b68bd14; end: 10b68bdd3; -[FLAnimatedImage addFrameToCache:] */

void FUN_10b68bd14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x00010c1eefe0(param_1,param_2,1);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c106680(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10b68bdd4; end: 10b68bf4f;  */

void FUN_10b68bdd4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10b68bf50;
    puStack_50 = &UNK_110842a68;
    _objc_retain(param_2);
    uStack_48 = param_2;
    _objc_copyWeak(auStack_40,param_1 + 0x20);
    uStack_38 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_68);
    _objc_destroyWeak(auStack_40);
    _objc_release(uStack_48);
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c0f76e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3c0();
  _objc_release(lVar1);
  func_0x00010c1aa360(param_1);
  lVar1 = param_1;
  func_0x00010c0f76e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010c1eefe0(param_1);
  }
  else {
    lVar1 = param_1;
    func_0x00010c0f76e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    func_0x00010bef86e0(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 10b68bf50; end: 10b68c047;  */

void FUN_10b68bf50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf270e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(lVar2,param_2,lVar4,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar4);
    lVar1 = lVar4;
    func_0x00010bf270c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef92c0();
    _objc_release(lVar1);
    _objc_release(lVar4);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c137240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cb40();
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b68c048; end: 10b68c0db; +[FLAnimatedImage sizeForImage:] */

undefined1  [16]
FUN_10b68c048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_5);
  uVar3 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar4 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  if (param_5 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
    uVar2 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126b4690;
      _objc_opt_class(PTR_PTR_1126b4690);
      uVar2 = param_5;
      _objc_opt_isKindOfClass(param_5,puVar1);
      if ((uVar2 & 1) == 0) goto LAB_10b68c0bc;
    }
    func_0x00010c23d0a0(param_5);
    uVar3 = param_1;
    uVar4 = param_2;
  }
LAB_10b68c0bc:
  _objc_release(param_5);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 10b68c0dc; end: 10b68c30f; -[FLAnimatedImage predrawnImageAtIndex:resultHandler:] */

void FUN_10b68c0dc(undefined *param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0xa0);
  if (lVar1 == 0) {
    puVar2 = *(undefined **)(param_1 + 0x90);
    if (puVar2 == (undefined *)0x0) {
      uVar4 = *(ulong *)(param_1 + 0x98);
      if (uVar4 == 0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        _objc_opt_respondsToSelector(uVar4,PTR_s_imageAtIndex_queue_resultHandler_1125d74c8);
        puVar5 = *(undefined **)(param_1 + 0x98);
        if ((uVar4 & 1) != 0) {
          puVar2 = param_1;
          func_0x00010c15e780(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(param_4);
          func_0x00010bfe6c00(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1aa360(param_1);
          _objc_release(puVar5);
          _objc_release(puVar2);
          puVar5 = param_4;
          goto LAB_10b68c178;
        }
        func_0x00010bfe6be0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        if (param_3 == 0) {
          (**(code **)(param_4 + 0x10))(param_4,puVar5);
          goto LAB_10b68c178;
        }
      }
      goto LAB_10b68c144;
    }
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
    puVar3 = puVar2;
    _objc_opt_isKindOfClass(puVar2,puVar5);
    if (((ulong)puVar3 & 1) == 0) {
      _objc_retain(puVar2);
      puVar5 = puVar2;
      if (param_3 == 0) goto LAB_10b68c2c0;
LAB_10b68c1f8:
      _objc_release(puVar2);
      goto LAB_10b68c144;
    }
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != 0) goto LAB_10b68c1f8;
LAB_10b68c2c0:
    (**(code **)(param_4 + 0x10))(param_4,puVar5);
  }
  else {
    _CGImageSourceCreateImageAtIndex(lVar1,param_3,0);
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    _CGImageRelease(lVar1);
LAB_10b68c144:
    _objc_opt_class(param_1);
    func_0x00010c1066a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,param_1);
    puVar2 = param_1;
  }
  _objc_release(puVar2);
LAB_10b68c178:
  _objc_release(puVar5);
  _objc_release(param_4);
  return;
}



/* Entry: 10b68c310; end: 10b68c373;  */

void FUN_10b68c310(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b68c334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2);
    return;
  }
  puVar1 = PTR_PTR_1126b4690;
  func_0x00010c1066a0(PTR_PTR_1126b4690,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b68c374; end: 10b68c473; -[FLAnimatedImage frameIndexesToCache] */

void FUN_10b68c374(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = param_1;
  func_0x00010bfb6a60();
  puVar2 = param_1;
  func_0x00010bfb6b20();
  if (puVar1 == puVar2) {
    func_0x00010bf00020(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableIndexSet_1126b09a0);
    puVar1 = param_1;
    func_0x00010bfb6a60();
    puVar3 = param_1;
    func_0x00010bfb6b20();
    puVar4 = param_1;
    func_0x00010c137220();
    if (puVar3 + -(long)puVar4 <= puVar1) {
      puVar1 = puVar3 + -(long)puVar4;
    }
    puVar3 = param_1;
    func_0x00010c137220(param_1);
    func_0x00010bef9300(puVar2,param_2,puVar3,puVar1);
    puVar3 = param_1;
    func_0x00010bfb6a60();
    if ((long)puVar3 - (long)puVar1 != 0) {
      func_0x00010bef9300(puVar2,param_2,0,(long)puVar3 - (long)puVar1);
    }
    func_0x00010bf529e0(puVar2);
    func_0x00010bfb6a60(param_1);
    func_0x00010c105820(param_1);
    func_0x00010bef92c0(puVar2,param_2,param_1);
    param_1 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b68c474; end: 10b68c573; -[FLAnimatedImage purgeFrameCacheIfNeeded] */

void FUN_10b68c474(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  ulong uStack_38;
  
  uVar1 = param_1;
  func_0x00010bf270c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = param_1;
  func_0x00010bfb6a60();
  _objc_release(uVar1);
  if (uVar3 < uVar2) {
    uVar1 = param_1;
    func_0x00010bf270c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0d3c80();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bfb6ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cb60(uVar2,param_2,uVar1);
    _objc_release(uVar1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10b68c574;
    puStack_40 = &UNK_110d58a58;
    uStack_38 = param_1;
    func_0x00010bf97fa0(uVar2,param_2,&puStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10b68c574; end: 10b68c62f;  */

void FUN_10b68c574(long param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_2 < param_2 + param_3) {
    do {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf270c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cb40();
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf270e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0(uVar1);
      _objc_release(puVar2);
      _objc_release(uVar1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10b68c630; end: 10b68c68b; -[FLAnimatedImage growFrameCacheSizeAfterMemoryWarning:] */

void FUN_10b68c630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c2827c0(param_3);
  func_0x00010c19f240(param_1,param_2,param_3);
  func_0x00010c2a2ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8f40(0x4008000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b68c68c; end: 10b68c693; -[FLAnimatedImage resetFrameCacheSizeMaxInternal] */

void FUN_10b68c68c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19f250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFrameCacheSizeMaxInternal__1126456b0,0);
  return;
}



/* Entry: 10b68c694; end: 10b68c7ab; -[FLAnimatedImage didReceiveMemoryWarning:] */

void FUN_10b68c694(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c0ca3c0();
  func_0x00010c1c6860(param_1,param_2,lVar2 + 1);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  lVar2 = param_1;
  func_0x00010c2a2ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2eba0(puVar1,param_2,lVar2,PTR_s_growFrameCacheSizeAfterMemoryWar_1125436d8,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d3990);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  lVar2 = param_1;
  func_0x00010c2a2ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2eba0(puVar1,param_2,lVar2,PTR_s_resetFrameCacheSizeMaxInternal_1125436d0,0);
  _objc_release(lVar2);
  func_0x00010c19f240(param_1,param_2,1);
  lVar2 = param_1;
  func_0x00010c0ca3c0();
  if (lVar2 - 1U < 3) {
    func_0x00010c2a2ba0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8f40(0x4000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10b68c7ac; end: 10b68c95f; +[FLAnimatedImage predrawnImageFromImage:] */

void FUN_10b68c7ac(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  double dVar11;
  undefined8 uVar12;
  
  puVar4 = param_5;
  _objc_retain();
  _CGColorSpaceCreateDeviceRGB();
  puVar9 = param_5;
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    _CGColorSpaceGetNumberOfComponents();
    func_0x00010c23d0a0(param_5);
    dVar11 = param_1;
    func_0x00010c14e120(param_5);
    param_1 = param_1 * dVar11;
    uVar10 = (ulong)param_1;
    func_0x00010c23d0a0(param_5);
    func_0x00010c14e120(param_5);
    puVar6 = param_5;
    _objc_retainAutorelease();
    iVar3 = (int)puVar6;
    func_0x00010bdc1020();
    _CGImageGetAlphaInfo();
    iVar2 = iVar3;
    if (iVar3 == 3) {
      iVar2 = 1;
    }
    if (iVar3 == 4) {
      iVar2 = 2;
    }
    iVar1 = 6;
    if (iVar3 != 7) {
      iVar1 = iVar2;
    }
    iVar2 = 6;
    if (iVar3 != 0) {
      iVar2 = iVar1;
    }
    lVar7 = 0;
    _CGBitmapContextCreate
              (0,uVar10,(long)(param_2 * param_1),8,
               ((ulong)(puVar5 + 1) & 0x1fffffffffffffff) * uVar10,puVar4,iVar2);
    _CGColorSpaceRelease(puVar4);
    if (lVar7 != 0) {
      puVar4 = param_5;
      _objc_retainAutorelease(param_5);
      func_0x00010bdc1020();
      uVar12 = 0;
      _CGContextDrawImage(0,0,(double)uVar10,(double)(ulong)(long)(param_2 * param_1),lVar7,puVar4);
      lVar8 = lVar7;
      _CGBitmapContextCreateImage(lVar7);
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14e120(param_5);
      func_0x00010bfe8380(param_5);
      func_0x00010bfe9260(uVar12);
      _objc_retainAutoreleasedReturnValue();
      _CGImageRelease(lVar8);
      _CGContextRelease(lVar7);
      if (puVar4 != (undefined *)0x0) {
        puVar9 = puVar4;
      }
      _objc_retain(puVar9);
      _objc_release(puVar4);
      goto LAB_10b68c93c;
    }
  }
  _objc_retain(param_5);
LAB_10b68c93c:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10b68c960; end: 10b68ca2f; -[FLAnimatedImage description] */

void FUN_10b68c960(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112709b90;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _NSStringFromCGSize();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25cde0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  func_0x00010bfb6b20();
  puVar1 = puVar2;
  func_0x00010c25cde0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b68ca30; end: 10b68ca37; -[FLAnimatedImage posterImage] */

undefined8 FUN_10b68ca30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b68ca38; end: 10b68ca3f; -[FLAnimatedImage size] */

undefined1  [16] FUN_10b68ca38(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0xc0);
}



/* Entry: 10b68ca40; end: 10b68ca47; -[FLAnimatedImage loopCount] */

undefined8 FUN_10b68ca40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b68ca48; end: 10b68ca4f; -[FLAnimatedImage delayTimesForIndexes] */

undefined8 FUN_10b68ca48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b68ca50; end: 10b68ca57; -[FLAnimatedImage frameCount] */

undefined8 FUN_10b68ca50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b68ca58; end: 10b68ca5f; -[FLAnimatedImage frameCacheSizeMax] */

undefined8 FUN_10b68ca58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b68ca60; end: 10b68ca67; -[FLAnimatedImage data] */

undefined8 FUN_10b68ca60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10b68ca68; end: 10b68ca6f; -[FLAnimatedImage frameCacheSizeOptimal] */

undefined8 FUN_10b68ca68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b68ca70; end: 10b68ca77; -[FLAnimatedImage frameCacheSizeMaxInternal] */

undefined8 FUN_10b68ca70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b68ca78; end: 10b68ca7f; -[FLAnimatedImage requestedFrameIndex] */

undefined8 FUN_10b68ca78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b68ca80; end: 10b68ca87; -[FLAnimatedImage setRequestedFrameIndex:] */

void FUN_10b68ca80(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10b68ca88; end: 10b68ca8f; -[FLAnimatedImage posterImageFrameIndex] */

undefined8 FUN_10b68ca88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b68ca90; end: 10b68ca97; -[FLAnimatedImage cachedFramesForIndexes] */

undefined8 FUN_10b68ca90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10b68ca98; end: 10b68ca9f; -[FLAnimatedImage cachedFrameIndexes] */

undefined8 FUN_10b68ca98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10b68caa0; end: 10b68caa7; -[FLAnimatedImage requestedFrameIndexes] */

undefined8 FUN_10b68caa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10b68caa8; end: 10b68caaf; -[FLAnimatedImage allFramesIndexSet] */

undefined8 FUN_10b68caa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10b68cab0; end: 10b68cab7; -[FLAnimatedImage memoryWarningCount] */

undefined8 FUN_10b68cab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10b68cab8; end: 10b68cabf; -[FLAnimatedImage setMemoryWarningCount:] */

void FUN_10b68cab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 10b68cac0; end: 10b68cac7; -[FLAnimatedImage serialQueue] */

undefined8 FUN_10b68cac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10b68cac8; end: 10b68cacf; -[FLAnimatedImage animationImages] */

undefined8 FUN_10b68cac8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10b68cad0; end: 10b68cad7; -[FLAnimatedImage imageGenerating] */

undefined8 FUN_10b68cad0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10b68cad8; end: 10b68cadf; -[FLAnimatedImage imageSource] */

undefined8 FUN_10b68cad8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10b68cae0; end: 10b68cae7; -[FLAnimatedImage weakProxy] */

undefined8 FUN_10b68cae0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 10b68cae8; end: 10b68caef; -[FLAnimatedImage pendingIndexes] */

undefined8 FUN_10b68cae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}


