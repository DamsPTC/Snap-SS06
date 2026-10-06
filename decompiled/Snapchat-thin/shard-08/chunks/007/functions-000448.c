/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106459900; end: 106459937; -[SCAdLifecycleInfoV2Builder withAdInsertionInfo:] */

long FUN_106459900(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106459938; end: 10645996f; -[SCAdLifecycleInfoV2Builder withAdTrackInfo:] */

long FUN_106459938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106459970; end: 1064599a7; -[SCAdLifecycleInfoV2Builder withAdPrefetchInfo:] */

long FUN_106459970(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1064599a8; end: 1064599df; -[SCAdLifecycleInfoV2Builder withAdClientRenderTypes:] */

long FUN_1064599a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1064599e0; end: 1064599e7; -[SCAdLifecycleInfoV2Builder withPreferredAttachmentType:] */

void FUN_1064599e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 1064599e8; end: 106459a83; -[SCAdLifecycleInfoV2Builder .cxx_destruct] */

void FUN_1064599e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106459a84; end: 106459b47; -[SCAdLifecycleAdCacheInfoV2 initWithAdCacheCreationTime:adCacheCreationCause:adCacheEvictionTime:adCacheEvictionCause:] */

undefined1 *
FUN_106459a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f1350;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106459b48; end: 106459b6b; -[SCAdLifecycleAdCacheInfoV2 copyWithZone:] */

undefined8 FUN_106459b48(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106459b6c; end: 106459b73; -[SCAdLifecycleAdCacheInfoV2 adCacheCreationTime] */

undefined8 FUN_106459b6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106459b74; end: 106459b7b; -[SCAdLifecycleAdCacheInfoV2 adCacheCreationCause] */

undefined8 FUN_106459b74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106459b7c; end: 106459b83; -[SCAdLifecycleAdCacheInfoV2 adCacheEvictionTime] */

undefined8 FUN_106459b7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106459b84; end: 106459b8b; -[SCAdLifecycleAdCacheInfoV2 adCacheEvictionCause] */

undefined8 FUN_106459b84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106459b8c; end: 106459bbb; -[SCAdLifecycleAdCacheInfoV2 .cxx_destruct] */

void FUN_106459b8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106459bbc; end: 106459c13; -[SCAdLifecycleAdInsertionInfoV2 initWithAdInsertionTimestampInMillis:adSource:] */

void FUN_106459bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f1358;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 106459c14; end: 106459c37; -[SCAdLifecycleAdInsertionInfoV2 copyWithZone:] */

undefined8 FUN_106459c14(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106459c38; end: 106459c3f; -[SCAdLifecycleAdInsertionInfoV2 adInsertionTimestampInMillis] */

undefined8 FUN_106459c38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106459c40; end: 106459c47; -[SCAdLifecycleAdInsertionInfoV2 adSource] */

undefined8 FUN_106459c40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106459c48; end: 106459ca3; -[SCAdLifecycleAdPrefetchInfoV2 initWithAdPrefetchStartTimestamp:adPrefetchEndTimestamp:adPrefetchCacheHit:] */

void FUN_106459c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f1360;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
  }
  return;
}



/* Entry: 106459ca4; end: 106459cc7; -[SCAdLifecycleAdPrefetchInfoV2 copyWithZone:] */

undefined8 FUN_106459ca4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106459cc8; end: 106459ccf; -[SCAdLifecycleAdPrefetchInfoV2 adPrefetchStartTimestamp] */

undefined8 FUN_106459cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106459cd0; end: 106459cd7; -[SCAdLifecycleAdPrefetchInfoV2 adPrefetchEndTimestamp] */

undefined8 FUN_106459cd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106459cd8; end: 106459cdf; -[SCAdLifecycleAdPrefetchInfoV2 adPrefetchCacheHit] */

undefined1 FUN_106459cd8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106459ce0; end: 106459d5b; -[SCAdLifecycleAdTrackInfoV2 initWithAdTrackStartTimestamp:adTrackEndTimestamp:adTrackRetro:adTrackSuccess:adTrackAttempt:adTrackAttachmentTriggered:] */

void FUN_106459ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f1368;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
  }
  return;
}



/* Entry: 106459d5c; end: 106459d7f; -[SCAdLifecycleAdTrackInfoV2 copyWithZone:] */

undefined8 FUN_106459d5c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106459d80; end: 106459d87; -[SCAdLifecycleAdTrackInfoV2 adTrackStartTimestamp] */

undefined8 FUN_106459d80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106459d88; end: 106459d8f; -[SCAdLifecycleAdTrackInfoV2 adTrackEndTimestamp] */

undefined8 FUN_106459d88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106459d90; end: 106459d97; -[SCAdLifecycleAdTrackInfoV2 adTrackRetro] */

undefined1 FUN_106459d90(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106459d98; end: 106459d9f; -[SCAdLifecycleAdTrackInfoV2 adTrackSuccess] */

undefined1 FUN_106459d98(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106459da0; end: 106459da7; -[SCAdLifecycleAdTrackInfoV2 adTrackAttempt] */

undefined8 FUN_106459da0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106459da8; end: 106459daf; -[SCAdLifecycleAdTrackInfoV2 adTrackAttachmentTriggered] */

undefined1 FUN_106459da8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106459db0; end: 106459f63; -[SCDeepLinkHandlerServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106459db0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + _DAT_112747c44;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1f480();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126caa08;
  if ((int)lVar4 == 0) {
    _objc_initWeak(auStack_48,param_1);
    puVar5 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf11fe0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126caa10;
    _objc_alloc(PTR_PTR_1126caa10);
    func_0x00010c009de0();
    _objc_release(puVar5);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  else {
    lVar1 = param_1;
    FUN_106459f64(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106459f88(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf681c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106459f64; end: 106459fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106459f64(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112747c50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106459fac; end: 10645a0e3;  */

void FUN_106459fac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126c5b30;
  _objc_alloc(PTR_PTR_1126c5b30);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  FUN_106459f64();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x000106459f88();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf67f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01db60(puVar1,param_2,0,lVar4,puVar5,puVar6,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10645a0e4; end: 10645a11f; -[SCDeepLinkHandlerServiceProvider end] */

void FUN_10645a0e4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f1370;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10645a120; end: 10645a16f; -[SCDeepLinkHandlerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10645a120(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112747c44);
  _objc_destroyWeak(param_1 + _DAT_112747c50);
  _objc_destroyWeak(param_1 + _DAT_112747c4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112747c48);
  return;
}



/* Entry: 10645a170; end: 10645a24b; -[SCPageTransition initWithDate:timeStamp:fromPage:currentPage:] */

undefined1 *
FUN_10645a170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f1378;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
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
  return (undefined1 *)puVar1;
}



/* Entry: 10645a24c; end: 10645a257; -[SCPageTransition date] */

void FUN_10645a24c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 10645a258; end: 10645a25f; -[SCPageTransition setDate:] */

void FUN_10645a258(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10645a260; end: 10645a267; -[SCPageTransition startTimeStamp] */

undefined8 FUN_10645a260(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10645a268; end: 10645a26f; -[SCPageTransition setStartTimeStamp:] */

void FUN_10645a268(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10645a270; end: 10645a27b; -[SCPageTransition fromPage] */

void FUN_10645a270(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 10645a27c; end: 10645a283; -[SCPageTransition setFromPage:] */

void FUN_10645a27c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10645a284; end: 10645a28f; -[SCPageTransition currentPage] */

void FUN_10645a284(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 10645a290; end: 10645a297; -[SCPageTransition setCurrentPage:] */

void FUN_10645a290(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10645a298; end: 10645a2d3; -[SCPageTransition .cxx_destruct] */

void FUN_10645a298(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10645a2d4; end: 10645a39b; -[SCLastPageTracker initWithSize:] */

undefined1 * FUN_10645a2d4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f1380;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bffc4a0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x20) = param_3;
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10645a39c; end: 10645a5eb; -[SCLastPageTracker getMetaInfo] */

void FUN_10645a39c(double param_1,long param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **ppuVar6;
  double dVar7;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined **ppuStack_170;
  double dStack_168;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
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
  ppuVar1 = *(undefined ***)(param_2 + 8);
  func_0x00010bf51e00();
  ppuVar2 = ppuVar1;
  func_0x00010bf529e0();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e4fd38;
  }
  else {
    unaff_x20 = ppuVar1;
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    unaff_x21 = unaff_x20;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_150 = unaff_x20;
    func_0x00010c251060(unaff_x20);
    ppuStack_148 = ppuVar1;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = ppuVar1;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    ppuStack_170 = unaff_x21;
    ppuStack_158 = unaff_x21;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    dVar7 = 0.0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(unaff_x23);
    ppuVar1 = unaff_x23;
    func_0x00010bf52a60();
    if (ppuVar1 != (undefined **)0x0) {
      unaff_x21 = (undefined **)*plStack_130;
      unaff_x20 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      unaff_x24 = &PTR____CFConstantStringClassReference_110e4fd78;
      do {
        ppuVar5 = (undefined **)0x0;
        do {
          if ((undefined **)*plStack_130 != unaff_x21) {
            _objc_enumerationMutation(unaff_x23);
          }
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          ppuVar6 = *(undefined ***)(lStack_138 + (long)ppuVar5 * 8);
          ppuVar3 = ppuVar6;
          func_0x00010bf5f780();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c251060(ppuVar6);
          dVar7 = dVar7 - param_1;
          ppuStack_170 = ppuVar3;
          dStack_168 = dVar7;
          func_0x00010c14de00(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf070e0(ppuVar2);
          _objc_release(puVar4);
          _objc_release(ppuVar3);
          ppuVar5 = (undefined **)((long)ppuVar5 + 1);
        } while (ppuVar1 != ppuVar5);
        ppuVar1 = unaff_x23;
        func_0x00010bf52a60();
      } while (ppuVar1 != (undefined **)0x0);
    }
    _objc_release(unaff_x23);
    param_4 = &PTR____CFConstantStringClassReference_110dfce78;
    func_0x00010bf070e0(ppuVar2);
    _objc_release(unaff_x23);
    _objc_release(ppuStack_158);
    _objc_release(ppuStack_150);
    ppuVar1 = ppuStack_148;
  }
  ppuVar5 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
    return;
  }
  ___stack_chk_fail();
  pcStack_178 = FUN_10645a5ec;
  ppuStack_1b0 = unaff_x24;
  ppuStack_1a8 = unaff_x23;
  ppuStack_1a0 = ppuVar2;
  ppuStack_198 = unaff_x21;
  ppuStack_190 = unaff_x20;
  ppuStack_188 = ppuVar1;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  _objc_initWeak(auStack_1b8,ppuVar5);
  ppuVar2 = param_4;
  func_0x00010c0e0ea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1c0,auStack_1b8);
  ppuVar1 = ppuVar2;
  func_0x00010c25ff60(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(ppuVar1);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_1c0);
  _objc_destroyWeak(auStack_1b8);
  _objc_release(param_4);
  return;
}



/* Entry: 10645a5ec; end: 10645a6f7; -[SCLastPageTracker subscribeOnCurrentPageEvent:] */

void FUN_10645a5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010c0e0ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10645a6f8; end: 10645a7b3;  */

void FUN_10645a6f8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c02c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10645a7b4; end: 10645a8c3;  */

void FUN_10645a7b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_5);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126caa18;
    _objc_alloc(PTR_PTR_1126caa18);
    puVar2 = PTR_PTR_1126afdd8;
    func_0x00010bfc8740(PTR_PTR_1126afdd8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126afdd8;
    func_0x00010bfc8740(PTR_PTR_1126afdd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c009560(param_1,puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    func_0x00010befa120(*(undefined8 *)(param_2 + 8));
    while( true ) {
      uVar4 = *(ulong *)(param_2 + 8);
      func_0x00010bf529e0();
      if (uVar4 <= (ulong)(long)*(int *)(param_2 + 0x20)) break;
      func_0x00010c12d3c0(*(undefined8 *)(param_2 + 8));
    }
    _objc_release(puVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10645a8c4; end: 10645a8cf;  */

void FUN_10645a8c4(void)

{
  return;
}



/* Entry: 10645a8d0; end: 10645a90b; -[SCLastPageTracker .cxx_destruct] */

void FUN_10645a8d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10645a90c; end: 10645aa13; -[SCLastPageTrackerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10645a90c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126caa20;
  _objc_alloc();
  func_0x00010c0469e0();
  lVar5 = (long)_DAT_112747c74;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  lVar5 = param_1 + _DAT_112747c80;
  _objc_loadWeakRetained(lVar5);
  lVar2 = lVar5;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5f7c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ff40(uVar4,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar5);
  param_1 = param_1 + _DAT_112747c78;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010bfede00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126aa0();
  _objc_release(lVar2);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10645aa14; end: 10645aa67; -[SCLastPageTrackerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10645aa14(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112747c78);
  _objc_destroyWeak(param_1 + _DAT_112747c80);
  _objc_destroyWeak(param_1 + _DAT_112747c7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112747c74,0);
  return;
}



/* Entry: 10645aa68; end: 10645aadb; -[SCNetworkMetaInfoProvider initWithNetworkConnectivityMonitorServices:] */

undefined1 * FUN_10645aa68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1388;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10645aadc; end: 10645acd7; -[SCNetworkMetaInfoProvider getMetaInfo] */

void FUN_10645aadc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf27000();
  puVar2 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf5e740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110e4fd98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar5 = *(long *)(param_1 + 8);
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  if (lVar6 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110e4fdd8;
  }
  else {
    lVar5 = lVar6;
    func_0x00010bf48f60(lVar6);
    puVar1 = PTR_PTR_1126ba4e8;
    func_0x00010c272260(PTR_PTR_1126ba4e8,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e4fdb8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf88f20();
  puVar3 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cc680();
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e4fdf8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e4fe18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar6);
  _objc_release(ppuVar7);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10645acd8; end: 10645ace3; -[SCNetworkMetaInfoProvider .cxx_destruct] */

void FUN_10645acd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10645ace4; end: 10645ad83; -[SCShakeToReportMetaInfoEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10645ace4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126caa28;
  _objc_alloc_init();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112747c88);
  *(undefined **)(param_1 + _DAT_112747c88) = puVar1;
  _objc_release(uVar4);
  param_1 = param_1 + _DAT_112747c8c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfede00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126aa0();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10645ad84; end: 10645adcb; -[SCShakeToReportMetaInfoEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10645ad84(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112747c8c);
  _objc_destroyWeak(param_1 + _DAT_112747c90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112747c88,0);
  return;
}



/* Entry: 10645adcc; end: 10645b3a3; -[SCTweaksMetaInfoProvider getMetaInfo] */

undefined ** FUN_10645adcc(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *in_x5;
  undefined *in_x6;
  undefined *in_x7;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **unaff_x25;
  long unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  long lStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined *puStack_358;
  undefined **ppuStack_350;
  undefined *puStack_348;
  undefined1 *puStack_340;
  code *pcStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined *puStack_310;
  long lStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
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
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126b8240;
  puStack_2d0 = puVar9;
  func_0x00010c22b800();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010c06ffc0();
  _objc_release(puVar3);
  if ((int)puVar9 != 0) {
    puVar9 = PTR_PTR_1126b4968;
    func_0x00010bf95e40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    ppuStack_330 = (undefined **)puVar3;
    func_0x00010bf06ba0(puStack_2d0);
    _objc_release(puVar3);
  }
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  plStack_220 = (long *)0x0;
  puVar9 = PTR_PTR_1126b0bf0;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar9;
  func_0x00010c27d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar8 = auStack_f0;
  puVar9 = (undefined *)0x10;
  puStack_310 = puVar3;
  func_0x00010bf52a60();
  puStack_300 = puVar3;
  if (puVar3 != (undefined *)0x0) {
    lStack_308 = *plStack_220;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_220 != lStack_308) {
          _objc_enumerationMutation(puStack_310);
        }
        puVar3 = *(undefined **)(lStack_228 + (long)puVar9 * 8);
        lStack_268 = 0;
        uStack_270 = 0;
        uStack_258 = 0;
        plStack_260 = (long *)0x0;
        uStack_248 = 0;
        uStack_250 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        puStack_2f8 = puVar9;
        puStack_2c8 = puVar3;
        func_0x00010c27d760();
        _objc_retainAutoreleasedReturnValue();
        puStack_2f0 = puVar3;
        func_0x00010bf52a60();
        puStack_2e0 = puVar3;
        if (puVar3 != (undefined *)0x0) {
          lStack_2e8 = *plStack_260;
          do {
            puVar9 = (undefined *)0x0;
            do {
              if (*plStack_260 != lStack_2e8) {
                _objc_enumerationMutation(puStack_2f0);
              }
              ppuVar4 = *(undefined ***)(lStack_268 + (long)puVar9 * 8);
              lStack_2a8 = 0;
              uStack_2b0 = 0;
              uStack_298 = 0;
              plStack_2a0 = (long *)0x0;
              uStack_288 = 0;
              uStack_290 = 0;
              uStack_278 = 0;
              uStack_280 = 0;
              puStack_2d8 = puVar9;
              ppuStack_2c0 = ppuVar4;
              func_0x00010c27d8a0();
              _objc_retainAutoreleasedReturnValue();
              ppuStack_2b8 = ppuVar4;
              func_0x00010bf52a60();
              if (ppuVar4 != (undefined **)0x0) {
                unaff_x26 = *plStack_2a0;
                unaff_x28 = ppuVar4;
                do {
                  unaff_x27 = (undefined **)0x0;
                  do {
                    if (*plStack_2a0 != unaff_x26) {
                      _objc_enumerationMutation(ppuStack_2b8);
                    }
                    ppuVar11 = *(undefined ***)(lStack_2a8 + (long)unaff_x27 * 8);
                    ppuVar4 = ppuVar11;
                    func_0x00010bf60aa0();
                    _objc_retainAutoreleasedReturnValue();
                    if (ppuVar4 != (undefined **)0x0) {
                      ppuVar5 = ppuVar11;
                      func_0x00010bf60aa0();
                      _objc_retainAutoreleasedReturnValue();
                      unaff_x24 = ppuVar11;
                      func_0x00010bf6a980();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release();
                      _objc_release(ppuVar5);
                      _objc_release(ppuVar4);
                      if (ppuVar5 != unaff_x24) {
                        puVar9 = puStack_2c8;
                        func_0x00010c0d4f60();
                        _objc_retainAutoreleasedReturnValue();
                        unaff_x24 = ppuStack_2c0;
                        func_0x00010c0d4f60();
                        _objc_retainAutoreleasedReturnValue();
                        unaff_x25 = ppuVar11;
                        func_0x00010c0d4f60();
                        _objc_retainAutoreleasedReturnValue();
                        _objc_retain(ppuVar11);
                        ppuVar4 = ppuVar11;
                        func_0x00010c104580();
                        _objc_retainAutoreleasedReturnValue();
                        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                        _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                        ppuVar5 = ppuVar4;
                        _objc_opt_isKindOfClass(ppuVar4,puVar3);
                        _objc_release();
                        if (((ulong)ppuVar5 & 1) == 0) {
LAB_10645b12c:
                          _CFBooleanGetTypeID();
                          ppuVar5 = ppuVar11;
                          func_0x00010bf60aa0();
                          _objc_retainAutoreleasedReturnValue();
                          unaff_x23 = ppuVar5;
                          _CFGetTypeID();
                          _objc_release(ppuVar5);
                          ppuVar6 = ppuVar11;
                          func_0x00010bf60aa0();
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar5 = ppuVar6;
                          if (unaff_x23 == ppuVar4) {
                            ppuVar4 = ppuVar6;
                            func_0x00010bf1f3c0();
                            ppuVar5 = &PTR____CFConstantStringClassReference_110db8118;
                            if ((int)ppuVar4 == 0) {
                              ppuVar5 = &PTR____CFConstantStringClassReference_110db8138;
                            }
                            _objc_retain(ppuVar5);
                            _objc_release(ppuVar6);
                          }
                        }
                        else {
                          ppuVar4 = ppuVar11;
                          func_0x00010c104580();
                          _objc_retainAutoreleasedReturnValue();
                          unaff_x23 = ppuVar11;
                          func_0x00010bf60aa0();
                          _objc_retainAutoreleasedReturnValue();
                          ppuVar5 = ppuVar4;
                          func_0x00010c0dff20();
                          _objc_retainAutoreleasedReturnValue();
                          _objc_release(unaff_x23);
                          _objc_release();
                          if (ppuVar5 == (undefined **)0x0) goto LAB_10645b12c;
                        }
                        _objc_release(ppuVar11);
                        ppuStack_330 = (undefined **)puVar9;
                        ppuStack_328 = unaff_x24;
                        ppuStack_320 = unaff_x25;
                        ppuStack_318 = ppuVar5;
                        func_0x00010bf06ba0(puStack_2d0);
                        _objc_release(ppuVar5);
                        _objc_release(unaff_x25);
                        _objc_release(unaff_x24);
                        _objc_release(puVar9);
                      }
                    }
                    unaff_x27 = (undefined **)((long)unaff_x27 + 1);
                  } while (unaff_x28 != unaff_x27);
                  unaff_x28 = ppuStack_2b8;
                  func_0x00010bf52a60();
                } while (unaff_x28 != (undefined **)0x0);
              }
              _objc_release(ppuStack_2b8);
              puVar9 = puStack_2d8 + 1;
            } while (puVar9 != puStack_2e0);
            puVar9 = puStack_2f0;
            func_0x00010bf52a60();
            puStack_2e0 = puVar9;
          } while (puVar9 != (undefined *)0x0);
        }
        _objc_release(puStack_2f0);
        puVar9 = puStack_2f8 + 1;
      } while (puVar9 != puStack_300);
      puVar8 = auStack_f0;
      puVar9 = (undefined *)0x10;
      puVar3 = puStack_310;
      func_0x00010bf52a60();
      puStack_300 = puVar3;
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puStack_310);
  puVar3 = PTR_PTR_1126caa30;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  func_0x00010bf81720();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar10;
  func_0x00010c0720c0();
  _objc_release(puVar10);
  _objc_release(puVar3);
  if (((ulong)puVar7 & 1) == 0) {
    ppuVar4 = (undefined **)PTR_PTR_1126caa30;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar4;
    func_0x00010bf81720();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_320 = &PTR____CFConstantStringClassReference_110e4feb8;
    ppuStack_330 = &PTR____CFConstantStringClassReference_110e4fe78;
    ppuStack_328 = &PTR____CFConstantStringClassReference_110e4fe98;
    ppuStack_318 = ppuVar11;
    func_0x00010bf06ba0(puStack_2d0);
    _objc_release(ppuVar11);
    _objc_release(ppuVar4);
  }
  puVar3 = puStack_2d0;
  ppuStack_330 = (undefined **)puStack_2d0;
  ppuVar4 = &PTR____CFConstantStringClassReference_110e4fed8;
  ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar11);
    return ppuVar11;
  }
  ___stack_chk_fail();
  ppuVar2 = ppuStack_318;
  ppuVar1 = ppuStack_320;
  ppuVar6 = ppuStack_328;
  ppuStack_360 = &PTR_PTR_1126ca000;
  puStack_348 = puVar3;
  pcStack_338 = FUN_10645b3a4;
  ppuStack_390 = unaff_x28;
  ppuStack_388 = unaff_x27;
  lStack_380 = unaff_x26;
  ppuStack_378 = unaff_x25;
  ppuStack_370 = unaff_x24;
  ppuStack_368 = unaff_x23;
  puStack_358 = puVar7;
  ppuStack_350 = ppuVar11;
  puStack_340 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar8);
  _objc_retain(puVar9);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar2);
  puStack_398 = PTR_PTR_1126f1390;
  ppuVar11 = &puStack_3a0;
  puStack_3a0 = puVar10;
  _objc_msgSendSuper2(ppuVar11,PTR_s_init_1125d9248);
  ppuVar5 = ppuStack_330;
  if (ppuVar11 != (undefined **)0x0) {
    _objc_retain(ppuVar4);
    puVar3 = ppuVar11[1];
    ppuVar11[1] = (undefined *)ppuVar4;
    _objc_release(puVar3);
    _objc_retain(puVar8);
    puVar3 = ppuVar11[2];
    ppuVar11[2] = puVar8;
    _objc_release(puVar3);
    _objc_retain(puVar9);
    puVar3 = ppuVar11[3];
    ppuVar11[3] = puVar9;
    _objc_release(puVar3);
    _objc_retain(in_x5);
    puVar3 = ppuVar11[4];
    ppuVar11[4] = in_x5;
    _objc_release(puVar3);
    _objc_retain(in_x6);
    puVar3 = ppuVar11[5];
    ppuVar11[5] = in_x6;
    _objc_release(puVar3);
    _objc_retain(in_x7);
    puVar3 = ppuVar11[6];
    ppuVar11[6] = in_x7;
    _objc_release(puVar3);
    ppuVar11[7] = (undefined *)ppuVar5;
    _objc_retain(ppuVar6);
    puVar3 = ppuVar11[8];
    ppuVar11[8] = (undefined *)ppuVar6;
    _objc_release(puVar3);
    _objc_retain(ppuVar1);
    puVar3 = ppuVar11[9];
    ppuVar11[9] = (undefined *)ppuVar1;
    _objc_release(puVar3);
    _objc_retain(ppuVar2);
    puVar3 = ppuVar11[10];
    ppuVar11[10] = (undefined *)ppuVar2;
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    puVar10 = ppuVar11[0xb];
    ppuVar11[0xb] = puVar3;
    _objc_release(puVar10);
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(ppuVar6);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(ppuVar4);
  return ppuVar11;
}



/* Entry: 10645b3a4; end: 10645b59f; -[SCBitmojiFashionNotificationProvider initWithOutfitSharingScopeExposer:outfitSharingScopeServices:systemScope:notificationPool:fashionSharingLogger:avatarDataServices:bitmojiStyle:circumstanceEngine:avatarProvider:flatlandCombinedContentFetcher:] */

undefined8 *
FUN_10645b3a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f1390;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    puVar1[7] = param_9;
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10645b5a0; end: 10645b5f3; -[SCBitmojiFashionNotificationProvider presentOutfitChangeNotificationFromSource:avatarId:] */

void FUN_10645b5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010be7f6c0(param_1,param_2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10645b5f4; end: 10645b723; -[SCBitmojiFashionNotificationProvider _presentWithOutfitPreviewFromSource:avatarId:] */

void FUN_10645b5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010be13b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c270520(0x4014000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  uVar2 = uVar1;
  uStack_50 = param_3;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 10645b724; end: 10645b77f;  */

void FUN_10645b724(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010beba380(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10645b780; end: 10645b817; -[SCBitmojiFashionNotificationProvider _showOutfitChangeNotificationWithImage:source:] */

void FUN_10645b780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10645b818;
  puStack_50 = &UNK_110844b80;
  uStack_48 = param_3;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10645b818; end: 10645b87b;  */

void FUN_10645b818(long param_1,undefined8 param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10645b87c;
  puStack_28 = &UNK_110922fb0;
  uStack_20 = *(undefined8 *)(param_1 + 0x28);
  uStack_18 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0c0800(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_40,
                      &PTR___NSConcreteGlobalBlock_110922fe0);
  return;
}



/* Entry: 10645b87c; end: 10645b9c3;  */

void FUN_10645b87c(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10645b9c4;
  uStack_40 = 0x10645b9d4;
  uStack_38 = 0;
  puVar2 = PTR_PTR_1126af5d0;
  _objc_opt_class(PTR_PTR_1126af5d0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_opt_class(PTR__OBJC_CLASS___UIImage_1126aea68);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    puVar1 = puStack_58;
    if ((uVar3 & 1) != 0) {
      _objc_retain(param_2);
      uVar4 = puVar1[5];
      puVar1[5] = param_2;
      _objc_release(uVar4);
    }
  }
  else {
    func_0x00010c0c0800(param_2);
  }
  if (puStack_58[5] != 0) {
    func_0x00010bec6360(*(undefined8 *)(param_1 + 0x20));
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10645b9c4; end: 10645b9db;  */

void FUN_10645b9c4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10645b9dc; end: 10645ba13;  */

void FUN_10645b9dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10645ba14; end: 10645ba1b;  */

void FUN_10645ba14(void)

{
  return;
}



/* Entry: 10645ba1c; end: 10645baa3; -[SCBitmojiFashionNotificationProvider _fetchSceneOnBackgroundImageWithAvatarId:] */

void FUN_10645ba1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  
  lVar1 = param_3;
  _objc_retain();
  if ((lRam00000001138466f0 == 2) ||
     ((lRam00000001138466f0 == 0 && (func_0x00010099c714(), lVar1 == 3)))) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e4ff38;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e4ff18;
  }
  func_0x00010be13b40(param_1,param_2,&PTR____CFConstantStringClassReference_110e4fef8,ppuVar2,
                      param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10645baa4; end: 10645bb7f; -[SCBitmojiFashionNotificationProvider _fetchSceneImageWithSceneId:backgroundURL:avatarId:] */

void FUN_10645baa4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af5d8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bff6040();
  _objc_release(param_5);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfa9f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10645bb80; end: 10645bc23; -[SCBitmojiFashionNotificationProvider _submitOutfitChangeNotificationWithImage:source:] */

void FUN_10645bb80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126caa38;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032740();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10645bc24; end: 10645bcb3; -[SCBitmojiFashionNotificationProvider .cxx_destruct] */

void FUN_10645bc24(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 10645bcb4; end: 10645bda3; -[SCBitmojiFashionNotificationServiceProvider provide] */

void FUN_10645bcb4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126caa40;
  _objc_alloc(PTR_PTR_1126caa40);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03ba20(puVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10645bda4; end: 10645bde3;  */

void FUN_10645bda4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be643e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10645bde4; end: 10645c017; -[SCBitmojiFashionNotificationServiceProvider _notificationProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10645bde4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
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
  undefined8 uVar16;
  
  lVar1 = param_1 + _DAT_112747cc0;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf1c460();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf5e220();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126caa48;
  _objc_alloc();
  uVar16 = *(undefined8 *)(param_1 + _DAT_112747cc4);
  lVar1 = param_1 + _DAT_112747cc8;
  _objc_loadWeakRetained();
  lVar2 = param_1 + _DAT_112747ccc;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_112747cd0;
  _objc_loadWeakRetained();
  lVar6 = lVar3;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112747cd4;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bfa0c40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112747cd8;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf12e00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112747cdc;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112747ce0;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112747ce4;
  _objc_loadWeakRetained();
  lVar15 = param_1;
  func_0x00010bf418c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032720(puVar5,param_2,uVar16,lVar1,lVar2,lVar6,lVar8,lVar10,lVar4,lVar12,lVar14,
                      lVar15);
  _objc_release(lVar15);
  _objc_release(param_1);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10645c018; end: 10645c0bf; -[SCBitmojiFashionNotificationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10645c018(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112747cc8);
  _objc_storeStrong(param_1 + _DAT_112747cc4,0);
  _objc_destroyWeak(param_1 + _DAT_112747ce4);
  _objc_destroyWeak(param_1 + _DAT_112747ce0);
  _objc_destroyWeak(param_1 + _DAT_112747cdc);
  _objc_destroyWeak(param_1 + _DAT_112747cc0);
  _objc_destroyWeak(param_1 + _DAT_112747cd8);
  _objc_destroyWeak(param_1 + _DAT_112747cd4);
  _objc_destroyWeak(param_1 + _DAT_112747cd0);
  _objc_destroyWeak(param_1 + _DAT_112747ccc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112747ce8);
  return;
}



/* Entry: 10645c0c0; end: 10645c353; -[SCBitmojiOutfitChangeNotificationPresenter initWithOutfitSharingScopeExposer:outfitSharingScopeServices:systemScope:source:fashionSharingLogger:avatarDataServices:avatarProvider:bitmojiStyle:circumstanceEngine:outfitPreviewImage:] */

undefined8 *
FUN_10645c0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f1398;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[7];
    puVar1[7] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[8];
    puVar1[8] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[9];
    puVar1[9] = param_5;
    _objc_release(uVar2);
    puVar1[10] = param_6;
    _objc_retain(param_7);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_9;
    _objc_release(uVar2);
    puVar1[0xf] = param_10;
    _objc_retain(param_11);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10645c354;
    puStack_88 = &UNK_1108434b0;
    _objc_copyWeak(auStack_80,auStack_78);
    ppuVar4 = &puStack_a0;
    _objc_retainBlock(ppuVar4);
    puVar3 = PTR_PTR_1126caa50;
    _objc_alloc();
    func_0x00010bff0560();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_release(ppuVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10645c354; end: 10645c38b;  */

void FUN_10645c354(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e7c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10645c38c; end: 10645c3b3; -[SCBitmojiOutfitChangeNotificationPresenter containerView] */

void FUN_10645c38c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10645c3b4; end: 10645c6c3; -[SCBitmojiOutfitChangeNotificationPresenter presentNotificationOverView:completion:] */

void FUN_10645c3b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar9 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = param_5;
  _objc_release(uVar9);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(uVar9,param_3,puVar1);
  _objc_release(puVar1);
  func_0x00010befbb60(param_4,param_3,*(undefined8 *)(param_2 + 0x18));
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  *(undefined8 *)(param_2 + 0x30) = param_1;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010c274200(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010bf493c0(*(undefined8 *)(param_2 + 0x30),uVar2,param_3,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar11;
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010c274200(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010bf493a0(uVar2,param_3,uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar11;
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  uStack_88 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00010bf493c0(0x4030000000000000,uVar9,param_3,uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uStack_80 = uVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010c2793a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf493c0(0xc030000000000000,uVar3,param_3,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uStack_78 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf494e0(0x4051000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&uStack_88,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_3,puVar7);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar10);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar11);
  _objc_release(uVar9);
  uVar9 = param_4;
  func_0x00010be0bb20(param_2,param_3,param_4);
  _objc_release(param_4);
  func_0x00010bdc8860(param_2);
  func_0x00010be9af80();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  _objc_retain(uVar9);
  func_0x00010bf1f440(uVar2,param_3,&PTR____CFConstantStringClassReference_110e4ff58,0,0);
  uVar11 = 0;
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar2;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  lVar8 = param_2;
  func_0x00010bed0ca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf24560(0,uVar2,param_3,lVar8,uVar9,*(undefined8 *)(param_2 + 0x50),0,0,0,uVar11,0,0,
                      param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(lVar8);
  lVar8 = *(long *)(param_2 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_2 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x38),param_3,uVar2);
  func_0x00010be0ba80(param_2);
  func_0x00010be588e0(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar11);
  return;
}



/* Entry: 10645c6c4; end: 10645c807; -[SCBitmojiOutfitChangeNotificationPresenter _presentShareOutfitWithSourcePageViewName:] */

void FUN_10645c6c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  _objc_retain(param_3);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110e4ff58,0,0);
  uVar3 = 0;
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  lVar1 = param_1;
  func_0x00010bed0ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf24560(0,uVar2,param_2,lVar1,param_3,*(undefined8 *)(param_1 + 0x50),0,0,0,uVar3,0,0,
                      param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x38),param_2,uVar2);
  func_0x00010be0ba80(param_1);
  func_0x00010be588e0(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10645c808; end: 10645c867; -[SCBitmojiOutfitChangeNotificationPresenter _uiContainer] */

void FUN_10645c808(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010becd7c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,param_1,1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10645c868; end: 10645c983; -[SCBitmojiOutfitChangeNotificationPresenter _topViewController] */

void FUN_10645c868(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_10645c984;
    uStack_30 = 0x10645c994;
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    puStack_48 = &uStack_50;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1417c0();
    _objc_retainAutoreleasedReturnValue();
    uStack_28 = uVar3;
    _objc_release(uVar2);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10645c99c;
    puStack_60 = &UNK_110847658;
    puStack_58 = &uStack_50;
    func_0x00010bcbe2c4("APPSTORE",&puStack_78);
    uVar3 = puStack_48[5];
    _objc_retain(uVar3);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10645c984; end: 10645c99b;  */

void FUN_10645c984(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10645c99c; end: 10645ca13;  */

void FUN_10645c99c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  while( true ) {
    lVar2 = *(long *)(*(long *)(lVar2 + 8) + 0x28);
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) break;
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = uVar1;
    _objc_release(uVar3);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  return;
}



/* Entry: 10645ca14; end: 10645cac7; -[SCBitmojiOutfitChangeNotificationPresenter _executeEntranceAnimationWithView:] */

void FUN_10645ca14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010c08cdc0(param_3);
  func_0x00010c162480(*(undefined8 *)(param_1 + 0x20),param_2,0);
  func_0x00010c162480(*(undefined8 *)(param_1 + 0x28),param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10645cac8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf03400(0x3fd3333333333333,puVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10645cac8; end: 10645cacf;  */

void FUN_10645cac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10645cad0; end: 10645cbb3; -[SCBitmojiOutfitChangeNotificationPresenter _scheduleDismissBlock] */

void FUN_10645cad0(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10645cbb4;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  ppuVar2 = &puStack_70;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined ***)(param_1 + 0x10) = ppuVar2;
  _objc_release(uVar3);
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x10645cbe0;
  puStack_80 = &UNK_1108434b0;
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x000100c749e0(0x40a00000,"APPSTORE",&puStack_98);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10645cbb4; end: 10645cc1b;  */

void FUN_10645cbb4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0ba80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10645cc1c; end: 10645cc2b; -[SCBitmojiOutfitChangeNotificationPresenter _cancelDismissBlock] */

void FUN_10645cc1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10645cc2c; end: 10645cc8b; -[SCBitmojiOutfitChangeNotificationPresenter _addSwipeToDismissGestureRecognizer] */

void FUN_10645cc2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
  func_0x00010c050900();
  func_0x00010c1c8320();
  func_0x00010c1c3c20(puVar1,param_2,1);
  func_0x00010bef9040(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10645cc8c; end: 10645cde3; -[SCBitmojiOutfitChangeNotificationPresenter _handlePanGesture:] */

void FUN_10645cc8c(double param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  _objc_retain(param_7);
  lVar1 = param_7;
  func_0x00010c252440();
  if (lVar1 - 3U < 2) {
    dVar3 = *(double *)(param_5 + 0x30);
    func_0x00010bf49220(*(undefined8 *)(param_5 + 0x28));
    func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x18));
    if (dVar3 - param_1 <= param_4 * 0.5) {
      func_0x00010be94140(param_5);
    }
    else {
      func_0x00010be0ba80();
    }
  }
  else if (lVar1 == 2) {
    lVar1 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27adc0(param_7,param_6,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bf49220(*(undefined8 *)(param_5 + 0x28));
    dVar3 = param_2 + param_1;
    if (*(double *)(param_5 + 0x30) <= param_2 + param_1) {
      dVar3 = *(double *)(param_5 + 0x30);
    }
    func_0x00010c181140(dVar3,*(undefined8 *)(param_5 + 0x28));
    lVar1 = param_7;
    func_0x00010c29bf00(param_7);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219ba0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),param_7,param_6,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else if (lVar1 == 1) {
    func_0x00010bdda780(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10645cde4; end: 10645ceeb; -[SCBitmojiOutfitChangeNotificationPresenter _resetToInitialPosition] */

void FUN_10645cde4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x00010c181140(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10645ceec;
  puStack_48 = &UNK_110842e18;
  uStack_40 = uVar2;
  _objc_copyWeak(auStack_68,auStack_38);
  func_0x00010bf03420(0x3fd3333333333333,puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 10645ceec; end: 10645cef3;  */

void FUN_10645ceec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10645cef4; end: 10645cf27;  */

void FUN_10645cef4(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be9af80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10645cf28; end: 10645d077; -[SCBitmojiOutfitChangeNotificationPresenter _executeDismissAnimation] */

void FUN_10645cf28(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x00010bdda780();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c162480(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c162480(*(undefined8 *)(param_1 + 0x28));
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,param_1);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10645d078;
    puStack_48 = &UNK_110842e18;
    uStack_40 = uVar3;
    _objc_copyWeak(auStack_68,auStack_38);
    func_0x00010bf03420(0x3fd3333333333333,puVar1);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_38);
    _objc_release(uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010645d058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 10645d078; end: 10645d07f;  */

void FUN_10645d078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 10645d080; end: 10645d0ab;  */

void FUN_10645d080(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be02ee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


