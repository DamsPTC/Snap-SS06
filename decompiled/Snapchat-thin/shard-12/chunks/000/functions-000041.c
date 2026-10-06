/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c97050; end: 108c970db; -[SCLensCoreSessionPersistentStoreV2 persistedDataForLensId:] */

void FUN_108c97050(long param_1,undefined8 param_2,long param_3)

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
    _os_unfair_lock_lock(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e00e0(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c970dc; end: 108c97163; -[SCLensCoreSessionPersistentStoreV2 setSessionPersistentData:forEffectId:] */

void FUN_108c970dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c97164; end: 108c971bb; -[SCLensCoreSessionPersistentStoreV2 clearSessionData] */

void FUN_108c97164(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 108c971bc; end: 108c97267; -[SCLensCoreSessionPersistentStoreV2 lensComponent:loadPersistentStoreForLensWithId:] */

void FUN_108c971bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e00e0(uVar2,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_unlock(param_1 + 0x10);
    func_0x00010c1dad40(param_3,param_2,uVar2,param_4,0);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c97268; end: 108c9726f; -[SCLensCoreSessionPersistentStoreV2 lensComponent:lensId:savePersistentStore:] */

void FUN_108c97268(undefined8 param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1fdc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setSessionPersistentData_forEffe_11265d128,in_x4);
  return;
}



/* Entry: 108c97270; end: 108c9727b; -[SCLensCoreSessionPersistentStoreV2 .cxx_destruct] */

void FUN_108c97270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c9727c; end: 108c972ef; -[SCLensCoreCofConfigurationProvider initWithCircumstanceEngine:] */

undefined1 * FUN_108c9727c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe030;
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



/* Entry: 108c972f0; end: 108c972fb; -[SCLensCoreCofConfigurationProvider getInt:defaultValue:] */

void FUN_108c972f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_intValueForConfigKeySync_default_1125f79d0,param_3,
             param_4,0);
  return;
}



/* Entry: 108c972fc; end: 108c97307; -[SCLensCoreCofConfigurationProvider getLong:defaultValue:] */

void FUN_108c972fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b5030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_longValueForConfigKeySync_defaul_11260ae20,param_3,
             param_4,0);
  return;
}



/* Entry: 108c97308; end: 108c97313; -[SCLensCoreCofConfigurationProvider getFloat:defaultValue:] */

void FUN_108c97308(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb2cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_floatValueForConfigKeySync_defau_1125ca4d8,param_3,0
            );
  return;
}



/* Entry: 108c97314; end: 108c9731f; -[SCLensCoreCofConfigurationProvider getBoolean:defaultValue:] */

void FUN_108c97314(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,param_3,
             param_4,0);
  return;
}



/* Entry: 108c97320; end: 108c9732b; -[SCLensCoreCofConfigurationProvider getString:defaultValue:] */

void FUN_108c97320(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stringValueForConfigKeySync_defa_112675008,param_3,
             param_4,0);
  return;
}



/* Entry: 108c9732c; end: 108c973bf; -[SCLensCoreCofConfigurationProvider getByteArray:defaultValue:] */

void FUN_108c9732c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126af7d0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1195e0(uVar3,param_2,param_3,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010c296d80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c973c0; end: 108c973cb; -[SCLensCoreCofConfigurationProvider .cxx_destruct] */

void FUN_108c973c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c973cc; end: 108c976bf; -[SCLensProcessingTouchesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c973cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uStack_90;
  
  lVar15 = (long)_DAT_112779718;
  lVar1 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c277220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11277971c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar2;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b3770;
  func_0x00010c104620(PTR_PTR_1126b3770);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar13;
  func_0x00010c0720c0(lVar13,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(lVar13);
  _objc_release(lVar2);
  _objc_release(lVar1);
  iVar12 = (int)lVar5;
  if (iVar12 != 0) {
    lVar1 = param_1 + _DAT_112779720;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c1379e0();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) goto LAB_108c9769c;
  }
  puVar4 = PTR_PTR_1126db678;
  _objc_alloc();
  lVar13 = (long)_DAT_112779720;
  lVar1 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010bf8cde0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010c277360();
  _objc_retainAutoreleasedReturnValue();
  if (iVar12 == 0) {
    lVar16 = 0;
  }
  else {
    uStack_90 = param_1 + _DAT_112779724;
    _objc_loadWeakRetained();
    lVar16 = uStack_90;
    func_0x00010bf7f9c0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar7 = lVar3;
  func_0x00010bfc1d20(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010bfc1b40(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar13;
  _objc_loadWeakRetained(lVar9);
  lVar14 = lVar9;
  func_0x00010c277340();
  lVar13 = param_1 + lVar13;
  _objc_loadWeakRetained();
  lVar10 = lVar13;
  func_0x00010c22e580();
  func_0x00010c00f060(puVar4,param_2,lVar5,lVar6,lVar16,lVar7,lVar8,lVar14,(char)lVar10);
  lVar14 = (long)_DAT_112779728;
  uVar11 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar4;
  _objc_release(uVar11);
  _objc_release(lVar13);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  if (iVar12 != 0) {
    _objc_release(lVar16);
    _objc_release(uStack_90);
  }
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar15 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar15);
  lVar1 = lVar15;
  func_0x00010c277220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c127340();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar15);
  func_0x00010bf18c80(*(undefined8 *)(param_1 + lVar14));
LAB_108c9769c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 108c976c0; end: 108c9778b; -[SCLensProcessingTouchesEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c976c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long alStack_60 [2];
  long alStack_50 [2];
  
  plVar4 = alStack_60;
  lVar5 = (long)_DAT_112779728;
  if (*(long *)(param_1 + lVar5) == 0) {
    plVar4 = alStack_50;
  }
  else {
    lVar1 = param_1 + _DAT_112779718;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c277220();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c282240();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bf95920(*(undefined8 *)(param_1 + lVar5));
  }
  *plVar4 = param_1;
  plVar4[1] = (long)PTR_PTR_1126fe038;
  _objc_msgSendSuper2(plVar4,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c9778c; end: 108c977eb; -[SCLensProcessingTouchesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9778c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112779724);
  _objc_destroyWeak(param_1 + _DAT_112779718);
  _objc_destroyWeak(param_1 + _DAT_112779720);
  _objc_destroyWeak(param_1 + _DAT_11277971c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779728,0);
  return;
}



/* Entry: 108c977ec; end: 108c9799b; -[SCLensProcessingTouchProcessor initWithEffectIdsObservable:touchProcessingComponent:dirtyFrameProvider:gestureView:gestureRecognizerDelegate:touchProcessingActive:shouldBlockTouches:] */

undefined8 *
FUN_108c977ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fe040;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_7);
    *(undefined1 *)(puVar1 + 6) = param_9;
    *(undefined1 *)((long)puVar1 + 0x31) = param_8;
    _objc_storeWeak(puVar1 + 4,param_5);
    _objc_initWeak(auStack_68,puVar1);
    _objc_copyWeak(auStack_70,auStack_68);
    uVar2 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108c9799c; end: 108c979e3;  */

void FUN_108c9799c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c193d60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c979e4; end: 108c97bbb; -[SCLensProcessingTouchProcessor beginTouchProcessing] */

void FUN_108c979e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((*(char *)(param_1 + 0x31) == '\x01') && (*(long *)(param_1 + 8) == 0)) {
    puVar2 = PTR_PTR_1126db680;
    _objc_alloc();
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,*(undefined8 *)(param_1 + 0x10))
    ;
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + 0x28;
    _objc_loadWeakRetained();
    lVar1 = param_1;
    if (lVar4 != 0) {
      lVar1 = lVar4;
    }
    func_0x00010c061520(puVar2,param_2,uVar5,puVar3,param_1,lVar1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar2;
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(puVar3);
    lVar4 = param_1 + 0x20;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269020(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbd40();
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf884c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbd40();
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0fc240(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbd40();
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0f36c0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbd40();
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0b4e40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbd40();
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010c141c00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar5);
      return;
    }
  }
  return;
}



/* Entry: 108c97bbc; end: 108c97bc3; -[SCLensProcessingTouchProcessor endTouchProcessing] */

void FUN_108c97bbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3a3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cleanupGestureRecognizers_1125ac2a0);
  return;
}



/* Entry: 108c97bc4; end: 108c97bc7; -[SCLensProcessingTouchProcessor touchProcessingControllerDidProcessTouches:] */

void FUN_108c97bc4(void)

{
  return;
}



/* Entry: 108c97bc8; end: 108c97bcb; -[SCLensProcessingTouchProcessor touchProcessingControllerDidFinishInteraction:] */

void FUN_108c97bc8(void)

{
  return;
}



/* Entry: 108c97bcc; end: 108c97bcf; -[SCLensProcessingTouchProcessor touchProcessingController:didReceiveError:] */

void FUN_108c97bcc(void)

{
  return;
}



/* Entry: 108c97bd0; end: 108c97bd7; -[SCLensProcessingTouchProcessor gestureRecognizerShouldBegin:] */

undefined8 FUN_108c97bd0(void)

{
  return 1;
}



/* Entry: 108c97bd8; end: 108c97be3; -[SCLensProcessingTouchProcessor source] */

void FUN_108c97bd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08fb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b3858,PTR_s_lens_1126018e0);
  return;
}



/* Entry: 108c97be4; end: 108c97beb; -[SCLensProcessingTouchProcessor isTouchProcessingEnabled] */

undefined1 FUN_108c97be4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x31);
}



/* Entry: 108c97bec; end: 108c97bf3; -[SCLensProcessingTouchProcessor isAnyViewfinderGestureRecognizer:] */

void FUN_108c97bec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd76f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_hasGestureRecognizer__1125d3760);
  return;
}



/* Entry: 108c97bf4; end: 108c97bfb; -[SCLensProcessingTouchProcessor viewfinderShouldBlockTouchesForGestureRecognizer:] */

undefined1 FUN_108c97bf4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



/* Entry: 108c97bfc; end: 108c97c67; -[SCLensProcessingTouchProcessor isViewfinderTouchProcessingGestureRecognizer:] */

bool FUN_108c97bfc(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010c277400(lVar2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = param_3 == lVar2;
    _objc_release(param_3);
    _objc_release(lVar2);
  }
  return bVar1;
}



/* Entry: 108c97c68; end: 108c97d97; -[SCLensProcessingTouchProcessor isGestureRecognizer:ofType:] */

bool FUN_108c97c68(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
LAB_108c97d78:
    bVar1 = false;
  }
  else {
    puVar2 = PTR_PTR_1126b3860;
    func_0x00010c268bc0();
    if (((ulong)puVar2 & param_4) == 0) {
      puVar2 = PTR_PTR_1126b3860;
      func_0x00010bf883c0();
      if (((ulong)puVar2 & param_4) == 0) {
        puVar2 = PTR_PTR_1126b3860;
        func_0x00010c0fc1c0();
        if (((ulong)puVar2 & param_4) == 0) {
          puVar2 = PTR_PTR_1126b3860;
          func_0x00010c0f35e0();
          if (((ulong)puVar2 & param_4) == 0) {
            puVar2 = PTR_PTR_1126b3860;
            func_0x00010c0b4cc0();
            if (((ulong)puVar2 & param_4) == 0) {
              puVar2 = PTR_PTR_1126b3860;
              func_0x00010c141920();
              if (((ulong)puVar2 & param_4) == 0) goto LAB_108c97d78;
              lVar3 = *(long *)(param_1 + 8);
              func_0x00010c141c00(lVar3);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              lVar3 = *(long *)(param_1 + 8);
              func_0x00010c0b4e40(lVar3);
              _objc_retainAutoreleasedReturnValue();
            }
          }
          else {
            lVar3 = *(long *)(param_1 + 8);
            func_0x00010c0f36c0(lVar3);
            _objc_retainAutoreleasedReturnValue();
          }
        }
        else {
          lVar3 = *(long *)(param_1 + 8);
          func_0x00010c0fc240(lVar3);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        lVar3 = *(long *)(param_1 + 8);
        func_0x00010bf884c0(lVar3);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      lVar3 = *(long *)(param_1 + 8);
      func_0x00010c269020(lVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    bVar1 = param_3 == lVar3;
    _objc_release();
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108c97d98; end: 108c97d9f; -[SCLensProcessingTouchProcessor blockTouchesWithNormalizedTouchPoints:touchTypeMask:] */

void FUN_108c97d98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22e5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_shouldBlockTouchesWithNormalized_1126693a0);
  return;
}



/* Entry: 108c97da0; end: 108c97ec3; -[SCLensProcessingTouchProcessor _handleTap:] */

void FUN_108c97da0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x40) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar1);
  }
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  puVar2 = auStack_38;
  _objc_loadWeakRetained(puVar2);
  func_0x00010c183960();
  _objc_release(puVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108c97ec4;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = 0;
  func_0x000107c27d90(0,&puStack_60);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  _objc_release(uVar3);
  _dispatch_time(0,1000000000);
  func_0x000107c27d84();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108c97ec4; end: 108c97efb;  */

void FUN_108c97ec4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c183960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c97efc; end: 108c98063; -[SCLensProcessingTouchProcessor _handleContinuousRendering:] */

void FUN_108c97efc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x40) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_release(uVar1);
  }
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  lVar2 = param_3;
  func_0x00010c252440();
  if (lVar2 == 1) {
    puVar3 = auStack_38;
    _objc_loadWeakRetained(puVar3);
    func_0x00010c183960();
    _objc_release(puVar3);
  }
  else {
    lVar2 = param_3;
    func_0x00010c252440();
    if (((lVar2 == 3) || (lVar2 = param_3, func_0x00010c252440(), lVar2 == 4)) ||
       (lVar2 = param_3, func_0x00010c252440(), lVar2 == 5)) {
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_108c98064;
      puStack_48 = &UNK_1108434b0;
      _objc_copyWeak(auStack_40,auStack_38);
      uVar1 = 0;
      func_0x000107c27d90(0,&puStack_60);
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = uVar1;
      _objc_release(uVar4);
      _dispatch_time(0,1000000000);
      func_0x000107c27d84();
      _objc_destroyWeak(auStack_40);
    }
  }
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108c98064; end: 108c9809b;  */

void FUN_108c98064(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c183960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c9809c; end: 108c980a7; -[SCLensProcessingTouchProcessor effectIds] */

void FUN_108c9809c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x48,1);
  return;
}



/* Entry: 108c980a8; end: 108c980af; -[SCLensProcessingTouchProcessor setEffectIds:] */

void FUN_108c980a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108c980b0; end: 108c9811f; -[SCLensProcessingTouchProcessor .cxx_destruct] */

void FUN_108c980b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c98120; end: 108c982fb; -[SCLensProcessingCameraTrackingEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c98120(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + _DAT_112779754;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b3770;
  func_0x00010c08ec60(PTR_PTR_1126b3770);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar5 != 0) {
    lVar1 = param_1 + _DAT_112779758;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf29960();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_initWeak(auStack_50,param_1);
    param_1 = param_1 + _DAT_11277975c;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c278d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_50);
    _objc_copyWeak(auStack_58,auStack_48);
    func_0x00010c0e33e0(lVar1);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 108c982fc; end: 108c98433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c982fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126db688;
    _objc_alloc();
    lVar3 = lVar1 + _DAT_112779764;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bdebb40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar6 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c299c80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c054f40();
    uVar8 = *(undefined8 *)(lVar1 + _DAT_112779760);
    *(undefined **)(lVar1 + _DAT_112779760) = puVar2;
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(param_1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c98434; end: 108c984f3; -[SCLensProcessingCameraTrackingEntryPoint _createCameraDeviceObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c98434(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1 = param_1 + _DAT_112779758;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0b7ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2528c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 108c984f4; end: 108c985c7;  */

void FUN_108c984f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0xffffffffffffffff;
  func_0x00010c0e39e0(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c985c8; end: 108c985f7;  */

void FUN_108c985c8(long param_1,undefined8 param_2)

{
  func_0x00010bf70d80();
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 108c985f8; end: 108c98657; -[SCLensProcessingCameraTrackingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c985f8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11277975c);
  _objc_destroyWeak(param_1 + _DAT_112779758);
  _objc_destroyWeak(param_1 + _DAT_112779764);
  _objc_destroyWeak(param_1 + _DAT_112779754);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779760,0);
  return;
}



/* Entry: 108c98658; end: 108c987f3; -[SCLensProcessingCameraTrackingWorkflow initWithTrackingComponent:performer:cameraDeviceObservable:videoDataSourceObservable:] */

undefined8 *
FUN_108c98658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fe048;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar3);
    _objc_initWeak(auStack_58,puVar1);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_3);
    uVar3 = param_6;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[4];
    puVar1[4] = uVar3;
    _objc_release(uVar4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108c987f4; end: 108c98847;  */

void FUN_108c987f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beb0be0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c98848; end: 108c98b6f; -[SCLensProcessingCameraTrackingWorkflow _setupTrackingWithComponent:videoDataSource:] */

void FUN_108c98848(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x18));
  if (param_4 != 0) {
    _objc_initWeak(auStack_78,param_3);
    lVar2 = param_4;
    func_0x00010bf722c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_108c98b70;
    puStack_88 = &UNK_110842c58;
    _objc_copyWeak(auStack_80,auStack_78);
    lVar3 = lVar2;
    func_0x00010c25ff60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010bf7dfe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x108c98bb8;
    puStack_b0 = &UNK_110842c58;
    _objc_copyWeak(auStack_a8,auStack_78);
    lVar3 = lVar2;
    func_0x00010c25ff60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010bf79920(param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x108c98c00;
    puStack_d8 = &UNK_110842c58;
    _objc_copyWeak(auStack_d0,auStack_78);
    lVar3 = lVar2;
    func_0x00010c25ff60(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    uStack_110 = 0x3032000000;
    pcStack_108 = FUN_108c98c48;
    uStack_100 = 0x108c98c58;
    uStack_f8 = 0;
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0e0ea0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_128,auStack_78);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_128);
    __Block_object_dispose(&uStack_120,8);
    _objc_release(uStack_f8);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108c98b70; end: 108c98c47;  */

void FUN_108c98b70(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bef6900();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c98c48; end: 108c98c5f;  */

void FUN_108c98c48(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108c98c60; end: 108c98cfb;  */

void FUN_108c98c60(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(ulong *)(lVar3 + 0x28);
  if (uVar1 == 0) {
    _objc_retain(param_2);
    param_1 = *(long *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_2;
  }
  else {
    func_0x00010c071f40();
    if ((uVar1 & 1) != 0) goto LAB_108c98ce8;
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_2;
    _objc_release(uVar2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010c13c040();
  }
  _objc_release(param_1);
LAB_108c98ce8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c98cfc; end: 108c98d43; -[SCLensProcessingCameraTrackingWorkflow .cxx_destruct] */

void FUN_108c98cfc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c98d44; end: 108c98e0b; -[SCLensProcessingURIServiceProvider initWithPerformer:lensApplicator:] */

undefined1 *
FUN_108c98d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe050;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c98e0c; end: 108c98f03; -[SCLensProcessingURIServiceProvider registerHandlersWithProviders:] */

void FUN_108c98e0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [128];
  long lStack_158;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar2 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar15 = param_3;
  func_0x00010bf52a60();
  if (lVar15 != 0) {
    lVar14 = *plStack_100;
    do {
      lVar16 = 0;
      do {
        if (*plStack_100 != lVar14) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010be89720(param_1);
        lVar16 = lVar16 + 1;
      } while (lVar15 != lVar16);
      lVar15 = param_3;
      puVar2 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar15 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar13 = &uStack_220;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puVar17 = auStack_1d8;
  puVar1 = (undefined1 *)puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar15 = *plStack_210;
    do {
      puVar17 = (undefined1 *)0x0;
      do {
        if (*plStack_210 != lVar15) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010bed1d20(param_3);
        puVar17 = puVar17 + 1;
      } while (puVar1 != puVar17);
      puVar17 = auStack_1d8;
      puVar1 = (undefined1 *)puVar2;
      puVar13 = &uStack_220;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar13);
  _objc_retain(puVar17);
  puVar3 = &UNK_10f510ff3;
  func_0x000107c31820();
  puVar1 = (undefined1 *)puVar2;
  func_0x00010be33920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined1 *)0x0) {
    if (puVar17 == (undefined1 *)0x0) goto LAB_108c992bc;
    puVar11 = PTR_PTR_1126db698;
    _objc_alloc(PTR_PTR_1126db698);
    puVar12 = (undefined1 *)puVar13;
    func_0x00010c28f280(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059da0(puVar11);
    (**(code **)(puVar17 + 0x10))(puVar17,puVar11);
  }
  else {
    puVar4 = (undefined1 *)puVar13;
    func_0x00010c094540(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = (undefined1 *)puVar2;
    func_0x00010be4adc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar11 = PTR_PTR_1126db690;
    _objc_alloc(PTR_PTR_1126db690);
    puVar4 = (undefined1 *)puVar13;
    func_0x00010c28f280(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)puVar13;
    func_0x00010bfe5ec0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined1 *)puVar13;
    func_0x00010c094540(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined1 *)puVar13;
    func_0x00010c0cc940(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined1 *)puVar13;
    func_0x00010bf4dac0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined1 *)puVar13;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = (undefined1 *)puVar13;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059e20(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar18 = *(undefined8 *)((long)puVar2 + 0x10);
    _objc_retain(uVar18);
    func_0x00010bf7f9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar18);
    _objc_retain(puVar17);
    _objc_retain(puVar2);
    func_0x00010bfd31a0(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar17);
    _objc_release(uVar18);
    _objc_release(puVar2);
    _objc_release(uVar18);
  }
  _objc_release(puVar11);
  _objc_release(puVar12);
LAB_108c992bc:
  _objc_release(puVar1);
  func_0x000107c31828(puVar3);
  _objc_release(puVar17);
  _objc_release(puVar13);
  return;
}



/* Entry: 108c98f04; end: 108c98ffb; -[SCLensProcessingURIServiceProvider unregisterHandlersWithProviders:] */

void FUN_108c98f04(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar12 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar14 = auStack_c8;
  puVar1 = param_3;
  func_0x00010bf52a60();
  if (puVar1 != (undefined1 *)0x0) {
    lVar13 = *plStack_100;
    do {
      puVar14 = (undefined1 *)0x0;
      do {
        if (*plStack_100 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010bed1d20(param_1);
        puVar14 = puVar14 + 1;
      } while (puVar1 != puVar14);
      puVar14 = auStack_c8;
      puVar1 = param_3;
      puVar12 = &uStack_110;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  _objc_retain(puVar14);
  puVar2 = &UNK_10f510ff3;
  func_0x000107c31820();
  puVar1 = param_3;
  func_0x00010be33920();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined1 *)0x0) {
    if (puVar14 == (undefined1 *)0x0) goto LAB_108c992bc;
    puVar10 = PTR_PTR_1126db698;
    _objc_alloc(PTR_PTR_1126db698);
    puVar11 = (undefined1 *)puVar12;
    func_0x00010c28f280(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059da0(puVar10);
    (**(code **)(puVar14 + 0x10))(puVar14,puVar10);
  }
  else {
    puVar3 = (undefined1 *)puVar12;
    func_0x00010c094540(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_3;
    func_0x00010be4adc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar10 = PTR_PTR_1126db690;
    _objc_alloc(PTR_PTR_1126db690);
    puVar3 = (undefined1 *)puVar12;
    func_0x00010c28f280(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar12;
    func_0x00010bfe5ec0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = (undefined1 *)puVar12;
    func_0x00010c094540(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = (undefined1 *)puVar12;
    func_0x00010c0cc940(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined1 *)puVar12;
    func_0x00010bf4dac0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined1 *)puVar12;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined1 *)puVar12;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059e20(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    uVar15 = *(undefined8 *)(param_3 + 0x10);
    _objc_retain(uVar15);
    func_0x00010bf7f9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar15);
    _objc_retain(puVar14);
    _objc_retain(param_3);
    func_0x00010bfd31a0(puVar1);
    _objc_release(param_3);
    _objc_release(puVar14);
    _objc_release(uVar15);
    _objc_release(param_3);
    _objc_release(uVar15);
  }
  _objc_release(puVar10);
  _objc_release(puVar11);
LAB_108c992bc:
  _objc_release(puVar1);
  func_0x000107c31828(puVar2);
  _objc_release(puVar14);
  _objc_release(puVar12);
  return;
}



/* Entry: 108c98ffc; end: 108c9932f; -[SCLensProcessingURIServiceProvider performRequest:completion:] */

void FUN_108c98ffc(long param_1,undefined8 param_2,long param_3,long param_4)

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
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f510ff3;
  func_0x000107c31820();
  lVar2 = param_1;
  func_0x00010be33920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    if (param_4 == 0) goto LAB_108c992bc;
    puVar10 = PTR_PTR_1126db698;
    _objc_alloc(PTR_PTR_1126db698);
    lVar11 = param_3;
    func_0x00010c28f280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059da0(puVar10);
    (**(code **)(param_4 + 0x10))(param_4,puVar10);
  }
  else {
    lVar3 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010be4adc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar10 = PTR_PTR_1126db690;
    _objc_alloc(PTR_PTR_1126db690);
    lVar3 = param_3;
    func_0x00010c28f280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c0cc940(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010bf4dac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059e20(puVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar12);
    func_0x00010bf7f9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar12);
    _objc_retain(param_4);
    _objc_retain(param_1);
    func_0x00010bfd31a0(lVar2);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(uVar12);
    _objc_release(param_1);
    _objc_release(uVar12);
  }
  _objc_release(puVar10);
  _objc_release(lVar11);
LAB_108c992bc:
  _objc_release(lVar2);
  func_0x000107c31828(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108c99330; end: 108c993ef;  */

void FUN_108c99330(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010c0f88c0(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 108c993f0; end: 108c9952f;  */

void FUN_108c993f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  func_0x000107c31820(&UNK_10f51100f);
  puVar1 = PTR_PTR_1126db698;
  _objc_alloc(PTR_PTR_1126db698);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c28f280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b780(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cc0c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c13b800(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf63640(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059dc0(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6,puVar1);
  }
  func_0x00010c0bb420(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108c99530; end: 108c99597; -[SCLensProcessingURIServiceProvider reset] */

void FUN_108c99530(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c31820(&UNK_10f511052);
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 8),param_2,&PTR___NSConcreteGlobalBlock_110ac03e8);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108c99598; end: 108c996bf;  */

void FUN_108c99598(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar3 = *(ulong *)(lVar8 * 8);
      func_0x00010bfd3220();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      _objc_opt_respondsToSelector();
      if ((uVar4 & 1) != 0) {
        func_0x00010c137fe0(uVar3);
      }
      _objc_release(uVar3);
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = *(undefined **)(param_3 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    func_0x00010c0ecd20(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar5);
    puVar6 = puVar5;
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 108c996c0; end: 108c99723; -[SCLensProcessingURIServiceProvider _handlerProvidersForScheme:] */

void FUN_108c996c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = *(undefined **)(param_1 + 8);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSOrderedSet_1126b78c0;
    func_0x00010c0ecd20(PTR__OBJC_CLASS___NSOrderedSet_1126b78c0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108c99724; end: 108c99873; -[SCLensProcessingURIServiceProvider _registerHandlerProvider:] */

void FUN_108c99724(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c1504a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c141f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be33980(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0d3c80();
    func_0x00010befa120();
    lVar5 = lVar4;
    func_0x00010bf51e00(lVar4);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,lVar5,lVar1);
    _objc_release(lVar5);
    puVar6 = *(undefined **)(param_1 + 0x20);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c174bc0(puVar6,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar6;
    _objc_release(uVar7);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c99874; end: 108c99a2b; -[SCLensProcessingURIServiceProvider _handlerForScheme:andPath:] */

void FUN_108c99874(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  func_0x00010be33980(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  lVar6 = param_1;
  func_0x00010bf52a60();
  puVar10 = (undefined1 *)0x0;
  if (lVar6 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_1);
        }
        puVar10 = *(undefined1 **)(lStack_128 + lVar13 * 8);
        puVar1 = puVar10;
        func_0x00010c141f00();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        if (puVar2 == (undefined1 *)0x0) {
LAB_108c999b8:
          func_0x00010bfd3220();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          goto LAB_108c999d4;
        }
        uVar3 = param_4;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        puVar8 = (undefined8 *)puVar2;
        func_0x00010bfda7c0();
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) goto LAB_108c999b8;
        _objc_release(puVar2);
        lVar13 = lVar13 + 1;
      } while (lVar6 != lVar13);
      lVar6 = param_1;
      puVar8 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
    puVar10 = (undefined1 *)0x0;
  }
LAB_108c999d4:
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar10 = (undefined1 *)puVar8;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar10;
  func_0x00010c08fa60();
  _objc_release(puVar10);
  if (puVar1 != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)puVar8;
    func_0x00010c1504a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010be33980(param_4,param_2,puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    uVar4 = uVar3;
    func_0x00010c0d3c80(uVar3);
    func_0x00010c12d360();
    uVar5 = uVar4;
    func_0x00010bf51e00(uVar4);
    uVar11 = *(undefined8 *)(param_4 + 8);
    puVar10 = (undefined1 *)puVar8;
    func_0x00010c1504a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar11,param_2,uVar5,puVar10);
    _objc_release(puVar10);
    _objc_release(uVar5);
    lVar6 = *(long *)(param_4 + 0x20);
    func_0x00010bf529e0();
    if (lVar6 != 0) {
      uVar7 = *(undefined8 *)(param_4 + 0x20);
      func_0x00010c0d3c80();
      func_0x00010c12d360();
      uVar11 = uVar7;
      func_0x00010bf51e00();
      uVar9 = *(undefined8 *)(param_4 + 0x20);
      *(undefined8 *)(param_4 + 0x20) = uVar11;
      _objc_release(uVar9);
      _objc_release(uVar7);
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 108c99a2c; end: 108c99b73; -[SCLensProcessingURIServiceProvider _unregisterHandlerProvider:] */

void FUN_108c99a2c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c1504a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010be33980(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c0d3c80(lVar2);
    func_0x00010c12d360();
    lVar4 = lVar1;
    func_0x00010bf51e00(lVar1);
    uVar7 = *(undefined8 *)(param_1 + 8);
    lVar3 = param_3;
    func_0x00010c1504a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7,param_2,lVar4,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0d3c80();
      func_0x00010c12d360();
      uVar7 = uVar5;
      func_0x00010bf51e00();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = uVar7;
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108c99b74; end: 108c99cbf; -[SCLensProcessingURIServiceProvider _lensForLensId:] */

void FUN_108c99b74(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010c08fa60();
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x18);
    _objc_retain(lVar5);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108c99cc0;
    puStack_60 = &UNK_110857a38;
    _objc_retain(param_3);
    ppuVar1 = &puStack_78;
    lStack_58 = param_3;
    _objc_retainBlock(ppuVar1);
    lVar2 = lVar5;
    func_0x00010bf5e060();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar4 = lVar5;
      func_0x00010bf07da0(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010bfb2040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
    }
    else {
      _objc_retain(lVar3);
      lVar6 = lVar3;
    }
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(ppuVar1);
    _objc_release(lStack_58);
    _objc_release(lVar5);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 108c99cc0; end: 108c99d07;  */

undefined8 FUN_108c99cc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 108c99d08; end: 108c99eab; -[SCLensProcessingURIServiceProvider _handlerForRequest:] */

void FUN_108c99d08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f511094;
  func_0x000107c31820(&UNK_10f511094);
  puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_alloc(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
  uVar3 = param_3;
  func_0x00010c28f280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057bc0(puVar2,param_2,uVar3,0);
  _objc_release(uVar3);
  func_0x00010c1f6900(puVar2,param_2,0);
  puVar4 = puVar2;
  func_0x00010bdc2b80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar3 = param_3;
  func_0x00010c28f280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be33940(param_1,param_2,uVar8,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(puVar7);
  _objc_release(puVar2);
  func_0x000107c31828(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108c99eac; end: 108c99eb3; -[SCLensProcessingURIServiceProvider uriPlugins] */

undefined8 FUN_108c99eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108c99eb4; end: 108c99ebb; -[SCLensProcessingURIServiceProvider dirtyFrameProvider] */

undefined8 FUN_108c99eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108c99ebc; end: 108c99eeb; -[SCLensProcessingURIServiceProvider setDirtyFrameProvider:] */

void FUN_108c99ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108c99eec; end: 108c99f3f; -[SCLensProcessingURIServiceProvider .cxx_destruct] */

void FUN_108c99eec(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c99f40; end: 108c9a263; -[SCLensInfoFeatureEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c99f40(long param_1)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  
  puVar1 = PTR_PTR_1126db6a0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_11277979c;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar21;
  func_0x00010c091d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  FUN_108c9a264();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c091b60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fe60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  FUN_108c9a264();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c096640();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  FUN_108c9a264();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c093aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x000108c9a288();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010bf4b320();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = param_1 + _DAT_112779794;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar22;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar23 = 0;
  }
  else {
    lVar23 = param_1 + _DAT_1127797a8;
    _objc_loadWeakRetained();
  }
  lVar15 = lVar23;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = param_1 + _DAT_1127797ac;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar24;
  func_0x00010c090b20();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c08d020();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126db6a8;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x000108c9a288();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010bf2b640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023520();
  lVar26 = (long)_DAT_11277978c;
  uVar25 = *(undefined8 *)(param_1 + lVar26);
  *(undefined **)(param_1 + lVar26) = puVar1;
  _objc_release(uVar25);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(puVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar24);
  _objc_release(lVar15);
  _objc_release(lVar23);
  _objc_release(lVar14);
  _objc_release(lVar22);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar21);
                    /* WARNING: Could not recover jumptable at 0x00010beef6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + lVar26),PTR_s_activate_112599760)
  ;
  return;
}



/* Entry: 108c9a264; end: 108c9a2ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9a264(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127797a0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c9a2ac; end: 108c9a303; -[SCLensInfoFeatureEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9a2ac(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf65b20(*(undefined8 *)(param_1 + _DAT_11277978c));
  puStack_28 = PTR_PTR_1126fe058;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c9a304; end: 108c9a393; -[SCLensInfoFeatureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9a304(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127797ac);
  _objc_destroyWeak(param_1 + _DAT_1127797a8);
  _objc_destroyWeak(param_1 + _DAT_1127797a4);
  _objc_destroyWeak(param_1 + _DAT_1127797a0);
  _objc_destroyWeak(param_1 + _DAT_11277979c);
  _objc_destroyWeak(param_1 + _DAT_112779798);
  _objc_destroyWeak(param_1 + _DAT_112779794);
  _objc_destroyWeak(param_1 + _DAT_112779790);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277978c,0);
  return;
}



/* Entry: 108c9a394; end: 108c9a49b; -[SCLensProcessingEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9a394(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010c2bd460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_60 = PTR_PTR_1126fe060;
    lStack_68 = param_1;
    _objc_msgSendSuper2(&lStack_68,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126afc98;
    func_0x00010bf0c040();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_1127797b8;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar2;
    _objc_release(uVar3);
    lVar1 = param_1;
    func_0x00010c2bd460(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_108c9a49c;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x00010bf95ca0();
    _objc_release(lVar1);
    func_0x00010c117720(*(undefined8 *)(param_1 + lVar4));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c9a49c; end: 108c9a4bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9a49c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127797b8),
             PTR_s_finish_1125c9748);
  return;
}



/* Entry: 108c9a4c0; end: 108c9a5e7;  */

void FUN_108c9a4c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126db6b0;
  _objc_alloc(PTR_PTR_1126db6b0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe8380(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ed100(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e8de0(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfac7c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf21c80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf30c20(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01cb80(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),puVar1,param_2
                      ,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x00010bf57940();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf56dc0(uVar2,param_2,puVar1,*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x48));
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c9a5e8; end: 108c9a5ef;  */

void FUN_108c9a5e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf44430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_componentManager_1125aeab0);
  return;
}



/* Entry: 108c9a5f0; end: 108c9a67f;  */

void FUN_108c9a5f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1126db6b8;
  _objc_alloc(PTR_PTR_1126db6b8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025440(puVar3,param_2,uVar1,uVar2,uVar4,*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c9a680; end: 108c9a72f;  */

void FUN_108c9a680(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  puVar9 = PTR_PTR_1126db6c0;
  _objc_alloc(PTR_PTR_1126db6c0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0005e0(puVar9,param_2,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar10);
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108c9a730; end: 108c9a737;  */

void FUN_108c9a730(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0f8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_audioProcessor_1125a17d8);
  return;
}



/* Entry: 108c9a738; end: 108c9a80b;  */

void FUN_108c9a738(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126db6d0;
  _objc_alloc(PTR_PTR_1126db6d0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00ef40(puVar2,param_2,uVar1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108c9a80c; end: 108c9a817;  */

void FUN_108c9a80c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c228c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setupInMemoryAssetProvider__112667d30,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108c9a818; end: 108c9a883;  */

void FUN_108c9a818(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf9e660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c229b80(param_2);
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c9a884; end: 108c9a8bb;  */

void FUN_108c9a884(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c278c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_tracker_11267bd48);
  return;
}



/* Entry: 108c9a8bc; end: 108c9a9fb;  */

void FUN_108c9a8bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar7 = param_2;
  func_0x00010bf44420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c278c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec6f60(lVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar4 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c092920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec2340(lVar1);
  _objc_release(param_2);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108c9a9fc; end: 108c9af6f; -[SCLensProcessingEntryPoint _startWorkflowWithLensProcessingCore:lensEffectWarmupComponent:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9a9fc(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(char *)(param_1 + _DAT_1127797c4) == '\x01') {
    puVar4 = PTR_PTR_1126db6f8;
    _objc_alloc();
    puVar1 = param_3;
    func_0x00010c115b00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    func_0x00010bf07ce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00f0a0();
  }
  else {
    puVar1 = PTR_PTR_1126db700;
    _objc_alloc(PTR_PTR_1126db700);
    func_0x00010c028bc0();
    puVar2 = (undefined *)(param_1 + _DAT_1127797f8);
    _objc_loadWeakRetained(puVar2);
    puVar3 = puVar2;
    func_0x00010c1308c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126db708;
    _objc_alloc(PTR_PTR_1126db708);
    func_0x00010c03e320();
    puVar4 = PTR_PTR_1126db710;
    _objc_alloc();
    puVar5 = param_3;
    func_0x00010c115b00(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_3;
    func_0x00010bf07ce0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00f0c0();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_initWeak(auStack_80,puVar4);
  uVar23 = *(undefined8 *)(param_1 + _DAT_1127797e0);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_108c9af70;
  puStack_90 = &UNK_110ac0648;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c0e33e0(uVar23);
  uVar23 = *(undefined8 *)(param_1 + _DAT_1127797f0);
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c0e33e0(uVar23);
  lVar7 = param_1 + _DAT_112779818;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c092300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c129140();
  _objc_release(lVar7);
  puVar2 = PTR_PTR_1126db718;
  _objc_alloc();
  lVar24 = (long)_DAT_1127797c0;
  lVar7 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar9 = lVar7;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c1495c0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + _DAT_1127797ec);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = (long)_DAT_1127797f8;
  lVar11 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c1159e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf0f860();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + lVar25;
  _objc_loadWeakRetained();
  lVar17 = lVar25;
  func_0x00010c1308c0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_1127797b0;
  _objc_loadWeakRetained();
  lVar20 = param_1 + _DAT_1127797fc;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar22 = lVar24;
  func_0x00010c1510c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a4c0(puVar2);
  func_0x00010c2272c0(param_1);
  _objc_release(puVar2);
  _objc_release(lVar22);
  _objc_release(lVar24);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar25);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(uVar23);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar7);
  func_0x00010c2bd460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17a60();
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108c9af70; end: 108c9afbb;  */

void FUN_108c9af70(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c178180(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c9afbc; end: 108c9b01f;  */

void FUN_108c9afbc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c18b5e0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c9b020; end: 108c9b383; -[SCLensProcessingEntryPoint _subscribeOnProcessingAggregatorWithComponentManager:lensProcessingPerformer:tracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9b020(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar6 = *(long *)(param_1 + _DAT_1127797bc);
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + _DAT_1127797f0));
  lVar1 = param_1 + _DAT_112779800;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c094e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_60,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112779804;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27e840();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_68,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_70,*(undefined8 *)(param_1 + _DAT_1127797f4));
  _objc_initWeak(auStack_78,*(undefined8 *)(param_1 + _DAT_1127797e0));
  _objc_initWeak(auStack_80,param_3);
  _objc_initWeak(auStack_88,param_5);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127797ec);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bef0300();
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = lVar6 == 6;
  _objc_copyWeak(auStack_c8,auStack_68);
  _objc_copyWeak(auStack_c0,auStack_70);
  _objc_copyWeak(auStack_b8,auStack_58);
  _objc_copyWeak(auStack_b0,auStack_60);
  _objc_copyWeak(auStack_a8,auStack_88);
  _objc_copyWeak(auStack_a0,auStack_80);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_98,auStack_78);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_98);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108c9b384; end: 108c9b66f;  */

void FUN_108c9b384(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010bf1f3c0();
  if (param_2 == 0) {
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf65b20();
  }
  else {
    if (*(char *)(param_1 + 0x60) == '\x01') {
      lVar1 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar3);
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bc960();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar1);
      lVar3 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1 + 0x28;
      _objc_loadWeakRetained(lVar2);
      lVar4 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19ef60();
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
    else {
      lVar1 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1 + 0x38;
      _objc_loadWeakRetained(lVar3);
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c229bc0(lVar2);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1 + 0x30;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar3);
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bc960();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1 + 0x48;
      _objc_loadWeakRetained(lVar1);
      lVar3 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar3);
      lVar2 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bc800();
      _objc_release(lVar2);
      _objc_release(lVar3);
      _objc_release(lVar1);
      lVar1 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1 + 0x50;
      _objc_loadWeakRetained(lVar3);
      lVar4 = lVar3;
      func_0x00010c091900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c193d40(lVar2);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1 + 0x40;
      _objc_loadWeakRetained(lVar1);
      lVar3 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e39a0();
    }
    _objc_release(lVar3);
    _objc_release(lVar1);
    param_1 = param_1 + 0x58;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef6e0();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c9b670; end: 108c9b73f;  */

void FUN_108c9b670(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_copyWeak(param_1 + 0x28,param_2 + 0x28);
  _objc_copyWeak(param_1 + 0x30,param_2 + 0x30);
  _objc_copyWeak(param_1 + 0x38,param_2 + 0x38);
  _objc_copyWeak(param_1 + 0x40,param_2 + 0x40);
  _objc_copyWeak(param_1 + 0x48,param_2 + 0x48);
  _objc_copyWeak(param_1 + 0x50,param_2 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x58,param_2 + 0x58);
  return;
}



/* Entry: 108c9b740; end: 108c9b74f; -[SCLensProcessingEntryPoint workflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9b740(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11277982c,1);
  return;
}



/* Entry: 108c9b750; end: 108c9b75b; -[SCLensProcessingEntryPoint setWorkflow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9b750(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 108c9b75c; end: 108c9b927; -[SCLensProcessingEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c9b75c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277982c,0);
  _objc_storeStrong(param_1 + _DAT_1127797e4,0);
  _objc_storeStrong(param_1 + _DAT_1127797d4,0);
  _objc_storeStrong(param_1 + _DAT_1127797d8,0);
  _objc_destroyWeak(param_1 + _DAT_1127797dc);
  _objc_storeStrong(param_1 + _DAT_112779828,0);
  _objc_storeStrong(param_1 + _DAT_1127797d0,0);
  _objc_storeStrong(param_1 + _DAT_1127797cc,0);
  _objc_storeStrong(param_1 + _DAT_112779824,0);
  _objc_storeStrong(param_1 + _DAT_112779820,0);
  _objc_storeStrong(param_1 + _DAT_11277981c,0);
  _objc_destroyWeak(param_1 + _DAT_112779818);
  _objc_destroyWeak(param_1 + _DAT_112779814);
  _objc_destroyWeak(param_1 + _DAT_112779804);
  _objc_destroyWeak(param_1 + _DAT_1127797e8);
  _objc_destroyWeak(param_1 + _DAT_112779810);
  _objc_destroyWeak(param_1 + _DAT_11277980c);
  _objc_destroyWeak(param_1 + _DAT_1127797f8);
  _objc_destroyWeak(param_1 + _DAT_112779800);
  _objc_destroyWeak(param_1 + _DAT_1127797c0);
  _objc_destroyWeak(param_1 + _DAT_112779808);
  _objc_destroyWeak(param_1 + _DAT_1127797fc);
  _objc_storeStrong(param_1 + _DAT_1127797b8,0);
  _objc_destroyWeak(param_1 + _DAT_1127797b0);
  _objc_storeStrong(param_1 + _DAT_1127797b4,0);
  _objc_storeStrong(param_1 + _DAT_1127797f4,0);
  _objc_storeStrong(param_1 + _DAT_1127797f0,0);
  _objc_storeStrong(param_1 + _DAT_1127797e0,0);
  _objc_storeStrong(param_1 + _DAT_1127797ec,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127797c8,0);
  return;
}



/* Entry: 108c9b928; end: 108c9b943;  */

void FUN_108c9b928(void)

{
  _objc_opt_new(PTR_PTR_1126db720);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c9b944; end: 108c9b9df;  */

void FUN_108c9b944(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126db728;
  _objc_alloc(PTR_PTR_1126db728);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0381e0(puVar1,param_2,uVar2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c9b9e0; end: 108c9ba17;  */

void FUN_108c9b9e0(void)

{
  _objc_opt_new(PTR_PTR_1126db730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c9ba18; end: 108c9bac3;  */

void FUN_108c9ba18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126db740;
  _objc_alloc(PTR_PTR_1126db740);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffc8a0(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


