/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105818d28; end: 105818d9f;  */

void FUN_105818d28(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_1108b5ef0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105818da0; end: 105818ddf;  */

void FUN_105818da0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beb1d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105818de0; end: 105818ed7; -[SCSnapProMessagingServicesEntryPoint _shareMessageSender] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105818de0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_11272a358;
    _objc_loadWeakRetained(lVar5);
  }
  lVar1 = lVar5;
  func_0x00010c26c760(lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = 0;
  if (param_1 != 0) {
    lVar5 = param_1 + _DAT_11272a35c;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = lVar5;
  func_0x00010bf501a0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar3 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  puVar4 = PTR_PTR_1126bed00;
  _objc_alloc(PTR_PTR_1126bed00);
  func_0x00010c051a60();
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105818ed8; end: 105818f2b; -[SCSnapProMessagingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105818ed8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272a350,0);
  _objc_destroyWeak(param_1 + _DAT_11272a35c);
  _objc_destroyWeak(param_1 + _DAT_11272a358);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a354);
  return;
}



/* Entry: 105818f2c; end: 105818f8b; -[SCBatteryPageViewReporterEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105818f2c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a370);
  _objc_destroyWeak(param_1 + _DAT_11272a36c);
  _objc_destroyWeak(param_1 + _DAT_11272a368);
  _objc_destroyWeak(param_1 + _DAT_11272a364);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272a360,0);
  return;
}



/* Entry: 105818f8c; end: 105818fdf;  */

void FUN_105818f8c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  puVar1 = PTR_PTR_1126afdd8;
  func_0x00010bfc8740(PTR_PTR_1126afdd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75ac0(param_2,uVar2,param_4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105818fe0; end: 105818fe7;  */

void FUN_105818fe0(void)

{
  return;
}



/* Entry: 105818fe8; end: 105819087; -[SCBatteryPageViewReporter didEndPageViewWithFinishedPageName:endTimestamp:] */

void FUN_105818fe8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(param_4);
  func_0x00010c0f2120(param_1,uVar3);
  lVar1 = param_2;
  func_0x00010bdd97a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4b900();
  _objc_release(param_4);
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf72b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,*(undefined8 *)(param_2 + 0x10),
               PTR_s_didCameraStopBeingVisibleAtTime__1125ba470);
    return;
  }
  return;
}



/* Entry: 105819088; end: 1058190c3; -[SCBatteryPageViewReporter .cxx_destruct] */

void FUN_105819088(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058190c4; end: 105819187;  */

void FUN_1058190c4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x000100088750();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126bed10;
  _objc_alloc(PTR_PTR_1126bed10);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff5800(puVar3,param_2,uVar4,lVar2);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126bed18;
  func_0x00010c0b6ea0(PTR_PTR_1126bed18,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105819188; end: 10581925f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105819188(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((param_2 & 1) != 0) {
    return;
  }
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf0c420(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar4 = lVar1 + _DAT_11272a38c;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bf8afc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar6 != 0) {
      func_0x00010c192c80(uVar3);
    }
    _objc_release(lVar6);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105819260; end: 105819327; -[SCAtlasRegistryServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105819260(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_11272a390));
  lVar3 = (long)_DAT_11272a384;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf0c420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06f880();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf0c420(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86d40();
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  puStack_38 = PTR_PTR_1126ea778;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105819328; end: 105819457; -[SCAtlasRegistryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105819328(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a388);
  _objc_destroyWeak(param_1 + _DAT_11272a38c);
  _objc_destroyWeak(param_1 + _DAT_11272a380);
  _objc_destroyWeak(param_1 + _DAT_11272a394);
  _objc_storeStrong(param_1 + _DAT_11272a384,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272a390,0);
  return;
}



/* Entry: 105819458; end: 1058194e7; -[SCAtlasServiceProvider _createMyDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105819458(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + _DAT_11272a398;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf0c420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126bed38;
  _objc_alloc(PTR_PTR_1126bed38);
  func_0x00010bff4880();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058194e8; end: 1058194ef;  */

void FUN_1058194e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc5530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getFactory_1125ceef0);
  return;
}



/* Entry: 1058194f0; end: 10581957f; -[SCAtlasServiceProvider _createFriendsDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058194f0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + _DAT_11272a398;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf0c420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126bed40;
  _objc_alloc(PTR_PTR_1126bed40);
  func_0x00010bff4880();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105819580; end: 105819587;  */

void FUN_105819580(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc5530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getFactory_1125ceef0);
  return;
}



/* Entry: 105819588; end: 105819617; -[SCAtlasServiceProvider _createPublicDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105819588(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + _DAT_11272a398;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf0c420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126bed48;
  _objc_alloc(PTR_PTR_1126bed48);
  func_0x00010bff4880();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105819618; end: 10581961f;  */

void FUN_105819618(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc5530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getFactory_1125ceef0);
  return;
}



/* Entry: 105819620; end: 105819717; -[SCAtlasServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105819620(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  lVar4 = (long)_DAT_11272a398;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf0c420();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c06f880();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 != 0) {
    lVar4 = param_1 + lVar4;
    _objc_loadWeakRetained(lVar4);
    lVar1 = lVar4;
    func_0x00010bf0c420();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfc3a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a73c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar4);
  }
  puStack_48 = PTR_PTR_1126ea780;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105819718; end: 10581974f; -[SCAtlasServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105819718(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a398);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a39c);
  return;
}



/* Entry: 105819750; end: 105819833; -[SCAtlasUserIdServiceProvider provide] */

void FUN_105819750(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126bed50;
  _objc_alloc(PTR_PTR_1126bed50);
  func_0x00010bff4900();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105819834; end: 105819873;  */

void FUN_105819834(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf5580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105819874; end: 105819903; -[SCAtlasUserIdServiceProvider _createUserIdProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105819874(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + _DAT_11272a3a0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf0c420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126bed58;
  _objc_alloc(PTR_PTR_1126bed58);
  func_0x00010bff4880();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105819904; end: 10581990b;  */

void FUN_105819904(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc5530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getFactory_1125ceef0);
  return;
}



/* Entry: 10581990c; end: 105819943; -[SCAtlasUserIdServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10581990c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272a3a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272a3a4);
  return;
}



/* Entry: 105819944; end: 1058199bb; -[SCAtlasFriendsDataObserver initWithOnUpdate:] */

undefined1 * FUN_105819944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea788;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058199bc; end: 1058199d3; -[SCAtlasFriendsDataObserver onCacheStatesUpdate:] */

void FUN_1058199bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001058199cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 1058199d4; end: 1058199df; -[SCAtlasFriendsDataObserver .cxx_destruct] */

void FUN_1058199d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058199e0; end: 105819a67; -[SCAtlasFriendsDataProviderImpl initWithAtlasFactory:] */

undefined1 * FUN_1058199e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea790;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105819a68; end: 105819a6f;  */

void FUN_105819a68(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc2850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getAtlasFriendsDataProvider_1125ce3b8);
  return;
}



/* Entry: 105819a70; end: 105819ba7; -[SCAtlasFriendsDataProviderImpl getFriendCurrentCalendarEventWithUserId:success:onComplete:onError:] */

void FUN_105819a70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfc5e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105819ba8;
  puStack_60 = &UNK_1108b61d0;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c26d0c0(uVar1,param_2,&puStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 105819ba8; end: 105819c6f;  */

undefined8 FUN_105819ba8(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfc1d60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return 0;
}



/* Entry: 105819c70; end: 105819cbb;  */

void FUN_105819c70(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  return;
}



/* Entry: 105819cbc; end: 105819dcb; -[SCAtlasFriendsDataProviderImpl getFriendAllCalendarEventsWithUserId:success:onError:] */

void FUN_105819cbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfc5da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105819dcc;
  puStack_58 = &UNK_1108b6200;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c26d0c0(uVar1,param_2,&puStack_70);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 105819dcc; end: 105819e7f;  */

undefined8 FUN_105819dcc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfc1d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  return 0;
}



/* Entry: 105819e80; end: 105819f8f; -[SCAtlasFriendsDataProviderImpl getBatchFriendAllCalendarEventsWithUserIds:success:onError:] */

void FUN_105819e80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfc2e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105819f90;
  puStack_58 = &UNK_1108b6200;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c26d0c0(uVar1,param_2,&puStack_70);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 105819f90; end: 10581a043;  */

undefined8 FUN_105819f90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfc1d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  return 0;
}



/* Entry: 10581a044; end: 10581a153; -[SCAtlasFriendsDataProviderImpl getBlockedUsersWithCursor:success:onError:] */

void FUN_10581a044(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfc30c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10581a154;
  puStack_58 = &UNK_1108b6200;
  uStack_50 = param_5;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c26d0c0(uVar1,param_2,&puStack_70);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(uVar1);
  return;
}



/* Entry: 10581a154; end: 10581a4d3;  */

undefined * FUN_10581a154(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuVar1 = param_2;
  func_0x00010bfc1d60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = (undefined **)PTR_PTR_1126bed60;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = (undefined **)0x0;
  _objc_retain(0);
  ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSException_1126af520;
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (ppuVar2 == (undefined **)0x0) {
    lVar14 = *(long *)(param_1 + 0x20);
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = &PTR____CFConstantStringClassReference_110e055b8;
    func_0x00010bf9aa60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar8;
    (**(code **)(lVar14 + 0x10))(lVar14);
  }
  else {
    func_0x00010bf1d8a0();
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar2;
    func_0x00010bf1d880();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar15;
    func_0x00010bf52a60();
    lVar14 = lRam0000000000000000;
    while (ppuVar8 != (undefined **)0x0) {
      ppuVar16 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar14) {
          _objc_enumerationMutation(ppuVar15);
        }
        lVar17 = *(long *)((long)ppuVar16 * 8);
        lVar4 = lVar17;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010b70473c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        if (lVar5 != 0) {
          lVar4 = lVar5;
          func_0x00010bdc3580(lVar5);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar4;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          puVar7 = PTR_PTR_1126bed68;
          _objc_alloc(PTR_PTR_1126bed68);
          lVar4 = lVar17;
          func_0x00010c0d3e20(lVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf85d80(lVar17);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c05bfc0(puVar7);
          func_0x00010befa120(ppuVar3);
          _objc_release(puVar7);
          _objc_release(lVar17);
          _objc_release(lVar4);
          _objc_release(lVar6);
        }
        _objc_release(lVar5);
        ppuVar16 = (undefined **)((long)ppuVar16 + 1);
      } while (ppuVar8 != ppuVar16);
      ppuVar8 = ppuVar15;
      func_0x00010bf52a60();
    }
    _objc_release(ppuVar15);
    lVar14 = *(long *)(param_1 + 0x28);
    ppuVar8 = ppuVar2;
    func_0x00010bf610c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar12 = ppuVar3;
    ppuVar16 = ppuVar8;
    (**(code **)(lVar14 + 0x10))(lVar14);
    ppuVar15 = ppuVar3;
  }
  _objc_release(ppuVar8);
  _objc_release(ppuVar15);
  _objc_release(ppuVar2);
  _objc_release(0);
  _objc_release(ppuVar1);
  while( true ) {
    iVar11 = (int)ppuVar12;
    ppuVar3 = param_2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
      return (undefined *)0x0;
    }
    ___stack_chk_fail();
    if (iVar11 != 1) break;
    _objc_begin_catch();
    _objc_retain();
    ppuVar12 = ppuVar3;
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    _objc_release(ppuVar3);
    _objc_end_catch();
  }
  __Unwind_Resume();
  _objc_retain(ppuVar16);
  puVar9 = ppuVar3[1];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae6b8;
  _objc_retain(ppuVar16);
  _objc_retain(puVar9);
  func_0x00010bf54280(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(ppuVar16);
  _objc_release(puVar9);
  _objc_release(ppuVar16);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return puVar10;
}



/* Entry: 10581a4d4; end: 10581a5c3; -[SCAtlasFriendsDataProviderImpl observeSaturnCacheStatesForFriendIds:source:] */

void FUN_10581a4d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10581a5c4;
  puStack_50 = &UNK_1108b6250;
  uStack_48 = uVar1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010bf54280(puVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10581a5c4; end: 10581a72f;  */

void FUN_10581a5c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bed70;
  _objc_alloc();
  _objc_retain(param_2);
  func_0x00010c0318c0();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0e0ae0();
  puVar3 = PTR_PTR_1126b0418;
  if (lVar2 == -1) {
    func_0x00010bf436e0(param_2);
    puVar3 = PTR_PTR_1126b0418;
    func_0x00010bf54280(PTR_PTR_1126b0418);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    func_0x00010bf54280(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10581a730; end: 10581a74b;  */

void FUN_10581a730(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
  return;
}



/* Entry: 10581a74c; end: 10581a757; -[SCAtlasFriendsDataProviderImpl .cxx_destruct] */

void FUN_10581a74c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10581a758; end: 10581a7df; -[SCAtlasMyDataProviderImpl initWithAtlasFactory:] */

undefined1 * FUN_10581a758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea798;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10581a7e0; end: 10581a7e7;  */

void FUN_10581a7e0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc2870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getAtlasMyDataProvider_1125ce3c0);
  return;
}



/* Entry: 10581a7e8; end: 10581a903; -[SCAtlasMyDataProviderImpl getMyCurrentCalendarEventWithSuccess:onComplete:onError:] */

void FUN_10581a7e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10581a904;
  puStack_60 = &UNK_1108b61d0;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c26d0c0(uVar2,param_2,&puStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10581a904; end: 10581a9cb;  */

undefined8 FUN_10581a904(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfc1d60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return 0;
}



/* Entry: 10581a9cc; end: 10581aab7; -[SCAtlasMyDataProviderImpl getMyAllCalendarEventsWithSuccess:onError:] */

void FUN_10581a9cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10581aab8;
  puStack_48 = &UNK_1108b6200;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c26d0c0(uVar2,param_2,&puStack_60);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10581aab8; end: 10581ab6b;  */

undefined8 FUN_10581aab8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfc1d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  return 0;
}



/* Entry: 10581ab6c; end: 10581ab77; -[SCAtlasMyDataProviderImpl .cxx_destruct] */

void FUN_10581ab6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10581ab78; end: 10581abff; -[SCAtlasPublicDataProviderImpl initWithAtlasFactory:] */

undefined1 * FUN_10581ab78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea7a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10581ac00; end: 10581ac07;  */

void FUN_10581ac00(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc2890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getAtlasPublicDataProvider_1125ce3c8);
  return;
}



/* Entry: 10581ac08; end: 10581ad43; -[SCAtlasPublicDataProviderImpl getFollowers:withSuccess:onError:] */

void FUN_10581ac08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bed78;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c007ae0();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10581ad44;
  puStack_58 = &UNK_1108b6200;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c26d0c0(uVar3,param_2,&puStack_70);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 10581ad44; end: 10581ae3b;  */

undefined8 FUN_10581ad44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfc1d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x20);
  uVar2 = uVar1;
  func_0x00010bfb39c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf610c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return 0;
}



/* Entry: 10581ae3c; end: 10581ae47; -[SCAtlasPublicDataProviderImpl .cxx_destruct] */

void FUN_10581ae3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10581ae48; end: 10581aecf; -[SCAtlasUserIdProviderImpl initWithAtlasFactory:] */

undefined1 * FUN_10581ae48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea7a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10581aed0; end: 10581aed7;  */

void FUN_10581aed0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc28b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getAtlasUserIdProvider_1125ce3d0);
  return;
}



/* Entry: 10581aed8; end: 10581b017; -[SCAtlasUserIdProviderImpl getUserIdByUsername:source:success:notFound:onError:] */

void FUN_10581aed8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfcbe00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10581b018;
  puStack_60 = &UNK_1108b61d0;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c26d0c0(uVar1,param_2,&puStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar1);
  return;
}



/* Entry: 10581b018; end: 10581b0eb;  */

undefined8 FUN_10581b018(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfc1d60();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (lVar2 = lVar1, func_0x00010c08fa60(), lVar2 == 0)) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return 0;
}



/* Entry: 10581b0ec; end: 10581b0f7; -[SCAtlasUserIdProviderImpl .cxx_destruct] */

void FUN_10581b0ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10581b0f8; end: 10581b197; -[SCFriendingInlineSuggestionsGrapheneLogger initWithGrapheneRegistry:] */

undefined1 * FUN_10581b0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ea7b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c065420();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10581b198; end: 10581b1eb; -[SCFriendingInlineSuggestionsGrapheneLogger logSeenSuggestionsCount:] */

void FUN_10581b198(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bed80;
  func_0x00010c157fe0(PTR_PTR_1126bed80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10581b1ec; end: 10581b23f; -[SCFriendingInlineSuggestionsGrapheneLogger logAddedSuggestionsCount:] */

void FUN_10581b1ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bed80;
  func_0x00010befcda0(PTR_PTR_1126bed80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10581b240; end: 10581b24b; -[SCFriendingInlineSuggestionsGrapheneLogger .cxx_destruct] */

void FUN_10581b240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10581b24c; end: 10581b36b; -[SCFriendingInlineSuggestionsImpressionLogger initWithDiscoverEventAnnouncer:queuePerformer:grapheneLogger:quickAddLoggerCreator:] */

undefined1 *
FUN_10581b24c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ea7b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bdef220();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined1 **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar4;
    _objc_release(uVar2);
    func_0x00010bef9980(param_3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10581b36c; end: 10581b457; -[SCFriendingInlineSuggestionsImpressionLogger _createLazyQuickAddLoggerWithQuickAddCreator:] */

void FUN_10581b36c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10581b404;
  puStack_30 = &UNK_1108b6340;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10581b458; end: 10581b567; -[SCFriendingInlineSuggestionsImpressionLogger _updateSeenSuggestion:index:] */

void FUN_10581b458(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    lVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(lVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      lVar1 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar3,param_2,param_3,lVar1);
      _objc_release(lVar1);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbbc0();
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10581b568; end: 10581b5db; -[SCFriendingInlineSuggestionsImpressionLogger _sendSeenSuggestions] */

void FUN_10581b568(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010c0af000(uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aef40();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c12add0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeAllObjects_112628590);
  return;
}



/* Entry: 10581b5dc; end: 10581b907; -[SCFriendingInlineSuggestionsImpressionLogger didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_10581b5dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  uVar6 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar6 == 0) {
    uVar6 = param_3;
    func_0x00010c0720c0();
    if ((int)uVar6 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_a8,auStack_68);
      func_0x00010c0f7fc0(uVar6);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_a8);
    }
  }
  else {
    puVar7 = PTR_PTR_1126bed88;
    func_0x00010bf04780(PTR_PTR_1126bed88);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar7);
    if ((int)uVar6 != 0) {
      uVar2 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      _objc_opt_class(PTR__OBJC_CLASS___NSIndexPath_1126b0990);
      uVar3 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar7);
      uVar1 = uVar2;
      if ((uVar3 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (uVar1 == 0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        func_0x00010c142240(uVar2);
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar3 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126bed90;
      _objc_opt_class(PTR_PTR_1126bed90);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar4);
      uVar2 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(uVar3);
      if (uVar2 != 0) {
        uVar6 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0xc2000000;
        pcStack_90 = FUN_10581b908;
        puStack_88 = &UNK_110848218;
        _objc_copyWeak(auStack_70,auStack_68);
        _objc_retain(uVar3);
        uStack_80 = uVar2;
        _objc_retain(puVar7);
        puStack_78 = puVar7;
        func_0x00010c0f7fc0(uVar6);
        _objc_release(uVar6);
        _objc_release(puStack_78);
        _objc_release(uStack_80);
        _objc_destroyWeak(auStack_70);
        _objc_release(uVar3);
      }
      _objc_release(puVar7);
      _objc_release(uVar1);
    }
  }
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10581b908; end: 10581b967;  */

void FUN_10581b908(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10581b968; end: 10581b9af; -[SCFriendingInlineSuggestionsImpressionLogger .cxx_destruct] */

void FUN_10581b968(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10581b9b0; end: 10581bac3; -[SCFriendingInlineSuggestionsDataCoordinatorImpl initWithSnapchattersDataFetcher:snapchattersDataTracker:filterManager:servicePerformer:] */

undefined1 *
FUN_10581b9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ea7c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    func_0x00010beaa4c0(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10581bac4; end: 10581baeb; -[SCFriendingInlineSuggestionsDataCoordinatorImpl inlineSuggestionDataModels] */

void FUN_10581bac4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10581baec; end: 10581bb67; -[SCFriendingInlineSuggestionsDataCoordinatorImpl _setup] */

void FUN_10581baec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar1;
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c233a20();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be14d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchSuggestionsData_112562cf8);
    return;
  }
  return;
}



/* Entry: 10581bb68; end: 10581bc5b; -[SCFriendingInlineSuggestionsDataCoordinatorImpl _fetchSuggestionsData] */

void FUN_10581bb68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c2622c0(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10581bc5c; end: 10581bcab;  */

void FUN_10581bc5c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6b0a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10581bcac; end: 10581bd27; -[SCFriendingInlineSuggestionsDataCoordinatorImpl _onRecievedSuggestedSnapchatters:] */

void FUN_10581bcac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfaeb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10581bd28; end: 10581bd2b; -[SCFriendingInlineSuggestionsDataCoordinatorImpl didStartSnapchattersUpdateDataRequest:] */

void FUN_10581bd28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be14d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchSuggestionsData_112562cf8);
  return;
}



/* Entry: 10581bd2c; end: 10581bd2f; -[SCFriendingInlineSuggestionsDataCoordinatorImpl didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_10581bd2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be14d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchSuggestionsData_112562cf8);
  return;
}



/* Entry: 10581bd30; end: 10581bd3b; -[SCFriendingInlineSuggestionsDataCoordinatorImpl didEndSnapchattersSuggestDataRequest:withSuccess:error:] */

void FUN_10581bd30(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be14d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchSuggestionsData_112562cf8);
    return;
  }
  return;
}



/* Entry: 10581bd3c; end: 10581bd83; -[SCFriendingInlineSuggestionsDataCoordinatorImpl .cxx_destruct] */

void FUN_10581bd3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10581bd84; end: 10581bee3; -[SCFriendingInlineSuggestionsImpressionLimitManager initWithEventAnnouncer:snapchattersDataTracker:circumstanceEngine:featureSettingsService:] */

undefined1 *
FUN_10581bd84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ea7c8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x000108c07848();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf926c0();
    *(char *)((long)puVar1 + 8) = (char)uVar3;
    uVar3 = uVar2;
    func_0x00010bfea960();
    *(long *)((long)puVar1 + 0x10) = (long)(int)uVar3;
    uVar3 = uVar2;
    func_0x00010bf51c00();
    *(long *)((long)puVar1 + 0x18) = (long)(int)uVar3;
    uVar3 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar3);
    func_0x00010bef9980(param_3);
    func_0x00010be92a00(puVar1);
    func_0x00010bee2280(puVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10581bee4; end: 10581bf23; -[SCFriendingInlineSuggestionsImpressionLimitManager hideTimestamp] */

double FUN_10581bee4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11e320();
  _objc_release(lVar1);
  return (double)lVar2;
}



/* Entry: 10581bf24; end: 10581bf67; -[SCFriendingInlineSuggestionsImpressionLimitManager setHideTimestamp:] */

void FUN_10581bf24(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10581bf68; end: 10581bfa7; -[SCFriendingInlineSuggestionsImpressionLimitManager impressionCount] */

undefined8 FUN_10581bf68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11e340();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10581bfa8; end: 10581bfe3; -[SCFriendingInlineSuggestionsImpressionLimitManager setImpressionCount:] */

void FUN_10581bfa8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10581bfe4; end: 10581c06b; -[SCFriendingInlineSuggestionsImpressionLimitManager _isValidSuggestion:] */

bool FUN_10581bfe4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar2 == 0) && (uVar3 = param_3, func_0x00010c06d560(), (uVar3 & 1) == 0)) {
    uVar3 = param_3;
    func_0x00010bf1bae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = uVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10581c06c; end: 10581c11b; -[SCFriendingInlineSuggestionsImpressionLimitManager _isSnapchatterBeingBlocked:] */

bool FUN_10581c06c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = lVar3;
  func_0x00010bfeb7a0(lVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010bf0a560(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  return lVar3 != 0;
}



/* Entry: 10581c11c; end: 10581c147; -[SCFriendingInlineSuggestionsImpressionLimitManager _didReachImpressionLimit] */

bool FUN_10581c11c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bfea820();
  return *(long *)(param_1 + 0x10) <= lVar1;
}



/* Entry: 10581c148; end: 10581c1cb; -[SCFriendingInlineSuggestionsImpressionLimitManager _updateTimestampIfNeeded] */

void FUN_10581c148(double param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  if ((((*(char *)(param_2 + 8) == '\x01') && (0 < *(long *)(param_2 + 0x18))) &&
      (lVar1 = param_2, func_0x00010bdff140(), (int)lVar1 != 0)) &&
     (func_0x00010bfe2bc0(param_2), param_1 == 0.0)) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    func_0x00010c1a84a0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10581c1cc; end: 10581c2a7; -[SCFriendingInlineSuggestionsImpressionLimitManager _resetDisabledSuggestionsIfNeeded] */

void FUN_10581c1cc(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((((*(char *)(param_2 + 8) == '\x01') && (0 < *(long *)(param_2 + 0x18))) &&
      (lVar1 = param_2, func_0x00010bdff140(), (int)lVar1 != 0)) &&
     (func_0x00010bfe2bc0(param_2), 0.0 < param_1)) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bfe2bc0(param_2);
    func_0x00010bf655e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar2,param_3,puVar3);
    if (*(long *)(param_2 + 0x18) <= (long)(param_1 / 86400.0)) {
      func_0x00010be92e60(param_2);
    }
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10581c2a8; end: 10581c2d3; -[SCFriendingInlineSuggestionsImpressionLimitManager _resetImpressionCount] */

void FUN_10581c2a8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1ab220(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c1a84b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s_setHideTimestamp__112647b48);
  return;
}



/* Entry: 10581c2d4; end: 10581c46b; -[SCFriendingInlineSuggestionsImpressionLimitManager filteredSnapchatters:] */

void FUN_10581c2d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10581c46c;
  puStack_88 = &UNK_1108b6370;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar2 = param_3;
  func_0x0001006372a4(param_3,&puStack_a0);
  uVar3 = uVar2;
  func_0x00010c099060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfeb780();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf51e00();
  _objc_release(uVar5);
  _objc_release(uVar4);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10581c4c8;
  puStack_b8 = &UNK_1108b63a0;
  _objc_retain(uVar6);
  uVar5 = uVar3;
  uStack_b0 = uVar6;
  lStack_a8 = param_1;
  func_0x000100504554(uVar3,&puStack_d0);
  _objc_release(uStack_b0);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10581c46c; end: 10581c56b;  */

long FUN_10581c46c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be45560();
  _objc_release(param_2);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10581c56c; end: 10581c597; -[SCFriendingInlineSuggestionsImpressionLimitManager shouldShowInlineSuggestions] */

uint FUN_10581c56c(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010bdff140();
    return (uint)param_1 ^ 1;
  }
  return 1;
}



/* Entry: 10581c598; end: 10581c6ef; -[SCFriendingInlineSuggestionsImpressionLimitManager didTriggerEventWithEventName:announcerIdentifier:extraData:] */

void FUN_10581c598(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0720c0();
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126bed88;
    func_0x00010bf04780(PTR_PTR_1126bed88);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      uVar4 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126bed90;
      _objc_opt_class(PTR_PTR_1126bed90);
      uVar5 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar2);
      uVar1 = uVar4;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar4);
      if (uVar1 != 0) {
        puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_60 = 0xc2000000;
        pcStack_58 = FUN_10581c6f0;
        puStack_50 = &UNK_110842e18;
        uStack_48 = param_1;
        if (lRam00000001136c0ab0 != -1) {
          func_0x00010002a2fc(0x1136c0ab0,&puStack_68);
        }
        _objc_release(uVar4);
      }
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10581c6f0; end: 10581c71b;  */

void FUN_10581c6f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = lVar2;
  func_0x00010bfea820(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1ab230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_setImpressionCount__1126486b0,lVar1 + 1);
  return;
}



/* Entry: 10581c71c; end: 10581c763; -[SCFriendingInlineSuggestionsImpressionLimitManager didStartSnapchattersUpdateDataRequest:] */

void FUN_10581c71c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010bf0a520();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0fdba0();
  if (lVar1 == 0x33) {
    func_0x00010be92e60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10581c764; end: 10581c767; -[SCFriendingInlineSuggestionsImpressionLimitManager didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_10581c764(void)

{
  return;
}


