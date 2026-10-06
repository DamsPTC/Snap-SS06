/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10578b86c; end: 10578babb; -[SCStorageManagementEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578b86c(long param_1,undefined8 param_2)

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
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  puVar1 = PTR_PTR_1126bdfe8;
  _objc_alloc();
  puVar2 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_112729590;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar9;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112729594;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar10;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112729598;
    _objc_loadWeakRetained(lVar14);
  }
  lVar6 = lVar14;
  func_0x00010bf398e0(lVar14);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11272959c;
    _objc_loadWeakRetained(lVar13);
  }
  lVar7 = lVar13;
  func_0x00010bf145c0(lVar13);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_1127295a4;
    _objc_loadWeakRetained(lVar12);
  }
  lVar8 = lVar12;
  func_0x00010bf265c0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052580(puVar1,param_2,puVar2,lVar4,lVar5,lVar6,lVar7,lVar8);
  uVar11 = *(undefined8 *)(param_1 + _DAT_112729584);
  *(undefined **)(param_1 + _DAT_112729584) = puVar1;
  _objc_release(uVar11);
  _objc_release(lVar8);
  _objc_release(lVar12);
  _objc_release(lVar7);
  _objc_release(lVar13);
  _objc_release(lVar6);
  _objc_release(lVar14);
  _objc_release(lVar5);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar9);
  _objc_release(puVar2);
  lVar9 = param_1 + _DAT_112729588;
  _objc_loadWeakRetained(lVar9);
  lVar3 = lVar9;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9b780(param_1,param_2,lVar3);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 10578babc; end: 10578bc5f; -[SCStorageManagementEntryPoint _scheduleStorageManagementWithObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578babc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_3;
  func_0x00010c2a6420(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10578bc60;
  puStack_78 = &UNK_110846510;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf75dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 10578bc60; end: 10578bcbb;  */

void FUN_10578bc60(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea49c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10578bcbc; end: 10578bd3f; -[SCStorageManagementEntryPoint _didEnterBackground] */

void FUN_10578bcbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bea49c0(param_1,param_2,1);
  uVar1 = 0x11;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010007380c();
  _objc_release(uVar1);
  return;
}



/* Entry: 10578bd40; end: 10578bd47;  */

void FUN_10578bd40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be72a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__performStorageManagement_11257a440);
  return;
}



/* Entry: 10578bd48; end: 10578be37; -[SCStorageManagementEntryPoint _performStorageManagement] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578bd48(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126bdff0;
  _objc_alloc();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bffc400();
  puVar2 = puVar1;
  func_0x00010c06e0e0();
  if (((ulong)puVar2 & 1) == 0) {
    func_0x00010c0f9020(*(undefined8 *)(param_1 + _DAT_112729584));
  }
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10578be38; end: 10578be6f;  */

uint FUN_10578be38(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be410c0();
  _objc_release(param_1);
  return (uint)lVar1 ^ 1;
}



/* Entry: 10578be70; end: 10578beb7; -[SCStorageManagementEntryPoint _setInBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578be70(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112729580;
  _os_unfair_lock_lock(param_1 + lVar1);
  *(undefined1 *)(param_1 + _DAT_112729578) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar1);
  return;
}



/* Entry: 10578beb8; end: 10578bf03; -[SCStorageManagementEntryPoint _isInBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10578beb8(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112729580;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(undefined1 *)(param_1 + _DAT_112729578);
  _os_unfair_lock_unlock(param_1 + lVar2);
  return uVar1;
}



/* Entry: 10578bf04; end: 10578bf3b; -[SCStorageManagementEntryPoint setStorageEventHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578bf04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112729584);
  *(undefined8 *)(param_1 + _DAT_112729584) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10578bf3c; end: 10578bfdb; -[SCStorageManagementEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578bf3c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127295a4);
  _objc_destroyWeak(param_1 + _DAT_1127295a0);
  _objc_destroyWeak(param_1 + _DAT_11272959c);
  _objc_destroyWeak(param_1 + _DAT_112729598);
  _objc_destroyWeak(param_1 + _DAT_112729594);
  _objc_destroyWeak(param_1 + _DAT_112729590);
  _objc_destroyWeak(param_1 + _DAT_112729588);
  _objc_destroyWeak(param_1 + _DAT_11272958c);
  _objc_storeStrong(param_1 + _DAT_112729584,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272957c,0);
  return;
}



/* Entry: 10578bfdc; end: 10578c133; -[SCLegacyRateLimitServiceProvider provide] */

void FUN_10578bfdc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10578c134;
  puStack_68 = &UNK_1108b0d58;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126be010;
  _objc_alloc(PTR_PTR_1126be010);
  func_0x00010c027ce0();
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10578c134; end: 10578c307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578c134(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = param_1 + _DAT_1127295ac;
      _objc_loadWeakRetained(lVar6);
    }
    lVar2 = lVar6;
    func_0x00010bf398e0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067f00();
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(param_1);
    puVar4 = PTR_PTR_1126bdff8;
    _objc_alloc(PTR_PTR_1126bdff8);
    func_0x00010c051ca0((double)(int)lVar3);
    puVar5 = PTR_PTR_1126be000;
    _objc_alloc(PTR_PTR_1126be000);
    func_0x00010c001640();
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10578c308; end: 10578c33f; -[SCLegacyRateLimitServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578c308(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127295ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127295a8);
  return;
}



/* Entry: 10578c340; end: 10578c3e3; -[SCLegacyRateLimitServices initWithLoqConfigRateLimiter:allUpdatesRateLimiter:] */

undefined1 *
FUN_10578c340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea300;
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



/* Entry: 10578c3e4; end: 10578c3eb; -[SCLegacyRateLimitServices loqConfigRateLimiter] */

undefined8 FUN_10578c3e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10578c3ec; end: 10578c3f3; -[SCLegacyRateLimitServices allUpdatesRateLimiter] */

undefined8 FUN_10578c3ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10578c3f4; end: 10578c423; -[SCLegacyRateLimitServices .cxx_destruct] */

void FUN_10578c3f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10578c424; end: 10578c47f; -[SCCanaryStudyUserEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578c424(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_1127295b8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f440();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10578c480; end: 10578c4b7; -[SCCanaryStudyUserEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578c480(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127295b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127295bc);
  return;
}



/* Entry: 10578c4b8; end: 10578c59b; -[SCCanvasConnectionManagementServiceProvider provide] */

void FUN_10578c4b8(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126be018;
  _objc_alloc(PTR_PTR_1126be018);
  func_0x00010c0021e0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10578c59c; end: 10578c5db;  */

void FUN_10578c59c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde6400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10578c5dc; end: 10578c723; -[SCCanvasConnectionManagementServiceProvider _connectionManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578c5dc(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126be020;
  _objc_alloc(PTR_PTR_1126be020);
  lVar9 = (long)_DAT_1127295c0;
  lVar2 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar4 = lVar9;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_1127295c4;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c291800();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_1127295c8;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ac60(puVar1,param_2,lVar3,lVar4,lVar6,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10578c724; end: 10578c767; -[SCCanvasConnectionManagementServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10578c724(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127295c4);
  _objc_destroyWeak(param_1 + _DAT_1127295c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127295c0);
  return;
}



/* Entry: 10578c768; end: 10578c943; -[SCCanvasConnectionManager initWithHttpMetadataService:httpRequestModifier:cognacUserContextTokenProvider:currentUserId:] */

undefined1 *
FUN_10578c768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ea308;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    FUN_10578fcd8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = &UNK_10f2f51ce;
    _dispatch_queue_create(&UNK_10f2f51ce,0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    uVar2 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_set_target_queue(uVar4,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10578c944; end: 10578caf7; -[SCCanvasConnectionManager submitAuthRequestToOAuthServiceWithAuthRequest:completionQueue:completionBlock:] */

void FUN_10578c944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  FUN_10578fb70(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf3cf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c150520(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  ppuVar4 = &PTR____CFConstantStringClassReference_110dfe0b8;
  FUN_10578f834(&PTR____CFConstantStringClassReference_110dfe0b8,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126be028);
  _objc_retain(param_5);
  func_0x00010bec6320(param_1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(ppuVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10578caf8; end: 10578cb5f;  */

void FUN_10578caf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  FUN_10578f9fc(param_3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10578cb60; end: 10578cdab; -[SCCanvasConnectionManager submitOAuthApprovalRequestWithApprovalToken:scopesApprovedArray:OAuthClientId:completionQueue:completionBlock:] */

void FUN_10578cb60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126be030;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169ca0();
  _objc_release(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar5 = param_4;
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_1108b0e08);
  _objc_release(param_4);
  func_0x00010bf0a0c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f6c80(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf08c00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c150b40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar2);
  _objc_release(puVar3);
  ppuVar4 = &PTR____CFConstantStringClassReference_110dfe0d8;
  FUN_10578f834(&PTR____CFConstantStringClassReference_110dfe0d8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126be038);
  uVar5 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bec6320(param_1);
  _objc_release(uVar5);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(ppuVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10578cdac; end: 10578cdb3;  */

void FUN_10578cdac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d4f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_name_112612df0);
  return;
}



/* Entry: 10578cdb4; end: 10578ceab;  */

void FUN_10578cdb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10578ceac;
  uStack_40 = 0x10578cebc;
  puStack_58 = &uStack_60;
  func_0x00010578f940();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x10578cec4;
  puStack_80 = &UNK_110883360;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = param_3;
  _objc_retain(uVar2);
  uStack_78 = param_2;
  uStack_70 = uVar2;
  puStack_68 = &uStack_60;
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_98);
  _objc_release(uStack_78);
  _objc_release(uStack_70);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10578ceac; end: 10578cedf;  */

void FUN_10578ceac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10578cee0; end: 10578d1bf; -[SCCanvasConnectionManager submitCreateConnectionRequestWithOAuthClientId:features:termsVersion:completionQueue:completionBlock:] */

void FUN_10578cee0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lStack_c8 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126be040;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d03e0();
  lVar3 = param_4;
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19aec0(puVar2);
    _objc_release(puVar4);
  }
  lVar3 = lStack_c8;
  lStack_d0 = param_4;
  func_0x00010c08fa60();
  puVar4 = (undefined *)0x0;
  if (lVar3 != 0) {
    puVar4 = puVar2;
    func_0x00010c212e80();
  }
  func_0x00010578fce4();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  FUN_10578f834(puVar4,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_copyWeak(auStack_78,param_1 + 0x60);
  _objc_initWeak(auStack_80,param_1);
  _objc_opt_class(PTR_PTR_1126be048);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10578d1c0;
  puStack_a8 = &UNK_1108b0e88;
  _objc_copyWeak(auStack_90,auStack_80);
  _objc_retain(param_6);
  uStack_a0 = param_6;
  _objc_retain(param_7);
  puVar8 = auStack_78;
  uStack_98 = param_7;
  _objc_copyWeak(auStack_88);
  ppuStack_e0 = &puStack_c0;
  puVar5 = puVar4;
  func_0x00010bec5f60(param_1);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(lStack_c8);
  _objc_release(lStack_d0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  lVar3 = param_3;
  __Unwind_Resume();
  pcStack_e8 = FUN_10578d1c0;
  puStack_120 = puVar2;
  uStack_118 = param_7;
  uStack_110 = param_6;
  ppuStack_108 = &puStack_c0;
  uStack_100 = uVar9;
  lStack_f8 = param_3;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  if ((puVar8 == (undefined1 *)0x0) && (puVar5 != (undefined *)0x0)) {
    func_0x00010bf48e20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    FUN_10578f7d8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    lVar7 = lVar3 + 0x30;
    _objc_loadWeakRetained(lVar7);
    func_0x00010bdcc1c0();
    _objc_release(lVar7);
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_10578d380;
    puStack_148 = &UNK_1108b0e58;
    uVar9 = *(undefined8 *)(lVar3 + 0x20);
    uVar1 = *(undefined8 *)(lVar3 + 0x28);
    _objc_retain(uVar1);
    puStack_140 = puVar2;
    uStack_138 = uVar1;
    _objc_retain(puVar2);
    _objc_copyWeak(auStack_130,lVar3 + 0x38);
    _objc_copyWeak(auStack_128,lVar3 + 0x30);
    func_0x00010007380c(uVar9,&puStack_160);
    _objc_destroyWeak(auStack_128);
    _objc_destroyWeak(auStack_130);
    _objc_release(puStack_140);
    _objc_release(uStack_138);
  }
  else {
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_10578d3e8;
    puStack_188 = &UNK_1108b0e58;
    uVar9 = *(undefined8 *)(lVar3 + 0x20);
    puVar2 = *(undefined **)(lVar3 + 0x28);
    _objc_retain(puVar2);
    puStack_178 = puVar2;
    _objc_retain(puVar8);
    puStack_180 = puVar8;
    _objc_copyWeak(auStack_170,lVar3 + 0x38);
    _objc_copyWeak(auStack_168,lVar3 + 0x30);
    func_0x00010007380c(uVar9,&puStack_1a0);
    _objc_destroyWeak(auStack_168);
    _objc_destroyWeak(auStack_170);
    _objc_release(puStack_180);
    puVar2 = puStack_178;
  }
  _objc_release(puVar2);
  _objc_release(puVar8);
  return;
}



/* Entry: 10578d1c0; end: 10578d37f;  */

void FUN_10578d1c0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  if ((param_2 == 0) && (param_3 != 0)) {
    func_0x00010bf48e20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    FUN_10578f7d8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar4);
    func_0x00010bdcc1c0();
    _objc_release(lVar4);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10578d380;
    puStack_68 = &UNK_1108b0e58;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    lStack_60 = lVar3;
    uStack_58 = uVar2;
    _objc_retain(lVar3);
    _objc_copyWeak(auStack_50,param_1 + 0x38);
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    func_0x00010007380c(uVar1,&puStack_80);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_50);
    _objc_release(lStack_60);
    _objc_release(uStack_58);
  }
  else {
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10578d3e8;
    puStack_a8 = &UNK_1108b0e58;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar3);
    lStack_98 = lVar3;
    _objc_retain(param_2);
    lStack_a0 = param_2;
    _objc_copyWeak(auStack_90,param_1 + 0x38);
    _objc_copyWeak(auStack_88,param_1 + 0x30);
    func_0x00010007380c(uVar1,&puStack_c0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_90);
    _objc_release(lStack_a0);
    lVar3 = lStack_98;
  }
  _objc_release(lVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 10578d380; end: 10578d3e7;  */

void FUN_10578d380(long param_1)

{
  long lVar1;
  
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf48cc0(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10578d3e8; end: 10578d457;  */

void FUN_10578d3e8(long param_1)

{
  long lVar1;
  
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf48cc0(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10578d458; end: 10578d587; -[SCCanvasConnectionManager listConnectionsForSettingsWithForceFetchFromServer:completionQueue:completionBlock:] */

void FUN_10578d458(long param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_1);
  if (param_3 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10578d588;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x00010007380c(uVar2,&puStack_70);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_40);
  }
  else {
    func_0x00010578fcf8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be107c0(param_1);
    _objc_release(puVar1);
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10578d588; end: 10578d5bb;  */

void FUN_10578d588(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2b6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10578d5bc; end: 10578d62f; -[SCCanvasConnectionManager listConnectionsWithCompletionQueue:completionBlock:] */

void FUN_10578d5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x00010578fd0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be107c0(param_1,param_2,uVar1,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10578d630; end: 10578d70f; -[SCCanvasConnectionManager checkConnectionWithApplicationId:completionQueue:completionBlock:] */

void FUN_10578d630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10578d710;
  puStack_58 = &UNK_1108b0eb8;
  uStack_50 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_1;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c09a000(param_1,param_2,0,param_4,&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10578d710; end: 10578d8cb;  */

void FUN_10578d710(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((param_2 == 0) && (param_3 != 0)) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10578d8cc;
    puStack_60 = &UNK_11086e550;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    uStack_58 = uVar3;
    func_0x0001006372a4(param_3,&puStack_78);
    lVar2 = param_3;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      puStack_d8 = puVar1;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_10578d960;
      puStack_c0 = &UNK_110849530;
      lVar2 = *(long *)(param_1 + 0x38);
      _objc_retain(lVar2);
      lStack_b8 = lVar2;
      func_0x00010007380c(uVar3,&puStack_d8);
      lVar2 = lStack_b8;
    }
    else {
      lVar2 = param_3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      puStack_b0 = puVar1;
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x10578d914;
      puStack_98 = &UNK_11084a9e8;
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar4);
      uStack_88 = *(undefined8 *)(param_1 + 0x30);
      lStack_90 = lVar2;
      uStack_80 = uVar4;
      _objc_retain(lVar2);
      func_0x00010007380c(uVar3,&puStack_b0);
      _objc_release(lStack_90);
      _objc_release(uStack_80);
    }
    _objc_release(lVar2);
    _objc_release(param_3);
    uVar3 = uStack_58;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    uStack_f0 = 0x10578d970;
    puStack_e8 = &UNK_110849530;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    uStack_e0 = uVar4;
    func_0x00010007380c(uVar3,&puStack_100);
    uVar3 = uStack_e0;
  }
  _objc_release(uVar3);
  return;
}



/* Entry: 10578d8cc; end: 10578d95f;  */

undefined8 FUN_10578d8cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf07940(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10578d960; end: 10578d97f;  */

void FUN_10578d960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010578d96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10578d980; end: 10578d997; -[SCCanvasConnectionManager deleteConnectionWithApplicationId:completionQueue:completionBlock:] */

void FUN_10578d980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_deleteConnectionWithApplicationI_1125b87e8,param_3,0,0,0,param_4,param_5)
  ;
  return;
}



/* Entry: 10578d998; end: 10578dbdf; -[SCCanvasConnectionManager deleteConnectionWithApplicationId:isAppConnected:appHasPrivateStorageData:requestedDataDeletion:completionQueue:completionBlock:] */

void FUN_10578d998(undefined8 param_1,undefined8 param_2,long param_3,int param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126be050;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1698e0();
  puVar3 = puVar2;
  func_0x00010c1ec2a0(puVar2);
  if ((param_5 == 0) || (param_4 != 0)) {
    func_0x00010578fd34();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010578fd20();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  FUN_10578f834(puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_10578dbe0;
  puStack_a0 = &UNK_1108b0ee8;
  puVar7 = auStack_78;
  _objc_copyWeak(auStack_80);
  _objc_retain(param_3);
  lStack_98 = param_3;
  _objc_retain(param_7);
  uStack_90 = param_7;
  _objc_retain(param_8);
  ppuStack_c0 = &puStack_b8;
  uStack_88 = param_8;
  func_0x00010bec5f60(param_1);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(lStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  lVar6 = param_3;
  __Unwind_Resume();
  pcStack_c8 = FUN_10578dbe0;
  puStack_f0 = puVar2;
  uStack_e8 = param_8;
  uStack_e0 = param_7;
  lStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  if (puVar7 == (undefined1 *)0x0) {
    lVar6 = lVar6 + 0x38;
    _objc_loadWeakRetained(lVar6);
    func_0x00010be28460();
  }
  else {
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_10578dca8;
    puStack_108 = &UNK_11084aaa8;
    uVar1 = *(undefined8 *)(lVar6 + 0x28);
    lVar6 = *(long *)(lVar6 + 0x30);
    _objc_retain(lVar6);
    lStack_f8 = lVar6;
    _objc_retain(puVar7);
    puStack_100 = puVar7;
    func_0x00010007380c(uVar1,&puStack_120);
    _objc_release(puStack_100);
    lVar6 = lStack_f8;
  }
  _objc_release(lVar6);
  _objc_release(puVar7);
  return;
}



/* Entry: 10578dbe0; end: 10578dca7;  */

void FUN_10578dbe0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010be28460();
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10578dca8;
    puStack_48 = &UNK_11084aaa8;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    lVar2 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar2);
    lStack_38 = lVar2;
    _objc_retain(param_2);
    lStack_40 = param_2;
    func_0x00010007380c(uVar1,&puStack_60);
    _objc_release(lStack_40);
    param_1 = lStack_38;
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 10578dca8; end: 10578dcb7;  */

void FUN_10578dca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010578dcb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10578dcb8; end: 10578df4b; -[SCCanvasConnectionManager updateConnectionWithApplicationId:scopes:features:completionQueue:completionBlock:] */

void FUN_10578dcb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_1;
  func_0x00010be15ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126be058;
  func_0x00010c0cb140(PTR_PTR_1126be058);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1698e0();
  uVar3 = uVar1;
  func_0x00010c0d3c80(uVar1);
  func_0x00010c1f6bc0(puVar2);
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010c0d3c80(param_5);
  func_0x00010c19aec0(puVar2);
  _objc_release(uVar3);
  func_0x00010578fd48();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  func_0x00010befa160(puVar4);
  func_0x00010befa160(puVar4);
  uVar5 = uVar3;
  FUN_10578f834(uVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,param_1);
  _objc_opt_class(PTR_PTR_1126be060);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bec5f60(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10578df4c; end: 10578e033;  */

void FUN_10578df4c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) && (uVar2 = param_3, func_0x00010bfd5a00(), (int)uVar2 != 0)) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be286c0();
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10578e034;
    puStack_48 = &UNK_11084aaa8;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar1);
    lStack_38 = lVar1;
    _objc_retain(param_2);
    lStack_40 = param_2;
    func_0x00010007380c(uVar2,&puStack_60);
    _objc_release(lStack_40);
    param_1 = lStack_38;
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10578e034; end: 10578e047;  */

void FUN_10578e034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010578e044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10578e048; end: 10578e04f; -[SCCanvasConnectionManager resetConnection] */

void FUN_10578e048(long param_1)

{
  *(undefined1 *)(param_1 + 0x58) = 0;
  return;
}



/* Entry: 10578e050; end: 10578e057; -[SCCanvasConnectionManager connectionsObservable] */

void FUN_10578e050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 10578e058; end: 10578e1ef; -[SCCanvasConnectionManager _extendedScopesList] */

void FUN_10578e058(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined **unaff_x21;
  undefined8 unaff_x22;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined8 *puStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110dff298;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110dff2b8;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110dff2d8;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110dff2f8;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110dff318;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = &uStack_150;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar6 = *plStack_140;
    unaff_x21 = &PTR____CFConstantStringClassReference_110dae518;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_140 != lVar6) {
          _objc_enumerationMutation(puVar2);
        }
        uStack_158 = *(undefined8 *)(lStack_148 + (long)puVar7 * 8);
        ppuStack_160 = &PTR____CFConstantStringClassReference_110dff338;
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar4);
        puVar7 = puVar7 + 1;
      } while (puVar3 != puVar7);
      puVar5 = &uStack_150;
      puVar3 = puVar2;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (puVar3 != (undefined *)0x0);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_168 = FUN_10578e1f0;
    uStack_190 = unaff_x22;
    ppuStack_188 = unaff_x21;
    puStack_180 = puVar2;
    puStack_178 = puVar1;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain(puVar5);
    func_0x00010be0d660();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b0 = 0xc2000000;
    pcStack_1a8 = FUN_10578e29c;
    puStack_1a0 = &UNK_110856a28;
    puStack_198 = puVar3;
    _objc_retain();
    puVar1 = puVar5;
    func_0x0001006372a4(puVar5,&puStack_1b8);
    _objc_release(puVar5);
    _objc_release(puStack_198);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10578e1f0; end: 10578e29b; -[SCCanvasConnectionManager _filterAllExceptBasicScopes:] */

void FUN_10578e1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010be0d660();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10578e29c;
  puStack_40 = &UNK_110856a28;
  uStack_38 = param_1;
  _objc_retain();
  uVar1 = param_3;
  func_0x0001006372a4(param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10578e29c; end: 10578e2a7;  */

void FUN_10578e29c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_containsObject__1125b07e8,param_2);
  return;
}



/* Entry: 10578e2a8; end: 10578e4db; -[SCCanvasConnectionManager _submitConnectionManagementServiceRequestWithEndpoint:protoRequest:method:requestId:responseClass:completionQueue:completionBlock:] */

void FUN_10578e2a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bdc34c0(puVar1,param_2,param_3,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar3 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2917e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x00010c08fa60();
  puVar5 = (undefined *)0x0;
  if (lVar3 != 0) {
    puVar5 = puVar2;
    func_0x00010c1d0640(puVar2,param_2,lVar4,&PTR____CFConstantStringClassReference_110dff278);
  }
  func_0x000108ed08f4();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0720c0();
  if (((ulong)puVar6 & 1) == 0) {
    func_0x00010c1d0640(puVar2,param_2,puVar5,&PTR____CFConstantStringClassReference_110dadcb8);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010bf63640(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc0000000;
  pcStack_78 = FUN_10578e4dc;
  puStack_70 = &UNK_11086d690;
  uStack_68 = 6;
  uVar8 = uVar7;
  func_0x00010bf225e0(uVar7,param_2,param_5,puVar1,puVar2,uVar9,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar7);
  func_0x00010bec64c0(param_1,param_2,uVar8,param_6,param_7,0,param_8,param_9);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(uVar8);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10578e4dc; end: 10578e523;  */

void FUN_10578e4dc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290040(param_2);
  func_0x00010c290a40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10578e524; end: 10578e743; -[SCCanvasConnectionManager _submitOAuthServiceRequestWithEndpoint:protoRequest:method:requestId:responseClass:completionQueue:completionBlock:] */

void FUN_10578e524(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bdc34c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0d3c80();
  _objc_release();
  func_0x000108ed090c();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c0720c0();
  if (((ulong)puVar4 & 1) == 0) {
    func_0x00010c1d0640(puVar3);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010bf63640(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar7 = uVar5;
  func_0x00010bf225e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  func_0x00010bec64c0(param_1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c290040(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10578e744; end: 10578e787;  */

void FUN_10578e744(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c290040(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10578e788; end: 10578e977; -[SCCanvasConnectionManager _submitRequest:requestId:responseClass:maxRequestAttempts:completionQueue:completionBlock:] */

void FUN_10578e788(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b7220;
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c135080(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = puVar2;
  func_0x00010c2bcaa0(puVar2,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2b7240();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2b3680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar6 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10578e978;
  puStack_78 = &UNK_1108b0f68;
  uStack_70 = param_8;
  uStack_68 = param_5;
  _objc_retain(param_8);
  ppuVar7 = &puStack_90;
  _objc_retainBlock(ppuVar7);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f600();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(ppuVar7);
  _objc_release(uStack_70);
  _objc_release(param_8);
  _objc_release(puVar6);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 10578e978; end: 10578ea9f;  */

/* WARNING: Removing unreachable block (ram,0x00010578ea2c) */

void FUN_10578e978(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 - 1U < 2) {
    lVar1 = *(long *)(param_1 + 0x20);
    pcVar3 = *(code **)(lVar1 + 0x10);
    uVar2 = param_6;
  }
  else {
    if (param_3 != 0) goto LAB_10578ea64;
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != 0) {
      _objc_alloc();
      func_0x00010c008360();
      _objc_retain(0);
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,lVar1);
      _objc_release(lVar1);
      _objc_release(0);
      goto LAB_10578ea64;
    }
    lVar1 = *(long *)(param_1 + 0x20);
    pcVar3 = *(code **)(lVar1 + 0x10);
    uVar2 = 0;
  }
  (*pcVar3)(lVar1,uVar2,0);
LAB_10578ea64:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 10578eaa0; end: 10578ebdf; -[SCCanvasConnectionManager _handleListConnectionsOnDataAccessQueueWithCompletionQueue:completionBlock:] */

void FUN_10578eaa0(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = param_4;
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x40) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf433a0();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0xffffffffffffffff) {
      _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x40));
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10578ebe0;
      puStack_60 = &UNK_110848708;
      _objc_retain(param_4);
      puStack_58 = param_4;
      _objc_copyWeak(auStack_50,auStack_48);
      func_0x00010007380c(param_3,&puStack_78);
      _objc_destroyWeak(auStack_50);
      _objc_release(puStack_58);
      _objc_destroyWeak(auStack_48);
      goto LAB_10578ebb8;
    }
  }
  func_0x00010578fcf8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be107c0(param_1);
  _objc_release(puVar1);
LAB_10578ebb8:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10578ebe0; end: 10578ec1f;  */

void FUN_10578ebe0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  (**(code **)(lVar1 + 0x10))(lVar1,0,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10578ec20; end: 10578ed97; -[SCCanvasConnectionManager _fetchConnectionListFromEndpoint:completionQueue:completionBlock:] */

void FUN_10578ec20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dff358;
  FUN_10578f834(&PTR____CFConstantStringClassReference_110dff358,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126be068);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bec5f60(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10578ed98; end: 10578ee77;  */

void FUN_10578ed98(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) && (param_3 != 0)) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010be28520();
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10578ee78;
    puStack_48 = &UNK_11084aaa8;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar2);
    lStack_38 = lVar2;
    _objc_retain(param_2);
    lStack_40 = param_2;
    func_0x00010007380c(uVar1,&puStack_60);
    _objc_release(lStack_40);
    param_1 = lStack_38;
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10578ee78; end: 10578ee8b;  */

void FUN_10578ee78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010578ee88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10578ee8c; end: 10578f033; -[SCCanvasConnectionManager _handleDidFetchConnectionsWithResponse:completionQueue:completionBlock:] */

void FUN_10578ee8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSDateComponents_1126aef68;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c189d40();
  puVar2 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf64e20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar4;
  _objc_release(uVar6);
  _objc_release(puVar3);
  uVar6 = param_3;
  func_0x00010bf48e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar6;
  FUN_10578f7d8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  func_0x00010bdcc1c0(param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10578f034;
  puStack_68 = &UNK_11084aaa8;
  uStack_60 = uVar5;
  uStack_58 = param_5;
  _objc_retain(uVar5);
  _objc_retain(param_5);
  func_0x00010007380c(param_4,&puStack_80);
  _objc_release(param_4);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(uVar5);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10578f034; end: 10578f047;  */

void FUN_10578f034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010578f044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10578f048; end: 10578f163; -[SCCanvasConnectionManager _handleDidUpdateConnectionWithResponse:completionQueue:completionBlock:] */

void FUN_10578f048(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf48b00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_10578f584();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010578f384(uVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcc1c0(param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10578f164;
  puStack_58 = &UNK_11084aaa8;
  uStack_50 = uVar1;
  uStack_48 = param_5;
  _objc_retain(uVar1);
  _objc_retain(param_5);
  func_0x00010007380c(param_4,&puStack_70);
  _objc_release(param_4);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(uVar2);
  return;
}



/* Entry: 10578f164; end: 10578f177;  */

void FUN_10578f164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010578f174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10578f178; end: 10578f253; -[SCCanvasConnectionManager _handleDidDeleteConnectionWithApplicationId:completionQueue:completionBlock:] */

void FUN_10578f178(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_4);
  FUN_10578f4b0(uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcc1c0(param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10578f254;
  puStack_50 = &UNK_110849530;
  uStack_48 = param_5;
  _objc_retain(param_5);
  func_0x00010007380c(param_4,&puStack_68);
  _objc_release(param_4);
  _objc_release(uStack_48);
  _objc_release(param_5);
  _objc_release(uVar1);
  return;
}



/* Entry: 10578f254; end: 10578f263;  */

void FUN_10578f254(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010578f260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10578f264; end: 10578f2c7; -[SCCanvasConnectionManager _announceObservableEventWithConnections:] */

void FUN_10578f264(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10578f2c8; end: 10578f2df; -[SCCanvasConnectionManager delegate] */

void FUN_10578f2c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10578f2e0; end: 10578f2eb; -[SCCanvasConnectionManager setDelegate:] */

void FUN_10578f2e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 10578f2ec; end: 10578f40f; -[SCCanvasConnectionManager .cxx_destruct] */

void FUN_10578f2ec(long param_1)

{
  _objc_destroyWeak(param_1 + 0x60);
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



/* Entry: 10578f410; end: 10578f4af;  */

void FUN_10578f410(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf07940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf07940(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = param_2;
  if ((int)uVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  _objc_retain(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10578f4b0; end: 10578f583;  */

void FUN_10578f4b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10578f53c;
  puStack_30 = &UNK_11086e550;
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x0001006372a4(param_1,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10578f584; end: 10578f7d7;  */

void FUN_10578f584(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c150b40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf529e0();
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar1;
    func_0x000100504554(lVar1,&PTR___NSConcreteGlobalBlock_1108b1058);
  }
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bfa2580();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010bf529e0();
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x000100504554();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  func_0x00010bf04ea0();
  puVar3 = PTR_PTR_1126b5a58;
  _objc_alloc(PTR_PTR_1126b5a58);
  lVar1 = param_1;
  func_0x00010bf07940(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf07a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf07920(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bf48da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06f000();
  func_0x00010bfda9a0();
  func_0x00010c073020();
  func_0x00010bff39c0(puVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10578f7d8; end: 10578f82b;  */

void FUN_10578f7d8(long param_1)

{
  long lVar1;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_1108b1018);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10578f82c; end: 10578f833;  */

void FUN_10578f82c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c150b40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf529e0();
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar1;
    func_0x000100504554(lVar1,&PTR___NSConcreteGlobalBlock_1108b1058);
  }
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfa2580();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010bf529e0();
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x000100504554();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  func_0x00010bf04ea0();
  puVar3 = PTR_PTR_1126b5a58;
  _objc_alloc(PTR_PTR_1126b5a58);
  lVar1 = param_2;
  func_0x00010bf07940(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf07a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010bf07920(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010bf48da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06f000();
  func_0x00010bfda9a0();
  func_0x00010c073020();
  func_0x00010bff39c0(puVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10578f834; end: 10578f9fb;  */

void FUN_10578f834(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126be070;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar1 = param_2;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10578f9fc; end: 10578fb6f;  */

void FUN_10578f9fc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126be080;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010bf08c00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf3d1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf3ccc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf3cf40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c150ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar7 = uVar6;
  func_0x000100504554();
  func_0x00010bf0a0c0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x00010c150bc0(param_1);
  func_0x00010bf49080();
  _objc_release(param_1);
  func_0x00010bff3e40(puVar1);
  _objc_release(puVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10578fb70; end: 10578fcd7;  */

void FUN_10578fb70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126be088;
  _objc_retain();
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf3cf60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c124b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e9340(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c13bd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ed180(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c150520(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f69c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c252440(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209fc0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf3ec80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17dbe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf3ec60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c17dbc0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10578fcd8; end: 10578fd5b;  */

undefined ** FUN_10578fcd8(void)

{
  return &PTR____CFConstantStringClassReference_110def4f8;
}



/* Entry: 10578fd5c; end: 10578fe43;  */

void FUN_10578fd5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126be090;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c0d4f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c272e00(param_2);
  uVar3 = param_2;
  func_0x00010bf6e720(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf51e00();
  uVar5 = param_2;
  func_0x00010bfe5b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c02db80(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10578fe44; end: 10578fef3;  */

void FUN_10578fe44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126be098;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c0cc580(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c272e00(param_2);
  uVar3 = param_2;
  func_0x00010bfa2440(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c02dba0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10578fef4; end: 10578ffdb;  */

void FUN_10578fef4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126be0a0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c0d4f60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf6e720(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e740(param_2);
  func_0x00010c272e00(param_2);
  uVar4 = param_2;
  func_0x00010bfe5400(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c02d620(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10578ffdc; end: 10578ffdf; +[SCCanvasConnectionManagerUUID UUID] */

void FUN_10578ffdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x000107c3ac50(PTR__OBJC_CLASS___NSUUID_1126b0270);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ac54();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10578ffe0; end: 105790057;  */

void FUN_10578ffe0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126be0b8;
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    _objc_alloc(puVar2);
    func_0x00010bfff6c0();
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105790058; end: 10579018b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105790058(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_112729604;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126be0c0;
    _objc_alloc(PTR_PTR_1126be0c0);
    lVar1 = param_1 + _DAT_112729610;
    _objc_loadWeakRetained(lVar1);
    lVar4 = lVar1;
    func_0x00010bfcfa00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c016b60(puVar3,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bf3f900(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126be0c8;
    _objc_alloc(PTR_PTR_1126be0c8);
    func_0x00010bfff6a0();
    _objc_release(lVar1);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10579018c; end: 1057901e7; -[SCCognacDataServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10579018c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272960c);
  *(undefined8 *)(param_1 + _DAT_11272960c) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ea310;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057901e8; end: 10579023b; -[SCCognacDataServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057901e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729608);
  _objc_destroyWeak(param_1 + _DAT_112729610);
  _objc_destroyWeak(param_1 + _DAT_112729604);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272960c,0);
  return;
}



/* Entry: 10579023c; end: 105790377; -[SCCognacGRPCService initWithGRPCClientFactory:] */

undefined8 * FUN_10579023c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126ea318;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105790378; end: 105790413;  */

void FUN_105790378(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_105790414();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010579049c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf56360(uVar3,param_2,&PTR____CFConstantStringClassReference_110dff458,param_1,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126be0d0;
  _objc_alloc(PTR_PTR_1126be0d0);
  func_0x00010c058f80();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105790414; end: 10579050b;  */

void FUN_105790414(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,270000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10579050c; end: 1057905a7;  */

void FUN_10579050c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  FUN_105790414();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010579049c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf56360(uVar3,param_2,&PTR____CFConstantStringClassReference_110dff478,param_1,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126be0d8;
  _objc_alloc(PTR_PTR_1126be0d8);
  func_0x00010c058f80();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057905a8; end: 1057907af; -[SCCognacGRPCService getCanvasTokenWithAppId:externalUserId:sessionId:completionQueue:completionBlock:] */

void FUN_1057905a8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_6 != 0) && (param_7 != 0)) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1057907b0;
    puStack_88 = &UNK_1108b11b8;
    lStack_80 = param_1;
    _objc_retain(param_7);
    ppuVar1 = &puStack_a0;
    lStack_78 = param_7;
    _objc_retainBlock(ppuVar1);
    lVar2 = param_4;
    func_0x00010c08fa60();
    if ((lVar2 == 0) || (lVar2 = param_3, func_0x00010c08fa60(), lVar2 == 0)) {
      FUN_105794808(param_6,ppuVar1);
    }
    else {
      puVar3 = PTR_PTR_1126be0e0;
      func_0x00010c0cb140(PTR_PTR_1126be0e0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1998a0();
      func_0x00010c168ae0(puVar3);
      func_0x00010c169700(puVar3);
      lVar2 = param_1;
      FUN_105790814(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_7);
      _objc_retain(param_6);
      func_0x00010bfc3740(uVar4);
      _objc_release(uVar4);
      _objc_release(param_6);
      _objc_release(param_7);
      _objc_release(lVar2);
      _objc_release(puVar3);
    }
    _objc_release(ppuVar1);
    _objc_release(lStack_78);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057907b0; end: 105790813;  */

void FUN_1057907b0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001057907d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,0);
    return;
  }
  func_0x00010c272ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105790814; end: 105790a3f;  */

void FUN_105790814(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126ae748;
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    func_0x00010c1eeba0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x000105794340();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    param_3 = puVar1;
    func_0x00010c078d80();
    if ((int)puVar2 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      param_3 = puVar2;
      func_0x00010bef9140(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x1057909f0;
  puStack_a0 = &UNK_11084a9e8;
  uVar5 = *(undefined8 *)(puVar1 + 0x28);
  _objc_retain(uVar5);
  lVar3 = *(long *)(puVar1 + 0x20);
  puStack_98 = param_3;
  uStack_90 = param_2;
  uStack_88 = uVar5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar5 = param_2;
  if (lVar3 != 0) {
    func_0x00010007380c(lVar3,&puStack_b8);
    uVar5 = uStack_90;
  }
  _objc_release(uVar5);
  _objc_release(puStack_98);
  _objc_release(uStack_88);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 105790a40; end: 105790ca3; -[SCCognacGRPCService submitLeaderboardScoreWithAppId:leaderboardId:score:orderingType:isStudioLens:lensId:optInStatus:completionQueue:completionBlock:] */

void FUN_105790a40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined4 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  
  _objc_retain(param_12);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105790ca4;
  puStack_b0 = &UNK_1108b1218;
  uStack_a8 = param_12;
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(&puStack_c8);
  puVar2 = PTR_PTR_1126be0e8;
  if (param_1 != 0) {
    uVar1 = 2;
    if (param_6 != 2) {
      uVar1 = param_6 == 1;
    }
    _objc_retain(param_8);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c0cb140(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168ae0();
    _objc_release(param_3);
    func_0x00010c1b9f20(puVar2,param_2,param_4);
    _objc_release(param_4);
    func_0x00010c1f6cc0(puVar2,param_2,param_5);
    func_0x00010c1d6220(puVar2,param_2,uVar1);
    func_0x00010c1b0640(puVar2,param_2,param_7);
    func_0x00010c1bbd60(puVar2,param_2,param_8);
    _objc_release(param_8);
    puVar3 = PTR_PTR_1126be0f0;
    func_0x00010c0cb140(PTR_PTR_1126be0f0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a3c80();
    func_0x00010c1fed40(puVar2,param_2,puVar3);
    lVar4 = param_1;
    FUN_105790814(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105790d6c;
    puStack_88 = &UNK_1108b1248;
    _objc_retain(&puStack_c8);
    ppuStack_78 = &puStack_c8;
    _objc_retain(param_11);
    uStack_80 = param_11;
    func_0x00010bf3d4e0(uVar5,param_2,puVar2,lVar4,&puStack_a0);
    _objc_release(uVar5);
    _objc_release(uStack_80);
    _objc_release(ppuStack_78);
    _objc_release(lVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(&puStack_c8);
  _objc_release(param_11);
  _objc_release(uStack_a8);
  _objc_release(param_12);
  return;
}


