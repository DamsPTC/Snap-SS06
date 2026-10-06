/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106bfc274; end: 106bfc2af; -[SCOneTapLoginRegistryImpl oneTapLoginRepository] */

void FUN_106bfc274(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bfc2b0; end: 106bfc2ef; -[SCOneTapLoginRegistryImpl setOneTapLoginRepository:] */

void FUN_106bfc2b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x70);
  return;
}



/* Entry: 106bfc2f0; end: 106bfc337; -[SCOneTapLoginRegistryImpl isCurrentUserExplicitlyOptedIn] */

undefined8 FUN_106bfc2f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e8840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106bfc338; end: 106bfc3b3; -[SCOneTapLoginRegistryImpl optOutCurrentUser:] */

void FUN_106bfc338(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e8840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010c12d6c0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010be509b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__logBlizzardEvent_action__112571c08,param_3,1);
    return;
  }
  return;
}



/* Entry: 106bfc3b4; end: 106bfc557; -[SCOneTapLoginRegistryImpl optInCurrentUserWithConfirmedOverwrite:optInSource:] */

void FUN_106bfc3b4(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e8840();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf4b900();
  _objc_release(uVar2);
  uVar3 = *(ulong *)(param_1 + 0x20);
  if ((int)uVar5 == 0) {
    func_0x00010c0e85e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    iVar1 = *(int *)(param_1 + 0x60);
    _objc_release(uVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    if ((ulong)(long)iVar1 <= uVar4) {
      if (param_3 == 0) {
        func_0x00010c0e8880(uVar5);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106bfc534;
      }
      func_0x00010c12d620();
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    func_0x00010c0e8800(uVar5,param_2,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4a00(param_1,param_2,uVar5);
    _objc_release(uVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c0e87c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4a80();
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    lVar6 = param_1;
    func_0x00010c0e87c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d49a0();
    _objc_release(lVar6);
    func_0x00010be509a0(param_1,param_2,param_4,0);
  }
  else {
    func_0x00010c0e8800(uVar3,param_2,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4a00(param_1,param_2,uVar3);
    _objc_release(uVar3);
  }
  func_0x00010bdd37c0(param_1);
  func_0x00010bde0a20(param_1);
LAB_106bfc534:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bfc558; end: 106bfc60f; -[SCOneTapLoginRegistryImpl fetchAndPersistBitmojiIfNecessary:] */

void FUN_106bfc558(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0e8840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e87c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa4d40(uVar3,param_2,param_1,param_3);
    _objc_release(param_1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bfc610; end: 106bfc727; -[SCOneTapLoginRegistryImpl ensureV3TokenPersisted] */

void FUN_106bfc610(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010bfc97a0(uVar2);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106bfc728; end: 106bfc77b;  */

void FUN_106bfc728(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be21fe0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bfc77c; end: 106bfc87f; -[SCOneTapLoginRegistryImpl _initializeLastLoginTimestampIfNecessary] */

void FUN_106bfc77c(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_class(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar2 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  _objc_release(uVar3);
  if (((uVar2 & 1) != 0) && (uVar3 != 0)) {
    return;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4bbe0();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if (iVar1 == 0) {
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf655e0(0);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1d0560(uVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 106bfc880; end: 106bfc903; -[SCOneTapLoginRegistryImpl _persistOneTapInKeychainIfNecessary] */

void FUN_106bfc880(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  func_0x00010be70820();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010be98920();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bf46240(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if ((int)lVar1 == 0) {
      func_0x00010c0fa0e0(uVar3,param_2,uVar4,uVar2);
    }
    else {
      func_0x00010c0fa120();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106bfc904; end: 106bfc977; -[SCOneTapLoginRegistryImpl _clearOneTapLoginFromKeychainIfNecessary] */

void FUN_106bfc904(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0e85e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x58);
  func_0x00010c22b960();
  if (uVar3 < (ulong)(long)iVar1) {
    return;
  }
  func_0x00010c12af40(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c12af30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_removeAllOneTapsInCloudKeychain_1126285e8);
  return;
}



/* Entry: 106bfc978; end: 106bfca17; -[SCOneTapLoginRegistryImpl _startObservingIfNecessary:] */

void FUN_106bfc978(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e8840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e8800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4a00(param_1);
    _objc_release(uVar2);
    func_0x00010bdd37c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be08250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__emitRefreshEventIfNecessary__11255fa30,param_3);
    return;
  }
  return;
}



/* Entry: 106bfca18; end: 106bfcc2f; -[SCOneTapLoginRegistryImpl _beginObserving] */

void FUN_106bfca18(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0e87c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4960();
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_50 = uVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126ae6b8;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = auStack_68;
  _objc_copyWeak(auStack_70,puVar9);
  puVar7 = puVar6;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar7;
  _objc_release(uVar10);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar1);
  puVar8 = auStack_68;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume(puVar8);
  _objc_retain(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106bfcc30; end: 106bfcc57;  */

void FUN_106bfcc30(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106bfcc58; end: 106bfcd63;  */

void FUN_106bfcc58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar1;
  func_0x00010c0ec5e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be73580();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106bfcd64; end: 106bfcfb3; -[SCOneTapLoginRegistryImpl _persistToken:cloudToken:username:] */

void FUN_106bfcd64(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c2732c0(*(undefined8 *)(param_1 + 0x58));
  uVar2 = param_1;
  func_0x00010c0e87c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4ae0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c0e87c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e88c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c0e87c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d4ac0();
      _objc_release(uVar2);
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c0e87c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e8560();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c0e87c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d4900();
      _objc_release(uVar2);
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_5);
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c0e87c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e8860();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c0e87c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d4a80();
      _objc_release(uVar2);
    }
  }
  func_0x00010be733a0(param_1);
  func_0x00010be73380(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bfcfb4; end: 106bfd05f; -[SCOneTapLoginRegistryImpl _persistOneTapInCloudKeychainIfNecessary] */

void FUN_106bfcfb4(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_1;
  func_0x00010c0e87c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e8560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (((((ulong)puVar4 & 1) == 0) && (lVar2 = param_1, func_0x00010be70820(), (int)lVar2 != 0)) &&
     (lVar2 = param_1, func_0x00010be98920(), (int)lVar2 != 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x58);
    func_0x00010bf8f9e0();
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0fa110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_persistOneTapLoginToCloudKeychai_11261c260,
                 *(undefined8 *)(param_1 + 8));
      return;
    }
  }
  return;
}



/* Entry: 106bfd060; end: 106bfd173; -[SCOneTapLoginRegistryImpl _getRefreshTokenCallback:refreshToken:] */

void FUN_106bfd060(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c078c00(puVar1,param_2,param_4);
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c0e87c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e88c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      uVar2 = param_1;
      func_0x00010c0e87c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d4ac0();
      _objc_release(uVar2);
      func_0x00010be733a0(param_1);
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,(uint)puVar1 ^ 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(param_3,param_2,puVar5);
  _objc_release(param_3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106bfd174; end: 106bfd2df; -[SCOneTapLoginRegistryImpl _emitRefreshEventIfNecessary:] */

void FUN_106bfd174(undefined *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = param_1;
  func_0x00010c0e87c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e8660();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0(0,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf655c0(0x40dc200000000000,PTR__OBJC_CLASS___NSDate_1126ae770,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf433a0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  if (((param_3 & 1) != 0) || (puVar4 == (undefined *)0xffffffffffffffff)) {
    puVar2 = param_1;
    func_0x00010c0e87c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0e8720();
    func_0x00010be509a0(param_1,param_2,puVar4,2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e87c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4920();
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106bfd2e0; end: 106bfd363; -[SCOneTapLoginRegistryImpl _logBlizzardEvent:action:] */

void FUN_106bfd2e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d14d0;
  _objc_opt_new(PTR_PTR_1126d14d0);
  FUN_106bfe91c(param_3);
  func_0x00010c206c40(puVar1,param_2,param_3);
  func_0x00010c161620(puVar1,param_2,param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bfd364; end: 106bfd3bf; -[SCOneTapLoginRegistryImpl _passBasicPersistenceEligibility] */

bool FUN_106bfd364(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0e85e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c22b960(uVar3);
  _objc_release(uVar1);
  return uVar2 < (ulong)(long)(int)uVar3;
}



/* Entry: 106bfd3c0; end: 106bfd4ab; -[SCOneTapLoginRegistryImpl _satisfyTenuredThreshold] */

bool FUN_106bfd3c0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
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
  lVar5 = *(long *)(param_1 + 0x58);
  func_0x00010c26b3a0(lVar5);
  uVar2 = uVar1;
  func_0x00010bf64e40((double)lVar5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf433a0(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  return uVar1 != 1;
}



/* Entry: 106bfd4ac; end: 106bfd553; -[SCOneTapLoginRegistryImpl .cxx_destruct] */

void FUN_106bfd4ac(long param_1)

{
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



/* Entry: 106bfd554; end: 106bfd57f; +[SCGrapheneAuthStatusPersistenceMetric request] */

void FUN_106bfd554(void)

{
  _objc_alloc(PTR_PTR_1126d14d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bfd580; end: 106bfd5ab; +[SCGrapheneAuthStatusPersistenceMetric success] */

void FUN_106bfd580(void)

{
  _objc_alloc(PTR_PTR_1126d14d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bfd5ac; end: 106bfd5d7; +[SCGrapheneAuthStatusPersistenceMetric failure] */

void FUN_106bfd5ac(void)

{
  _objc_alloc(PTR_PTR_1126d14d8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bfd5d8; end: 106bfd677; -[SCGrapheneAuthStatusPersistenceMetric description] */

void FUN_106bfd5d8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e78a98;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e78a98,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f5b10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106bfd678; end: 106bfd877; -[SCGrapheneRegistry authStatusPersistenceGraphene] */

void FUN_106bfd678(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106bfd700;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c6d48 != -1) {
    func_0x00010002a2fc(0x1136c6d48,&puStack_48);
  }
  uVar1 = uRam00000001136c6d40;
  _objc_retain(uRam00000001136c6d40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bfd878; end: 106bfd87f;  */

/* WARNING: Removing unreachable block (ram,0x000106bfd838) */

void FUN_106bfd878(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106bfddc0;
  puStack_30 = &UNK_110842e18;
  _objc_retain(param_1);
  uStack_28 = param_1;
  if (lRam00000001136c6d78 != -1) {
    func_0x00010002a2fc(0x1136c6d78,&puStack_48);
  }
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bfd880; end: 106bfd903;  */

undefined8 FUN_106bfd880(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  if (lRam00000001136c6d88 != -1) {
    func_0x00010002a2fc(0x1136c6d88,&PTR___NSConcreteGlobalBlock_110968228);
  }
  if ((bRam00000001136c6d52 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf1f440(param_1);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106bfd904; end: 106bfd96b;  */

bool FUN_106bfd904(void)

{
  bool bVar1;
  int iVar2;
  
  if (lRam00000001136c6d88 != -1) {
    func_0x00010002a2fc(0x1136c6d88,&PTR___NSConcreteGlobalBlock_110968228);
  }
  if ((bRam00000001136c6d52 & 1) == 0) {
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    bVar1 = iVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106bfd96c; end: 106bfdb53;  */

undefined8 FUN_106bfd96c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  if (lRam00000001136c6d88 != -1) {
    func_0x00010002a2fc(0x1136c6d88,&PTR___NSConcreteGlobalBlock_110968228);
  }
  if ((bRam00000001136c6d52 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf1f440(param_1);
  }
  else {
    uVar1 = 0;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106bfdb54; end: 106bfdb87;  */

void FUN_106bfdb54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e78b78,0,0);
  lRam00000001136c6d68 = (long)(int)uVar1;
  return;
}



/* Entry: 106bfdb88; end: 106bfdc67;  */

byte FUN_106bfdb88(undefined8 param_1)

{
  byte bVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (lRam00000001136c6d88 != -1) {
    func_0x00010002a2fc(0x1136c6d88,&PTR___NSConcreteGlobalBlock_110968228);
  }
  if ((bRam00000001136c6d52 & 1) == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_106bfdc68;
    puStack_30 = &UNK_110842e18;
    _objc_retain(param_1);
    uStack_28 = param_1;
    if (lRam00000001136c6d70 != -1) {
      func_0x00010002a2fc(0x1136c6d70,&puStack_48);
    }
    bVar1 = bRam00000001136c6d51;
    _objc_release(uStack_28);
  }
  else {
    bVar1 = 0;
  }
  _objc_release(param_1);
  return bVar1 & 1;
}



/* Entry: 106bfdc68; end: 106bfdc97;  */

void FUN_106bfdc68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e78bb8,0,0);
  uRam00000001136c6d51 = (char)uVar1;
  return;
}



/* Entry: 106bfdc98; end: 106bfdd2b;  */

long FUN_106bfdc98(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_retain();
  if (lRam00000001136c6d88 != -1) {
    lVar1 = 0x1136c6d88;
    func_0x00010002a2fc(0x1136c6d88,&PTR___NSConcreteGlobalBlock_110968228);
  }
  if ((bRam00000001136c6d52 & 1) == 0) {
    func_0x000106bfdec8();
    if (lVar1 == -1) {
      lVar1 = param_1;
      func_0x00010c067f00(param_1);
      lVar1 = (long)(int)lVar1;
    }
  }
  else {
    lVar1 = 0;
  }
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106bfdd2c; end: 106bfddbf;  */

double FUN_106bfdd2c(long param_1)

{
  long lVar1;
  double dVar2;
  
  _objc_retain();
  if (lRam00000001136c6d88 != -1) {
    func_0x00010002a2fc(0x1136c6d88,&PTR___NSConcreteGlobalBlock_110968228);
  }
  dVar2 = 0.0;
  if ((bRam00000001136c6d52 & 1) == 0) {
    lVar1 = param_1;
    func_0x00010c0b5020(param_1);
    dVar2 = (double)lVar1 / 1000.0;
  }
  _objc_release(param_1);
  return dVar2;
}



/* Entry: 106bfddc0; end: 106bfddfb;  */

void FUN_106bfddc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b84a0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e78af8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam00000001136c6d80;
  uRam00000001136c6d80 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106bfddfc; end: 106bfdedb;  */

void FUN_106bfddfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8668,PTR_s_integerValue_1125f7a00);
  return;
}



/* Entry: 106bfdedc; end: 106bfdfaf;  */

long FUN_106bfdedc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  if (lRam00000001136c6d98 != -1) {
    func_0x00010002a2fc(0x1136c6d98,&PTR___NSConcreteGlobalBlock_110968250);
  }
  lVar4 = param_1;
  if (((bRam00000001136c6d90 & 1) != 0) && (param_1 != 5)) {
    puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
    func_0x00010c114d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf981e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010c0720c0();
    lVar4 = 0;
    if ((int)puVar1 == 0) {
      lVar4 = param_1;
    }
    _objc_release(puVar3);
  }
  return lVar4;
}



/* Entry: 106bfdfb0; end: 106bfe00f;  */

void FUN_106bfdfb0(void)

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
  uRam00000001136c6d90 = SUB81(puVar3,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bfe010; end: 106bfe15b;  */

void FUN_106bfe010(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d0640(param_1);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106bfe15c; end: 106bfe29b;  */

void FUN_106bfe15c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bfe29c; end: 106bfe367; -[SCOneTapLoginRegistryLogger initWithUserTrackedLogger:grapheneRegistry:regDeviceInfoProvider:] */

undefined1 *
FUN_106bfe29c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f5b18;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bfe368; end: 106bfe3d7; -[SCOneTapLoginRegistryLogger logOneTapLoginBitmojiFetchingResult:] */

void FUN_106bfe368(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d14e0;
  func_0x00010c0edfe0(PTR_PTR_1126d14e0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db78d8;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e78ad8;
  }
  func_0x00010be547e0(param_1,param_2,puVar2,&PTR____CFConstantStringClassReference_110dce878,
                      ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106bfe3d8; end: 106bfe4d7; -[SCOneTapLoginRegistryLogger logOneTapLoginOptInDialog:] */

void FUN_106bfe3d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d14e8;
  _objc_opt_new(PTR_PTR_1126d14e8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc1fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c161620(puVar1,param_2,param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126d14e0;
  func_0x00010c0ee100(PTR_PTR_1126d14e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efe40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be547a0(param_1,param_2,puVar4,param_3);
  _objc_release(param_3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bfe4d8; end: 106bfe5d3; -[SCOneTapLoginRegistryLogger logLogoutDialogAction:] */

void FUN_106bfe4d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d14f0;
  _objc_opt_new(PTR_PTR_1126d14f0);
  func_0x00010c182d40();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc1fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126d14e0;
  func_0x00010c0ee0e0(PTR_PTR_1126d14e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9efd3c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be547a0(param_1,param_2,puVar4,param_3);
  _objc_release(param_3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bfe5d4; end: 106bfe5e3; -[SCOneTapLoginRegistryLogger _logGrapheneWithMetric:action:] */

void FUN_106bfe5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be547f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logGrapheneWithMetric_dimension_112572b98,param_3,
             &PTR____CFConstantStringClassReference_110daf5b8,param_4);
  return;
}



/* Entry: 106bfe5e4; end: 106bfe663; -[SCOneTapLoginRegistryLogger _logGrapheneWithMetric:dimensionKey:dimensionValue:] */

void FUN_106bfe5e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c2ac460(param_3,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e8780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bfe664; end: 106bfe69f; -[SCOneTapLoginRegistryLogger .cxx_destruct] */

void FUN_106bfe664(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bfe6a0; end: 106bfe6cb; +[SCGrapheneOneTapLoginRegistryMetric otlOptInAction] */

void FUN_106bfe6a0(void)

{
  _objc_alloc(PTR_PTR_1126d14e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bfe6cc; end: 106bfe6f7; +[SCGrapheneOneTapLoginRegistryMetric otlLogoutAction] */

void FUN_106bfe6cc(void)

{
  _objc_alloc(PTR_PTR_1126d14e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bfe6f8; end: 106bfe723; +[SCGrapheneOneTapLoginRegistryMetric otlBitmojiFetch] */

void FUN_106bfe6f8(void)

{
  _objc_alloc(PTR_PTR_1126d14e0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bfe724; end: 106bfe7c3; -[SCGrapheneOneTapLoginRegistryMetric description] */

void FUN_106bfe724(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e78c58;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e78c58,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f5b20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 106bfe7c4; end: 106bfe91b; -[SCGrapheneRegistry oneTapLoginRegistryGraphene] */

void FUN_106bfe7c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106bfe84c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c6da8 != -1) {
    func_0x00010002a2fc(0x1136c6da8,&puStack_48);
  }
  uVar1 = uRam00000001136c6da0;
  _objc_retain(uRam00000001136c6da0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bfe91c; end: 106bfe93b;  */

undefined8 FUN_106bfe91c(ulong param_1)

{
  if (param_1 < 10) {
    return *(undefined8 *)(&UNK_10dde7b50 + param_1 * 8);
  }
  return 5;
}



/* Entry: 106bfe93c; end: 106bfe9b7;  */

undefined * FUN_106bfe93c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6db0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e78d78,
                        &UNK_10dde7ba0,&UNK_10dde7c18,0xc,FUN_106bfe9b8,0);
    do {
      if (puRam00000001136c6db0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6db0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6db0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6db0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6db0;
}



/* Entry: 106bfe9b8; end: 106bfe9c3;  */

bool FUN_106bfe9b8(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 106bfe9c4; end: 106bfea3f;  */

undefined * FUN_106bfe9c4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6db8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e78d98,
                        &UNK_10dde7c48,&UNK_10dde7c80,3,FUN_106bfea40,0);
    do {
      if (puRam00000001136c6db8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6db8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6db8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6db8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6db8;
}



/* Entry: 106bfea40; end: 106bfea4b;  */

bool FUN_106bfea40(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106bfea4c; end: 106bfeac7;  */

undefined * FUN_106bfea4c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c6dc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e78db8,
                        &UNK_10dde7c8c,&UNK_10dde7cb0,3,FUN_106bfeac8,0);
    do {
      if (puRam00000001136c6dc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c6dc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c6dc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c6dc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c6dc0;
}



/* Entry: 106bfeac8; end: 106bfead3;  */

bool FUN_106bfeac8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106bfead4; end: 106bfeb3b; +[SCActivationPbOneTapPersistent descriptor] */

void FUN_106bfead4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6dc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b225e0,
                        &PTR____CFConstantStringClassReference_110e78dd8,
                        &PTR_s_snapchat_activation_cof_113177f68,&PTR_DAT_113177f80,9,0x28,0x1c);
    puRam00000001136c6dc8 = puVar1;
  }
  return;
}



/* Entry: 106bfeb3c; end: 106bfeb47; -[SCFeatureSettingsService isLogoutVerificationCoolDownCountAvailable] */

void FUN_106bfeb3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e78df8);
  return;
}



/* Entry: 106bfeb48; end: 106bfeb53; -[SCFeatureSettingsService logoutVerificationCoolDownCountServerParam] */

undefined ** FUN_106bfeb48(void)

{
  return &PTR____CFConstantStringClassReference_110e78df8;
}



/* Entry: 106bfeb54; end: 106bfeb63; -[SCFeatureSettingsService setLogoutVerificationCoolDownCount:] */

void FUN_106bfeb54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e78df8,param_3);
  return;
}



/* Entry: 106bfeb64; end: 106bfeb6b; -[SCFeatureSettingsService logout_verification_cool_down_count_client_value:] */

void FUN_106bfeb64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106bfeb6c; end: 106bfeb73; -[SCFeatureSettingsService logout_verification_cool_down_count_server_value:] */

void FUN_106bfeb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106bfeb74; end: 106bfeb83; -[SCFeatureSettingsService logoutVerificationCoolDownCount] */

void FUN_106bfeb74(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e78df8,0);
  return;
}



/* Entry: 106bfeb84; end: 106bfeb8f; -[SCFeatureSettingsService isDeclaredAgeRangeResultAvailable] */

void FUN_106bfeb84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e78e18);
  return;
}



/* Entry: 106bfeb90; end: 106bfeb9b; -[SCFeatureSettingsService declaredAgeRangeResultServerParam] */

undefined ** FUN_106bfeb90(void)

{
  return &PTR____CFConstantStringClassReference_110e78e18;
}



/* Entry: 106bfeb9c; end: 106bfebab; -[SCFeatureSettingsService setDeclaredAgeRangeResult:] */

void FUN_106bfeb9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e78e18,param_3);
  return;
}



/* Entry: 106bfebac; end: 106bfebb3; -[SCFeatureSettingsService activation_declared_age_range_result_client_value:] */

void FUN_106bfebac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106bfebb4; end: 106bfebbb; -[SCFeatureSettingsService activation_declared_age_range_result_server_value:] */

void FUN_106bfebb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106bfebbc; end: 106bfebe7; -[SCFeatureSettingsService declaredAgeRangeResult] */

void FUN_106bfebbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e78e18,0);
  return;
}



/* Entry: 106bfebe8; end: 106bfec43;  */

undefined8 FUN_106bfebe8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfda7c0(param_1,param_2,&PTR____CFConstantStringClassReference_110e78e98);
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bfdcf80(param_1,param_2,&PTR____CFConstantStringClassReference_110db3638);
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106bfec44; end: 106bfeceb;  */

void FUN_106bfec44(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110dacf38);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar1;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf60da0(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c25ce40(lVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106bfecec; end: 106bfecf7;  */

void FUN_106bfecec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf60db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSLocale_1126af788,PTR_s_currentXtmLocaleCode_1125b5d10);
  return;
}



/* Entry: 106bfecf8; end: 106bfedc3; -[SCTermsOfUseAcceptedVersionSyncJobProcessor initWithRepository:grpcService:logger:] */

undefined1 *
FUN_106bfecf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f5b28;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bfedc4; end: 106bfee57; -[SCTermsOfUseAcceptedVersionSyncJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8 FUN_106bfedc4(long param_1)

{
  undefined8 uVar1;
  long in_x5;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(in_x5);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0f7aa0();
  _objc_release(uVar2);
  if ((int)uVar1 < 1) {
    (**(code **)(in_x5 + 0x10))(in_x5,0,0);
  }
  else {
    func_0x00010bec96a0(param_1);
  }
  _objc_release(in_x5);
  return 0;
}



/* Entry: 106bfee58; end: 106bff03b; -[SCTermsOfUseAcceptedVersionSyncJobProcessor _syncAcceptedVersion:onComplete:] */

void FUN_106bfee58(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c0ca0;
  func_0x00010c0cb140(PTR_PTR_1126c0ca0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c160d40();
  _objc_initWeak(auStack_58,param_1);
  puVar2 = PTR_PTR_1126ae988;
  _objc_alloc(PTR_PTR_1126ae988);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  uStack_60 = param_3;
  _objc_opt_class(PTR_PTR_1126c0ca8);
  func_0x00010c0199c0(puVar2);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,1,0);
  }
  else {
    puVar4 = puVar1;
    func_0x00010bf63640(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae748;
    func_0x00010bf24820(PTR_PTR_1126ae748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27f2c0(lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 106bff03c; end: 106bff15f;  */

void FUN_106bff03c(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 != 0) {
      if (param_2 != 0) {
        func_0x000108c7d39c(param_2);
      }
      func_0x00010c0a02c0(*(undefined8 *)(lVar1 + 0x18));
      lVar3 = *(long *)(param_1 + 0x20);
      pcVar6 = *(code **)(lVar3 + 0x10);
      uVar4 = 1;
      lVar5 = param_3;
      goto LAB_106bff134;
    }
    func_0x00010c0a02c0(*(undefined8 *)(lVar1 + 0x18));
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0f7aa0();
    _objc_release(uVar2);
    if ((int)uVar4 == *(int *)(param_1 + 0x30)) {
      uVar4 = *(undefined8 *)(lVar1 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1da520();
      _objc_release(uVar4);
    }
  }
  lVar3 = *(long *)(param_1 + 0x20);
  pcVar6 = *(code **)(lVar3 + 0x10);
  uVar4 = 0;
  lVar5 = 0;
LAB_106bff134:
  (*pcVar6)(lVar3,uVar4,lVar5);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bff160; end: 106bff19b; -[SCTermsOfUseAcceptedVersionSyncJobProcessor .cxx_destruct] */

void FUN_106bff160(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bff19c; end: 106bff297; -[SCTermsOfUseHtmlBackgroundFetcherJobProcessor initWithRepository:tosConfigProvider:contentFetcher:logger:] */

undefined1 *
FUN_106bff19c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f5b30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bff298; end: 106bff2b3; -[SCTermsOfUseHtmlBackgroundFetcherJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8 FUN_106bff298(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_x5;
  
  func_0x00010be14e20(param_1,param_2,in_x5);
  return 0;
}



/* Entry: 106bff2b4; end: 106bff597; -[SCTermsOfUseHtmlBackgroundFetcherJobProcessor _fetchTOSHTMLContentsIfNeededWithOnComplete:] */

void FUN_106bff2b4(long param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  uint uStack_144;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c275e00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
    (**(code **)(param_3 + 0x10))(param_3,0,0);
    goto LAB_106bff54c;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(lVar1);
  param_4 = auStack_f0;
  param_5 = 0x10;
  lVar3 = lVar1;
  func_0x00010bf52a60();
  if (lVar3 == 0) {
    _objc_release(lVar1);
    func_0x00010bddf0a0(param_1);
LAB_106bff530:
    puVar8 = (undefined *)0x0;
    (**(code **)(param_3 + 0x10))(param_3,0,0);
  }
  else {
    uStack_144 = 0;
    lVar9 = *plStack_120;
    lStack_140 = param_3;
    lStack_138 = lVar9;
    do {
      unaff_x22 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        unaff_x26 = *(long *)(lStack_128 + unaff_x22 * 8);
        unaff_x24 = unaff_x26;
        func_0x00010c275de0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = unaff_x24;
        FUN_106bfebe8();
        if ((int)lVar4 != 0) {
          unaff_x25 = unaff_x24;
          FUN_106bfec44();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = unaff_x25;
          func_0x00010c08fa60();
          if (lVar4 != 0) {
            func_0x00010befa120(puVar2);
            uVar5 = *(undefined8 *)(param_1 + 0x18);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar5;
            func_0x00010c08af20();
            _objc_release(uVar5);
            lVar4 = unaff_x26;
            func_0x00010c298be0();
            lVar9 = lStack_138;
            unaff_x21 = lVar1;
            if ((int)uVar7 < (int)lVar4) {
              lVar9 = *(long *)(param_1 + 0x18);
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = lVar9;
              func_0x00010bf89320();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar9);
              lVar9 = unaff_x26;
              func_0x00010c08fa60();
              if (lVar9 == 0) {
                lVar9 = param_1;
                func_0x00010be1f5c0(param_1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010be10340(param_1);
                _objc_release(lVar9);
                uStack_144 = 1;
              }
              _objc_release(unaff_x26);
              lVar9 = lStack_138;
            }
          }
          _objc_release(unaff_x25);
        }
        _objc_release(unaff_x24);
        unaff_x22 = unaff_x22 + 1;
      } while (lVar3 != unaff_x22);
      param_4 = auStack_f0;
      param_5 = 0x10;
      lVar3 = lVar1;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    _objc_release(lVar1);
    puVar8 = puVar2;
    func_0x00010bddf0a0(param_1);
    unaff_x23 = 0;
    param_3 = lStack_140;
    if ((uStack_144 & 1) == 0) goto LAB_106bff530;
  }
  _objc_release(puVar2);
LAB_106bff54c:
  _objc_release(lVar1);
  lVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_158 = FUN_106bff598;
    lStack_1a0 = unaff_x26;
    lStack_198 = unaff_x25;
    lStack_190 = unaff_x24;
    uStack_188 = unaff_x23;
    lStack_180 = unaff_x22;
    lStack_178 = unaff_x21;
    lStack_170 = lVar1;
    lStack_168 = param_3;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(puVar8);
    _objc_retain(param_4);
    _objc_retain(param_5);
    puVar2 = PTR_PTR_1126b08b0;
    func_0x00010bf33760(PTR_PTR_1126b08b0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b17d8;
    _objc_alloc(PTR_PTR_1126b17d8);
    func_0x00010c003a80();
    _objc_initWeak(auStack_1a8,lVar3);
    uVar7 = *(undefined8 *)(lVar3 + 0x10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_1b0,auStack_1a8);
    _objc_retain(param_5);
    _objc_retain(param_4);
    func_0x00010c13e600(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_1b0);
    _objc_destroyWeak(auStack_1a8);
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(puVar8);
    return;
  }
  return;
}



/* Entry: 106bff598; end: 106bff73b; -[SCTermsOfUseHtmlBackgroundFetcherJobProcessor _fetchCDNFileWithUrl:tosHtmlKey:OnComplete:] */

void FUN_106bff598(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b08b0;
  func_0x00010bf33760(PTR_PTR_1126b08b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  _objc_initWeak(auStack_58,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c13e600(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106bff73c; end: 106bff857;  */

void FUN_106bff73c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    pcVar5 = *(code **)(lVar2 + 0x10);
    uVar4 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010bfcaaa0();
    if (lVar2 == 0) {
      func_0x00010c0a6540(*(undefined8 *)(lVar1 + 0x20));
      lVar2 = param_2;
      func_0x00010b7f5374(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
      uVar4 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c257400();
      _objc_release(uVar4);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
      _objc_release(puVar3);
      _objc_release(lVar2);
      goto LAB_106bff838;
    }
    func_0x00010c0a6540(*(undefined8 *)(lVar1 + 0x20));
    lVar2 = *(long *)(param_1 + 0x28);
    pcVar5 = *(code **)(lVar2 + 0x10);
    uVar4 = 1;
  }
  (*pcVar5)(lVar2,uVar4,0);
LAB_106bff838:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bff858; end: 106bff9d3; -[SCTermsOfUseHtmlBackgroundFetcherJobProcessor _cleanUpDeprecatedHTML:] */

void FUN_106bff858(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
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
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf89300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        uVar3 = param_3;
        func_0x00010bf4b900(param_3,param_2,*(undefined8 *)(lStack_128 + lVar9 * 8));
        if ((uVar3 & 1) == 0) {
          uVar4 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c257400();
          _objc_release(uVar4);
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = lVar2;
      puVar7 = &uStack_130;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = (undefined1 *)puVar7;
  _objc_retain(puVar7);
  FUN_106bfecec();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined1 *)puVar7;
  func_0x00010c25ce40(puVar7,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106bff9d4; end: 106bffa3b; -[SCTermsOfUseHtmlBackgroundFetcherJobProcessor _getFullCDNUrl:] */

void FUN_106bff9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_106bfecec();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c25ce40(param_3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106bffa3c; end: 106bffa83; -[SCTermsOfUseHtmlBackgroundFetcherJobProcessor .cxx_destruct] */

void FUN_106bffa3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bffa84; end: 106bffabf; -[SCTermsOfUseLoggerImpl logTermsOfUseAction:version:] */

void FUN_106bffa84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010be50940();
                    /* WARNING: Could not recover jumptable at 0x00010be54750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logGrapheneWithAction_version__112572b70,param_3,param_4);
  return;
}



/* Entry: 106bffac0; end: 106bffb03; -[SCTermsOfUseLoggerImpl logServerDrivenTermsOfUseAction:version:complianceRequirement:] */

void FUN_106bffac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010be586c0();
                    /* WARNING: Could not recover jumptable at 0x00010be58710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logServerDrivenTermsOfUseGraphe_112573b60,param_3,param_4,param_5);
  return;
}



/* Entry: 106bffb04; end: 106bffb5f; -[SCTermsOfUseLoggerImpl logServerDrivenTermsOfUseComplianceStatus:complianceStatusCheckCount:isCompliant:tosAvailable:tosVersion:] */

void FUN_106bffb04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x00010be586e0();
                    /* WARNING: Could not recover jumptable at 0x00010be58730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logServerDrivenTermsOfUseGraphe_112573b68,param_3,param_4,param_5,
             param_6,param_7);
  return;
}



/* Entry: 106bffb60; end: 106bffc03; -[SCTermsOfUseLoggerImpl logAcceptedTosVersionViaAtlasResult:success:errorCode:] */

void FUN_106bffb60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_106c03264(*(undefined8 *)(param_1 + 0x20),puVar2,param_4,puVar1,1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bffc04; end: 106bffc6f; -[SCTermsOfUseLoggerImpl logFetchCdnFileResultWithSuccess:errorCode:] */

void FUN_106bffc04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110daf4f8);
  _objc_retainAutoreleasedReturnValue();
  FUN_106c034dc(*(undefined8 *)(param_1 + 0x20),puVar1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bffc70; end: 106bffc7f; -[SCTermsOfUseLoggerImpl logMigratedLatestAcceptVersion:] */

undefined1 **
FUN_106bffc70(long param_1,undefined8 param_2,int param_3,undefined1 *param_4,undefined1 *param_5)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  undefined1 ***pppuVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 *unaff_x21;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar5 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = (undefined1 **)0x0;
  puVar6 = (undefined1 *)0x1;
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar7 = *(long **)(*(long *)(param_1 + 0x20) + 8);
    puVar1 = &UNK_10f3bfda1;
    if (param_3 == 0) {
      puVar1 = &UNK_10f3bfda6;
    }
    func_0x00010002b838(appuStack_50,puVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_4 = (undefined1 *)0x1;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109684e0);
    ppuVar2 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    puVar6 = (undefined1 *)puVar5;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar2 = appuStack_50[0];
      __ZdlPv();
      puVar6 = (undefined1 *)puVar5;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pppuVar3 = &ppuStack_b0;
  _objc_retain(puVar6);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_a8 = PTR_PTR_1126f5b68;
  ppuStack_b0 = ppuVar2;
  _objc_msgSendSuper2(&ppuStack_b0,PTR_s_init_1125d9248);
  if (pppuVar3 != (undefined1 ***)0x0) {
    _objc_retain(puVar6);
    puVar4 = (undefined1 *)pppuVar3[1];
    pppuVar3[1] = (undefined1 **)puVar6;
    _objc_release(puVar4);
    _objc_retain(param_4);
    puVar4 = (undefined1 *)pppuVar3[3];
    pppuVar3[3] = (undefined1 **)param_4;
    _objc_release(puVar4);
    _objc_retain(param_5);
    puVar4 = (undefined1 *)pppuVar3[4];
    pppuVar3[4] = (undefined1 **)param_5;
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar6);
  return (undefined1 **)pppuVar3;
}



/* Entry: 106bffc80; end: 106bffc8f; -[SCTermsOfUseLoggerImpl _scTosVersionToLegalPromptType:] */

undefined8 FUN_106bffc80(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0xb;
  if (param_3 != 0) {
    uVar1 = 0xc;
  }
  return uVar1;
}



/* Entry: 106bffc90; end: 106bffd2b; -[SCTermsOfUseLoggerImpl _logServerDrivenTermsOfUseBlizzardAction:version:complianceRequirement:] */

void FUN_106bffc90(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d1500;
  _objc_opt_new(PTR_PTR_1126d1500);
  func_0x00010c17fce0();
  func_0x00010c1ba7e0(puVar1,param_2,param_3);
  func_0x00010c1ba800(puVar1,param_2,0xd);
  func_0x00010c217e40(puVar1,param_2,(long)param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bffd2c; end: 106bffe1b; -[SCTermsOfUseLoggerImpl _logServerDrivenTermsOfUseGrapheneWithAction:version:complianceRequirement:] */

void FUN_106bffd2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcfe58);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bea1620(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_106c029f4(uVar4,puVar1,param_1,puVar2,puVar3,1,param_7,param_8,param_4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


