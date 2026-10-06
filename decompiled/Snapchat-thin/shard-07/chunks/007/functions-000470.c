/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1058d630c; end: 1058d63b7;  */

void FUN_1058d630c(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 == 0) {
      func_0x00010be770e0(param_1);
    }
    else {
      puVar1 = PTR_PTR_1126b1370;
      _objc_alloc(PTR_PTR_1126b1370);
      func_0x00010c037e60();
      lVar2 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar2);
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa0a0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058d63b8; end: 1058d659f; -[SCMemoriesNotificationProcessor _tryCloudSyncAndRepost:] */

void FUN_1058d63b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0720c0();
  _objc_release(lVar3);
  if ((int)lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf79180();
    _objc_release(uVar5);
    if (lVar2 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010bf6ade0();
      _objc_release(uVar6);
      if ((int)uVar5 != 0) {
        lVar3 = param_1;
        func_0x00010be20d00();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          func_0x00010bea5f20(param_1);
          _objc_initWeak(auStack_48,param_1);
          uVar5 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010c269d40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_50,auStack_48);
          func_0x00010c27bdc0(uVar5);
          _objc_release(uVar5);
          _objc_destroyWeak(auStack_50);
          _objc_destroyWeak(auStack_48);
        }
        _objc_release(lVar3);
      }
    }
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1058d65a0; end: 1058d660f;  */

void FUN_1058d65a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be69620(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058d6610; end: 1058d67cf; -[SCMemoriesNotificationProcessor _onGenerationIdReady:snapId:] */

void FUN_1058d6610(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  puVar4 = param_3;
  func_0x00010be20d00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126b1370;
      _objc_alloc(PTR_PTR_1126b1370);
      ppuStack_78 = &PTR____CFConstantStringClassReference_110dcab78;
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_80 = param_4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_80,1);
      _objc_retainAutoreleasedReturnValue();
      ppuStack_70 = &PTR____CFConstantStringClassReference_110e0a878;
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = param_3;
      puStack_68 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_88,1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_60 = puVar5;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_68,&ppuStack_78,
                          2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c037e60(puVar3,param_2,lVar1,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      param_1 = param_1 + 0x28;
      _objc_loadWeakRetained();
      lVar2 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010befa0a0();
      _objc_release(lVar2);
      _objc_release(param_1);
      _objc_release(puVar3);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _os_unfair_lock_lock(param_3 + 0x48);
  uVar7 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010c0e00e0(uVar7,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_3 + 0x48);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1058d67d0; end: 1058d6847; -[SCMemoriesNotificationProcessor _getNotificationByGenerationId:] */

void FUN_1058d67d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058d6848; end: 1058d68c3; -[SCMemoriesNotificationProcessor _setNotification:forGenerationId:] */

void FUN_1058d6848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x48);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,param_3,param_4);
  _os_unfair_lock_unlock(param_1 + 0x48);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058d68c4; end: 1058d69c3; -[SCMemoriesNotificationProcessor _prefetchCollectionsAndRepostNotification:] */

void FUN_1058d68c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c1073e0(0x402e000000000000,uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1058d69c4; end: 1058d6a73;  */

void FUN_1058d69c4(long param_1,int param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126b1370;
      _objc_alloc(PTR_PTR_1126b1370);
      func_0x00010c037e60();
      lVar1 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar1);
      lVar3 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa0a0();
      _objc_release(lVar3);
      _objc_release(lVar1);
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058d6a74; end: 1058d6ae7; -[SCMemoriesNotificationProcessor .cxx_destruct] */

void FUN_1058d6a74(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058d6ae8; end: 1058d6b9b; -[SCMemoriesNotificationsProcessorEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d6ae8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1 + _DAT_11272bc5c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12dd20();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_48 = PTR_PTR_1126eac18;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058d6b9c; end: 1058d6c2b; -[SCMemoriesNotificationsProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d6b9c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272bc78);
  _objc_destroyWeak(param_1 + _DAT_11272bc74);
  _objc_destroyWeak(param_1 + _DAT_11272bc70);
  _objc_destroyWeak(param_1 + _DAT_11272bc6c);
  _objc_destroyWeak(param_1 + _DAT_11272bc68);
  _objc_destroyWeak(param_1 + _DAT_11272bc5c);
  _objc_destroyWeak(param_1 + _DAT_11272bc64);
  _objc_destroyWeak(param_1 + _DAT_11272bc60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272bc58,0);
  return;
}



/* Entry: 1058d6c2c; end: 1058d6cb7;  */

void FUN_1058d6c2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar4 = PTR_PTR_1126bfc18;
  _objc_alloc(PTR_PTR_1126bfc18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf51e00(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf51e00(uVar6);
  func_0x00010bffab60(puVar4,param_2,uVar1,uVar3,uVar2,uVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058d6cb8; end: 1058d6d07; -[SCMemoriesRecentThumbnailProvidingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d6cb8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272bc88);
  _objc_destroyWeak(param_1 + _DAT_11272bc84);
  _objc_destroyWeak(param_1 + _DAT_11272bc7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272bc80);
  return;
}



/* Entry: 1058d6d08; end: 1058d70b7; -[SCMemoriesRecentThumbnailProvider initWithCachingMediaManager:filePathManager:mergedDataSource:thumbnailSizes:cornerRadii:] */

undefined8 *
FUN_1058d6d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126eac20;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[8];
    puVar1[8] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[9];
    puVar1[9] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[10];
    puVar1[10] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c0ba140();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_6;
    _objc_release(uVar2);
    uVar8 = param_6;
    func_0x00010bf529e0();
    puVar1[0xb] = uVar8;
    _objc_retain(param_7);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    uVar8 = param_6;
    func_0x00010bf529e0();
    if (uVar8 != 0) {
      uVar8 = 0;
      do {
        uVar2 = puVar1[0xc];
        puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar2);
        _objc_release(puVar3);
        uVar8 = uVar8 + 1;
        uVar4 = param_6;
        func_0x00010bf529e0();
      } while (uVar8 < uVar4);
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_initWeak(auStack_78,puVar1);
    puVar5 = PTR_PTR_1126b6ae8;
    func_0x00010c22ba80(PTR_PTR_1126b6ae8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae960;
    puVar6 = PTR_PTR_1126bf9b8;
    func_0x00010c122640(PTR_PTR_1126bf9b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c7a60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126ae970;
    func_0x00010c0c7320(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c2a14e0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar7);
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1058d70b8; end: 1058d7147;  */

void FUN_1058d70b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c141620();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    func_0x00010be4e520(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1058d7148; end: 1058d7267; -[SCMemoriesRecentThumbnailProvider dealloc] */

void FUN_1058d7148(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  plVar2 = &lStack_120;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c281a60(*(undefined8 *)(param_1 + 0x30));
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar7 = *(long *)(param_1 + 0x38);
  _objc_retain(lVar7);
  puVar6 = &uStack_110;
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_100;
    do {
      lVar10 = 0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        func_0x00010c281a60(*(undefined8 *)(lStack_108 + lVar10 * 8));
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar6 = &uStack_110;
      lVar1 = lVar7;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar7);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x38));
  puStack_118 = PTR_PTR_1126eac20;
  lStack_120 = param_1;
  _objc_msgSendSuper2(&lStack_120,PTR_s_dealloc_112525b20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_retain(puVar6);
  func_0x00010bdc3540(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar8 = *(undefined8 *)((long)plVar2 + 8);
  puVar5 = puVar6;
  _objc_retainBlock(puVar6);
  _objc_release(puVar6);
  func_0x00010c1d0560(uVar8);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058d7268; end: 1058d72ff; -[SCMemoriesRecentThumbnailProvider addObserver:] */

void FUN_1058d7268(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_retain(param_3);
  func_0x00010bdc3540(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  _objc_retainBlock(param_3);
  _objc_release(param_3);
  func_0x00010c1d0560(uVar4,param_2,uVar3,puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058d7300; end: 1058d7307; -[SCMemoriesRecentThumbnailProvider removeObserver:] */

void FUN_1058d7300(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeObjectForKey__112628f18);
  return;
}



/* Entry: 1058d7308; end: 1058d7407; -[SCMemoriesRecentThumbnailProvider notifyObservers] */

void FUN_1058d7308(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 in_x5;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
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
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0dfe00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = auStack_c8;
  uVar6 = 0x10;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        lVar3 = *(long *)(lStack_108 + lVar8 * 8);
        (**(code **)(lVar3 + 0x10))(lVar3,*(undefined8 *)(param_1 + 0x60));
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      puVar5 = auStack_c8;
      uVar6 = 0x10;
      lVar2 = lVar1;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(puVar5);
  _objc_retain(uVar6);
  _objc_retain(in_x5);
  _objc_initWeak(auStack_158,lVar1);
  uVar9 = *(undefined8 *)(lVar1 + 0x18);
  _objc_copyWeak(auStack_160,auStack_158);
  _objc_retain(puVar5);
  func_0x00010c0f7fc0(uVar9);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_160);
  _objc_destroyWeak(auStack_158);
  _objc_release(in_x5);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  return;
}



/* Entry: 1058d7408; end: 1058d7523; -[SCMemoriesRecentThumbnailProvider dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_1058d7408(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058d7524; end: 1058d7697;  */

void FUN_1058d7524(double param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  double dVar12;
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
  lVar1 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    param_1 = 0.0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar8 = *(long *)(param_3 + 0x20);
    _objc_retain(lVar8);
    lVar2 = lVar8;
    func_0x00010bf52a60(lVar8,param_4,&uStack_120,auStack_d8,0x10);
    if (lVar2 != 0) {
      lVar10 = *plStack_110;
      do {
        lVar11 = 0;
        do {
          if (*plStack_110 != lVar10) {
            _objc_enumerationMutation(lVar8);
          }
          uVar9 = *(ulong *)(lStack_118 + lVar11 * 8);
          uVar3 = uVar9;
          func_0x00010c07b240();
          if ((uVar3 & 1) == 0) {
            uVar3 = uVar9;
            func_0x00010c0e0160();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (((uVar3 != 0) && (uVar3 = uVar9, func_0x00010c080ca0(), (uVar3 & 1) == 0)) &&
               (uVar3 = uVar9, func_0x00010b5fc5e4(), (int)uVar3 != 0)) {
              _objc_retain(uVar9);
              goto LAB_1058d763c;
            }
          }
          lVar11 = lVar11 + 1;
        } while (lVar2 != lVar11);
        lVar2 = lVar8;
        func_0x00010bf52a60(lVar8,param_4,&uStack_120,auStack_d8,0x10);
      } while (lVar2 != 0);
    }
    uVar9 = 0;
LAB_1058d763c:
    _objc_release(lVar8);
    func_0x00010be1b1a0(lVar1);
    _objc_release(uVar9);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  dVar12 = param_1;
  _objc_release(puVar4);
  lVar2 = lVar1;
  func_0x00010bf52580(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(lVar8);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010c26e2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc10a0();
  _objc_release(lVar8);
  _objc_release();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromCGSize(dVar12,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 1.0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e0a8b8;
  }
  else {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e0a8d8;
  }
  func_0x00010c14de00(puVar4,param_4,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  func_0x00010bdc2c60(uVar5,param_4,puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1058d7698; end: 1058d7833; -[SCMemoriesRecentThumbnailProvider _recentThumbnailPathAtIndex:] */

void FUN_1058d7698(double param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  double dVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  dVar7 = param_1;
  _objc_release(puVar1);
  lVar2 = param_3;
  func_0x00010bf52580(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c26e2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc10a0();
  _objc_release(lVar3);
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _NSStringFromCGSize(dVar7,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 1.0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e0a8b8;
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110e0a8d8;
  }
  func_0x00010c14de00(puVar1,param_4,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010bdc2c60(uVar4,param_4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1058d7834; end: 1058d7d13; -[SCMemoriesRecentThumbnailProvider _generateGalleryThumbnailsWithLatestEntries:] */

void FUN_1058d7834(undefined1 *param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_2d8 [8];
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 auStack_288 [8];
  undefined8 uStack_280;
  undefined8 uStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar14 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 != (undefined8 *)0x0) {
    puVar1 = param_3;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    if (puVar2 != puVar1) {
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      puVar14 = puVar3;
      func_0x00010c0720c0();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = param_1;
        func_0x00010c26e2c0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf529e0();
        _objc_release(puVar5);
        if (puVar6 != (undefined1 *)0x0) {
          uStack_218 = 0;
          uStack_220 = 0;
          uStack_208 = 0;
          uStack_210 = 0;
          lStack_238 = 0;
          uStack_240 = 0;
          uStack_228 = 0;
          plStack_230 = (long *)0x0;
          lVar16 = *(long *)(param_1 + 0x38);
          _objc_retain(lVar16);
          puVar14 = &uStack_240;
          lVar13 = lVar16;
          func_0x00010bf52a60();
          if (lVar13 != 0) {
            lVar12 = *plStack_230;
            do {
              lVar15 = 0;
              do {
                if (*plStack_230 != lVar12) {
                  _objc_enumerationMutation(lVar16);
                }
                func_0x00010c281a60(*(undefined8 *)(lStack_238 + lVar15 * 8));
                lVar15 = lVar15 + 1;
              } while (lVar13 != lVar15);
              puVar14 = &uStack_240;
              lVar13 = lVar16;
              func_0x00010bf52a60();
            } while (lVar13 != 0);
          }
          _objc_release(lVar16);
          if (puVar1 == (undefined8 *)0x0) {
            func_0x00010bddf4e0(param_1);
          }
          else {
            puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            uStack_258 = 0;
            uStack_260 = 0;
            uStack_248 = 0;
            uStack_250 = 0;
            uStack_278 = 0;
            uStack_280 = 0;
            uStack_268 = 0;
            plStack_270 = (long *)0x0;
            _objc_retain(param_3);
            puVar14 = param_3;
            func_0x00010bf52a60();
            if (puVar14 != (undefined8 *)0x0) {
              lVar13 = *plStack_270;
              do {
                puVar2 = (undefined8 *)0x0;
                do {
                  if (*plStack_270 != lVar13) {
                    _objc_enumerationMutation(param_3);
                  }
                  lVar12 = *(long *)(param_1 + 0x50);
                  func_0x00010c269d40();
                  _objc_retainAutoreleasedReturnValue();
                  lVar16 = lVar12;
                  func_0x00010bfa7340();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar12);
                  lVar12 = lVar16;
                  func_0x00010bf529e0();
                  if (lVar12 != 0) {
                    lVar12 = lVar16;
                    func_0x00010c089820(lVar16);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010befa120(puVar7);
                    _objc_release(lVar12);
                  }
                  _objc_release(lVar16);
                  puVar2 = (undefined8 *)((long)puVar2 + 1);
                } while (puVar14 != puVar2);
                puVar14 = param_3;
                func_0x00010bf52a60();
              } while (puVar14 != (undefined8 *)0x0);
            }
            _objc_release(param_3);
            func_0x00010be1b1e0(param_1);
            puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            param_2 = param_1;
            _objc_initWeak(auStack_288);
            uStack_2a8 = 0;
            uStack_2b0 = 0;
            uStack_298 = 0;
            uStack_2a0 = 0;
            uStack_2c8 = 0;
            uStack_2d0 = 0;
            uStack_2b8 = 0;
            plStack_2c0 = (long *)0x0;
            _objc_retain(param_3);
            puVar14 = &uStack_2d0;
            puVar2 = param_3;
            func_0x00010bf52a60();
            if (puVar2 != (undefined8 *)0x0) {
              lVar13 = *plStack_2c0;
              do {
                puVar14 = (undefined8 *)0x0;
                do {
                  if (*plStack_2c0 != lVar13) {
                    _objc_enumerationMutation(param_3);
                  }
                  uVar9 = *(undefined8 *)(param_1 + 0x50);
                  func_0x00010c269d40(uVar9);
                  _objc_retainAutoreleasedReturnValue();
                  uVar10 = *(undefined8 *)(param_1 + 0x18);
                  func_0x00010c11de00(uVar10);
                  _objc_retainAutoreleasedReturnValue();
                  param_2 = auStack_288;
                  _objc_copyWeak(auStack_2d8);
                  _objc_retain(puVar8);
                  uVar11 = uVar9;
                  func_0x00010c0e0800(uVar9);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar10);
                  _objc_release(uVar9);
                  func_0x00010befa120(*(undefined8 *)(param_1 + 0x38));
                  _objc_release(uVar11);
                  _objc_release(puVar8);
                  _objc_destroyWeak(auStack_2d8);
                  puVar14 = (undefined8 *)((long)puVar14 + 1);
                } while (puVar2 != puVar14);
                puVar14 = &uStack_2d0;
                puVar2 = param_3;
                func_0x00010bf52a60();
              } while (puVar2 != (undefined8 *)0x0);
            }
            _objc_release(param_3);
            _objc_destroyWeak(auStack_288);
            _objc_release(puVar8);
            _objc_release(puVar7);
          }
        }
      }
    }
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_288);
    __Unwind_Resume();
    _objc_retain(param_2);
    _objc_retain(puVar14);
    puVar1 = param_3 + 5;
    _objc_loadWeakRetained();
    if ((puVar1 != (undefined8 *)0x0) && (puVar2 = puVar14, func_0x00010bf4b900(), (int)puVar2 != 0)
       ) {
      if (param_2 == (undefined1 *)0x0) {
        lVar13 = 0;
      }
      else {
        lVar16 = puVar1[10];
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar16;
        func_0x00010bfa7340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar16);
      }
      lVar16 = lVar13;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      if (lVar16 != 0) {
        func_0x00010befa120(param_3[4]);
        lVar12 = param_3[4];
        func_0x00010bf529e0();
        if (lVar12 == 2) {
          func_0x00010be1b1e0(puVar1);
        }
      }
      _objc_release(lVar16);
      _objc_release(lVar13);
    }
    _objc_release(puVar1);
    _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1058d7d14; end: 1058d7e1f;  */

void FUN_1058d7d14(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (uVar2 = param_3, func_0x00010bf4b900(), (int)uVar2 != 0)) {
    if (param_2 == 0) {
      lVar5 = 0;
    }
    else {
      lVar3 = *(long *)(lVar1 + 0x50);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bfa7340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    lVar3 = lVar5;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
      lVar4 = *(long *)(param_1 + 0x20);
      func_0x00010bf529e0();
      if (lVar4 == 2) {
        func_0x00010be1b1e0(lVar1);
      }
    }
    _objc_release(lVar3);
    _objc_release(lVar5);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058d7e20; end: 1058d8057; -[SCMemoriesRecentThumbnailProvider _generateGalleryThumbnailsWithLatestEntry:] */

void FUN_1058d7e20(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (uVar1 != param_3) {
    func_0x00010bf97200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf97200(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      lVar4 = param_1;
      func_0x00010c26e2c0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf529e0();
      _objc_release(lVar4);
      if (lVar5 != 0) {
        _objc_retain(param_3);
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        *(ulong *)(param_1 + 0x20) = param_3;
        _objc_release(uVar6);
        func_0x00010c281a60(*(undefined8 *)(param_1 + 0x30));
        if (param_3 == 0) {
          func_0x00010bddf4e0(param_1);
        }
        else {
          uVar7 = *(undefined8 *)(param_1 + 0x50);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar7;
          func_0x00010bfa7340();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          uVar7 = uVar6;
          func_0x00010c089820(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be1b1c0(param_1);
          _objc_initWeak(auStack_58,param_1);
          uVar8 = *(undefined8 *)(param_1 + 0x50);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c11de00(uVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_60,auStack_58);
          uVar10 = uVar8;
          func_0x00010c0e0800();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)(param_1 + 0x30) = uVar10;
          _objc_release(uVar11);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_destroyWeak(auStack_60);
          _objc_destroyWeak(auStack_58);
          _objc_release(uVar7);
          _objc_release(uVar6);
        }
      }
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1058d8058; end: 1058d8143;  */

void FUN_1058d8058(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (uVar2 = param_3, func_0x00010bf4b900(), (int)uVar2 != 0)) {
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfa7340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
    }
    uVar1 = uVar2;
    func_0x00010c089820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1b1c0(param_1);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058d8144; end: 1058d83cf; -[SCMemoriesRecentThumbnailProvider _generateGalleryThumbnailsWithLatestSnaps:] */

void FUN_1058d8144(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined1 auStack_88 [8];
  
  _objc_retain(param_5);
  uVar1 = param_5;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    uVar1 = param_5;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) {
      func_0x00010bddf4e0(param_3);
    }
    else {
      uVar8 = param_5;
      func_0x00010bf529e0();
      if (uVar8 != 0) {
        uVar8 = 0;
        do {
          uVar2 = param_5;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = *(long *)(param_3 + 0x58) * uVar8;
          lVar9 = lVar10;
          dVar11 = param_1;
          if (0 < *(long *)(param_3 + 0x58)) {
            do {
              puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
              func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14e120();
              param_1 = dVar11;
              _objc_release(puVar3);
              lVar4 = param_3;
              func_0x00010c26e2c0(param_3);
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar4;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bdc10a0();
              _objc_release(lVar5);
              _objc_release(lVar4);
              _objc_initWeak(auStack_88,param_3);
              uVar6 = *(undefined8 *)(param_3 + 0x40);
              func_0x00010c269d40(uVar6);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = *(undefined8 *)(param_3 + 0x18);
              func_0x00010c11de00(uVar7);
              _objc_retainAutoreleasedReturnValue();
              param_1 = dVar11 * param_1;
              param_2 = dVar11 * param_2;
              _objc_copyWeak(auStack_98,auStack_88);
              _objc_retain(uVar2);
              lStack_90 = lVar9;
              func_0x00010c134d00(param_1,param_2,uVar6);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(uVar7);
              _objc_release(uVar6);
              _objc_release(uVar2);
              _objc_destroyWeak(auStack_98);
              _objc_destroyWeak(auStack_88);
              lVar9 = lVar9 + 1;
              dVar11 = param_1;
            } while (lVar9 < *(long *)(param_3 + 0x58) + lVar10);
          }
          _objc_release(uVar2);
          uVar8 = uVar8 + 1;
          uVar2 = param_5;
          func_0x00010bf529e0();
        } while (uVar8 < uVar2);
      }
    }
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 1058d83d0; end: 1058d8433;  */

void FUN_1058d83d0(long param_1,long param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    func_0x00010bede5e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058d8434; end: 1058d8783; -[SCMemoriesRecentThumbnailProvider _generateGalleryThumbnailsWithLatestSnap:] */

void FUN_1058d8434(double param_1,double param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  double dVar14;
  undefined1 auStack_98 [8];
  undefined4 uStack_90;
  undefined1 auStack_88 [8];
  
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_3 + 0x28);
  if (uVar1 != param_5) {
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_5;
    func_0x00010c241220(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_5);
      uVar4 = *(undefined8 *)(param_3 + 0x28);
      *(ulong *)(param_3 + 0x28) = param_5;
      _objc_release(uVar4);
      if (param_5 == 0) {
        func_0x00010bddf4e0(param_3);
      }
      else if (0 < *(long *)(param_3 + 0x58)) {
        lVar13 = 0;
        do {
          lVar5 = param_3;
          func_0x00010be86f20(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x00010bf69bc0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bfacbe0();
          if ((int)puVar7 == 0) {
LAB_1058d85c0:
            puVar7 = PTR__OBJC_CLASS___UIScreen_1126aea10;
            func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14e120();
            dVar14 = param_1;
            _objc_release(puVar7);
            lVar10 = param_3;
            func_0x00010c26e2c0(param_3);
            _objc_retainAutoreleasedReturnValue();
            lVar11 = lVar10;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc10a0();
            _objc_release(lVar11);
            _objc_release(lVar10);
            _objc_initWeak(auStack_88,param_3);
            uVar4 = *(undefined8 *)(param_3 + 0x40);
            func_0x00010c269d40(uVar4);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = *(undefined8 *)(param_3 + 0x18);
            func_0x00010c11de00(uVar12);
            _objc_retainAutoreleasedReturnValue();
            dVar14 = param_1 * dVar14;
            param_2 = param_1 * param_2;
            _objc_copyWeak(auStack_98,auStack_88);
            _objc_retain(param_5);
            uStack_90 = (undefined4)lVar13;
            func_0x00010c134d00(dVar14,param_2,uVar4);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(uVar12);
            _objc_release(uVar4);
            _objc_release(param_5);
            _objc_destroyWeak(auStack_98);
            _objc_destroyWeak(auStack_88);
          }
          else {
            puVar7 = puVar6;
            func_0x00010bf63aa0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar7 == (undefined *)0x0) goto LAB_1058d85c0;
            puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            _objc_alloc();
            func_0x00010c008340();
            uVar1 = param_5;
            func_0x00010c241220(param_5);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010c0720c0();
            _objc_release(uVar1);
            _objc_release(puVar8);
            _objc_release(puVar7);
            dVar14 = param_1;
            if (((ulong)puVar9 & 1) == 0) goto LAB_1058d85c0;
          }
          _objc_release(puVar6);
          _objc_release(lVar5);
          lVar13 = lVar13 + 1;
          param_1 = dVar14;
        } while (lVar13 < *(long *)(param_3 + 0x58));
      }
    }
  }
  _objc_release(param_5);
  return;
}



/* Entry: 1058d8784; end: 1058d87f3;  */

void FUN_1058d8784(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (param_2 != 0)) {
    if (*(long *)(lVar1 + 0x28) == *(long *)(param_1 + 0x20)) {
      func_0x00010bede5e0(lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058d87f4; end: 1058d8af3; -[SCMemoriesRecentThumbnailProvider _updateRecentThumbnailImage:snap:index:] */

void FUN_1058d87f4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  double dVar9;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_2;
  func_0x00010c26e2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_2;
    func_0x00010c26e2c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc10a0();
    dVar9 = param_1;
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010bf52580(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    fVar8 = SUB84(dVar9,0);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar3);
    uVar4 = param_4;
    func_0x00010bf5c8c0(param_1 * dVar9,param_1 * dVar9,dVar9 * (double)fVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    uVar5 = uVar4;
    _UIImagePNGRepresentation(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010be86f20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      func_0x00010c14e020(uVar5);
      puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_5;
      func_0x00010c241220(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1894a0(puVar3);
      _objc_release(uVar7);
      _objc_release(uVar6);
      uVar6 = param_5;
      func_0x00010bf2a8a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_5;
      func_0x00010bf313a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_1058d8af4;
      puStack_b0 = &UNK_110863fc8;
      lStack_a8 = param_2;
      uStack_88 = param_6;
      _objc_retain(uVar4);
      uStack_a0 = uVar4;
      uStack_98 = uVar6;
      uStack_90 = uVar7;
      _objc_retain(uVar7);
      _objc_retain(uVar6);
      func_0x000100162d98("APPSTORE",&puStack_c8);
      _objc_release(uStack_90);
      _objc_release(uStack_98);
      _objc_release(uStack_a0);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(puVar3);
    }
    _objc_release(lVar1);
    _objc_release(uVar5);
    param_4 = uVar4;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1058d8af4; end: 1058d8ba3;  */

void FUN_1058d8af4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bfc28;
  _objc_alloc(PTR_PTR_1126bfc28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26e2c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01c340(puVar1);
  func_0x00010c1d04c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dd410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_notifyObservers_112614f18);
  return;
}



/* Entry: 1058d8ba4; end: 1058d8c93; -[SCMemoriesRecentThumbnailProvider _cleanupAndReloadRecentThumbnail] */

void FUN_1058d8ba4(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar6 = param_1;
  func_0x00010c26e2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010bf529e0();
  _objc_release(uVar6);
  if (uVar1 != 0) {
    uVar6 = 0;
    do {
      uVar1 = param_1;
      func_0x00010be86f20(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfacbe0();
      if ((int)puVar3 != 0) {
        func_0x00010c12cc40(puVar2);
      }
      _objc_release(puVar2);
      _objc_release(uVar1);
      uVar6 = uVar6 + 1;
      uVar1 = param_1;
      func_0x00010c26e2c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010bf529e0();
      _objc_release(uVar1);
    } while (uVar6 < uVar4);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010be4e530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loadRecentThumbnail_1125712e8);
  return;
}



/* Entry: 1058d8c94; end: 1058d8f43; -[SCMemoriesRecentThumbnailProvider _loadRecentThumbnail] */

void FUN_1058d8c94(double param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined *puStack_78;
  
  uVar7 = param_2;
  func_0x00010c26e2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar7;
  func_0x00010bf529e0();
  _objc_release(uVar7);
  if (uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_2;
    func_0x00010c26e2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010bf529e0();
    _objc_release(uVar7);
    if (uVar1 != 0) {
      uVar7 = 0;
      do {
        uVar1 = param_2;
        func_0x00010be86f20();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010c08fa60();
        dVar8 = param_1;
        if (uVar3 == 0) {
LAB_1058d8e68:
          puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
        }
        else {
          puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
          func_0x00010c14d020();
          _objc_retainAutoreleasedReturnValue();
          dVar8 = param_1;
          if (puVar4 == (undefined *)0x0) goto LAB_1058d8e68;
          puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
          func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c14e120();
          dVar8 = param_1;
          _objc_release(puVar5);
          func_0x00010c14e120(puVar4);
          puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
          if (dVar8 != param_1) {
            _objc_retainAutorelease(puVar4);
            func_0x00010bdc1020();
            func_0x00010bfe8380(puVar4);
            func_0x00010bfe9260(puVar5);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar4);
            puVar4 = puVar5;
            dVar8 = param_1;
          }
          puVar5 = PTR_PTR_1126bfc28;
          _objc_alloc(PTR_PTR_1126bfc28);
          uVar3 = param_2;
          func_0x00010c26e2c0(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar3;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01c340(puVar5);
          _objc_release(uVar6);
          _objc_release(uVar3);
          func_0x00010befa120(puVar2);
          _objc_release(puVar5);
        }
        _objc_release(puVar4);
        _objc_release(uVar1);
        uVar7 = uVar7 + 1;
        uVar1 = param_2;
        func_0x00010c26e2c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        func_0x00010bf529e0();
        _objc_release(uVar1);
        param_1 = dVar8;
      } while (uVar7 < uVar3);
    }
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1058d8f44;
    puStack_88 = &UNK_110841f80;
    uStack_80 = param_2;
    puStack_78 = puVar2;
    _objc_retain(puVar2);
    func_0x000100162d98("APPSTORE",&puStack_a0);
    _objc_release(puStack_78);
    _objc_release(puVar2);
  }
  return;
}



/* Entry: 1058d8f44; end: 1058d8f7f;  */

void FUN_1058d8f44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0d3c80();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0dd410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_notifyObservers_112614f18);
  return;
}



/* Entry: 1058d8f80; end: 1058d8f87; -[SCMemoriesRecentThumbnailProvider recentThumbnails] */

undefined8 FUN_1058d8f80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1058d8f88; end: 1058d8f8f; -[SCMemoriesRecentThumbnailProvider thumbnailSizes] */

undefined8 FUN_1058d8f88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1058d8f90; end: 1058d8f97; -[SCMemoriesRecentThumbnailProvider cornerRadii] */

undefined8 FUN_1058d8f90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1058d8f98; end: 1058d904b; -[SCMemoriesRecentThumbnailProvider .cxx_destruct] */

void FUN_1058d8f98(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 1058d904c; end: 1058d91bf; -[SCMemoriesThumbnailLoggerImpl initWithBlizzardLogger:samplingProvider:crashLogger:] */

undefined1 *
FUN_1058d904c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eac28;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bfc30;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058d91c0; end: 1058d922b; -[SCMemoriesThumbnailLoggerImpl thumbnailGenerationId:] */

void FUN_1058d91c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e0a498);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc2600(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058d922c; end: 1058d93df; -[SCMemoriesThumbnailLoggerImpl thumbnailGenerationStart:trigger:] */

void FUN_1058d922c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c26dc40(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1058d92f4;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  lStack_40 = lVar1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(lVar1);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(lStack_40);
  _objc_release(param_4);
  _objc_release(lVar1);
  return;
}



/* Entry: 1058d93e0; end: 1058d950f; -[SCMemoriesThumbnailLoggerImpl updateThumbnailGeneration:key:value:] */

void FUN_1058d93e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
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



/* Entry: 1058d9510; end: 1058d967b;  */

void FUN_1058d9510(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  float fVar7;
  
  lVar1 = param_2 + 0x38;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (*(long *)(param_2 + 0x20) == 0)) goto LAB_1058d9660;
  lVar2 = *(long *)(lVar1 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) goto LAB_1058d9660;
  uVar3 = *(ulong *)(lVar1 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (uVar4 == 0) {
LAB_1058d9630:
    puVar6 = *(undefined **)(lVar1 + 0x30);
    func_0x00010c0e00e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560();
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar6);
    if ((uVar3 & 1) == 0) goto LAB_1058d9630;
    uVar3 = *(ulong *)(param_2 + 0x30);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_opt_isKindOfClass(uVar3,puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((uVar3 & 1) == 0) goto LAB_1058d9630;
    func_0x00010bfb2c80(uVar4);
    fVar7 = param_1;
    func_0x00010bfb2c80(uVar4);
    func_0x00010c0df740(param_1 + fVar7,puVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c0e00e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560();
    _objc_release(uVar5);
  }
  _objc_release(puVar6);
  _objc_release(uVar4);
LAB_1058d9660:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1058d967c; end: 1058d97b3; -[SCMemoriesThumbnailLoggerImpl logThumbnailLoadingFinishedStartingAt:endingAt:generationId:snapMediaType:snapMediaFormat:spectaclesContentId:trigger:result:] */

void FUN_1058d967c(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  double dStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  dStack_78 = param_2 - param_1;
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1058d97b4;
  puStack_a8 = &UNK_1108bd3f0;
  lStack_a0 = param_3;
  uStack_98 = param_5;
  uStack_90 = param_8;
  uStack_88 = param_9;
  uStack_80 = param_10;
  uStack_70 = param_6;
  uStack_68 = param_7;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1,param_4,&puStack_c0);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  return;
}



/* Entry: 1058d97b4; end: 1058d97d3;  */

void FUN_1058d97b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be59bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x20),PTR_s__logThumbnailLoadingFinishedForG_112574090,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x50),
             *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 1058d97d4; end: 1058d9913; -[SCMemoriesThumbnailLoggerImpl logMemoriesCellView:entryExternalId:entryType:memSessionId:galleryCollectionCategory:itemPosition:itemCount:userInitiated:] */

void FUN_1058d97d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bfc38;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1968c0();
  _objc_release(param_3);
  func_0x00010c196b80(puVar1,param_2,param_5);
  func_0x00010c199560(puVar1,param_2,param_4);
  func_0x00010c1a1a00(puVar1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c1a1a20(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1b61a0(puVar1,param_2,param_8);
  func_0x00010c20cda0(puVar1,param_2,param_9);
  func_0x00010c2270e0(puVar1,param_2,param_10);
  func_0x00010c1c58e0(puVar1,param_2,param_6);
  _objc_release(param_6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058d9914; end: 1058d9ba3; -[SCMemoriesThumbnailLoggerImpl _logThumbnailLoadingFinishedForGenerationId:latencyInSeconds:snapMediaType:snapMediaFormat:spectaclesContentId:trigger:result:durationInSec:] */

void FUN_1058d9914(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (param_5 != 0) {
    lVar2 = *(long *)(param_3 + 0x30);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar3 = *(long *)(param_3 + 0x30);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126bfc40;
      func_0x00010bdc13e0(PTR_PTR_1126bfc40);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar2 != 0;
      _objc_release();
      _objc_release(puVar4);
      _objc_release(lVar3);
      uVar5 = *(undefined8 *)(param_3 + 0x30);
      func_0x00010c0e00e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc8a20(param_3);
      _objc_release(uVar5);
      func_0x00010c12d3e0(*(undefined8 *)(param_3 + 0x30));
      goto LAB_1058d9a40;
    }
  }
  bVar1 = true;
LAB_1058d9a40:
  puVar4 = PTR_PTR_1126bfc40;
  func_0x00010bdc1fa0(PTR_PTR_1126bfc40);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_10;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  if ((int)uVar5 != 0) {
    func_0x00010be50c40(param_1,param_3);
  }
  puVar4 = PTR_PTR_1126bfc40;
  func_0x00010bdc1f80(PTR_PTR_1126bfc40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(param_10);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126bfc40;
  if (bVar1) {
    func_0x00010bdc29e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdc29c0(PTR_PTR_1126bfc40);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  lVar2 = param_3;
  func_0x00010be82a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_1058da15c(uVar5,param_10,puVar4,lVar2,1);
  _objc_release(lVar2);
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010be82a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_1058da41c(uVar5,puVar4,param_3,(long)(param_2 * 1000.0));
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1058d9ba4; end: 1058d9ccb; -[SCMemoriesThumbnailLoggerImpl _logBlizzardThumbnailDisplayLatency:includeDownload:snapMediaType:snapMediaFormat:spectaclesContentId:] */

void FUN_1058d9ba4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c232d60(0x3ff0000000000000);
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    puVar2 = PTR_PTR_1126bfc48;
    _objc_opt_new(PTR_PTR_1126bfc48);
    func_0x00010c1b91e0();
    func_0x00010c226180(puVar2,param_2,param_3);
    func_0x00010b5f57cc(param_4);
    func_0x00010c1a1ba0(puVar2,param_2,param_4);
    if (param_5 < 5) {
      uVar3 = *(undefined8 *)(&UNK_10ddc02f0 + param_5 * 8);
    }
    else {
      uVar3 = 0xffffffffffffffff;
    }
    func_0x00010c1c4760(puVar2,param_2,uVar3);
    func_0x00010c2075c0(puVar2,param_2,param_6);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1058d9ccc; end: 1058d9cff; -[SCMemoriesThumbnailLoggerImpl _processedTrigger:] */

void FUN_1058d9ccc(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110de5c58;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1058d9d00; end: 1058d9e8f; -[SCMemoriesThumbnailLoggerImpl _addTimerForCachingMediaManagerStepLatencyWithDetailsDict:] */

void FUN_1058d9d00(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126bfc40;
  func_0x00010bdc1400();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar3);
      }
      uVar9 = *(undefined8 *)((long)puVar10 * 8);
      uVar5 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar7 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar6);
      uVar1 = uVar5;
      if ((uVar7 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar5);
      uVar5 = uVar1;
      func_0x00010c0b4ca0();
      _objc_release(uVar1);
      if (0 < (long)uVar5) {
        FUN_1058da64c(*(undefined8 *)(param_1 + 0x28),uVar9,uVar5);
      }
      puVar10 = puVar10 + 1;
    } while (puVar4 != puVar10);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1058d9e90; end: 1058d9f23; -[SCMemoriesThumbnailLoggerImpl .cxx_destruct] */

void FUN_1058d9e90(long param_1)

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



/* Entry: 1058d9f24; end: 1058d9f73; -[SCMemoriesThumbnailLoggerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058d9f24(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272bce8);
  _objc_destroyWeak(param_1 + _DAT_11272bce4);
  _objc_destroyWeak(param_1 + _DAT_11272bce0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272bcdc);
  return;
}



/* Entry: 1058d9f74; end: 1058d9fe7; -[SCGrapheneMemoriesThumbnailMetric2 init] */

undefined1 * FUN_1058d9f74(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eac30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1058d9fe8; end: 1058da15b;  */

/* WARNING: Removing unreachable block (ram,0x0001058da3e4) */

undefined *
FUN_1058d9fe8(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 *unaff_x24;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [3];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f30722c;
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
    puVar1 = &UNK_1108bd450;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar10 = &uStack_140;
  pcStack_88 = FUN_1058da15c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar3 = puVar5;
  puVar12 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  _objc_retain(param_4);
  if (puVar2 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f30722c;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_120,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f30722c;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_108,puVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f30722c;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_f0,puVar3);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_d8,3);
    puVar8 = &UNK_1108bd4a0;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108bd4a0,&uStack_140,param_5);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x00010007e5dc(&puStack_128);
    lVar14 = 0;
    puVar3 = puVar10;
    puVar12 = param_5;
    do {
      if ((&cStack_d9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_140;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(puVar5);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar10 = auStack_120;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar10);
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_148 = FUN_1058da41c;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar8;
  puVar11 = puVar3;
  puStack_180 = unaff_x24;
  puStack_178 = puVar10;
  puStack_170 = puVar2;
  puStack_168 = param_4;
  puStack_160 = puVar5;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_90;
  _objc_retain(puVar8);
  _objc_retain(puVar3);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f30722c;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f30722c;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_1a0,puVar5);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar9 = &UNK_1108bd4f0;
    puVar10 = &uStack_1d8;
    puVar11 = &uStack_1d8;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108bd4f0,puVar11,puVar12);
    puStack_1c0 = puVar10;
    func_0x00010007e5dc(&puStack_1c0);
    lVar14 = 0;
    puVar5 = auStack_1b8;
    do {
      if ((&cStack_189)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar1 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    _objc_release(puVar3);
    if (cStack_1a1 < '\0') {
      __ZdlPv(auStack_1b8[0]);
    }
    _objc_release(puVar3);
    _objc_release(puVar8);
    puVar2 = puVar1;
    __Unwind_Resume();
    pcStack_1e8 = FUN_1058da64c;
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_220 = unaff_x24;
    puStack_218 = puVar10;
    puStack_210 = puVar5;
    puStack_208 = puVar1;
    puStack_200 = puVar3;
    puStack_1f8 = puVar8;
    pppuStack_1f0 = &ppuStack_150;
    _objc_retain(puVar9);
    if (puVar2 != (undefined *)0x0) {
      plVar13 = *(long **)(puVar2 + 8);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar1 = &UNK_10f30722c;
      }
      else {
        puVar1 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_240,puVar1);
      uStack_260 = 0;
      uStack_258 = 0;
      uStack_250 = 0;
      func_0x00010007e1e8(&uStack_260,auStack_240,&lStack_228,1);
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108bd540,&uStack_260,puVar11);
      puStack_248 = (undefined1 *)&uStack_260;
      func_0x00010007e5dc(&puStack_248);
      if (cStack_229 < '\0') {
        __ZdlPv(auStack_240[0]);
      }
    }
    puVar1 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
      ___stack_chk_fail();
      _objc_release(puVar9);
      _objc_release(puVar9);
      puVar2 = puVar1;
      __Unwind_Resume();
      ppuVar6 = &puStack_290;
      pcStack_268 = FUN_1058da7c0;
      puStack_288 = PTR_PTR_1126eac38;
      puStack_290 = puVar2;
      puStack_280 = puVar1;
      puStack_278 = puVar9;
      pppuStack_270 = &pppuStack_1f0;
      _objc_msgSendSuper2(&puStack_290,PTR_s_init_1125d9248);
      if (ppuVar6 != (undefined **)0x0) {
        puVar7 = (undefined1 *)ppuVar6;
        (*(code *)PTR_DAT_113403208)();
        *(undefined1 **)((long)ppuVar6 + 8) = puVar7;
      }
      return (undefined *)ppuVar6;
    }
    return puVar1;
  }
  return puVar1;
}



/* Entry: 1058da15c; end: 1058da41b;  */

/* WARNING: Removing unreachable block (ram,0x0001058da3e4) */

undefined *
FUN_1058da15c(long param_1,undefined *param_2,undefined8 *param_3,undefined *param_4,
             undefined *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *unaff_x24;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar5 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f30722c;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f30722c;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f30722c;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_1108bd4a0;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108bd4a0,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    puVar2 = puVar5;
    puVar6 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar5 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_c8 = FUN_1058da41c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar1;
  puVar10 = puVar2;
  puStack_100 = unaff_x24;
  puStack_f8 = puVar5;
  puStack_f0 = puVar3;
  puStack_e8 = param_4;
  puStack_e0 = param_3;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar12 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f30722c;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_138;
    func_0x00010002b838(auStack_138,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f30722c;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_120,puVar5);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar9 = &UNK_1108bd4f0;
    puVar5 = &uStack_158;
    puVar10 = &uStack_158;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108bd4f0,puVar10,puVar6);
    puStack_140 = puVar5;
    func_0x00010007e5dc(&puStack_140);
    lVar11 = 0;
    puVar12 = auStack_138;
    do {
      if ((&cStack_109)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar2);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar3 = puVar6;
    __Unwind_Resume();
    pcStack_168 = FUN_1058da64c;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_1a0 = unaff_x24;
    puStack_198 = puVar5;
    puStack_190 = puVar12;
    puStack_188 = puVar6;
    puStack_180 = puVar2;
    puStack_178 = puVar1;
    ppuStack_170 = &puStack_d0;
    _objc_retain(puVar9);
    if (puVar3 != (undefined *)0x0) {
      plVar13 = *(long **)(puVar3 + 8);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar1 = &UNK_10f30722c;
      }
      else {
        puVar1 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      func_0x00010002b838(auStack_1c0,puVar1);
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      func_0x00010007e1e8(&uStack_1e0,auStack_1c0,&lStack_1a8,1);
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108bd540,&uStack_1e0,puVar10);
      puStack_1c8 = (undefined1 *)&uStack_1e0;
      func_0x00010007e5dc(&puStack_1c8);
      if (cStack_1a9 < '\0') {
        __ZdlPv(auStack_1c0[0]);
      }
    }
    puVar1 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(puVar9);
      _objc_release(puVar9);
      puVar6 = puVar1;
      __Unwind_Resume();
      ppuVar7 = &puStack_210;
      pcStack_1e8 = FUN_1058da7c0;
      puStack_208 = PTR_PTR_1126eac38;
      puStack_210 = puVar6;
      puStack_200 = puVar1;
      puStack_1f8 = puVar9;
      pppuStack_1f0 = &ppuStack_170;
      _objc_msgSendSuper2(&puStack_210,PTR_s_init_1125d9248);
      if (ppuVar7 != (undefined **)0x0) {
        puVar8 = (undefined1 *)ppuVar7;
        (*(code *)PTR_DAT_113403208)();
        *(undefined1 **)((long)ppuVar7 + 8) = puVar8;
      }
      return (undefined *)ppuVar7;
    }
    return puVar1;
  }
  return puVar6;
}



/* Entry: 1058da41c; end: 1058da64b;  */

undefined * FUN_1058da41c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
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
  puVar2 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar9 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f30722c;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f30722c;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_1108bd4f0;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108bd4f0,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar7 = 0;
    puVar9 = auStack_78;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_1058da64c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar9;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar4 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f30722c;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108bd540,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = puVar3;
  __Unwind_Resume();
  ppuVar5 = &puStack_150;
  pcStack_128 = FUN_1058da7c0;
  puStack_148 = PTR_PTR_1126eac38;
  puStack_150 = puVar4;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_msgSendSuper2(&puStack_150,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    puVar6 = (undefined1 *)ppuVar5;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar5 + 8) = puVar6;
  }
  return (undefined *)ppuVar5;
}



/* Entry: 1058da64c; end: 1058da7bf;  */

undefined * FUN_1058da64c(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f30722c;
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
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108bd540,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar3 = &puStack_b0;
  pcStack_88 = FUN_1058da7c0;
  puStack_a8 = PTR_PTR_1126eac38;
  puStack_b0 = puVar2;
  puStack_a0 = puVar1;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    puVar4 = (undefined1 *)ppuVar3;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar3 + 8) = puVar4;
  }
  return (undefined *)ppuVar3;
}



/* Entry: 1058da7c0; end: 1058da833; -[SCGrapheneMemoriesSnapDocSaveMetric2 init] */

undefined1 * FUN_1058da7c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eac38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1058da834; end: 1058da9a7;  */

char * FUN_1058da834(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  char *pcStack_280;
  undefined *puStack_278;
  char *pcStack_270;
  char *pcStack_268;
  undefined8 ***pppuStack_260;
  code *pcStack_258;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  undefined8 auStack_228 [2];
  char cStack_211;
  undefined8 auStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  char acStack_198 [24];
  char *pcStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar8 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108bd600,acStack_80,param_4);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_5 = param_4;
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcVar7 = acStack_100;
  pcStack_88 = FUN_1058da9a8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  pcVar6 = pcVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar5 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108bd650,acStack_100,pcVar3);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar6 = pcVar7;
    param_5 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar6 = pcVar7;
      param_5 = pcVar3;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_1058dab1c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar5;
  pcVar2 = pcVar6;
  ppuStack_110 = &puStack_90;
  _objc_retain(pcVar5);
  _objc_retain(pcVar6);
  if (pcVar3 != (char *)0x0) {
    plVar8 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_178,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_198[0] = '\0';
    acStack_198[1] = '\0';
    acStack_198[2] = '\0';
    acStack_198[3] = '\0';
    acStack_198[4] = '\0';
    acStack_198[5] = '\0';
    acStack_198[6] = '\0';
    acStack_198[7] = '\0';
    acStack_198[8] = '\0';
    acStack_198[9] = '\0';
    acStack_198[10] = '\0';
    acStack_198[0xb] = '\0';
    acStack_198[0xc] = '\0';
    acStack_198[0xd] = '\0';
    acStack_198[0xe] = '\0';
    acStack_198[0xf] = '\0';
    acStack_198[0x10] = '\0';
    acStack_198[0x11] = '\0';
    acStack_198[0x12] = '\0';
    acStack_198[0x13] = '\0';
    acStack_198[0x14] = '\0';
    acStack_198[0x15] = '\0';
    acStack_198[0x16] = '\0';
    acStack_198[0x17] = '\0';
    func_0x00010007e1e8(acStack_198,auStack_178,&lStack_148,2);
    pcVar1 = "";
    pcVar2 = acStack_198;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108bd6a0,pcVar2,param_5);
    pcStack_180 = acStack_198;
    func_0x00010007e5dc(&pcStack_180);
    lVar9 = 0;
    do {
      if ((&cStack_149)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(pcVar6);
  pcVar3 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar5);
  __Unwind_Resume();
  pcStack_1a8 = FUN_1058dad4c;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(pcVar1);
  _objc_retain(pcVar2);
  if (pcVar3 != (char *)0x0) {
    _objc_retain(pcVar1);
    _objc_retain(pcVar2);
    plVar8 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_228,pcVar3);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar2);
      pcVar3 = pcVar2;
      func_0x00010bdc3520(pcVar2);
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_210,pcVar3);
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_238 = 0;
    func_0x00010007e1e8(&uStack_248,auStack_228,&lStack_1f8,2);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108bd6f0,&uStack_248,(long)(param_1 * 1000.0));
    puStack_230 = &uStack_248;
    func_0x00010007e5dc(&puStack_230);
    lVar9 = 0;
    do {
      if ((&cStack_1f9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_210 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
    _objc_release(pcVar2);
    _objc_release(pcVar1);
  }
  pcVar3 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  if (cStack_211 < '\0') {
    __ZdlPv(auStack_228[0]);
  }
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  _objc_release(pcVar2);
  _objc_release(pcVar1);
  __Unwind_Resume();
  ppcVar4 = &pcStack_280;
  pcStack_258 = FUN_1058dafbc;
  puStack_278 = PTR_PTR_1126eac40;
  pcStack_280 = pcVar3;
  pcStack_270 = pcVar2;
  pcStack_268 = pcVar1;
  pppuStack_260 = &pppuStack_1b0;
  _objc_msgSendSuper2(&pcStack_280,PTR_s_init_1125d9248);
  if (ppcVar4 != (char **)0x0) {
    pcVar1 = (char *)ppcVar4;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar4 + 8) = pcVar1;
  }
  return (char *)ppcVar4;
}



/* Entry: 1058da9a8; end: 1058dab1b;  */

char * FUN_1058da9a8(double param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  char *pcStack_200;
  undefined *puStack_1f8;
  char *pcStack_1f0;
  char *pcStack_1e8;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 auStack_1a8 [2];
  char cStack_191;
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar5 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108bd650,acStack_80,param_4);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar5 = pcVar2;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar5 = pcVar2;
      param_5 = param_4;
    }
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_1058dab1c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar6 = pcVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar4 = "";
    pcVar6 = acStack_118;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108bd6a0,pcVar6,param_5);
    pcStack_100 = acStack_118;
    func_0x00010007e5dc(&pcStack_100);
    lVar8 = 0;
    do {
      if ((&cStack_c9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(pcVar5);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_128 = FUN_1058dad4c;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_130 = &puStack_90;
  _objc_retain(pcVar4);
  _objc_retain(pcVar6);
  if (pcVar2 != (char *)0x0) {
    _objc_retain(pcVar4);
    _objc_retain(pcVar6);
    plVar7 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_1a8,pcVar1);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar1 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_190,pcVar1);
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    func_0x00010007e1e8(&uStack_1c8,auStack_1a8,&lStack_178,2);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108bd6f0,&uStack_1c8,(long)(param_1 * 1000.0));
    puStack_1b0 = &uStack_1c8;
    func_0x00010007e5dc(&puStack_1b0);
    lVar8 = 0;
    do {
      if ((&cStack_179)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
    _objc_release(pcVar6);
    _objc_release(pcVar4);
  }
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar4);
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_release(pcVar6);
  if (cStack_191 < '\0') {
    __ZdlPv(auStack_1a8[0]);
  }
  _objc_release(pcVar6);
  _objc_release(pcVar4);
  _objc_release(pcVar6);
  _objc_release(pcVar4);
  __Unwind_Resume();
  ppcVar3 = &pcStack_200;
  pcStack_1d8 = FUN_1058dafbc;
  puStack_1f8 = PTR_PTR_1126eac40;
  pcStack_200 = pcVar1;
  pcStack_1f0 = pcVar6;
  pcStack_1e8 = pcVar4;
  pppuStack_1e0 = &ppuStack_130;
  _objc_msgSendSuper2(&pcStack_200,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 1058dab1c; end: 1058dad4b;  */

char * FUN_1058dab1c(double param_1,long param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  char *pcStack_180;
  undefined *puStack_178;
  char *pcStack_170;
  char *pcStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar4 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    pcVar4 = acStack_98;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108bd6a0,pcVar4,param_5);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar5 = 0;
    do {
      if ((&cStack_49)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x30);
  }
  _objc_release(param_4);
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_a8 = FUN_1058dad4c;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    _objc_retain(pcVar1);
    _objc_retain(pcVar4);
    plVar6 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_128,pcVar2);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar4);
      pcVar2 = pcVar4;
      func_0x00010bdc3520(pcVar4);
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_110,pcVar2);
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    func_0x00010007e1e8(&uStack_148,auStack_128,&lStack_f8,2);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108bd6f0,&uStack_148,(long)(param_1 * 1000.0));
    puStack_130 = &uStack_148;
    func_0x00010007e5dc(&puStack_130);
    lVar5 = 0;
    do {
      if ((&cStack_f9)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != -0x30);
    _objc_release(pcVar4);
    _objc_release(pcVar1);
  }
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  if (cStack_111 < '\0') {
    __ZdlPv(auStack_128[0]);
  }
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  _objc_release(pcVar4);
  _objc_release(pcVar1);
  __Unwind_Resume();
  ppcVar3 = &pcStack_180;
  pcStack_158 = FUN_1058dafbc;
  puStack_178 = PTR_PTR_1126eac40;
  pcStack_180 = pcVar2;
  pcStack_170 = pcVar4;
  pcStack_168 = pcVar1;
  ppuStack_160 = &puStack_b0;
  _objc_msgSendSuper2(&pcStack_180,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 1058dad4c; end: 1058dafbb;  */

char * FUN_1058dad4c(double param_1,long param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char **ppcVar2;
  long *plVar3;
  long lVar4;
  char *pcStack_e0;
  undefined *puStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    func_0x00010007e1e8(&uStack_a8,auStack_88,&lStack_58,2);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_1108bd6f0,&uStack_a8,(long)(param_1 * 1000.0));
    puStack_90 = &uStack_a8;
    func_0x00010007e5dc(&puStack_90);
    lVar4 = 0;
    do {
      if ((&cStack_59)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  pcVar1 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return param_3;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  ppcVar2 = &pcStack_e0;
  pcStack_b8 = FUN_1058dafbc;
  puStack_d8 = PTR_PTR_1126eac40;
  pcStack_e0 = pcVar1;
  pcStack_d0 = param_4;
  pcStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_e0,PTR_s_init_1125d9248);
  if (ppcVar2 != (char **)0x0) {
    pcVar1 = (char *)ppcVar2;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar2 + 8) = pcVar1;
  }
  return (char *)ppcVar2;
}



/* Entry: 1058dafbc; end: 1058db02f; -[SCGrapheneMemoriesSnapDocEncryptionMetric2 init] */

undefined1 * FUN_1058dafbc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eac40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1058db030; end: 1058db0a7;  */

void FUN_1058db030(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108bd7a0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1058db0a8; end: 1058db11f;  */

void FUN_1058db0a8(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108bd7f0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1058db120; end: 1058db293;  */

void FUN_1058db120(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108bd840,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_1058db294;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_1108bd890,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 1058db294; end: 1058db30b;  */

void FUN_1058db294(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108bd890,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1058db30c; end: 1058db383;  */

void FUN_1058db30c(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108bd8e0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1058db384; end: 1058db4f7;  */

char * FUN_1058db384(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  long *plVar4;
  char *pcStack_b0;
  undefined *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1108bd930,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume();
  ppcVar3 = &pcStack_b0;
  pcStack_88 = FUN_1058db4f8;
  puStack_a8 = PTR_PTR_1126eac48;
  pcStack_b0 = pcVar2;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&pcStack_b0,PTR_s_init_1125d9248);
  if (ppcVar3 != (char **)0x0) {
    pcVar1 = (char *)ppcVar3;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)ppcVar3 + 8) = pcVar1;
  }
  return (char *)ppcVar3;
}



/* Entry: 1058db4f8; end: 1058db56b; -[SCGrapheneMemoriesSnapDocTranscodingMetric2 init] */

undefined1 * FUN_1058db4f8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eac48;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1058db56c; end: 1058db6df;  */

void FUN_1058db56c(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  char acStack_198 [24];
  char *pcStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108bd9a0,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar8 = acStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  pcVar7 = pcVar3;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_c8,1);
    pcVar4 = "";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108bd9f0,acStack_100,pcVar3);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    pcVar7 = pcVar8;
    param_4 = pcVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      pcVar7 = pcVar8;
      param_4 = pcVar3;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar7;
  _objc_retain(pcVar4);
  _objc_retain(pcVar7);
  if (pcVar3 != (char *)0x0) {
    plVar9 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_178,pcVar1);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar1 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x00010002b838(auStack_160,pcVar1);
    acStack_198[0] = '\0';
    acStack_198[1] = '\0';
    acStack_198[2] = '\0';
    acStack_198[3] = '\0';
    acStack_198[4] = '\0';
    acStack_198[5] = '\0';
    acStack_198[6] = '\0';
    acStack_198[7] = '\0';
    acStack_198[8] = '\0';
    acStack_198[9] = '\0';
    acStack_198[10] = '\0';
    acStack_198[0xb] = '\0';
    acStack_198[0xc] = '\0';
    acStack_198[0xd] = '\0';
    acStack_198[0xe] = '\0';
    acStack_198[0xf] = '\0';
    acStack_198[0x10] = '\0';
    acStack_198[0x11] = '\0';
    acStack_198[0x12] = '\0';
    acStack_198[0x13] = '\0';
    acStack_198[0x14] = '\0';
    acStack_198[0x15] = '\0';
    acStack_198[0x16] = '\0';
    acStack_198[0x17] = '\0';
    func_0x00010007e1e8(acStack_198,auStack_178,&lStack_148,2);
    pcVar1 = acStack_198;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108bda40,pcVar1,param_4);
    pcStack_180 = acStack_198;
    func_0x00010007e5dc(&pcStack_180);
    lVar10 = 0;
    do {
      if ((&cStack_149)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar3 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar7);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(pcVar7);
  _objc_release(pcVar4);
  __Unwind_Resume();
  _objc_retain(pcVar1);
  pcVar4 = pcVar1;
  func_0x00010010fab4(pcVar1,PTR_DAT_1126a4fd0);
  pcVar2 = pcVar1;
  if ((int)pcVar4 == 0) {
    pcVar2 = (char *)0x0;
  }
  _objc_retain(pcVar2);
  lVar10 = *(long *)(pcVar3 + 0x38);
  func_0x00010bf529e0();
  if ((lVar10 != 0) && ((pcVar3[0xb8] & 1U) == 0)) {
    func_0x00010c08bb60(pcVar2);
    uVar5 = *(undefined8 *)(pcVar3 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b1d20();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(pcVar3 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1965c0();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(pcVar3 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2188e0();
    _objc_release(uVar5);
    if (*(long *)(pcVar3 + 0x58) != 0) {
      uVar5 = *(undefined8 *)(pcVar3 + 0x10);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0(*(undefined8 *)(pcVar3 + 0x58));
      func_0x00010c218900(uVar5);
      _objc_release(uVar5);
    }
    puVar6 = PTR_PTR_1126bfc60;
    func_0x00010c139100(PTR_PTR_1126bfc60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea5e20(pcVar3);
    _objc_release(puVar6);
  }
  _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 1058db6e0; end: 1058db853;  */

void FUN_1058db6e0(long param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  pcVar2 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108bd9f0,acStack_80,param_3);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar3 = pcVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar3 = pcVar2;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar3;
  _objc_retain(pcVar1);
  _objc_retain(pcVar3);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_f8,pcVar2);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar2 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar6 = acStack_118;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108bda40,pcVar6,param_4);
    pcStack_100 = acStack_118;
    func_0x00010007e5dc(&pcStack_100);
    lVar8 = 0;
    do {
      if ((&cStack_c9)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar1);
  __Unwind_Resume();
  _objc_retain(pcVar6);
  pcVar3 = pcVar6;
  func_0x00010010fab4(pcVar6,PTR_DAT_1126a4fd0);
  pcVar1 = pcVar6;
  if ((int)pcVar3 == 0) {
    pcVar1 = (char *)0x0;
  }
  _objc_retain(pcVar1);
  lVar8 = *(long *)(pcVar2 + 0x38);
  func_0x00010bf529e0();
  if ((lVar8 != 0) && ((pcVar2[0xb8] & 1U) == 0)) {
    func_0x00010c08bb60(pcVar1);
    uVar4 = *(undefined8 *)(pcVar2 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b1d20();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(pcVar2 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1965c0();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(pcVar2 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2188e0();
    _objc_release(uVar4);
    if (*(long *)(pcVar2 + 0x58) != 0) {
      uVar4 = *(undefined8 *)(pcVar2 + 0x10);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0(*(undefined8 *)(pcVar2 + 0x58));
      func_0x00010c218900(uVar4);
      _objc_release(uVar4);
    }
    puVar5 = PTR_PTR_1126bfc60;
    func_0x00010c139100(PTR_PTR_1126bfc60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea5e20(pcVar2);
    _objc_release(puVar5);
  }
  _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar6);
  return;
}



/* Entry: 1058db854; end: 1058dba83;  */

void FUN_1058db854(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,pcVar2);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar2 = acStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108bda40,pcVar2,param_4);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar7 = 0;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(param_3);
  pcVar3 = param_2;
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
  _objc_retain(pcVar2);
  pcVar4 = pcVar2;
  func_0x00010010fab4(pcVar2,PTR_DAT_1126a4fd0);
  pcVar1 = pcVar2;
  if ((int)pcVar4 == 0) {
    pcVar1 = (char *)0x0;
  }
  _objc_retain(pcVar1);
  lVar7 = *(long *)(pcVar3 + 0x38);
  func_0x00010bf529e0();
  if ((lVar7 != 0) && ((pcVar3[0xb8] & 1U) == 0)) {
    func_0x00010c08bb60(pcVar1);
    uVar5 = *(undefined8 *)(pcVar3 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b1d20();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(pcVar3 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1965c0();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(pcVar3 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2188e0();
    _objc_release(uVar5);
    if (*(long *)(pcVar3 + 0x58) != 0) {
      uVar5 = *(undefined8 *)(pcVar3 + 0x10);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0(*(undefined8 *)(pcVar3 + 0x58));
      func_0x00010c218900(uVar5);
      _objc_release(uVar5);
    }
    puVar6 = PTR_PTR_1126bfc60;
    func_0x00010c139100(PTR_PTR_1126bfc60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea5e20(pcVar3);
    _objc_release(puVar6);
  }
  _objc_release(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
  return;
}



/* Entry: 1058dba84; end: 1058dbbd7; -[SCMemoriesSnapFeedManager launchSnapFeedIfNecessary:] */

void FUN_1058dba84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a4fd0);
  uVar1 = param_3;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010bf529e0();
  if ((lVar2 != 0) && ((*(byte *)(param_1 + 0xb8) & 1) == 0)) {
    func_0x00010c08bb60(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b1d20();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1965c0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2188e0();
    _objc_release(uVar3);
    if (*(long *)(param_1 + 0x58) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0(*(undefined8 *)(param_1 + 0x58));
      func_0x00010c218900(uVar3);
      _objc_release(uVar3);
    }
    puVar4 = PTR_PTR_1126bfc60;
    func_0x00010c139100(PTR_PTR_1126bfc60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea5e20(param_1);
    _objc_release(puVar4);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058dbbd8; end: 1058dbbff; -[SCMemoriesSnapFeedManager observeSnapFeedEligibility] */

void FUN_1058dbbd8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058dbc00; end: 1058dbc0f; -[SCMemoriesSnapFeedManager setSnapFeedHintVisibility:shouldPreventLaunch:] */

void FUN_1058dbc00(long param_1,undefined8 param_2,byte param_3,byte param_4)

{
  *(byte *)(param_1 + 0xb8) = param_4 & (param_3 ^ 1);
  return;
}



/* Entry: 1058dbc10; end: 1058dc183;  */

void FUN_1058dbc10(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x23;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar12 = param_2;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c0720c0();
    if ((int)lVar13 != 0) {
      lVar13 = param_2;
      func_0x00010c154b60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar13;
      func_0x00010bfb0d80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
      unaff_x23 = param_2;
      func_0x00010c154b60();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = unaff_x23;
      func_0x00010c154b60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      if ((lVar13 != 0) && (lVar3 != 0)) {
        unaff_x23 = lVar13;
        func_0x000107e75d08();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar13;
        func_0x00010bfa34e0();
        if (lVar4 == 1) {
          uVar10 = *(undefined8 *)(lVar2 + 0x50);
          func_0x00010c0e00e0(uVar10);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          FUN_1058dc240(lVar3,uVar10);
          _objc_retainAutoreleasedReturnValue();
          if (lVar4 == 0) {
            _objc_release(uVar10);
          }
          else {
            _objc_initWeak(&uStack_f8,lVar2);
            puVar8 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
            _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
            func_0x00010c1ec960();
            func_0x00010c18ba80(puVar8);
            func_0x00010c1cc000(puVar8);
            puVar9 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
            func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
            _objc_retainAutoreleasedReturnValue();
            _objc_copyWeak(auStack_190,&uStack_f8);
            _objc_retain(lVar12);
            _objc_retain(lVar4);
            _objc_retain(lVar3);
            func_0x00010c1357a0(0x4059000000000000,0x4059000000000000,puVar9);
            _objc_release(puVar9);
            _objc_release(lVar3);
            _objc_release(lVar4);
            _objc_release(lVar12);
            _objc_destroyWeak(auStack_190);
            _objc_release(puVar8);
            _objc_destroyWeak(&uStack_f8);
            _objc_release(lVar4);
            _objc_release(uVar10);
          }
        }
        else if (lVar4 == 0) {
          lVar5 = *(long *)(lVar2 + 0x48);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(lVar3);
          _objc_retain(lVar5);
          lStack_138 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          plStack_130 = (long *)0x0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          lVar4 = lVar5;
          func_0x00010bf52a60();
          if (lVar4 != 0) {
            lVar15 = *plStack_130;
            do {
              lVar14 = 0;
              do {
                if (*plStack_130 != lVar15) {
                  _objc_enumerationMutation(lVar5);
                }
                uVar16 = *(ulong *)(lStack_138 + lVar14 * 8);
                uVar6 = uVar16;
                func_0x00010c241220();
                _objc_retainAutoreleasedReturnValue();
                uVar7 = uVar6;
                func_0x00010c0720c0();
                _objc_release(uVar6);
                if ((uVar7 & 1) != 0) {
                  _objc_retain(uVar16);
                  goto LAB_1058dbf64;
                }
                lVar14 = lVar14 + 1;
              } while (lVar4 != lVar14);
              lVar4 = lVar5;
              func_0x00010bf52a60();
            } while (lVar4 != 0);
          }
          uVar16 = 0;
LAB_1058dbf64:
          _objc_release(lVar5);
          _objc_release(lVar3);
          if (uVar16 == 0) {
            _objc_release(lVar5);
          }
          else {
            puStack_f0 = &uStack_f8;
            uStack_f8 = 0;
            uStack_e8 = 0x2020000000;
            uStack_e0 = 0;
            uVar10 = *(undefined8 *)(lVar2 + 0x20);
            func_0x00010c269d40(uVar10);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = *(undefined8 *)(lVar2 + 0x98);
            func_0x00010c11de00(uVar11);
            _objc_retainAutoreleasedReturnValue();
            puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_180 = 0xc2000000;
            pcStack_178 = FUN_1058dc184;
            puStack_170 = &UNK_1108bdad0;
            _objc_copyWeak(auStack_148,param_1 + 0x20);
            _objc_retain(lVar12);
            puStack_150 = &uStack_f8;
            lStack_168 = lVar12;
            _objc_retain(uVar16);
            uStack_160 = uVar16;
            _objc_retain(lVar3);
            lStack_158 = lVar3;
            func_0x00010c134d00(0x4059000000000000,0x4059000000000000,uVar10);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(uVar11);
            _objc_release(uVar10);
            _objc_release(lStack_158);
            _objc_release(uStack_160);
            _objc_release(lStack_168);
            _objc_destroyWeak(auStack_148);
            __Block_object_dispose(&uStack_f8,8);
            _objc_release(uVar16);
            _objc_release(lVar5);
          }
        }
        _objc_release(unaff_x23);
      }
      _objc_release(lVar13);
      _objc_release(lVar3);
    }
    _objc_release(lVar12);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x23 + 0x40);
    lVar12 = 8;
    __Block_object_dispose(&uStack_f8);
    __Unwind_Resume();
    _objc_retain(lVar12);
    lVar2 = param_2 + 0x40;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
      func_0x00010c0720c0();
      if ((iVar1 != 0) &&
         (lVar13 = *(long *)(*(long *)(param_2 + 0x38) + 8), (*(byte *)(lVar13 + 0x18) & 1) == 0)) {
        *(undefined1 *)(lVar13 + 0x18) = 1;
        puVar8 = PTR_PTR_1126bfc60;
        if (lVar12 == 0) {
          func_0x00010c139100(PTR_PTR_1126bfc60);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x00010c084880();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010bea5e20(lVar2);
        _objc_release(puVar8);
      }
    }
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar12);
    return;
  }
  return;
}



/* Entry: 1058dc184; end: 1058dc23f;  */

void FUN_1058dc184(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0();
    if ((iVar1 != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8), (*(byte *)(lVar4 + 0x18) & 1) == 0)) {
      *(undefined1 *)(lVar4 + 0x18) = 1;
      puVar3 = PTR_PTR_1126bfc60;
      if (param_2 == 0) {
        func_0x00010c139100(PTR_PTR_1126bfc60);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c084880();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010bea5e20(lVar2);
      _objc_release(puVar3);
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058dc240; end: 1058dc39b;  */

void FUN_1058dc240(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      uVar9 = 0;
LAB_1058dc344:
      _objc_release(param_2);
      _objc_release(param_2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
        return;
      }
      ___stack_chk_fail();
      _objc_retain(lVar7);
      lVar3 = param_1 + 0x38;
      _objc_loadWeakRetained();
      if (lVar3 != 0) {
        iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010c0720c0();
        if (iVar2 != 0) {
          puVar6 = PTR_PTR_1126bfc60;
          if (lVar7 == 0) {
            func_0x00010c139100(PTR_PTR_1126bfc60);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010c084880();
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010bea5e20(lVar3);
          _objc_release(puVar6);
        }
      }
      _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar7);
      return;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar9 = *(ulong *)(lVar10 * 8);
      uVar4 = uVar9;
      func_0x00010c09da80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0720c0();
      _objc_release(uVar4);
      if ((uVar5 & 1) != 0) {
        _objc_retain(uVar9);
        goto LAB_1058dc344;
      }
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1058dc39c; end: 1058dc43f;  */

void FUN_1058dc39c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0();
    if (iVar1 != 0) {
      puVar3 = PTR_PTR_1126bfc60;
      if (param_2 == 0) {
        func_0x00010c139100(PTR_PTR_1126bfc60);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c084880();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010bea5e20(lVar2);
      _objc_release(puVar3);
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058dc440; end: 1058dc8bf;  */

void FUN_1058dc440(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **unaff_x21;
  long unaff_x22;
  undefined8 uVar10;
  undefined **unaff_x23;
  ulong unaff_x24;
  ulong uVar11;
  undefined1 auStack_248 [8];
  ulong uStack_240;
  undefined **ppuStack_238;
  long lStack_230;
  undefined **ppuStack_228;
  long lStack_220;
  long lStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  long lStack_1f0;
  undefined **ppuStack_1e8;
  long lStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  long lStack_170;
  ulong uStack_168;
  long lStack_160;
  long lStack_158;
  undefined **ppuStack_150;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bfb0d80();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_2;
    lStack_1e0 = lVar2;
    func_0x00010c154b60();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = unaff_x22;
    func_0x00010c08fa60();
    if ((lVar2 != 0) && (lVar2 = lStack_1e0, func_0x00010c0720c0(), (int)lVar2 != 0)) {
      unaff_x21 = *(undefined ***)(lVar1 + 0x70);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = unaff_x21;
      func_0x00010bfbd0e0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_1e8 = unaff_x21;
      if (unaff_x21 != (undefined **)0x0) {
        ppuVar3 = unaff_x21;
        func_0x00010bfbd100();
        if (ppuVar3 == (undefined **)0x3) {
          uVar6 = *(undefined8 *)(lVar1 + 0x50);
          func_0x00010c0e00e0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = unaff_x22;
          FUN_1058dc240(unaff_x22,uVar6);
          _objc_retainAutoreleasedReturnValue();
          if (lVar2 == 0) {
            _objc_release(uVar6);
          }
          else {
            puVar7 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
            _objc_alloc_init();
            func_0x00010c1ec960();
            func_0x00010c18ba80(puVar7);
            func_0x00010c1cc000(puVar7);
            unaff_x24 = *(ulong *)(lVar1 + 0x98);
            puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_1d0 = 0xc2000000;
            pcStack_1c8 = FUN_1058dcabc;
            puStack_1c0 = &UNK_11085ae98;
            _objc_retain(lVar2);
            lStack_1b8 = lVar2;
            _objc_retain(puVar7);
            unaff_x21 = &puStack_1d8;
            puStack_1b0 = puVar7;
            _objc_copyWeak(auStack_198,param_1 + 0x20);
            lStack_1a8 = lStack_1e0;
            lStack_1a0 = unaff_x22;
            func_0x00010c0f7fc0(unaff_x24);
            _objc_destroyWeak(auStack_198);
            _objc_release(puStack_1b0);
            _objc_release(lStack_1b8);
            _objc_release(puVar7);
            _objc_release(lVar2);
            _objc_release(uVar6);
          }
        }
        else if (ppuVar3 == (undefined **)0x1) {
          unaff_x21 = &puStack_140;
          ppuVar3 = *(undefined ***)(lVar1 + 0x48);
          ppuStack_200 = unaff_x23;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(unaff_x22);
          _objc_retain(ppuVar3);
          lStack_138 = 0;
          puStack_140 = (undefined *)0x0;
          uStack_128 = 0;
          plStack_130 = (long *)0x0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          ppuStack_1f8 = ppuVar3;
          func_0x00010bf52a60();
          if (ppuVar3 != (undefined **)0x0) {
            lStack_1f0 = *plStack_130;
            do {
              unaff_x21 = (undefined **)0x0;
              do {
                if (*plStack_130 != lStack_1f0) {
                  _objc_enumerationMutation(ppuStack_1f8);
                }
                uVar11 = *(ulong *)(lStack_138 + (long)unaff_x21 * 8);
                unaff_x24 = uVar11;
                func_0x00010c241220();
                _objc_retainAutoreleasedReturnValue();
                uVar4 = unaff_x24;
                func_0x00010c0720c0();
                if ((int)uVar4 != 0) {
                  _objc_release(unaff_x24);
LAB_1058dc744:
                  _objc_retain(uVar11);
                  goto LAB_1058dc74c;
                }
                uVar4 = uVar11;
                func_0x00010bf8b0c0();
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar4;
                func_0x00010c0720c0();
                _objc_release(uVar4);
                _objc_release(unaff_x24);
                if ((uVar5 & 1) != 0) goto LAB_1058dc744;
                unaff_x21 = (undefined **)((long)unaff_x21 + 1);
              } while (ppuVar3 != unaff_x21);
              ppuVar3 = ppuStack_1f8;
              func_0x00010bf52a60();
            } while (ppuVar3 != (undefined **)0x0);
          }
          uVar11 = 0;
LAB_1058dc74c:
          _objc_release(ppuStack_1f8);
          _objc_release(unaff_x22);
          if (uVar11 == 0) {
            _objc_release(ppuStack_1f8);
            unaff_x23 = ppuStack_200;
          }
          else {
            unaff_x21 = &puStack_f8;
            puStack_f8 = (undefined *)0x0;
            uStack_e8 = 0x2020000000;
            uStack_e0 = 0;
            unaff_x24 = *(ulong *)(lVar1 + 0x98);
            puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_188 = 0xc2000000;
            pcStack_180 = FUN_1058dc8c0;
            puStack_178 = &UNK_1108bab48;
            lStack_170 = lVar1;
            ppuStack_f0 = unaff_x21;
            _objc_retain(uVar11);
            uStack_168 = uVar11;
            _objc_copyWeak(auStack_148,param_1 + 0x20);
            lStack_160 = lStack_1e0;
            lStack_158 = unaff_x22;
            ppuStack_150 = unaff_x21;
            func_0x00010c0f7fc0(unaff_x24);
            _objc_destroyWeak(auStack_148);
            _objc_release(uStack_168);
            __Block_object_dispose(&puStack_f8,8);
            _objc_release(uVar11);
            _objc_release(ppuStack_1f8);
            unaff_x23 = ppuStack_200;
          }
        }
      }
      _objc_release(unaff_x23);
      _objc_release(ppuStack_1e8);
    }
    _objc_release(unaff_x22);
    _objc_release(lStack_1e0);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_destroyWeak(unaff_x23 + 9);
    __Block_object_dispose(&puStack_f8,8);
    lVar2 = param_2;
    __Unwind_Resume();
    pcStack_208 = FUN_1058dc8c0;
    uVar8 = *(undefined8 *)(*(long *)(lVar2 + 0x20) + 0x20);
    uStack_240 = unaff_x24;
    ppuStack_238 = unaff_x23;
    lStack_230 = unaff_x22;
    ppuStack_228 = unaff_x21;
    lStack_220 = lVar1;
    lStack_218 = param_2;
    puStack_210 = &stack0xfffffffffffffff0;
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar6;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_248,lVar2 + 0x48);
    uVar10 = *(undefined8 *)(lVar2 + 0x28);
    _objc_retain(uVar10);
    func_0x00010c134d00(0x4059000000000000,0x4059000000000000,uVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar6);
    _objc_release(uVar8);
    _objc_release(uVar10);
    _objc_destroyWeak(auStack_248);
    return;
  }
  return;
}



/* Entry: 1058dc8c0; end: 1058dc9ff;  */

void FUN_1058dc8c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  func_0x00010c134d00(0x4059000000000000,0x4059000000000000,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1058dca00; end: 1058dcabb;  */

void FUN_1058dca00(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0720c0();
    if ((iVar1 != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8), (*(byte *)(lVar4 + 0x18) & 1) == 0)) {
      *(undefined1 *)(lVar4 + 0x18) = 1;
      puVar3 = PTR_PTR_1126bfc60;
      if (param_2 == 0) {
        func_0x00010c139100(PTR_PTR_1126bfc60);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c084880();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010bea5e20(lVar2);
      _objc_release(puVar3);
    }
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058dcabc; end: 1058dcbb3;  */

void FUN_1058dcabc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  puVar1 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c1357a0(0x4059000000000000,0x4059000000000000,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1058dcbb4; end: 1058dcc7f;  */

void FUN_1058dcbb4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1058dcc80;
    puStack_60 = &UNK_1108475b0;
    uStack_58 = *(undefined8 *)(param_1 + 0x20);
    lStack_50 = lVar1;
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = param_2;
    _objc_retain(uVar2);
    uStack_38 = *(undefined8 *)(param_1 + 0x30);
    uStack_40 = uVar2;
    func_0x000100162d98("APPSTORE",&puStack_78);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1058dcc80; end: 1058dccff;  */

void FUN_1058dcc80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0(uVar1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xb0));
  if ((int)uVar1 != 0) {
    puVar2 = PTR_PTR_1126bfc60;
    if (*(long *)(param_1 + 0x30) == 0) {
      func_0x00010c139100(PTR_PTR_1126bfc60);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c084880();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bea5e20(*(undefined8 *)(param_1 + 0x28),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1058dcd00; end: 1058dcd8b;  */

uint FUN_1058dcd00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c127ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4c440();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf977c0();
  if ((int)uVar3 == 0x4a) {
    uVar4 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x00010c234360(param_2);
    uVar4 = (uint)uVar3 ^ 1;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 1058dcd8c; end: 1058dcf87;  */

void FUN_1058dcd8c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar1 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  if ((uVar5 & 1) == 0) {
    uVar5 = *(ulong *)(param_1 + 0x20);
    lVar2 = param_2;
    func_0x00010bf8b0c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((uVar5 & 1) != 0) {
      puVar4 = (undefined *)0x0;
      goto LAB_1058dcf24;
    }
    lVar2 = param_2;
    func_0x00010bf8b0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      lVar1 = param_2;
      func_0x00010c241220(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar1 = param_2;
      func_0x00010bf8b0c0(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
    lVar6 = *(long *)(param_1 + 0x28);
    lVar2 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_1 + 0x28);
      lVar3 = param_2;
      func_0x00010bf8b0c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if (lVar6 == 0) {
        if (*(char *)(param_1 + 0x3c) != '\x01') {
          func_0x00010b5f2ec8(*(undefined8 *)(param_1 + 0x30),(long)*(int *)(param_1 + 0x38));
          goto LAB_1058dcdd8;
        }
        puVar4 = PTR_PTR_1126b60f8;
        func_0x00010c0f2b40(PTR_PTR_1126b60f8);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_1058dcf1c;
      }
    }
    else {
      _objc_release(lVar2);
    }
    puVar4 = PTR_PTR_1126b60f8;
    func_0x00010c0f2b40(PTR_PTR_1126b60f8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
  }
  else {
LAB_1058dcdd8:
    puVar4 = (undefined *)0x0;
  }
LAB_1058dcf1c:
  _objc_release(lVar1);
LAB_1058dcf24:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058dcf88; end: 1058dd0cf;  */

void FUN_1058dcf88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c09da80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    puVar4 = (undefined *)0x0;
    goto LAB_1058dd0a4;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  uVar1 = param_2;
  func_0x00010c09da80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b60f8;
  uVar1 = param_2;
  if (lVar3 == 0) {
    if (*(char *)(param_1 + 0x40) == '\x01') {
      func_0x00010c09da80(param_2);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1058dd084;
    }
    func_0x00010b5f2ec8(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010c09da80(param_2);
    _objc_retainAutoreleasedReturnValue();
LAB_1058dd084:
    func_0x00010c0f2b40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(lVar3);
LAB_1058dd0a4:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058dd0d0; end: 1058dd11f; -[SCMemoriesSnapFeedManager _totalSnapFeedSnapCount:] */

undefined8 FUN_1058dd0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c124d20(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108bdc30,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1c90);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2827c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1058dd120; end: 1058dd17f;  */

void FUN_1058dd120(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010c2827c0(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_3;
  func_0x00010c0deea0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_numberWithUnsignedInteger__112615828,lVar2 + param_2);
  return;
}



/* Entry: 1058dd180; end: 1058dd187; -[SCMemoriesSnapFeedManager _setNextSnapFeedItem:] */

void FUN_1058dd180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x80),PTR_s_next__112614028);
  return;
}



/* Entry: 1058dd188; end: 1058dd29b; -[SCMemoriesSnapFeedManager .cxx_destruct] */

void FUN_1058dd188(long param_1)

{
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



/* Entry: 1058dd29c; end: 1058dd357;  */

uint FUN_1058dd29c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0deee0();
  lVar2 = param_2;
  func_0x00010c0deea0();
  if (lVar1 == lVar2) {
    uVar4 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x00010bf53c00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      uVar4 = 1;
    }
    else {
      lVar2 = param_2;
      func_0x00010bf53c00(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0c7f80();
      uVar4 = (uint)(lVar3 != 0);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c234360(param_2);
    uVar4 = uVar4 & ((uint)lVar1 ^ 1);
  }
  _objc_release(param_2);
  return uVar4;
}



/* Entry: 1058dd358; end: 1058dd3d7; -[SCMemoriesSnapFeedServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058dd358(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272bd74);
  _objc_destroyWeak(param_1 + _DAT_11272bd70);
  _objc_destroyWeak(param_1 + _DAT_11272bd6c);
  _objc_destroyWeak(param_1 + _DAT_11272bd68);
  _objc_destroyWeak(param_1 + _DAT_11272bd64);
  _objc_destroyWeak(param_1 + _DAT_11272bd60);
  _objc_destroyWeak(param_1 + _DAT_11272bd5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272bd58);
  return;
}



/* Entry: 1058dd3d8; end: 1058dd463; +[SCMemCommonMediaTypeSpecificMetadata descriptor] */

undefined * FUN_1058dd3d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0ef8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a765b0,
                        &PTR____CFConstantStringClassReference_110e0a918,
                        &PTR_s_snapchat_memories_113108258,&PTR_s_spectacles_113108270,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c0ef8 = puVar1;
  }
  return puRam00000001136c0ef8;
}



/* Entry: 1058dd464; end: 1058dd4e7; +[SCMemCommonMediaTypeSpecificMetadata_Spectacles descriptor] */

undefined * FUN_1058dd464(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0f00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a765d8,
                        &PTR____CFConstantStringClassReference_110e0a938,
                        &PTR_s_snapchat_memories_113108258,&PTR_s_deviceId_1131082f0,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c0f00 = puVar1;
  }
  return puRam00000001136c0f00;
}



/* Entry: 1058dd4e8; end: 1058dd56b; +[SCMemCommonMediaTypeSpecificMetadata_Dream descriptor] */

undefined * FUN_1058dd4e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0f08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a76600,
                        &PTR____CFConstantStringClassReference_110e0a958,
                        &PTR_s_snapchat_memories_113108258,&PTR_s_dreamPackId_1131083d0,6,0x38,0x1c)
    ;
    func_0x00010c228780();
    puRam00000001136c0f08 = puVar1;
  }
  return puRam00000001136c0f08;
}



/* Entry: 1058dd56c; end: 1058dd5f7; +[SCMemCommonThumbnailDoc descriptor] */

undefined * FUN_1058dd56c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0f10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a76538,
                        &PTR____CFConstantStringClassReference_110e0a978,
                        &PTR_s_snapchat_memories_113108258,&PTR_DAT_113108350,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136c0f10 = puVar1;
  }
  return puRam00000001136c0f10;
}


