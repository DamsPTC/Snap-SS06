/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1059fa090; end: 1059fa10f;  */

void FUN_1059fa090(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be221a0();
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126c0fd8;
  _objc_alloc(PTR_PTR_1126c0fd8);
  func_0x00010c03e3a0();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059fa110; end: 1059fa19b; -[SCSpotlightRepliesViewCountManager liveRepliesCountObservableForSnapID:observationQueue:] */

void FUN_1059fa110(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_4);
    FUN_1059fad84(uVar2,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0e0500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059fa19c; end: 1059fa227; -[SCSpotlightRepliesViewCountManager pendingRepliesCountObservableForSnapID:observationQueue:] */

void FUN_1059fa19c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_4);
    FUN_1059fad84(uVar2,param_3,2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0e0500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059fa228; end: 1059fa307; -[SCSpotlightRepliesViewCountManager increaseCountByOneForViewCountType:snapID:] */

void FUN_1059fa228(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1059fa308; end: 1059fa33f;  */

void FUN_1059fa308(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be381a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059fa340; end: 1059fa41f; -[SCSpotlightRepliesViewCountManager decreaseCountByOneForViewCountType:snapID:] */

void FUN_1059fa340(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1059fa420; end: 1059fa457;  */

void FUN_1059fa420(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf8960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059fa458; end: 1059fa52f; -[SCSpotlightRepliesViewCountManager increaseLiveCountDecreasePendingCountByOneForSnapID:] */

void FUN_1059fa458(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059fa530; end: 1059fa563;  */

void FUN_1059fa530(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be381c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059fa564; end: 1059fa63b; -[SCSpotlightRepliesViewCountManager addAllPendingCountToLiveCount:] */

void FUN_1059fa564(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1059fa63c; end: 1059fa66f;  */

void FUN_1059fa63c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc5ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059fa670; end: 1059fa67b; -[SCSpotlightRepliesViewCountManager _saveRepliesCount:transactionContext:] */

void FUN_1059fa670(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  _objc_retain();
  _objc_retain(lVar4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c29c640(param_3);
  lVar3 = lVar4;
  FUN_1059fad84(lVar4,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126c0fe0;
  if (lVar3 == 0) {
    FUN_1059fd644(PTR_PTR_1126c0fe0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c131780();
    if (puVar5 != (undefined *)0x0) {
      *(int *)(puVar5 + 0x14) = (int)uVar1;
    }
    uVar1 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar5);
    }
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c29c640();
    if (puVar5 != (undefined *)0x0) {
      *(undefined8 *)(puVar5 + 0x20) = uVar1;
    }
  }
  else {
    FUN_1059fd7e0(PTR_PTR_1126c0fe0,lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c131780();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      *(int *)(puVar5 + 0x14) = (int)uVar1;
    }
  }
  func_0x00010c25ed40(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(param_3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059fa67c; end: 1059fa793; -[SCSpotlightRepliesViewCountManager _setRepliesCount:] */

void FUN_1059fa67c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8500(uVar3);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1059fa794; end: 1059fa7e7;  */

void FUN_1059fa794(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be99880();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059fa7e8; end: 1059faa67; -[SCSpotlightRepliesViewCountManager _setRepliesCountFromSnapPlaybackInfo:] */

void FUN_1059fa7e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf0e700();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf0a8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c07f5e0();
  _objc_release(lVar6);
  _objc_release(lVar1);
  if ((int)lVar7 != 0) {
    lVar1 = param_3;
    func_0x00010c24b240();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c24b580();
    if (lVar6 < 1) {
      lVar6 = 0;
    }
    else {
      lVar7 = param_3;
      func_0x00010c24b240(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar7;
      func_0x00010c24b580();
      _objc_release(lVar7);
    }
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c24b240();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar1;
    func_0x00010c24ba40();
    if (lVar7 < 1) {
      lVar7 = 0;
    }
    else {
      lVar8 = param_3;
      func_0x00010c24b240(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar8;
      func_0x00010c24ba40();
      _objc_release(lVar8);
    }
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c24b240();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010c24b7a0();
    if (lVar8 < 1) {
      lVar8 = 0;
    }
    else {
      lVar2 = param_3;
      func_0x00010c24b240(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar2;
      func_0x00010c24b7a0();
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126c0fd8;
    _objc_alloc(PTR_PTR_1126c0fd8);
    lVar1 = param_3;
    func_0x00010c15f2e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e3a0(puVar3,param_2,lVar6,lVar1,1);
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126c0fd8;
    _objc_alloc(PTR_PTR_1126c0fd8);
    lVar1 = param_3;
    func_0x00010c15f2e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e3a0(puVar4,param_2,lVar7,lVar1,2);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126c0fd8;
    _objc_alloc(PTR_PTR_1126c0fd8);
    lVar1 = param_3;
    func_0x00010c15f2e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e3a0(puVar5,param_2,lVar8,lVar1,3);
    _objc_release(lVar1);
    func_0x00010bea6c20(param_1,param_2,puVar3);
    func_0x00010bea6c20(param_1,param_2,puVar4);
    func_0x00010bea6c20(param_1,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059faa68; end: 1059faaaf; -[SCSpotlightRepliesViewCountManager _getRepliesCountForSnapID:viewCountType:] */

ulong FUN_1059faa68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  FUN_1059fad84(uVar1,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c131780();
  _objc_release(uVar1);
  return uVar2 & 0xffffffff;
}



/* Entry: 1059faab0; end: 1059fab2f; -[SCSpotlightRepliesViewCountManager _increaseCountByOneForViewCountType:snapID:] */

void FUN_1059faab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  func_0x00010be221a0(param_1,param_2,param_4,param_3);
  puVar1 = PTR_PTR_1126c0fd8;
  _objc_alloc(PTR_PTR_1126c0fd8);
  func_0x00010c03e3a0();
  _objc_release(param_4);
  func_0x00010bea6c20(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059fab30; end: 1059fabb3; -[SCSpotlightRepliesViewCountManager _decreaseCountByOneForViewCountType:snapID:] */

void FUN_1059fab30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be221a0(param_1,param_2,param_4,param_3);
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c0fd8;
    _objc_alloc(PTR_PTR_1126c0fd8);
    func_0x00010c03e3a0();
    func_0x00010bea6c20(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1059fabb4; end: 1059fac7f; -[SCSpotlightRepliesViewCountManager _increaseLiveCountDecreasePendingCountByOneForSnapID:] */

void FUN_1059fabb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010be221a0(param_1,param_2,param_3,1);
  lVar1 = param_1;
  func_0x00010be221a0(param_1,param_2,param_3,2);
  puVar2 = PTR_PTR_1126c0fd8;
  _objc_alloc(PTR_PTR_1126c0fd8);
  func_0x00010c03e3a0();
  func_0x00010bea6c20(param_1,param_2,puVar2);
  _objc_release(puVar2);
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c0fd8;
    _objc_alloc(PTR_PTR_1126c0fd8);
    func_0x00010c03e3a0();
    func_0x00010bea6c20(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059fac80; end: 1059fad47; -[SCSpotlightRepliesViewCountManager _addAllPendingCountToLiveCount:] */

void FUN_1059fac80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010be221a0(param_1,param_2,param_3,1);
  func_0x00010be221a0(param_1,param_2,param_3,2);
  puVar1 = PTR_PTR_1126c0fd8;
  _objc_alloc(PTR_PTR_1126c0fd8);
  func_0x00010c03e3a0();
  func_0x00010bea6c20(param_1,param_2,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126c0fd8;
  _objc_alloc(PTR_PTR_1126c0fd8);
  func_0x00010c03e3a0();
  _objc_release(param_3);
  func_0x00010bea6c20(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059fad48; end: 1059fad83; -[SCSpotlightRepliesViewCountManager .cxx_destruct] */

void FUN_1059fad48(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059fad84; end: 1059fae73;  */

void FUN_1059fad84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c0ae8;
  _objc_retain(param_2);
  func_0x00010c0e1340(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1059fae74; end: 1059fb387;  */

undefined8 * FUN_1059fae74(long param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined4 uStack_2dc;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined **ppuStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long lStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined1 uStack_241;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 uStack_221;
  undefined **appuStack_220 [3];
  byte bStack_206;
  byte bStack_205;
  undefined *apuStack_1d8 [3];
  long *plStack_1c0;
  long *plStack_1b8;
  undefined **ppuStack_1b0;
  undefined4 uStack_1a8;
  undefined2 uStack_198;
  byte bStack_196;
  byte bStack_195;
  undefined ***pppuStack_178;
  undefined ***pppuStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined4 uStack_f0;
  undefined2 uStack_e0;
  byte bStack_de;
  byte bStack_dd;
  undefined1 *puStack_c0;
  undefined ***pppuStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126c0fd8);
  if (param_2 == (undefined8 *)0x0) {
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_140,param_2);
  }
  puVar1 = &uStack_221;
  FUN_1059fd244(puVar1);
  uStack_100 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uStack_238 = 0;
  uStack_230 = 0;
  puStack_240 = (undefined *)0x0;
  puVar3 = puVar2;
  func_0x00010bf529e0(puVar2);
  func_0x0001004c2bb4(&puStack_240,puVar3);
  lStack_2b8 = 0;
  ppuStack_2c0 = (undefined **)0x0;
  uStack_2a8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  _objc_retain(puVar2);
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    lVar10 = *plStack_2b0;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_2b0 != lVar10) {
          _objc_enumerationMutation(puVar2);
        }
        lVar9 = *(long *)(lStack_2b8 + (long)puVar8 * 8);
        _objc_retain(lVar9);
        lStack_2d8 = lVar9;
        func_0x0001004c2d3c(&puStack_240,&lStack_2d8);
        _objc_release(lStack_2d8);
        puVar8 = puVar8 + 1;
      } while (puVar3 != puVar8);
      puVar3 = puVar2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  func_0x0001004c2e3c(appuStack_220,0xc,puVar1,&puStack_240);
  puVar1 = &uStack_241;
  FUN_1059fd3bc();
  lStack_2b8 = CONCAT44(lStack_2b8._4_4_,0xf);
  uStack_2a8 = CONCAT44(uStack_2a8._4_4_,0x100);
  uStack_290 = *(undefined8 *)(param_1 + 0x28);
  ppuStack_2c0 = &PTR_SUB_1108ccfd8;
  uStack_280 = 0;
  uStack_288 = 0;
  lStack_270 = 0;
  lStack_278 = 0;
  plStack_260 = (long *)0x0;
  uStack_268 = 0;
  plStack_258 = (long *)0x0;
  bStack_de = puVar1[0x1a];
  bStack_dd = puVar1[0x1b];
  uStack_f0 = 10;
  uStack_e0 = 0x100;
  ppuStack_f8 = &PTR_FUN_1108ccf78;
  pppuStack_b8 = &ppuStack_2c0;
  plStack_90 = (long *)0x0;
  plStack_98 = (long *)0x0;
  uStack_a0 = 0;
  lStack_a8 = 0;
  lStack_b0 = 0;
  bStack_196 = bStack_206 | bStack_de;
  bStack_195 = bStack_205 & bStack_dd;
  uStack_1a8 = 4;
  uStack_198 = 0x100;
  ppuStack_1b0 = &PTR_SUB_1108629c8;
  pppuStack_170 = &ppuStack_f8;
  uStack_160 = 0;
  lStack_168 = 0;
  plStack_150 = (long *)0x0;
  uStack_158 = 0;
  plStack_148 = (long *)0x0;
  lStack_2d8 = 0;
  lStack_2d0 = 0;
  uStack_2c8 = 0;
  uStack_2dc = 0;
  puVar4 = &uStack_140;
  pppuStack_178 = appuStack_220;
  puStack_c0 = puVar1;
  func_0x0001000e77a0(puVar4,&ppuStack_1b0,&lStack_2d8,&uStack_2dc);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (lStack_2d8 != 0) {
    lStack_2d0 = lStack_2d8;
    __ZdlPv();
  }
  plVar7 = plStack_148;
  ppuStack_1b0 = &PTR_SUB_1108629c8;
  plStack_148 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  plVar7 = plStack_150;
  plStack_150 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  if (lStack_168 != 0) {
    __ZdlPv();
  }
  plVar7 = plStack_90;
  ppuStack_f8 = &PTR_FUN_1108ccf78;
  plStack_90 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  plVar7 = plStack_98;
  plStack_98 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  plVar7 = plStack_258;
  ppuStack_2c0 = &PTR_SUB_1108ccfd8;
  plStack_258 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  plVar7 = plStack_260;
  plStack_260 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  if (lStack_278 != 0) {
    lStack_270 = lStack_278;
    __ZdlPv();
  }
  plVar7 = plStack_1b8;
  appuStack_220[0] = &PTR_FUN_110862700;
  plStack_1b8 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  plVar7 = plStack_1c0;
  plStack_1c0 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  ppuStack_f8 = apuStack_1d8;
  func_0x000100105004(&ppuStack_f8);
  ppuStack_f8 = &puStack_240;
  func_0x000100105004(&ppuStack_f8);
  _objc_release(puVar2);
  func_0x0001000e76e0(&uStack_118);
  _objc_release(uStack_128);
  _objc_release(uStack_130);
  puVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (lStack_2d8 != 0) {
    lStack_2d0 = lStack_2d8;
    __ZdlPv();
  }
  func_0x000105007830(&ppuStack_1b0);
  FUN_1059fb388(&ppuStack_f8);
  func_0x0001059fb3f4(&ppuStack_2c0);
  FUN_1050048c0(appuStack_220);
  ppuStack_f8 = &puStack_240;
  func_0x000100105004(&ppuStack_f8);
  _objc_release(puVar2);
  func_0x000104d96620(&uStack_140);
  _objc_release(param_2);
  __Unwind_Resume(puVar6);
  func_0x000104bd46a0();
  *puVar6 = &PTR_FUN_1108ccf78;
  plVar7 = (long *)puVar6[0xd];
  puVar6[0xd] = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  plVar7 = (long *)puVar6[0xc];
  puVar6[0xc] = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  if (puVar6[9] != 0) {
    puVar6[10] = puVar6[9];
    __ZdlPv();
  }
  return puVar6;
}



/* Entry: 1059fb388; end: 1059fb463;  */

undefined8 * FUN_1059fb388(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1108ccf78;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1059fb464; end: 1059fb62f;  */

void FUN_1059fb464(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c29c640(param_3);
  lVar3 = param_2;
  FUN_1059fad84(param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c0fe0;
  if (lVar3 == 0) {
    FUN_1059fd644(PTR_PTR_1126c0fe0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c131780();
    if (puVar4 != (undefined *)0x0) {
      *(int *)(puVar4 + 0x14) = (int)uVar1;
    }
    uVar1 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 != (undefined *)0x0) {
      _objc_setProperty_nonatomic_copy(puVar4);
    }
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010c29c640();
    if (puVar4 != (undefined *)0x0) {
      *(undefined8 *)(puVar4 + 0x20) = uVar1;
    }
  }
  else {
    FUN_1059fd7e0(PTR_PTR_1126c0fe0,lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c131780();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      *(int *)(puVar4 + 0x14) = (int)uVar1;
    }
  }
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1059fb630; end: 1059fb69f;  */

void FUN_1059fb630(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_SUB_1108ccfd8;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1059fb6a0; end: 1059fbd5b;  */

void FUN_1059fb6a0(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001059fbd00;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001059fbd20;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001059fbd20;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001059fbc94:
                    /* WARNING: Could not recover jumptable at 0x0001059fbcb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001059fbc94;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001059fbd20;
    }
    goto code_r0x0001059fbd14;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001059fbd14;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001059fbd20;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001059fbd20;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1059fbd30;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001059fbd00:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001059fbd14:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001059fbd20:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1059fbd30:
  return;
}



/* Entry: 1059fbd5c; end: 1059fbde3;  */

void FUN_1059fbd5c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001059fbdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1059fbde4; end: 1059fbf17;  */

void FUN_1059fbde4(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar4);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001059fbf0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1059fbf18; end: 1059fbfc7;  */

long FUN_1059fbf18(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    lVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    lVar3 = *(long *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    lVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      lVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(lVar3,param_4);
  }
  else {
    lVar3 = 0;
  }
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1059fbfc8; end: 1059fc003;  */

undefined8 FUN_1059fbfc8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_1059fc004(uVar1,param_1);
  return uVar1;
}



/* Entry: 1059fc004; end: 1059fc1af;  */

void FUN_1059fc004(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x0001059fc244(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x0001059fc1b0(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_1059fc0f0:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_1059fc344(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_1059fc0f0;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      param_1[6] = *(undefined8 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_SUB_1108ccfd8;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 1059fc1b0; end: 1059fc343;  */

undefined8 * FUN_1059fc1b0(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_SUB_1108ccfd8;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1059fc344; end: 1059fc3db;  */

undefined8 * FUN_1059fc344(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_SUB_1108ccfd8;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_1059fc3dc(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1059fc3dc; end: 1059fc453;  */

void FUN_1059fc3dc(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1059fc454(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1059fc454; end: 1059fc48f;  */

void FUN_1059fc454(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if (param_2 >> 0x3d == 0) {
    plVar2 = param_1 + 2;
    FUN_1059fc4a4();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_2);
    return;
  }
  FUN_1059fc490();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_1108ccf78;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1059fc490; end: 1059fc4a3;  */

void FUN_1059fc490(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_1108ccf78;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1059fc4a4; end: 1059fc543;  */

void FUN_1059fc4a4(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1108ccf78;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1059fc544; end: 1059fcbff;  */

void FUN_1059fc544(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001059fcba4;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001059fcbc4;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001059fcbc4;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001059fcb38:
                    /* WARNING: Could not recover jumptable at 0x0001059fcb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001059fcb38;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001059fcbc4;
    }
    goto code_r0x0001059fcbb8;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001059fcbb8;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001059fcbc4;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001059fcbc4;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1059fcbd4;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001059fcba4:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001059fcbb8:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001059fcbc4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1059fcbd4:
  return;
}



/* Entry: 1059fcc00; end: 1059fcc87;  */

void FUN_1059fcc00(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001059fcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1059fcc88; end: 1059fcdbb;  */

void FUN_1059fcc88(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar4);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001059fcdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1059fcdbc; end: 1059fcfc7;  */

uint FUN_1059fcdbc(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain(param_3);
  uVar9 = *(uint *)(param_1 + 8);
  if ((int)uVar9 < 0xe) {
    if (1 < uVar9 - 1) {
      if (uVar9 - 0xc < 2) {
        plVar10 = *(long **)(param_1 + 0x38);
        _objc_retain(param_3);
        (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,param_4);
        puVar2 = *(undefined8 **)(param_1 + 0x48);
        puVar3 = *(undefined8 **)(param_1 + 0x50);
        if (uVar9 == 0xc) {
          if (puVar2 == puVar3) {
            uVar9 = 0;
          }
          else {
            do {
              puVar7 = puVar2 + 1;
              plVar8 = (long *)*puVar2;
              uVar9 = (uint)(plVar10 == plVar8);
              puVar2 = puVar7;
            } while (plVar10 != plVar8 && puVar7 != puVar3);
          }
        }
        else if (puVar2 == puVar3) {
          uVar9 = 1;
        }
        else {
          do {
            puVar7 = puVar2 + 1;
            plVar8 = (long *)*puVar2;
            uVar9 = (uint)(plVar10 != plVar8);
            puVar2 = puVar7;
          } while (plVar10 != plVar8 && puVar7 != puVar3);
        }
        _objc_release(param_3);
        goto LAB_1059fcfa0;
      }
      goto LAB_1059fceec;
    }
    *param_4 = 0;
    bStack_43 = 0;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
              (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_43);
    bVar5 = uVar9 != 1;
    bVar4 = bStack_43;
  }
  else {
    if (uVar9 - 0xf < 2) {
      *param_4 = 0;
      uVar9 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_1059fcfa0;
    }
    if (uVar9 == 0xe) {
      lVar1 = 0x28;
      lVar6 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar6 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar6,param_4);
      uVar9 = (uint)lVar6;
      goto LAB_1059fcfa0;
    }
LAB_1059fceec:
    if ((uVar9 & 0xfffffffe) != 10) {
      uVar9 = 0;
      goto LAB_1059fcfa0;
    }
    plVar10 = *(long **)(param_1 + 0x38);
    plVar8 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar10 + 0x28))(plVar10,param_2,param_3,&bStack_41);
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    bVar5 = uVar9 == 0xb;
    bVar4 = plVar10 == plVar8;
  }
  uVar9 = (uint)(bVar5 ^ bVar4);
LAB_1059fcfa0:
  _objc_release(param_3);
  return uVar9 & 1;
}



/* Entry: 1059fcfc8; end: 1059fd243;  */

undefined8 * FUN_1059fcfc8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  iVar10 = *(int *)(param_1 + 8);
  if (0xb < iVar10) {
    if (iVar10 < 0xf) {
      if (iVar10 - 0xcU < 2) {
        plVar7 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar7 + 0x30))();
        uVar5 = *(undefined2 *)((long)plVar7 + 0x19);
        uVar3 = *(undefined1 *)((long)plVar7 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar5;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar3;
        *puVar6 = &PTR_FUN_1108ccf78;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_1059fc3dc(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 3);
        puVar6[0xc] = plVar7;
        puVar6[0xd] = 0;
        return puVar6;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      bVar9 = *(byte *)(param_1 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x19);
      *(undefined4 *)(puVar6 + 1) = 0xe;
      puVar6[2] = uVar11;
      *(byte *)(puVar6 + 3) = bVar9;
      *(byte *)((long)puVar6 + 0x19) = bVar12;
      *(byte *)((long)puVar6 + 0x1a) = bVar12 ^ 1;
      *(byte *)((long)puVar6 + 0x1b) = (bVar12 | bVar9) ^ 1;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar6[5] = *(undefined8 *)(param_1 + 0x28);
      puVar6[4] = uVar11;
    }
    else {
      if (iVar10 != 0xf) {
        iVar10 = 0x10;
      }
      *(int *)(puVar6 + 1) = iVar10;
      *(undefined4 *)(puVar6 + 3) = 0x100;
      *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_1 + 0x30);
    }
    *puVar6 = &PTR_FUN_1108ccf78;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    return puVar6;
  }
  if (8 < iVar10 - 3U) {
    plVar7 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar7 + 0x30))();
    uVar3 = *(undefined1 *)((long)plVar7 + 0x19);
    uVar4 = *(undefined1 *)((long)plVar7 + 0x1a);
    if (*(int *)(param_1 + 8) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)((long)plVar7 + 0x1b);
    }
    *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined1 *)((long)puVar6 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x1a) = uVar4;
    *(byte *)((long)puVar6 + 0x1b) = bVar9 & 1;
    *puVar6 = &PTR_FUN_1108ccf78;
    puVar6[7] = plVar7;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = plVar7;
    return puVar6;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar8 + 0x30))();
  if ((*(byte *)((long)plVar7 + 0x19) & 1) == 0) {
    bVar9 = *(byte *)((long)plVar8 + 0x19);
  }
  else {
    bVar9 = 1;
  }
  if ((*(byte *)((long)plVar7 + 0x1a) & 1) == 0) {
    bVar12 = *(byte *)((long)plVar8 + 0x1a);
  }
  else {
    bVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) == 0) {
      bVar13 = 0;
      goto LAB_1059fd0f0;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_1059fd0f0;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_1059fd0f0:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_FUN_1108ccf78;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 1059fd244; end: 1059fd2a7;  */

undefined ** FUN_1059fd244(void)

{
  int iVar1;
  
  if ((bRam000000011381a628 & 1) == 0) {
    iVar1 = 0x1381a628;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1131157a8,0x100000000);
      ___cxa_guard_release(0x11381a628);
    }
  }
  return &PTR_PTR_1131157a8;
}



/* Entry: 1059fd2a8; end: 1059fd32f;  */

void FUN_1059fd2a8(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 7) || (puVar1[3] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059fd330; end: 1059fd3bb;  */

void FUN_1059fd330(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c241220(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059fd3bc; end: 1059fd473;  */

undefined8 FUN_1059fd3bc(void)

{
  int iVar1;
  
  if ((bRam000000011381a6a0 & 1) == 0) {
    iVar1 = 0x1381a6a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381a638 = 0xe;
      puRam000000011381a640 = &UNK_10f31c76f;
      uRam000000011381a648 = 0x10001;
      pcRam000000011381a650 = FUN_1059fd474;
      pcRam000000011381a658 = FUN_1059fd4ac;
      ppuRam000000011381a630 = &PTR_SUB_1108ccfd8;
      uRam000000011381a670 = 0;
      uRam000000011381a668 = 0;
      uRam000000011381a680 = 0;
      uRam000000011381a678 = 0;
      uRam000000011381a690 = 0;
      uRam000000011381a688 = 0;
      uRam000000011381a698 = 0;
      ___cxa_atexit(0x1059fb3f4,0x11381a630,0x100000000);
      ___cxa_guard_release(0x11381a6a0);
    }
  }
  return 0x11381a630;
}



/* Entry: 1059fd474; end: 1059fd4ab;  */

undefined4 FUN_1059fd474(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar2 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 1059fd4ac; end: 1059fd4ff;  */

undefined8 FUN_1059fd4ac(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c29c640(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1059fd500; end: 1059fd50b; +[SCSpotlightRepliesCount table] */

undefined * FUN_1059fd500(void)

{
  return &UNK_10f31c77d;
}



/* Entry: 1059fd50c; end: 1059fd61f; +[SCSpotlightRepliesCount immutableObjectParse:bufferSize:] */

void FUN_1059fd50c(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ushort uVar5;
  ulong uVar6;
  long lVar7;
  ushort *puVar8;
  undefined4 uVar9;
  undefined *puVar10;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126c0fd8;
  _objc_alloc(PTR_PTR_1126c0fd8);
  lVar7 = (long)*piVar1;
  puVar8 = (ushort *)((long)piVar1 - lVar7);
  uVar5 = *puVar8;
  if (uVar5 < 5) {
    uVar9 = 0;
LAB_1059fd5b0:
    puVar10 = (undefined *)0x0;
  }
  else {
    if ((ulong)puVar8[2] == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)piVar1 + (ulong)puVar8[2]);
    }
    if (uVar5 < 7) goto LAB_1059fd5b0;
    if ((ulong)puVar8[3] == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + (ulong)puVar8[3]);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)*piVar1;
      uVar5 = *(ushort *)((long)piVar1 - lVar7);
    }
    if ((8 < uVar5) && (uVar6 = (ulong)*(ushort *)((long)piVar1 + (8 - lVar7)), uVar6 != 0)) {
      uVar4 = *(undefined4 *)((long)piVar1 + uVar6);
      goto LAB_1059fd5b8;
    }
  }
  uVar4 = 0;
LAB_1059fd5b8:
  func_0x00010c03e3a0(puVar3,param_2,uVar9,puVar10,uVar4);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1059fd620; end: 1059fd643; +[SCSpotlightRepliesCount objectClassFunctionPointer] */

undefined1  [16] FUN_1059fd620(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1059fd63c;
  auVar1._0_8_ = 0x1059fd634;
  return auVar1;
}



/* Entry: 1059fd644; end: 1059fd72b;  */

void FUN_1059fd644(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar4 = PTR_PTR_1126c0fe0;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c131780(param_2);
    lVar2 = param_2;
    func_0x00010c241220(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c29c640(param_2);
    FUN_1059fd72c(puVar4,0xffffffffffffffff,lVar1,lVar2,lVar3);
    _objc_release(lVar2);
  }
  *(undefined4 *)(puVar4 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1059fd72c; end: 1059fd7df;  */

undefined1 *
FUN_1059fd72c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_4);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126eb468;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      *(undefined4 *)((long)plVar1 + 0x14) = param_3;
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
    }
  }
  _objc_release(param_4);
  return puVar3;
}



/* Entry: 1059fd7e0; end: 1059fd853;  */

void FUN_1059fd7e0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_1059fd854();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059fd854; end: 1059fdbb7;  */

void FUN_1059fd854(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar6 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar6 < 0) {
      puVar6 = param_1;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar6 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar6;
        func_0x00010bf636c0();
        _objc_release(puVar6);
        func_0x0001001b9e08(puVar1,&UNK_10f31c793);
        puVar6 = (undefined *)0x0;
        if (puVar1 == (undefined *)0x0) goto LAB_1059fdb24;
        puVar6 = param_1;
        func_0x00010c241220(param_1);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        puVar2 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
        _sqlite3_bind_text(puVar1,1,puVar2,0xffffffff,0xffffffffffffffff);
        _objc_release(puVar6);
        _objc_release(puVar6);
        puVar6 = param_1;
        func_0x00010c29c640(param_1);
        _sqlite3_bind_int64(puVar1,2,puVar6);
        puVar6 = puVar1;
        _sqlite3_step();
        if ((int)puVar6 == 100) {
          puVar2 = puVar1;
          _sqlite3_column_int64(puVar1,0);
          puVar6 = PTR_PTR_1126b04a8;
          func_0x00010bf877e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_class(PTR_PTR_1126c0fd8);
          _sqlite3_column_blob(puVar1,1);
          _sqlite3_column_bytes(puVar1,1);
          puVar3 = puVar6;
          func_0x00010c0dfea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          _objc_release(puVar6);
          _sqlite3_reset(puVar1);
          if (puVar3 == (undefined *)0x0) goto LAB_1059fdb1c;
          puVar6 = PTR_PTR_1126c0fe0;
          _objc_alloc(PTR_PTR_1126c0fe0);
          puVar1 = puVar3;
          func_0x00010c131780(puVar3);
          puVar4 = puVar3;
          func_0x00010c241220(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar3;
          func_0x00010c29c640(puVar3);
          FUN_1059fd72c(puVar6,puVar2,puVar1,puVar4,puVar5);
          param_1 = puVar3;
          goto LAB_1059fd944;
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar6 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126c0fd8);
      puVar2 = puVar6;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar6);
      if (puVar2 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126c0fe0;
        _objc_alloc(PTR_PTR_1126c0fe0);
        puVar3 = puVar2;
        func_0x00010c131780(puVar2);
        puVar4 = puVar2;
        func_0x00010c241220(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar2;
        func_0x00010c29c640(puVar2);
        FUN_1059fd72c(puVar6,puVar1,puVar3,puVar4,puVar5);
        param_1 = puVar2;
LAB_1059fd944:
        _objc_release(puVar4);
        goto LAB_1059fdb24;
      }
LAB_1059fdb1c:
      param_1 = (undefined *)0x0;
    }
  }
  puVar6 = (undefined *)0x0;
LAB_1059fdb24:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1059fdbb8; end: 1059fdc1b;  */

void FUN_1059fdbb8(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c0fd8;
    _objc_alloc(PTR_PTR_1126c0fd8);
    func_0x00010c03e3a0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059fdc1c; end: 1059fdc27; -[SCSpotlightRepliesCountChangeRequest .cxx_destruct] */

void FUN_1059fdc1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1059fdc28; end: 1059fdc33; -[SCSpotlightRepliesCountChangeRequest table] */

undefined * FUN_1059fdc28(void)

{
  return &UNK_10f31c77d;
}



/* Entry: 1059fdc34; end: 1059fdc7b; -[SCSpotlightRepliesCountChangeRequest createTableWithSQLite:] */

void FUN_1059fdc34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddc8ad8,0xa9,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1059fdc7c; end: 1059fe06b; -[SCSpotlightRepliesCountChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1059fdc7c(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_1059fdbb8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1059fe06c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar11 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar11;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f31c81c);
    if (lVar6 == 0) goto LAB_1059fe008;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar11 + (ulong)uVar4);
    puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar11 + (ulong)*puVar11);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
       (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar8 == 0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)((long)piVar1 + uVar8);
    }
    _sqlite3_bind_int64(lVar6,3,uVar7);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_1059fe008;
    uVar10 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar10;
    func_0x00010c1eeb60(puVar5);
    puVar9 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c0fd8);
    func_0x00010c21c9a0(puVar9);
LAB_1059fdff0:
    _objc_release(puVar9);
    _objc_retain(puVar5);
    puVar9 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f31c7eb);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126c0fd8);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar9);
            _objc_release(puVar5);
            puVar9 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1059fe014;
          }
        }
      }
      puVar9 = (undefined *)0x0;
      goto LAB_1059fe014;
    }
    FUN_1059fdbb8(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_1059fe06c(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar11 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar11;
    uVar10 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f31c86d);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar10);
      piVar1 = (int *)((long)puVar11 + (ulong)uVar4);
      puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar11 + (ulong)*puVar11);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
         (uVar8 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar8 == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)((long)piVar1 + uVar8);
      }
      _sqlite3_bind_int64(param_3,4,uVar7);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar9 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126c0fd8);
        func_0x00010c21c9a0(puVar9);
        goto LAB_1059fdff0;
      }
    }
LAB_1059fe008:
    puVar9 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_1059fe014:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1059fe06c; end: 1059fe267;  */

ulong FUN_1059fe06c(ulong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  
  _objc_retain(param_2);
  pcVar4 = param_2;
  func_0x00010c131780(param_2);
  pcVar5 = param_2;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar5 == (char *)0x0) {
    uVar10 = 0;
    goto LAB_1059fe178;
  }
  pcVar6 = pcVar5;
  _CFStringGetCStringPtr(pcVar5,0x8000100);
  uVar10 = param_1;
  if (pcVar6 != (char *)0x0) {
    pcVar7 = pcVar6;
    _strlen(pcVar6);
    func_0x0001001cde08(param_1,pcVar6,pcVar7);
    goto LAB_1059fe178;
  }
  pcVar6 = pcVar5;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar6 == (char *)0x0) {
    pcVar6 = pcVar5;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar6 != (char *)0x0) goto LAB_1059fe138;
    uVar10 = 0;
  }
  else {
LAB_1059fe138:
    pcVar8 = pcVar6;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar9 = pcVar6;
    func_0x00010c08fa60(pcVar6);
    pcVar7 = "";
    if (pcVar8 != (char *)0x0) {
      pcVar7 = pcVar8;
    }
    func_0x0001001cde08(param_1,pcVar7,pcVar9);
  }
  _objc_release(pcVar6);
LAB_1059fe178:
  _objc_release(pcVar5);
  pcVar6 = param_2;
  func_0x00010c29c640(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,8,(ulong)pcVar6 & 0xffffffff,0);
  func_0x0001001ce2e4(param_1,6,uVar10 & 0xffffffff);
  func_0x0001001ce354(param_1,4,pcVar4,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar5);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1059fe268; end: 1059fe3e3; +[SCContentFeedDatabaseInterface schema] */

void FUN_1059fe268(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f31c8e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8500;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f31cf3f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016840(puVar2,param_2,0,1,puVar3);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar6,param_2,1,puVar1,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    __Unwind_Resume();
    puVar6 = *(undefined **)(puVar5 + 8);
    _objc_retain(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1059fe3e4; end: 1059fe40b; -[SCContentFeedDatabaseInterface getConn] */

void FUN_1059fe3e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059fe40c; end: 1059fe493; -[SCContentFeedDatabaseInterface initWithSqliteConnection:] */

undefined1 * FUN_1059fe40c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb470;
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



/* Entry: 1059fe494; end: 1059fe5ef; -[SCContentFeedDatabaseInterface .cxx_destruct] */

void FUN_1059fe494(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059fe5f0; end: 1059fe607; -[SCContentFeedDatabaseInterface .cxx_construct] */

void FUN_1059fe5f0(long param_1)

{
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1059fe608; end: 1059fe72f;  */

void FUN_1059fe608(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x10;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc8b81,0x23);
      func_0x0001005edcd4();
      func_0x0001005fcb64(lVar1,FUN_1059fe730);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059fe730; end: 1059fe80f;  */

void FUN_1059fe730(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c0fe8;
  _objc_alloc(PTR_PTR_1126c0fe8);
  uVar2 = param_1;
  func_0x00010b5ef268(param_1,0);
  uVar3 = param_1;
  func_0x0001005fdab8(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010b5ef268(param_1,2);
  func_0x0001005fdb34(param_1,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001068ec8c4(puVar1,uVar2,uVar3,uVar4,param_1);
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059fe810; end: 1059fe987;  */

void FUN_1059fe810(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x18;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc8ba5,0x44);
      func_0x0001005fcac0();
      func_0x0001005edcd4(lVar1,1,param_3);
      func_0x0001005fcb64(lVar1,FUN_1059fe730);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1059fe8cc;
    }
  }
  lVar1 = 0;
LAB_1059fe8cc:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059fe988; end: 1059feaaf;  */

void FUN_1059fe988(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x20;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc8bea,0x3c);
      func_0x0001005edcd4();
      func_0x0001005fcb64(lVar1,FUN_1059feab0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059feab0; end: 1059febbb;  */

void FUN_1059feab0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126c0ff0;
  _objc_alloc(PTR_PTR_1126c0ff0);
  uVar2 = param_1;
  func_0x00010b5ef268(param_1,0);
  uVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  uVar4 = param_1;
  func_0x0001005fdab8(param_1,2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010b5ef268(param_1,3);
  uVar6 = param_1;
  func_0x0001005fdb34(param_1,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef268(param_1,5);
  func_0x0001068ece54(puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,param_1);
  _objc_release(uVar6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059febbc; end: 1059fed4f;  */

void FUN_1059febbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uStack_44;
  
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x28;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc8c27,0x53);
      uStack_44 = 2;
      func_0x0001005edcd4();
      func_0x0001005fcac0(lVar1,&uStack_44,param_3);
      func_0x0001005edcd4(lVar1,uStack_44,param_4);
      func_0x0001005fcb64(lVar1,FUN_1059feab0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1059fec90;
    }
  }
  lVar1 = 0;
LAB_1059fec90:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1059fed50; end: 1059fee77;  */

void FUN_1059fed50(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x30;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc8c7b,0x3d);
      func_0x0001005edcd4();
      func_0x0001005fcb64(lVar1,FUN_1059fee78);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059fee78; end: 1059fef7f;  */

void FUN_1059fee78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126c0ff8;
  _objc_alloc(PTR_PTR_1126c0ff8);
  uVar2 = param_2;
  func_0x00010b5ef268(param_2,0);
  uVar3 = param_2;
  func_0x00010b5ef268(param_2,1);
  uVar4 = param_2;
  func_0x0001005fdb34(param_2,2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010b5ef268(param_2,3);
  uVar6 = param_2;
  func_0x00010b5ef268(param_2,4);
  func_0x00010b5ef2a0(param_2,5);
  func_0x00010b5ef268(param_2,6);
  func_0x0001068ecb64(param_1,puVar1,uVar2,uVar3,uVar4,uVar5,uVar6,param_2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059fef80; end: 1059ff0a7;  */

void FUN_1059fef80(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x38;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc8cb9,0x3e);
      func_0x0001005edcd4();
      func_0x0001005fcb64(lVar1,FUN_1059ff0a8);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059ff0a8; end: 1059ff163;  */

void FUN_1059ff0a8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c1000;
  _objc_alloc(PTR_PTR_1126c1000);
  uVar2 = param_1;
  func_0x00010b5ef268(param_1,0);
  uVar3 = param_1;
  func_0x00010b5ef268(param_1,1);
  uVar4 = param_1;
  func_0x0001005fdb34(param_1,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5ef268(param_1,3);
  func_0x0001068ed14c(puVar1,uVar2,uVar3,uVar4,param_1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1059ff164; end: 1059ff26b;  */

void FUN_1059ff164(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x40;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc8cf8,0x21);
      func_0x0001005edcd4();
      func_0x00010b5ef0d0(lVar1);
    }
  }
  return;
}



/* Entry: 1059ff26c; end: 1059ff373;  */

void FUN_1059ff26c(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x48;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc8d1a,0x29);
      func_0x0001005edcd4();
      func_0x00010b5ef0d0(lVar1);
    }
  }
  return;
}



/* Entry: 1059ff374; end: 1059ff47b;  */

void FUN_1059ff374(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x50;
      func_0x0001005fc990(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10ddc8d44,0x29);
      func_0x0001005edcd4();
      func_0x00010b5ef0d0(lVar1);
    }
  }
  return;
}



/* Entry: 1059ff47c; end: 1059ff627;  */

void FUN_1059ff47c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  int iStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x58;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddc8d6e,0xe5);
      iStack_44 = 1;
      func_0x00010b5eeb94();
      func_0x0001005fcac0(lVar2,&iStack_44,param_3);
      iVar1 = iStack_44;
      iStack_44 = iStack_44 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_4);
      func_0x00010b5eec6c(lVar2,&iStack_44,param_5);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059ff628; end: 1059ff80b;  */

void FUN_1059ff628(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  int iStack_54;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x60;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddc8e54,300);
      iStack_54 = 1;
      func_0x00010b5eeb94();
      iVar1 = iStack_54;
      iStack_54 = iStack_54 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_3);
      func_0x0001005fcac0(lVar2,&iStack_54,param_4);
      iVar1 = iStack_54;
      iStack_54 = iStack_54 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_5);
      func_0x00010b5eec6c(lVar2,&iStack_54,param_6);
      func_0x0001005edcd4(lVar2,iStack_54,param_7);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059ff80c; end: 1059ff9ef;  */

void FUN_1059ff80c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  int iStack_64;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_2 + 0x68;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_2 + 8),&UNK_10ddc8f81,0x36);
      iStack_64 = 1;
      func_0x00010b5eeb94();
      iVar1 = iStack_64;
      iStack_64 = iStack_64 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_4);
      func_0x00010b5eec6c(lVar2,&iStack_64,param_5);
      iVar1 = iStack_64;
      func_0x0001005edcd4(lVar2,iStack_64,param_6);
      func_0x0001005edcd4(lVar2,iVar1 + 1,param_7);
      func_0x00010bccb848(param_1,lVar2,iVar1 + 2);
      func_0x0001005edcd4(lVar2,iVar1 + 3,param_8);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1059ff9f0; end: 1059ffb83;  */

void FUN_1059ff9f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  int iStack_44;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x70;
      func_0x0001005fc990(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10ddc8fb8,0x89);
      iStack_44 = 1;
      func_0x00010b5eeb94();
      iVar1 = iStack_44;
      iStack_44 = iStack_44 + 1;
      func_0x0001005edcd4(lVar2,iVar1,param_3);
      func_0x00010b5eec6c(lVar2,&iStack_44,param_4);
      func_0x0001005edcd4(lVar2,iStack_44,param_5);
      func_0x00010b5ef0d0(lVar2);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1059ffb84; end: 1059ffbff; -[SCStoriesClientSideBadgingCoordinator syncBadge] */

/* WARNING: Possible PIC construction at 0x0001059ffbec: Changing call to branch */

void FUN_1059ffb84(double param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x00010be33ac0();
  if ((int)lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010be736a0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar1 != 0) && (func_0x00010c26f3a0(lVar1), -param_1 < *(double *)(param_2 + 0x20))) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
    func_0x00010be73040(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed3df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__updateBadgeVisibilityForAllTabs_112592920);
  return;
}



/* Entry: 1059ffc00; end: 1059ffca3; -[SCStoriesClientSideBadgingCoordinator clearBadge] */

void FUN_1059ffc00(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010be33ac0();
  uVar2 = param_1;
  func_0x00010bebee20();
  if (((uVar1 & 1) == 0) && ((long)uVar2 < 1)) {
    return;
  }
  if (0 < (long)uVar2) {
    func_0x00010c201780(param_1);
    func_0x00010c2017a0(param_1);
  }
  func_0x00010be73040(param_1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be73560(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bed3df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateBadgeVisibilityForAllTabs_112592920);
  return;
}



/* Entry: 1059ffca4; end: 1059ffcdf; -[SCStoriesClientSideBadgingCoordinator spotlightNotifications] */

void FUN_1059ffca4(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059ffce0; end: 1059ffe53; -[SCStoriesClientSideBadgingCoordinator _updateBadgeVisibilityForAllTabs] */

void FUN_1059ffce0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bfd3ac0();
  lVar2 = param_1;
  func_0x00010bebee20();
  uVar9 = (undefined4)lVar1;
  if (0 < lVar2) {
    uVar9 = 1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  puVar3 = PTR_PTR_1126c1008;
  func_0x00010c0dc3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c1008;
  func_0x00010c22f320();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar4;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126c1008;
  puStack_68 = puVar5;
  func_0x00010bf151a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_70 = puVar6;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_68,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1049a0(uVar10,param_2,puVar3,0,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar10 = *(undefined8 *)(puVar3 + 8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar10,param_2,puVar3,&PTR____CFConstantStringClassReference_110e15cd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1059ffe54; end: 1059ffe9f; -[SCStoriesClientSideBadgingCoordinator _persistBadge:] */

void FUN_1059ffe54(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar2,param_2,puVar1,&PTR____CFConstantStringClassReference_110e15cd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1059ffea0; end: 1059ffee7; -[SCStoriesClientSideBadgingCoordinator _spotlightNotifBadgeCount] */

long FUN_1059ffea0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0dff20(uVar1,param_2,&PTR____CFConstantStringClassReference_110e15d18);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067ec0();
  _objc_release(uVar1);
  return (long)(int)uVar2;
}



/* Entry: 1059ffee8; end: 1059ffef7; -[SCStoriesClientSideBadgingCoordinator _persistTimestamp:] */

void FUN_1059ffee8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKey__112651b80,param_3,
             &PTR____CFConstantStringClassReference_110e15cf8);
  return;
}



/* Entry: 1059ffef8; end: 1059fff5f; -[SCStoriesClientSideBadgingCoordinator _persistedTimestamp] */

void FUN_1059ffef8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c0dff20(uVar2,param_2,&PTR____CFConstantStringClassReference_110e15cf8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1059fff60; end: 1059fffb3; -[SCStoriesClientSideBadgingCoordinator .cxx_destruct] */

void FUN_1059fff60(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1059fffb4; end: 1059fffd3; -[SCStoriesBadgingServiceProvider storiesExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059fffb4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272d4c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1059fffd4; end: 1059fffe7; -[SCStoriesBadgingServiceProvider setStoriesExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059fffd4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11272d4c4,param_3);
  return;
}



/* Entry: 1059fffe8; end: 105a00037; -[SCStoriesBadgingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1059fffe8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272d4c4);
  _objc_destroyWeak(param_1 + _DAT_11272d4c0);
  _objc_destroyWeak(param_1 + _DAT_11272d4bc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272d4c8);
  return;
}



/* Entry: 105a00038; end: 105a0029b;  */

void FUN_105a00038(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c0707e0();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c1020;
  _objc_opt_new();
  uVar3 = param_1;
  func_0x000100576e9c(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c21e620(puVar2);
  _objc_release(uVar3);
  puVar10 = PTR_PTR_1126b4960;
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf63640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b19f8;
  func_0x00010c11f9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf58760(puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126c1028;
    _objc_retain();
    _objc_alloc(puVar1);
    func_0x00010c008360();
    _objc_release(param_2);
    puVar2 = puVar1;
    func_0x00010c25a9c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010c227fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105a0029c; end: 105a00327;  */

void FUN_105a0029c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c1028;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c008360();
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010c25a9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c227fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105a00328; end: 105a0036f;  */

void FUN_105a00328(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a00370; end: 105a006f7;  */

void FUN_105a00370(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf52680();
  if ((int)uVar2 == 0x11) {
    _objc_release(uVar1);
LAB_105a003f4:
    puVar4 = PTR_PTR_1126c1030;
    puVar5 = PTR_PTR_1126c1038;
    _objc_opt_new(PTR_PTR_1126c1038);
    func_0x00010c291a40(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_2;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf52680();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0x1a) goto LAB_105a003f4;
    uVar1 = param_2;
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf52680();
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126c1030;
    if ((int)uVar2 != 0x10) {
      puVar5 = (undefined *)0x0;
      goto LAB_105a004c8;
    }
    puVar5 = PTR_PTR_1126c1040;
    _objc_alloc(PTR_PTR_1126c1040);
    func_0x00010c00d3e0();
    func_0x00010c11b000(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b4040;
  _objc_alloc(PTR_PTR_1126b4040);
  uVar1 = param_2;
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080120(param_2);
  func_0x00010c078e00(param_2);
  func_0x00010c078de0(param_2);
  func_0x00010c074c20(param_2);
  func_0x00010c01b600(puVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(puVar4);
LAB_105a004c8:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}


