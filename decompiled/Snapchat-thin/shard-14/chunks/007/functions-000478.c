/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5e2b58; end: 10b5e2b93; -[SCPreferencesObserver .cxx_destruct] */

void FUN_10b5e2b58(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5e2b94; end: 10b5e2bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e2b94(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = (long)_DAT_11278e9a4;
    _os_unfair_lock_lock(param_1 + lVar2);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11278e998);
    _objc_retain(uVar1);
    _os_unfair_lock_unlock(param_1 + lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b5e2bf4; end: 10b5e2cbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e2bf4(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    puStack_58 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_10b5e2cbc;
    uStack_30 = 0x10b5e2ccc;
    uStack_28 = 0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10b5e2cd4;
    puStack_68 = &UNK_11084b9d0;
    lStack_60 = param_1;
    puStack_48 = puStack_58;
    func_0x000107c27da4(*(undefined8 *)(param_1 + _DAT_11278e9a0),&puStack_80);
    uVar1 = puStack_48[5];
    _objc_retain(uVar1);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b5e2cbc; end: 10b5e2cd3;  */

void FUN_10b5e2cbc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b5e2cd4; end: 10b5e2d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e2cd4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278e99c);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b5e2d10; end: 10b5e2d3f; -[SCPreferencesFacade invalidate] */

void FUN_10b5e2d10(undefined8 param_1)

{
  FUN_10b5e2bf4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b5e2d40; end: 10b5e2d8f; -[SCPreferencesFacade invalidateWithCompletionHandler:] */

void FUN_10b5e2d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10b5e2bf4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06a260();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b5e2d90; end: 10b5e2d93; -[SCPreferencesFacade objectForKeyedSubscript:] */

void FUN_10b5e2d90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_objectForKey__1126159e0);
  return;
}



/* Entry: 10b5e2d94; end: 10b5e2d97; -[SCPreferencesFacade setObject:forKeyedSubscript:] */

void FUN_10b5e2d94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setObject_forKey__112651b80);
  return;
}



/* Entry: 10b5e2d98; end: 10b5e2e03; -[SCPreferencesFacade objectForKey:] */

void FUN_10b5e2d98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  FUN_10b5e2b94(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b5e2e04; end: 10b5e2e73; -[SCPreferencesFacade setObject:forKey:] */

void FUN_10b5e2e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_10b5e2bf4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b5e2e74; end: 10b5e2edf; -[SCPreferencesFacade allKeysInNamespace:] */

void FUN_10b5e2e74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  FUN_10b5e2b94(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf00340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b5e2ee0; end: 10b5e2f2f; -[SCPreferencesFacade addEntriesFromDictionary:] */

void FUN_10b5e2ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10b5e2bf4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b5e2f30; end: 10b5e2fb7; -[SCPreferencesFacade deprecated_performChanges:completionQueue:completionHandler:] */

void FUN_10b5e2f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_10b5e2bf4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6db60();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b5e2fb8; end: 10b5e2fe7; -[SCPreferencesFacade synchronize] */

void FUN_10b5e2fb8(undefined8 param_1)

{
  FUN_10b5e2bf4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b5e2fe8; end: 10b5e308b; -[SCPreferencesFacade observe:callbackQueue:changeHandler:] */

void FUN_10b5e2fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  FUN_10b5e2bf4(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e06e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b5e308c; end: 10b5e3113; -[SCPreferencesFacade .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e308c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e9a0,0);
  _objc_storeStrong(param_1 + _DAT_11278e99c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e998,0);
  return;
}



/* Entry: 10b5e3114; end: 10b5e314f; -[SCSQLitePreferencesObserver .cxx_destruct] */

void FUN_10b5e3114(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5e3150; end: 10b5e3193; -[SCSQLitePreferencesObservationToken dealloc] */

void FUN_10b5e3150(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c281a60();
  puStack_28 = PTR_PTR_112706578;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b5e3194; end: 10b5e31ff; -[SCSQLitePreferencesObservationToken unobserve] */

void FUN_10b5e3194(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  FUN_10b5e5438();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b5e3200; end: 10b5e322b; -[SCSQLitePreferencesObservationToken .cxx_destruct] */

void FUN_10b5e3200(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5e322c; end: 10b5e329b; +[SCSQLitePreferences preferencesWithPath:] */

void FUN_10b5e322c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126e0318;
  _objc_retain(param_3);
  FUN_10b5e55e8(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_10b5e56dc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b5e329c; end: 10b5e345f; -[SCSQLitePreferences initWithPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b5e329c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112706580;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278e9c8) = 0;
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278e9cc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e9cc) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126c03b0;
    _objc_alloc();
    _objc_opt_class(PTR_PTR_1126e0320);
    func_0x00010be3ab00();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278e9bc);
    *(undefined **)((long)puVar1 + (long)_DAT_11278e9bc) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278e9d0);
    *(undefined **)((long)puVar1 + (long)_DAT_11278e9d0) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278e9c0);
    *(undefined **)((long)puVar1 + (long)_DAT_11278e9c0) = puVar2;
    _objc_release(uVar4);
    uVar3 = 0;
    _dispatch_queue_attr_make_with_autorelease_frequency(0,1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x11;
    _dispatch_get_global_queue(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = &UNK_10f78042d;
    _dispatch_queue_create_with_target_V2(&UNK_10f78042d,uVar3,uVar4);
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278e9d4);
    *(undefined **)((long)puVar1 + (long)_DAT_11278e9d4) = puVar2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release();
    _dispatch_group_create();
    lVar6 = (long)_DAT_11278e9d8;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = uVar3;
    _objc_release(uVar4);
    *(undefined4 *)((long)puVar1 + (long)_DAT_11278e9dc) = 0;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11278e9c4) = 0;
    _dispatch_group_enter(*(undefined8 *)((long)puVar1 + lVar6));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5e3460; end: 10b5e35b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e3460(long param_1,long param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    pcVar1 = (char *)(param_1 + _DAT_11278e9c8);
    do {
      if (*pcVar1 != '\0') {
        ClearExclusiveLocal();
        if (param_2 == 0) goto LAB_10b5e3534;
        goto LAB_10b5e34fc;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\x01';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x00010bdf84e0(*(undefined8 *)(param_1 + _DAT_11278e9bc));
    if (param_2 != 0) {
LAB_10b5e34fc:
      uVar4 = 0x21;
      _dispatch_get_global_queue(0x21,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c27d98(*(undefined8 *)(param_1 + _DAT_11278e9d8),uVar4,param_2);
      _objc_release(uVar4);
    }
  }
LAB_10b5e3534:
  _objc_release(param_2);
  return;
}



/* Entry: 10b5e35b8; end: 10b5e35bf; -[SCSQLitePreferences invalidate] */

/* WARNING: Removing unreachable block (ram,0x00010b5e34fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e35b8(long param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  
  _objc_retain(0);
  if (param_1 != 0) {
    pcVar1 = (char *)(param_1 + _DAT_11278e9c8);
    do {
      if (*pcVar1 != '\0') {
        ClearExclusiveLocal();
        goto LAB_10b5e3534;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\x01';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x00010bdf84e0(*(undefined8 *)(param_1 + _DAT_11278e9bc));
  }
LAB_10b5e3534:
  _objc_release(0);
  return;
}



/* Entry: 10b5e35c0; end: 10b5e35c7; -[SCSQLitePreferences invalidateWithCompletionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e35c0(long param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_1 != 0) {
    pcVar1 = (char *)(param_1 + _DAT_11278e9c8);
    do {
      if (*pcVar1 != '\0') {
        ClearExclusiveLocal();
        if (param_3 == 0) goto LAB_10b5e3534;
        goto LAB_10b5e34fc;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *pcVar1 = '\x01';
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x00010bdf84e0(*(undefined8 *)(param_1 + _DAT_11278e9bc));
    if (param_3 != 0) {
LAB_10b5e34fc:
      uVar4 = 0x21;
      _dispatch_get_global_queue(0x21,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c27d98(*(undefined8 *)(param_1 + _DAT_11278e9d8),uVar4,param_3);
      _objc_release(uVar4);
    }
  }
LAB_10b5e3534:
  _objc_release(param_3);
  return;
}



/* Entry: 10b5e35c8; end: 10b5e35cb; -[SCSQLitePreferences objectForKeyedSubscript:] */

void FUN_10b5e35c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_objectForKey__1126159e0);
  return;
}



/* Entry: 10b5e35cc; end: 10b5e35cf; -[SCSQLitePreferences setObject:forKeyedSubscript:] */

void FUN_10b5e35cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setObject_forKey__112651b80);
  return;
}



/* Entry: 10b5e35d0; end: 10b5e393b; -[SCSQLitePreferences objectForKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e35d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  lVar7 = (long)_DAT_11278e9c8;
  pbVar1 = (byte *)(param_1 + lVar7);
  if ((*pbVar1 & 1) != 0) {
    puVar6 = (undefined *)0x0;
    goto LAB_10b5e3814;
  }
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10b5e393c;
  uStack_80 = 0x10b5e394c;
  uStack_78 = 0;
  lVar9 = (long)_DAT_11278e9dc;
  _os_unfair_lock_lock(param_1 + lVar9);
  if ((*pbVar1 & 1) == 0) {
    lVar8 = (long)_DAT_11278e9d0;
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_98[5];
    puStack_98[5] = uVar2;
    _objc_release(uVar4);
    _os_unfair_lock_unlock(param_1 + lVar9);
    puVar5 = (undefined *)puStack_98[5];
    if (puVar5 == (undefined *)0x0) {
      if (lRam00000001137f72e8 != -1) {
        func_0x000107c27d9c(0x1137f72e8,&PTR___NSConcreteGlobalBlock_110d25220);
      }
      uVar2 = uRam00000001137f72e0;
      puStack_b8 = &uStack_c0;
      uStack_c0 = 0;
      uStack_b0 = 0x2020000000;
      uStack_a8 = 0;
      uVar4 = *(undefined8 *)(param_1 + _DAT_11278e9bc);
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_10b5e39ac;
      puStack_d0 = &UNK_110d25240;
      _objc_retain(param_3);
      uStack_c8 = param_3;
      func_0x000107c30748(uVar4,uVar2,&puStack_e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c0800();
      pbVar1 = (byte *)(param_1 + lVar7);
      if ((*pbVar1 & 1) == 0) {
        _os_unfair_lock_lock(param_1 + lVar9);
        if ((*pbVar1 & 1) != 0) {
          _os_unfair_lock_unlock(param_1 + lVar9);
          goto LAB_10b5e37c8;
        }
        puVar5 = *(undefined **)(param_1 + lVar8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 == (undefined *)0x0) {
          if (puStack_98[5] != 0) {
            func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar8));
          }
          _os_unfair_lock_unlock(param_1 + lVar9);
          puVar6 = (undefined *)puStack_98[5];
          _objc_retain(puVar6);
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x00010c0ddbe0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = (undefined *)0x0;
          if (puVar5 != puVar3) {
            puVar6 = puVar5;
          }
          _objc_retain(puVar6);
          _objc_release(puVar3);
          _objc_release(puVar5);
          _os_unfair_lock_unlock(param_1 + lVar9);
        }
      }
      else {
LAB_10b5e37c8:
        puVar6 = (undefined *)0x0;
      }
      _objc_release(uVar4);
      _objc_release(uStack_c8);
      __Block_object_dispose(&uStack_c0,8);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == puVar3) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = (undefined *)puStack_98[5];
      }
      _objc_retain(puVar6);
      _objc_release(puVar3);
    }
  }
  else {
    _os_unfair_lock_unlock(param_1 + lVar9);
    puVar6 = (undefined *)0x0;
  }
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
LAB_10b5e3814:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b5e393c; end: 10b5e3953;  */

void FUN_10b5e393c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b5e3954; end: 10b5e39ab;  */

void FUN_10b5e3954(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0328;
  _objc_opt_new();
  uVar1 = puRam00000001137f72e0;
  puRam00000001137f72e0 = puVar2;
  _objc_release(uVar1);
  if (puRam00000001137f72e0 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)
              (puRam00000001137f72e0,param_2,&PTR____CFConstantStringClassReference_110f63c18,8);
    return;
  }
  return;
}



/* Entry: 10b5e39ac; end: 10b5e39bb;  */

void FUN_10b5e39ac(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar1 = param_2 + 0x10;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_2 + 8),&UNK_10e5d1f00,0x30);
      func_0x000107c3075c();
      func_0x000107c30760(lVar1,FUN_10b5ed13c);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b5ed080;
    }
  }
  lVar1 = 0;
LAB_10b5ed080:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b5e39bc; end: 10b5e3a5f;  */

void FUN_10b5e39bc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bdbc0;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 8);
  }
  _objc_retain(uVar4);
  func_0x00010c0e0260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(param_2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10b5e3a60; end: 10b5e4007; -[SCSQLitePreferences setObject:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e3a60(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  long lStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  long lStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar10 = (long)_DAT_11278e9c8;
  if ((*(byte *)(param_1 + lVar10) & 1) != 0) goto LAB_10b5e3f58;
  if (param_3 == (undefined *)0x0) {
LAB_10b5e3b90:
    puStack_2c0 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    uStack_90 = param_4;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_88 = puVar1;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puStack_2c8 = (undefined *)0x0;
LAB_10b5e3bf0:
    _objc_release(puVar1);
    if ((*(byte *)(param_1 + lVar10) & 1) == 0) {
      lVar4 = (long)_DAT_11278e9dc;
      _os_unfair_lock_lock(param_1 + lVar4);
      if ((*(byte *)(param_1 + lVar10) & 1) == 0) {
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        uStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        _objc_retain(puVar7);
        puVar1 = puVar7;
        func_0x00010bf52a60();
        if (puVar1 != (undefined *)0x0) {
          lVar3 = *plStack_1e0;
          do {
            puVar6 = (undefined *)0x0;
            do {
              if (*plStack_1e0 != lVar3) {
                _objc_enumerationMutation(puVar7);
              }
              puVar2 = puVar7;
              func_0x00010c0e00e0(puVar7);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_11278e9d0));
              _objc_release(puVar2);
              puVar6 = puVar6 + 1;
            } while (puVar1 != puVar6);
            puVar1 = puVar7;
            func_0x00010bf52a60();
          } while (puVar1 != (undefined *)0x0);
        }
        _objc_release(puVar7);
        _os_unfair_lock_unlock(param_1 + lVar4);
        _objc_initWeak(auStack_1f8,param_1);
        uVar8 = *(undefined8 *)(param_1 + _DAT_11278e9d4);
        puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_228 = 0xc2000000;
        pcStack_220 = FUN_10b5e4008;
        puStack_218 = &UNK_110848218;
        _objc_copyWeak(auStack_200,auStack_1f8);
        _objc_retain(puStack_2c8);
        puStack_210 = puStack_2c8;
        _objc_retain(puStack_2c0);
        puStack_208 = puStack_2c0;
        func_0x000107c27d8c(uVar8,&puStack_230);
        lVar4 = (long)_DAT_11278e9c4;
        _os_unfair_lock_lock(param_1 + lVar4);
        if ((*(byte *)(param_1 + lVar10) & 1) == 0) {
          lVar3 = *(long *)(param_1 + _DAT_11278e9c0);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar3;
          func_0x00010bf529e0();
          if (lVar10 != 0) {
            uStack_248 = 0;
            uStack_250 = 0;
            uStack_238 = 0;
            uStack_240 = 0;
            lStack_268 = 0;
            uStack_270 = 0;
            uStack_258 = 0;
            plStack_260 = (long *)0x0;
            _objc_retain(lVar3);
            lVar10 = lVar3;
            func_0x00010bf52a60();
            if (lVar10 != 0) {
              lVar11 = *plStack_260;
              do {
                lVar5 = 0;
                do {
                  if (*plStack_260 != lVar11) {
                    _objc_enumerationMutation(lVar3);
                  }
                  lVar9 = *(long *)(lStack_268 + lVar5 * 8);
                  if (lVar9 == 0) {
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = *(undefined8 *)(lVar9 + 0x10);
                  }
                  _objc_retain(uVar8);
                  puStack_2a0 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_298 = 0xc2000000;
                  pcStack_290 = FUN_10b5e4228;
                  puStack_288 = &UNK_110841f80;
                  lStack_280 = lVar9;
                  _objc_retain(puVar7);
                  puStack_278 = puVar7;
                  func_0x000107c27d8c(uVar8,&puStack_2a0);
                  _objc_release(uVar8);
                  _objc_release(puStack_278);
                  lVar5 = lVar5 + 1;
                } while (lVar10 != lVar5);
                lVar10 = lVar3;
                func_0x00010bf52a60();
              } while (lVar10 != 0);
            }
            _objc_release(lVar3);
          }
          _objc_release(lVar3);
          lStack_2d0 = lVar4;
        }
        _os_unfair_lock_unlock(param_1 + lVar4);
        _objc_release(puStack_208);
        _objc_release(puStack_210);
        _objc_destroyWeak(auStack_200);
        _objc_destroyWeak(auStack_1f8);
      }
      else {
        _os_unfair_lock_unlock(param_1 + lVar4);
      }
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_3 == puVar1) goto LAB_10b5e3b90;
    puVar1 = PTR_PTR_1126bdbc0;
    func_0x00010bf64c20();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126bdbc0;
    func_0x00010c0e0260();
    _objc_retainAutoreleasedReturnValue();
    if ((puVar1 != (undefined *)0x0) && (puVar6 != (undefined *)0x0)) {
      puStack_2c8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      uStack_a0 = param_4;
      puStack_98 = puVar1;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      uStack_b0 = param_4;
      puStack_a8 = puVar6;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puStack_2c0 = (undefined *)0x0;
      goto LAB_10b5e3bf0;
    }
    _objc_release(puVar6);
    _objc_release(puVar1);
    puVar7 = (undefined *)0x0;
    puStack_2c8 = (undefined *)0x0;
    puStack_2c0 = (undefined *)0x0;
  }
  _objc_release(puVar7);
  _objc_release(puStack_2c0);
  _objc_release(puStack_2c8);
  lStack_2a8 = param_1;
LAB_10b5e3f58:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(lStack_2a8 + lStack_2d0);
  _objc_destroyWeak(auStack_200);
  _objc_destroyWeak(auStack_1f8);
  __Unwind_Resume();
  puVar1 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    FUN_10b5e4044(puVar1,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b5e4008; end: 10b5e4043;  */

void FUN_10b5e4008(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    FUN_10b5e4044(lVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b5e4044; end: 10b5e4227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e4044(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + _DAT_11278e9c8) & 1) == 0) {
    if (lRam00000001137f72f8 != -1) {
      func_0x000107c27d9c(0x1137f72f8,&PTR___NSConcreteGlobalBlock_110d25270);
    }
    uVar1 = uRam00000001137f72f0;
    uVar2 = *(undefined8 *)(param_1 + _DAT_11278e9bc);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10b5e42cc;
    puStack_68 = &UNK_110d25290;
    _objc_retain(param_2);
    uStack_60 = param_2;
    _objc_retain(param_3);
    uStack_58 = param_3;
    FUN_10b5edefc(uVar2,uVar1,&puStack_80);
    _objc_retainAutoreleasedReturnValue();
    puStack_98 = &uStack_a0;
    uStack_a0 = 0;
    uStack_90 = 0x2020000000;
    uStack_88 = 1;
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    pcStack_b8 = FUN_10b5e393c;
    uStack_b0 = 0x10b5e394c;
    uStack_a8 = 0;
    func_0x00010c0c0800();
    __Block_object_dispose(&uStack_d0,8);
    _objc_release(uStack_a8);
    __Block_object_dispose(&uStack_a0,8);
    _objc_release(uVar2);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10b5e4228; end: 10b5e42cb;  */

void FUN_10b5e4228(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  }
  _objc_retain(lVar1);
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b5e42cc; end: 10b5e44b7;  */

undefined * FUN_10b5e42cc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  _objc_retain(param_2);
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 != 0) {
    _objc_retain(lVar6);
    lVar2 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        lVar7 = *(long *)(lVar8 * 8);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c0e00e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_10b5ed388(param_2,lVar7,uVar3);
        _objc_release(uVar3);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
  }
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 != 0) {
    _objc_retain(lVar6);
    lVar2 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        lVar7 = *(long *)(lVar8 * 8);
        FUN_10b5ed4ec(param_2);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return PTR____kCFBooleanTrue_11034ab68;
  }
  ___stack_chk_fail();
  _objc_retain(lVar7);
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = 0;
  lVar5 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  puVar4 = *(undefined **)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return puVar4;
}



/* Entry: 10b5e44b8; end: 10b5e44fb;  */

void FUN_10b5e44b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b5e44fc; end: 10b5e4c2f; -[SCSQLitePreferences addEntriesFromDictionary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e44fc(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long unaff_x24;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_420;
  undefined *puStack_408;
  undefined8 uStack_400;
  code *pcStack_3f8;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  undefined *puStack_3e0;
  long lStack_3d8;
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined1 auStack_320 [8];
  undefined1 auStack_318 [8];
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar7 = (long)_DAT_11278e9c8;
  if ((*(byte *)(param_1 + lVar7) & 1) == 0) {
    func_0x00010bf529e0(param_3);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf529e0(param_3);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    plStack_2c0 = (long *)0x0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    _objc_retain(param_3);
    puVar4 = param_3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      lVar10 = *plStack_2c0;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_2c0 != lVar10) {
            _objc_enumerationMutation(param_3);
          }
          puVar11 = param_3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar11 == (undefined *)0x0) {
LAB_10b5e46b0:
            func_0x00010befa120(puVar2);
            puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(puVar3);
          }
          else {
            puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar11 == puVar5) goto LAB_10b5e46b0;
            puVar5 = PTR_PTR_1126bdbc0;
            func_0x00010bf64c20();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR_PTR_1126bdbc0;
            func_0x00010c0e0260();
            _objc_retainAutoreleasedReturnValue();
            if (puVar5 == (undefined *)0x0 || puVar6 == (undefined *)0x0) {
              _objc_release(puVar6);
            }
            else {
              func_0x00010c1d0560(puVar1);
              func_0x00010c1d0560(puVar3);
              _objc_release(puVar6);
            }
          }
          _objc_release(puVar5);
          _objc_release(puVar11);
          puVar8 = puVar8 + 1;
        } while (puVar4 != puVar8);
        puVar4 = param_3;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    unaff_x24 = 0;
    _objc_release(param_3);
    if ((*(byte *)(param_1 + lVar7) & 1) == 0) {
      lVar10 = (long)_DAT_11278e9dc;
      _os_unfair_lock_lock(param_1 + lVar10);
      if ((*(byte *)(param_1 + lVar7) & 1) == 0) {
        uStack_2e8 = 0;
        uStack_2f0 = 0;
        uStack_2d8 = 0;
        uStack_2e0 = 0;
        uStack_308 = 0;
        uStack_310 = 0;
        uStack_2f8 = 0;
        plStack_300 = (long *)0x0;
        _objc_retain(puVar3);
        puVar4 = puVar3;
        func_0x00010bf52a60();
        if (puVar4 != (undefined *)0x0) {
          lVar9 = *plStack_300;
          do {
            puVar8 = (undefined *)0x0;
            do {
              if (*plStack_300 != lVar9) {
                _objc_enumerationMutation(puVar3);
              }
              puVar11 = puVar3;
              func_0x00010c0e00e0(puVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(*(undefined8 *)(param_1 + _DAT_11278e9d0));
              _objc_release(puVar11);
              puVar8 = puVar8 + 1;
            } while (puVar4 != puVar8);
            puVar4 = puVar3;
            func_0x00010bf52a60();
          } while (puVar4 != (undefined *)0x0);
        }
        _objc_release(puVar3);
        _os_unfair_lock_unlock(param_1 + lVar10);
        _objc_initWeak(auStack_318,param_1);
        uVar12 = *(undefined8 *)(param_1 + _DAT_11278e9d4);
        puStack_350 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_348 = 0xc2000000;
        pcStack_340 = FUN_10b5e4c30;
        puStack_338 = &UNK_110848218;
        _objc_copyWeak(auStack_320,auStack_318);
        _objc_retain(puVar1);
        puStack_330 = puVar1;
        _objc_retain(puVar2);
        puStack_328 = puVar2;
        func_0x000107c27d8c(uVar12,&puStack_350);
        puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = (long)_DAT_11278e9c4;
        _os_unfair_lock_lock(param_1 + unaff_x24);
        if ((*(byte *)(param_1 + lVar7) & 1) == 0) {
          uStack_368 = 0;
          uStack_370 = 0;
          uStack_358 = 0;
          uStack_360 = 0;
          uStack_378 = 0;
          plStack_380 = (long *)0x0;
          uStack_388 = 0;
          uStack_390 = 0;
          _objc_retain(puVar3);
          puVar8 = puVar3;
          func_0x00010bf52a60();
          if (puVar8 != (undefined *)0x0) {
            lVar7 = *plStack_380;
            do {
              puVar11 = (undefined *)0x0;
              do {
                if (*plStack_380 != lVar7) {
                  _objc_enumerationMutation(puVar3);
                }
                lVar10 = *(long *)(param_1 + _DAT_11278e9c0);
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                if (lVar10 != 0) {
                  func_0x00010c280520(puVar4);
                }
                _objc_release(lVar10);
                puVar11 = puVar11 + 1;
              } while (puVar8 != puVar11);
              puVar8 = puVar3;
              func_0x00010bf52a60();
            } while (puVar8 != (undefined *)0x0);
          }
          _objc_release(puVar3);
          uStack_3a8 = 0;
          uStack_3b0 = 0;
          uStack_398 = 0;
          uStack_3a0 = 0;
          lStack_3c8 = 0;
          uStack_3d0 = 0;
          uStack_3b8 = 0;
          plStack_3c0 = (long *)0x0;
          _objc_retain(puVar4);
          puVar8 = puVar4;
          func_0x00010bf52a60();
          if (puVar8 != (undefined *)0x0) {
            lVar7 = *plStack_3c0;
            do {
              puVar11 = (undefined *)0x0;
              do {
                if (*plStack_3c0 != lVar7) {
                  _objc_enumerationMutation(puVar4);
                }
                lVar10 = *(long *)(lStack_3c8 + (long)puVar11 * 8);
                if (lVar10 == 0) {
                  _objc_retain(0);
                  uVar12 = 0;
                  uVar13 = 0;
                }
                else {
                  uVar12 = *(undefined8 *)(lVar10 + 8);
                  _objc_retain(uVar12);
                  uVar13 = *(undefined8 *)(lVar10 + 0x10);
                }
                _objc_retain(uVar13);
                puStack_408 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_400 = 0xc2000000;
                pcStack_3f8 = FUN_10b5e4c6c;
                puStack_3f0 = &UNK_110848ba8;
                uStack_3e8 = uVar12;
                _objc_retain(puVar3);
                puStack_3e0 = puVar3;
                lStack_3d8 = lVar10;
                _objc_retain(uVar12);
                func_0x000107c27d8c(uVar13,&puStack_408);
                _objc_release(uVar13);
                _objc_release(puStack_3e0);
                _objc_release(uStack_3e8);
                _objc_release(uVar12);
                puVar11 = puVar11 + 1;
              } while (puVar8 != puVar11);
              puVar8 = puVar4;
              func_0x00010bf52a60();
            } while (puVar8 != (undefined *)0x0);
          }
          _objc_release(puVar4);
        }
        _os_unfair_lock_unlock(param_1 + unaff_x24);
        _objc_release(puVar4);
        _objc_release(puStack_328);
        _objc_release(puStack_330);
        _objc_destroyWeak(auStack_320);
        _objc_destroyWeak(auStack_318);
      }
      else {
        _os_unfair_lock_unlock(param_1 + lVar10);
      }
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    lStack_420 = param_1;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(lStack_420 + unaff_x24);
  _objc_destroyWeak(auStack_320);
  _objc_destroyWeak(auStack_318);
  __Unwind_Resume();
  puVar1 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    FUN_10b5e4044(puVar1,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b5e4c30; end: 10b5e4c6b;  */

void FUN_10b5e4c30(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    FUN_10b5e4044(lVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b5e4c6c; end: 10b5e4dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e4c6c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined1 *puStack_178;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar6);
  lVar5 = lVar6;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c0e00e0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(uVar2);
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = lVar6;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar6);
  if (*(long *)(param_1 + 0x30) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x18);
  }
  _objc_retain(lVar5);
  (**(code **)(lVar5 + 0x10))(lVar5,puVar1);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar4);
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if ((puVar1[_DAT_11278e9c8] & 1) == 0) {
      func_0x00010c266b80(puVar1);
      uVar2 = *(undefined8 *)(puVar1 + _DAT_11278e9bc);
      puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_190 = 0xc2000000;
      pcStack_188 = FUN_10b5e4f30;
      puStack_180 = &UNK_110d252c0;
      _objc_retain(puVar4);
      puStack_178 = (undefined1 *)puVar4;
      func_0x000107c30748(uVar2,0,&puStack_198);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      _objc_retain();
      func_0x00010c0c0800(uVar2);
      _objc_release(puVar3);
      _objc_release(uVar2);
      _objc_release(puStack_178);
    }
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10b5e4e00; end: 10b5e4f2f; -[SCSQLitePreferences allKeysInNamespace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e4e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if ((*(byte *)(param_1 + _DAT_11278e9c8) & 1) == 0) {
    func_0x00010c266b80(param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11278e9bc);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10b5e4f30;
    puStack_50 = &UNK_110d252c0;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x000107c30748(uVar2,0,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain();
    func_0x00010c0c0800(uVar2);
    _objc_release(puVar1);
    _objc_release(uVar2);
    _objc_release(uStack_48);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b5e4f30; end: 10b5e4f3f;  */

void FUN_10b5e4f30(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_2 + 8));
      lVar1 = param_2 + 0x18;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_2 + 8),&UNK_10e5d1f31,0x3a);
      func_0x000107c3075c();
      func_0x000107c30760(lVar1,FUN_10b5ed314);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b5ed258;
    }
  }
  lVar1 = 0;
LAB_10b5ed258:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b5e4f40; end: 10b5e506b;  */

void FUN_10b5e4f40(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
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
  
  puVar2 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar3 = auStack_d8;
  lVar4 = 0x10;
  lVar1 = param_2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar4 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_2);
        }
        lVar5 = *(long *)(lStack_118 + lVar4 * 8);
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        if (lVar5 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(lVar5 + 8);
        }
        _objc_retain(uVar7);
        func_0x00010befa120(uVar6);
        _objc_release(uVar7);
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      puVar3 = auStack_d8;
      lVar4 = 0x10;
      lVar1 = param_2;
      puVar2 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retain(lVar4);
  (**(code **)((long)puVar2 + 0x10))(puVar2);
  func_0x00010c266b80(param_2);
  if ((puVar3 != (undefined1 *)0x0) && (lVar4 != 0)) {
    func_0x000107c27d8c(puVar3,lVar4);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b5e506c; end: 10b5e50df; -[SCSQLitePreferences deprecated_performChanges:completionQueue:completionHandler:] */

void FUN_10b5e506c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))(param_3);
  func_0x00010c266b80(param_1);
  if ((param_4 != 0) && (param_5 != 0)) {
    func_0x000107c27d8c(param_4,param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b5e50e0; end: 10b5e5113; -[SCSQLitePreferences synchronize] */

/* WARNING: Possible PIC construction at 0x00010006eb04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006eb08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e50e0(long param_1)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_1 + _DAT_11278e9c8) & 1) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_11278e9d4);
  ppuVar2 = &PTR___NSConcreteGlobalBlock_110d252f0;
  func_0x000107c61174();
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_110d252f0);
  if ((bRam0000000113817d68 & 1) == 0) {
    iVar1 = 0x13817d68;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_sync");
      pcRam0000000113817d60 = pcVar3;
      func_0x000107c60e4c(0x113817d68);
    }
  }
  pcVar3 = pcRam0000000113817d60;
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_110d252f0);
  func_0x000107c61180();
  (*pcVar3)(uVar4,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 10b5e5114; end: 10b5e53af; -[SCSQLitePreferences observe:callbackQueue:changeHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e5114(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *unaff_x24;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((*(byte *)(param_1 + _DAT_11278e9c8) & 1) != 0) {
    puVar2 = PTR_PTR_1126e0330;
    _objc_opt_new(PTR_PTR_1126e0330);
    while( true ) {
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) break;
      ___stack_chk_fail();
LAB_10b5e5378:
      func_0x00010b5e30dc();
LAB_10b5e51dc:
      puVar2 = PTR_PTR_1126e0330;
      _objc_opt_new();
      if (puVar2 != (undefined *)0x0) {
        _objc_storeWeak(puVar2 + 0x10,param_1);
      }
      func_0x00010b5e31c8(puVar2,unaff_x24);
      lVar6 = (long)_DAT_11278e9c4;
      _os_unfair_lock_lock(param_1 + lVar6);
      _objc_retain(param_3);
      lVar3 = param_3;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_3);
          }
          lVar7 = (long)_DAT_11278e9c0;
          puVar4 = *(undefined **)(param_1 + lVar7);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar4 == (undefined *)0x0) {
            puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
            _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
            func_0x00010c1d0640(*(undefined8 *)(param_1 + lVar7));
          }
          func_0x00010befa120(puVar4);
          _objc_release(puVar4);
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = param_3;
        func_0x00010bf52a60();
      }
      _objc_release(param_3);
      _os_unfair_lock_unlock(param_1 + lVar6);
      _objc_release(unaff_x24);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  unaff_x24 = PTR_PTR_1126e0338;
  _objc_opt_new();
  if (unaff_x24 == (undefined *)0x0) goto LAB_10b5e5378;
  _objc_setProperty_nonatomic_copy(unaff_x24);
  func_0x00010b5e30dc(unaff_x24,param_4);
  _objc_setProperty_nonatomic_copy(unaff_x24);
  goto LAB_10b5e51dc;
}



/* Entry: 10b5e53b0; end: 10b5e5437; -[SCSQLitePreferences .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e53b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e9c0,0);
  _objc_storeStrong(param_1 + _DAT_11278e9d0,0);
  _objc_storeStrong(param_1 + _DAT_11278e9d8,0);
  _objc_storeStrong(param_1 + _DAT_11278e9d4,0);
  _objc_storeStrong(param_1 + _DAT_11278e9bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e9cc,0);
  return;
}



/* Entry: 10b5e5438; end: 10b5e55e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e5438(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x25;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_1 != 0) {
    unaff_x25 = (long)_DAT_11278e9c4;
    _os_unfair_lock_lock(param_1 + unaff_x25);
    if (param_2 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(param_2 + 8);
    }
    _objc_retain(lVar7);
    lVar3 = lVar7;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar7);
        }
        lVar4 = *(long *)(param_1 + _DAT_11278e9c0);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360();
        lVar5 = lVar4;
        func_0x00010bf529e0();
        if (lVar5 == 0) {
          func_0x00010c12d3e0(*(undefined8 *)(param_1 + _DAT_11278e9c0));
        }
        _objc_release(lVar4);
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar7;
      func_0x00010bf52a60();
    }
    _objc_release(lVar7);
    _os_unfair_lock_unlock(param_1 + unaff_x25);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + unaff_x25);
  __Unwind_Resume(param_2);
  _objc_opt_self();
  if (lRam00000001137f7308 != -1) {
    func_0x000107c27d9c(0x1137f7308,&PTR___NSConcreteGlobalBlock_110d25310);
  }
  uVar2 = uRam00000001137f7300;
  _objc_retain(uRam00000001137f7300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b5e55e8; end: 10b5e563f;  */

void FUN_10b5e55e8(void)

{
  undefined8 uVar1;
  
  _objc_opt_self();
  if (lRam00000001137f7308 != -1) {
    func_0x000107c27d9c(0x1137f7308,&PTR___NSConcreteGlobalBlock_110d25310);
  }
  uVar1 = uRam00000001137f7300;
  _objc_retain(uRam00000001137f7300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b5e5640; end: 10b5e566b;  */

void FUN_10b5e5640(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0318;
  _objc_opt_new();
  uVar1 = puRam00000001137f7300;
  puRam00000001137f7300 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b5e566c; end: 10b5e56db; -[SCSQLitePreferencesManager init] */

undefined1 * FUN_10b5e566c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112706588;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c25de20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b5e56dc; end: 10b5e578b;  */

void FUN_10b5e56dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    _os_unfair_lock_lock(param_1 + 0x10);
    puVar1 = *(undefined **)(param_1 + 8);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126e0308;
      _objc_alloc(PTR_PTR_1126e0308);
      func_0x00010c0345e0();
      func_0x00010c1d0560(*(undefined8 *)(param_1 + 8));
    }
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b5e578c; end: 10b5e582b;  */

void FUN_10b5e578c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == param_2) {
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 8));
    }
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b5e582c; end: 10b5e5837; -[SCSQLitePreferencesManager .cxx_destruct] */

void FUN_10b5e582c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5e5838; end: 10b5e5a83;  */

void FUN_10b5e5838(ulong param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  byte bStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c06f880();
  uVar3 = param_2;
  func_0x00010c06f880();
  puVar4 = PTR_PTR_1126afc98;
  if (((uVar2 & 1) == 0) && ((uVar3 & 1) == 0)) {
    func_0x00010c0da5c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    uVar1 = (uint)uVar2 ^ 1;
    uStack_58 = (undefined1)uVar1;
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    bStack_78 = (byte)uVar3 ^ 1;
    if ((uVar1 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c269d40(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      _objc_retain(puVar4);
      func_0x00010c23b500(uVar2);
      _objc_release(uVar2);
      _objc_release(puVar4);
      _objc_release(param_3);
    }
    if ((int)uVar3 != 0) {
      uVar2 = param_2;
      func_0x00010c269d40(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      _objc_retain(puVar4);
      func_0x00010c06a260(uVar2);
      _objc_release(uVar2);
      _objc_release(puVar4);
      _objc_release(param_3);
    }
    __Block_object_dispose(&uStack_90,8);
    __Block_object_dispose(&uStack_70,8);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b5e5a84; end: 10b5e5b3f;  */

void FUN_10b5e5a84(long param_1,undefined8 param_2)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_50 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b5e5b40;
  puStack_60 = &UNK_11084f768;
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  puStack_38 = puStack_50;
  func_0x00010c09fac0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_78);
  if (*(char *)(puStack_38 + 3) == '\x01') {
    func_0x00010bfaf680(*(undefined8 *)(param_1 + 0x28));
  }
  __Block_object_dispose(&uStack_40,8);
  return;
}



/* Entry: 10b5e5b40; end: 10b5e5b8b;  */

void FUN_10b5e5b40(long param_1)

{
  byte bVar1;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) == '\x01') {
    bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18);
  }
  else {
    bVar1 = 0;
  }
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = bVar1 & 1;
  return;
}



/* Entry: 10b5e5b8c; end: 10b5e5c47;  */

void FUN_10b5e5b8c(long param_1,undefined8 param_2)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_50 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b5e5c48;
  puStack_60 = &UNK_11084f768;
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  puStack_38 = puStack_50;
  func_0x00010c09fac0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_78);
  if (*(char *)(puStack_38 + 3) == '\x01') {
    func_0x00010bfaf680(*(undefined8 *)(param_1 + 0x28));
  }
  __Block_object_dispose(&uStack_40,8);
  return;
}



/* Entry: 10b5e5c48; end: 10b5e5c93;  */

void FUN_10b5e5c48(long param_1)

{
  byte bVar1;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) == '\x01') {
    bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18);
  }
  else {
    bVar1 = 0;
  }
  *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = bVar1 & 1;
  return;
}



/* Entry: 10b5e5c94; end: 10b5e5caf; -[SCDocPreferences invalidate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e5c94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23b510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278e9f4),PTR_s_shutdownAsynchronously__11266c768,
             &PTR___NSConcreteGlobalBlock_110d25330);
  return;
}



/* Entry: 10b5e5cb0; end: 10b5e5d5b; -[SCDocPreferences invalidateWithCompletionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e5cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278e9f4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b5e5d5c;
  puStack_30 = &UNK_11087bb60;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c23b500(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10b5e5d5c; end: 10b5e5d6f;  */

void FUN_10b5e5d5c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b5e5d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b5e5d70; end: 10b5e5ec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e5d70(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) == 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    if (lVar6 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(lVar6 + _DAT_11278ea14);
      if (lVar5 == 0) {
        puVar2 = PTR_PTR_1126e0360;
        _objc_alloc();
        func_0x00010c012d20();
        uVar3 = *(undefined8 *)(lVar6 + _DAT_11278ea14);
        *(undefined **)(lVar6 + _DAT_11278ea14) = puVar2;
        _objc_release(uVar3);
        lVar5 = *(long *)(lVar6 + _DAT_11278ea14);
      }
      _objc_retain(lVar5);
    }
    lVar6 = lVar5;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(long *)(lVar4 + 0x28) = lVar6;
    _objc_release(uVar3);
    _objc_release(lVar5);
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b5e5ec4;
  puStack_50 = &UNK_1108970a8;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar1;
  func_0x000107c30688(uVar3,&puStack_68,0);
  _objc_release(uStack_48);
  return;
}



/* Entry: 10b5e5ec4; end: 10b5e6033;  */

void FUN_10b5e5ec4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3067c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  if (lVar4 == 0) {
    puVar2 = PTR_PTR_1126e0340;
    _objc_alloc(PTR_PTR_1126e0340);
    func_0x00010c020c20(0,0);
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x28);
    func_0x000107c30680(puVar2,lVar4,*(undefined8 *)(param_1 + 0x20),uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126e0350;
  func_0x000107c30694(PTR_PTR_1126e0350,puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126e0350;
    FUN_10b5e7cd4(PTR_PTR_1126e0350,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107c30684(puVar2,puVar3);
  }
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b5e6034; end: 10b5e627f; -[SCDocPreferences allKeysInNamespace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e6034(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uStack_194;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + _DAT_11278e9f4);
  _objc_opt_class(PTR_PTR_1126e0340);
  if (lVar5 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,lVar5);
  }
  puVar2 = &uStack_101;
  FUN_10b5e7a68();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  _objc_retain(param_3);
  ppuStack_178 = &PTR_DAT_110862760;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_DAT_110862700;
  uStack_b0 = 0;
  uStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  puStack_190 = (undefined8 *)0x0;
  puStack_188 = (undefined8 *)0x0;
  uStack_180 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  uStack_148 = param_3;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x000107c310cc(puVar3,&ppuStack_100,&puStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_190 != (undefined8 *)0x0) {
    puStack_188 = puStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_DAT_110862700;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_190 = &uStack_b8;
  func_0x000107c27dd4(&puStack_190);
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_110862760;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_190 = &uStack_130;
  func_0x000107c27dd4(&puStack_190);
  _objc_release(uStack_148);
  func_0x000107c27da8(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  puVar4 = puVar3;
  func_0x000107c31908(puVar3,&PTR___NSConcreteGlobalBlock_110d25370);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b5e6280; end: 10b5e629f;  */

void FUN_10b5e6280(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c086560(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5e62a0; end: 10b5e6423; -[SCDocPreferences addEntriesFromDictionary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e62a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10b5e6424;
  puStack_68 = &UNK_110d25390;
  lStack_60 = param_1;
  _objc_retain();
  puStack_58 = puVar2;
  func_0x00010bf97ce0(param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278e9ec);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10b5e6504;
  puStack_98 = &UNK_110883780;
  lStack_90 = param_1;
  _objc_retain(param_3);
  uStack_88 = param_3;
  func_0x000107c27da4(uVar3,&puStack_b0);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10b5e6518;
  puStack_c0 = &UNK_11084f688;
  _objc_retain(puVar2);
  puStack_b8 = puVar2;
  func_0x000107c30688(param_1,&puStack_d8,param_3);
  _objc_release(puStack_b8);
  _objc_release(uStack_88);
  _objc_release(puStack_58);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10b5e6424; end: 10b5e6503;  */

void FUN_10b5e6424(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x000107c3067c(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c30680(lVar2,param_3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b5e6504; end: 10b5e6517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e6504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278e9f8),
             PTR_s_addEntriesFromDictionary__11259b980,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b5e6518; end: 10b5e66cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e6518(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar4);
      }
      uVar6 = *(undefined8 *)(lVar7 * 8);
      puVar2 = PTR_PTR_1126e0350;
      func_0x000107c30694(PTR_PTR_1126e0350,uVar6);
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        puVar2 = PTR_PTR_1126e0350;
        FUN_10b5e7cd4(PTR_PTR_1126e0350,uVar6);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000107c30684(uVar6,puVar2);
      }
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar4);
  _objc_release(param_2);
  __Unwind_Resume();
  lVar5 = (long)_DAT_11278e9f4;
  if (*(long *)(lVar1 + lVar5) != 0) {
    lVar3 = lVar1;
    _dispatch_group_create();
    _dispatch_group_enter();
    uVar6 = *(undefined8 *)(lVar1 + lVar5);
    _objc_retain(lVar3);
    func_0x00010c0f8500(uVar6);
    uVar6 = 0;
    _dispatch_time(0,100000000);
    _dispatch_group_wait(lVar3,uVar6);
    _objc_release(lVar3);
    _objc_release(lVar3);
  }
  return;
}



/* Entry: 10b5e66d0; end: 10b5e67b3; -[SCDocPreferences synchronize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e66d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11278e9f4;
  if (*(long *)(param_1 + lVar3) != 0) {
    lVar1 = param_1;
    _dispatch_group_create();
    _dispatch_group_enter();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    _objc_retain(lVar1);
    func_0x00010c0f8500(uVar2);
    uVar2 = 0;
    _dispatch_time(0,100000000);
    _dispatch_group_wait(lVar1,uVar2);
    _objc_release(lVar1);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 10b5e67b4; end: 10b5e67bf;  */

void FUN_10b5e67b4(void)

{
  return;
}



/* Entry: 10b5e67c0; end: 10b5e691b; -[SCDocPreferences deprecated_performChanges:completionQueue:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e67c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _dispatch_group_enter(*(undefined8 *)(param_1 + _DAT_11278ea0c));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278e9f4);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b5e691c;
  puStack_58 = &UNK_110d253e0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10b5e6b18;
  puStack_90 = &UNK_110a50200;
  lStack_88 = param_1;
  uStack_80 = param_4;
  uStack_78 = param_5;
  lStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_70,0,&puStack_a8);
  _objc_release(uStack_80);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10b5e691c; end: 10b5e6a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e691c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  FUN_10b5e6a58(*(undefined8 *)(param_1 + 0x20));
  lVar4 = *(long *)(param_1 + 0x20);
  lVar3 = (long)_DAT_11278ea10;
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(lVar4 + lVar3);
  *(undefined8 *)(lVar4 + lVar3) = param_2;
  _objc_release(uVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3) = 0;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_11278ea00;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3);
  func_0x00010bf51e00();
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar3));
  FUN_10b5e6a58(0);
  lStack_40 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(lStack_40 + _DAT_11278e9fc);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b5e6b04;
  puStack_48 = &UNK_110883780;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x000107c27d8c(uVar2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10b5e6a58; end: 10b5e6b03;  */

void FUN_10b5e6a58(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460(PTR__OBJC_CLASS___NSThread_1126b47e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26d3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b5e6b04; end: 10b5e6b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e6b04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dd430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278ea04),
             PTR_s_notifyObserversForChangedObjects_112614f20,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b5e6b18; end: 10b5e6b77;  */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e6b18(long param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  _dispatch_group_leave(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278ea0c));
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    func_0x000107c61174();
    func_0x000107c61174(lVar4);
    if ((bRam0000000113817cd8 & 1) == 0) {
      iVar1 = 0x13817cd8;
      func_0x000107c60e48();
      if (iVar1 != 0) {
        pcVar2 = (code *)0xffffffffffffffff;
        func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
        pcRam0000000113817cd0 = pcVar2;
        func_0x000107c60e4c(0x113817cd8);
      }
    }
    pcVar2 = pcRam0000000113817cd0;
    func_0x00010002a3a8(lVar4);
    func_0x000107c61180();
    (*pcVar2)(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b5e6b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x10))(lVar4);
  return;
}



/* Entry: 10b5e6b78; end: 10b5e6c37; -[SCDocPreferences unobserveWithKeys:observationToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e6b78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278e9fc);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b5e6c38;
  puStack_50 = &UNK_110896e48;
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



/* Entry: 10b5e6c38; end: 10b5e6c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e6c38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c281bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278ea04),
             PTR_s_unobserveWithKeys_observationTok_11267e118,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b5e6c54; end: 10b5e6d13; -[SCDocPreferences .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e6c54(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278ea0c,0);
  _objc_storeStrong(param_1 + _DAT_11278ea14,0);
  _objc_storeStrong(param_1 + _DAT_11278ea04,0);
  _objc_storeStrong(param_1 + _DAT_11278ea00,0);
  _objc_storeStrong(param_1 + _DAT_11278e9fc,0);
  _objc_storeStrong(param_1 + _DAT_11278ea10,0);
  _objc_storeStrong(param_1 + _DAT_11278e9f8,0);
  _objc_storeStrong(param_1 + _DAT_11278e9f4,0);
  _objc_storeStrong(param_1 + _DAT_11278e9f0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e9ec,0);
  return;
}



/* Entry: 10b5e6d14; end: 10b5e6d17;  */

void FUN_10b5e6d14(void)

{
  return;
}



/* Entry: 10b5e6d18; end: 10b5e6e33; -[SCUnauthenticatedStorageEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e6d18(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278ea18);
  *(undefined **)(param_1 + _DAT_11278ea18) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126e0390;
  _objc_alloc(PTR_PTR_1126e0390);
  func_0x00010c038020();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_11278ea1c));
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10b5e6e34; end: 10b5e6e87;  */

void FUN_10b5e6e34(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bed0ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b5e6e88; end: 10b5e6fcb; -[SCUnauthenticatedStorageEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e6e88(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar5 = param_1;
  func_0x00010bddef80();
  if ((int)lVar5 == 0) {
    lVar5 = (long)_DAT_11278ea18;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar5);
    func_0x00010c06f880();
    if (iVar1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c069d00();
      _objc_release(uVar4);
    }
    puStack_60 = PTR_PTR_112706598;
    plVar3 = &lStack_68;
    lStack_68 = param_1;
    _objc_msgSendSuper2(plVar3,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = (long)_DAT_11278ea20;
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    _objc_retain(uVar4);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10b5e6fcc;
    puStack_40 = &UNK_11087bb00;
    uStack_38 = uVar4;
    func_0x00010be8cea0(param_1);
    plVar3 = *(long **)(param_1 + lVar5);
    func_0x00010c117720(plVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 10b5e6fcc; end: 10b5e6fd3;  */

void FUN_10b5e6fcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10b5e6fd4; end: 10b5e703b; -[SCUnauthenticatedStorageEntryPoint _unauthenticatedPreferences] */

void FUN_10b5e6fd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0368;
  func_0x00010be76da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1067c0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b5e703c; end: 10b5e724f; -[SCUnauthenticatedStorageEntryPoint _removePreference:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e703c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be01b60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
    else {
      lVar3 = param_1 + _DAT_11278ea24;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010c0f98e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      lVar3 = lVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bfcd0c0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = (long)_DAT_11278ea28;
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      *(long *)(param_1 + lVar8) = lVar5;
      _objc_release(uVar6);
      _objc_release(lVar3);
      uVar7 = *(undefined8 *)(param_1 + _DAT_11278ea18);
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_10b5e7250;
      puStack_70 = &UNK_1108a5ee8;
      uStack_68 = uVar7;
      puStack_60 = puVar2;
      _objc_retain(param_3);
      lStack_58 = param_3;
      _objc_retain(uVar7);
      func_0x00010c0f7fc0(uVar6,param_2,&puStack_88);
      _objc_release(lStack_58);
      _objc_release(uVar7);
      _objc_release(lVar4);
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b5e7250; end: 10b5e7303;  */

void FUN_10b5e7250(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10b5e7304;
  puStack_38 = &UNK_1107d0af0;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x00010c06a260(uVar1,param_2,&puStack_50);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  return;
}



/* Entry: 10b5e7304; end: 10b5e7367;  */

void FUN_10b5e7304(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010b5e7350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 10b5e7368; end: 10b5e742b; -[SCUnauthenticatedStorageEntryPoint _directoryPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e7368(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_11278ea2c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf7f880();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf878c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b5e742c; end: 10b5e748b; -[SCUnauthenticatedStorageEntryPoint _preferencesPath] */

void FUN_10b5e742c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be01b60();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b5e748c; end: 10b5e754b; -[SCUnauthenticatedStorageEntryPoint _cleanStorageEnabled] */

byte FUN_10b5e748c(undefined8 param_1)

{
  byte bVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (lRam00000001137f7350 != -1) {
    func_0x000107c27d9c(0x1137f7350,&PTR___NSConcreteGlobalBlock_110d25500);
  }
  if ((bRam00000001137f7341 & 1) == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10b5e754c;
    puStack_30 = &UNK_11087bb00;
    bVar1 = bRam00000001137f7340;
    if (lRam00000001137f7348 != -1) {
      uStack_28 = param_1;
      func_0x000107c27d9c(0x1137f7348,&puStack_48);
      bVar1 = bRam00000001137f7340;
    }
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 10b5e754c; end: 10b5e75df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e754c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20) + (long)_DAT_11278ea30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf1f440();
  uRam00000001137f7340 = (undefined1)lVar3;
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b5e75e0; end: 10b5e766f; -[SCUnauthenticatedStorageEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5e75e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278ea1c,0);
  _objc_destroyWeak(param_1 + _DAT_11278ea24);
  _objc_destroyWeak(param_1 + _DAT_11278ea30);
  _objc_destroyWeak(param_1 + _DAT_11278ea2c);
  _objc_destroyWeak(param_1 + _DAT_11278ea34);
  _objc_storeStrong(param_1 + _DAT_11278ea28,0);
  _objc_storeStrong(param_1 + _DAT_11278ea20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278ea18,0);
  return;
}



/* Entry: 10b5e7670; end: 10b5e76fb;  */

void FUN_10b5e7670(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf09e40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf4b900();
  uRam00000001137f7341 = SUB81(puVar3,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b5e76fc; end: 10b5e771f; -[SCDocPrefItem copyWithZone:] */

undefined8 FUN_10b5e76fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b5e7720; end: 10b5e782f; -[SCDocPrefItem hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b5e7720(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278ea38);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278ea3c);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  lStack_60 = (long)*(char *)(param_1 + _DAT_11278ea40);
  lStack_58 = (long)*(char *)(param_1 + _DAT_11278ea44);
  lVar7 = *(long *)(param_1 + _DAT_11278ea48);
  lStack_50 = -lVar7;
  if (-1 < lVar7) {
    lStack_50 = lVar7;
  }
  uStack_48 = *(undefined8 *)(param_1 + _DAT_11278ea4c);
  uVar6 = (ulong)*(uint *)(param_1 + _DAT_11278ea50) * 0x200000 - 1;
  uVar6 = (uVar6 ^ uVar6 >> 0x18) * 0x109;
  uVar6 = (uVar6 ^ uVar6 >> 0xe) * 0x15;
  lStack_40 = (uVar6 ^ uVar6 >> 0x1c) * 0x80000001;
  uVar6 = ~*(ulong *)(param_1 + _DAT_11278ea54) + *(ulong *)(param_1 + _DAT_11278ea54) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_38 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278ea58);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_10b5e79b4:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b5e79c0;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar5 & 1) != 0) &&
       ((((*(char *)((long)puVar4 + (long)_DAT_11278ea40) == param_3[_DAT_11278ea40] &&
          (*(char *)((long)puVar4 + (long)_DAT_11278ea44) == param_3[_DAT_11278ea44])) &&
         (*(long *)((long)puVar4 + (long)_DAT_11278ea48) == *(long *)(param_3 + _DAT_11278ea48))) &&
        (*(long *)((long)puVar4 + (long)_DAT_11278ea4c) == *(long *)(param_3 + _DAT_11278ea4c))))) {
      fVar11 = ABS(*(float *)((long)puVar4 + (long)_DAT_11278ea50) -
                   *(float *)(param_3 + _DAT_11278ea50));
      fVar9 = ABS(*(float *)((long)puVar4 + (long)_DAT_11278ea50) +
                  *(float *)(param_3 + _DAT_11278ea50)) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar11) && (bVar1 = false, !NAN(fVar11) && !NAN(fVar9))) {
        bVar1 = fVar11 < fVar9;
      }
      if (bVar1) {
        dVar12 = ABS(*(double *)((long)puVar4 + (long)_DAT_11278ea54) -
                     *(double *)(param_3 + _DAT_11278ea54));
        dVar10 = ABS(*(double *)((long)puVar4 + (long)_DAT_11278ea54) +
                     *(double *)(param_3 + _DAT_11278ea54)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar12) && (bVar1 = false, !NAN(dVar12) && !NAN(dVar10))) {
          bVar1 = dVar12 < dVar10;
        }
        if (((bVar1) &&
            ((lVar7 = *(long *)((long)puVar4 + (long)_DAT_11278ea38),
             lVar7 == *(long *)(param_3 + _DAT_11278ea38) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
           ((lVar7 = *(long *)((long)puVar4 + (long)_DAT_11278ea3c),
            lVar7 == *(long *)(param_3 + _DAT_11278ea3c) || (func_0x00010c071ae0(), (int)lVar7 != 0)
            ))) {
          puVar8 = *(undefined1 **)((long)puVar4 + (long)_DAT_11278ea58);
          if (puVar8 != *(undefined1 **)(param_3 + _DAT_11278ea58)) {
            func_0x00010c071ae0();
            goto LAB_10b5e79c0;
          }
          goto LAB_10b5e79b4;
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10b5e79c0:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10b5e7830; end: 10b5e79db; -[SCDocPrefItem isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b5e7830(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b5e79b4:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b5e79c0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(char *)(param_1 + (long)_DAT_11278ea40) == *(char *)(param_3 + (long)_DAT_11278ea40) &&
          (*(char *)(param_1 + (long)_DAT_11278ea44) == *(char *)(param_3 + (long)_DAT_11278ea44)))
         && (*(long *)(param_1 + (long)_DAT_11278ea48) == *(long *)(param_3 + (long)_DAT_11278ea48))
         ) && (*(long *)(param_1 + (long)_DAT_11278ea4c) ==
               *(long *)(param_3 + (long)_DAT_11278ea4c))))) {
      fVar5 = *(float *)(param_1 + (long)_DAT_11278ea50);
      fVar7 = *(float *)(param_3 + (long)_DAT_11278ea50);
      fVar9 = ABS(fVar5 - fVar7);
      fVar5 = ABS(fVar5 + fVar7) * 1.1920929e-07;
      bVar1 = true;
      if ((1.1754944e-38 <= fVar9) && (bVar1 = false, !NAN(fVar9) && !NAN(fVar5))) {
        bVar1 = fVar9 < fVar5;
      }
      if (bVar1) {
        dVar6 = *(double *)(param_1 + (long)_DAT_11278ea54);
        dVar8 = *(double *)(param_3 + (long)_DAT_11278ea54);
        dVar10 = ABS(dVar6 - dVar8);
        dVar6 = ABS(dVar6 + dVar8) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar6))) {
          bVar1 = dVar10 < dVar6;
        }
        if (((bVar1) &&
            ((lVar4 = *(long *)(param_1 + (long)_DAT_11278ea38),
             lVar4 == *(long *)(param_3 + (long)_DAT_11278ea38) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + (long)_DAT_11278ea3c),
            lVar4 == *(long *)(param_3 + (long)_DAT_11278ea3c) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
          lVar4 = *(long *)(param_1 + (long)_DAT_11278ea58);
          if (lVar4 != *(long *)(param_3 + (long)_DAT_11278ea58)) {
            func_0x00010c071ae0();
            goto LAB_10b5e79c0;
          }
          goto LAB_10b5e79b4;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10b5e79c0:
  _objc_release(param_3);
  return lVar4;
}


