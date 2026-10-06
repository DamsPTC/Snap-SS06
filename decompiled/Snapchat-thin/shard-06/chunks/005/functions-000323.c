/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104949e84; end: 104949f07; -[FBSDKAppEventsState isCompatibleWithAppEventsState:] */

undefined8 FUN_104949e84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf05260(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c06ed80(param_1,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104949f08; end: 104949fe7; -[FBSDKAppEventsState isCompatibleWithTokenString:appID:] */

long FUN_104949f08(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c273280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c0720c0();
  _objc_release(param_3);
  if ((int)lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c273280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (param_3 != 0 || lVar1 != 0) {
      lVar2 = 0;
      goto LAB_104949fc8;
    }
  }
  else {
    _objc_release(lVar2);
  }
  func_0x00010bf05260(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c0720c0();
  _objc_release(param_1);
LAB_104949fc8:
  _objc_release(param_4);
  return lVar2;
}



/* Entry: 104949fe8; end: 10494a277; -[FBSDKAppEventsState JSONStringForEventsIncludingImplicitEvents:] */

undefined * FUN_104949fe8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bf39c40();
  func_0x00010bf9a160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    lVar1 = param_1;
    func_0x00010bf39c40();
    func_0x00010bf9a160();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar7 = *plStack_1a0;
      do {
        lVar8 = 0;
        do {
          if (*plStack_1a0 != lVar7) {
            _objc_enumerationMutation(lVar1);
          }
          func_0x00010c114a20(*(undefined8 *)(lStack_1a8 + lVar8 * 8),param_2,
                              *(undefined8 *)(param_1 + 0x20));
          lVar8 = lVar8 + 1;
        } while (lVar4 != lVar8);
        lVar4 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_1b0,auStack_f0,0x10);
      } while (lVar4 != 0);
    }
    _objc_release(lVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf529e0(uVar3);
  func_0x00010bffc4a0(puVar2,param_2,uVar3);
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain();
  lVar1 = lVar4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_1e0;
    do {
      lVar8 = 0;
      do {
        if (*plStack_1e0 != lVar7) {
          _objc_enumerationMutation(lVar4);
        }
        uVar9 = *(undefined8 *)(lStack_1e8 + lVar8 * 8);
        uVar3 = uVar9;
        func_0x00010c0e00e0(uVar9,param_2,&PTR____CFConstantStringClassReference_110da1ed8);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar3;
        func_0x00010bf1f3c0();
        _objc_release(uVar3);
        if (((param_3 & 1) != 0) || ((int)uVar5 == 0)) {
          func_0x00010c0e00e0(uVar9,param_2,&PTR____CFConstantStringClassReference_110daee38);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d3e0();
          func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar2,uVar9);
          _objc_release(uVar9);
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar4;
      func_0x00010bf52a60(lVar4,param_2,&uStack_1f0,auStack_170,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126add58;
  func_0x00010bdc19c0(PTR_PTR_1126add58,param_2,puVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar2 + 8);
}



/* Entry: 10494a278; end: 10494a27f; -[FBSDKAppEventsState numSkipped] */

undefined8 FUN_10494a278(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10494a280; end: 10494a287; -[FBSDKAppEventsState tokenString] */

undefined8 FUN_10494a280(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10494a288; end: 10494a28f; -[FBSDKAppEventsState appID] */

undefined8 FUN_10494a288(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10494a290; end: 10494a297; -[FBSDKAppEventsState mutableEvents] */

undefined8 FUN_10494a290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10494a298; end: 10494a2a3; -[FBSDKAppEventsState setMutableEvents:] */

void FUN_10494a298(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10494a2a4; end: 10494a2df; -[FBSDKAppEventsState .cxx_destruct] */

void FUN_10494a2a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10494a2e0; end: 10494a31b; -[FBSDKAppEventsStateManager init] */

void FUN_10494a2e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126e32e0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = 0;
  }
  return;
}



/* Entry: 10494a31c; end: 10494a377; +[FBSDKAppEventsStateManager shared] */

void FUN_10494a31c(void)

{
  if (lRam000000011369ced8 != -1) {
    func_0x00010bda8734();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cee0);
  return;
}



/* Entry: 10494a378; end: 10494a40f; -[FBSDKAppEventsStateManager clearPersistedAppEventsStates] */

void FUN_10494a378(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c23cd40(PTR_PTR_1126add38,param_2,&PTR____CFConstantStringClassReference_110da4e18,
                      &PTR____CFConstantStringClassReference_110da1f58);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfacf40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40(puVar1);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c177dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCanSkipDiskCheck__11263b990,1);
  return;
}



/* Entry: 10494a410; end: 10494a57b; -[FBSDKAppEventsStateManager persistAppEventsData:] */

void FUN_10494a410(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_3;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c25d9e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da1f78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c23cd40(PTR_PTR_1126add38,param_2,&PTR____CFConstantStringClassReference_110da4e18,
                      puVar3);
  lVar2 = param_3;
  func_0x00010bf9a520();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  if (lVar4 != 0) {
    uVar5 = param_1;
    func_0x00010c13ed60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0(puVar6,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010bf09f20(PTR_PTR_1126add78,param_2,puVar6,param_3);
    puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    uVar5 = param_1;
    func_0x00010bfacf40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09740(puVar1,param_2,puVar6,uVar5);
    _objc_release(uVar5);
    func_0x00010c177dc0(param_1,param_2,0);
    _objc_release(puVar6);
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10494a57c; end: 10494a7b7; -[FBSDKAppEventsStateManager retrievePersistedAppEventsStates] */

void FUN_10494a57c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf2d840();
  if ((uVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
    uVar2 = param_1;
    func_0x00010bfacf40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c004060(puVar3,param_2,uVar2,1,0);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126addf0;
    func_0x00010bf58b60(PTR_PTR_1126addf0,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf39c40(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x00010bf39c40();
    func_0x00010bf39c40();
    func_0x00010c226900(puVar6,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf67040(puVar4,param_2,puVar6,
                        *(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126add78;
    func_0x00010bf0a0a0(PTR_PTR_1126add78,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bf529e0();
    puVar5 = puVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf9a520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c25d9e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110da1f98);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar5);
    func_0x00010c23cd40(PTR_PTR_1126add38,param_2,&PTR____CFConstantStringClassReference_110da4e18,
                        puVar6);
    func_0x00010bf3bc60(param_1);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10494a7b8; end: 10494a7cb; -[FBSDKAppEventsStateManager filePath] */

void FUN_10494a7b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fa3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126add58,PTR_s_persistenceFilePath__11261c310,
             &PTR____CFConstantStringClassReference_110da1fb8);
  return;
}



/* Entry: 10494a7cc; end: 10494a7d3; -[FBSDKAppEventsStateManager canSkipDiskCheck] */

undefined1 FUN_10494a7cc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10494a7d4; end: 10494a7db; -[FBSDKAppEventsStateManager setCanSkipDiskCheck:] */

void FUN_10494a7d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10494a7dc; end: 10494a84b; +[FBSDKAppEventsUtility shared] */

void FUN_10494a7dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_sync_enter();
  if (lRam000000011369cee8 == 0) {
    lVar2 = param_1;
    func_0x00010c0d8420();
    lVar1 = lRam000000011369cee8;
    lRam000000011369cee8 = lVar2;
    _objc_release(lVar1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(lRam000000011369cee8);
  return;
}



/* Entry: 10494a84c; end: 10494a85b; +[FBSDKAppEventsUtility setShared:] */

void FUN_10494a84c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cee8,param_3);
  return;
}



/* Entry: 10494a85c; end: 10494a94b; -[FBSDKAppEventsUtility configureWithAppEventsConfigurationProvider:deviceInformationProvider:settings:internalUtility:errorFactory:dataStore:] */

void FUN_10494a85c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c168960(param_1,param_2,param_3);
  func_0x00010c18ca40(param_1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1fe440(param_1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1ae600(param_1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c1970c0(param_1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c1898c0(param_1,param_2,param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 10494a94c; end: 10494af23; -[FBSDKAppEventsUtility activityParametersDictionaryForEvent:shouldAccessAdvertisingID:userID:userData:] */

void FUN_10494a94c(long param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5,
                  undefined **param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain();
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010bf71e20(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar3,param_3,
                      &PTR____CFConstantStringClassReference_110daee38);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126add78;
  if (param_4 != 0) {
    lVar4 = param_1;
    func_0x00010befe480(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar2,param_2,puVar3,lVar4,&PTR____CFConstantStringClassReference_110da1fd8
                       );
    _objc_release(lVar4);
  }
  puVar2 = PTR_PTR_1126add78;
  puVar5 = PTR_PTR_1126add58;
  func_0x00010bf047e0(PTR_PTR_1126add58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar2,param_2,puVar3,puVar5,&PTR____CFConstantStringClassReference_110da05b8)
  ;
  _objc_release(puVar5);
  lVar4 = param_1;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010befe560();
  _objc_release(lVar4);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR_PTR_1126add78;
  if (lVar6 != 2) {
    lVar4 = param_1;
    func_0x00010c227f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c06bb20();
    func_0x00010c0df6e0(puVar5,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar2,param_2,puVar3,puVar7,
                        &PTR____CFConstantStringClassReference_110da1ff8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(lVar4);
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e03918;
  if (param_6 != (undefined **)0x0) {
    ppuVar1 = param_6;
  }
  func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar3,ppuVar1,
                      &PTR____CFConstantStringClassReference_110da2018);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR_PTR_1126add78;
  lVar4 = param_1;
  func_0x00010c227f80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c072280();
  func_0x00010c0df760(puVar5,param_2,(uint)lVar6 ^ 1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar2,param_2,puVar3,puVar7,&PTR____CFConstantStringClassReference_110da2038)
  ;
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(lVar4);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR_PTR_1126add78;
  lVar4 = param_1;
  func_0x00010c227f80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c06bb00();
  func_0x00010c0df6e0(puVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar2,param_2,puVar3,puVar7,&PTR____CFConstantStringClassReference_110da1d58)
  ;
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(lVar4);
  if (param_5 != 0) {
    func_0x00010bf71e80(PTR_PTR_1126add78,param_2,puVar3,param_5,
                        &PTR____CFConstantStringClassReference_110da2058);
  }
  puVar2 = PTR_PTR_1126add78;
  lVar4 = param_1;
  func_0x00010bfc3620(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar2,param_2,puVar3,lVar4,&PTR____CFConstantStringClassReference_110da2078);
  _objc_release(lVar4);
  lVar4 = param_1;
  func_0x00010c069660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9da40();
  _objc_release(lVar4);
  puVar2 = PTR_PTR_1126add78;
  lVar4 = param_1;
  func_0x00010bf70900(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010bf934e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf70900(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c257120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf71e80(puVar2,param_2,puVar3,lVar6,lVar8);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(lVar4);
  if (lRam000000011369cef0 != -1) {
    func_0x00010bda8748();
  }
  lVar4 = lRam000000011369cef8;
  func_0x00010bf529e0();
  puVar2 = PTR_PTR_1126add78;
  if (lVar4 != 0) {
    puVar5 = PTR_PTR_1126add58;
    func_0x00010bdc19c0(PTR_PTR_1126add58,param_2,lRam000000011369cef8,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf71e80(puVar2,param_2,puVar3,puVar5,
                        &PTR____CFConstantStringClassReference_110da20d8);
    _objc_release(puVar5);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10494af24; end: 10494afa7; -[FBSDKAppEventsUtility advertiserID] */

void FUN_10494af24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2351c0();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126addf8;
  func_0x00010c22b6a0(PTR_PTR_1126addf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc9880(param_1,param_2,puVar3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10494afa8; end: 10494b0c3; -[FBSDKAppEventsUtility _advertiserIDFromDynamicFrameworkResolver:shouldUseCachedManager:] */

void FUN_10494afa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar4 = param_1;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c06bb00();
  _objc_release(uVar4);
  if ((int)uVar2 == 0) {
LAB_10494b0a0:
    uVar4 = 0;
  }
  else {
    iVar1 = 2;
    func_0x000100029b9c(2,0xe,0,0);
    if (iVar1 != 0) {
      uVar4 = param_1;
      func_0x00010bf050c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf26f40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010befe4a0();
      _objc_release(uVar2);
      _objc_release(uVar4);
      if ((int)uVar3 == 0) goto LAB_10494b0a0;
    }
    func_0x00010bdcf400(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010befe540();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10494b0c4; end: 10494b163; -[FBSDKAppEventsUtility _asIdentifierManagerWithShouldUseCachedManager:dynamicFrameworkResolver:] */

void FUN_10494b0c4(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010bf26f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010bf26f00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      goto LAB_10494b148;
    }
  }
  lVar2 = param_4;
  func_0x00010bf0a7c0(param_4);
  func_0x00010c22bc20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  if (param_3 == 0) {
    lVar1 = 0;
  }
  func_0x00010c175280(param_1,param_2,lVar1);
LAB_10494b148:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10494b164; end: 10494b1d3; -[FBSDKAppEventsUtility isStandardEvent:] */

undefined8 FUN_10494b164(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010bfca9e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf4b900();
    _objc_release(param_3);
    _objc_release(param_1);
    return uVar1;
  }
  return 0;
}



/* Entry: 10494b1d4; end: 10494b377; -[FBSDKAppEventsUtility getStandardEvents] */

void FUN_10494b1d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar2 = &ppuStack_d0;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110da0c38;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110da0d78;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110da0d18;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110da0cf8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110da0c58;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110da0e58;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110da0e78;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110da0e98;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110da0e38;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110da0eb8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110da0f98;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110da0fb8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110da0fd8;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110da0c78;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110da0c98;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110da0cb8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110da0cd8;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e80f98;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110da0d38;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110da0d58;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110ea7d98;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110da0c18;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110da0bf8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_d0,0x17);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126add58;
  if (pppuVar2 != (undefined ***)0x0) {
    func_0x00010c11d080(pppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf720c0(puVar3,param_2,pppuVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar2);
    puVar4 = puVar3;
    func_0x00010c0e00e0(puVar3,param_2,&PTR____CFConstantStringClassReference_110da20f8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126add78;
    if (puVar4 != (undefined *)0x0) {
      puVar5 = PTR_PTR_1126add58;
      func_0x00010c0dff00(PTR_PTR_1126add58,param_2,puVar4,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71fc0(puVar6,param_2,puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126add78;
      if (puVar6 != (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x00010bf71e60(puVar5,param_2,puVar6,&PTR____CFConstantStringClassReference_110da2078,
                            puVar7);
        _objc_retainAutoreleasedReturnValue();
        if (puVar5 != (undefined *)0x0) {
          func_0x00010bf64720(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa1780();
          _objc_release(puVar1);
        }
        _objc_release(puVar5);
      }
      _objc_release(puVar6);
    }
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10494b378; end: 10494b4cf; -[FBSDKAppEventsUtility saveCampaignIDs:] */

void FUN_10494b378(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126add58;
  if (param_3 != 0) {
    func_0x00010c11d080(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf720c0(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar2 = puVar1;
    func_0x00010c0e00e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110da20f8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126add78;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126add58;
      func_0x00010c0dff00(PTR_PTR_1126add58,param_2,puVar2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf71fc0(puVar4,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126add78;
      if (puVar4 != (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x00010bf71e60(puVar3,param_2,puVar4,&PTR____CFConstantStringClassReference_110da2078,
                            puVar5);
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 != (undefined *)0x0) {
          func_0x00010bf64720(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa1780();
          _objc_release(param_1);
        }
        _objc_release(puVar3);
      }
      _objc_release(puVar4);
    }
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10494b4d0; end: 10494b54b; -[FBSDKAppEventsUtility getCampaignIDs] */

void FUN_10494b4d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126add78;
  func_0x00010bf64720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfa16e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d860(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10494b54c; end: 10494b617; -[FBSDKAppEventsUtility clearLibraryFiles] */

void FUN_10494b54c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf39c40(param_1);
  func_0x00010c0fa3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40(puVar1,param_2,uVar2,0);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf39c40(param_1);
  func_0x00010c0fa3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc40(puVar1,param_2,param_1,0);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10494b618; end: 10494b6bf; -[FBSDKAppEventsUtility ensureOnMainThread:className:] */

void FUN_10494b618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da2158);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23cd40(PTR_PTR_1126add38,param_2,&PTR____CFConstantStringClassReference_110da4eb8,
                        puVar1);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10494b6c0; end: 10494b6e3; -[FBSDKAppEventsUtility flushReasonToString:] */

undefined ** FUN_10494b6c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 6) {
    return (undefined **)(&PTR_PTR_1107b9580)[param_3];
  }
  return &PTR____CFConstantStringClassReference_110db54d8;
}



/* Entry: 10494b6e4; end: 10494b6eb; -[FBSDKAppEventsUtility logAndNotify:] */

void FUN_10494b6e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a0ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_logAndNotify_allowLogAsDeveloper_112605dc0,param_3,1);
  return;
}



/* Entry: 10494b6ec; end: 10494b847; -[FBSDKAppEventsUtility logAndNotify:allowLogAsDeveloperError:] */

void FUN_10494b6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110da4e18;
  _objc_retain(&PTR____CFConstantStringClassReference_110da4e18);
  if (param_4 != 0) {
    uVar2 = param_1;
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0b3980();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = &PTR____CFConstantStringClassReference_110da4eb8;
    uVar4 = uVar3;
    func_0x00010bf4b900();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 != 0) {
      _objc_retain(&PTR____CFConstantStringClassReference_110da4eb8);
      _objc_release(ppuVar1);
      ppuVar1 = ppuVar6;
    }
  }
  func_0x00010c23cd40(PTR_PTR_1126add38,param_2,ppuVar1,param_3);
  func_0x00010bf98ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf99200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10494b848; end: 10494b91b; -[FBSDKAppEventsUtility matchString:firstCharacterSet:restOfStringCharacterSet:] */

undefined8
FUN_10494b848(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain();
  _objc_retain();
  uVar3 = param_3;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
LAB_10494b8ec:
    uVar4 = 0;
  }
  else {
    uVar3 = param_3;
    func_0x00010c08fa60();
    if (uVar3 != 0) {
      uVar3 = 0;
      do {
        uVar1 = param_3;
        func_0x00010bf35920(param_3,param_2,uVar3);
        if (uVar3 == 0) {
          uVar2 = param_4;
          func_0x00010bf359c0(param_4,param_2,uVar1);
          if ((uVar2 & 1) == 0) goto LAB_10494b8ec;
        }
        else {
          uVar4 = param_5;
          func_0x00010bf359c0(param_5,param_2,uVar1);
          if ((int)uVar4 == 0) goto LAB_10494b8ec;
        }
        uVar3 = uVar3 + 1;
        uVar1 = param_3;
        func_0x00010c08fa60();
      } while (uVar3 < uVar1);
    }
    uVar4 = 1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 10494b91c; end: 10494b9ef; -[FBSDKAppEventsUtility regexValidateIdentifier:] */

undefined8 FUN_10494b91c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (lRam000000011369cf10 != -1) {
    func_0x00010bda875c();
  }
  _objc_retain();
  _objc_sync_enter();
  uVar1 = uRam000000011369cf18;
  func_0x00010bf4b900(uRam000000011369cf18,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010c0c05a0(param_1,param_2,param_3,uRam000000011369cf00,uRam000000011369cf08);
    if ((int)uVar2 == 0) {
      uVar2 = 0;
      goto LAB_10494b9a8;
    }
    func_0x00010befa120(uRam000000011369cf18,param_2,param_3);
  }
  uVar2 = 1;
LAB_10494b9a8:
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10494b9f0; end: 10494ba97;  */

void FUN_10494b9f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableCharacterSet_1126af248;
  func_0x00010bf01c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7620();
  puVar3 = puVar2;
  func_0x00010bf51e00();
  uVar1 = puRam000000011369cf00;
  puRam000000011369cf00 = puVar3;
  _objc_release(uVar1);
  func_0x00010bef7620(puVar2,param_2,&PTR____CFConstantStringClassReference_110da2218);
  puVar3 = puVar2;
  func_0x00010bf51e00();
  uVar1 = puRam000000011369cf08;
  puRam000000011369cf08 = puVar3;
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c0d8420();
  uVar1 = puRam000000011369cf18;
  puRam000000011369cf18 = puVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10494ba98; end: 10494bb53; -[FBSDKAppEventsUtility validateIdentifier:] */

undefined8 FUN_10494ba98(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain();
  if ((((param_3 == 0) || (uVar1 = param_3, func_0x00010c08fa60(), uVar1 == 0)) ||
      (uVar1 = param_3, func_0x00010c08fa60(), 0x28 < uVar1)) ||
     (uVar1 = param_1, func_0x00010c125a20(param_1,param_2,param_3), (uVar1 & 1) == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110da2238);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0ea0(param_1,param_2,puVar2);
    _objc_release(puVar2);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10494bb54; end: 10494be37; -[FBSDKAppEventsUtility tokenStringToUseFor:loggingOverrideAppID:] */

void FUN_10494bb54(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  _objc_retain();
  if (param_3 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126add50;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c070ce0();
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = param_1;
      func_0x00010c227f80();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010c06bb20();
      _objc_release(puVar5);
      _objc_release(puVar1);
      if ((int)puVar2 != 0) goto LAB_10494bbf0;
      goto LAB_10494bc20;
    }
    _objc_release(puVar1);
LAB_10494bbf0:
    param_3 = PTR_PTR_1126add30;
    func_0x00010bf5df00();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != (undefined *)0x0) goto LAB_10494bc0c;
  }
  else {
LAB_10494bc0c:
    puVar1 = param_3;
    func_0x00010c072440();
    if ((int)puVar1 != 0) {
      _objc_release(param_3);
LAB_10494bc20:
      param_3 = (undefined *)0x0;
    }
  }
  if (param_4 == (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar5 = param_1;
      func_0x00010c227f80();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      func_0x00010bf05260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
    else {
      puVar2 = puVar1;
      _objc_retain();
    }
    _objc_release(puVar1);
  }
  else {
    puVar2 = param_4;
    _objc_retain();
  }
  puVar1 = param_3;
  func_0x00010c273280(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  func_0x00010c227f80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar5;
  func_0x00010bf3d5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (param_3 != (undefined *)0x0) {
    puVar5 = param_3;
    func_0x00010bf05260(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c0720c0(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    if (((ulong)puVar4 & 1) != 0) goto LAB_10494bdf8;
  }
  if ((param_4 == (undefined *)0x0) || (puVar3 == (undefined *)0x0)) {
LAB_10494bd80:
    if ((puVar3 == (undefined *)0x0) || (puVar2 == (undefined *)0x0)) {
      if (puVar2 == (undefined *)0x0) goto LAB_10494bdf8;
      goto LAB_10494bde8;
    }
    if (param_3 != (undefined *)0x0) {
      puVar5 = param_3;
      func_0x00010bf05260(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c0720c0(puVar2,param_2,puVar5);
      _objc_release(puVar5);
      if ((int)puVar4 == 0) goto LAB_10494bde8;
    }
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110e86738);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == param_4) {
      _objc_release(puVar5);
      _objc_release(param_1);
      goto LAB_10494bd80;
    }
    puVar4 = param_3;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar5);
    _objc_release(param_1);
    if (puVar4 == param_4) goto LAB_10494bd80;
LAB_10494bde8:
    puVar5 = (undefined *)0x0;
  }
  _objc_release(puVar1);
  puVar1 = puVar5;
LAB_10494bdf8:
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10494be38; end: 10494be83; -[FBSDKAppEventsUtility unixTimeNow] */

long FUN_10494be38(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  return (long)param_1;
}



/* Entry: 10494be84; end: 10494be9f; -[FBSDKAppEventsUtility convertToUnixTime:] */

long FUN_10494be84(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c26f320(param_4);
  return (long)param_1;
}



/* Entry: 10494bea0; end: 10494c06b; -[FBSDKAppEventsUtility isDebugBuild] */

bool FUN_10494bea0(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  puVar6 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00010c0f5960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar6);
  if (puVar3 == (undefined *)0x0) {
    bVar1 = false;
  }
  else {
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    func_0x00010c08fa60(puVar3);
    func_0x00010bffc4a0(puVar2);
    for (puVar6 = (undefined *)0x0; puVar4 = puVar3, func_0x00010c08fa60(), puVar6 < puVar4;
        puVar6 = puVar6 + 1) {
      func_0x00010bf06ba0(puVar2);
    }
    puVar6 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
    func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf44700(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar6);
    func_0x00010c11f420(puVar5);
    bVar1 = param_2 != 0;
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  return bVar1;
}



/* Entry: 10494c06c; end: 10494c123; -[FBSDKAppEventsUtility shouldDropAppEvents] */

undefined8 FUN_10494c06c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0xe,0,0);
  if (iVar1 != 0) {
    lVar2 = param_1;
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010befe560();
    if (lVar3 == 1) {
      func_0x00010bf050c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf26f40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf99c20();
      _objc_release(lVar3);
      _objc_release(param_1);
      _objc_release(lVar2);
      if ((int)lVar4 == 0) {
        return 1;
      }
    }
    else {
      _objc_release(lVar2);
    }
  }
  return 0;
}



/* Entry: 10494c124; end: 10494c18f; -[FBSDKAppEventsUtility isSensitiveUserData:] */

ulong FUN_10494c124(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x00010c071700(param_1,param_2,param_3);
    if ((uVar2 & 1) == 0) {
      func_0x00010c06f980(param_1,param_2,param_3);
    }
    else {
      param_1 = 1;
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10494c190; end: 10494c35f; -[FBSDKAppEventsUtility isCreditCardNumber:] */

bool FUN_10494c190(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  _objc_retain();
  func_0x00010bf66760(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c06a520();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010bf44700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar8 = uVar7;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010bf885a0(uVar8);
  if (((param_1 == 0.0) || (uVar7 = uVar8, func_0x00010c08fa60(), uVar7 < 9)) ||
     (uVar7 = uVar8, func_0x00010c08fa60(), 0x15 < uVar7)) {
    bVar4 = false;
  }
  else {
    uVar7 = uVar8;
    _objc_retainAutorelease();
    func_0x00010bf260e0();
    bVar4 = false;
    if (uVar7 != 0) {
      uVar9 = uVar8;
      func_0x00010c08fa60();
      if ((int)uVar9 < 1) {
        bVar4 = true;
      }
      else {
        iVar11 = 0;
        bVar4 = true;
        uVar9 = uVar9 & 0x7fffffff;
        iVar10 = 0;
        do {
          iVar3 = *(char *)((uVar7 - 1) + uVar9) + -0x30;
          iVar2 = (iVar3 * 2) % 10 + iVar10 + ((iVar3 * 0x6667 >> 0x11) - (iVar3 * 0x6667 >> 0x1f));
          if (bVar4) {
            iVar2 = iVar10;
            iVar11 = iVar3 + iVar11;
          }
          bVar4 = (bool)(bVar4 ^ 1);
          bVar1 = 1 < uVar9;
          uVar9 = uVar9 - 1;
          iVar10 = iVar2;
        } while (bVar1);
        bVar4 = ((iVar2 + iVar11) * -0x33333333 + 0x19999998U >> 1 | (iVar2 + iVar11) * -0x80000000)
                < 0x19999999;
      }
    }
  }
  _objc_release(uVar8);
  return bVar4;
}



/* Entry: 10494c360; end: 10494c3f3; -[FBSDKAppEventsUtility isEmailAddress:] */

bool FUN_10494c360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c034740();
  uVar2 = param_3;
  func_0x00010c08fa60(param_3);
  puVar3 = puVar1;
  func_0x00010c0defc0(puVar1,param_2,param_3,0,0,uVar2);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar3 != (undefined *)0x0;
}



/* Entry: 10494c3f4; end: 10494c3fb; -[FBSDKAppEventsUtility appEventsConfigurationProvider] */

undefined8 FUN_10494c3f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10494c3fc; end: 10494c407; -[FBSDKAppEventsUtility setAppEventsConfigurationProvider:] */

void FUN_10494c3fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,param_3);
  return;
}



/* Entry: 10494c408; end: 10494c40f; -[FBSDKAppEventsUtility deviceInformationProvider] */

undefined8 FUN_10494c408(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10494c410; end: 10494c41b; -[FBSDKAppEventsUtility setDeviceInformationProvider:] */

void FUN_10494c410(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10494c41c; end: 10494c423; -[FBSDKAppEventsUtility settings] */

undefined8 FUN_10494c41c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10494c424; end: 10494c42f; -[FBSDKAppEventsUtility setSettings:] */

void FUN_10494c424(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10494c430; end: 10494c437; -[FBSDKAppEventsUtility internalUtility] */

undefined8 FUN_10494c430(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10494c438; end: 10494c443; -[FBSDKAppEventsUtility setInternalUtility:] */

void FUN_10494c438(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10494c444; end: 10494c44b; -[FBSDKAppEventsUtility errorFactory] */

undefined8 FUN_10494c444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10494c44c; end: 10494c457; -[FBSDKAppEventsUtility setErrorFactory:] */

void FUN_10494c44c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10494c458; end: 10494c45f; -[FBSDKAppEventsUtility dataStore] */

undefined8 FUN_10494c458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10494c460; end: 10494c46b; -[FBSDKAppEventsUtility setDataStore:] */

void FUN_10494c460(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 10494c46c; end: 10494c473; -[FBSDKAppEventsUtility cachedAdvertiserIdentifierManager] */

undefined8 FUN_10494c46c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10494c474; end: 10494c47f; -[FBSDKAppEventsUtility setCachedAdvertiserIdentifierManager:] */

void FUN_10494c474(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 10494c480; end: 10494c4eb; -[FBSDKAppEventsUtility .cxx_destruct] */

void FUN_10494c480(long param_1)

{
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



/* Entry: 10494c4ec; end: 10494c6a7; +[FBSDKAppLinkUtility configureWithGraphRequestFactory:infoDictionaryProvider:settings:appEventsConfigurationProvider:advertiserIDProvider:appEventsDropDeterminer:appEventParametersExtractor:appLinkURLFactory:userIDProvider:userDataStore:] */

void FUN_10494c4ec(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = PTR_PTR_1126ade00;
  func_0x00010bf39c40();
  if (puVar1 == param_1) {
    func_0x00010c1a42e0(param_1,param_2,param_3);
    func_0x00010c1ac400(param_1,param_2,param_4);
    func_0x00010c1fe440(param_1,param_2,param_5);
    func_0x00010c168960(param_1,param_2,param_6);
    func_0x00010c166340(param_1,param_2,param_7);
    func_0x00010c168980(param_1,param_2,param_8);
    func_0x00010c168940(param_1,param_2,param_9);
    func_0x00010c168e00(param_1,param_2,param_10);
    func_0x00010c21e5a0(param_1,param_2,param_11);
    func_0x00010c21e1e0(param_1,param_2,param_12);
    func_0x00010c1b01e0(param_1,param_2,1);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10494c6a8; end: 10494c6b3; +[FBSDKAppLinkUtility graphRequestFactory] */

void FUN_10494c6a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cf20);
  return;
}



/* Entry: 10494c6b4; end: 10494c6c3; +[FBSDKAppLinkUtility setGraphRequestFactory:] */

void FUN_10494c6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cf20,param_3);
  return;
}



/* Entry: 10494c6c4; end: 10494c6cf; +[FBSDKAppLinkUtility infoDictionaryProvider] */

void FUN_10494c6c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cf28);
  return;
}



/* Entry: 10494c6d0; end: 10494c6df; +[FBSDKAppLinkUtility setInfoDictionaryProvider:] */

void FUN_10494c6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cf28,param_3);
  return;
}



/* Entry: 10494c6e0; end: 10494c6eb; +[FBSDKAppLinkUtility settings] */

void FUN_10494c6e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cf30);
  return;
}



/* Entry: 10494c6ec; end: 10494c6fb; +[FBSDKAppLinkUtility setSettings:] */

void FUN_10494c6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cf30,param_3);
  return;
}



/* Entry: 10494c6fc; end: 10494c707; +[FBSDKAppLinkUtility appEventsConfigurationProvider] */

void FUN_10494c6fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cf38);
  return;
}



/* Entry: 10494c708; end: 10494c717; +[FBSDKAppLinkUtility setAppEventsConfigurationProvider:] */

void FUN_10494c708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cf38,param_3);
  return;
}



/* Entry: 10494c718; end: 10494c723; +[FBSDKAppLinkUtility advertiserIDProvider] */

void FUN_10494c718(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cf40);
  return;
}



/* Entry: 10494c724; end: 10494c733; +[FBSDKAppLinkUtility setAdvertiserIDProvider:] */

void FUN_10494c724(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cf40,param_3);
  return;
}



/* Entry: 10494c734; end: 10494c73f; +[FBSDKAppLinkUtility appEventsDropDeterminer] */

void FUN_10494c734(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cf48);
  return;
}



/* Entry: 10494c740; end: 10494c74f; +[FBSDKAppLinkUtility setAppEventsDropDeterminer:] */

void FUN_10494c740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cf48,param_3);
  return;
}



/* Entry: 10494c750; end: 10494c75b; +[FBSDKAppLinkUtility appEventParametersExtractor] */

void FUN_10494c750(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cf50);
  return;
}



/* Entry: 10494c75c; end: 10494c76b; +[FBSDKAppLinkUtility setAppEventParametersExtractor:] */

void FUN_10494c75c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cf50,param_3);
  return;
}



/* Entry: 10494c76c; end: 10494c777; +[FBSDKAppLinkUtility appLinkURLFactory] */

void FUN_10494c76c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cf58);
  return;
}



/* Entry: 10494c778; end: 10494c787; +[FBSDKAppLinkUtility setAppLinkURLFactory:] */

void FUN_10494c778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cf58,param_3);
  return;
}



/* Entry: 10494c788; end: 10494c793; +[FBSDKAppLinkUtility userIDProvider] */

void FUN_10494c788(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cf60);
  return;
}



/* Entry: 10494c794; end: 10494c7a3; +[FBSDKAppLinkUtility setUserIDProvider:] */

void FUN_10494c794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cf60,param_3);
  return;
}



/* Entry: 10494c7a4; end: 10494c7af; +[FBSDKAppLinkUtility userDataStore] */

void FUN_10494c7a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cf68);
  return;
}



/* Entry: 10494c7b0; end: 10494c7bf; +[FBSDKAppLinkUtility setUserDataStore:] */

void FUN_10494c7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cf68,param_3);
  return;
}



/* Entry: 10494c7c0; end: 10494c7cb; +[FBSDKAppLinkUtility isConfigured] */

undefined1 FUN_10494c7c0(void)

{
  return uRam000000011369cf70;
}



/* Entry: 10494c7cc; end: 10494c7d7; +[FBSDKAppLinkUtility setIsConfigured:] */

void FUN_10494c7cc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  uRam000000011369cf70 = param_3;
  return;
}



/* Entry: 10494c7d8; end: 10494c88b; +[FBSDKAppLinkUtility fetchDeferredAppLink:] */

void FUN_10494c7d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  func_0x00010c296860(param_1);
  uVar1 = param_1;
  func_0x00010bf050c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10494c88c;
  puStack_48 = &UNK_110860cf8;
  uStack_40 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c09ada0(uVar1,param_2,&puStack_60);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 10494c88c; end: 10494cbdb;  */

void FUN_10494c88c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint uVar11;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf050e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010c22ff20();
  _objc_release(uVar2);
  if ((int)uVar10 == 0) {
    iVar1 = 2;
    func_0x000100029b9c(2,0xe,5,0);
    if (iVar1 != 0) {
      lVar3 = *(long *)(param_1 + 0x28);
      func_0x00010befe4c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010befe480();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        uVar11 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010befe4c0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar5;
        func_0x00010befe480();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar10;
        func_0x00010c0720c0();
        _objc_release(uVar10);
        _objc_release(uVar5);
        uVar11 = (uint)uVar2 ^ 1;
      }
      _objc_release(lVar4);
      _objc_release(lVar3);
      if ((*(long *)(param_1 + 0x20) != 0) && ((uVar11 & 1) == 0)) {
        puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
        _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
        goto LAB_10494c9b4;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf05060(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c292380(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010c292360();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c2919c0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bfcbd80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bef1900(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar8);
    _objc_release(uVar10);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bfcde20(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c227f80();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar7;
    func_0x00010bf05260();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010bf565c0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(uVar10);
    _objc_release(uVar7);
    _objc_release(uVar6);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain();
    func_0x00010c251a80(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(uVar2);
    _objc_release(uVar5);
  }
  else if (*(long *)(param_1 + 0x20) != 0) {
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
LAB_10494c9b4:
    func_0x00010c00e2e0();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar9);
    return;
  }
  return;
}



/* Entry: 10494cbdc; end: 10494ce0b;  */

void FUN_10494cbdc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain();
  _objc_retain();
  if (param_4 == 0) {
    lVar1 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar2;
      if (lVar3 != 0) {
        func_0x00010beec820(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010c11d080();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        func_0x00010c25cde0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        _objc_release(puVar7);
        puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bdc3460();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar5);
      }
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10494ce0c;
    puStack_80 = &UNK_11084a9e8;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain();
    puVar2 = puVar7;
    uStack_68 = uVar6;
    _objc_retain();
    lVar1 = param_4;
    puStack_78 = puVar2;
    _objc_retain();
    lStack_70 = lVar1;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_98);
    _objc_release(lStack_70);
    _objc_release(puStack_78);
    _objc_release(uStack_68);
  }
  _objc_release(puVar7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10494ce0c; end: 10494ce1f;  */

void FUN_10494ce0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010494ce1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10494ce20; end: 10494cfaf; +[FBSDKAppLinkUtility appInvitePromotionCodeFromURL:] */

void FUN_10494ce20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  func_0x00010c296860(param_1);
  func_0x00010bf059a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf54900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  lVar2 = lVar1;
  func_0x00010bf05920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x0;
    goto LAB_10494cf84;
  }
  lVar3 = lVar2;
  func_0x00010c0e00e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110da2438);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf39c40(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar4 = lVar3;
  func_0x00010c075f00(lVar3,param_2,puVar8);
  if (((int)lVar4 == 0) || (lVar4 = lVar3, func_0x00010c08fa60(), lVar4 == 0)) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puStack_48 = (undefined *)0x0;
    puVar5 = PTR_PTR_1126add58;
    func_0x00010c0dff00(PTR_PTR_1126add58,param_2,lVar3,&puStack_48);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puStack_48;
    _objc_retain();
    if (puVar6 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf39c40(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      puVar7 = puVar5;
      func_0x00010c075f00(puVar5,param_2,puVar8);
      if (((ulong)puVar7 & 1) == 0) goto LAB_10494cf64;
      puVar8 = puVar5;
      func_0x00010c0e00e0(puVar5,param_2,&PTR____CFConstantStringClassReference_110da2458);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
    }
    else {
LAB_10494cf64:
      _objc_release(puVar5);
      puVar8 = (undefined *)0x0;
    }
    _objc_release(puVar6);
  }
  _objc_release(lVar3);
LAB_10494cf84:
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10494cfb0; end: 10494d1c7; +[FBSDKAppLinkUtility isMatchURLScheme:] */

long FUN_10494cfb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_3 == 0) {
    lVar7 = 0;
  }
  else {
    func_0x00010c296860(param_1);
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    func_0x00010bfedc60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bfa16c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar2 = lVar1;
    func_0x00010bf52a60(lVar1,param_2,&uStack_1b0,auStack_f0,0x10);
    if (lVar2 == 0) {
      lVar7 = 0;
    }
    else {
      lVar6 = *plStack_1a0;
      do {
        lVar7 = 0;
        do {
          if (*plStack_1a0 != lVar6) {
            _objc_enumerationMutation(lVar1);
          }
          lVar3 = *(long *)(lStack_1a8 + lVar7 * 8);
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          func_0x00010c0e00e0(lVar3,param_2,&PTR____CFConstantStringClassReference_110da20b8);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf52a60();
          if (lVar4 != 0) {
            lVar8 = *plStack_1e0;
            do {
              lVar9 = 0;
              do {
                if (*plStack_1e0 != lVar8) {
                  _objc_enumerationMutation(lVar3);
                }
                lVar5 = *(long *)(lStack_1e8 + lVar9 * 8);
                func_0x00010bf32ee0(lVar5,param_2,param_3);
                if (lVar5 == 0) {
                  _objc_release(lVar3);
                  lVar7 = 1;
                  goto LAB_10494d178;
                }
                lVar9 = lVar9 + 1;
              } while (lVar4 != lVar9);
              lVar4 = lVar3;
              func_0x00010bf52a60(lVar3,param_2,&uStack_1f0,auStack_170,0x10);
            } while (lVar4 != 0);
          }
          _objc_release(lVar3);
          lVar7 = lVar7 + 1;
        } while (lVar7 != lVar2);
        lVar2 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_1b0,auStack_f0,0x10);
        lVar7 = 0;
      } while (lVar2 != 0);
    }
LAB_10494d178:
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return param_3;
  }
  return lVar7;
}



/* Entry: 10494d1c8; end: 10494d1cb; +[FBSDKAppLinkUtility validateConfiguration] */

void FUN_10494d1c8(void)

{
  return;
}



/* Entry: 10494d1cc; end: 10494d1d7; +[FBSDKAuthenticationStatusUtility sessionDataTaskProvider] */

void FUN_10494d1cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cf78);
  return;
}



/* Entry: 10494d1d8; end: 10494d1e7; +[FBSDKAuthenticationStatusUtility setSessionDataTaskProvider:] */

void FUN_10494d1d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(0x11369cf78,param_3);
  return;
}



/* Entry: 10494d1e8; end: 10494d1f3; +[FBSDKAuthenticationStatusUtility profileSetter] */

void FUN_10494d1e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cf80);
  return;
}



/* Entry: 10494d1f4; end: 10494d1ff; +[FBSDKAuthenticationStatusUtility setProfileSetter:] */

void FUN_10494d1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uRam000000011369cf80 = param_3;
  return;
}



/* Entry: 10494d200; end: 10494d20b; +[FBSDKAuthenticationStatusUtility accessTokenWallet] */

void FUN_10494d200(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cf88);
  return;
}



/* Entry: 10494d20c; end: 10494d217; +[FBSDKAuthenticationStatusUtility setAccessTokenWallet:] */

void FUN_10494d20c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uRam000000011369cf88 = param_3;
  return;
}



/* Entry: 10494d218; end: 10494d223; +[FBSDKAuthenticationStatusUtility authenticationTokenWallet] */

void FUN_10494d218(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011369cf90);
  return;
}



/* Entry: 10494d224; end: 10494d22f; +[FBSDKAuthenticationStatusUtility setAuthenticationTokenWallet:] */

void FUN_10494d224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uRam000000011369cf90 = param_3;
  return;
}



/* Entry: 10494d230; end: 10494d2a7; +[FBSDKAuthenticationStatusUtility configureWithProfileSetter:sessionDataTaskProvider:accessTokenWallet:authenticationTokenWallet:] */

void FUN_10494d230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_4);
  func_0x00010c1e44e0(param_1);
  func_0x00010c1fd8c0(param_1);
  _objc_release(param_4);
  func_0x00010c160e40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c16c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setAuthenticationTokenWallet__112638c80,param_6);
  return;
}



/* Entry: 10494d2a8; end: 10494d45f; +[FBSDKAuthenticationStatusUtility checkAuthenticationStatus] */

void FUN_10494d2a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010be91b60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSURLRequest_1126aede0;
    func_0x00010c137160(PTR__OBJC_CLASS___NSURLRequest_1126aede0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c15fc60(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bfa1600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa1740();
      _objc_release(lVar3);
      _objc_release(param_1);
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}


