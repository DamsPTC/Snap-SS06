/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106ad1c58; end: 106ad1c63; -[SCLegacyBlizzardImpl .cxx_destruct] */

void FUN_106ad1c58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ad1c64; end: 106ad1d17; -[SCNoDepBlizzardImpl logUserNotAddedEvent:] */

void FUN_106ad1c64(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d280(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010bdc6ac0(param_1,param_2,*(undefined8 *)(param_1 + 0x30),param_3,
                          &PTR____CFConstantStringClassReference_110e6d5d8);
    }
    else {
      func_0x00010c0b2b40(*(long *)(param_1 + 0x20),param_2,param_3);
    }
  }
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ad1d18; end: 106ad1d9f; -[SCNoDepBlizzardImpl logUserExternallyTrackedEvent:userGuid:] */

void FUN_106ad1d18(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x10);
  if (param_3 != 0) {
    func_0x00010c21e4c0(param_3,param_2,param_4);
    func_0x00010be5a660(param_1,param_2,param_3);
  }
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ad1da0; end: 106ad1da7; -[SCNoDepBlizzardImpl logger] */

undefined8 FUN_106ad1da0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ad1da8; end: 106ad1daf; -[SCNoDepBlizzardImpl setLogger:] */

void FUN_106ad1da8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106ad1db0; end: 106ad1db7; -[SCNoDepBlizzardImpl userSession] */

undefined8 FUN_106ad1db0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ad1db8; end: 106ad1dbf; -[SCNoDepBlizzardImpl setUserSession:] */

void FUN_106ad1db8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106ad1dc0; end: 106ad1dc7; -[SCNoDepBlizzardImpl userNotTrackedAndNotAddedEvents] */

undefined8 FUN_106ad1dc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ad1dc8; end: 106ad1dcf; -[SCNoDepBlizzardImpl userTrackedAndNotAddedEvents] */

undefined8 FUN_106ad1dc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106ad1dd0; end: 106ad1dd7; -[SCNoDepBlizzardImpl userAddedEvents] */

undefined8 FUN_106ad1dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106ad1dd8; end: 106ad1e37; -[SCNoDepBlizzardImpl .cxx_destruct] */

void FUN_106ad1dd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106ad1e38; end: 106ad1f9b; -[SCNoDepSpectrumImpl streamEvent:region:] */

void FUN_106ad1e38(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x18);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010bfcde60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf9a0a0(param_3);
    func_0x00010c0df760(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126d0348;
    func_0x00010bdc0e00(PTR_PTR_1126d0348);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c0dff20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001002ceae4(lVar1,puVar3,puVar6,1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
    func_0x00010bec5320(param_1);
  }
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ad1f9c; end: 106ad213f; -[SCNoDepSpectrumImpl _streamEvent:region:] */

void FUN_106ad1f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 < *(long *)(param_1 + 8)) {
      if (lVar3 == *(long *)(param_1 + 8) + -1) {
        FUN_106ac4ca4(*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110e6d678,1);
        lVar3 = *(long *)(param_1 + 0x10);
      }
      *(long *)(param_1 + 0x10) = lVar3 + 1;
      lVar3 = *(long *)(param_1 + 0x38);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar1);
      if (lVar3 == 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(uVar4);
        _objc_release(puVar2);
        _objc_release(puVar1);
      }
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dff20(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(uVar4);
      _objc_release(puVar1);
      func_0x000100119b28(*(undefined8 *)(param_1 + 0x28),
                          &PTR____CFConstantStringClassReference_110e6d678,1);
    }
    else {
      FUN_106ac469c(*(undefined8 *)(param_1 + 0x28),&PTR____CFConstantStringClassReference_110e6d678
                    ,1);
    }
  }
  else {
    func_0x00010c25c520();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ad2140; end: 106ad2147; -[SCNoDepSpectrumImpl logger] */

undefined8 FUN_106ad2140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ad2148; end: 106ad214f; -[SCNoDepSpectrumImpl spectrumEvents] */

undefined8 FUN_106ad2148(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ad2150; end: 106ad2157; -[SCNoDepSpectrumImpl spectrumRegionalizedEvents] */

undefined8 FUN_106ad2150(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106ad2158; end: 106ad219f; -[SCNoDepSpectrumImpl .cxx_destruct] */

void FUN_106ad2158(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 106ad21a0; end: 106ad225f; -[SCSpectrumImpl initWithLogger:grapheneRegistry:] */

undefined1 *
FUN_106ad21a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4af8;
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
    if (*(long *)((long)puVar1 + 8) == 0) {
      FUN_106ac838c(*(undefined8 *)((long)puVar1 + 0x10),
                    &PTR____CFConstantStringClassReference_110e6d698,1);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106ad2260; end: 106ad2357; -[SCSpectrumImpl streamEvent:] */

void FUN_106ad2260(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010bf9a0a0(param_3);
    func_0x00010c0df760(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d0348;
    func_0x00010bdc0e00(PTR_PTR_1126d0348);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001002ceae4(uVar5,puVar2,puVar4,1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010c25c500(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 106ad2358; end: 106ad2483; -[SCSpectrumImpl streamEvent:region:] */

void FUN_106ad2358(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010bf9a0a0(param_3);
    func_0x00010c0df760(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d0348;
    func_0x00010bdc0e00(PTR_PTR_1126d0348);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0dff20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001002ceae4(uVar6,puVar2,puVar5,1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    func_0x00010c25c520(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 106ad2484; end: 106ad24b3; -[SCSpectrumImpl .cxx_destruct] */

void FUN_106ad2484(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ad24b4; end: 106ad252f; -[SCSpectrumNativeLogger streamEvent:] */

void FUN_106ad24b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lStack_38;
  
  if (param_3 != 0) {
    lStack_38 = 0;
    puVar2 = PTR_PTR_1126b86e8;
    func_0x00010c0f40e0(PTR_PTR_1126b86e8,param_2,param_3,&lStack_38);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lStack_38;
    _objc_retain(lStack_38);
    if (lVar1 == 0) {
      func_0x00010c25c500(*(undefined8 *)(param_1 + 8),param_2,puVar2);
    }
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 106ad2530; end: 106ad253b; -[SCSpectrumNativeLogger .cxx_destruct] */

void FUN_106ad2530(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ad253c; end: 106ad257b;  */

void FUN_106ad253c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bebeaa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106ad257c; end: 106ad25d3; -[SCSpectrumServicesEntryPoint end] */

void FUN_106ad257c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c21ed80(PTR_PTR_1126b6b50,param_2,0);
  puStack_28 = PTR_PTR_1126f4b08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ad25d4; end: 106ad26a7; -[SCSpectrumServicesEntryPoint _spectrumLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ad25d4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_1127577e4;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010c08ec20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08ec40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126d0358;
  _objc_alloc(PTR_PTR_1126d0358);
  puVar5 = PTR_PTR_1126d0308;
  _objc_alloc_init(PTR_PTR_1126d0308);
  func_0x00010c027300(puVar4,param_2,lVar3,puVar5);
  _objc_release(puVar5);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106ad26a8; end: 106ad2713; -[SCSpectrumServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ad26a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127577ec,0);
  _objc_destroyWeak(param_1 + _DAT_1127577e8);
  _objc_destroyWeak(param_1 + _DAT_1127577e4);
  _objc_destroyWeak(param_1 + _DAT_1127577d8);
  _objc_destroyWeak(param_1 + _DAT_1127577e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127577dc);
  return;
}



/* Entry: 106ad2714; end: 106ad2723; -[SCSystemBlizzardImpl logUserNotTrackedEvent:] */

void FUN_106ad2714(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0b2b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_logUserNotTrackedEvent__11260a4e0);
    return;
  }
  return;
}



/* Entry: 106ad2724; end: 106ad277b; -[SCSystemBlizzardImpl logUserExternallyTrackedEvent:userGuid:] */

void FUN_106ad2724(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010c21e4c0(param_3,param_2,param_4);
    func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 106ad277c; end: 106ad2783; -[SCSystemBlizzardImpl willLogEventsOfType:] */

void FUN_106ad277c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a66f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_willLogEventsOfType__1126873e0);
  return;
}



/* Entry: 106ad2784; end: 106ad27b3; -[SCSystemBlizzardImpl .cxx_destruct] */

void FUN_106ad2784(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ad27b4; end: 106ad27c3; -[SCUserBlizzardImpl logUserNotTrackedEvent:] */

void FUN_106ad27b4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0b2b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_logUserNotTrackedEvent__11260a4e0);
    return;
  }
  return;
}



/* Entry: 106ad27c4; end: 106ad27d3; -[SCUserBlizzardImpl logSerializedEvent_doNotUse:] */

void FUN_106ad27c4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0af330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_logSerializedEvent__1126096d8);
    return;
  }
  return;
}



/* Entry: 106ad27d4; end: 106ad27db; -[SCUserBlizzardImpl willLogEventsOfType:] */

void FUN_106ad27d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a66f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_willLogEventsOfType__1126873e0);
  return;
}



/* Entry: 106ad27dc; end: 106ad28cf; -[SCUserBlizzardImpl startFeatureSession:] */

void FUN_106ad27dc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _os_unfair_lock_lock(param_1 + 0x28);
  puVar2 = PTR_PTR_1126d0360;
  _objc_opt_new(PTR_PTR_1126d0360);
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c21fc80(puVar2,param_2,puVar4);
  if (param_3 == 0) {
    func_0x00010c21acc0(puVar2,param_2,0);
  }
  uVar1 = uRam00000001136c4a08;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1,param_2,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x28);
  return;
}



/* Entry: 106ad28d0; end: 106ad294f; -[SCUserBlizzardImpl endFeatureSession:] */

void FUN_106ad28d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _os_unfair_lock_lock(param_1 + 0x28);
  uVar1 = uRam00000001136c4a08;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x28);
  return;
}



/* Entry: 106ad2950; end: 106ad2997; -[SCUserBlizzardImpl .cxx_destruct] */

void FUN_106ad2950(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ad2998; end: 106ad29f3; -[SCUserVerificationBlizzardEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ad2998(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010c1b5800(PTR_PTR_1126d0370,param_2,1);
  puVar1 = PTR_PTR_1126d0320;
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11275780c;
    _objc_loadWeakRetained(lVar2);
  }
  func_0x00010c21f660(puVar1,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106ad29f4; end: 106ad2a5f; -[SCUserVerificationBlizzardEntryPoint end] */

void FUN_106ad29f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c1b5800(PTR_PTR_1126d0370,param_2,0);
  func_0x00010c21e840(PTR_PTR_1126d0320);
  puStack_28 = PTR_PTR_1126f4b20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106ad2a60; end: 106ad2a6f; -[SCUserVerificationBlizzardEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106ad2a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275780c);
  return;
}



/* Entry: 106ad2a70; end: 106ad2adb; -[SCBlizzardCremaBackdoorEventCollector init] */

undefined1 * FUN_106ad2a70(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f4b28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106ad2adc; end: 106ad2b7b; -[SCBlizzardCremaBackdoorEventCollector observeBlizzardEventWithProperties:] */

void FUN_106ad2adc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010c082de0(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3);
  if ((int)puVar1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
    func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ad2b7c; end: 106ad2b87; -[SCBlizzardCremaBackdoorEventCollector urlPath] */

undefined ** FUN_106ad2b7c(void)

{
  return &PTR____CFConstantStringClassReference_110e6d6f8;
}



/* Entry: 106ad2b88; end: 106ad2cdf; -[SCBlizzardCremaBackdoorEventCollector handleRequestWithId:] */

void FUN_106ad2b88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  ppuVar6 = *(undefined ***)(param_1 + 8);
  _objc_retain(ppuVar6);
  lVar1 = param_3;
  func_0x00010c08fa60();
  ppuVar2 = ppuVar6;
  if ((lVar1 != 0) &&
     (lVar1 = param_3, func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x18)),
     (int)lVar1 != 0)) {
    ppuVar2 = *(undefined ***)(param_1 + 0x10);
    func_0x00010bf09f80(ppuVar2,param_2,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
  }
  ppuVar6 = ppuVar2;
  func_0x00010bf529e0();
  if (ppuVar6 == (undefined **)0x0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar6 = ppuVar2;
    func_0x00010bf446e0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_110db3ed8);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar3;
  _objc_release(uVar4);
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = param_3;
  _objc_release(uVar4);
  ppuVar5 = (undefined **)PTR____NSArray0__struct_11034ab48;
  if (param_3 != 0) {
    _objc_retain(ppuVar2);
    ppuVar5 = ppuVar2;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  *(undefined ***)(param_1 + 0x10) = ppuVar5;
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e15a38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(ppuVar6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106ad2ce0; end: 106ad2d1b; -[SCBlizzardCremaBackdoorEventCollector .cxx_destruct] */

void FUN_106ad2ce0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ad2d1c; end: 106ad2d27; -[SCBlizzardEventObserverRegistryImpl registerObserver:] */

void FUN_106ad2d1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1263d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126d0378,PTR_s_registerEventObserver__112627310);
  return;
}



/* Entry: 106ad2d28; end: 106ad2d6b; -[SCBlizzardLogViewerDisplayImpl observeBlizzardEventWithProperties:] */

void FUN_106ad2d28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dd1b78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ad2d6c; end: 106ad2f6b; -[SCBlizzardEventObserverManager registerEventObserver:] */

void FUN_106ad2d6c(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar9 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 8);
  puVar8 = param_3;
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x10));
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00();
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  _objc_release(uVar10);
  _objc_retain(param_3);
  puVar4 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5718);
  _objc_release(param_3);
  uVar1 = (uint)puVar4 ^ 1;
  if (param_3 == (undefined1 *)0x0) {
    uVar1 = 1;
  }
  if ((uVar1 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    func_0x00010bf51e00();
  }
  else {
    lVar5 = 0;
  }
  _os_unfair_lock_unlock(param_1 + 8);
  lVar6 = lVar5;
  func_0x00010bf529e0();
  puVar2 = PTR_DAT_1126a5720;
  if (lVar6 != 0) {
    _objc_retain(param_3);
    puVar4 = param_3;
    func_0x00010010fab4(param_3,puVar2);
    param_1 = param_3;
    if ((int)puVar4 == 0) {
      param_1 = (undefined1 *)0x0;
    }
    _objc_retain(param_1);
    _objc_release(param_3);
    if (param_1 != (undefined1 *)0x0) {
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      plStack_110 = (long *)0x0;
      _objc_retain(lVar5);
      lVar6 = lVar5;
      func_0x00010bf52a60();
      if (lVar6 != 0) {
        lVar11 = *plStack_110;
        do {
          lVar12 = 0;
          do {
            if (*plStack_110 != lVar11) {
              _objc_enumerationMutation(lVar5);
            }
            func_0x00010c0e08c0(param_3);
            lVar12 = lVar12 + 1;
          } while (lVar6 != lVar12);
          lVar6 = lVar5;
          puVar9 = &uStack_120;
          func_0x00010bf52a60();
        } while (lVar6 != 0);
      }
      _objc_release(lVar5);
      puVar8 = (undefined1 *)puVar9;
    }
    _objc_release(param_1);
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 8);
  __Unwind_Resume();
  _objc_retain(puVar8);
  if (puVar8 != (undefined1 *)0x0) {
    _os_unfair_lock_lock(param_3 + 8);
    uVar7 = *(ulong *)(param_3 + 0x20);
    func_0x00010bf529e0();
    if (uVar7 < 500) {
      uVar3 = *(undefined8 *)(param_3 + 0x20);
      puVar4 = puVar8;
      func_0x00010bf51e00(puVar8);
      func_0x00010befa120(uVar3);
      _objc_release(puVar4);
    }
    _os_unfair_lock_unlock(param_3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 106ad2f6c; end: 106ad2ffb; -[SCBlizzardEventObserverManager bufferEventForReplay:] */

void FUN_106ad2f6c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 8);
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (uVar1 < 500) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      lVar2 = param_3;
      func_0x00010bf51e00(param_3);
      func_0x00010befa120(uVar3,param_2,lVar2);
      _objc_release(lVar2);
    }
    _os_unfair_lock_unlock(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ad2ffc; end: 106ad304f; -[SCBlizzardEventObserverManager shouldBufferForReplay] */

bool FUN_106ad2ffc(long param_1)

{
  ulong uVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf529e0(uVar1);
  _os_unfair_lock_unlock(param_1 + 8);
  return uVar1 < 500;
}



/* Entry: 106ad3050; end: 106ad308b; -[SCBlizzardEventObserverManager .cxx_destruct] */

void FUN_106ad3050(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106ad308c; end: 106ad30d7; +[SCBlizzardEventConfigurer setBitmojiFetchServices:] */

void FUN_106ad308c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d0320;
  func_0x00010bfc3060(PTR_PTR_1126d0320);
  _os_unfair_lock_lock();
  uVar1 = uRam00000001136c4a20;
  uRam00000001136c4a20 = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(puVar2);
  return;
}



/* Entry: 106ad30d8; end: 106ad3107; +[SCBlizzardEventConfigurer setUserVerificationScope:] */

void FUN_106ad30d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = uRam00000001136c4a28;
  uRam00000001136c4a28 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad3108; end: 106ad3153; +[SCBlizzardEventConfigurer setTalkServices:] */

void FUN_106ad3108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d0320;
  func_0x00010bfcb060(PTR_PTR_1126d0320);
  _os_unfair_lock_lock();
  uVar1 = uRam00000001136c4a30;
  uRam00000001136c4a30 = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(puVar2);
  return;
}



/* Entry: 106ad3154; end: 106ad3197; -[SCBlizzardEventConfigurer osMinorVersion] */

void FUN_106ad3154(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf99de0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0edc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ad3198; end: 106ad345b; -[SCBlizzardEventConfigurer removeBaseFields:] */

void FUN_106ad3198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0d3d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110db9578);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110de3558);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6db78);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6d718);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6d7d8);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110de68d8);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6d7b8);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110dd7ff8);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110db8558);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110dd5c18);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6d798);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6dd58);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110de3578);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6dc38);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6dc58);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6d738);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6d7f8);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6d918);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6d8f8);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6d858);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6df38);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6db98);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6dbb8);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6d778);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6dbd8);
  func_0x00010c1d0640(uVar1,param_2,0,&PTR____CFConstantStringClassReference_110e6d758);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106ad345c; end: 106ad348b; -[SCBlizzardEventConfigurer setAppOpenTs:] */

void FUN_106ad345c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad348c; end: 106ad3493; -[SCBlizzardEventConfigurer experimentProvider] */

undefined8 FUN_106ad348c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ad3494; end: 106ad349b; -[SCBlizzardEventConfigurer configVersion] */

undefined8 FUN_106ad3494(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ad349c; end: 106ad352b; -[SCBlizzardEventConfigurer .cxx_destruct] */

void FUN_106ad349c(long param_1)

{
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



/* Entry: 106ad352c; end: 106ad3567; -[SCBlizzardAllTiersFileQueue totalBytes] */

undefined8 FUN_106ad352c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113c20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfaca40();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106ad3568; end: 106ad35a3; -[SCBlizzardAllTiersFileQueue totalEventCounts] */

undefined8 FUN_106ad3568(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113c20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf99ca0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106ad35a4; end: 106ad35b3; +[SCBlizzardAllTiersFileQueue resetDispatchOnceToken] */

void FUN_106ad35a4(void)

{
  uRam00000001136c4ab8 = 0;
  uRam00000001136c4ac0 = 0;
  return;
}



/* Entry: 106ad35b4; end: 106ad3607; -[SCBlizzardAllTiersFileQueue eventCountsAtPriority:region:] */

undefined8 FUN_106ad35b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113c20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf99cc0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106ad3608; end: 106ad3683; -[SCBlizzardAllTiersFileQueue getAndRemoveTopPriorityFilesFromPriority:region:bytes:isFrame:isSpectrum:] */

void FUN_106ad3608(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c113c20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfc24a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106ad3684; end: 106ad371f; -[SCBlizzardAllTiersFileQueue fetchContentFromFile:] */

void FUN_106ad3684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010bfad020(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0ad4a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c125a80(param_3);
  uVar3 = param_1;
  func_0x00010bfa6880(param_1,param_2,param_3,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106ad3720; end: 106ad388f; -[SCBlizzardAllTiersFileQueue removeFilesFromDisk:] */

void FUN_106ad3720(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
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
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        uVar2 = param_1;
        func_0x00010bfad020(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        func_0x00010bfacec0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar5;
        func_0x00010c0ad4a0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c125a80(uVar5);
        func_0x00010bf6bda0(uVar2,param_2,uVar3,uVar4,uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = param_3;
  func_0x00010c113c20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bfc2460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010be8c180(param_3,param_2,lVar6,1);
  func_0x00010be52d80(param_3,param_2,lVar6,1,&PTR____CFConstantStringClassReference_110dce918);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 106ad3890; end: 106ad3907; -[SCBlizzardAllTiersFileQueue _removeExpiredSpectrumFiles] */

void FUN_106ad3890(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c113c20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc2460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be8c180(param_1,param_2,uVar2,1);
  func_0x00010be52d80(param_1,param_2,uVar2,1,&PTR____CFConstantStringClassReference_110dce918);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106ad3908; end: 106ad3a47;  */

void FUN_106ad3908(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bfcde60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = param_3;
  func_0x00010c2827c0(param_3);
  _objc_release(param_3);
  FUN_106acb580(uVar3,param_2,uVar4,uVar1);
  _objc_release(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfcde60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2827c0();
  FUN_106acb7b0(uVar2,param_2,uVar1,uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfcde60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0e00e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c2827c0();
  FUN_106acb9e0(uVar3,param_2,uVar2,uVar1);
  _objc_release(param_2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106ad3a48; end: 106ad3a77; -[SCBlizzardAllTiersFileQueue setFileRepository:] */

void FUN_106ad3a48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad3a78; end: 106ad3aa7; -[SCBlizzardAllTiersFileQueue setConfig:] */

void FUN_106ad3a78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad3aa8; end: 106ad3ad7; -[SCBlizzardAllTiersFileQueue setPrioritizedFileQueue:] */

void FUN_106ad3aa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad3ad8; end: 106ad3b1f; -[SCBlizzardAllTiersFileQueue .cxx_destruct] */

void FUN_106ad3ad8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ad3b20; end: 106ad3b4f; -[SCBlizzardDLLNode setFile:] */

void FUN_106ad3b20(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ad3b50; end: 106ad3b87; -[SCBlizzardDLLNode .cxx_destruct] */

void FUN_106ad3b50(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106ad3b88; end: 106ad3cdf; -[SCBlizzardDoublyLinkedList removeNode:] */

void FUN_106ad3b88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010bfdef40();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != lVar1) {
      lVar2 = param_1;
      func_0x00010c268540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if (param_3 == lVar2) goto LAB_106ad3cc8;
      lVar1 = param_3;
      func_0x00010c1101e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c0d9820(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cd2c0(lVar1,param_2,lVar2);
      func_0x00010c1e1780(lVar2,param_2,lVar1);
      lVar3 = param_1;
      func_0x00010bfacac0(param_1);
      func_0x00010c19ba60(param_1,param_2,lVar3 + -1);
      lVar3 = param_3;
      func_0x00010bfac9c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfaca40();
      lVar5 = param_1;
      func_0x00010bfaca40(param_1);
      func_0x00010c19ba40(param_1,param_2,lVar5 - lVar4);
      _objc_release(lVar3);
      lVar3 = param_3;
      func_0x00010bfac9c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf99ca0();
      lVar5 = param_1;
      func_0x00010c276500(param_1);
      func_0x00010c2183a0(param_1,param_2,lVar5 - lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
LAB_106ad3cc8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ad3ce0; end: 106ad3d0f; -[SCBlizzardDoublyLinkedList setHead:] */

void FUN_106ad3ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad3d10; end: 106ad3d3f; -[SCBlizzardDoublyLinkedList setTail:] */

void FUN_106ad3d10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad3d40; end: 106ad3d6f; -[SCBlizzardDoublyLinkedList .cxx_destruct] */

void FUN_106ad3d40(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ad3d70; end: 106ad3d93; -[SCBlizzardFile copyWithZone:] */

undefined8 FUN_106ad3d70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106ad3d94; end: 106ad3d9b; -[SCBlizzardFile region] */

undefined8 FUN_106ad3d94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ad3d9c; end: 106ad3da3; -[SCBlizzardFile dedupeId] */

undefined8 FUN_106ad3d9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ad3da4; end: 106ad3dab; -[SCBlizzardFile fileName] */

undefined8 FUN_106ad3da4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106ad3dac; end: 106ad3db3; -[SCBlizzardFile isSpectrum] */

undefined1 FUN_106ad3dac(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106ad3db4; end: 106ad3dbb; -[SCBlizzardFile isCompressed] */

undefined1 FUN_106ad3db4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106ad3dbc; end: 106ad3dc3; -[SCBlizzardFile logQueueName] */

undefined8 FUN_106ad3dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106ad3dc4; end: 106ad3dcb; -[SCBlizzardFile eagerUploadId] */

undefined8 FUN_106ad3dc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106ad3dcc; end: 106ad3dfb; -[SCBlizzardFile setEagerUploadId:] */

void FUN_106ad3dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad3dfc; end: 106ad3e03; -[SCBlizzardFile shouldFallbackToRegularUploadPath] */

undefined1 FUN_106ad3dfc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 106ad3e04; end: 106ad3e0b; -[SCBlizzardFile setShouldFallbackToRegularUploadPath:] */

void FUN_106ad3e04(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 106ad3e0c; end: 106ad3e47; -[SCBlizzardFile .cxx_destruct] */

void FUN_106ad3e0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,0);
  return;
}



/* Entry: 106ad3e48; end: 106ad3eaf; -[SCBlizzardFileCompressor decompressData:] */

void FUN_106ad3e48(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x00010c14df40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dab118;
    if (param_3 != 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
    }
    func_0x00010be8fa00(param_1,param_2,&PTR____CFConstantStringClassReference_110e6d9b8,ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106ad3eb0; end: 106ad3f0b; -[SCBlizzardFileCompressor _compressData:] */

void FUN_106ad3eb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  func_0x00010c14cea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab118;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  }
  func_0x00010be8fa00(param_1,param_2,&PTR____CFConstantStringClassReference_110e6d998,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 106ad3f0c; end: 106ad3f3b; -[SCBlizzardFileCompressor .cxx_destruct] */

void FUN_106ad3f0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106ad3f3c; end: 106ad4003; -[SCBlizzardFilePersistenceSink appendSpectrumBytes:eventCount:priority:region:eagerUploadId:] */

void FUN_106ad3f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 in_x6;
  
  _objc_retain(in_x6);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf00c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c124180();
  _objc_release(uVar1);
  func_0x00010bf00c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef80c0();
  _objc_release(in_x6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ad4004; end: 106ad4033; -[SCBlizzardFilePersistenceSink setAllTiersFileQueue:] */

void FUN_106ad4004(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad4034; end: 106ad4087; -[SCBlizzardFileRepository deleteFile:fromQueueName:fromRegion:] */

void FUN_106ad4034(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be1c9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad0a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6c1e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ad4088; end: 106ad412f; -[SCBlizzardFileRepository fetchEventsJsonDataFromFile:logQueueName:region:] */

void FUN_106ad4088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfacec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c06eee0(param_3);
  _objc_release(param_3);
  func_0x00010bfa68a0(param_1,param_2,uVar1,param_4,param_5,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106ad4130; end: 106ad421b; -[SCBlizzardFileRepository fetchEventsJsonDataFromPath:logQueueName:region:isCompressed:] */

void FUN_106ad4130(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be1c9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfad0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c085d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar2 != 0) {
    FUN_106ac29cc(*(undefined8 *)(param_1 + 0x20),&PTR____CFConstantStringClassReference_110e6dab8,
                  param_4,1);
  }
  lVar3 = lVar2;
  if (param_6 != 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010bf67560(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106ad421c; end: 106ad42a7; -[SCBlizzardFileRepository _getAbsoluteLegacyFilePath:fromQueueName:region:] */

void FUN_106ad421c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be9c440(param_1,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c25cde0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


