/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f0bae8; end: 105f0bce7; +[SCLocationSharingServiceLogger locationSharingPreferencesFetchedWithFetchType:preferences:onboarded:remainingGhostModeDuration:source:blizzardLogger:locationPermissionsManager:] */

void FUN_105f0bae8(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 in_x3;
  undefined8 in_x6;
  undefined8 in_x7;
  double dVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(in_x3);
  _objc_retain(in_x6);
  puVar1 = PTR_PTR_1126bc3d0;
  _objc_retain(in_x7);
  _objc_alloc_init();
  func_0x00010c206c40();
  func_0x000106c1af90(in_x3);
  func_0x00010c1bfd20(puVar1);
  func_0x00010c1a72a0(puVar1);
  dVar4 = param_1;
  if (0.0 < param_1) {
    dVar4 = (double)(long)param_1;
  }
  if (param_1 < 0.0) {
    dVar4 = (double)(long)param_1;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar4,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c192ea0(puVar1);
  _objc_release(puVar2);
  uVar3 = in_x3;
  func_0x00010c2a4ba0(in_x3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c1884c0(puVar1);
  _objc_release(uVar3);
  uVar3 = in_x3;
  func_0x00010bf1c9a0(in_x3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c1718c0(puVar1);
  _objc_release(uVar3);
  func_0x00010c1bfd40(puVar1);
  func_0x00010c27cec0(in_x7);
  _objc_release(in_x7);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105f0bce8;
  puStack_78 = &UNK_110841f80;
  uStack_70 = in_x6;
  puStack_68 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(in_x6);
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(puStack_68);
  _objc_release(uStack_70);
  _objc_release(puVar1);
  _objc_release(in_x6);
  _objc_release(in_x3);
  return;
}



/* Entry: 105f0bce8; end: 105f0bcf3;  */

void FUN_105f0bce8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b2e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logUserTrackedEvent__11260a5a8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105f0bcf4; end: 105f0bef7; +[SCLocationSharingServiceLogger locationSharingPreferencesUpdated:onboarded:ghostModeDuration:updateType:previousPreferences:source:blizzardLogger:locationPermissionsManager:] */

void FUN_105f0bcf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126bc3d0;
  _objc_retain(param_10);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_alloc_init();
  func_0x00010c206c40();
  func_0x000106c1af90(param_4);
  func_0x00010c1bfd20(puVar1);
  func_0x000106c1af90(param_7);
  _objc_release(param_7);
  func_0x00010c1e2600(puVar1);
  func_0x00010c1a72a0(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  func_0x00010c192ea0(puVar1);
  _objc_release(puVar2);
  uVar3 = param_4;
  func_0x00010c2a4ba0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c1884c0(puVar1);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010bf1c9a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf529e0(uVar3);
  func_0x00010c1718c0(puVar1);
  _objc_release(uVar3);
  func_0x00010c1bfd40(puVar1);
  func_0x00010c27cec0(param_10);
  _objc_release(param_10);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105f0bef8;
  puStack_78 = &UNK_110841f80;
  uStack_70 = param_9;
  puStack_68 = puVar1;
  _objc_retain(puVar1);
  _objc_retain(param_9);
  func_0x0001000d76cc("APPSTORE",&puStack_90);
  _objc_release(puStack_68);
  _objc_release(uStack_70);
  _objc_release(puVar1);
  _objc_release(param_9);
  return;
}



/* Entry: 105f0bef8; end: 105f0bf03;  */

void FUN_105f0bef8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b2e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_logUserTrackedEvent__11260a5a8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105f0bf04; end: 105f0c21f; +[SCLocationSharingServiceLogger logUserOnboardedToSimplifiedFromBackgroundWithPreviousPreferences:newPreferences:allFriendsCount:blizzardLogger:fromBackground:] */

void FUN_105f0bf04(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126c5e08;
  _objc_retain(param_6);
  _objc_alloc_init(puVar2);
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bfcc660();
  if ((uVar3 & 1) == 0) {
    func_0x00010c22c5c0();
  }
  _objc_release(param_3);
  func_0x00010c1e2780(puVar2);
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bfcc660();
  if (((uVar3 & 1) == 0) && (uVar3 = param_3, func_0x00010c22c5c0(), uVar3 != 1)) {
    uVar4 = param_3;
    if (uVar3 == 3) {
      func_0x00010bf1c9a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
    }
    else {
      if (uVar3 != 2) goto LAB_105f0c040;
      func_0x00010c2a4ba0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
    }
    _objc_release(uVar4);
  }
LAB_105f0c040:
  _objc_release(param_3);
  func_0x00010c1e2760(puVar2);
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010bfcc660();
  if ((uVar3 & 1) == 0) {
    func_0x00010c22c5c0();
  }
  _objc_release(param_4);
  func_0x00010c1ccb40(puVar2);
  _objc_retain(param_4);
  uVar3 = param_4;
  func_0x00010bfcc660();
  if (((uVar3 & 1) == 0) && (uVar3 = param_4, func_0x00010c22c5c0(), uVar3 != 1)) {
    uVar4 = param_4;
    if (uVar3 == 3) {
      func_0x00010bf1c9a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
    }
    else {
      if (uVar3 != 2) goto LAB_105f0c134;
      func_0x00010c2a4ba0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
    }
    _objc_release(uVar4);
  }
LAB_105f0c134:
  _objc_release(param_4);
  func_0x00010c1ccb20(puVar2);
  func_0x00010c0b2e60(param_6);
  _objc_release(param_6);
  puVar5 = PTR_PTR_1126c5e10;
  _objc_alloc_init(PTR_PTR_1126c5e10);
  uVar3 = param_3;
  func_0x00010bfcc660();
  uVar4 = param_4;
  func_0x00010bfcc660();
  if ((int)uVar3 != (int)uVar4) {
    uVar3 = param_4;
    func_0x00010bfcc660(param_4);
    FUN_105f16d08(puVar5,uVar3,1);
  }
  uVar3 = param_3;
  func_0x00010c22c5c0();
  uVar4 = param_4;
  func_0x00010c22c5c0();
  if (uVar3 != uVar4) {
    FUN_105f16c90(puVar5,1);
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110ddf538;
  if (param_7 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ddf4f8;
  }
  FUN_105f16b1c(puVar5,ppuVar1,1);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f0c220; end: 105f0c2cb;  */

void FUN_105f0c220(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd800(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105f0c2cc; end: 105f0c387;  */

void FUN_105f0c2cc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09f340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f0c388; end: 105f0c43b;  */

void FUN_105f0c388(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0c03a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105f0c43c; end: 105f0c467;  */

void FUN_105f0c43c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be24420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f0c468; end: 105f0c4c7;  */

void FUN_105f0c468(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c067fc0(param_2);
  _objc_release(param_2);
  func_0x00010be312a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f0c4c8; end: 105f0c54f;  */

void FUN_105f0c4c8(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105f0c550;
    puStack_30 = &UNK_110842e18;
    _objc_retain(param_1);
    lStack_28 = param_1;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 105f0c550; end: 105f0c557;  */

void FUN_105f0c550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be67c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onApplicationStateChange_1125778a8);
  return;
}



/* Entry: 105f0c558; end: 105f0c5d3;  */

void FUN_105f0c558(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if ((*(long *)(lVar3 + 0x50) == 1) && ((*(byte *)(lVar3 + 0x100) & 1) == 0)) {
    uVar1 = *(ulong *)(lVar3 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c25c460();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bee57b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + 0x20),PTR_s__uploadDeviceDataWithAppState__112596f90,1);
      return;
    }
  }
  return;
}



/* Entry: 105f0c5d4; end: 105f0c76f; -[SCLocationSharingServiceV2 _updatePollingStateWithStreaming] */

void FUN_105f0c5d4(double param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [8];
  
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c25c460();
  _objc_release(uVar2);
  if ((int)uVar7 == 0) {
    return;
  }
  lVar3 = param_2;
  func_0x00010be40460();
  *(byte *)(param_2 + 0xe8) = (byte)lVar3 ^ 1;
  if (*(long *)(param_2 + 0x50) == 1) {
    bVar1 = *(byte *)(param_2 + 0x58);
    _objc_initWeak(auStack_48,param_2);
    if ((bVar1 & 1) == 0) goto LAB_105f0c690;
    if (*(long *)(param_2 + 0x98) == 0) {
      func_0x00010beb00c0(param_2);
    }
    if (*(char *)(param_2 + 0xe8) == '\x01') {
      if (*(long *)(param_2 + 0xa8) == 0) {
        func_0x00010be90ee0(0x4014000000000000,param_2);
      }
      goto LAB_105f0c6a8;
    }
    uVar4 = *(ulong *)(param_2 + 0x90);
    if ((uVar4 != 0) && (func_0x00010c075c60(), (uVar4 & 1) == 0)) goto LAB_105f0c6a8;
    _CACurrentMediaTime();
    puVar6 = PTR_PTR_1126b71d8;
    param_1 = *(double *)(param_2 + 0x80) - param_1;
    if (param_1 <= 0.0) {
      func_0x00010be90ec0(param_2);
      goto LAB_105f0c6a8;
    }
    puVar5 = *(undefined1 **)(param_2 + 0x48);
    func_0x00010c11de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1503a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 0x90);
    *(undefined **)(param_2 + 0x90) = puVar6;
    _objc_release(uVar7);
  }
  else {
    _objc_initWeak(auStack_48,param_2);
LAB_105f0c690:
    puVar5 = auStack_48;
    _objc_loadWeakRetained(puVar5);
    func_0x00010bed0740();
  }
  _objc_release(puVar5);
LAB_105f0c6a8:
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105f0c770; end: 105f0c79b; -[SCLocationSharingServiceV2 _turnOffNonStreamingUpdates] */

void FUN_105f0c770(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x88));
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f0c79c; end: 105f0c7f3; -[SCLocationSharingServiceV2 _handleStreamActiveChanged:] */

void FUN_105f0c79c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105f0c7f4;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x48),param_2,&puStack_40);
  return;
}



/* Entry: 105f0c7f4; end: 105f0c84b;  */

void FUN_105f0c7f4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    func_0x00010be93560(*(undefined8 *)(param_1 + 0x20));
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x60) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bedd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePollingState_112594fa0);
  return;
}



/* Entry: 105f0c84c; end: 105f0c883; -[SCLocationSharingServiceV2 _resetNextLocationUploadTimeAfterStreaming] */

void FUN_105f0c84c(double param_1,long param_2)

{
  if (*(long *)(param_2 + 0x50) == 1) {
    _CACurrentMediaTime();
    *(double *)(param_2 + 0x68) = param_1 + 30.0;
  }
  return;
}



/* Entry: 105f0c884; end: 105f0c8db; -[SCLocationSharingServiceV2 _checkIfNeedsToFlushLocations] */

void FUN_105f0c884(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  _CACurrentMediaTime();
  dVar2 = *(double *)(param_2 + 0x68);
  lVar1 = *(long *)(param_2 + 0x60);
  func_0x00010bf529e0();
  if (param_1 < dVar2 || lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc5470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__actuallyUploadPendingLocationsT_11254eeb8);
  return;
}



/* Entry: 105f0c8dc; end: 105f0c977; -[SCLocationSharingServiceV2 _sendLocationUpdatesToServerAsSoonAsPossible] */

void FUN_105f0c8dc(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_2 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25c460();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x00010c069d00(*(undefined8 *)(param_2 + 0x88));
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = 0;
  _objc_release(uVar3);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x68) = param_1;
  lVar4 = *(long *)(param_2 + 0x60);
  func_0x00010bf529e0();
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc5470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__actuallyUploadPendingLocationsT_11254eeb8)
    ;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be90ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__requestDeviceLocation_112581d50);
  return;
}



/* Entry: 105f0c978; end: 105f0ca57; -[SCLocationSharingServiceV2 _requestDeviceLocationWithDistanceFilter:caller:] */

void FUN_105f0c978(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  _objc_retain(param_4);
  func_0x00010c069d00(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x90) = 0;
  _objc_release(uVar4);
  puVar1 = PTR_PTR_1126c1818;
  _objc_alloc(PTR_PTR_1126c1818);
  puVar2 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  func_0x00010c011b80();
  _objc_release(param_4);
  func_0x00010bff4e40(*(undefined8 *)PTR__kCLLocationAccuracyBest_110349b70,param_1,puVar1,param_3,
                      puVar2,1,1);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010c1347e0(uVar4,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_2 + 0xa8) = uVar4;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f0ca58; end: 105f0caaf; -[SCLocationSharingServiceV2 _requestDeviceLocation] */

void FUN_105f0ca58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)PTR__kCLDistanceFilterNone_110349b68;
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be90ee0(uVar2,param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f0cab0; end: 105f0cc0f; -[SCLocationSharingServiceV2 _actuallyUploadPendingLocationsToServer] */

void FUN_105f0cab0(double param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_2 + 0x50) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c25c460();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(param_2 + 0x60);
      func_0x00010bf529e0();
      if (((lVar3 != 0) && (_CACurrentMediaTime(), *(double *)(param_2 + 0x68) <= param_1)) &&
         ((*(byte *)(param_2 + 0xa0) & 1) == 0)) {
        *(undefined1 *)(param_2 + 0xa0) = 1;
        uVar6 = *(undefined8 *)(param_2 + 0x60);
        _objc_retain(uVar6);
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_alloc_init();
        uVar5 = *(undefined8 *)(param_2 + 0x60);
        *(undefined **)(param_2 + 0x60) = puVar4;
        _objc_release(uVar5);
        _objc_initWeak(auStack_38,param_2);
        _objc_copyWeak(auStack_40,auStack_38);
        _objc_retain(uVar6);
        func_0x00010bee5a20(param_2);
        _objc_release(uVar6);
        _objc_destroyWeak(auStack_40);
        _objc_destroyWeak(auStack_38);
        _objc_release(uVar6);
      }
    }
  }
  return;
}



/* Entry: 105f0cc10; end: 105f0cc7b;  */

void FUN_105f0cc10(undefined8 param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    func_0x00010be2baa0(param_1,param_2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105f0cc7c; end: 105f0cdff; -[SCLocationSharingServiceV2 _handleLocationsUploadCompletedWithError:nextRequestInterval:locationUpdatesInFlight:] */

void FUN_105f0cc7c(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  *(undefined1 *)(param_2 + 0xa0) = 0;
  if (param_4 == 0) {
    dVar4 = 5.0;
    if (param_1 <= 0.0) {
      param_1 = 5.0;
    }
    _CACurrentMediaTime();
    *(double *)(param_2 + 0x68) = param_1 + dVar4;
    *(undefined8 *)(param_2 + 0x70) = 0x4014000000000000;
    goto LAB_105f0cdb4;
  }
  func_0x00010befa160(param_5,param_3,*(undefined8 *)(param_2 + 0x60));
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = param_5;
  _objc_release(uVar1);
  func_0x00010bed0220(param_2);
  lVar2 = param_4;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0720c0();
  if ((int)lVar3 == 0) {
    _objc_release(lVar2);
LAB_105f0cd94:
    _CACurrentMediaTime();
    dVar5 = *(double *)(param_2 + 0x70);
    uVar1 = NEON_fminnm(dVar5 + dVar5,0x404e000000000000);
    *(double *)(param_2 + 0x68) = dVar4 + dVar5;
    *(undefined8 *)(param_2 + 0x70) = uVar1;
  }
  else {
    lVar3 = param_4;
    func_0x00010bf3ec40();
    if ((((lVar3 == -0x3e9) || (lVar3 = param_4, func_0x00010bf3ec40(), lVar3 == -0x3f1)) ||
        (lVar3 = param_4, func_0x00010bf3ec40(), lVar3 == -0x3ed)) ||
       (lVar3 = param_4, func_0x00010bf3ec40(), lVar3 == -0x3ee)) {
      _objc_release(lVar2);
    }
    else {
      lVar3 = param_4;
      func_0x00010bf3ec40();
      _objc_release(lVar2);
      if (lVar3 != -0x3eb) goto LAB_105f0cd94;
    }
    _CACurrentMediaTime();
    *(double *)(param_2 + 0x68) = dVar4 + 1.0;
  }
LAB_105f0cdb4:
  func_0x00010bedd7e0(param_2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105f0ce00; end: 105f0ce4b; -[SCLocationSharingServiceV2 _truncatePendingLocationUpdatesToMaximumIfNecessary] */

void FUN_105f0ce00(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x60);
  func_0x00010bf529e0();
  if (0x32 < uVar1) {
    lVar2 = *(long *)(param_1 + 0x60);
    func_0x00010bf529e0(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c12d530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x60),PTR_s_removeObjectsInRange__112628f68,0,lVar2 + -0x32
              );
    return;
  }
  return;
}



/* Entry: 105f0ce4c; end: 105f0cf13; -[SCLocationSharingServiceV2 _uploadDeviceDataWithAppState:] */

void FUN_105f0ce4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126c5e20;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105f0cf14;
  puStack_60 = &UNK_110844b80;
  puStack_58 = puVar1;
  lStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(puVar1);
  FUN_105f0b6dc(uVar3,puVar1,uVar2,&puStack_78);
  _objc_release(uVar2);
  _objc_release(puStack_58);
  _objc_release(puVar1);
  return;
}



/* Entry: 105f0cf14; end: 105f0d0bb;  */

void FUN_105f0cf14(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 uStack_80;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c1af680(*(undefined8 *)(param_2 + 0x20),param_3,*(long *)(param_2 + 0x30) == 2);
  puVar1 = PTR_PTR_1126c5e28;
  _objc_alloc();
  func_0x00010c06cf60(*(undefined8 *)(param_2 + 0x20));
  func_0x00010bf17500(*(undefined8 *)(param_2 + 0x20));
  func_0x00010bf70d60(*(undefined8 *)(param_2 + 0x20));
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bfe04e0();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c2a5520();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c079600();
  uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x10);
  func_0x00010bf52340();
  lVar6 = *(long *)(*(long *)(param_2 + 0x28) + 0x10);
  func_0x00010c09eaa0();
  uStack_80 = lVar6 != 1;
  uVar12 = uVar2;
  func_0x00010c01ed00(param_1);
  _objc_release(uVar3);
  puVar7 = PTR_PTR_1126c5e30;
  func_0x00010bf702c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_2 + 0x28);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar7;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 0;
  puVar10 = puVar8;
  func_0x00010be9ec60(uVar13);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar9 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_88 = FUN_105f0d0bc;
  uStack_d0 = uVar5;
  uStack_c8 = uVar4;
  uStack_c0 = uVar3;
  uStack_b8 = uVar2;
  puStack_b0 = puVar8;
  puStack_a8 = puVar7;
  puStack_a0 = puVar1;
  uStack_98 = uVar13;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_retain(uVar12);
  puVar1 = PTR_PTR_1126c5e20;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(puVar9 + 0x48);
  uVar2 = *(undefined8 *)(puVar9 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_105f0d1d8;
  puStack_100 = &UNK_110855c70;
  puStack_f8 = puVar1;
  puStack_f0 = puVar9;
  puStack_e8 = puVar10;
  uStack_e0 = uVar12;
  uStack_d8 = uVar11;
  _objc_retain(uVar12);
  _objc_retain(puVar10);
  _objc_retain(puVar1);
  FUN_105f0b6dc(uVar3,puVar1,uVar2,&puStack_118);
  _objc_release(uVar2);
  _objc_release(uStack_e0);
  _objc_release(puStack_e8);
  _objc_release(puStack_f8);
  _objc_release(uVar12);
  _objc_release(puVar10);
  _objc_release(puVar1);
  return;
}



/* Entry: 105f0d0bc; end: 105f0d1d7; -[SCLocationSharingServiceV2 _uploadLocationUpdates:isBackgroundUpdate:completion:] */

void FUN_105f0d0bc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c5e20;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105f0d1d8;
  puStack_80 = &UNK_110855c70;
  puStack_78 = puVar1;
  lStack_70 = param_1;
  uStack_68 = param_3;
  uStack_60 = param_5;
  uStack_58 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  FUN_105f0b6dc(uVar3,puVar1,uVar2,&puStack_98);
  _objc_release(uVar2);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(puStack_78);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 105f0d1d8; end: 105f0d313;  */

void FUN_105f0d1d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x00010c1af680(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined1 *)(param_1 + 0x40));
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x28));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  func_0x00010bf96720(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105f0d314; end: 105f0d353;  */

void FUN_105f0d314(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdefa80(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f0d354; end: 105f0d7b7; -[SCLocationSharingServiceV2 _createLocationUpdateRequestWithDeviceData:locationUpdates:completion:] */

long FUN_105f0d354(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar15 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf1a5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c089820(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar3 = PTR_PTR_1126c5e38;
  _objc_alloc();
  uVar4 = uVar2;
  func_0x00010c0d1200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0320();
  uVar5 = uVar2;
  dVar16 = param_1;
  func_0x00010c0d1200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0340();
  uVar6 = uVar2;
  dVar17 = dVar16;
  func_0x00010c0d1200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249ca0();
  uVar7 = uVar2;
  dVar18 = dVar17;
  func_0x00010c0d1200(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c249cc0();
  func_0x00010c01a2e0(param_1,dVar16,dVar17,dVar18);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  puVar8 = PTR_PTR_1126c5e40;
  _objc_alloc();
  func_0x00010c08aca0(uVar2);
  dVar16 = param_1;
  func_0x00010c09abe0(uVar2);
  dVar17 = dVar16;
  func_0x00010bf01f00(uVar2);
  dVar18 = dVar17;
  func_0x00010bfe4080(uVar2);
  dVar19 = dVar18;
  func_0x00010c298e00(uVar2);
  func_0x00010c2709c0(uVar2);
  func_0x00010bfcd6c0(uVar2);
  func_0x00010c06cf60(param_4);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x30);
  func_0x00010bf1a7c0();
  if (iVar1 != 0) {
    func_0x00010c0812e0(PTR__OBJC_CLASS___NSDate_1126ae770);
  }
  func_0x00010c0219c0(param_1,dVar16,dVar17,dVar18,dVar19);
  puVar9 = PTR_PTR_1126c5e30;
  func_0x00010c09f840();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c5e28;
  _objc_alloc(PTR_PTR_1126c5e28);
  func_0x00010c06cf60(param_4);
  func_0x00010bf17500(param_4);
  func_0x00010bf70d60(param_4);
  func_0x00010bfe04e0(param_4);
  lVar11 = param_4;
  func_0x00010c2a5520(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c079600(param_4);
  func_0x00010bf52340(*(undefined8 *)(param_2 + 0x10));
  func_0x00010c09eaa0();
  func_0x00010c01ed00(param_1,puVar10);
  _objc_release(lVar11);
  puVar12 = PTR_PTR_1126c5e30;
  func_0x00010bf702c0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_4;
  func_0x00010c06cf60();
  if ((int)lVar11 == 0) {
    if ((*(byte *)(param_2 + 0x100) & 1) == 0) {
      FUN_105f164ec(*(undefined8 *)(param_2 + 0xf8),1);
      puVar13 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      _objc_release(puVar13);
      if (*(long *)(param_2 + 0xf8) != 0) {
        FUN_105f16918(*(long *)(param_2 + 0xf8),(long)(param_1 * 1000.0));
      }
      *(undefined1 *)(param_2 + 0x100) = 1;
    }
  }
  else {
    FUN_105f168a0(*(undefined8 *)(param_2 + 0xf8),1);
  }
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9ec60(param_2);
  _objc_release(param_6);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    lVar14 = *(long *)(param_4 + 0x20);
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar14 == 0) {
      param_4 = 1;
    }
    else {
      func_0x00010be40460(param_4);
    }
    _objc_release(lVar14);
    return param_4;
  }
  return param_4;
}



/* Entry: 105f0d7b8; end: 105f0d80b; -[SCLocationSharingServiceV2 _isUserConsideredToBeGhostMode] */

long FUN_105f0d7b8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    param_1 = 1;
  }
  else {
    func_0x00010be40460(param_1);
  }
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 105f0d80c; end: 105f0da37; -[SCLocationSharingServiceV2 _sendClientUpdates:completion:] */

void FUN_105f0d80c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c25c460();
  _objc_release(uVar2);
  if ((int)uVar5 == 0) {
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010c0beae0(*(undefined8 *)(lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    puVar4 = PTR_PTR_1126c5e48;
    _objc_alloc(PTR_PTR_1126c5e48);
    func_0x00010be45040(param_1);
    func_0x00010c017c60(puVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15b8e0(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  else {
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c06cf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isBackgrounded_1125f8de8);
  return;
}



/* Entry: 105f0da38; end: 105f0da53;  */

void FUN_105f0da38(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06cf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isBackgrounded_1125f8de8);
  return;
}



/* Entry: 105f0da54; end: 105f0daab; -[SCLocationSharingServiceV2 _resetStreamingLocationUpdateTimerIfNecessary] */

void FUN_105f0da54(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105f0daac;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x48),param_2,&puStack_38);
  return;
}



/* Entry: 105f0daac; end: 105f0db23;  */

void FUN_105f0daac(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar2 + 0x90) != 0) {
    func_0x00010c069d00(*(long *)(lVar2 + 0x90));
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90) = 0;
    _objc_release(uVar3);
    lVar2 = *(long *)(param_1 + 0x20);
  }
  iVar1 = (int)lVar2;
  func_0x00010be45040();
  dVar4 = 300.0;
  dVar5 = dVar4;
  if (iVar1 == 0) {
    dVar5 = 30.0;
  }
  _CACurrentMediaTime();
  *(double *)(*(long *)(param_1 + 0x20) + 0x80) = dVar4 + dVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bedd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updatePollingState_112594fa0);
  return;
}



/* Entry: 105f0db24; end: 105f0dbd7; -[SCLocationSharingServiceV2 _setupStreamingDeviceDataUpdateTimer] */

void FUN_105f0db24(long param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x98));
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105f0dbd8;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105f0dbd8; end: 105f0dc1f;  */

void FUN_105f0dbd8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec1b00();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec52c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f0dc20; end: 105f0dcf7; -[SCLocationSharingServiceV2 _startStreamingUpdateTimer] */

void FUN_105f0dc20(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c150360(0x405e000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  *(undefined **)(param_1 + 0x98) = puVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105f0dcf8; end: 105f0dd23;  */

void FUN_105f0dcf8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec52c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f0dd24; end: 105f0de2b; -[SCLocationSharingServiceV2 _streamDeviceData] */

void FUN_105f0dd24(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126c5e20;
  _objc_alloc_init();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f0de2c;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  puStack_48 = puVar1;
  FUN_105f0b6dc(uVar3,puVar1,uVar2,&puStack_68);
  _objc_release(uVar2);
  _objc_release(puStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 105f0de2c; end: 105f0de67;  */

void FUN_105f0de2c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bec52e0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105f0de68; end: 105f0e003; -[SCLocationSharingServiceV2 _streamDeviceData:] */

void FUN_105f0de68(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar1 = PTR_PTR_1126c5e28;
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_alloc(puVar1);
    lVar2 = param_4;
    func_0x00010c06cf60(param_4);
    func_0x00010bf17500(param_4);
    lVar3 = param_4;
    func_0x00010bf70d60(param_4);
    lVar4 = param_4;
    func_0x00010bfe04e0(param_4);
    lVar5 = param_4;
    func_0x00010c2a5520(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010c079600(param_4);
    _objc_release(param_4);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010bf52340(uVar7);
    lVar8 = *(long *)(param_2 + 0x10);
    func_0x00010c09eaa0();
    func_0x00010c01ed00(param_1,puVar1,param_3,lVar2,lVar3,lVar4,lVar5,lVar6,uVar7,lVar8 != 1);
    _objc_release(lVar5);
    puVar9 = PTR_PTR_1126c5e48;
    _objc_alloc(PTR_PTR_1126c5e48);
    lVar2 = param_2;
    func_0x00010be45040(param_2);
    func_0x00010c017c60(puVar9,param_3,lVar2);
    puVar10 = PTR_PTR_1126c5e30;
    func_0x00010bf702c0(PTR_PTR_1126c5e30,param_3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c5a0();
    _objc_release(uVar7);
    _objc_release(puVar10);
    _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105f0e004; end: 105f0e007;  */

void FUN_105f0e004(void)

{
  return;
}



/* Entry: 105f0e008; end: 105f0e17f; -[SCLocationSharingServiceV2 _attemptToStreamLocation:] */

void FUN_105f0e008(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105f0e180;
  puStack_68 = &UNK_110849200;
  _objc_copyWeak(auStack_60,auStack_58);
  ppuVar1 = &puStack_80;
  _objc_retainBlock();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar1);
  _objc_copyWeak(auStack_88,auStack_58);
  _objc_retain(param_3);
  func_0x00010bf96720(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_88);
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105f0e180; end: 105f0e213;  */

void FUN_105f0e180(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be93e80(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f0e214; end: 105f0e533; -[SCLocationSharingServiceV2 _streamLocation:completion:] */

void FUN_105f0e214(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_2 + 0x50) == 1) {
    if ((*(byte *)(param_2 + 0x100) & 1) == 0) {
      FUN_105f164ec(*(undefined8 *)(param_2 + 0xf8),1);
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380();
      dVar8 = param_1;
      _objc_release(puVar2);
      if (*(long *)(param_2 + 0xf8) != 0) {
        dVar8 = param_1 * 1000.0;
        FUN_105f16918(*(long *)(param_2 + 0xf8),(long)dVar8);
      }
      *(undefined1 *)(param_2 + 0x100) = 1;
      param_1 = dVar8;
    }
  }
  else {
    FUN_105f168a0(*(undefined8 *)(param_2 + 0xf8),1);
  }
  func_0x00010bf537e0(param_4);
  puVar2 = PTR_PTR_1126c5e38;
  dVar8 = param_1;
  _objc_alloc(PTR_PTR_1126c5e38);
  func_0x00010bf537c0(param_4);
  dVar9 = (double)(ulong)(uint)(float)dVar8;
  dVar10 = (double)(ulong)(uint)(float)param_1;
  func_0x00010c249ca0(param_4);
  fVar11 = (float)dVar8;
  func_0x00010c249cc0(param_4);
  func_0x00010c01a2e0(dVar9,dVar10,fVar11,(float)dVar8,puVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf1a5c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_2 + 0x30);
  func_0x00010bf1a7c0();
  if (iVar1 != 0) {
    func_0x00010c0812e0(PTR__OBJC_CLASS___NSDate_1126ae770);
  }
  puVar4 = PTR_PTR_1126c5e40;
  _objc_alloc(PTR_PTR_1126c5e40);
  func_0x00010bf51c80(param_4);
  fVar11 = (float)dVar9;
  func_0x00010bf51c80(param_4);
  func_0x00010bf01f00(param_4);
  fVar12 = (float)dVar9;
  func_0x00010bfe4080(param_4);
  fVar13 = (float)dVar9;
  func_0x00010c298e00(param_4);
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0219c0(fVar11,(float)dVar10,fVar12,fVar13,(float)dVar9,puVar4);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126c5e48;
  _objc_alloc(PTR_PTR_1126c5e48);
  func_0x00010be45040(param_2);
  func_0x00010c017c60(puVar5);
  puVar6 = PTR_PTR_1126c5e30;
  func_0x00010c09f840(PTR_PTR_1126c5e30);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010c28c5a0(uVar7);
  _objc_release(uVar7);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 105f0e534; end: 105f0e547;  */

void FUN_105f0e534(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105f0e540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105f0e548; end: 105f0e647; -[SCLocationSharingServiceV2 locationProviderDidUpdateLocation] */

void FUN_105f0e548(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uVar1 = 1;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c06cae0();
      uVar1 = (undefined1)uVar5;
      _objc_release(uVar4);
    }
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105f0e648;
    puStack_60 = &UNK_11084d5f8;
    _objc_retain(lVar2);
    lStack_58 = lVar2;
    lStack_50 = param_1;
    uStack_48 = uVar1;
    func_0x00010c0f7fc0(uVar5,param_2,&puStack_78);
    _objc_release(lStack_58);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 105f0e648; end: 105f0e743;  */

void FUN_105f0e648(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x000107f49238();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25c460();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
      FUN_105f0b680();
      if (iVar1 != 0) {
        func_0x00010be8d120(*(undefined8 *)(param_1 + 0x28));
      }
      if (*(char *)(param_1 + 0x30) == '\x01') {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        FUN_105f0b4f4(uVar3,*(undefined1 *)(*(long *)(param_1 + 0x28) + 0x110));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a3f80();
        func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x60));
        func_0x00010bed0220(*(undefined8 *)(param_1 + 0x28));
        *(undefined1 *)(*(long *)(param_1 + 0x28) + 0xd0) = 0;
        func_0x00010bdddb20(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar3);
        return;
      }
    }
    else if (*(char *)(param_1 + 0x30) == '\x01') {
      func_0x00010bdd0ec0(*(undefined8 *)(param_1 + 0x28));
      *(undefined1 *)(*(long *)(param_1 + 0x28) + 0xd0) = 0;
    }
  }
  return;
}



/* Entry: 105f0e744; end: 105f0e807; -[SCLocationSharingServiceV2 locationSharingPreferencesSynced:] */

void FUN_105f0e744(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105f0e808; end: 105f0e84f;  */

void FUN_105f0e808(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010be40460();
    if ((uVar2 & 1) == 0) {
      func_0x00010be9f660(uVar1);
    }
    func_0x00010bedd7e0(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f0e850; end: 105f0eac7; -[SCLocationSharingServiceV2 locationProviderDidPublishVisit:] */

void FUN_105f0e850(undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **unaff_x24;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  lVar1 = *(long *)(param_3 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06cae0();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((int)uVar3 == 0) goto LAB_105f0ea54;
  }
  _objc_initWeak(auStack_78,param_3);
  puVar4 = PTR_PTR_1126c5e50;
  _objc_alloc(PTR_PTR_1126c5e50);
  func_0x00010bf51c80(param_5);
  uVar3 = param_1;
  func_0x00010bfe4080(param_5);
  lVar1 = param_5;
  func_0x00010bf0a180(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_5;
  func_0x00010bf6d920(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_5;
  func_0x00010bf6f840(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23c3c0(param_5);
  func_0x00010c005ae0(param_1,param_2,uVar3,puVar4);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar1);
  puVar7 = PTR_PTR_1126c5e30;
  func_0x00010c2a02a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105f0eac8;
  puStack_88 = &UNK_1108f8240;
  param_4 = auStack_78;
  _objc_copyWeak(auStack_80,param_4);
  func_0x00010be9ec60(param_3);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_78);
  unaff_x24 = &puStack_a0;
LAB_105f0ea54:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x24 + 0x20));
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  param_5 = param_5 + 0x20;
  _objc_loadWeakRetained();
  if (param_5 != 0) {
    FUN_105f16990(*(undefined8 *)(param_5 + 0xf8),param_4 == (undefined1 *)0x0,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105f0eac8; end: 105f0eb0b;  */

void FUN_105f0eac8(long param_1,long param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    FUN_105f16990(*(undefined8 *)(param_1 + 0xf8),param_2 == 0,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f0eb0c; end: 105f0eb63; -[SCLocationSharingServiceV2 _gpsDidReset] */

void FUN_105f0eb0c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105f0eb64;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x48),param_2,&puStack_38);
  return;
}



/* Entry: 105f0eb64; end: 105f0eb73;  */

void FUN_105f0eb64(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0xd0) = 1;
  return;
}



/* Entry: 105f0eb74; end: 105f0ec9f; -[SCLocationSharingServiceV2 .cxx_destruct] */

void FUN_105f0eb74(long param_1)

{
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 105f0eca0; end: 105f0ece7; -[SCLocationSharingUserInfoProvider birthday] */

void FUN_105f0eca0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f0ece8; end: 105f0ed27; -[SCLocationSharingUserInfoProvider birthdayPartyEnabled] */

undefined8 FUN_105f0ece8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1a7c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105f0ed28; end: 105f0ed57; -[SCLocationSharingUserInfoProvider .cxx_destruct] */

void FUN_105f0ed28(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f0ed58; end: 105f0f0b7; -[SCLocationMonitor initWithLocationSharingPrefsProvider:locationSharingPrefsMutator:mapUserPreferences:appPreferences:notificationPresenter:grapheneRegistry:deviceLocationPermissionsManager:] */

undefined8 *
FUN_105f0ed58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [8];
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126edfa0;
  puVar3 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_retain(param_9);
    uVar4 = puVar3[1];
    puVar3[1] = param_9;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = puVar3[4];
    puVar3[4] = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = puVar3[5];
    puVar3[5] = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = puVar3[2];
    puVar3[2] = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = puVar3[3];
    puVar3[3] = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = puVar3[6];
    puVar3[6] = param_7;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = puVar3[7];
    puVar3[7] = param_8;
    _objc_release(uVar4);
    puVar3[8] = 0;
    uVar1 = (undefined4)puVar3[2];
    func_0x00010c089400();
    *(undefined4 *)(puVar3 + 9) = uVar1;
    puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar5);
    _objc_initWeak(auStack_78,puVar3);
    uVar6 = puVar3[4];
    func_0x00010bfd7100();
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    if ((uVar6 & 1) == 0) {
      uVar4 = puVar3[4];
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puStack_a0 = puVar5;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_105f0f0b8;
      puStack_88 = &UNK_11084fd28;
      _objc_copyWeak(auStack_80,auStack_78);
      func_0x00010bf96720(uVar4);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_destroyWeak(auStack_80);
    }
    else {
      iVar2 = (int)puVar3[5];
      func_0x00010c230760();
      if (iVar2 == 0) {
        func_0x00010be302e0(puVar3);
      }
      else {
        func_0x00010bfb4c20(puVar3[5]);
      }
    }
    uVar7 = puVar3[1];
    func_0x00010c0f9ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar4 = uVar7;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = puVar3[10];
    puVar3[10] = uVar4;
    _objc_release(uVar8);
    _objc_release(uVar7);
    func_0x00010bddddc0(puVar3);
    func_0x00010be26000(puVar3);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 105f0f0b8; end: 105f0f10b;  */

void FUN_105f0f0b8(long param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be273c0(param_1);
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c230760();
    if (iVar1 == 0) {
      func_0x00010be302e0(param_1);
    }
    else {
      func_0x00010bfb4c20(*(undefined8 *)(param_1 + 0x28));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f0f10c; end: 105f0f1fb;  */

void FUN_105f0f10c(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105f0f1fc;
  puStack_50 = &UNK_11089ef40;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0bd7e0(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 105f0f1fc; end: 105f0f25b;  */

void FUN_105f0f1fc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09f300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f0f25c; end: 105f0f2a3; -[SCLocationMonitor _handleSimplifiedLocationSharingOnboarding] */

void FUN_105f0f25c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000109022004();
  if ((lVar1 != 1) && (func_0x000109022004(), lVar1 != 2)) {
                    /* WARNING: Could not recover jumptable at 0x00010bfb4d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_forceOnboardToSimplifiedSharingI_1125cad08);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0f0510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_overrideSimplifiedOnboardingWith_112619b58);
  return;
}



/* Entry: 105f0f2a4; end: 105f0f32b; -[SCLocationMonitor _handleCommonLocationAccuracyCheckEvent] */

void FUN_105f0f2a4(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105f0f32c;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105f0f32c; end: 105f0f3a7;  */

void FUN_105f0f32c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bddddc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f0f3a8; end: 105f0f46b; -[SCLocationMonitor _handleAuthStatusCheck] */

void FUN_105f0f3a8(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(ulong *)(param_1 + 8);
  func_0x00010bf52340();
  iVar2 = (int)uVar3;
  if ((iVar2 != 1) && (iVar1 = *(int *)(param_1 + 0x48), iVar1 != iVar2)) {
    func_0x00010c1b8120(*(undefined8 *)(param_1 + 0x10));
    *(int *)(param_1 + 0x48) = iVar2;
    if ((uVar3 & 0xfffffffd) != 0 && iVar1 != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010bfd7100();
      if (iVar2 != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c09f900();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c067ec0();
        _objc_release(uVar4);
        if (0 < (int)uVar5) {
          uVar5 = 3;
          if (*(int *)(param_1 + 0x48) == 3) {
            uVar5 = 4;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bf85c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (*(undefined8 *)(param_1 + 0x30),
                     PTR_s_displayMapNotification_completio_1125bf0b0,uVar5,0);
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 105f0f46c; end: 105f0f4df; -[SCLocationMonitor _checkLocationAccuracy] */

void FUN_105f0f46c(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c09eaa0();
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c0883a0();
  if (iVar1 != 0 && lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bfd7100();
    if ((iVar1 != 0) && (lVar2 != *(long *)(param_1 + 0x40))) {
      func_0x00010be4fc00(param_1);
      *(long *)(param_1 + 0x40) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdde050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__checkPreferencesForLocationAccu_1125551b0);
      return;
    }
  }
  return;
}



/* Entry: 105f0f4e0; end: 105f0f5d7; -[SCLocationMonitor _logAccuracyMetricWithPreviousAccuracy:currentAccuracy:] */

void FUN_105f0f4e0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c5e58;
  if (param_3 == 0) {
    if (param_4 == 2) {
      func_0x00010beed980();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_4 != 1) {
        return;
      }
      func_0x00010beed960();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_4 == 2) {
    func_0x00010beed940();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_4 != 1) {
      return;
    }
    func_0x00010beed920();
    _objc_retainAutoreleasedReturnValue();
  }
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c09eec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105f0f5d8; end: 105f0f7fb; -[SCLocationMonitor _checkPreferencesForLocationAccuracy] */

void FUN_105f0f5d8(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  byte bStack_5f;
  undefined1 auStack_58 [8];
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    return;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfd7100();
  if (iVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c09eaa0();
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 1) {
    uVar4 = uVar3;
    func_0x00010bfcc660();
    if ((uVar4 & 1) != 0) goto LAB_105f0f7bc;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010bfcc680();
    if ((iVar1 == 0) || (uVar4 = uVar3, func_0x00010bfcc660(), (int)uVar4 == 0)) goto LAB_105f0f7bc;
  }
  uVar4 = uVar3;
  func_0x00010bfcc660();
  func_0x00010bfcc6c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR_PTR_1126bf2d8;
  _objc_alloc(PTR_PTR_1126bf2d8);
  func_0x00010c22c5c0(uVar3);
  uVar6 = uVar3;
  func_0x00010c2a4ba0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf1c9a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7d40(uVar3);
  func_0x00010c045c80(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_initWeak(auStack_58,param_1);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  uStack_60 = 1;
  _objc_copyWeak(auStack_68,auStack_58);
  bStack_5f = (byte)uVar4 ^ 1;
  func_0x00010c287680(uVar8);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar5);
LAB_105f0f7bc:
  _objc_release(uVar3);
  return;
}



/* Entry: 105f0f7fc; end: 105f0f887;  */

void FUN_105f0f7fc(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  if ((param_2 == 0) && (*(char *)(param_1 + 0x28) == '\x01')) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar1);
    func_0x00010be2a4c0();
    _objc_release(lVar1);
    if (*(char *)(param_1 + 0x28) == '\x01') {
      param_1 = param_1 + 0x20;
      _objc_loadWeakRetained(param_1);
      func_0x00010be04be0();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105f0f888; end: 105f0f88f; -[SCLocationMonitor _handleGhostModeChangedDueToAccuracyChange:] */

void FUN_105f0f888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a3a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setGhostModeEnabledBecauseOfInsu_1126468b8);
  return;
}



/* Entry: 105f0f890; end: 105f0f8a7; -[SCLocationMonitor _displayPreciseLocationNotificationForLocationDisabled:] */

void FUN_105f0f890(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_3 != 0) {
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf85c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_displayMapNotification_completio_1125bf0b0,uVar1,
             0);
  return;
}



/* Entry: 105f0f8a8; end: 105f0f8d3; -[SCLocationMonitor _applicationDidBecomeActive:] */

void FUN_105f0f8a8(undefined8 param_1)

{
  func_0x00010be273c0();
  func_0x00010be302e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be26010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleAuthStatusCheck_1125671a0);
  return;
}



/* Entry: 105f0f8d4; end: 105f0f8d7; -[SCLocationMonitor locationProviderDidUpdateLocationAccuracy] */

void FUN_105f0f8d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be273d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleCommonLocationAccuracyChe_112567690);
  return;
}



/* Entry: 105f0f8d8; end: 105f0f903; -[SCLocationMonitor locationProviderDidUpdateAuthorizationWithStatus:] */

void FUN_105f0f8d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be273c0();
                    /* WARNING: Could not recover jumptable at 0x00010c1b8130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_setLastLocationSharingAuthorizat_11264ba70,
             param_3);
  return;
}



/* Entry: 105f0f904; end: 105f0f9af; -[SCLocationMonitor .cxx_destruct] */

void FUN_105f0f904(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 105f0f9b0; end: 105f0fa23; -[SCMapGhostModeTimerController applicationWillEnterForeground] */

void FUN_105f0f9b0(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010bf9b7c0();
  if (*(char *)(param_1 + 0x38) == '\x01') {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105f0fa24;
    puStack_30 = &UNK_110842e18;
    lStack_28 = param_1;
    func_0x00010c0f7fe0(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x10),param_2,&puStack_48);
  }
  return;
}



/* Entry: 105f0fa24; end: 105f0fa2b;  */

void FUN_105f0fa24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be04650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__displayGhostModeTimerDoneNotifi_11255eb30);
  return;
}



/* Entry: 105f0fa2c; end: 105f0faef; -[SCMapGhostModeTimerController _displayGhostModeTimerDoneNotificationIfPossible] */

void FUN_105f0fa2c(long param_1)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_60;
  _objc_initWeak(auStack_38,param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105f0faf0;
  puStack_48 = &UNK_110850658;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retainBlock(&puStack_60);
  func_0x00010bf85c20(*(undefined8 *)(param_1 + 0x20));
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105f0faf0; end: 105f0fb83;  */

void FUN_105f0faf0(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105f0fb84;
  puStack_38 = &UNK_110846540;
  _objc_copyWeak(auStack_30,param_1 + 0x20);
  uStack_28 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  return;
}



/* Entry: 105f0fb84; end: 105f0fbb7;  */

void FUN_105f0fb84(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedc3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f0fbb8; end: 105f0fbd3; -[SCMapGhostModeTimerController _updateNotificationStatusBasedOnResult:] */

void FUN_105f0fbb8(long param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 3) {
    *(char *)(param_1 + 0x38) = (char)(0x100 >> (ulong)((uint)(param_3 << 3) & 0x18));
  }
  return;
}



/* Entry: 105f0fbd4; end: 105f0fc1b; -[SCMapGhostModeTimerController remainingDuration] */

double FUN_105f0fbd4(double param_1,long param_2)

{
  double dVar1;
  
  func_0x00010c26f340(*(undefined8 *)(param_2 + 8));
  dVar1 = param_1;
  func_0x00010bf8b380(*(undefined8 *)(param_2 + 8));
  param_1 = param_1 + dVar1;
  func_0x00010bf5e680(*(undefined8 *)(param_2 + 0x18));
  return param_1 - dVar1;
}



/* Entry: 105f0fc1c; end: 105f0fc1f; -[SCMapGhostModeTimerController exitGhostModeBecauseTimerExpired] */

void FUN_105f0fc1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exitGhostMode_1125609d8);
  return;
}



/* Entry: 105f0fc20; end: 105f0fc77; -[SCMapGhostModeTimerController startTimerWithDuration:] */

void FUN_105f0fc20(double param_1,long param_2)

{
  if (0.0 < param_1) {
    func_0x00010bf5e680(*(undefined8 *)(param_2 + 0x18));
    func_0x00010c214d40(*(undefined8 *)(param_2 + 8));
    func_0x00010c192e80(param_1,*(undefined8 *)(param_2 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bebfff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,param_2,PTR_s__startForegroundTimerWithDuratio_11258d9a0);
    return;
  }
  return;
}



/* Entry: 105f0fc78; end: 105f0fcd3; -[SCMapGhostModeTimerController invalidateTimer] */

void FUN_105f0fc78(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf8b380(*(undefined8 *)(param_1 + 8));
  func_0x00010c214d40(0,*(undefined8 *)(param_1 + 8));
  func_0x00010c192e80(0,*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105f0fcd4; end: 105f0fdd7; -[SCMapGhostModeTimerController _updateTimerWithRemainingDuration:] */

void FUN_105f0fcd4(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1;
  func_0x00010bf5e680(*(undefined8 *)(param_2 + 0x18));
  dVar2 = dVar1;
  func_0x00010bf8b380(*(undefined8 *)(param_2 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c214d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar1 - (dVar2 - param_1),*(undefined8 *)(param_2 + 8),
             PTR_s_setTimeIntervalSinceBootWhenGhos_112662d78);
  return;
}



/* Entry: 105f0fdd8; end: 105f0fe9b; -[SCMapGhostModeTimerController _exitGhostMode] */

void FUN_105f0fdd8(long param_1)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bfcc720(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105f0fe9c; end: 105f0fec7;  */

void FUN_105f0fe9c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be04640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105f0fec8; end: 105f0ff7f; -[SCMapGhostModeTimerController _startForegroundTimerWithDuration:] */

void FUN_105f0fec8(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (0.0 < param_1) {
    if (*(long *)(param_2 + 0x28) != 0) {
      func_0x00010c069d00();
    }
    puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c270940(param_1,PTR__OBJC_CLASS___NSTimer_1126af1b0,param_3,param_2,
                        PTR_s__foregroundTimerDidFire__11252df98,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined **)(param_2 + 0x28) = puVar1;
    _objc_release(uVar2);
    func_0x00010c216ce0(0x4014000000000000,*(undefined8 *)(param_2 + 0x28));
    puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 105f0ff80; end: 105f0ffd7; -[SCMapGhostModeTimerController _foregroundTimerDidFire:] */

void FUN_105f0ff80(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105f0ffd8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 105f0ffd8; end: 105f0ffdf;  */

void FUN_105f0ffd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0c110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__exitGhostModeIfTimerExpired_1125609e0);
  return;
}



/* Entry: 105f0ffe0; end: 105f0fff7; -[SCMapGhostModeTimerController delegate] */

void FUN_105f0ffe0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f0fff8; end: 105f1005f; -[SCMapGhostModeTimerController .cxx_destruct] */

void FUN_105f0fff8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105f10060; end: 105f1024b; -[SCMapNotificationPresenter displayMapNotification:completion:] */

void FUN_105f10060(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  if (param_3 < 3) {
    uVar1 = 0x97;
    if (param_3 != 2) {
      uVar1 = 0x66;
    }
    uVar2 = 0x96;
    if (param_3 != 1) {
      uVar2 = uVar1;
    }
  }
  else if (param_3 == 3) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c081ca0(uVar2,param_2,0x66);
    if ((int)uVar2 != 0) {
      lVar3 = param_1 + 0x30;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c09f900();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000105f1620c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar6,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      uVar2 = 0xe6;
LAB_105f10224:
      func_0x00010bdeaae0(param_1,param_2,uVar2,puVar6,param_4);
      _objc_release(puVar6);
      goto LAB_105f100bc;
    }
    uVar2 = 0xe4;
  }
  else {
    uVar2 = 0x66;
    if (param_3 == 4) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c081ca0(uVar2,param_2,0x66);
      if ((int)uVar2 != 0) {
        lVar3 = param_1 + 0x30;
        _objc_loadWeakRetained();
        lVar4 = lVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c09f900();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000105f16224();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar6,param_2,lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        uVar2 = 0xe7;
        goto LAB_105f10224;
      }
      uVar2 = 0xe5;
    }
  }
  func_0x00010bdeaae0(param_1,param_2,uVar2,0,param_4);
LAB_105f100bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105f1024c; end: 105f1052f; -[SCMapNotificationPresenter forceOnboardedToSimplifiedNotificationPresenter] */

void FUN_105f1024c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae560;
  _objc_alloc_init();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar10 = PTR_PTR_1126b1370;
    func_0x00010bfe5780(0,PTR_PTR_1126b1370);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(puVar1);
  }
  else {
    puVar10 = PTR_PTR_1126b58e0;
    _objc_opt_new(PTR_PTR_1126b58e0);
    puVar4 = PTR_PTR_1126c58b8;
    func_0x00010bfcc6e0(PTR_PTR_1126c58b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bae20(puVar10);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2a8ea0(puVar10);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar10;
    func_0x00010bf21f60(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b19f8;
    func_0x00010c0b85e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar1);
    func_0x00010bfa5420(uVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(puVar10);
  puVar10 = PTR_PTR_1126b0ae0;
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010687534c();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000106875364();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57ee0(puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  puVar10 = PTR_PTR_1126b1370;
  func_0x00010bfe5780(0,PTR_PTR_1126b1370);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(puVar1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 105f10530; end: 105f1057b;  */

void FUN_105f10530(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1370;
  func_0x00010bfe5780(0,PTR_PTR_1126b1370,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


