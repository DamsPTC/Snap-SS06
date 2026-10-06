/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105601eb4; end: 105601f77; -[SCUserLocationPermissionsManager _setLocationPermissionEnabledForCurrentUser] */

void FUN_105601eb4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (lRam00000001136bd3a0 != -1) {
    func_0x00010002a2fc(0x1136bd3a0,&PTR___NSConcreteGlobalBlock_11089f280);
  }
  if ((bRam00000001136bd398 & 1) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105601f78; end: 105601fbf; -[SCUserLocationPermissionsManager _canAskForAlwaysPermissions] */

uint FUN_105601f78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105601fc0; end: 1056020af; -[SCUserLocationPermissionsManager _subscribeToLifecycleEvents] */

void FUN_105601fc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c2a6420();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1056020b0; end: 1056020db;  */

void FUN_1056020b0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdccee0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056020dc; end: 105602123; -[SCUserLocationPermissionsManager _appWillForeground] */

void FUN_1056020dc(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x58),PTR_s_dispose_1125bf4f8);
    return;
  }
  return;
}



/* Entry: 105602124; end: 105602163; -[SCUserLocationPermissionsManager _logPermissionPromptResponse:] */

void FUN_105602124(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_105605680(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105602164; end: 1056021bf; -[SCUserLocationPermissionsManager _needsJITConsentForFeature:] */

uint FUN_105602164(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (uVar1 = param_1, func_0x00010c081de0(), (int)uVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    func_0x00010c06cae0(param_1,param_2,param_3);
    uVar2 = (uint)param_1 ^ 1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1056021c0; end: 10560226f; -[SCUserLocationPermissionsManager _persistFeatureAuthorization:] */

void FUN_1056021c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c172fe0(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar3);
  lVar2 = param_1;
  func_0x00010bf10fa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0e4fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_onLocationPermissionStatusChange_112616e00,lVar2);
  return;
}



/* Entry: 105602270; end: 1056022ef; -[SCUserLocationPermissionsManager authorizationStatus] */

undefined8 FUN_105602270(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  iVar2 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010bfd45c0();
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010c088380();
    lVar4 = param_1;
    func_0x00010be40820();
    func_0x00010be419e0();
    uVar5 = 1;
    if ((((uint)lVar4 | (uint)param_1) & 1) == 0) {
      uVar5 = 2;
    }
    uVar1 = 3;
    if (lVar3 == 1) {
      uVar1 = uVar5;
    }
    uVar5 = 4;
    if (lVar3 != 2) {
      uVar5 = uVar1;
    }
  }
  return uVar5;
}



/* Entry: 1056022f0; end: 10560234f; -[SCUserLocationPermissionsManager coreLocationAuthorizationStatus] */

int FUN_1056022f0(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010bf52340();
  lVar2 = param_1;
  func_0x00010be40820();
  func_0x00010be419e0();
  if (0xfffffffd < iVar1 - 5U && (((uint)lVar2 | (uint)param_1) & 1) == 0) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Entry: 105602350; end: 10560236b; -[SCUserLocationPermissionsManager isLocationAuthorizedForCurrentUser] */

bool FUN_105602350(long param_1)

{
  func_0x00010bf10fa0();
  return param_1 == 1;
}



/* Entry: 10560236c; end: 1056023db; -[SCUserLocationPermissionsManager tryToAddUserLocationPermissionStatusToEvent:] */

void FUN_10560236c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c088380(uVar3);
  lVar1 = param_1;
  func_0x00010be40820(param_1);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c09eaa0(lVar2);
  FUN_105605580(param_3,uVar3,lVar1,lVar2 == 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056023dc; end: 10560251b; -[SCUserLocationPermissionsManager promptViewControllerDidRequestSettingsLaunch:shouldOpenSettings:] */

void FUN_1056023dc(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10560251c;
  puStack_58 = &UNK_110849200;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retainBlock(&puStack_70);
  if (param_4 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010beca260(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c135c20(uVar2);
  }
  else {
    func_0x00010be24340();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
  }
  _objc_release(param_1);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10560251c; end: 10560254f;  */

void FUN_10560251c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdca5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105602550; end: 10560259f; -[SCUserLocationPermissionsManager promptViewControllerWantsToDismiss:] */

void FUN_105602550(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x68),PTR_s_dismissAnimated__1125be608,1);
    return;
  }
  return;
}



/* Entry: 1056025a0; end: 1056025ff; -[SCUserLocationPermissionsManager underAgePermissionViewControllerDidAccept] */

void FUN_1056025a0(long param_1)

{
  long lVar1;
  
  FUN_1056051fc(*(undefined8 *)(param_1 + 0xa0),&PTR____CFConstantStringClassReference_110df1bb8,
                *(undefined8 *)(param_1 + 0x98),1);
  lVar1 = *(long *)(param_1 + 0x88);
  _objc_retainBlock();
  func_0x00010bddfb60(param_1);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105602600; end: 10560266b; -[SCUserLocationPermissionsManager underAgePermissionViewControllerDidDeny] */

void FUN_105602600(long param_1)

{
  long lVar1;
  
  FUN_1056051fc(*(undefined8 *)(param_1 + 0xa0),&PTR____CFConstantStringClassReference_110dad418,
                *(undefined8 *)(param_1 + 0x98),1);
  func_0x00010be56f60(param_1);
  lVar1 = *(long *)(param_1 + 0x90);
  _objc_retainBlock();
  func_0x00010bddfb60(param_1);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10560266c; end: 1056026d7; -[SCUserLocationPermissionsManager _underAgePermissionTrayDismissed] */

void FUN_10560266c(long param_1)

{
  long lVar1;
  
  FUN_1056051fc(*(undefined8 *)(param_1 + 0xa0),&PTR____CFConstantStringClassReference_110df1bd8,
                *(undefined8 *)(param_1 + 0x98),1);
  func_0x00010be56f60(param_1);
  lVar1 = *(long *)(param_1 + 0x90);
  _objc_retainBlock();
  func_0x00010bddfb60(param_1);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1056026d8; end: 10560272b; -[SCUserLocationPermissionsManager _cleanupUnderAgePermissionTray] */

void FUN_1056026d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_dismissAnimated__1125be608,1);
  return;
}



/* Entry: 10560272c; end: 1056027a7; -[SCUserLocationPermissionsManager tray:positionDidChange:] */

void FUN_10560272c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  if ((param_4 == 2) && (param_3 == *(long *)(param_1 + 0x68))) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    _objc_release();
    if (*(long *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bed0f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__underAgePermissionTrayDismissed_112591d88);
      return;
    }
    if (*(long *)(param_1 + 0x70) != 0) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      _objc_release();
      lVar1 = *(long *)(param_1 + 0x78);
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105602798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x10))(lVar1,0);
        return;
      }
    }
  }
  return;
}



/* Entry: 1056027a8; end: 105602807; -[SCUserLocationPermissionsManager tray:heightForPosition:] */

undefined8 FUN_1056027a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  if ((*(long *)(param_2 + 0x80) == 0) && (*(long *)(param_2 + 0x70) == 0)) {
    param_1 = 0x4078100000000000;
  }
  else {
    func_0x00010bf27a40();
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 105602808; end: 1056029af; -[SCUserLocationPermissionsManager .cxx_destruct] */

void FUN_105602808(long param_1)

{
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 1056029b0; end: 1056029b7; -[SCUserLocationProvider heading] */

void FUN_1056029b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe0330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_heading_1125d5a88);
  return;
}



/* Entry: 1056029b8; end: 105602aab; -[SCUserLocationProvider requestActiveLocationUpdatesWithRequest:] */

void FUN_1056029b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bc378;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010bf0dfc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c2a1980(param_4);
  func_0x00010bf6ea60(param_4);
  uVar6 = param_1;
  func_0x00010bf6ea00(param_4);
  uVar4 = param_4;
  func_0x00010c2a1960(param_4);
  _objc_release(param_4);
  func_0x00010bff4e60(param_1,uVar6,puVar1,param_3,uVar2,uVar3,uVar4,0);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126bc380;
  _objc_alloc(PTR_PTR_1126bc380);
  func_0x00010c026da0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105602aac; end: 105602c7f; -[SCUserLocationProvider requestLocationWithTimeout:desiredAccuracy:observerAttributedFeature:callbackQueue:callback:] */

void FUN_105602aac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(char *)(param_2 + 0x41) == '\x01') {
      func_0x00010be72060(param_1,param_2);
    }
    else {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105602c80;
      puStack_60 = &UNK_110849530;
      _objc_retain(param_7);
      uStack_58 = param_7;
      func_0x00010007380c(param_6,&puStack_78);
      _objc_release(uStack_58);
    }
  }
  else {
    _objc_initWeak(auStack_80,param_2);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    _objc_copyWeak(auStack_98,auStack_80);
    uStack_90 = param_1;
    uStack_88 = param_4;
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    func_0x00010bfa8200(uVar1);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 105602c80; end: 105602c8f;  */

void FUN_105602c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105602c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105602c90; end: 105602d4b;  */

void FUN_105602c90(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    if (param_2 == 1) {
      func_0x00010be72060(*(undefined8 *)(param_1 + 0x40),lVar3);
    }
    else {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_105602d4c;
      puStack_40 = &UNK_110849530;
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar2);
      uStack_38 = uVar2;
      func_0x00010007380c(uVar1,&puStack_58);
      _objc_release(uStack_38);
    }
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 105602d4c; end: 105602d5b;  */

void FUN_105602d4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105602d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105602d5c; end: 105602d63; -[SCUserLocationProvider locationObserverDispatchQueue] */

void FUN_105602d5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11de10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_queue_1126251a0);
  return;
}



/* Entry: 105602d64; end: 105602e3b; -[SCUserLocationProvider onLocationUpdate:] */

void FUN_105602d64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x41) == '\x01') {
    func_0x00010bdcc120(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010be0f7e0(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105602e3c; end: 105602e6f;  */

void FUN_105602e3c(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdcc120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105602e70; end: 105602f83; -[SCUserLocationProvider onLocationVisit:significantChangeMonitoringAvailable:] */

void FUN_105602e70(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bc398;
  _objc_alloc(PTR_PTR_1126bc398);
  func_0x00010bf51c80(param_5);
  uVar5 = param_1;
  func_0x00010bfe4080(param_5);
  uVar2 = param_5;
  func_0x00010bf0a180(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010bf6d920(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010bf6e340(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005ae0(param_1,param_2,uVar5,puVar1,param_4,uVar2,uVar3,uVar4,param_6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_3 + 0x10),param_4,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105602f84; end: 105602fc7; -[SCUserLocationProvider _announceLocationUpdate] */

void FUN_105602f84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126bc3a0;
  func_0x00010bf7e440(PTR_PTR_1126bc3a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105602fc8; end: 10560309f; -[SCUserLocationProvider onLocationHeadingChange:] */

void FUN_105602fc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x41) == '\x01') {
    func_0x00010bdcbea0(param_1);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010be0f7e0(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1056030a0; end: 1056030d3;  */

void FUN_1056030a0(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdcbea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1056030d4; end: 105603117; -[SCUserLocationProvider _announceHeadingUpdate] */

void FUN_1056030d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126bc3a0;
  func_0x00010bf7e2e0(PTR_PTR_1126bc3a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105603118; end: 10560316b; -[SCUserLocationProvider onLocationError:] */

void FUN_105603118(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x41) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR_PTR_1126bc3a0;
    func_0x00010bf76160(PTR_PTR_1126bc3a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10560316c; end: 1056031fb; -[SCUserLocationProvider _onAuthorizationChangedWithStatus:] */

void FUN_10560316c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x00010bed90c0(param_1,param_2,param_3 == 1);
  if (param_3 == 1) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010bf52340();
    if (iVar1 == 3) {
      func_0x00010c223da0(*(undefined8 *)(param_1 + 0x20));
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf1f440(uVar2);
    }
    else {
      func_0x00010c223da0(*(undefined8 *)(param_1 + 0x20));
      uVar2 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c202a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setSignificantLocationChangeMoni_11265e4a8,
               uVar2);
    return;
  }
  return;
}



/* Entry: 1056031fc; end: 10560320b; -[SCUserLocationProvider _updateHasLocationAuthorization:] */

void FUN_1056031fc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined1 *)(param_1 + 0x41) = param_3;
  return;
}



/* Entry: 10560320c; end: 10560325f;  */

void FUN_10560320c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2 == 1);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed90c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105603260; end: 1056033af; -[SCUserLocationProvider _performLocationRequestWithTimeout:desiredAccuracy:observerAttributedFeature:callbackQueue:callback:] */

void FUN_105603260(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar2 = *(long *)(param_2 + 0x28);
  _objc_retain(param_6);
  func_0x00010bf10fa0();
  if (lVar2 == 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1056033b0;
    puStack_60 = &UNK_110849530;
    uStack_58 = param_7;
    _objc_retain(param_7);
    func_0x00010007380c(param_6,&puStack_78);
    _objc_release(param_6);
    uVar1 = uStack_58;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)PTR__kCLLocationAccuracyBest_110349b70;
    _objc_retain(param_7);
    func_0x00010c135ca0(param_1,uVar3,uVar1);
    _objc_release(param_6);
    uVar1 = param_7;
  }
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  return;
}



/* Entry: 1056033b0; end: 1056033bf;  */

void FUN_1056033b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056033bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1056033c0; end: 10560346b;  */

void FUN_1056033c0(double param_1,long param_2,ulong param_3,ulong param_4,undefined1 *param_5)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  
  _objc_retain(param_3);
  if ((param_4 & 1) == 0) {
    if (param_3 != 0) {
      lVar2 = *(long *)(param_2 + 0x28);
      func_0x00010bfe4080(param_3);
      dVar3 = 100.0;
      if (lVar2 != 0) {
        dVar3 = 1.79769313486232e+308;
      }
      if (param_1 <= dVar3) {
        uVar1 = param_3;
        func_0x000107f492b0(0x4072c00000000000);
        *param_5 = (char)uVar1;
        if ((uVar1 & 1) == 0) goto LAB_10560343c;
        goto LAB_1056033f4;
      }
    }
    *param_5 = 0;
  }
  else {
    *param_5 = 1;
LAB_1056033f4:
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),param_3);
  }
LAB_10560343c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10560346c; end: 10560348b; -[SCUserLocationProvider _hasLocationAuthorization] */

bool FUN_10560346c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf10fa0(lVar1);
  return lVar1 == 1;
}



/* Entry: 10560348c; end: 1056035df; -[SCUserLocationProvider .cxx_destruct] */

void FUN_10560348c(long param_1)

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



/* Entry: 1056035e0; end: 105603867; -[SCUserLocationServicesEntryPoint _nextGenPermissionsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056035e0(long param_1,undefined8 param_2)

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
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  puVar1 = PTR_PTR_1126bc3b8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112726b6c;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112726b70;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf70a00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112726b74;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112726b78;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112726b7c;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112726b64;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf10f20();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112726b80;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_112726b84;
  _objc_loadWeakRetained();
  lVar20 = lVar19;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112726b88;
  _objc_loadWeakRetained();
  lVar21 = param_1;
  func_0x00010c0ba300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007640(puVar1,param_2,lVar4,lVar7,lVar9,lVar11,lVar13,lVar16,lVar18,lVar20,lVar21);
  _objc_release(lVar21);
  _objc_release(param_1);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105603868; end: 10560392b; -[SCUserLocationServicesEntryPoint _nextGenLocationProviderWithPermissionsManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105603868(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112726b68;
  _objc_retain(param_3);
  param_1 = param_1 + lVar4;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c09f3a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar1;
  func_0x00010c0b7a80(lVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10560392c; end: 1056039eb; -[SCUserLocationServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10560392c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112726b94,0);
  _objc_destroyWeak(param_1 + _DAT_112726b88);
  _objc_destroyWeak(param_1 + _DAT_112726b84);
  _objc_destroyWeak(param_1 + _DAT_112726b68);
  _objc_destroyWeak(param_1 + _DAT_112726b64);
  _objc_destroyWeak(param_1 + _DAT_112726b90);
  _objc_destroyWeak(param_1 + _DAT_112726b80);
  _objc_destroyWeak(param_1 + _DAT_112726b8c);
  _objc_destroyWeak(param_1 + _DAT_112726b7c);
  _objc_destroyWeak(param_1 + _DAT_112726b74);
  _objc_destroyWeak(param_1 + _DAT_112726b70);
  _objc_destroyWeak(param_1 + _DAT_112726b6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726b78);
  return;
}



/* Entry: 1056039ec; end: 105603a5f; -[SCUserLocationUtilities initWithLocationProvider:] */

undefined1 * FUN_1056039ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e95a0;
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



/* Entry: 105603a60; end: 105603b97; -[SCUserLocationUtilities getFormattedDistanceFromUserToLocationLat:lng:] */

void FUN_105603a60(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar2 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
  _objc_alloc(PTR__OBJC_CLASS___CLLocation_1126b30c8);
  func_0x00010c021a60(param_1,param_2);
  lVar3 = param_3;
  func_0x00010bf86f20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51c80();
  uVar7 = param_1;
  uVar8 = param_2;
  func_0x00010bf51c80(puVar2);
  lVar6 = lVar3;
  _objc_retain();
  iVar1 = (int)lVar6;
  _CLLocationCoordinate2DIsValid(param_1,param_2);
  if ((iVar1 == 0) || (_CLLocationCoordinate2DIsValid(uVar7,uVar8), iVar1 == 0)) {
    lVar6 = 0;
  }
  else {
    func_0x000108d312a8(param_1,param_2,uVar7,uVar8);
    lVar6 = lVar3;
    func_0x00010c25d440(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105603b98; end: 105603bf3; -[SCUserLocationUtilities distanceFormatter] */

void FUN_105603b98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___MKDistanceFormatter_1126b1f88;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar1;
    _objc_release(uVar2);
    func_0x00010c21b920(*(undefined8 *)(param_1 + 0x10),param_2,1);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105603bf4; end: 105603c23; -[SCUserLocationUtilities .cxx_destruct] */

void FUN_105603bf4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105603c24; end: 105603c9b;  */

void FUN_105603c24(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110df1c78;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110df1c78,
                      &PTR____CFConstantStringClassReference_110df1c58,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105603c9c; end: 105603cbf; -[SCLocationManagerState copyWithZone:] */

undefined8 FUN_105603c9c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105603cc0; end: 105603d67; -[SCLocationManagerState hash] */

undefined8 FUN_105603cc0(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = (ulong)*(byte *)(param_2 + 8);
  uVar2 = ~*(ulong *)(param_2 + 0x10) + *(ulong *)(param_2 + 0x10) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_38 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar2 = ~*(ulong *)(param_2 + 0x18) + *(ulong *)(param_2 + 0x18) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_30 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_28 = (ulong)*(byte *)(param_2 + 9);
  uStack_20 = (ulong)*(byte *)(param_2 + 10);
  func_0x000100505190(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return param_1;
  }
  ___stack_chk_fail();
  return *(undefined8 *)((long)puVar1 + 0x10);
}



/* Entry: 105603d68; end: 105603d6f; -[SCLocationManagerState locationAccuracy] */

undefined8 FUN_105603d68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105603d70; end: 105603d77; -[SCLocationManagerState distanceFilter] */

undefined8 FUN_105603d70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105603d78; end: 105603d7f; -[SCLocationManagerState allowsBackground] */

undefined1 FUN_105603d78(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105603d80; end: 105603d87; -[SCLocationManagerState updatingHeading] */

undefined1 FUN_105603d80(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 105603d88; end: 105603e9f;  */

void FUN_105603d88(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined1 **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long **pplVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 ***pppuStack_1f0;
  code *pcStack_1e8;
  long alStack_1e0 [3];
  long *plStack_1c8;
  long **applStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined1 *puStack_1a0;
  long *plStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar7 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    puVar2 = &UNK_10f2de010;
    if ((int)param_2 == 0) {
      puVar2 = &UNK_10f2de015;
    }
    func_0x00010002b838(appuStack_50,puVar2);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = &UNK_11089f3f0;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11089f3f0,&uStack_70,param_3);
    ppuVar1 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    param_3 = (undefined1 *)puVar7;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      param_3 = (undefined1 *)puVar7;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  puVar7 = &uStack_f0;
  pcStack_78 = FUN_105603ea0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar8 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar11 = (long *)ppuVar1[1];
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f2de043;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_d0,puVar2);
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    func_0x00010007e1e8(&uStack_f0,auStack_d0,&lStack_b8,1);
    puVar2 = &UNK_11089f440;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11089f440,&uStack_f0,param_3);
    puStack_d8 = (undefined1 *)&uStack_f0;
    func_0x00010007e5dc(&puStack_d8);
    puVar8 = (undefined1 *)puVar7;
    unaff_x22 = &uStack_f0;
    if (cStack_b9 < '\0') {
      __ZdlPv(auStack_d0[0]);
      puVar8 = (undefined1 *)puVar7;
      unaff_x22 = &uStack_f0;
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar7 = &uStack_170;
  pcStack_f8 = FUN_105604014;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar9 = puVar8;
  ppuStack_100 = &puStack_80;
  _objc_retain(puVar2);
  plVar11 = (long *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f2de043;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_150,puVar3);
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    func_0x00010007e1e8(&uStack_170,auStack_150,&lStack_138,1);
    puVar6 = &UNK_11089f490;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11089f490,&uStack_170,puVar8);
    puStack_158 = (undefined1 *)&uStack_170;
    func_0x00010007e5dc(&puStack_158);
    puVar9 = (undefined1 *)puVar7;
    unaff_x22 = &uStack_170;
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
      puVar9 = (undefined1 *)puVar7;
      unaff_x22 = &uStack_170;
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar3;
  __Unwind_Resume();
  plVar10 = alStack_1e0;
  pcStack_178 = FUN_105604188;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar5 = (long **)0x0;
  puStack_1a0 = (undefined1 *)unaff_x22;
  plStack_198 = plVar11;
  puStack_190 = puVar3;
  puStack_188 = puVar2;
  pppuStack_180 = &ppuStack_100;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    puVar2 = &UNK_10f2de010;
    if ((int)puVar6 == 0) {
      puVar2 = &UNK_10f2de015;
    }
    func_0x00010002b838(applStack_1c0,puVar2);
    alStack_1e0[0] = 0;
    alStack_1e0[1] = 0;
    alStack_1e0[2] = 0;
    func_0x00010007e1e8(alStack_1e0,applStack_1c0,&lStack_1a8,1);
    puVar6 = &UNK_11089f4e0;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11089f4e0,alStack_1e0,puVar9);
    pplVar5 = &plStack_1c8;
    plStack_1c8 = alStack_1e0;
    func_0x00010007e5dc();
    puVar9 = (undefined1 *)plVar10;
    plVar11 = alStack_1e0;
    if (cStack_1a9 < '\0') {
      pplVar5 = applStack_1c0[0];
      __ZdlPv();
      puVar9 = (undefined1 *)plVar10;
      plVar11 = alStack_1e0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  plStack_1c8 = plVar11;
  func_0x00010007e5dc(&plStack_1c8);
  if (cStack_1a9 < '\0') {
    __ZdlPv(applStack_1c0[0]);
  }
  __Unwind_Resume();
  pcStack_1e8 = FUN_1056042a0;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  pppuStack_1f0 = &pppuStack_180;
  _objc_retain(puVar6);
  if (pplVar5 != (long **)0x0) {
    plVar11 = pplVar5[1];
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f2de043;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_240,puVar2);
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    func_0x00010007e1e8(&uStack_260,auStack_240,&lStack_228,1);
    puVar2 = &UNK_11089f530;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_11089f530,&uStack_260,puVar9);
    puStack_248 = (undefined1 *)&uStack_260;
    func_0x00010007e5dc(&puStack_248);
    if (cStack_229 < '\0') {
      __ZdlPv(auStack_240[0]);
    }
  }
  puVar3 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar3;
  __Unwind_Resume();
  puStack_288 = (undefined1 *)&uStack_2a0;
  pcStack_268 = FUN_105604414;
  if (puVar4 != (undefined *)0x0) {
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    puStack_280 = puVar3;
    puStack_278 = puVar6;
    pppuStack_270 = &pppuStack_1f0;
    (**(code **)(**(long **)(puVar4 + 8) + 0x18))
              (*(long **)(puVar4 + 8),&UNK_11089f580,&uStack_2a0,puVar2);
    func_0x00010007e5dc(&puStack_288);
  }
  return;
}



/* Entry: 105603ea0; end: 105604013;  */

void FUN_105603ea0(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long **pplVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *unaff_x22;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 ***pppuStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  long alStack_170 [3];
  long *plStack_158;
  long **applStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined1 *puStack_130;
  long *plStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2de043;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11089f440;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11089f440,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
      unaff_x22 = &uStack_80;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar7 = &uStack_100;
  pcStack_88 = FUN_105604014;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar8 = puVar6;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar10 = (long *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f2de043;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar5 = &UNK_11089f490;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11089f490,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar8 = (undefined1 *)puVar7;
    unaff_x22 = &uStack_100;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar8 = (undefined1 *)puVar7;
      unaff_x22 = &uStack_100;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  plVar9 = alStack_170;
  pcStack_108 = FUN_105604188;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = (long **)0x0;
  puStack_130 = (undefined1 *)unaff_x22;
  plStack_128 = plVar10;
  puStack_120 = puVar2;
  puStack_118 = puVar1;
  ppuStack_110 = &puStack_90;
  if (puVar3 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar3 + 8);
    puVar1 = &UNK_10f2de010;
    if ((int)puVar5 == 0) {
      puVar1 = &UNK_10f2de015;
    }
    func_0x00010002b838(applStack_150,puVar1);
    alStack_170[0] = 0;
    alStack_170[1] = 0;
    alStack_170[2] = 0;
    func_0x00010007e1e8(alStack_170,applStack_150,&lStack_138,1);
    puVar5 = &UNK_11089f4e0;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11089f4e0,alStack_170,puVar8);
    pplVar4 = &plStack_158;
    plStack_158 = alStack_170;
    func_0x00010007e5dc();
    puVar8 = (undefined1 *)plVar9;
    plVar10 = alStack_170;
    if (cStack_139 < '\0') {
      pplVar4 = applStack_150[0];
      __ZdlPv();
      puVar8 = (undefined1 *)plVar9;
      plVar10 = alStack_170;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  plStack_158 = plVar10;
  func_0x00010007e5dc(&plStack_158);
  if (cStack_139 < '\0') {
    __ZdlPv(applStack_150[0]);
  }
  __Unwind_Resume();
  pcStack_178 = FUN_1056042a0;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar5;
  pppuStack_180 = &ppuStack_110;
  _objc_retain(puVar5);
  if (pplVar4 != (long **)0x0) {
    plVar10 = pplVar4[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f2de043;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_1d0,puVar1);
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    func_0x00010007e1e8(&uStack_1f0,auStack_1d0,&lStack_1b8,1);
    puVar1 = &UNK_11089f530;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_11089f530,&uStack_1f0,puVar8);
    puStack_1d8 = (undefined1 *)&uStack_1f0;
    func_0x00010007e5dc(&puStack_1d8);
    if (cStack_1b9 < '\0') {
      __ZdlPv(auStack_1d0[0]);
    }
  }
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_218 = (undefined1 *)&uStack_230;
  pcStack_1f8 = FUN_105604414;
  if (puVar3 != (undefined *)0x0) {
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    puStack_210 = puVar2;
    puStack_208 = puVar5;
    pppuStack_200 = &pppuStack_180;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11089f580,&uStack_230,puVar1);
    func_0x00010007e5dc(&puStack_218);
  }
  return;
}



/* Entry: 105604014; end: 105604187;  */

void FUN_105604014(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long **pplVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *unaff_x22;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  long alStack_f0 [3];
  long *plStack_d8;
  long **applStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  plVar9 = (long *)0x0;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2de043;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11089f490;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11089f490,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
      unaff_x22 = &uStack_80;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  plVar8 = alStack_f0;
  pcStack_88 = FUN_105604188;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = (long **)0x0;
  puStack_b0 = (undefined1 *)unaff_x22;
  plStack_a8 = plVar9;
  puStack_a0 = puVar2;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  if (puVar3 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar3 + 8);
    puVar2 = &UNK_10f2de010;
    if ((int)puVar1 == 0) {
      puVar2 = &UNK_10f2de015;
    }
    func_0x00010002b838(applStack_d0,puVar2);
    alStack_f0[0] = 0;
    alStack_f0[1] = 0;
    alStack_f0[2] = 0;
    func_0x00010007e1e8(alStack_f0,applStack_d0,&lStack_b8,1);
    puVar1 = &UNK_11089f4e0;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11089f4e0,alStack_f0,puVar6);
    pplVar4 = &plStack_d8;
    plStack_d8 = alStack_f0;
    func_0x00010007e5dc();
    puVar6 = (undefined1 *)plVar8;
    plVar9 = alStack_f0;
    if (cStack_b9 < '\0') {
      pplVar4 = applStack_d0[0];
      __ZdlPv();
      puVar6 = (undefined1 *)plVar8;
      plVar9 = alStack_f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  plStack_d8 = plVar9;
  func_0x00010007e5dc(&plStack_d8);
  if (cStack_b9 < '\0') {
    __ZdlPv(applStack_d0[0]);
  }
  __Unwind_Resume();
  pcStack_f8 = FUN_1056042a0;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar1;
  ppuStack_100 = &puStack_90;
  _objc_retain(puVar1);
  if (pplVar4 != (long **)0x0) {
    plVar9 = pplVar4[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f2de043;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_150,puVar2);
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    func_0x00010007e1e8(&uStack_170,auStack_150,&lStack_138,1);
    puVar2 = &UNK_11089f530;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11089f530,&uStack_170,puVar6);
    puStack_158 = (undefined1 *)&uStack_170;
    func_0x00010007e5dc(&puStack_158);
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  puStack_198 = (undefined1 *)&uStack_1b0;
  pcStack_178 = FUN_105604414;
  if (puVar5 != (undefined *)0x0) {
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    puStack_190 = puVar3;
    puStack_188 = puVar1;
    pppuStack_180 = &ppuStack_100;
    (**(code **)(**(long **)(puVar5 + 8) + 0x18))
              (*(long **)(puVar5 + 8),&UNK_11089f580,&uStack_1b0,puVar2);
    func_0x00010007e5dc(&puStack_198);
  }
  return;
}



/* Entry: 105604188; end: 10560429f;  */

void FUN_105604188(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined1 **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *unaff_x21;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar5 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    puVar2 = &UNK_10f2de010;
    if ((int)param_2 == 0) {
      puVar2 = &UNK_10f2de015;
    }
    func_0x00010002b838(appuStack_50,puVar2);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = &UNK_11089f4e0;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_11089f4e0,&uStack_70,param_3);
    ppuVar1 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    param_3 = (undefined1 *)puVar5;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      param_3 = (undefined1 *)puVar5;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  pcStack_78 = FUN_1056042a0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_2);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar6 = (long *)ppuVar1[1];
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f2de043;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_d0,puVar2);
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    func_0x00010007e1e8(&uStack_f0,auStack_d0,&lStack_b8,1);
    puVar2 = &UNK_11089f530;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_11089f530,&uStack_f0,param_3);
    puStack_d8 = (undefined1 *)&uStack_f0;
    func_0x00010007e5dc(&puStack_d8);
    if (cStack_b9 < '\0') {
      __ZdlPv(auStack_d0[0]);
    }
  }
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puStack_118 = (undefined1 *)&uStack_130;
  pcStack_f8 = FUN_105604414;
  if (puVar4 != (undefined *)0x0) {
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    puStack_110 = puVar3;
    puStack_108 = param_2;
    ppuStack_100 = &puStack_80;
    (**(code **)(**(long **)(puVar4 + 8) + 0x18))
              (*(long **)(puVar4 + 8),&UNK_11089f580,&uStack_130,puVar2);
    func_0x00010007e5dc(&puStack_118);
  }
  return;
}



/* Entry: 1056042a0; end: 105604413;  */

void FUN_1056042a0(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2de043;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11089f530;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11089f530,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_105604414;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11089f580,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 105604414; end: 10560448b;  */

void FUN_105604414(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_11089f580,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 10560448c; end: 10560474b;  */

/* WARNING: Removing unreachable block (ram,0x000105604714) */
/* WARNING: Removing unreachable block (ram,0x0001056049d4) */

void FUN_10560448c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x24;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined *puStack_230;
  long *plStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar12 = param_4;
  puVar5 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2de043;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2de043;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2de043;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar2);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_11089f5d0;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    puVar2 = puVar4;
    puVar12 = param_5;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar9 = &uStack_180;
  pcStack_c8 = FUN_10560474c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar4 = puVar2;
  puVar13 = puVar12;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(puVar12);
  if (puVar3 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f2de043;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_160,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f2de043;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar4 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_148,puVar4);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f2de043;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar4 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_130,puVar4);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar8 = &UNK_11089f620;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089f620,&uStack_180,puVar5);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar14 = 0;
    puVar4 = puVar9;
    puVar13 = puVar5;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar12);
  _objc_release(puVar2);
  puVar5 = (undefined8 *)puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar12);
    puVar9 = auStack_160;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puVar9);
    _objc_release(puVar12);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar6 = (undefined *)puVar5;
    __Unwind_Resume();
    puVar11 = &uStack_200;
    pcStack_188 = FUN_105604a0c;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar8;
    puVar10 = puVar4;
    puStack_1c0 = unaff_x24;
    puStack_1b8 = puVar9;
    puStack_1b0 = (undefined *)puVar5;
    puStack_1a8 = puVar12;
    puStack_1a0 = puVar2;
    puStack_198 = puVar1;
    ppuStack_190 = &puStack_d0;
    _objc_retain(puVar8);
    plVar15 = (long *)0x0;
    if (puVar6 != (undefined *)0x0) {
      plVar15 = *(long **)(puVar6 + 8);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar1 = &UNK_10f2de043;
      }
      else {
        puVar1 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      puVar9 = auStack_1e0;
      func_0x00010002b838(auStack_1e0,puVar1);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_1c8,1);
      puVar3 = &UNK_11089f670;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089f670,&uStack_200,puVar4);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      puVar10 = puVar11;
      puVar13 = puVar4;
      puVar5 = &uStack_200;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        puVar10 = puVar11;
        puVar13 = puVar4;
        puVar5 = &uStack_200;
      }
    }
    puVar1 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar8);
    _objc_release(puVar8);
    puVar7 = puVar1;
    __Unwind_Resume();
    pcStack_208 = FUN_105604b80;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = puVar3;
    puVar2 = puVar10;
    puStack_240 = unaff_x24;
    puStack_238 = puVar9;
    puStack_230 = (undefined *)puVar5;
    plStack_228 = plVar15;
    puStack_220 = puVar1;
    puStack_218 = puVar8;
    pppuStack_210 = &ppuStack_190;
    _objc_retain(puVar3);
    _objc_retain(puVar10);
    puVar12 = (undefined8 *)0x0;
    if (puVar7 != (undefined *)0x0) {
      plVar15 = *(long **)(puVar7 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f2de043;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      unaff_x24 = auStack_278;
      func_0x00010002b838(auStack_278,puVar1);
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f2de043;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar2 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_260,puVar2);
      uStack_298 = 0;
      uStack_290 = 0;
      uStack_288 = 0;
      func_0x00010007e1e8(&uStack_298,auStack_278,&lStack_248,2);
      puVar6 = &UNK_11089f710;
      puVar9 = &uStack_298;
      puVar2 = &uStack_298;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089f710,puVar2,puVar13);
      puStack_280 = puVar9;
      func_0x00010007e5dc(&puStack_280);
      lVar14 = 0;
      puVar12 = auStack_278;
      do {
        if ((&cStack_249)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(puVar10);
    puVar1 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
      ___stack_chk_fail();
      _objc_release(puVar10);
      if (cStack_261 < '\0') {
        __ZdlPv(auStack_278[0]);
      }
      _objc_release(puVar10);
      _objc_release(puVar3);
      puVar7 = puVar1;
      __Unwind_Resume();
      pcStack_2a8 = FUN_105604db0;
      lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar8 = puVar6;
      puStack_2e0 = unaff_x24;
      puStack_2d8 = puVar9;
      puStack_2d0 = puVar12;
      puStack_2c8 = puVar1;
      puStack_2c0 = puVar10;
      puStack_2b8 = puVar3;
      pppuStack_2b0 = &pppuStack_210;
      _objc_retain(puVar6);
      if (puVar7 != (undefined *)0x0) {
        plVar15 = *(long **)(puVar7 + 8);
        _objc_retain(puVar6);
        if (puVar6 == (undefined *)0x0) {
          puVar1 = &UNK_10f2de043;
        }
        else {
          puVar1 = puVar6;
          _objc_retainAutorelease(puVar6);
          func_0x00010bdc3520();
        }
        _objc_release(puVar6);
        func_0x00010002b838(auStack_300,puVar1);
        uStack_320 = 0;
        uStack_318 = 0;
        uStack_310 = 0;
        func_0x00010007e1e8(&uStack_320,auStack_300,&lStack_2e8,1);
        puVar8 = &UNK_11089f760;
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_11089f760,&uStack_320,puVar2);
        puStack_308 = (undefined1 *)&uStack_320;
        func_0x00010007e5dc(&puStack_308);
        if (cStack_2e9 < '\0') {
          __ZdlPv(auStack_300[0]);
        }
      }
      puVar1 = puVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
        ___stack_chk_fail();
        _objc_release(puVar6);
        _objc_release(puVar6);
        puVar3 = puVar1;
        __Unwind_Resume();
        puStack_348 = (undefined1 *)&uStack_360;
        pcStack_328 = FUN_105604f24;
        if (puVar3 != (undefined *)0x0) {
          uStack_360 = 0;
          uStack_358 = 0;
          uStack_350 = 0;
          puStack_340 = puVar1;
          puStack_338 = puVar6;
          pppuStack_330 = &pppuStack_2b0;
          (**(code **)(**(long **)(puVar3 + 8) + 0x18))
                    (*(long **)(puVar3 + 8),&UNK_11089f800,&uStack_360,puVar8);
          func_0x00010007e5dc(&puStack_348);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10560474c; end: 105604a0b;  */

/* WARNING: Removing unreachable block (ram,0x0001056049d4) */

void FUN_10560474c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x24;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 ***pppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 *puStack_200;
  undefined *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  long *plStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar3 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2de043;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2de043;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2de043;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar2);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_11089f620;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089f620,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    puVar2 = puVar3;
    puVar10 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = (undefined8 *)param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar13 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar13);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = (undefined *)puVar3;
  __Unwind_Resume();
  puVar9 = &uStack_140;
  pcStack_c8 = FUN_105604a0c;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar8 = puVar2;
  puStack_100 = unaff_x24;
  puStack_f8 = puVar13;
  puStack_f0 = (undefined *)puVar3;
  puStack_e8 = param_4;
  puStack_e0 = param_3;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar5 = &UNK_10f2de043;
    }
    else {
      puVar5 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    puVar13 = auStack_120;
    func_0x00010002b838(auStack_120,puVar5);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_108,1);
    puVar5 = &UNK_11089f670;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089f670,&uStack_140,puVar2);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x00010007e5dc(&puStack_128);
    puVar8 = puVar9;
    puVar10 = puVar2;
    puVar3 = &uStack_140;
    if (cStack_109 < '\0') {
      __ZdlPv(auStack_120[0]);
      puVar8 = puVar9;
      puVar10 = puVar2;
      puVar3 = &uStack_140;
    }
  }
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar6 = puVar4;
  __Unwind_Resume();
  pcStack_148 = FUN_105604b80;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar5;
  puVar2 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = puVar13;
  puStack_170 = (undefined *)puVar3;
  plStack_168 = plVar12;
  puStack_160 = puVar4;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_d0;
  _objc_retain(puVar5);
  _objc_retain(puVar8);
  puVar3 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar6 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f2de043;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_1b8;
    func_0x00010002b838(auStack_1b8,puVar1);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2de043;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar7 = &UNK_11089f710;
    puVar13 = &uStack_1d8;
    puVar2 = &uStack_1d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089f710,puVar2,puVar10);
    puStack_1c0 = puVar13;
    func_0x00010007e5dc(&puStack_1c0);
    lVar11 = 0;
    puVar3 = auStack_1b8;
    do {
      if ((&cStack_189)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar8);
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_188) {
    ___stack_chk_fail();
    _objc_release(puVar8);
    if (cStack_1a1 < '\0') {
      __ZdlPv(auStack_1b8[0]);
    }
    _objc_release(puVar8);
    _objc_release(puVar5);
    puVar6 = puVar1;
    __Unwind_Resume();
    pcStack_1e8 = FUN_105604db0;
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar7;
    puStack_220 = unaff_x24;
    puStack_218 = puVar13;
    puStack_210 = puVar3;
    puStack_208 = puVar1;
    puStack_200 = puVar8;
    puStack_1f8 = puVar5;
    pppuStack_1f0 = &ppuStack_150;
    _objc_retain(puVar7);
    if (puVar6 != (undefined *)0x0) {
      plVar12 = *(long **)(puVar6 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f2de043;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      func_0x00010002b838(auStack_240,puVar1);
      uStack_260 = 0;
      uStack_258 = 0;
      uStack_250 = 0;
      func_0x00010007e1e8(&uStack_260,auStack_240,&lStack_228,1);
      puVar4 = &UNK_11089f760;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11089f760,&uStack_260,puVar2);
      puStack_248 = (undefined1 *)&uStack_260;
      func_0x00010007e5dc(&puStack_248);
      if (cStack_229 < '\0') {
        __ZdlPv(auStack_240[0]);
      }
    }
    puVar1 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
      ___stack_chk_fail();
      _objc_release(puVar7);
      _objc_release(puVar7);
      puVar5 = puVar1;
      __Unwind_Resume();
      puStack_288 = (undefined1 *)&uStack_2a0;
      pcStack_268 = FUN_105604f24;
      if (puVar5 != (undefined *)0x0) {
        uStack_2a0 = 0;
        uStack_298 = 0;
        uStack_290 = 0;
        puStack_280 = puVar1;
        puStack_278 = puVar7;
        pppuStack_270 = &pppuStack_1f0;
        (**(code **)(**(long **)(puVar5 + 8) + 0x18))
                  (*(long **)(puVar5 + 8),&UNK_11089f800,&uStack_2a0,puVar4);
        func_0x00010007e5dc(&puStack_288);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 105604a0c; end: 105604b7f;  */

void FUN_105604a0c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2de043;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11089f670;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11089f670,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar7 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_105604b80;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar3 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  puVar10 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f2de043;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f2de043;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar5 = &UNK_11089f710;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11089f710,puVar3,param_4);
    puStack_100 = unaff_x23;
    func_0x00010007e5dc(&puStack_100);
    lVar9 = 0;
    puVar10 = auStack_f8;
    do {
      if ((&cStack_c9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_128 = FUN_105604db0;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar10;
  puStack_148 = puVar2;
  puStack_140 = puVar7;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar5);
  if (puVar4 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f2de043;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar6 = &UNK_11089f760;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11089f760,&uStack_1a0,puVar3);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar2 = puVar1;
  __Unwind_Resume();
  puStack_1c8 = (undefined1 *)&uStack_1e0;
  pcStack_1a8 = FUN_105604f24;
  if (puVar2 != (undefined *)0x0) {
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    puStack_1c0 = puVar1;
    puStack_1b8 = puVar5;
    pppuStack_1b0 = &ppuStack_130;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_11089f800,&uStack_1e0,puVar6);
    func_0x00010007e5dc(&puStack_1c8);
  }
  return;
}



/* Entry: 105604b80; end: 105604daf;  */

void FUN_105604b80(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar8 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2de043;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f2de043;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_11089f710;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11089f710,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar6 = 0;
    puVar8 = auStack_78;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_105604db0;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar8;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar4 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f2de043;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar5 = &UNK_11089f760;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11089f760,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = puVar3;
  __Unwind_Resume();
  puStack_148 = (undefined1 *)&uStack_160;
  pcStack_128 = FUN_105604f24;
  if (puVar4 != (undefined *)0x0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    puStack_140 = puVar3;
    puStack_138 = puVar1;
    ppuStack_130 = &puStack_b0;
    (**(code **)(**(long **)(puVar4 + 8) + 0x18))
              (*(long **)(puVar4 + 8),&UNK_11089f800,&uStack_160,puVar5);
    func_0x00010007e5dc(&puStack_148);
  }
  return;
}



/* Entry: 105604db0; end: 105604f23;  */

void FUN_105604db0(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2de043;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11089f760;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11089f760,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_105604f24;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_11089f800,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 105604f24; end: 105604f9b;  */

void FUN_105604f24(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_11089f800,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105604f9c; end: 10560500f; -[SCGrapheneRequestWithTimeoutMetric2 init] */

undefined1 * FUN_105604f9c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e95b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105605010; end: 105605087;  */

void FUN_105605010(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_11089f950,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105605088; end: 1056051fb;  */

void FUN_105605088(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *extraout_x8;
  long *plVar5;
  long lVar6;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2de18e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11089f9a0;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11089f9a0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined *)puVar4;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar4;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar1);
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar5 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f2de18e;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_f8,puVar2);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f2de18e;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar2 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&uStack_118,auStack_f8,&lStack_c8,2);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11089f9f0,&uStack_118,param_4);
    puStack_100 = &uStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar6 = 0;
    do {
      if ((&cStack_c9)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(puVar3);
  puVar2 = puVar1;
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar3);
  _objc_release(puVar1);
  __Unwind_Resume(puVar2);
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  *extraout_x8 = &PTR_DAT_11089fa70;
  *(undefined1 *)(extraout_x8 + 3) = 1;
  return;
}



/* Entry: 1056051fc; end: 10560542b;  */

void FUN_1056051fc(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *extraout_x8;
  long lVar2;
  long *plVar3;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar3 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f2de18e;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f2de18e;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_11089f9f0,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar2 = 0;
    do {
      if ((&cStack_49)[lVar2] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar2));
      }
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != -0x30);
  }
  _objc_release(param_3);
  puVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(puVar1);
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  *extraout_x8 = &PTR_DAT_11089fa70;
  *(undefined1 *)(extraout_x8 + 3) = 1;
  return;
}



/* Entry: 10560542c; end: 105605447; +[SCCMapUnderAgeLocationPermissionTrayActionHandler valdiMarshallableObjectDescriptor] */

void FUN_10560542c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11089fa70;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105605448; end: 105605453; +[SCCMapUnderAgeLocationPermissionTrayComponent componentPath] */

undefined ** FUN_105605448(void)

{
  return &PTR____CFConstantStringClassReference_110df1d18;
}



/* Entry: 105605454; end: 105605487; -[SCCMapUnderAgeLocationPermissionTrayComponent initWithViewModel:componentContext:runtime:] */

void FUN_105605454(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e95c8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105605488; end: 1056054d7; -[SCCMapUnderAgeLocationPermissionTrayComponent setViewModel:] */

void FUN_105605488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056054d8; end: 10560551b; -[SCCMapUnderAgeLocationPermissionTrayComponent viewModel] */

void FUN_1056054d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10560551c; end: 105605523; -[SCCMapUnderAgeLocationPermissionTrayFeature__Enum init] */

void FUN_10560551c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 105605524; end: 10560555f; -[SCCMapUnderAgeLocationPermissionTrayContext initWithActionHandler:feature:] */

void FUN_105605524(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e95d0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105605560; end: 10560557f; +[SCCMapUnderAgeLocationPermissionTrayContext valdiMarshallableObjectDescriptor] */

void FUN_105605560(undefined8 *param_1)

{
  *param_1 = &PTR_s_actionHandler_11089fad0;
  param_1[1] = &PTR_DAT_11089fb18;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105605580; end: 10560567f;  */

void FUN_105605580(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126bc3d0;
  _objc_opt_class(PTR_PTR_1126bc3d0);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126bc3d8;
  _objc_retain(param_1);
  _objc_opt_class(puVar2);
  uVar4 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar3 = param_1;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_1);
  if (uVar1 != 0 || uVar3 != 0) {
    func_0x00010c18ce20(param_1);
    func_0x00010c1b06e0(param_1);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105605680; end: 1056056fb;  */

void FUN_105605680(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6df0;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  func_0x00010c1dab80();
  func_0x00010c1dab00(puVar1);
  func_0x00010c160cc0(puVar1);
  func_0x00010c0b2e60(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056056fc; end: 105605777; -[SCMTConfigurationProviderServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056056fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11089fb50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bc3e8;
  _objc_alloc(PTR_PTR_1126bc3e8);
  func_0x00010c001fe0();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112726bc0),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105605778; end: 105605793;  */

void FUN_105605778(void)

{
  _objc_opt_new(PTR_PTR_1126bc3e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105605794; end: 1056057cf; -[SCMTConfigurationProviderServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105605794(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112726bc0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726bc4);
  return;
}



/* Entry: 1056057d0; end: 1056057eb;  */

void FUN_1056057d0(void)

{
  _objc_opt_new(PTR_PTR_1126bc3f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056057ec; end: 1056057fb; -[SCMTParameterServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056057ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726bc8);
  return;
}



/* Entry: 1056057fc; end: 10560588b;  */

void FUN_1056057fc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeffa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10560588c; end: 105605963; -[SCMediaImportServiceProvider _createMediaVideoImportProcessorWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10560588c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126bc408;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_112726bcc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112726bd0;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035200(puVar1,param_2,param_3,lVar3,lVar4);
  _objc_release(param_3);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105605964; end: 105605a77; -[SCMediaImportServiceProvider _createMediaImageImportProcessorWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105605964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126bc410;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + _DAT_112726bcc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112726bd4;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112726bd0;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035220(puVar1,param_2,param_3,lVar3,lVar5,lVar6);
  _objc_release(param_3);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105605a78; end: 105605b17; -[SCMediaImportServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105605a78(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726bd4);
  _objc_destroyWeak(param_1 + _DAT_112726bd0);
  _objc_destroyWeak(param_1 + _DAT_112726bcc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726bd8);
  return;
}



/* Entry: 105605b18; end: 105605d2b; -[SCMediaTranscodingLoggingServiceProvider _createMediaTranscodingLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105605b18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2de389);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,9,0,2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bc420;
  _objc_alloc_init(PTR_PTR_1126bc420);
  lVar8 = (long)_DAT_112726bdc;
  lVar3 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1f440();
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained();
  lVar3 = lVar8;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f440();
  _objc_release(lVar3);
  _objc_release(lVar8);
  puVar6 = PTR_PTR_1126bc428;
  _objc_alloc(PTR_PTR_1126bc428);
  lVar3 = param_1 + _DAT_112726be0;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  lVar8 = param_1 + _DAT_112726be4;
  _objc_loadWeakRetained(lVar8);
  param_1 = param_1 + _DAT_112726be8;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035240(puVar6,param_2,puVar1,lVar4,0,lVar8,puVar2,lVar7,(char)lVar5);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(0);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105605d2c; end: 105605d4b; -[SCMediaTranscodingLoggingServiceProvider notificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105605d2c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112726be4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105605d4c; end: 105605d5f; -[SCMediaTranscodingLoggingServiceProvider setNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105605d4c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112726be4,param_3);
  return;
}



/* Entry: 105605d60; end: 105605dbb; -[SCMediaTranscodingLoggingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105605d60(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726be4);
  _objc_destroyWeak(param_1 + _DAT_112726be8);
  _objc_destroyWeak(param_1 + _DAT_112726be0);
  _objc_destroyWeak(param_1 + _DAT_112726bdc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726bec);
  return;
}



/* Entry: 105605dbc; end: 105605f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105605dbc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar4 + _DAT_112726c18;
    _objc_loadWeakRetained();
  }
  lVar6 = lVar5;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar6;
  func_0x00010bf1f440();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  lVar4 = 0;
  if ((int)lVar1 != 0) {
    lVar5 = param_1 + 0x30;
    _objc_loadWeakRetained();
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + _DAT_112726c1c;
      _objc_loadWeakRetained(lVar6);
    }
    lVar4 = lVar6;
    func_0x00010c279fc0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  lVar5 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bdf4fc0(lVar5,param_2,uVar2,uVar3,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105605f28; end: 105606257; -[SCMediaTranscodingServiceProvider _createTranscodingRequestSchedulerWithMediaTranscodingLogger:parameterProvider:inProgressTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105605f28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2de42f);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x19,0,4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bc438;
  _objc_alloc();
  lVar3 = param_1 + _DAT_112726bf0;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c26a1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112726bf4;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf145c0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112726bf8;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010bf0f880();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112726bfc;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112726c00;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bfe84c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + _DAT_112726c04;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bf45e20();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_112726c08;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c1104a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_112726c0c;
  _objc_loadWeakRetained();
  lVar18 = lVar17;
  func_0x00010bf16560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0274c0(puVar2,param_2,param_3,param_4,lVar4,lVar6,lVar8,lVar10,lVar12,lVar14,lVar16,
                      lVar18);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
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
  puVar19 = PTR_PTR_1126bc440;
  _objc_alloc(PTR_PTR_1126bc440);
  param_1 = param_1 + _DAT_112726c10;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010c0963a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034de0(puVar19,param_2,puVar1,lVar3,puVar2,param_5);
  _objc_release(param_5);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}


