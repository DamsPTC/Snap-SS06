/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1058c341c; end: 1058c34b7;  */

undefined1 * FUN_1058c341c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  puVar4 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_48 = PTR_PTR_1126eabb8;
    lStack_50 = param_2;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 8);
      *(undefined8 *)((long)plVar1 + 8) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x10) = param_4;
      *(undefined8 *)((long)plVar1 + 0x18) = param_1;
    }
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 1058c34b8; end: 1058c34db; -[SCRequestsWithEarliestRequestTimestamp copyWithZone:] */

undefined8 FUN_1058c34b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1058c34dc; end: 1058c3573; -[SCRequestsWithEarliestRequestTimestamp hash] */

undefined8 * FUN_1058c34dc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar4 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_38 = -lVar1;
  if (-1 < lVar1) {
    lStack_38 = lVar1;
  }
  uVar6 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_40 = uVar3;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (undefined8 *)param_3) {
LAB_1058c3620:
    puVar7 = (undefined1 *)0x1;
  }
  else {
    puVar7 = (undefined1 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1058c362c;
    puVar7 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar7);
    if ((((ulong)puVar5 & 1) != 0) && (*(long *)((long)puVar4 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      dVar9 = ABS(*(double *)((long)puVar4 + 0x18) - *(double *)(param_3 + 0x18));
      dVar8 = ABS(*(double *)((long)puVar4 + 0x18) + *(double *)(param_3 + 0x18)) *
              2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar2 = dVar9 < dVar8;
      }
      if (bVar2) {
        puVar7 = *(undefined1 **)((long)puVar4 + 8);
        if (puVar7 != *(undefined1 **)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_1058c362c;
        }
        goto LAB_1058c3620;
      }
    }
    puVar7 = (undefined1 *)0x0;
  }
LAB_1058c362c:
  _objc_release(param_3);
  return (undefined8 *)puVar7;
}



/* Entry: 1058c3574; end: 1058c3647; -[SCRequestsWithEarliestRequestTimestamp isEqual:] */

long FUN_1058c3574(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1058c3620:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1058c362c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_1058c362c;
        }
        goto LAB_1058c3620;
      }
    }
    lVar4 = 0;
  }
LAB_1058c362c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1058c3648; end: 1058c365f;  */

undefined8 FUN_1058c3648(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  return uVar1;
}



/* Entry: 1058c3660; end: 1058c366b; -[SCRequestsWithEarliestRequestTimestamp .cxx_destruct] */

void FUN_1058c3660(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058c366c; end: 1058c378f; -[SCMemoriesReverseAudioCache initWithTemporaryFileWriter:encryptionKeyManager:circumstanceEngine:] */

undefined1 *
FUN_1058c366c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eabc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + 0x30) = (char)uVar2;
    if ((uVar2 & 1) == 0) {
      _objc_retain(param_4);
      uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
      *(undefined8 *)((long)puVar1 + 0x20) = param_4;
      _objc_release(uVar3);
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class();
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
      *(undefined1 **)((long)puVar1 + 0x28) = puVar4;
      _objc_release(uVar3);
    }
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar5;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058c3790; end: 1058c385f; -[SCMemoriesReverseAudioCache _encryptData:key:] */

void FUN_1058c3790(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf94080(lVar1,param_2,param_4,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  if (lVar1 == 0) {
    _objc_retain(param_3);
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf93ec0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0646e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c156ce0(param_3,param_2,lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1058c3860; end: 1058c392f; -[SCMemoriesReverseAudioCache _decryptData:key:] */

void FUN_1058c3860(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf94080(lVar1,param_2,param_4,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  if (lVar1 == 0) {
    _objc_retain(param_3);
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf93ec0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0646e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c156c60(param_3,param_2,lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1058c3930; end: 1058c3a4f; -[SCMemoriesReverseAudioCache setObject:forKey:] */

void FUN_1058c3930(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = *(byte *)(param_1 + 0x30);
  lVar4 = param_3;
  if ((bVar1 & 1) == 0) {
    lVar4 = param_1;
    func_0x00010be09500(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  lStack_58 = 0;
  func_0x00010c2bda80(uVar3,param_2,lVar4,param_4,9,&lStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = lStack_58;
  _objc_retain(lStack_58);
  if ((bVar1 & 1) == 0) {
    _objc_release(lVar4);
  }
  _objc_release(uVar3);
  if (lVar2 == 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x18),param_2,param_4);
  }
  _objc_release(lVar2);
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1058c3a50; end: 1058c3b6f; -[SCMemoriesReverseAudioCache objectForKey:] */

void FUN_1058c3a50(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfacf80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    if ((param_1[0x30] & 1) == 0) {
      puVar5 = param_1;
      func_0x00010bdf8aa0(param_1,param_2,puVar4,param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    if (puVar5 == (undefined *)0x0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
    }
    _objc_release(uVar3);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1058c3b70; end: 1058c3bb7; -[SCMemoriesReverseAudioCache .cxx_destruct] */

void FUN_1058c3b70(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058c3bb8; end: 1058c3c9b; -[SCMemoriesReverseAudioCacheServiceProvider provide] */

void FUN_1058c3bb8(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126bfb40;
  _objc_alloc(PTR_PTR_1126bfb40);
  func_0x00010c040140();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058c3c9c; end: 1058c3cdb;  */

void FUN_1058c3c9c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be97260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1058c3cdc; end: 1058c3dcf; -[SCMemoriesReverseAudioCacheServiceProvider _reverseAudioCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058c3cdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126bfb48;
  _objc_alloc(PTR_PTR_1126bfb48);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11272b9e4;
    _objc_loadWeakRetained(lVar6);
  }
  lVar2 = lVar6;
  func_0x00010c26b280(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be09640(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_11272b9e0;
    _objc_loadWeakRetained(lVar4);
  }
  lVar5 = lVar4;
  func_0x00010bf398e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051080(puVar1,param_2,lVar2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058c3dd0; end: 1058c3ddb; -[SCMemoriesReverseAudioCacheServiceProvider _encryptionKeyManager] */

void FUN_1058c3dd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bfb50,PTR_s_shared_1126687d0);
  return;
}



/* Entry: 1058c3ddc; end: 1058c3e1f; -[SCMemoriesReverseAudioCacheServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058c3ddc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272b9e4);
  _objc_destroyWeak(param_1 + _DAT_11272b9e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272b9dc);
  return;
}



/* Entry: 1058c3e20; end: 1058c3eab; -[SCMemoriesSnapDocThumbnailGeneratorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058c3e20(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272ba08);
  _objc_destroyWeak(param_1 + _DAT_11272ba04);
  _objc_destroyWeak(param_1 + _DAT_11272ba00);
  _objc_destroyWeak(param_1 + _DAT_11272b9fc);
  _objc_destroyWeak(param_1 + _DAT_11272b9f8);
  _objc_destroyWeak(param_1 + _DAT_11272b9f4);
  _objc_destroyWeak(param_1 + _DAT_11272b9f0);
  _objc_destroyWeak(param_1 + _DAT_11272b9ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272b9e8);
  return;
}



/* Entry: 1058c3eac; end: 1058c3f0f; -[SCCachingComposedMediaGenerationRequest init] */

undefined1 * FUN_1058c3eac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eabc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1058c3f10; end: 1058c3f2f; -[SCCachingComposedMediaGenerationRequest isCancelled] */

bool FUN_1058c3f10(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c296d80(uVar1);
  return 0 < (int)uVar1;
}



/* Entry: 1058c3f30; end: 1058c3f57; -[SCCachingComposedMediaGenerationRequest cancel] */

void FUN_1058c3f30(long param_1)

{
  func_0x00010bfec280(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1058c3f58; end: 1058c4017; -[SCCachingComposedMediaGenerationRequest setProgressReceiver:] */

void FUN_1058c3f58(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 != param_3) {
    _objc_storeWeak(param_1 + 0x10,param_3);
    puVar1 = PTR_DAT_1126a4fc8;
    lVar3 = *(long *)(param_1 + 0x18);
    _objc_retain(lVar3);
    lVar2 = lVar3;
    func_0x00010010fab4(lVar3,puVar1);
    _objc_release(lVar3);
    if (((int)lVar2 != 0) && (lVar3 != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      _objc_retain(uVar4);
      param_1 = param_1 + 0x10;
      _objc_loadWeakRetained(param_1);
      func_0x00010c1e4860(uVar4);
      _objc_release(uVar4);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058c4018; end: 1058c402f; -[SCCachingComposedMediaGenerationRequest progressReceiver] */

void FUN_1058c4018(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058c4030; end: 1058c4037; -[SCCachingComposedMediaGenerationRequest downloadRequest] */

undefined8 FUN_1058c4030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1058c4038; end: 1058c4067; -[SCCachingComposedMediaGenerationRequest setDownloadRequest:] */

void FUN_1058c4038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058c4068; end: 1058c409f; -[SCCachingComposedMediaGenerationRequest .cxx_destruct] */

void FUN_1058c4068(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058c40a0; end: 1058c4117; -[SCCachingMediaGallerySnap debugDescription] */

void FUN_1058c40a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0a458);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058c4118; end: 1058c45eb; -[SCCachingMediaGallerySnap initWithSnap:snapDetail:userSession:memoriesThumbnailLogger:galleryLogger:memoriesCloudFS:dataObjectContext:galleryEncryptedDatabase:keyService:memoriesCachingMediaHelper:circumstanceEngine:memoriesExperimentService:userTrackedLogger:memoriesSnapDocThumbnailGenerator:snapDocDownloadingService:liveRenderingMetricsRecorder:] */

undefined8 *
FUN_1058c4118(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_70 = PTR_PTR_1126eabd0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = param_3;
    func_0x00010bf8b0c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      do {
        puVar3 = param_3;
        func_0x00010bfdd120();
        if (((ulong)puVar3 & 1) != 0) break;
        puVar4 = param_3;
        func_0x00010c080ca0();
        _objc_release(puVar2);
        puVar3 = PTR_PTR_1126af4d0;
        if (((ulong)puVar4 & 1) != 0) goto LAB_1058c4358;
        puVar2 = param_3;
        func_0x00010bf8b0c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_9;
        func_0x00010c269d40(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa72e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(puVar2);
        if (puVar3 == (undefined *)0x0) {
          puVar2 = (undefined *)0x0;
          break;
        }
        puVar4 = puVar3;
        func_0x00010c080ca0();
        puVar2 = puVar3;
        if (((ulong)puVar4 & 1) != 0) break;
        _objc_release(param_3);
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        param_3 = puVar3;
      } while (puVar2 != (undefined *)0x0);
      _objc_release(puVar2);
    }
LAB_1058c4358:
    _objc_retain(param_3);
    uVar5 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar5 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar3 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_retain(param_5);
    uVar5 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar5 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar5 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar5);
    _objc_retain(param_9);
    uVar5 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar5);
    _objc_retain(param_10);
    uVar5 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar5);
    _objc_retain(param_11);
    uVar5 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar5);
    _objc_storeWeak(puVar1 + 0xb,param_12);
    _objc_retain(param_13);
    uVar5 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar5);
    _objc_retain(param_14);
    uVar5 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar5);
    _objc_retain(param_18);
    uVar5 = puVar1[0x12];
    puVar1[0x12] = param_18;
    _objc_release(uVar5);
    _objc_retain(param_15);
    uVar5 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar5);
    _objc_retain(param_16);
    uVar5 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar5);
    _objc_retain(param_17);
    uVar5 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar5);
    uVar5 = param_13;
    func_0x00010bf1f440();
    *(char *)(puVar1 + 0x11) = (char)uVar5;
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1058c45ec; end: 1058c4613; -[SCCachingMediaGallerySnap UUID] */

void FUN_1058c45ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058c4614; end: 1058c461b; -[SCCachingMediaGallerySnap maxSourceLevel] */

undefined8 FUN_1058c4614(void)

{
  return 1;
}



/* Entry: 1058c461c; end: 1058c4753; -[SCCachingMediaGallerySnap higherSourceLevelAvailable:] */

ulong FUN_1058c461c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar7 = 1;
  if (param_3 != 1) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 8);
      func_0x00010b5fa088();
      if (lVar1 - 2U < 0xb) {
        return 0;
      }
    }
    else {
      _objc_release();
    }
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c0e0160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR_PTR_1126af4c0;
    if (lVar1 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 8);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7060(puVar3,param_2,uVar8,0,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      puVar4 = puVar3;
      func_0x00010bfbdda0();
      func_0x00010b5fa33c();
      _objc_release(puVar3);
      if (puVar4 == (undefined *)0x8) {
        return param_3;
      }
    }
    uVar5 = *(ulong *)(param_1 + 0x38);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c06cde0();
    uVar7 = uVar7 & 0xffffffff;
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  return uVar7;
}



/* Entry: 1058c4754; end: 1058c475b; -[SCCachingMediaGallerySnap imageFormat] */

undefined8 FUN_1058c4754(void)

{
  return 0;
}



/* Entry: 1058c475c; end: 1058c4837; -[SCCachingMediaGallerySnap shouldCompleteGenerationWhenCancelled] */

void FUN_1058c475c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x98);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c23ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_1 + 8);
      func_0x00010c23ff80();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x000108020568();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar3 != 0) {
        func_0x00010c0d73c0(lVar3);
        _objc_release(lVar3);
      }
    }
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x98);
    *(undefined **)(param_1 + 0x98) = puVar4;
    _objc_release(uVar5);
    lVar1 = *(long *)(param_1 + 0x98);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf1f3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_boolValue_1125a5698);
  return;
}



/* Entry: 1058c4838; end: 1058c4a17; -[SCCachingMediaGallerySnap mediaEncryption] */

void FUN_1058c4838(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uVar5 = 0x3032000000;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1058c4a18;
  uStack_60 = 0x1058c4a28;
  uStack_58 = 0;
  _CACurrentMediaTime();
  uVar1 = 0;
  _dispatch_semaphore_create();
  _objc_initWeak(auStack_88,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bf788;
  _objc_alloc(PTR_PTR_1126bf788);
  func_0x00010c017ba0();
  uVar4 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_88);
  _objc_retain(uVar1);
  uStack_90 = uVar5;
  func_0x00010c135a60(uVar2);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  uVar2 = puStack_78[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_88);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1058c4a18; end: 1058c4a2f;  */

void FUN_1058c4a18(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1058c4a30; end: 1058c4bef;  */

void FUN_1058c4a30(double param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    _dispatch_semaphore_signal(*(undefined8 *)(param_2 + 0x20));
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010c13e940(param_1 - *(double *)(param_2 + 0x38),uVar2);
    _objc_release(uVar2);
    puVar3 = param_3;
    func_0x00010c086560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010bdc1800();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c08fa60();
    if ((puVar5 != (undefined *)0x0) &&
       (puVar5 = puVar4, func_0x00010c08fa60(), puVar5 != (undefined *)0x0)) {
      puVar6 = puVar3;
      func_0x00010c08fa60();
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      if (puVar6 != (undefined *)0x20) {
        _objc_retainAutorelease(puVar3);
        func_0x00010bf25f00();
        func_0x00010bf64a00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        puVar3 = puVar5;
      }
      puVar6 = puVar4;
      func_0x00010c08fa60();
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      if (puVar6 != (undefined *)0x10) {
        _objc_retainAutorelease(puVar4);
        func_0x00010bf25f00();
        func_0x00010bf64a00(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = puVar5;
      }
      puVar5 = PTR_PTR_1126bfb68;
      _objc_alloc();
      func_0x00010c00fd60();
      lVar7 = *(long *)(*(long *)(param_2 + 0x28) + 8);
      uVar2 = *(undefined8 *)(lVar7 + 0x28);
      *(undefined **)(lVar7 + 0x28) = puVar5;
      _objc_release(uVar2);
    }
    _dispatch_semaphore_signal(*(undefined8 *)(param_2 + 0x20));
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058c4bf0; end: 1058c4d6f; -[SCCachingMediaGallerySnap cachingMediaManager:requiredSourceLevel:requestOptions:atIndex:sourceImagesResultHandler:] */

void FUN_1058c4bf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_ffffffffffffff60;
  
  lVar7 = *(long *)(param_1 + 8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar4 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (lVar7 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    lVar7 = param_1 + 0x58;
    _objc_loadWeakRetained();
    FUN_1058c4d70(lVar4,uVar2,param_4,param_5,param_6,uVar1,uVar3,uVar5,uVar10,uVar11,uVar8,uVar9,
                  uVar6,lVar7,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                  CONCAT71(CONCAT61((int6)((ulong)in_stack_ffffffffffffff60 >> 0x10),
                                    *(undefined1 *)(param_1 + 0x88)),1),param_7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar7 = param_1 + 0x58;
    _objc_loadWeakRetained();
    func_0x00010be910a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1058c4d70; end: 1058c54fb;  */

void FUN_1058c4d70(ulong param_1,undefined *param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  ulong param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined4 param_17,
                  undefined4 param_18,long param_19)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 auStack_80 [16];
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_19);
  uVar3 = param_1;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = param_2;
  if ((uVar3 != 0) || (uVar4 = param_1, func_0x00010b5fa088(), 10 < uVar4 - 2)) {
    uVar5 = param_7;
    func_0x00010c075ca0();
    _objc_release(uVar3);
    puVar6 = PTR_PTR_1126bc7b8;
    if ((int)uVar5 == 0) {
      if (param_2 == (undefined *)0x0) {
        uVar5 = param_11;
        func_0x00010c269d40(param_11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        puVar12 = puVar6;
      }
      uVar3 = param_10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c13a8c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = param_10;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d7aa0(param_4);
      uVar7 = uVar3;
      func_0x00010c13aca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = param_1;
      func_0x00010b5fa088();
      func_0x00010b5fa4c8();
      puVar6 = PTR_PTR_1126bfb70;
      if ((uVar3 & 1) == 0) {
        func_0x00010c29a8e0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bfe8400();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar8 = param_4;
      func_0x00010bfe90a0();
      if (lVar8 == 1) {
        lVar8 = param_4;
        func_0x00010bf6d200();
        bVar2 = lVar8 == 0;
      }
      else {
        bVar2 = false;
      }
      puVar13 = PTR_PTR_1126bfb78;
      _objc_alloc_init(PTR_PTR_1126bfb78);
      _objc_initWeak(auStack_80,puVar13);
      puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_110 = 0xc2000000;
      pcStack_108 = FUN_1058c8864;
      puStack_100 = &UNK_1108bcae0;
      _objc_retain(param_1);
      uStack_f8 = param_1;
      _objc_copyWeak(auStack_a0,auStack_80);
      _objc_retain(puVar12);
      puStack_f0 = puVar12;
      uStack_88 = param_2 == (undefined *)0x0;
      _objc_retain(param_11);
      uStack_e8 = param_11;
      uStack_87 = (undefined1)param_17;
      _objc_retain(param_16);
      uStack_e0 = param_16;
      _objc_retain(param_14);
      uStack_d8 = param_14;
      _objc_retain(puVar6);
      uStack_98 = 1;
      puStack_d0 = puVar6;
      _objc_retain(param_6);
      uStack_c8 = param_6;
      _objc_retain(param_9);
      uStack_c0 = param_9;
      _objc_retain(param_19);
      lStack_a8 = param_19;
      _objc_retain(uVar4);
      uStack_b8 = uVar4;
      _objc_retain(param_15);
      uStack_b0 = param_15;
      ppuVar9 = &puStack_118;
      uStack_90 = param_5;
      _objc_retainBlock();
      uVar3 = uVar4;
      func_0x00010c06cde0();
      if ((int)uVar3 == 0) {
LAB_1058c517c:
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_168 = 0xc2000000;
        pcStack_160 = FUN_1058c9220;
        puStack_158 = &UNK_1108bcb50;
        _objc_retain(param_1);
        uStack_150 = param_1;
        _objc_retain(param_9);
        uStack_148 = param_9;
        _objc_retain(param_6);
        uStack_140 = param_6;
        _objc_copyWeak(auStack_128,auStack_80);
        _objc_retain(ppuVar9);
        ppuStack_138 = ppuVar9;
        _objc_retain(param_19);
        lStack_130 = param_19;
        uStack_120 = 1;
        ppuVar10 = &puStack_170;
        _objc_retainBlock();
        puStack_1c8 = puVar1;
        uStack_1c0 = 0xc2000000;
        pcStack_1b8 = FUN_1058c9390;
        puStack_1b0 = &UNK_1108b53e8;
        _objc_retain(param_1);
        uStack_1a8 = param_1;
        _objc_retain(param_8);
        uStack_1a0 = param_8;
        _objc_retain(param_6);
        uStack_198 = param_6;
        _objc_copyWeak(auStack_178,auStack_80);
        _objc_retain(uVar4);
        uStack_190 = uVar4;
        _objc_retain(puVar6);
        puStack_188 = puVar6;
        _objc_retain(ppuVar10);
        ppuVar11 = &puStack_1c8;
        ppuStack_180 = ppuVar10;
        _objc_retainBlock();
        FUN_1058c6af4(param_1,uVar7,param_3,param_6,puVar13,bVar2,param_17._1_1_,param_8,param_9,
                      param_12,param_13,puVar6,ppuVar11,param_19);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar11);
        _objc_release(ppuStack_180);
        _objc_release(puStack_188);
        _objc_release(uStack_190);
        _objc_destroyWeak(auStack_178);
        _objc_release(uStack_198);
        _objc_release(uStack_1a0);
        _objc_release(uStack_1a8);
        _objc_release(ppuVar10);
        _objc_release(lStack_130);
        _objc_release(ppuStack_138);
        _objc_destroyWeak(auStack_128);
        _objc_release(uStack_140);
        _objc_release(uStack_148);
        _objc_release(uStack_150);
      }
      else {
        if (param_3 < 1) {
          uVar3 = uVar7;
          func_0x00010c06cde0();
          if ((uVar3 & 1) != 0) goto LAB_1058c517c;
        }
        func_0x00010c0f7fc0(puVar6);
        _objc_retain(puVar13);
      }
      _objc_release(ppuVar9);
      _objc_release(uStack_b0);
      _objc_release(uStack_b8);
      _objc_release(lStack_a8);
      _objc_release(uStack_c0);
      _objc_release(uStack_c8);
      _objc_release(puStack_d0);
      _objc_release(uStack_d8);
      _objc_release(uStack_e0);
      _objc_release(uStack_e8);
      _objc_release(puStack_f0);
      _objc_destroyWeak(auStack_a0);
      _objc_release(uStack_f8);
      _objc_destroyWeak(auStack_80);
      _objc_release(puVar13);
      _objc_release(puVar6);
      _objc_release(uVar7);
      _objc_release(uVar4);
      goto LAB_1058c541c;
    }
  }
  (**(code **)(param_19 + 0x10))(param_19,0,0,1,0);
  puVar13 = (undefined *)0x0;
LAB_1058c541c:
  _objc_release(param_19);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar12);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1058c54fc; end: 1058c5dcb; -[SCCachingMediaGallerySnap _requestForSnapDocBasedSnapWithSnap:detail:requiredSourceLevel:generationId:userSession:galleryLogger:dataObjectContext:memoriesCachingMediaHelper:memoriesSnapDocThumbnailGenerator:memoriesCloudFS:requestOptions:memoriesThumbnailLogger:galleryEncryptedDatabase:keyService:snapDocDownloadingService:resultHandler:] */

void FUN_1058c54fc(long param_1,undefined8 param_2,ulong param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                  long param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,long param_18)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined1 uVar15;
  undefined *puVar16;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined1 auStack_170 [8];
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  ulong uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2301c0();
  _objc_release(uVar3);
  uVar5 = param_3;
  func_0x00010c23ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdd480(param_3);
  uVar6 = param_3;
  func_0x00010b5fa088();
  uVar7 = param_3;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar7 != 0) || (10 < uVar6 - 2)) {
    uVar3 = param_7;
    func_0x00010c075ca0();
    _objc_release(uVar7);
    puVar8 = PTR_PTR_1126bc7b8;
    if ((int)uVar3 == 0) {
      if (param_4 == (undefined *)0x0) {
        uVar3 = param_9;
        func_0x00010c269d40(param_9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        param_4 = puVar8;
      }
      lVar11 = param_12;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d7aa0(param_13);
      lVar9 = lVar11;
      func_0x00010c13aca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      uVar10 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar10;
      func_0x00010c09aa40();
      _objc_release(uVar10);
      uVar2 = 0;
      if (((int)uVar3 != 0) && (lVar9 != 0)) {
        lVar11 = lVar9;
        func_0x00010c06cde0();
        uVar2 = (undefined1)lVar11;
      }
      uVar6 = param_3;
      func_0x00010b5fa088();
      func_0x00010b5fa4c8();
      puVar8 = PTR_PTR_1126bfb70;
      if ((uVar6 & 1) == 0) {
        func_0x00010c29a8e0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bfe8400();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar11 = param_13;
      func_0x00010bfe90a0();
      if (lVar11 == 1) {
        lVar11 = param_13;
        func_0x00010bf6d200();
        bVar1 = lVar11 == 0;
      }
      else {
        bVar1 = false;
      }
      puVar16 = PTR_PTR_1126bfb78;
      _objc_alloc_init(PTR_PTR_1126bfb78);
      _objc_initWeak(auStack_80,puVar16);
      puStack_a8 = &uStack_b0;
      uStack_b0 = 0;
      uStack_a0 = 0x3032000000;
      pcStack_98 = FUN_1058c4a18;
      uStack_90 = 0x1058c4a28;
      uVar6 = param_3;
      func_0x00010c23ff80();
      _objc_retainAutoreleasedReturnValue();
      uStack_b8 = 0;
      uVar7 = uVar6;
      func_0x000108020568();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uStack_b8;
      _objc_retain();
      uStack_88 = uVar7;
      _objc_release(uVar6);
      lVar11 = puStack_a8[5];
      if ((lVar11 == 0) || (func_0x00010c0d73c0(), (int)lVar11 == 0)) {
        uVar15 = 0;
LAB_1058c5918:
        uVar10 = *(undefined8 *)(param_1 + 0x90);
        _objc_retain(uVar10);
        puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_158 = 0xc2000000;
        pcStack_150 = FUN_1058c5dcc;
        puStack_148 = &UNK_1108bc930;
        _objc_retain(param_3);
        uStack_140 = param_3;
        _objc_copyWeak(auStack_d0,auStack_80);
        _objc_retain(param_4);
        puStack_138 = param_4;
        _objc_retain(param_9);
        uStack_130 = param_9;
        uStack_c0 = uVar2;
        _objc_retain(lVar9);
        lStack_128 = lVar9;
        _objc_retain(uVar10);
        uStack_c8 = 1;
        uStack_120 = uVar10;
        _objc_retain(param_6);
        uStack_118 = param_6;
        _objc_retain(param_8);
        uStack_110 = param_8;
        _objc_retain(param_18);
        puStack_d8 = &uStack_b0;
        lStack_e0 = param_18;
        _objc_retain(param_11);
        uStack_108 = param_11;
        _objc_retain(param_10);
        uStack_100 = param_10;
        _objc_retain(puVar8);
        uStack_be = (undefined1)uVar4;
        puStack_f8 = puVar8;
        uStack_bf = uVar15;
        _objc_retain(param_12);
        lStack_f0 = param_12;
        _objc_retain(param_13);
        lStack_e8 = param_13;
        ppuVar13 = &puStack_160;
        _objc_retainBlock();
        lVar11 = puStack_a8[5];
        if (lVar11 == 0) {
          (**(code **)(param_18 + 0x10))(param_18,0,1,1,0);
LAB_1058c5a9c:
          _objc_retain(puVar16);
        }
        else {
          func_0x000108020df4();
          if ((int)lVar11 != 0) {
            func_0x00010c0f7fc0(puVar8);
            goto LAB_1058c5a9c;
          }
          puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1d0 = 0xc2000000;
          pcStack_1c8 = FUN_1058c66b8;
          puStack_1c0 = &UNK_1108bc9d0;
          _objc_retain(param_14);
          uStack_1b8 = param_14;
          _objc_retain(param_6);
          uStack_1b0 = param_6;
          _objc_retain(param_3);
          uStack_1a8 = param_3;
          _objc_retain(param_17);
          puStack_178 = &uStack_b0;
          uStack_1a0 = param_17;
          _objc_retain(puVar8);
          puStack_198 = puVar8;
          _objc_retain(param_8);
          uStack_190 = param_8;
          _objc_copyWeak(auStack_170,auStack_80);
          _objc_retain(ppuVar13);
          ppuStack_188 = ppuVar13;
          _objc_retain(param_18);
          lStack_180 = param_18;
          uStack_168 = 1;
          ppuVar14 = &puStack_1d8;
          _objc_retainBlock();
          FUN_1058c6af4(param_3,lVar9,param_5,param_6,puVar16,bVar1,*(undefined1 *)(param_1 + 0x88),
                        param_14,param_8,param_15,param_16,puVar8,ppuVar14,param_18);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar14);
          _objc_release(lStack_180);
          _objc_release(ppuStack_188);
          _objc_destroyWeak(auStack_170);
          _objc_release(uStack_190);
          _objc_release(puStack_198);
          _objc_release(uStack_1a0);
          _objc_release(uStack_1a8);
          _objc_release(uStack_1b0);
          _objc_release(uStack_1b8);
        }
        _objc_release(ppuVar13);
        _objc_release(lStack_e8);
        _objc_release(lStack_f0);
        _objc_release(puStack_f8);
        _objc_release(uStack_100);
        _objc_release(uStack_108);
        _objc_release(lStack_e0);
        _objc_release(uStack_110);
        _objc_release(uStack_118);
        _objc_release(uStack_120);
        _objc_release(lStack_128);
        _objc_release(uStack_130);
        _objc_release(puStack_138);
        _objc_destroyWeak(auStack_d0);
        _objc_release(uStack_140);
        _objc_release(uVar10);
      }
      else {
        uVar12 = *(undefined8 *)(param_1 + 0x68);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar12;
        func_0x00010c2349a0();
        _objc_release(uVar12);
        if ((int)uVar10 == 0) {
          uVar15 = 1;
          goto LAB_1058c5918;
        }
        (**(code **)(param_18 + 0x10))(param_18,0,1,1,0);
        _objc_retain(puVar16);
      }
      __Block_object_dispose(&uStack_b0,8);
      _objc_release(uStack_88);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_80);
      _objc_release(puVar16);
      _objc_release(puVar8);
      _objc_release(lVar9);
      goto LAB_1058c5ccc;
    }
  }
  (**(code **)(param_18 + 0x10))(param_18,0,0,1,0);
  puVar16 = (undefined *)0x0;
LAB_1058c5ccc:
  _objc_release(uVar5);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 1058c5dcc; end: 1058c616f;  */

void FUN_1058c5dcc(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar1 = param_2 + 0x90;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c06e0e0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar3 = param_2 + 0x90;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c1179e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1341e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_autoreleasePoolPush();
  puVar10 = *(undefined **)(param_2 + 0x28);
  _objc_retain(puVar10);
  if (puVar10 != (undefined *)0x0) {
    puVar5 = puVar10;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar12 = PTR_PTR_1126bc7b8;
    if (puVar5 == (undefined *)0x0) {
      uVar6 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7160(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(uVar6);
      puVar10 = puVar12;
    }
  }
  _CACurrentMediaTime();
  puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010bfad280(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64ae0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (puVar12 == (undefined *)0x0) {
LAB_1058c5fbc:
      _objc_release(puVar12);
      goto LAB_1058c5fc4;
    }
    puVar5 = puVar12;
    func_0x00010b6865cc(puVar12,1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
      _objc_release(puVar5);
      goto LAB_1058c5fbc;
    }
    func_0x00010c123aa0(*(undefined8 *)(param_2 + 0x40));
    FUN_1058c617c(param_1,*(undefined8 *)(param_2 + 0x20),puVar7,*(undefined8 *)(param_2 + 0x98),
                  *(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x50),
                  *(undefined8 *)(param_2 + 0x80));
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  else {
LAB_1058c5fc4:
    if (*(long *)(*(long *)(*(long *)(param_2 + 0x88) + 8) + 0x28) == 0) {
      (**(code **)(*(long *)(param_2 + 0x80) + 0x10))
                (*(long *)(param_2 + 0x80),0,*(undefined8 *)(param_2 + 0x98),1,0);
      goto LAB_1058c613c;
    }
    uVar6 = *(undefined8 *)(param_2 + 0x58);
    uVar8 = *(undefined8 *)(param_2 + 0x60);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfc04e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = *(undefined **)(param_2 + 0x20);
    _objc_retain(puVar12);
    uVar13 = *(undefined8 *)(param_2 + 0x40);
    _objc_retain(uVar13);
    uVar14 = *(undefined8 *)(param_2 + 0x48);
    _objc_retain(uVar14);
    uVar15 = *(undefined8 *)(param_2 + 0x50);
    _objc_retain(uVar15);
    uVar16 = *(undefined8 *)(param_2 + 0x80);
    _objc_retain(uVar16);
    uVar17 = *(undefined8 *)(param_2 + 0x70);
    _objc_retain(uVar17);
    uVar11 = *(undefined8 *)(param_2 + 0x78);
    _objc_retain(uVar11);
    func_0x00010bfc05e0(uVar6);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar11);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
  }
  _objc_release(puVar12);
LAB_1058c613c:
  _objc_release(puVar10);
  _objc_autoreleasePoolPop(lVar3);
  return;
}



/* Entry: 1058c6170; end: 1058c617b;  */

undefined ** FUN_1058c6170(void)

{
  return &PTR____CFConstantStringClassReference_110e0a4d8;
}



/* Entry: 1058c617c; end: 1058c63d3;  */

void FUN_1058c617c(double param_1,long param_2,undefined *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  undefined1 *puVar10;
  code *pcVar11;
  
  puVar10 = &stack0xfffffffffffffff0;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar7 = param_4;
  if (param_3 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    (**(code **)(param_7 + 0x10))(param_7,0,param_4,1,0);
  }
  else {
    lVar1 = param_2;
    func_0x00010c0ed100();
    lVar5 = lVar1;
    _objc_autoreleasePoolPush();
    puVar2 = param_3;
    func_0x00010b686308();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar3 = puVar2;
    if ((int)lVar1 != 0) {
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc1020();
      func_0x00010bfe9260(0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar6;
      func_0x00010b68639c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar6);
    }
    dVar9 = 0.5;
    puVar2 = puVar3;
    _UIImageJPEGRepresentation(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_autoreleasePoolPop(lVar5);
    uVar4 = param_6;
    func_0x00010c269d40(param_6);
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    func_0x00010c13e940(dVar9 - param_1,uVar4);
    _objc_release(uVar4);
    if (puVar2 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      (**(code **)(param_7 + 0x10))(param_7,0,param_4,1,0);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      (**(code **)(param_7 + 0x10))(param_7,puVar3,param_4,1,1);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  lVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  pcVar11 = FUN_1058c63d4;
  _objc_retain(puVar6);
  _objc_retain(lVar7);
  if ((puVar6 == (undefined *)0x0) || (lVar7 != 0)) {
    if (*(char *)(lVar1 + 0x68) != '\0') {
      func_0x00010c123aa0(*(undefined8 *)(lVar1 + 0x28));
    }
    if (*(char *)(lVar1 + 0x69) == '\x01') {
      lVar5 = *(long *)(lVar1 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d7aa0(*(undefined8 *)(lVar1 + 0x48));
      lVar8 = lVar5;
      func_0x00010c13aca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      if (lVar8 != 0) {
        func_0x00010c06cde0(lVar8);
        lVar5 = lVar8;
        func_0x00010c06cde0();
        puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
        if ((int)lVar5 != 0) {
          lVar5 = lVar8;
          func_0x00010bfad280(lVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf64ae0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          if (puVar2 != (undefined *)0x0) {
            FUN_1058c617c(*(undefined8 *)(lVar1 + 0x60),*(undefined8 *)(lVar1 + 0x20),puVar2,
                          *(undefined8 *)(lVar1 + 0x58),*(undefined8 *)(lVar1 + 0x30),
                          *(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x50));
            _objc_release(puVar2);
            _objc_release(lVar8);
            goto LAB_1058c655c;
          }
        }
      }
      _objc_release(lVar8);
    }
    (**(code **)(*(long *)(lVar1 + 0x50) + 0x10))
              (*(long *)(lVar1 + 0x50),0,*(undefined8 *)(lVar1 + 0x58),1,0);
  }
  else {
    if (*(char *)(lVar1 + 0x68) != '\0') {
      func_0x00010c123aa0(*(undefined8 *)(lVar1 + 0x28));
    }
    FUN_1058c617c(*(undefined8 *)(lVar1 + 0x60),*(undefined8 *)(lVar1 + 0x20),puVar6,
                  *(undefined8 *)(lVar1 + 0x58),*(undefined8 *)(lVar1 + 0x30),
                  *(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar1 + 0x50),param_8,param_9,
                  param_4,param_7,param_6,param_5,param_3,param_2,puVar10,pcVar11);
  }
LAB_1058c655c:
  _objc_release(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1058c63d4; end: 1058c657b;  */

void FUN_1058c63d4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 == 0) || (param_3 != 0)) {
    if (*(char *)(param_1 + 0x68) != '\0') {
      func_0x00010c123aa0(*(undefined8 *)(param_1 + 0x28));
    }
    if (*(char *)(param_1 + 0x69) == '\x01') {
      lVar1 = *(long *)(param_1 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d7aa0(*(undefined8 *)(param_1 + 0x48));
      lVar2 = lVar1;
      func_0x00010c13aca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar2 != 0) {
        func_0x00010c06cde0(lVar2);
        lVar1 = lVar2;
        func_0x00010c06cde0();
        puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
        if ((int)lVar1 != 0) {
          lVar1 = lVar2;
          func_0x00010bfad280(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf64ae0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar1);
          if (puVar3 != (undefined *)0x0) {
            FUN_1058c617c(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x20),puVar3,
                          *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x30),
                          *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50));
            _objc_release(puVar3);
            _objc_release(lVar2);
            goto LAB_1058c655c;
          }
        }
      }
      _objc_release(lVar2);
    }
    (**(code **)(*(long *)(param_1 + 0x50) + 0x10))
              (*(long *)(param_1 + 0x50),0,*(undefined8 *)(param_1 + 0x58),1,0);
  }
  else {
    if (*(char *)(param_1 + 0x68) != '\0') {
      func_0x00010c123aa0(*(undefined8 *)(param_1 + 0x28));
    }
    FUN_1058c617c(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x20),param_2,
                  *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x30),
                  *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50));
  }
LAB_1058c655c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058c657c; end: 1058c66b7;  */

void FUN_1058c657c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  _objc_retain(*(undefined8 *)(param_2 + 0x70));
  _objc_retain(*(undefined8 *)(param_2 + 0x78));
  __Block_object_assign(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80),7);
  __Block_object_assign(param_1 + 0x88,*(undefined8 *)(param_2 + 0x88),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x90,param_2 + 0x90);
  return;
}



/* Entry: 1058c66b8; end: 1058c68e3;  */

void FUN_1058c66b8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28af60(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _CACurrentMediaTime();
  func_0x000108017f48();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c241220(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000108017660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  uStack_70 = param_1;
  _objc_retain(uVar3);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar7);
  _objc_copyWeak(auStack_78,param_2 + 0x68);
  uVar8 = *(undefined8 *)(param_2 + 0x50);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x58);
  _objc_retain(uVar9);
  uStack_68 = *(undefined8 *)(param_2 + 0x70);
  func_0x00010bf89260(uVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  return;
}



/* Entry: 1058c68e4; end: 1058c69e7;  */

void FUN_1058c68e4(double param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  _CACurrentMediaTime();
  dVar4 = *(double *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13e940(param_1 - dVar4);
  _objc_release(uVar1);
  lVar2 = param_2 + 0x48;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c1179e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010c1341e0(lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001058c6998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x38) + 0x10))();
    return;
  }
  func_0x00010c1341e0(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001058c69e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x40) + 0x10))
            (*(long *)(param_2 + 0x40),0,*(undefined8 *)(param_2 + 0x58),1,0);
  return;
}



/* Entry: 1058c69e8; end: 1058c69ff;  */

undefined ** FUN_1058c69e8(void)

{
  return &PTR____CFConstantStringClassReference_110e0a538;
}



/* Entry: 1058c6a00; end: 1058c6af3;  */

void FUN_1058c6a00(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),7);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),7);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x68,param_2 + 0x68);
  return;
}



/* Entry: 1058c6af4; end: 1058c7103;  */

void FUN_1058c6af4(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,long param_14,undefined8 param_15)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint uStack_1e0;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  long lStack_148;
  undefined1 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  uStack_1e0 = param_7 ^ 1;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  uVar2 = param_2;
  func_0x00010bfdd480();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = 0;
  if (0 < param_4) {
    uVar1 = uStack_1e0;
  }
  if (((uVar1 & 1) == 0) && ((uVar2 & 1) != 0)) {
    uVar2 = param_2;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf8b0c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1058c9548;
    puStack_b8 = &UNK_1108bcbb0;
    _objc_retain(puVar4);
    puStack_b0 = puVar4;
    _objc_retain(param_2);
    uStack_a8 = param_2;
    _objc_retain(param_10);
    uStack_a0 = param_10;
    _objc_retain(param_5);
    uStack_98 = param_5;
    _objc_retain(param_15);
    uStack_90 = param_15;
    lStack_80 = param_4;
    _objc_retain(param_14);
    lStack_88 = param_14;
    ppuVar5 = &puStack_d0;
    _objc_retainBlock();
    _objc_initWeak(auStack_d8,param_6);
    puStack_138 = puVar8;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_1058c9910;
    puStack_120 = &UNK_1108bcc40;
    _objc_copyWeak(auStack_e0,auStack_d8);
    _objc_retain(param_11);
    uStack_118 = param_11;
    _objc_retain(param_2);
    uStack_110 = param_2;
    _objc_retain(param_13);
    uStack_108 = param_13;
    _objc_retain(param_10);
    uStack_100 = param_10;
    _objc_retain(param_5);
    uStack_f8 = param_5;
    _objc_retain(param_12);
    uStack_f0 = param_12;
    _objc_retain(ppuVar5);
    ppuVar6 = &puStack_138;
    ppuStack_e8 = ppuVar5;
    _objc_retainBlock();
    uVar7 = param_3;
    func_0x00010c06cde0();
    puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
    if ((int)uVar7 == 0) {
      uVar7 = param_9;
      func_0x00010c269d40(param_9);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28af60(uVar7);
      _objc_release(puVar8);
      _objc_release(uVar7);
      _CACurrentMediaTime();
      puVar8 = PTR_PTR_1126bf788;
      _objc_alloc();
      func_0x00010c017ba0();
      uVar7 = param_13;
      func_0x00010c11de00(param_13);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_10);
      _objc_retain(param_5);
      uStack_150 = param_1;
      _objc_copyWeak(auStack_158,auStack_d8);
      _objc_retain(ppuVar6);
      _objc_retain(param_3);
      lStack_148 = param_4;
      uStack_140 = param_8;
      _objc_retain(param_15);
      _objc_retain(param_14);
      uVar9 = param_3;
      func_0x00010bf89240(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c191300(param_6);
      _objc_release(uVar9);
      _objc_release(uVar7);
      _objc_release(puVar8);
      _objc_release(param_14);
      _objc_release(param_15);
      _objc_release(param_3);
      _objc_release(ppuVar6);
      _objc_destroyWeak(auStack_158);
      _objc_release(param_5);
      uVar7 = param_10;
    }
    else {
      uVar7 = param_3;
      func_0x00010bfad280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf64ac0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)ppuVar6[2])(ppuVar6,puVar8);
      _objc_release(puVar8);
    }
    _objc_release(uVar7);
    if ((0 < param_4) && ((param_7 & 1) != 0)) {
      (**(code **)(param_14 + 0x10))(param_14);
    }
    _objc_release(ppuVar6);
    _objc_release(ppuStack_e8);
    _objc_release(uStack_f0);
    _objc_release(uStack_f8);
    _objc_release(uStack_100);
    _objc_release(uStack_108);
    _objc_release(uStack_110);
    _objc_release(uStack_118);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_d8);
    _objc_release(ppuVar5);
    _objc_release(lStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(uStack_a8);
    _objc_release(puStack_b0);
    _objc_release(puVar4);
  }
  else {
    (**(code **)(param_14 + 0x10))(param_14);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_6);
  return;
}



/* Entry: 1058c7104; end: 1058c71ef; -[SCCachingMediaGallerySnap .cxx_destruct] */

void FUN_1058c7104(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_destroyWeak(param_1 + 0x58);
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



/* Entry: 1058c71f0; end: 1058c770f; -[SCCachingMediaGalleryLagunaContent initWithSnap:snapDetail:userSession:memoriesThumbnailLogger:spectaclesAuxiliaryContentServices:spectaclesContentDataSource:galleryLogger:memoriesCloudFS:dataObjectContext:galleryEncryptedDatabase:keyService:memoriesCachingMediaHelper:circumstanceEngine:userTrackedLogger:memoriesSnapDocThumbnailGenerator:] */

undefined8 *
FUN_1058c71f0(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126eabd8;
  puVar2 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = param_3;
    func_0x00010bf8b0c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      do {
        puVar4 = param_3;
        func_0x00010bfdd120();
        if (((ulong)puVar4 & 1) != 0) break;
        puVar5 = param_3;
        func_0x00010c080ca0();
        _objc_release(puVar3);
        puVar4 = PTR_PTR_1126af4d0;
        if (((ulong)puVar5 & 1) != 0) goto LAB_1058c7448;
        puVar3 = param_3;
        func_0x00010bf8b0c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_11;
        func_0x00010c269d40(param_11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa72e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(puVar3);
        if (puVar4 == (undefined *)0x0) {
          puVar3 = (undefined *)0x0;
          break;
        }
        puVar5 = puVar4;
        func_0x00010c080ca0();
        puVar3 = puVar4;
        if (((ulong)puVar5 & 1) != 0) break;
        _objc_release(param_3);
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        param_3 = puVar4;
      } while (puVar3 != (undefined *)0x0);
      _objc_release(puVar3);
    }
LAB_1058c7448:
    _objc_retain(param_3);
    uVar6 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar6);
    _objc_retain(param_4);
    uVar6 = puVar2[2];
    puVar2[2] = param_4;
    _objc_release(uVar6);
    uVar6 = param_8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c2422a0();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if ((int)uVar7 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e0a578;
    }
    _objc_retain(ppuVar1);
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = param_3;
    func_0x00010c241220();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    func_0x00010bdc2600();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar2[3];
    puVar2[3] = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_retain(param_5);
    uVar6 = puVar2[4];
    puVar2[4] = param_5;
    _objc_release(uVar6);
    _objc_retain(param_6);
    uVar6 = puVar2[5];
    puVar2[5] = param_6;
    _objc_release(uVar6);
    _objc_retain(param_7);
    uVar6 = puVar2[6];
    puVar2[6] = param_7;
    _objc_release(uVar6);
    _objc_retain(param_8);
    uVar6 = puVar2[7];
    puVar2[7] = param_8;
    _objc_release(uVar6);
    _objc_retain(param_9);
    uVar6 = puVar2[8];
    puVar2[8] = param_9;
    _objc_release(uVar6);
    _objc_retain(param_10);
    uVar6 = puVar2[9];
    puVar2[9] = param_10;
    _objc_release(uVar6);
    _objc_retain(param_11);
    uVar6 = puVar2[10];
    puVar2[10] = param_11;
    _objc_release(uVar6);
    _objc_retain(param_12);
    uVar6 = puVar2[0xb];
    puVar2[0xb] = param_12;
    _objc_release(uVar6);
    _objc_retain(param_13);
    uVar6 = puVar2[0xc];
    puVar2[0xc] = param_13;
    _objc_release(uVar6);
    _objc_storeWeak(puVar2 + 0xd,param_14);
    _objc_retain(param_15);
    uVar6 = puVar2[0xe];
    puVar2[0xe] = param_15;
    _objc_release(uVar6);
    _objc_retain(param_16);
    uVar6 = puVar2[0xf];
    puVar2[0xf] = param_16;
    _objc_release(uVar6);
    _objc_retain(param_17);
    uVar6 = puVar2[0x10];
    puVar2[0x10] = param_17;
    _objc_release(uVar6);
    uVar6 = param_15;
    func_0x00010bf1f440();
    *(char *)(puVar2 + 0x11) = (char)uVar6;
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 1058c7710; end: 1058c7737; -[SCCachingMediaGalleryLagunaContent UUID] */

void FUN_1058c7710(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058c7738; end: 1058c773f; -[SCCachingMediaGalleryLagunaContent maxSourceLevel] */

undefined8 FUN_1058c7738(void)

{
  return 1;
}



/* Entry: 1058c7740; end: 1058c7853; -[SCCachingMediaGalleryLagunaContent higherSourceLevelAvailable:] */

ulong FUN_1058c7740(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_3 == 1) {
    return 1;
  }
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x48);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c13a8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c06cde0();
    _objc_release(uVar5);
    _objc_release(uVar3);
    return uVar4 & 0xffffffff;
  }
  uVar4 = *(ulong *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf4c9c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010b5fa088();
  func_0x00010b5fa4c8();
  if (iVar1 == 0) {
    uVar3 = 1;
    uVar4 = uVar5;
    func_0x00010c06ce00(uVar5,param_2,1);
    if ((uVar4 & 1) != 0) goto LAB_1058c7838;
  }
  else {
    uVar4 = uVar5;
    func_0x00010c06ce00(uVar5,param_2,2);
    if ((uVar4 & 1) != 0) {
      uVar3 = 1;
      goto LAB_1058c7838;
    }
  }
  uVar3 = 0;
LAB_1058c7838:
  _objc_release(uVar5);
  return uVar3;
}



/* Entry: 1058c7854; end: 1058c785b; -[SCCachingMediaGalleryLagunaContent imageFormat] */

undefined8 FUN_1058c7854(void)

{
  return 0;
}



/* Entry: 1058c785c; end: 1058c7a63; -[SCCachingMediaGalleryLagunaContent mediaEncryption] */

void FUN_1058c785c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uVar6 = 0x3032000000;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_1058c4a18;
    uStack_60 = 0x1058c4a28;
    uStack_58 = 0;
    _CACurrentMediaTime();
    uVar2 = 0;
    _dispatch_semaphore_create();
    _objc_initWeak(auStack_88,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bf788;
    _objc_alloc(PTR_PTR_1126bf788);
    func_0x00010c017ba0();
    uVar5 = 0;
    func_0x0001000819a8(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_98,auStack_88);
    uStack_90 = uVar6;
    _objc_retain(uVar2);
    func_0x00010c135a60(uVar3);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _dispatch_semaphore_wait(uVar2,0xffffffffffffffff);
    uVar3 = puStack_78[5];
    _objc_retain(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_88);
    _objc_release(uVar2);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1058c7a64; end: 1058c7bb7;  */

void FUN_1058c7a64(double param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1058c7b98;
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c13e940(param_1 - *(double *)(param_2 + 0x38),uVar2);
  _objc_release(uVar2);
  lVar3 = param_3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
LAB_1058c7b88:
    _objc_release(lVar3);
  }
  else {
    lVar4 = param_3;
    func_0x00010bdc1800();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar6 != 0) {
      puVar5 = PTR_PTR_1126bfb68;
      _objc_alloc();
      lVar3 = param_3;
      func_0x00010c086560(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010bdc1800(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00fd60();
      lVar6 = *(long *)(*(long *)(param_2 + 0x28) + 8);
      uVar2 = *(undefined8 *)(lVar6 + 0x28);
      *(undefined **)(lVar6 + 0x28) = puVar5;
      _objc_release(uVar2);
      _objc_release(lVar4);
      goto LAB_1058c7b88;
    }
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_2 + 0x20));
LAB_1058c7b98:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058c7bb8; end: 1058c800f; -[SCCachingMediaGalleryLagunaContent cachingMediaManager:requiredSourceLevel:requestOptions:atIndex:sourceImagesResultHandler:] */

void FUN_1058c7bb8(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar5 = *(long *)(param_1 + 8);
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_1 + 8);
    func_0x00010b5fa088();
    if (lVar5 - 2U < 0xb) {
      puVar6 = *(undefined **)(param_1 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf4c9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      if (param_4 < 1) {
LAB_1058c7f10:
        puVar6 = PTR_PTR_1126bfb70;
        func_0x00010bfe8400(PTR_PTR_1126bfb70);
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_a0,puVar7);
        puVar9 = puVar6;
        func_0x00010c11de00(puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_d8,auStack_a0);
        _objc_retain(param_7);
        puVar12 = puVar7;
        func_0x00010bf89140(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_7);
        _objc_destroyWeak(auStack_d8);
        _objc_release(puVar9);
        _objc_destroyWeak(auStack_a0);
      }
      else {
        iVar4 = (int)*(undefined8 *)(param_1 + 8);
        func_0x00010b5fa088();
        func_0x00010b5fa4c8();
        if (iVar4 == 0) {
          puVar6 = puVar7;
          func_0x00010c06ce00();
          if ((int)puVar6 == 0) goto LAB_1058c7f10;
          puVar6 = PTR_PTR_1126bfb70;
          func_0x00010c29a8e0(PTR_PTR_1126bfb70);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = auStack_a0;
          _objc_initWeak(puVar8,param_1);
          func_0x000108d4ad38();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar6;
          func_0x00010c11de00(puVar6);
          _objc_retainAutoreleasedReturnValue();
          puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c8 = 0xc2000000;
          pcStack_c0 = FUN_1058c80a8;
          puStack_b8 = &UNK_1108bca00;
          _objc_copyWeak(auStack_a8,auStack_a0);
          _objc_retain(param_7);
          uStack_b0 = param_7;
          func_0x00010c134720(puVar7);
          _objc_release(puVar12);
          _objc_release(puVar8);
          _objc_release(uStack_b0);
          _objc_destroyWeak(auStack_a8);
          _objc_destroyWeak(auStack_a0);
        }
        else {
          puVar6 = puVar7;
          func_0x00010c1357c0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 == (undefined *)0x0) goto LAB_1058c7f10;
          lVar5 = *(long *)(param_1 + 8);
          func_0x00010b5fa088();
          if (lVar5 == 7) {
LAB_1058c7cbc:
            func_0x00010bde3b00();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            puVar6 = param_1;
          }
          else {
            lVar5 = *(long *)(param_1 + 8);
            func_0x00010b5fa088();
            if (lVar5 == 9) goto LAB_1058c7cbc;
          }
          puVar12 = PTR_PTR_1126bfb70;
          func_0x00010bfe8400(PTR_PTR_1126bfb70);
          _objc_retainAutoreleasedReturnValue();
          puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_90 = 0xc2000000;
          pcStack_88 = FUN_1058c8010;
          puStack_80 = &UNK_11084aaa8;
          _objc_retain(param_7);
          puStack_78 = puVar6;
          uStack_70 = param_7;
          _objc_retain(puVar6);
          func_0x00010c0f7fc0(puVar12);
          _objc_release(puStack_78);
          _objc_release(uStack_70);
          _objc_release(puVar12);
        }
        puVar12 = (undefined *)0x0;
      }
      _objc_release(puVar6);
      goto LAB_1058c7dec;
    }
  }
  else {
    _objc_release();
  }
  puVar12 = *(undefined **)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  uVar16 = *(undefined8 *)(param_1 + 0x48);
  uVar15 = *(undefined8 *)(param_1 + 0x40);
  uVar14 = *(undefined8 *)(param_1 + 0x58);
  uVar13 = *(undefined8 *)(param_1 + 0x50);
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  puVar7 = param_1 + 0x68;
  _objc_loadWeakRetained();
  FUN_1058c4d70(puVar12,uVar2,param_4,param_5,param_6,uVar1,uVar3,uVar10,uVar15,uVar16,uVar13,uVar14
                ,uVar11,puVar7,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),0);
  _objc_retainAutoreleasedReturnValue();
LAB_1058c7dec:
  _objc_release(puVar7);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1058c8010; end: 1058c80a7;  */

void FUN_1058c8010(undefined8 param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_3 + 0x20);
  lVar10 = *(long *)(param_3 + 0x28);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&uStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = 1;
  puVar5 = puVar6;
  (**(code **)(lVar10 + 0x10))(lVar10,puVar6,1,1,1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar5;
  _objc_retain(puVar5);
  puVar1 = puVar6 + 0x28;
  _objc_loadWeakRetained();
  if (puVar1 == (undefined *)0x0) goto LAB_1058c82bc;
  if (puVar5 != (undefined *)0x0) {
    puVar8 = PTR_PTR_1126ba150;
    func_0x00010c22e420();
    if ((int)puVar8 == 0) {
      puVar2 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
      _objc_alloc();
      func_0x00010bff41a0();
      func_0x00010c169b80();
      func_0x00010c1ec3e0(puVar2);
      func_0x00010c1ec3c0(puVar2);
      puVar8 = puVar2;
      func_0x00010bf51e60();
      _objc_retain(0);
      if (puVar8 == (undefined *)0x0) {
        _CGImageRelease(0);
LAB_1058c8290:
        puVar8 = (undefined *)0x0;
        lVar9 = 0;
        (**(code **)(*(long *)(puVar6 + 0x20) + 0x10))(*(long *)(puVar6 + 0x20),0,0,1,0);
      }
      else {
        puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
        _objc_alloc();
        func_0x00010bffa220();
        _CGImageRelease(puVar8);
        if (puVar3 == (undefined *)0x0) goto LAB_1058c8290;
        lVar9 = *(long *)(puVar1 + 8);
        func_0x00010b5fa088();
        if (lVar9 == 8) {
LAB_1058c820c:
          puVar4 = puVar1;
          func_0x00010bde3b00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
        }
        else {
          lVar9 = *(long *)(puVar1 + 8);
          func_0x00010b5fa088();
          puVar4 = puVar3;
          if (lVar9 == 10) goto LAB_1058c820c;
        }
        lVar11 = *(long *)(puVar6 + 0x20);
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = 1;
        puVar8 = puVar6;
        (**(code **)(lVar11 + 0x10))(lVar11,puVar6,1,1,1);
        _objc_release(puVar6);
        _objc_release(puVar4);
      }
      _objc_release(0);
      _objc_release(puVar2);
      goto LAB_1058c82bc;
    }
  }
  puVar8 = (undefined *)0x0;
  lVar9 = 0;
  (**(code **)(*(long *)(puVar6 + 0x20) + 0x10))(*(long *)(puVar6 + 0x20),0,0,1,0);
LAB_1058c82bc:
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (puVar8 < (undefined *)0x2) {
    puVar6 = puVar5 + 0x30;
    _objc_loadWeakRetained();
    puVar1 = puVar6;
    func_0x00010c1357c0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = *(long *)(puVar5 + 0x28);
    if (puVar1 == (undefined *)0x0) {
      lVar9 = 0;
      (**(code **)(lVar11 + 0x10))(lVar11,0,0,1,1);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = 0;
      (**(code **)(lVar11 + 0x10))(lVar11,puVar5,0,1,1);
      _objc_release(puVar5);
    }
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
      return;
    }
  }
  else {
    puVar6 = *(undefined **)(puVar5 + 0x28);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x0001058c83e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar6 + 0x10))(puVar6,0,0,1,0);
      return;
    }
  }
  ___stack_chk_fail();
  _objc_retain(lVar9);
  puVar5 = PTR_PTR_1126bfb80;
  _objc_alloc();
  uVar7 = *(undefined8 *)(puVar6 + 0x30);
  func_0x00010c1307e0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046fe0();
  _objc_release(uVar12);
  _objc_release(uVar7);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bfb2080();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010befa120(puVar6);
  }
  puVar8 = PTR_PTR_1126b26c8;
  func_0x00010c22b820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar6);
  _objc_release();
  _dispatch_group_create();
  puStack_198 = &uStack_1a0;
  uStack_1a0 = 0;
  uVar12 = 0x3032000000;
  uStack_190 = 0x3032000000;
  pcStack_188 = FUN_1058c4a18;
  uStack_180 = 0x1058c4a28;
  uStack_178 = 0;
  _dispatch_group_enter();
  puVar2 = PTR_PTR_1126bf508;
  _objc_alloc(PTR_PTR_1126bf508);
  puVar3 = PTR_PTR_1126bf4d0;
  func_0x00010c22bec0(PTR_PTR_1126bf4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0(lVar9);
  func_0x00010c23d0a0(lVar9);
  puVar4 = puVar6;
  func_0x00010bf51e00(puVar6);
  func_0x00010c03c680(uVar12,param_2 * 0.5,puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_retain(puVar8);
  func_0x00010c2505e0(puVar2);
  _dispatch_group_wait(puVar8,0xffffffffffffffff);
  lVar10 = lVar9;
  if (puStack_198[5] != 0) {
    lVar10 = puStack_198[5];
  }
  _objc_retain(lVar10);
  _objc_release(puVar8);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_1a0,8);
  _objc_release(uStack_178);
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
  return;
}



/* Entry: 1058c80a8; end: 1058c8303;  */

void FUN_1058c80a8(undefined8 param_1,double param_2,long param_3,undefined *param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_4;
  _objc_retain(param_4);
  puVar4 = (undefined *)(param_3 + 0x28);
  _objc_loadWeakRetained();
  if (puVar4 == (undefined *)0x0) goto LAB_1058c82bc;
  if (param_4 != (undefined *)0x0) {
    puVar8 = PTR_PTR_1126ba150;
    func_0x00010c22e420();
    if ((int)puVar8 == 0) {
      puVar1 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
      _objc_alloc();
      func_0x00010bff41a0();
      func_0x00010c169b80();
      func_0x00010c1ec3e0(puVar1);
      func_0x00010c1ec3c0(puVar1);
      puVar8 = puVar1;
      func_0x00010bf51e60();
      _objc_retain(0);
      if (puVar8 == (undefined *)0x0) {
        _CGImageRelease(0);
LAB_1058c8290:
        puVar8 = (undefined *)0x0;
        param_5 = 0;
        (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0,0,1,0);
      }
      else {
        puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
        _objc_alloc();
        func_0x00010bffa220();
        _CGImageRelease(puVar8);
        if (puVar2 == (undefined *)0x0) goto LAB_1058c8290;
        lVar10 = *(long *)(puVar4 + 8);
        func_0x00010b5fa088();
        if (lVar10 == 8) {
LAB_1058c820c:
          puVar3 = puVar4;
          func_0x00010bde3b00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
        }
        else {
          lVar10 = *(long *)(puVar4 + 8);
          func_0x00010b5fa088();
          puVar3 = puVar2;
          if (lVar10 == 10) goto LAB_1058c820c;
        }
        lVar10 = *(long *)(param_3 + 0x20);
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        param_5 = 1;
        puVar8 = puVar2;
        (**(code **)(lVar10 + 0x10))(lVar10,puVar2,1,1,1);
        _objc_release(puVar2);
        _objc_release(puVar3);
      }
      _objc_release(0);
      _objc_release(puVar1);
      goto LAB_1058c82bc;
    }
  }
  puVar8 = (undefined *)0x0;
  param_5 = 0;
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0,0,1,0);
LAB_1058c82bc:
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (puVar8 < (undefined *)0x2) {
    puVar4 = param_4 + 0x30;
    _objc_loadWeakRetained();
    puVar8 = puVar4;
    func_0x00010c1357c0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = *(long *)(param_4 + 0x28);
    if (puVar8 == (undefined *)0x0) {
      param_5 = 0;
      (**(code **)(lVar10 + 0x10))(lVar10,0,0,1,1);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      param_5 = 0;
      (**(code **)(lVar10 + 0x10))(lVar10,puVar1,0,1,1);
      _objc_release(puVar1);
    }
    _objc_release(puVar8);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      return;
    }
  }
  else {
    puVar4 = *(undefined **)(param_4 + 0x28);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x0001058c83e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar4 + 0x10))(puVar4,0,0,1,0);
      return;
    }
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  puVar8 = PTR_PTR_1126bfb80;
  _objc_alloc();
  uVar5 = *(undefined8 *)(puVar4 + 0x30);
  func_0x00010c1307e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046fe0();
  _objc_release(uVar11);
  _objc_release(uVar5);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  func_0x00010bfb2080();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    func_0x00010befa120(puVar4);
  }
  puVar2 = PTR_PTR_1126b26c8;
  func_0x00010c22b820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release();
  _dispatch_group_create();
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uVar11 = 0x3032000000;
  uStack_160 = 0x3032000000;
  pcStack_158 = FUN_1058c4a18;
  uStack_150 = 0x1058c4a28;
  uStack_148 = 0;
  _dispatch_group_enter();
  puVar3 = PTR_PTR_1126bf508;
  _objc_alloc(PTR_PTR_1126bf508);
  puVar6 = PTR_PTR_1126bf4d0;
  func_0x00010c22bec0(PTR_PTR_1126bf4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0(param_5);
  func_0x00010c23d0a0(param_5);
  puVar7 = puVar4;
  func_0x00010bf51e00(puVar4);
  func_0x00010c03c680(uVar11,param_2 * 0.5,puVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_retain(puVar2);
  func_0x00010c2505e0(puVar3);
  _dispatch_group_wait(puVar2,0xffffffffffffffff);
  lVar9 = param_5;
  if (puStack_168[5] != 0) {
    lVar9 = puStack_168[5];
  }
  _objc_retain(lVar9);
  _objc_release(puVar2);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_170,8);
  _objc_release(uStack_148);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar8);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return;
}



/* Entry: 1058c8304; end: 1058c8447;  */

void FUN_1058c8304(undefined8 param_1,double param_2,long param_3,ulong param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 < 2) {
    lVar3 = param_3 + 0x30;
    _objc_loadWeakRetained();
    lVar1 = lVar3;
    func_0x00010c1357c0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = *(long *)(param_3 + 0x28);
    if (lVar1 == 0) {
      param_5 = 0;
      (**(code **)(lVar12 + 0x10))(lVar12,0,0,1,1);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      param_5 = 0;
      (**(code **)(lVar12 + 0x10))(lVar12,puVar2,0,1,1);
      _objc_release(puVar2);
    }
    _objc_release(lVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      return;
    }
  }
  else {
    lVar3 = *(long *)(param_3 + 0x28);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x0001058c83e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x10))(lVar3,0,0,1,0);
      return;
    }
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126bfb80;
  _objc_alloc();
  uVar4 = *(undefined8 *)(lVar3 + 0x30);
  func_0x00010c1307e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046fe0();
  _objc_release(uVar13);
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bfb2080();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    func_0x00010befa120(puVar5);
  }
  puVar7 = PTR_PTR_1126b26c8;
  func_0x00010c22b820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar5);
  _objc_release();
  _dispatch_group_create();
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uVar13 = 0x3032000000;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_1058c4a18;
  uStack_b0 = 0x1058c4a28;
  uStack_a8 = 0;
  _dispatch_group_enter();
  puVar8 = PTR_PTR_1126bf508;
  _objc_alloc(PTR_PTR_1126bf508);
  puVar9 = PTR_PTR_1126bf4d0;
  func_0x00010c22bec0(PTR_PTR_1126bf4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0(param_5);
  func_0x00010c23d0a0(param_5);
  puVar10 = puVar5;
  func_0x00010bf51e00(puVar5);
  func_0x00010c03c680(uVar13,param_2 * 0.5,puVar8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_retain(puVar7);
  func_0x00010c2505e0(puVar8);
  _dispatch_group_wait(puVar7,0xffffffffffffffff);
  lVar11 = param_5;
  if (puStack_c8[5] != 0) {
    lVar11 = puStack_c8[5];
  }
  _objc_retain(lVar11);
  _objc_release(puVar7);
  _objc_release(puVar8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
  return;
}



/* Entry: 1058c8448; end: 1058c8733; -[SCCachingMediaGalleryLagunaContent _composedMediaForSpectaclesImage:] */

void FUN_1058c8448(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126bfb80;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c1307e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046fe0();
  _objc_release(uVar10);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bfb2080();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 != (undefined *)0x0) {
    func_0x00010befa120(puVar4);
  }
  puVar6 = PTR_PTR_1126b26c8;
  func_0x00010c22b820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4);
  _objc_release();
  _dispatch_group_create();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uVar10 = 0x3032000000;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1058c4a18;
  uStack_70 = 0x1058c4a28;
  uStack_68 = 0;
  _dispatch_group_enter();
  puVar7 = PTR_PTR_1126bf508;
  _objc_alloc(PTR_PTR_1126bf508);
  puVar8 = PTR_PTR_1126bf4d0;
  func_0x00010c22bec0(PTR_PTR_1126bf4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0(param_5);
  func_0x00010c23d0a0(param_5);
  puVar9 = puVar4;
  func_0x00010bf51e00(puVar4);
  func_0x00010c03c680(uVar10,param_2 * 0.5,puVar7);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_retain(puVar6);
  func_0x00010c2505e0(puVar7);
  _dispatch_group_wait(puVar6,0xffffffffffffffff);
  lVar1 = param_5;
  if (puStack_88[5] != 0) {
    lVar1 = puStack_88[5];
  }
  _objc_retain(lVar1);
  _objc_release(puVar6);
  _objc_release(puVar7);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1058c8734; end: 1058c878f;  */

void FUN_1058c8734(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058c8790; end: 1058c8863; -[SCCachingMediaGalleryLagunaContent .cxx_destruct] */

void FUN_1058c8790(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 1058c8864; end: 1058c9113;  */

undefined ** FUN_1058c8864(double param_1,long param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined **)(param_2 + 0x78);
  _objc_loadWeakRetained();
  ppuVar3 = ppuVar2;
  func_0x00010c06e0e0();
  _objc_release(ppuVar2);
  if (((ulong)ppuVar3 & 1) != 0) goto LAB_1058c90d4;
  ppuVar2 = (undefined **)(param_2 + 0x78);
  _objc_loadWeakRetained(ppuVar2);
  ppuVar3 = ppuVar2;
  func_0x00010c1179e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1341e0();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_autoreleasePoolPush();
  puVar13 = *(undefined **)(param_2 + 0x28);
  _objc_retain(puVar13);
  if (*(char *)(param_2 + 0x90) == '\x01') {
    puVar15 = puVar13;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR_PTR_1126bc7b8;
    if (puVar15 == (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa7160(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(uVar4);
      puVar13 = puVar5;
    }
  }
  _CACurrentMediaTime();
  uVar6 = *(ulong *)(param_2 + 0x20);
  func_0x00010b5fa088();
  if (uVar6 < 0xd) {
    if ((1L << (uVar6 & 0x3f) & 0x1566U) == 0) {
      if (*(char *)(param_2 + 0x91) == '\x01') {
        lVar7 = *(long *)(param_2 + 0x20);
        func_0x00010c0e0160();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar5 = PTR_PTR_1126af4c0;
        if (lVar7 != 0) {
          uVar4 = *(undefined8 *)(param_2 + 0x30);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7060();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          puVar8 = puVar5;
          func_0x00010bfbdda0();
          func_0x00010b5fa33c();
          puVar15 = PTR_PTR_1126bc800;
          if (puVar8 == (undefined *)0x8) {
            uVar4 = *(undefined8 *)(param_2 + 0x30);
            func_0x00010c269d40(uVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bfa7180();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar4);
            puVar8 = puVar15;
            func_0x00010c23ff80();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x000108020568();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar8);
            _objc_release(puVar15);
            _objc_release(puVar5);
            if (puVar9 != (undefined *)0x0) {
              uVar4 = *(undefined8 *)(param_2 + 0x38);
              uVar10 = *(undefined8 *)(param_2 + 0x40);
              func_0x00010c269d40(uVar10);
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar10;
              func_0x00010bfc04e0();
              _objc_retainAutoreleasedReturnValue();
              puVar15 = *(undefined **)(param_2 + 0x20);
              _objc_retain(puVar15);
              uVar16 = *(undefined8 *)(param_2 + 0x50);
              _objc_retain(uVar16);
              uVar17 = *(undefined8 *)(param_2 + 0x58);
              _objc_retain(uVar17);
              uVar14 = *(undefined8 *)(param_2 + 0x70);
              _objc_retain(uVar14);
              func_0x00010bfc05e0(uVar4);
              _objc_release(uVar11);
              _objc_release(uVar10);
              _objc_release(uVar14);
              _objc_release(uVar17);
              _objc_release(uVar16);
              goto LAB_1058c90b8;
            }
          }
          else {
            _objc_release(puVar5);
          }
        }
      }
      puVar15 = *(undefined **)(param_2 + 0x40);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar13;
      func_0x00010c0ef4a0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar15;
      func_0x00010bfbf380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar15);
      if (puVar9 != (undefined *)0x0) {
        puVar5 = puVar9;
        _objc_retainAutorelease();
        func_0x00010bdc1020();
        if (puVar5 != (undefined *)0x0) {
          iVar1 = (int)*(undefined8 *)(param_2 + 0x20);
          func_0x00010c0ed100();
          _objc_retain(puVar9);
          puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
          puVar15 = puVar9;
          if (iVar1 != 0) {
            _objc_retainAutorelease(puVar9);
            func_0x00010bdc1020();
            func_0x00010bfe9260(0x3ff0000000000000);
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar5;
            func_0x00010b68639c();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
            _objc_release(puVar5);
          }
          dVar18 = 0.5;
          puVar5 = puVar15;
          _UIImageJPEGRepresentation(0x3fe0000000000000);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = *(undefined8 *)(param_2 + 0x58);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          _CACurrentMediaTime();
          func_0x00010c13e940(dVar18 - param_1,uVar4);
          _objc_release(uVar4);
          if (puVar5 == (undefined *)0x0) {
            uVar4 = *(undefined8 *)(param_2 + 0x20);
            func_0x00010c241220();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x000108e00074(&PTR____CFConstantStringClassReference_110e0a5b8,
                                &PTR____CFConstantStringClassReference_110e0a5d8,puVar8,
                                *(undefined8 *)(param_2 + 0x68));
            _objc_release(puVar8);
            _objc_release(uVar4);
            (**(code **)(*(long *)(param_2 + 0x70) + 0x10))
                      (*(long *)(param_2 + 0x70),0,*(undefined8 *)(param_2 + 0x80),1,1);
          }
          else {
            lVar7 = *(long *)(param_2 + 0x70);
            puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(lVar7 + 0x10))(lVar7,puVar8,*(undefined8 *)(param_2 + 0x80),1,1);
            _objc_release(puVar8);
          }
          _objc_release(puVar5);
LAB_1058c90b8:
          _objc_release(puVar15);
          goto LAB_1058c90c0;
        }
      }
      (**(code **)(*(long *)(param_2 + 0x70) + 0x10))
                (*(long *)(param_2 + 0x70),0,*(undefined8 *)(param_2 + 0x80),1,0);
    }
    else {
      lVar7 = *(long *)(param_2 + 0x20);
      func_0x00010c0e0160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar5 = PTR_PTR_1126af4c0;
      if (lVar7 != 0) {
        uVar4 = *(undefined8 *)(param_2 + 0x30);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa7060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        puVar8 = puVar5;
        func_0x00010bfbdda0();
        func_0x00010b5fa33c();
        puVar15 = PTR_PTR_1126bc800;
        if (puVar8 == (undefined *)0x8) {
          uVar4 = *(undefined8 *)(param_2 + 0x30);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa7180();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          puVar8 = puVar15;
          func_0x00010c23ff80();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar8;
          func_0x000108020568();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_release(puVar15);
          _objc_release(puVar5);
          if (puVar9 != (undefined *)0x0) {
            uVar4 = *(undefined8 *)(param_2 + 0x38);
            uVar10 = *(undefined8 *)(param_2 + 0x40);
            func_0x00010c269d40(uVar10);
            _objc_retainAutoreleasedReturnValue();
            uVar11 = uVar10;
            func_0x00010bfc04e0();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = *(undefined **)(param_2 + 0x20);
            _objc_retain(puVar15);
            uVar16 = *(undefined8 *)(param_2 + 0x50);
            _objc_retain(uVar16);
            uVar17 = *(undefined8 *)(param_2 + 0x58);
            _objc_retain(uVar17);
            uVar14 = *(undefined8 *)(param_2 + 0x70);
            _objc_retain(uVar14);
            func_0x00010bfc05e0(uVar4);
            _objc_release(uVar11);
            _objc_release(uVar10);
            _objc_release(uVar14);
            _objc_release(uVar17);
            _objc_release(uVar16);
            goto LAB_1058c90b8;
          }
        }
        else {
          _objc_release(puVar5);
        }
      }
      if (*(long *)(param_2 + 0x88) != 0) goto LAB_1058c8e44;
      puVar15 = *(undefined **)(param_2 + 0x40);
      func_0x00010c269d40(puVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar13;
      func_0x00010c0ef4a0(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar15;
      func_0x00010bfbf340(puVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar15);
      FUN_1058c617c(param_1,*(undefined8 *)(param_2 + 0x20),puVar9,*(undefined8 *)(param_2 + 0x80),
                    *(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),
                    *(undefined8 *)(param_2 + 0x70));
    }
LAB_1058c90c0:
    _objc_release(puVar9);
  }
  else if (uVar6 == 9999) {
LAB_1058c8e44:
    (**(code **)(*(long *)(param_2 + 0x70) + 0x10))
              (*(long *)(param_2 + 0x70),0,*(undefined8 *)(param_2 + 0x80),1,0);
  }
  _objc_release(puVar13);
  _objc_autoreleasePoolPop(ppuVar2);
LAB_1058c90d4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    return &PTR____CFConstantStringClassReference_110e0a4d8;
  }
  return ppuVar2;
}



/* Entry: 1058c9114; end: 1058c9197;  */

undefined ** FUN_1058c9114(void)

{
  return &PTR____CFConstantStringClassReference_110e0a4d8;
}



/* Entry: 1058c9198; end: 1058c921f;  */

void FUN_1058c9198(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  _objc_retain(*(undefined8 *)(param_2 + 0x60));
  _objc_retain(*(undefined8 *)(param_2 + 0x68));
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x78,param_2 + 0x78);
  return;
}



/* Entry: 1058c9220; end: 1058c9377;  */

void FUN_1058c9220(double param_1,long param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  dVar4 = param_1;
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c13e940(dVar4 - param_1,uVar1);
  _objc_release(uVar1);
  if (param_3 != 0) {
    func_0x000108019bb0(*(undefined8 *)(param_2 + 0x20));
    lVar2 = param_2 + 0x48;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c1179e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1341e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001058c92e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x38) + 0x10))();
    return;
  }
  if (param_4 != 0) {
    lVar2 = param_2 + 0x48;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c1179e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1341e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001058c935c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x40) + 0x10))
              (*(long *)(param_2 + 0x40),0,*(undefined8 *)(param_2 + 0x50),1,0);
    return;
  }
  return;
}



/* Entry: 1058c9378; end: 1058c938f;  */

undefined ** FUN_1058c9378(void)

{
  return &PTR____CFConstantStringClassReference_110e0a538;
}



/* Entry: 1058c9390; end: 1058c951f;  */

void FUN_1058c9390(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28af60(uVar1,param_3,uVar3,&PTR____CFConstantStringClassReference_110e0a4f8,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  puVar2 = PTR_PTR_1126bf788;
  _objc_alloc(PTR_PTR_1126bf788);
  func_0x00010c017ba0();
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1058c9520;
  puStack_70 = &UNK_1108bcb80;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  uStack_68 = uVar4;
  _objc_retain(uVar5);
  uStack_60 = uVar5;
  uStack_58 = param_1;
  func_0x00010bf89240(uVar3,param_3,0,puVar2,0,uVar1,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  param_2 = param_2 + 0x50;
  _objc_loadWeakRetained(param_2);
  func_0x00010c191300();
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(puVar2);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  return;
}



/* Entry: 1058c9520; end: 1058c9547;  */

void FUN_1058c9520(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001058c9544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(undefined8 *)(param_1 + 0x30),*(long *)(param_1 + 0x28),param_2 == 0,param_2 == 2);
  return;
}



/* Entry: 1058c9548; end: 1058c990f;  */

void FUN_1058c9548(long param_1,undefined *param_2,long param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  lVar12 = param_3;
  func_0x00010c08fa60();
  puVar14 = param_2;
  if ((lVar12 != 0) && (lVar12 = param_4, func_0x00010c08fa60(), lVar12 != 0)) {
    func_0x00010c156c60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar14;
    func_0x00010b686490();
    if ((((ulong)puVar2 & 1) == 0) &&
       ((puVar2 = puVar14, func_0x00010c105b00(), (undefined *)0x3 < puVar2 + -5 &&
        (puVar2 != (undefined *)0x0)))) {
      _objc_retain(param_2);
      _objc_release(puVar14);
      puVar2 = param_2;
      func_0x00010b686490();
      puVar14 = param_2;
      if ((((ulong)puVar2 & 1) == 0) &&
         ((puVar2 = param_2, func_0x00010c105b00(), (undefined *)0x3 < puVar2 + -5 &&
          (puVar2 != (undefined *)0x0)))) {
        _objc_release(param_2);
        puVar14 = (undefined *)0x0;
      }
    }
    _objc_release(param_2);
  }
  if (puVar14 != (undefined *)0x0) {
    puVar9 = (undefined *)0x1;
    puVar2 = puVar14;
    func_0x00010b6865cc();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bf529e0();
    if (puVar2 != (undefined *)0x0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
      func_0x00010c0ed100();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar3);
      puVar9 = puVar3;
      func_0x00010bf52a60();
      lVar12 = lRam0000000000000000;
      while (puVar9 != (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar12) {
            _objc_enumerationMutation(puVar3);
          }
          puVar20 = *(undefined **)((long)puVar11 * 8);
          _objc_retain(puVar20);
          puVar5 = puVar20;
          if (puVar20 != (undefined *)0x0 && iVar1 != 0) {
            puVar4 = puVar20;
            func_0x00010b686308(puVar20);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
            _objc_retainAutorelease();
            func_0x00010bdc1020();
            func_0x00010bfe9260(0x3ff0000000000000);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010b68639c();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            puVar5 = puVar6;
            _UIImageJPEGRepresentation();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar20);
            _objc_release(puVar6);
            _objc_release(puVar4);
          }
          if (puVar5 != (undefined *)0x0) {
            func_0x00010befa120(puVar2);
          }
          _objc_release(puVar5);
          puVar11 = puVar11 + 1;
        } while (puVar9 != puVar11);
        puVar9 = puVar3;
        func_0x00010bf52a60();
      }
      _objc_release(puVar3);
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _CACurrentMediaTime();
      func_0x00010c13e940(uVar7);
      _objc_release(uVar7);
      lVar12 = *(long *)(param_1 + 0x40);
      puVar11 = puVar2;
      func_0x00010bf51e00();
      puVar9 = puVar11;
      (**(code **)(lVar12 + 0x10))(lVar12,puVar11,0,1,1);
      _objc_release(puVar11);
      _objc_release(puVar2);
      _objc_release(puVar3);
      goto LAB_1058c98b8;
    }
    _objc_release(puVar3);
  }
  if (*(long *)(param_1 + 0x50) < 1) {
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  }
LAB_1058c98b8:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  puVar2 = puVar14 + 0x58;
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010c06e0e0();
  _objc_release(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    _CACurrentMediaTime();
    uVar7 = *(undefined8 *)(puVar14 + 0x20);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bf788;
    _objc_alloc(PTR_PTR_1126bf788);
    func_0x00010c017ba0();
    uVar8 = *(undefined8 *)(puVar14 + 0x30);
    func_0x00010c11de00(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar15 = *(undefined8 *)(puVar14 + 0x38);
    _objc_retain(uVar15);
    uVar16 = *(undefined8 *)(puVar14 + 0x40);
    _objc_retain(uVar16);
    uVar17 = *(undefined8 *)(puVar14 + 0x48);
    _objc_retain(uVar17);
    uVar18 = *(undefined8 *)(puVar14 + 0x30);
    _objc_retain(uVar18);
    uVar19 = *(undefined8 *)(puVar14 + 0x28);
    _objc_retain(uVar19);
    uVar13 = *(undefined8 *)(puVar14 + 0x50);
    _objc_retain(uVar13);
    _objc_retain(puVar9);
    func_0x00010c135a60(uVar7);
    _objc_release(uVar8);
    _objc_release(puVar2);
    _objc_release(uVar7);
    _objc_release(puVar9);
    _objc_release(uVar13);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
  }
  _objc_release(puVar9);
  return;
}



/* Entry: 1058c9910; end: 1058c9adb;  */

void FUN_1058c9910(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_2);
  uVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c06e0e0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    _CACurrentMediaTime();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bf788;
    _objc_alloc(PTR_PTR_1126bf788);
    func_0x00010c017ba0();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar11);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar6);
    _objc_retain(param_2);
    func_0x00010c135a60(uVar3);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(param_2);
    _objc_release(uVar6);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1058c9adc; end: 1058c9da7;  */

void FUN_1058c9adc(double param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bdc1800();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_3;
  func_0x00010c0719c0();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c13e940(param_1 - *(double *)(param_2 + 0x58),uVar3);
  _objc_release(uVar3);
  lVar4 = lVar1;
  func_0x00010c08fa60();
  if ((lVar4 == 0) ||
     (lVar4 = lVar2, func_0x00010c08fa60(), ((uint)(lVar4 != 0) & (uint)lVar9) != 1)) {
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    lVar9 = *(long *)(param_2 + 0x50);
    _objc_retain(lVar9);
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    _objc_retain(uVar3);
    _objc_retain(lVar2);
    _objc_retain(lVar1);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(uVar3);
  }
  else {
    puStack_78 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_1058c4a18;
    uStack_60 = 0x1058c4a28;
    uStack_58 = 0;
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_2 + 0x40);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(param_2 + 0x50);
    _objc_retain(uVar11);
    uVar8 = *(undefined8 *)(param_2 + 0x48);
    _objc_retain(uVar8);
    _objc_retain(lVar2);
    _objc_retain(lVar1);
    uVar3 = uVar5;
    func_0x00010c135d60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puStack_78[5];
    puStack_78[5] = uVar3;
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
    _objc_release(uVar8);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(lVar2);
    lVar9 = lVar1;
  }
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 1058c9da8; end: 1058c9eff;  */

void FUN_1058c9da8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = 0;
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  uVar1 = uVar5;
  uVar3 = uVar6;
  if (param_3 != 0) {
    lVar4 = param_3;
    func_0x00010bf93ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0646e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c156c60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(lVar2);
    _objc_release(lVar4);
    lVar4 = param_3;
    func_0x00010bf93ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0646e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c156c60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(lVar4);
  }
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38),uVar3,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058c9f00; end: 1058c9f13;  */

void FUN_1058c9f00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001058c9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1058c9f14; end: 1058ca08f;  */

void FUN_1058c9f14(double param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c13e940(param_1 - *(double *)(param_2 + 0x58),uVar1);
  _objc_release(uVar1);
  if (param_3 == 2) {
    if (*(char *)(param_2 + 0x68) == '\x01') {
      if (*(long *)(param_2 + 0x60) < 1) {
                    /* WARNING: Could not recover jumptable at 0x0001058ca05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_2 + 0x40) + 0x10))(*(long *)(param_2 + 0x40),0,0,1,0);
        return;
      }
    }
    else if (*(long *)(param_2 + 0x60) < 1) {
                    /* WARNING: Could not recover jumptable at 0x0001058ca08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_2 + 0x48) + 0x10))();
      return;
    }
  }
  else if (param_3 == 0) {
    lVar2 = param_2 + 0x50;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010c1179e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1341e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    lVar2 = *(long *)(param_2 + 0x38);
    func_0x00010bfad280(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64ac0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar4);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1058ca090; end: 1058ca09b;  */

undefined ** FUN_1058ca090(void)

{
  return &PTR____CFConstantStringClassReference_110e0a618;
}



/* Entry: 1058ca09c; end: 1058ca377; -[SCMemoriesCachingMediaHelper initWithUserSession:spectaclesAuxiliaryContentServices:circumstanceEngine:bundledColorImageProcessCommandFactory:videoTrackingTargetTrajectoryFactory:previewCameraSourceOverlayService:encryptedContentManager:grapheneRegistry:captionDataProvider:captionStyleResourceProvider:memoriesCloudFS:creativeToolsMemoriesResources:] */

undefined8 *
FUN_1058ca09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

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
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126eabe0;
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
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
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
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1058ca378; end: 1058ca3af; -[SCMemoriesCachingMediaHelper generateComposedMediaForSnap:snapOverlay:cloudFile:includeOverlay:animatedMediaOption:] */

void FUN_1058ca378(void)

{
  func_0x00010be1ade0(0);
  return;
}



/* Entry: 1058ca3b0; end: 1058cab93; -[SCMemoriesCachingMediaHelper generateComposedImageForVideoSnap:snapOverlay:cloudFile:includeOverlay:] */

void FUN_1058ca3b0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,int param_7)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_1058cab94;
  uStack_a8 = 0x1058caba4;
  uStack_a0 = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  puStack_c0 = &uStack_c8;
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_1058cabac;
  puStack_d8 = &UNK_1108bccc0;
  puStack_d0 = &uStack_c8;
  func_0x00010c1346c0();
  _objc_release(uVar2);
  if (puStack_c0[5] == 0) {
LAB_1058ca580:
    param_2 = 0;
    goto LAB_1058caad8;
  }
  uVar2 = param_4;
  func_0x000109023a28();
  if ((int)uVar2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010bf0b480(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf9ee60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar3);
    uVar5 = *(ulong *)(param_2 + 0x10);
    func_0x00010c1306e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar12;
    func_0x00010c07c3c0();
    _objc_release(uVar12);
    _objc_release(uVar5);
    _objc_release(uVar4);
    if ((uVar14 & 1) == 0) goto LAB_1058ca580;
  }
  func_0x00010bf8b160(param_4);
  fVar19 = SUB84(param_1,0);
  if (puStack_c0[5] == 0) {
    uStack_120 = 0;
    puStack_118 = (undefined8 *)0x0;
    uStack_110 = 0;
  }
  else {
    func_0x00010bf8b160(&uStack_120);
  }
  _CMTimeGetSeconds(&uStack_120);
  lVar6 = param_5;
  dVar18 = param_1;
  func_0x00010bf20900();
  fVar15 = SUB84(dVar18,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 == 0) {
    dVar18 = 0.0;
  }
  else {
    lVar6 = param_5;
    func_0x00010bf20900(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0e1c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(lVar7);
    _objc_release(lVar6);
    dVar18 = (double)fVar15;
    dVar16 = param_1 - dVar18;
    param_1 = 1.0;
    if (dVar16 <= 1.0) {
      param_1 = dVar16;
    }
    fVar19 = (float)param_1;
  }
  dVar17 = (double)(long)(fVar19 / 0.2) + 1.0;
  dVar16 = 1.0;
  if (dVar17 <= 1.0) {
    dVar16 = dVar17;
  }
  uVar12 = (ulong)dVar16;
  if ((long)uVar12 < 3) {
    uVar12 = 2;
  }
  lVar6 = param_5;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c140120();
  if (((int)lVar7 == 0) || (lVar7 = lVar6, func_0x00010c140160(), (int)lVar7 == 0)) {
    bVar1 = false;
  }
  else {
    lVar7 = param_5;
    func_0x00010bf20900();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar7 == 0;
    _objc_release();
  }
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  if ((double)(uVar12 - 1) * 0.2 * 1.5 <= param_1) {
    if (bVar1) {
      if (1 < (int)uVar12) {
        uVar13 = (int)uVar12 + 1;
        do {
          puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          _CMTimeMakeWithSeconds
                    (&uStack_120,param_1 + dVar18 + (double)(uVar13 - 2) * -0.30000000000000004,600)
          ;
          func_0x00010c297200(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar8);
          _objc_release(puVar9);
          uVar13 = uVar13 - 1;
        } while (2 < uVar13);
      }
      puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      _CMTimeMakeWithSeconds(&uStack_120,param_1 + dVar18 + -0.01,600);
      func_0x00010c297200(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar8);
      goto LAB_1058ca878;
    }
    _CMTimeMakeWithSeconds(&uStack_120,dVar18,600);
    func_0x00010c297200(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar8);
    _objc_release(puVar9);
    uVar14 = 1;
    do {
      puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      _CMTimeMakeWithSeconds
                (&uStack_120,dVar18 + (double)(uVar14 & 0xffffffff) * 0.30000000000000004,600);
      func_0x00010c297200(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar8);
      _objc_release(puVar9);
      uVar14 = uVar14 + 1;
    } while (uVar12 != uVar14);
  }
  else {
    _CMTimeMakeWithSeconds(&uStack_120,dVar18,600);
    func_0x00010c297200(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar8);
    _objc_release(puVar9);
    lVar7 = uVar12 - 2;
    if (lVar7 != 0) {
      uVar13 = 1;
      do {
        puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        _CMTimeMakeWithSeconds
                  (&uStack_120,dVar18 + (param_1 * (double)uVar13) / (double)(uVar12 - 1),600);
        func_0x00010c297200(puVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar8);
        _objc_release(puVar9);
        uVar13 = uVar13 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    _CMTimeMakeWithSeconds(&uStack_120,param_1 + dVar18 + -0.01,600);
    func_0x00010c297200(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar8);
LAB_1058ca878:
    _objc_release(puVar9);
  }
  puVar9 = puVar8;
  if (bVar1) {
    func_0x00010c25e980(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c0d3c80();
  }
  else {
    func_0x00010c25e980(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c0d3c80();
  }
  _objc_release(puVar8);
  _objc_release(puVar9);
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_1058cab94;
  uStack_100 = 0x1058caba4;
  uStack_f8 = 0;
  if (param_7 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c136020();
    _objc_release(uVar2);
  }
  lVar7 = param_2;
  func_0x00010bfc0500(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_2;
  func_0x00010bfc02a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar10;
  func_0x00010bfb1920(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1adc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(lVar11);
  _objc_release(lVar7);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  _objc_release(puVar10);
  _objc_release(lVar6);
LAB_1058caad8:
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1058cab94; end: 1058cabab;  */

void FUN_1058cab94(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1058cabac; end: 1058cac1b;  */

void FUN_1058cabac(long param_1,undefined8 param_2)

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



/* Entry: 1058cac1c; end: 1058cad93; -[SCMemoriesCachingMediaHelper generateComposedImageForSnapInfo:snapOverlay:imageSegmentData:includeOverlay:overlayFormat:stickerData:completion:] */

void FUN_1058cac1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
                  )

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _CGImageSourceCreateWithData(param_5,0);
  lVar1 = param_5;
  _CGImageSourceCreateImageAtIndex();
  if (lVar1 == 0) {
    _CFRelease(param_5);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_9 + 0x10))(param_9,0,puVar2);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    _CGImageRelease(lVar1);
    _CFRelease(param_5);
    func_0x00010bf4d5e0(param_3);
    func_0x00010be1ada0(param_1);
  }
  _objc_release(param_9);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058cad94; end: 1058caebf; -[SCMemoriesCachingMediaHelper generateComposedImageForVideoSnapInfo:snapOverlay:asset:includeOverlay:overlayFormat:stickerData:spectaclesSnapCommandProvider:] */

void FUN_1058cad94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined1 auStack_78 [24];
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _CMTimeMakeWithSeconds(auStack_78,0,600);
  func_0x00010c297200(puVar1,param_2,auStack_78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1adc0(param_1,param_2,param_3,param_4,param_5,puVar1,param_6,param_7,param_8,param_9
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1058caec0; end: 1058caefb; -[SCMemoriesCachingMediaHelper imageProcessCommandsForSnapOverlay:sourceImage:contextFilteredImage:mediaOrientation:snapOverlay:outputSize:isSpectaclesMedia:animatedOption:includeOverlay:includeVisualFilters:spectaclesSnapCommandProvider:] */

void FUN_1058caec0(void)

{
  func_0x00010be375e0();
  return;
}



/* Entry: 1058caefc; end: 1058caf33; -[SCMemoriesCachingMediaHelper spectaclesGenerateComposedMediaForSnap:snapOverlay:cloudFile:includeOverlay:includeMediaOverlay:spectaclesPrimaryCamera:animatedMediaOption:disparityOffset:] */

void FUN_1058caefc(void)

{
  func_0x00010be1ade0();
  return;
}



/* Entry: 1058caf34; end: 1058caf3b; -[SCMemoriesCachingMediaHelper generateThumbnailImageProcessCommandSnapInfo:] */

void FUN_1058caf34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc0510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_generateThumbnailImageProcessCom_1125cdae8,param_3,0);
  return;
}



/* Entry: 1058caf3c; end: 1058cb0ff; -[SCMemoriesCachingMediaHelper generateThumbnailImageProcessCommandSnapInfoWithSpectaclesStereoCamera:spectaclesPrimaryCamera:] */

void FUN_1058caf3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126bfb88;
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  uVar2 = param_5;
  func_0x00010b5fa7fc(param_5);
  uVar3 = param_5;
  func_0x000109023acc(param_5);
  uVar4 = param_5;
  func_0x000109024028(param_5);
  uVar5 = param_5;
  func_0x000109023714(param_5);
  uVar6 = param_5;
  func_0x000109023b28(param_5);
  uVar7 = param_5;
  func_0x000109023a28(param_5);
  func_0x00010c01f760(puVar1,param_4,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,param_6);
  puVar8 = PTR_PTR_1126bfb90;
  _objc_alloc(PTR_PTR_1126bfb90);
  uVar2 = param_5;
  func_0x00010bf59960(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c26fd20(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c241220(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010bf2a8a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_5;
  func_0x00010c2a5040(param_5);
  uVar7 = param_5;
  func_0x00010bfe0640(param_5);
  func_0x000109023974(param_5);
  _objc_release(param_5);
  func_0x00010c047300((double)(int)uVar6,(double)(int)uVar7,param_1,param_2,puVar8,param_4,uVar2,
                      uVar3,uVar4,uVar5,puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1058cb100; end: 1058cb1af; -[SCMemoriesCachingMediaHelper generateSpectaclesSnapCommandProvider:] */

void FUN_1058cb100(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000109023a28();
  if ((int)uVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126bfb80;
    _objc_alloc(PTR_PTR_1126bfb80);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c1307e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c046fe0(puVar3,param_2,param_3,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058cb1b0; end: 1058cc063; -[SCMemoriesCachingMediaHelper _generateComposedMediaForSnap:snapOverlay:decryptedImage:cloudFile:includeOverlay:includeMediaOverlay:spectaclesPrimaryCamera:animatedMediaOption:disparityOffset:] */

void FUN_1058cb1b0(double param_1,double param_2,undefined **param_3,undefined8 param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7,undefined8 param_8,
                  int param_9,int param_10)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long lVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  double dVar22;
  double dVar23;
  undefined8 *puVar24;
  double dVar25;
  code *pcVar26;
  double dVar27;
  undefined **ppuStack_3d0;
  undefined *puStack_380;
  undefined8 uStack_378;
  code *pcStack_370;
  undefined *puStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  double dStack_330;
  undefined1 uStack_328;
  undefined1 uStack_327;
  undefined1 uStack_326;
  double dStack_320;
  undefined8 *puStack_318;
  double dStack_310;
  code *pcStack_308;
  double dStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  double dStack_280;
  code *pcStack_278;
  double dStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  double dStack_250;
  code *pcStack_248;
  double dStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  char *pcStack_148;
  double dStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined **ppuVar3;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar16 = param_5;
  ppuVar12 = param_7;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  ppuVar3 = param_5;
  func_0x00010b5fa088();
  iVar2 = (int)ppuVar3;
  func_0x00010b5fa4c8();
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    ppuVar3 = param_5;
    func_0x00010b5fa088();
    bVar1 = (long)ppuVar3 - 2U < 0xb;
  }
  ppuVar3 = param_5;
  func_0x000109023acc();
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_1058cab94;
  uStack_b0 = 0x1058caba4;
  ppuStack_a8 = (undefined **)0x0;
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_1058cab94;
  uStack_e0 = 0x1058caba4;
  uStack_d8 = 0;
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_1058cab94;
  uStack_110 = 0x1058caba4;
  uStack_108 = 0;
  puStack_158 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x3010000000;
  pcStack_148 = "";
  uStack_138 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  dVar22 = *(double *)PTR__CGSizeZero_110347620;
  dStack_140 = dVar22;
  if (param_7 == (undefined **)0x0) {
    ppuVar12 = param_5;
    func_0x000109023a28();
    if ((int)ppuVar12 == 0) {
      puVar7 = param_3[7];
      func_0x00010c269d40(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
      dVar23 = 1.60807493534087e-314;
      uStack_1d0 = 0xc2000000;
      pcStack_1c8 = FUN_1058cc168;
      puStack_1c0 = &UNK_1108bcd50;
      puStack_1b8 = &uStack_d0;
      puStack_1b0 = &uStack_130;
      puStack_1a8 = &uStack_160;
      ppuVar12 = &PTR____CFConstantStringClassReference_110e0a678;
      ppuVar16 = param_5;
      func_0x00010c135800();
      _objc_release(puVar7);
    }
    else {
      puVar5 = param_3[2];
      func_0x00010bf0b480(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_3[7];
      func_0x00010c269d40(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
      dVar23 = 1.60807493534087e-314;
      uStack_198 = 0xc2000000;
      pcStack_190 = FUN_1058cc064;
      puStack_188 = &UNK_1108bcd20;
      puStack_180 = &uStack_d0;
      puStack_178 = &uStack_100;
      puStack_170 = &uStack_130;
      puStack_168 = &uStack_160;
      ppuVar12 = (undefined **)0x1;
      ppuVar16 = param_5;
      func_0x00010c1357e0(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar7);
      _objc_release(puVar5);
    }
  }
  else {
    _objc_retain(param_7);
    ppuStack_a8 = param_7;
    _objc_release(0);
    ppuVar4 = param_5;
    func_0x000109023a28();
    if ((int)ppuVar4 == 0) {
      func_0x00010c23d0a0(puStack_c8[5]);
      dVar23 = dVar22;
    }
    else {
      func_0x00010c23d0a0(puStack_c8[5]);
      func_0x00010c23d0a0(puStack_c8[5]);
      param_2 = param_2 * 0.5;
      dVar23 = 0.5;
    }
    puStack_158[4] = dVar22;
    puStack_158[5] = param_2;
  }
  if ((puStack_c8[5] == 0) || (puStack_128[5] != 0)) {
    uVar18 = 0;
    goto LAB_1058cbedc;
  }
  puStack_200 = &uStack_208;
  uStack_208 = 0;
  uStack_1f8 = 0x3032000000;
  pcStack_1f0 = FUN_1058cab94;
  uStack_1e8 = 0x1058caba4;
  uStack_1e0 = 0;
  ppuVar12 = param_6;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar12;
  func_0x00010bf4e780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar12);
  if (ppuVar16 != (undefined **)0x0) {
    puVar7 = param_3[7];
    func_0x00010c269d40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_228 = 0xc2000000;
    pcStack_220 = FUN_1058cc20c;
    puStack_218 = &UNK_1108bccf0;
    puStack_210 = &uStack_208;
    func_0x00010c136020();
    _objc_release(puVar7);
  }
  ppuVar4 = param_3;
  func_0x00010bfc0500();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = param_3;
  func_0x00010bfc02a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ed100(param_5);
  ppuVar12 = param_3;
  func_0x00010be375e0(puStack_158[4],puStack_158[5]);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = *(undefined8 **)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar18 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  pcVar26 = *(code **)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  dVar25 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar19 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  dVar27 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  ppuVar9 = param_6;
  dVar22 = dVar27;
  dVar23 = dVar25;
  uStack_260 = uVar18;
  puStack_258 = puVar24;
  dStack_250 = dVar25;
  pcStack_248 = pcVar26;
  dStack_240 = dVar27;
  uStack_238 = uVar19;
  func_0x000107ff9c0c(param_6,param_5);
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = ppuVar9;
  func_0x00010c27dd80();
  if ((long)ppuVar16 - 1U < 2) {
    func_0x00010c0c2640(PTR_PTR_1126bf720);
    ppuVar16 = ppuVar9;
    func_0x00010c130740();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar16 == (undefined **)0x0) {
      pcStack_278 = (code *)0x0;
      dStack_280 = 0.0;
      uStack_268 = 0;
      dStack_270 = 0.0;
      puStack_288 = (undefined8 *)0x0;
      uStack_290 = 0;
    }
    else {
      func_0x00010bf27a80(&uStack_290,0x7ff0000000000000,dVar22,dVar23,dVar22,dVar23,ppuVar16);
    }
    puStack_258 = puStack_288;
    uStack_260 = uStack_290;
    pcStack_248 = pcStack_278;
    dStack_250 = dStack_280;
    uStack_238 = uStack_268;
    dStack_240 = dStack_270;
    _objc_release(ppuVar16);
  }
  else if (ppuVar16 == (undefined **)0x0) {
    uStack_260 = uVar18;
    puStack_258 = puVar24;
    dStack_250 = dVar25;
    pcStack_248 = pcVar26;
    dStack_240 = dVar27;
    uStack_238 = uVar19;
  }
  ppuVar16 = param_5;
  func_0x00010b5fa088();
  if (ppuVar16 == (undefined **)0xb) {
    uStack_260 = uVar18;
    puStack_258 = puVar24;
    dStack_250 = dVar25;
    pcStack_248 = pcVar26;
    dStack_240 = dVar27;
    uStack_238 = uVar19;
  }
  puStack_288 = puStack_258;
  uStack_290 = uStack_260;
  pcStack_278 = pcStack_248;
  dStack_280 = dStack_250;
  uStack_268 = uStack_238;
  dStack_270 = dStack_240;
  uVar10 = 0;
  dVar22 = dStack_240;
  param_2 = dStack_250;
  _CGAffineTransformIsIdentity();
  ppuStack_3d0 = ppuVar12;
  if ((uVar10 & 1) == 0) {
    ppuVar16 = param_6;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar16;
    func_0x00010c2a0480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar16);
    if (ppuVar11 == (undefined **)0x0) {
      puVar7 = PTR_PTR_1126b26c8;
      func_0x00010c22b820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a0 = puVar7;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_3d0 = ppuVar16;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      _objc_release(ppuVar16);
      _objc_release(puVar7);
    }
  }
  ppuVar12 = param_6;
  func_0x000107ff7990();
  if ((int)ppuVar12 != 0) {
    func_0x000109023974(param_5);
    ppuVar12 = param_5;
    func_0x00010c2a5040(param_5);
    ppuVar16 = param_5;
    func_0x00010bfe0640(param_5);
    ppuVar11 = param_6;
    func_0x000107ff7d2c(dVar22,param_2,(double)(int)ppuVar12,(double)(int)ppuVar16,param_6,
                        puStack_c8[5]);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = puStack_c8[5];
    puStack_c8[5] = ppuVar11;
    _objc_release(uVar18);
  }
  puStack_288 = &uStack_290;
  uStack_290 = 0;
  dStack_280 = 1.02270250269256e-312;
  pcStack_278 = FUN_1058cab94;
  dStack_270 = 2.16799580256526e-314;
  uStack_268 = 0;
  ppuVar11 = param_5;
  func_0x000109023c14();
  dVar27 = 1.0;
  if ((int)ppuVar11 != 0) {
    ppuVar11 = param_5;
    func_0x000109023c78();
    param_2 = 1.0;
    dVar27 = 1.0 / dVar22;
  }
  if (ppuStack_3d0 == (undefined **)0x0) {
    _objc_autoreleasePoolPush();
    puVar24 = puStack_288;
    uVar19 = puStack_c8[5];
    _objc_retain(uVar19);
    uVar18 = puVar24[5];
    puVar24[5] = uVar19;
    _objc_release(uVar18);
    puStack_2b8 = &uStack_2c0;
    uStack_2c0 = 0;
    uStack_2b0 = 0x3032000000;
    pcStack_2a8 = FUN_1058cab94;
    uStack_2a0 = 0x1058caba4;
    uStack_298 = 0;
    puVar7 = param_3[7];
    func_0x00010c269d40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    dVar23 = 1.60807493534087e-314;
    ppuVar12 = &PTR____CFConstantStringClassReference_110e0a678;
    func_0x00010c136020();
    _objc_release(puVar7);
    ppuVar21 = (undefined **)puStack_2b8[5];
    if (bVar1) {
      func_0x00010c0c5d00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = (undefined **)puStack_2b8[5];
      ppuVar16 = (undefined **)0x3;
      func_0x00010c0c5d00();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puStack_288;
      ppuVar20 = ppuVar13;
      if (ppuVar13 == (undefined **)0x0) {
        ppuVar20 = (undefined **)puStack_c8[5];
      }
      _objc_retain(ppuVar20);
      uVar18 = puVar24[5];
      puVar24[5] = ppuVar20;
      _objc_release(uVar18);
      _objc_release(ppuVar13);
    }
    else {
      ppuVar16 = (undefined **)0x3;
      func_0x00010c0c5d00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar21;
      if (ppuVar21 == (undefined **)0x0) {
        ppuVar13 = (undefined **)puStack_2b8[5];
        ppuVar16 = (undefined **)0x4;
        func_0x00010c0c5d00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = ppuVar13;
        if (ppuVar13 == (undefined **)0x0) {
          ppuVar13 = (undefined **)puStack_2b8[5];
          ppuVar16 = (undefined **)0x7;
          func_0x00010c0c5d00();
          _objc_retainAutoreleasedReturnValue();
          ppuVar21 = ppuVar13;
        }
      }
    }
    if ((puStack_288[5] != 0) && (puStack_2b8[5] != 0)) {
      _objc_autoreleasePoolPush();
      uVar19 = puStack_2b8[5];
      func_0x00010c1511c0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = puStack_288[5];
      uVar18 = uVar19;
      if (param_9 == 0) {
        uVar18 = 0;
      }
      ppuVar16 = ppuVar21;
      FUN_1058d416c(uVar14,uVar18,ppuVar21,(ulong)ppuVar3 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = puStack_288[5];
      puStack_288[5] = uVar14;
      _objc_release(uVar18);
      _objc_release(uVar19);
      _objc_autoreleasePoolPop(ppuVar13);
      dVar23 = dVar27;
    }
    if (bVar1 == false) {
      uVar18 = puStack_288[5];
      ppuVar16 = param_6;
      FUN_1058d4464(uVar18,ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = puStack_288[5];
      puStack_288[5] = uVar18;
      _objc_release(uVar19);
    }
    __Block_object_dispose(&uStack_2c0,8);
    _objc_release(uStack_298);
    _objc_autoreleasePoolPop(ppuVar11);
  }
  else {
    _dispatch_group_create();
    ppuVar13 = ppuVar11;
    _dispatch_group_enter();
    _objc_autoreleasePoolPush();
    uStack_2c0 = 0;
    uStack_2b0 = 0x3032000000;
    pcStack_2a8 = FUN_1058cab94;
    uStack_2a0 = 0x1058caba4;
    uStack_298 = 0;
    puVar7 = param_3[7];
    puStack_2b8 = &uStack_2c0;
    func_0x00010c269d40(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2e0 = 0xc2000000;
    uStack_2d8 = 0x1058cc250;
    puStack_2d0 = &UNK_1108bccf0;
    puStack_2c8 = &uStack_2c0;
    func_0x00010c136020();
    _objc_release(puVar7);
    if (bVar1) {
      if (param_10 == 0) {
        ppuVar12 = (undefined **)0x0;
      }
      else {
        ppuVar12 = (undefined **)puStack_2b8[5];
        func_0x00010c0c5d00();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar15 = puStack_2b8[5];
      func_0x00010c0c5d00();
      _objc_retainAutoreleasedReturnValue();
      ppuVar21 = ppuVar12;
      if (param_1 != 0.0) {
        func_0x00010bfe98e0(param_1,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar12);
      }
LAB_1058cbc78:
      lVar17 = lVar15;
      if (lVar15 == 0) {
        lVar17 = puStack_c8[5];
      }
    }
    else {
      lVar17 = puStack_2b8[5];
      func_0x00010c0c5d00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar17 == 0) {
        lVar17 = puStack_2b8[5];
        func_0x00010c0c5d00();
        _objc_retainAutoreleasedReturnValue();
        if (lVar17 == 0) {
          lVar15 = puStack_2b8[5];
          func_0x00010c0c5d00();
          _objc_retainAutoreleasedReturnValue();
          ppuVar21 = (undefined **)0x0;
          goto LAB_1058cbc78;
        }
      }
      ppuVar21 = (undefined **)0x0;
      lVar15 = lVar17;
    }
    puVar24 = puStack_c8;
    _objc_retain(lVar17);
    uVar18 = puVar24[5];
    puVar24[5] = lVar17;
    _objc_release(uVar18);
    uVar18 = puStack_c8[5];
    func_0x00010bfe9820();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = puStack_c8[5];
    puStack_c8[5] = uVar18;
    _objc_release(uVar19);
    func_0x00010c27dd80(ppuVar9);
    func_0x00010be4ca60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126bf508;
    _objc_alloc(PTR_PTR_1126bf508);
    puVar5 = PTR_PTR_1126bf4d0;
    func_0x00010c22bec0();
    _objc_retainAutoreleasedReturnValue();
    param_2 = (double)puStack_158[5];
    puStack_318 = puStack_258;
    dStack_320 = (double)uStack_260;
    pcStack_308 = pcStack_248;
    dStack_310 = dStack_250;
    uStack_2f8 = uStack_238;
    dStack_300 = dStack_240;
    ppuVar12 = param_3;
    func_0x00010c03c680(puStack_158[4],puVar7);
    _objc_release(puVar5);
    puStack_380 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_378 = 0xc2000000;
    pcStack_370 = FUN_1058cc288;
    puStack_368 = &UNK_1108bcd80;
    puStack_340 = &uStack_290;
    puStack_338 = &uStack_2c0;
    uStack_328 = (char)param_9;
    _objc_retain(ppuVar21);
    uStack_327 = SUB81(ppuVar3,0);
    ppuStack_360 = ppuVar21;
    dStack_330 = dVar27;
    uStack_326 = bVar1;
    _objc_retain(ppuVar4);
    ppuStack_358 = ppuVar4;
    _objc_retain(param_6);
    ppuStack_350 = param_6;
    _objc_retain(ppuVar11);
    puStack_318 = *(undefined8 **)(PTR__kCMTimeZero_110348670 + 8);
    dVar23 = *(double *)PTR__kCMTimeZero_110348670;
    dStack_310 = *(double *)(PTR__kCMTimeZero_110348670 + 0x10);
    ppuVar16 = &puStack_380;
    ppuStack_348 = ppuVar11;
    dStack_320 = dVar23;
    func_0x00010c2505e0(puVar7);
    _dispatch_group_wait(ppuVar11,0xffffffffffffffff);
    _objc_release(ppuStack_348);
    _objc_release(ppuStack_350);
    _objc_release(ppuStack_358);
    _objc_release(ppuStack_360);
    _objc_release(puVar7);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_2c0,8);
    _objc_release(uStack_298);
    _objc_release(lVar15);
    _objc_autoreleasePoolPop(ppuVar13);
    _objc_release(ppuVar11);
  }
  uVar18 = puStack_288[5];
  _objc_retain(uVar18);
  _objc_release(ppuVar21);
  __Block_object_dispose(&uStack_290,8);
  _objc_release(uStack_268);
  _objc_release(ppuVar9);
  _objc_release(ppuStack_3d0);
  _objc_release(ppuVar8);
  _objc_release(ppuVar4);
  __Block_object_dispose(&uStack_208,8);
  _objc_release(uStack_1e0);
LAB_1058cbedc:
  __Block_object_dispose(&uStack_160,8);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(ppuStack_a8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar18);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_2c0,8);
  __Block_object_dispose(&uStack_290,8);
  __Block_object_dispose(&uStack_208,8);
  __Block_object_dispose(&uStack_160,8);
  __Block_object_dispose(&uStack_130,8);
  __Block_object_dispose(&uStack_100,8);
  uVar18 = 8;
  __Block_object_dispose(&uStack_d0);
  __Unwind_Resume();
  _objc_retain(uVar18);
  _objc_retain(ppuVar16);
  _objc_retain(ppuVar12);
  uVar19 = *(undefined8 *)(*(long *)(param_5[4] + 8) + 0x28);
  *(undefined8 *)(*(long *)(param_5[4] + 8) + 0x28) = uVar18;
  _objc_retain(uVar18);
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(*(long *)(param_5[5] + 8) + 0x28);
  *(undefined ***)(*(long *)(param_5[5] + 8) + 0x28) = ppuVar16;
  _objc_retain(ppuVar16);
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(*(long *)(param_5[6] + 8) + 0x28);
  *(undefined ***)(*(long *)(param_5[6] + 8) + 0x28) = ppuVar12;
  _objc_retain(ppuVar12);
  _objc_release(uVar19);
  func_0x00010c23d0a0(*(undefined8 *)(*(long *)(param_5[4] + 8) + 0x28));
  func_0x00010c23d0a0(*(undefined8 *)(*(long *)(param_5[4] + 8) + 0x28));
  lVar17 = *(long *)(param_5[7] + 8);
  *(double *)(lVar17 + 0x20) = dVar23;
  *(double *)(lVar17 + 0x28) = param_2 * 0.5;
  _objc_release(ppuVar12);
  _objc_release(ppuVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar18);
  return;
}



/* Entry: 1058cc064; end: 1058cc167;  */

void FUN_1058cc064(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar1 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_3 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_7;
  _objc_retain(param_7);
  _objc_release(uVar2);
  func_0x00010c23d0a0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28));
  func_0x00010c23d0a0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28));
  lVar1 = *(long *)(*(long *)(param_3 + 0x38) + 8);
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(double *)(lVar1 + 0x28) = param_2 * 0.5;
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1058cc168; end: 1058cc20b;  */

void FUN_1058cc168(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_3 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  func_0x00010c23d0a0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x28));
  lVar1 = *(long *)(*(long *)(param_3 + 0x30) + 8);
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1058cc20c; end: 1058cc287;  */

void FUN_1058cc20c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0c5d00(param_2,param_2,6);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058cc288; end: 1058cc3cb;  */

void FUN_1058cc288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_autoreleasePoolPush();
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = param_2;
  _objc_release(uVar2);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28) != 0) {
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    if (lVar5 != 0) {
      func_0x00010c1511c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
      lVar4 = lVar5;
      if (*(char *)(param_1 + 0x58) == '\0') {
        lVar4 = 0;
      }
      FUN_1058d416c(*(undefined8 *)(param_1 + 0x50),uVar2,lVar4,*(undefined8 *)(param_1 + 0x20),
                    *(undefined1 *)(param_1 + 0x59));
      _objc_retainAutoreleasedReturnValue();
      lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      *(undefined8 *)(lVar4 + 0x28) = uVar2;
      _objc_release(uVar3);
      _objc_release(lVar5);
    }
  }
  if ((*(byte *)(param_1 + 0x5a) & 1) == 0) {
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    FUN_1058d4464(uVar2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x38));
  _objc_autoreleasePoolPop(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058cc3cc; end: 1058cc403;  */

void FUN_1058cc3cc(long param_1,undefined8 param_2)

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



/* Entry: 1058cc404; end: 1058cc857; -[SCMemoriesCachingMediaHelper _generateComposedImageForVideoSnapInfo:snapOverlay:asset:requestedTime:includeOverlay:overlayFormat:stickerData:spectaclesSnapCommandProvider:] */

void FUN_1058cc404(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double *pdStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = PTR_PTR_1126ba150;
  func_0x00010c22e420();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
    func_0x00010bf0b300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c169b80();
    uVar9 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    dVar6 = *(double *)PTR__kCMTimeZero_110348670;
    uVar7 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    dStack_c0 = dVar6;
    pdStack_b8 = (double *)uVar9;
    uStack_b0 = uVar7;
    func_0x00010c1ec3c0(puVar1);
    dStack_c0 = dVar6;
    pdStack_b8 = (double *)uVar9;
    uStack_b0 = uVar7;
    func_0x00010c1ec3e0(puVar1);
    lVar2 = param_7;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010c0d5d20(lVar3);
    if (lVar3 == 0) {
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_e8 = 0;
      dStack_f0 = 0.0;
    }
    else {
      func_0x00010c106f40(&dStack_f0,lVar3);
    }
    pdStack_b8 = (double *)uStack_e8;
    dStack_c0 = dStack_f0;
    pcStack_a8 = (code *)uStack_d8;
    uStack_b0 = uStack_e0;
    uStack_98 = uStack_c8;
    uStack_a0 = uStack_d0;
    _CGRectApplyAffineTransform(0,0,dVar6,param_2,&dStack_c0);
    uVar7 = param_5;
    func_0x00010c249840();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c0813c0();
    _objc_release(uVar7);
    if ((int)uVar9 != 0) {
      dVar8 = 1.0;
      if (1.0 <= dVar6) {
        param_2 = param_2 * 0.5;
      }
      else {
        func_0x00010c0d5d20(lVar3);
        param_2 = dVar8;
        func_0x00010c0d5d20(lVar3);
        dVar6 = dVar8;
      }
    }
    dStack_c0 = 0.0;
    uStack_b0 = 0x3032000000;
    pcStack_a8 = FUN_1058cab94;
    uStack_a0 = 0x1058caba4;
    uStack_98 = 0;
    pdStack_b8 = &dStack_c0;
    if (param_8 == 0) {
      uStack_108 = 0;
      uStack_100 = 0;
      uStack_f8 = 0;
    }
    else {
      func_0x00010bdc1140(&uStack_108,param_8);
    }
    puVar4 = puVar1;
    func_0x00010bf51e60();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar4 != (undefined *)0x0) {
      if (param_8 == 0) {
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_f8 = 0;
      }
      else {
        func_0x00010bdc1140(&uStack_108,param_8);
      }
      _CMTimeGetSeconds(&uStack_108);
      uVar7 = param_5;
      func_0x00010c0c9a40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar7);
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
      _objc_retainAutoreleasedReturnValue();
      _CFRelease();
      _dispatch_group_create();
      _dispatch_group_enter();
      _objc_retain(puVar4);
      func_0x00010be1ada0(dVar6,param_2,param_3);
      _dispatch_group_wait(puVar4,0xffffffffffffffff);
      _objc_release(puVar4);
      _objc_release(puVar4);
      _objc_release(puVar5);
    }
    dVar6 = pdStack_b8[5];
    _objc_retain(dVar6);
    __Block_object_dispose(&dStack_c0,8);
    _objc_release(uStack_98);
    _objc_release(lVar3);
    _objc_release(puVar1);
  }
  else {
    dVar6 = 0.0;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(dVar6);
  return;
}



/* Entry: 1058cc858; end: 1058cc8b7;  */

void FUN_1058cc858(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_3 == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058cc8b8; end: 1058cd05b; -[SCMemoriesCachingMediaHelper _generateComposedImageForSnapInfo:snapOverlay:frameImage:frameSize:includeOverlay:overlayFormat:stickerData:spectaclesSnapCommandProvider:completion:] */

void FUN_1058cc8b8(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  ulong param_5,undefined *param_6,long param_7,int param_8,long param_9,
                  undefined8 param_10,undefined8 param_11,long param_12)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  long lStack_1b0;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  ulong uStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  double dStack_130;
  undefined8 uStack_128;
  double dStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  double dStack_100;
  code *pcStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  uVar10 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar14 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar22 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  dVar20 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar19 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  dVar17 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uVar1 = param_5;
  dVar18 = dVar17;
  dVar21 = dVar20;
  uStack_e0 = uVar14;
  uStack_d8 = uVar10;
  dStack_d0 = dVar20;
  uStack_c8 = uVar22;
  dStack_c0 = dVar17;
  uStack_b8 = uVar19;
  FUN_1058d42e8(param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010c27dd80();
  if (uVar11 - 1 < 2) {
    func_0x00010c0c2640(PTR_PTR_1126bf720);
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    dVar17 = dVar18;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar2);
    uVar11 = uVar1;
    func_0x00010c130740();
    _objc_retainAutoreleasedReturnValue();
    if (uVar11 == 0) {
      pcStack_f8 = (code *)0x0;
      dStack_100 = 0.0;
      uStack_e8 = 0;
      dStack_f0 = 0.0;
      puStack_108 = (undefined8 *)0x0;
      uStack_110 = 0;
    }
    else {
      func_0x00010bf27a80(&uStack_110,0x7ff0000000000000,dVar18 * dVar17,dVar21 * dVar17,
                          dVar18 * dVar17,dVar21 * dVar17,uVar11);
    }
    uStack_d8 = puStack_108;
    uStack_e0 = uStack_110;
    uStack_c8 = pcStack_f8;
    dStack_d0 = dStack_100;
    uStack_b8 = uStack_e8;
    dStack_c0 = dStack_f0;
    _objc_release(uVar11);
  }
  else if (uVar11 == 0) {
    uStack_e0 = uVar14;
    uStack_d8 = uVar10;
    dStack_d0 = dVar20;
    uStack_c8 = uVar22;
    dStack_c0 = dVar17;
    uStack_b8 = uVar19;
  }
  if (param_8 == 0) {
    lVar16 = 0;
    lStack_1b0 = 0;
  }
  else {
    lStack_1b0 = param_9;
    func_0x00010c1511c0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_5;
    func_0x00010c249840();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar11;
    func_0x00010c07f180();
    _objc_release(uVar11);
    lVar16 = param_9;
    func_0x00010c0c5d00();
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar3 == 0) {
      if (lVar16 != 0) goto LAB_1058ccb14;
      lVar16 = param_9;
      func_0x00010c0c5d00();
      _objc_retainAutoreleasedReturnValue();
    }
    if (lVar16 == 0) {
      lVar16 = param_9;
      func_0x00010c0c5d00();
      _objc_retainAutoreleasedReturnValue();
    }
  }
LAB_1058ccb14:
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar11 = param_5;
  func_0x00010c0c9a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar11);
  uVar11 = param_5;
  func_0x00010c249840(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07f180();
  puVar2 = param_3;
  func_0x00010be375e0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  puStack_108 = (undefined8 *)uStack_d8;
  uStack_110 = uStack_e0;
  pcStack_f8 = (code *)uStack_c8;
  dStack_100 = dStack_d0;
  uStack_e8 = uStack_b8;
  dStack_f0 = dStack_c0;
  uVar11 = 0;
  _CGAffineTransformIsIdentity();
  puVar6 = puVar2;
  if ((uVar11 & 1) == 0) {
    puVar4 = param_6;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2a0480();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      uVar11 = param_5;
      func_0x00010c249840();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar11;
      func_0x00010c137a80();
      _objc_release(uVar11);
      _objc_release(puVar4);
      if ((uVar3 & 1) != 0) goto LAB_1058ccca8;
      puVar4 = PTR_PTR_1126b26c8;
      func_0x00010c22b820();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_a8 = puVar4;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf09f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
LAB_1058ccca8:
  lVar15 = param_7;
  _objc_retain();
  uStack_110 = 0;
  dStack_100 = 1.02270250269256e-312;
  pcStack_f8 = FUN_1058cab94;
  dStack_f0 = 2.16799580256526e-314;
  uStack_e8 = 0;
  lVar7 = param_7;
  puStack_108 = &uStack_110;
  if (puVar6 == (undefined *)0x0) {
    _objc_autoreleasePoolPush();
    if (lStack_1b0 != 0 || lVar16 != 0) {
      uVar11 = param_5;
      func_0x00010c249840();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar11;
      func_0x00010c06e900();
      FUN_1058d416c(0x3ff0000000000000,param_7,lStack_1b0,lVar16,uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_7);
      _objc_release(uVar11);
    }
    if (lVar7 != 0) {
      uVar11 = param_5;
      func_0x00010c249840();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar11;
      func_0x00010c07f180();
      if ((uVar3 & 1) == 0) {
        _objc_release(uVar11);
LAB_1058ccf08:
        lVar12 = lVar7;
        FUN_1058d4464(lVar7,param_5,param_6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar7);
        lVar7 = lVar12;
      }
      else {
        uVar3 = param_5;
        func_0x00010c249840();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar3;
        func_0x00010c06fa00();
        _objc_release(uVar3);
        _objc_release(uVar11);
        if ((int)uVar8 != 0) goto LAB_1058ccf08;
      }
      lVar12 = lVar7;
      _UIImageJPEGRepresentation(0x3fe0000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = puStack_108[5];
      puStack_108[5] = lVar12;
      _objc_release(uVar14);
    }
    ppuVar13 = (undefined **)0x0;
    (**(code **)(param_12 + 0x10))(param_12,puStack_108[5],0);
    _objc_autoreleasePoolPop(lVar15);
  }
  else {
    func_0x00010c27dd80(uVar1);
    func_0x00010be4ca60(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bf508;
    _objc_alloc();
    puVar4 = PTR_PTR_1126bf4d0;
    func_0x00010c22bec0(PTR_PTR_1126bf4d0);
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = uStack_d8;
    uStack_140 = uStack_e0;
    uStack_128 = uStack_c8;
    dStack_130 = dStack_d0;
    uStack_118 = uStack_b8;
    dStack_120 = dStack_c0;
    func_0x00010c03c680(param_1,param_2);
    _objc_release(puVar4);
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0xc2000000;
    pcStack_180 = FUN_1058cd05c;
    puStack_178 = &UNK_1108bcde0;
    _objc_retain(lStack_1b0);
    lStack_170 = lStack_1b0;
    _objc_retain(lVar16);
    lStack_168 = lVar16;
    _objc_retain(param_5);
    uStack_160 = param_5;
    _objc_retain(param_6);
    puStack_148 = &uStack_110;
    puStack_158 = param_6;
    _objc_retain(param_12);
    lStack_150 = param_12;
    uStack_138 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_140 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    dStack_130 = *(double *)(PTR__kCMTimeZero_110348670 + 0x10);
    ppuVar13 = &puStack_190;
    func_0x00010c2505e0(puVar2);
    _objc_release(lStack_150);
    _objc_release(puStack_158);
    _objc_release(uStack_160);
    _objc_release(lStack_168);
    _objc_release(lStack_170);
    _objc_release(puVar2);
    _objc_release(param_3);
  }
  __Block_object_dispose(&uStack_110,8);
  _objc_release(uStack_e8);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(lVar16);
  _objc_release(lStack_1b0);
  _objc_release(uVar1);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = 8;
  __Block_object_dispose(&uStack_110);
  __Unwind_Resume();
  _objc_retain(lVar12);
  ppuVar9 = ppuVar13;
  _objc_retain(ppuVar13);
  _objc_autoreleasePoolPush();
  _objc_retain(lVar12);
  lVar16 = *(long *)(param_5 + 0x20);
  lVar15 = *(long *)(param_5 + 0x28);
  lVar7 = lVar12;
  if (lVar16 != 0 || lVar15 != 0) {
    uVar10 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c249840(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar10;
    func_0x00010c06e900();
    FUN_1058d416c(0x3ff0000000000000,lVar12,lVar16,lVar15,uVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    _objc_release(uVar10);
  }
  if (lVar7 == 0) goto LAB_1058cd1b0;
  uVar11 = *(ulong *)(param_5 + 0x30);
  func_0x00010c249840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar11;
  func_0x00010c07f180();
  if ((uVar1 & 1) == 0) {
    _objc_release(uVar11);
LAB_1058cd158:
    lVar16 = lVar7;
    FUN_1058d4464(lVar7,*(undefined8 *)(param_5 + 0x30),*(undefined8 *)(param_5 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = lVar16;
  }
  else {
    uVar10 = *(undefined8 *)(param_5 + 0x30);
    func_0x00010c249840();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar10;
    func_0x00010c06fa00();
    _objc_release(uVar10);
    _objc_release(uVar11);
    if ((int)uVar14 != 0) goto LAB_1058cd158;
  }
  lVar16 = lVar7;
  _UIImageJPEGRepresentation(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = *(long *)(*(long *)(param_5 + 0x48) + 8);
  uVar14 = *(undefined8 *)(lVar15 + 0x28);
  *(long *)(lVar15 + 0x28) = lVar16;
  _objc_release(uVar14);
  _objc_release(lVar7);
LAB_1058cd1b0:
  (**(code **)(*(long *)(param_5 + 0x40) + 0x10))
            (*(long *)(param_5 + 0x40),
             *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x48) + 8) + 0x28),0);
  _objc_autoreleasePoolPop(ppuVar9);
  _objc_release(ppuVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar12);
  return;
}



/* Entry: 1058cd05c; end: 1058cd1f3;  */

void FUN_1058cd05c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  _objc_retain(param_2);
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_autoreleasePoolPush();
  _objc_retain(param_2);
  lVar6 = *(long *)(param_1 + 0x20);
  lVar8 = *(long *)(param_1 + 0x28);
  lVar3 = param_2;
  if (lVar6 != 0 || lVar8 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c249840(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c06e900();
    FUN_1058d416c(0x3ff0000000000000,param_2,lVar6,lVar8,uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(uVar2);
  }
  if (lVar3 == 0) goto LAB_1058cd1b0;
  uVar4 = *(ulong *)(param_1 + 0x30);
  func_0x00010c249840();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c07f180();
  if ((uVar5 & 1) == 0) {
    _objc_release(uVar4);
LAB_1058cd158:
    lVar6 = lVar3;
    FUN_1058d4464(lVar3,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar6;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c249840();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c06fa00();
    _objc_release(uVar2);
    _objc_release(uVar4);
    if ((int)uVar7 != 0) goto LAB_1058cd158;
  }
  lVar6 = lVar3;
  _UIImageJPEGRepresentation(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(long *)(lVar8 + 0x28) = lVar6;
  _objc_release(uVar7);
  _objc_release(lVar3);
LAB_1058cd1b0:
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28),0);
  _objc_autoreleasePoolPop(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


