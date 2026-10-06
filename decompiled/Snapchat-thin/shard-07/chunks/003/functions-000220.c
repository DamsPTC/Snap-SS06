/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053eac90; end: 1053ead27; -[SCFeatureSettingsService storeGrantedDevices:] */

void FUN_1053eac90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b8768;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1dac40();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf15d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181680(param_1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ead28; end: 1053ead6b; -[SCFeatureSettingsService grantedContactType] */

undefined4 FUN_1053ead28(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  func_0x00010bfcdbc0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf529e0();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = 2;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1053ead6c; end: 1053ead87; -[SCFeatureSettingsService isLevelV1Granted] */

bool FUN_1053ead6c(int param_1)

{
  func_0x00010bfcdba0();
  return 0 < param_1;
}



/* Entry: 1053ead88; end: 1053eada3; -[SCFeatureSettingsService isLevelV2Granted] */

bool FUN_1053ead88(int param_1)

{
  func_0x00010bfcdba0();
  return 1 < param_1;
}



/* Entry: 1053eada4; end: 1053eb0b7; -[SCFeatureSettingsService grantLevelV2] */

void FUN_1053eada4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126aef90;
  func_0x00010bf63b00(PTR_PTR_1126aef90,param_2,&PTR____CFConstantStringClassReference_110dd8ed8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  func_0x00010bfeea60();
  func_0x00010c1ec620();
  puVar4 = puVar3;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar6 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar5);
  puVar5 = puVar4;
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  puVar6 = puVar4;
  _objc_release(puVar4);
  if (puVar5 == (undefined *)0x0) {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126aef90;
    puVar4 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1894c0(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar6;
  }
  _objc_retain(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  func_0x00010befa120();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8770;
  _objc_opt_new();
  func_0x00010c18c9a0();
  func_0x00010c1dac00(puVar3);
  func_0x00010befa120(puVar2);
  lVar7 = param_1;
  func_0x00010bfcdbc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c140200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      uVar11 = *(undefined8 *)(lVar10 * 8);
      func_0x00010bf70720(uVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf4b900();
      _objc_release(uVar11);
      if (((ulong)puVar6 & 1) == 0) {
        puVar6 = puVar2;
        func_0x00010bf529e0();
        if (puVar6 == (undefined *)0x5) goto LAB_1053eb048;
        func_0x00010c066b00(puVar2);
      }
      lVar10 = lVar10 + 1;
    } while (lVar7 != lVar10);
    lVar7 = lVar8;
    func_0x00010bf52a60();
  }
LAB_1053eb048:
  _objc_release(lVar8);
  func_0x00010c2577a0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c181690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1053eb0b8; end: 1053eb0c3; -[SCFeatureSettingsService clearGrantedDevices] */

void FUN_1053eb0b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c181690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setContactSyncUserLevelPermissio_11263dfc0,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 1053eb0c4; end: 1053eb643; -[SCContactPermissionInfoProviderDefault initWithPreferences:userId:contactPermissionManager:userTrackedLogger:featureSettingsService:grapheneRegistry:lastLoginInfoRepository:applicationLifecycleEvents:userPreferences:autoGrantUserPermFeatureEnabled:shouldRemoveUserLevelPermission:] */

undefined **
FUN_1053eb0c4(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
             undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8,
             undefined *param_9,undefined *param_10,undefined *param_11,undefined *param_12,
             undefined1 param_13)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
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
  puStack_68 = PTR_PTR_1126e81f8;
  ppuVar1 = &puStack_70;
  puStack_70 = param_1;
  _objc_msgSendSuper2(ppuVar1,PTR_s_init_1125d9248);
  if (ppuVar1 == (undefined **)0x0) goto LAB_1053eb5bc;
  _objc_retain(param_3);
  puVar2 = ppuVar1[1];
  ppuVar1[1] = param_3;
  _objc_release(puVar2);
  _objc_retain(param_4);
  puVar2 = ppuVar1[2];
  ppuVar1[2] = param_4;
  _objc_release(puVar2);
  _objc_retain(param_5);
  puVar2 = ppuVar1[3];
  ppuVar1[3] = param_5;
  _objc_release(puVar2);
  _objc_retain(param_6);
  puVar2 = ppuVar1[4];
  ppuVar1[4] = param_6;
  _objc_release(puVar2);
  _objc_retain(param_7);
  puVar2 = ppuVar1[5];
  ppuVar1[5] = param_7;
  _objc_release(puVar2);
  _objc_retain(param_8);
  puVar2 = ppuVar1[6];
  ppuVar1[6] = param_8;
  _objc_release(puVar2);
  _objc_retain(param_9);
  puVar2 = ppuVar1[7];
  ppuVar1[7] = param_9;
  _objc_release(puVar2);
  _objc_retain(param_10);
  puVar2 = ppuVar1[8];
  ppuVar1[8] = param_10;
  _objc_release(puVar2);
  _objc_retain(param_11);
  puVar2 = ppuVar1[9];
  ppuVar1[9] = param_11;
  _objc_release(puVar2);
  *(undefined1 *)(ppuVar1 + 0xe) = param_13;
  puVar2 = param_12;
  _objc_retainBlock();
  puVar8 = ppuVar1[10];
  ppuVar1[10] = puVar2;
  _objc_release(puVar8);
  puVar2 = PTR_PTR_1126ae820;
  _objc_opt_new();
  puVar8 = ppuVar1[0xd];
  ppuVar1[0xd] = puVar2;
  _objc_release(puVar8);
  func_0x00010bdd1720(ppuVar1);
  ppuVar3 = ppuVar1;
  func_0x00010c292480();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = ppuVar1[1];
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010bf1f3c0();
  _objc_release(puVar8);
  if (((ulong)puVar2 & 1) == 0) {
    puVar8 = ppuVar1[5];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010c076a00();
    _objc_release(puVar8);
    if ((int)puVar2 == 0) {
      ppuVar4 = ppuVar1;
      func_0x00010c292480(ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = ppuVar1[1];
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar8;
      func_0x00010bf1f3c0();
      _objc_release(puVar8);
      if (((ulong)puVar2 & 1) == 0) {
        puVar8 = ppuVar1[5];
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar8;
        func_0x00010c0769e0();
        _objc_release(puVar8);
        if ((int)puVar2 != 0) {
          func_0x00010be24580(ppuVar1);
          ppuVar5 = (undefined **)ppuVar1[6];
          func_0x00010c269d40(ppuVar5);
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar5;
          func_0x00010bf49f20();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = &PTR____CFConstantStringClassReference_110dd8fb8;
          FUN_1053eb644(&PTR____CFConstantStringClassReference_110dd8fb8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfec2a0(ppuVar6);
          _objc_release(ppuVar7);
          goto LAB_1053eb374;
        }
      }
    }
    else {
      func_0x00010be24580(ppuVar1);
      ppuVar4 = (undefined **)ppuVar1[6];
      func_0x00010c269d40(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar4;
      func_0x00010bf49f20();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR____CFConstantStringClassReference_110dd8f98;
      FUN_1053eb644(&PTR____CFConstantStringClassReference_110dd8f98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0(ppuVar5);
LAB_1053eb374:
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
    }
    _objc_release(ppuVar4);
  }
  ppuVar4 = ppuVar1;
  func_0x00010bfcdc60();
  if ((int)ppuVar4 == 0) {
    ppuVar4 = ppuVar1;
    func_0x00010bfcdc40();
    puVar8 = ppuVar1[6];
    func_0x00010c269d40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010bf49f20();
    _objc_retainAutoreleasedReturnValue();
    if ((int)ppuVar4 != 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110dd8fb8;
      goto LAB_1053eb4d8;
    }
    ppuVar4 = (undefined **)PTR_PTR_1126b8780;
    func_0x00010c2930c0(PTR_PTR_1126b8780);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar8 = ppuVar1[6];
    func_0x00010c269d40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010bf49f20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110dd8f98;
LAB_1053eb4d8:
    func_0x0001053eb6b8(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfec2a0(puVar2);
  _objc_release(ppuVar4);
  _objc_release(puVar2);
  _objc_release(puVar8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar8 = ppuVar1[0xd];
  func_0x00010bfcdbe0(ppuVar1);
  func_0x00010c0df6e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(puVar8);
  _objc_release(puVar2);
  _objc_initWeak(auStack_78,ppuVar1);
  puVar2 = ppuVar1[0xc];
  ppuVar1[0xc] = (undefined *)0x0;
  _objc_release(puVar2);
  func_0x00010bea2e00(ppuVar1);
  _objc_destroyWeak(auStack_78);
  _objc_release(ppuVar3);
LAB_1053eb5bc:
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
  return ppuVar1;
}



/* Entry: 1053eb644; end: 1053eb72b;  */

void FUN_1053eb644(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8780;
  _objc_retain();
  func_0x00010c293100(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053eb72c; end: 1053eb753; -[SCContactPermissionInfoProviderDefault contactPermissionsStatusObservable] */

void FUN_1053eb72c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053eb754; end: 1053eb7eb; -[SCContactPermissionInfoProviderDefault grantedUserLevelContactAccessV1] */

long FUN_1053eb754(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    lVar1 = param_1;
    func_0x00010c292480(param_1,param_2,&PTR____CFConstantStringClassReference_110dd8ef8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dff20(uVar3,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf1f3c0();
    if ((uVar2 & 1) == 0) {
      func_0x00010bfcdc60(param_1);
    }
    else {
      param_1 = 1;
    }
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
  else {
    param_1 = 1;
  }
  return param_1;
}



/* Entry: 1053eb7ec; end: 1053eb86b; -[SCContactPermissionInfoProviderDefault grantedUserLevelContactAccessV2] */

undefined8 FUN_1053eb7ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    return 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c292480(param_1,param_2,&PTR____CFConstantStringClassReference_110dd8f18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20(uVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1053eb86c; end: 1053eb8c7; -[SCContactPermissionInfoProviderDefault grantedNeededContactPermissions] */

ulong FUN_1053eb86c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x70) == '\x01') {
    uVar1 = *(ulong *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd45e0();
    _objc_release(uVar1);
  }
  else {
    func_0x00010bf4a260();
    uVar2 = (ulong)(param_1 == 3);
  }
  return uVar2;
}



/* Entry: 1053eb8c8; end: 1053eb92f; -[SCContactPermissionInfoProviderDefault grantedNeededContactPermissionsIncludingLimitAccess] */

long FUN_1053eb8c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf49c00();
  if ((lVar2 == 3) || (lVar2 = param_1, func_0x00010bfd8780(), (int)lVar2 != 0)) {
    func_0x00010bfcdc40(param_1);
  }
  else {
    param_1 = 0;
  }
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 1053eb930; end: 1053eb997; -[SCContactPermissionInfoProviderDefault hasLimitedDeviceContactsAccess] */

bool FUN_1053eb930(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf49c00();
    bVar1 = lVar4 == 4;
    _objc_release(lVar3);
  }
  return bVar1;
}



/* Entry: 1053eb998; end: 1053eb99b; -[SCContactPermissionInfoProviderDefault contactPermissionState] */

void FUN_1053eb998(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf68d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__currentContactPermissionRequest_11255b3d0);
  return;
}



/* Entry: 1053eb99c; end: 1053eb9a3; -[SCContactPermissionInfoProviderDefault contactPermissionChangedSinceLastAppSession] */

undefined1 FUN_1053eb99c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x71);
}



/* Entry: 1053eb9a4; end: 1053ebb7f; -[SCContactPermissionInfoProviderDefault updateUserLevelGrantStatus:source:] */

void FUN_1053eb9a4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)param_3 == 0) {
    func_0x00010bf3b500();
  }
  else {
    func_0x00010bfcdb00();
  }
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c292480(param_1,param_2,&PTR____CFConstantStringClassReference_110dd8ef8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,puVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c292480(param_1,param_2,&PTR____CFConstantStringClassReference_110dd8f18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,puVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(puVar2);
  puVar4 = PTR_PTR_1126af6a0;
  _objc_opt_new(PTR_PTR_1126af6a0);
  func_0x00010c206c40();
  func_0x00010c161fe0(puVar4,param_2,param_3 & 0xffffffff);
  func_0x00010c1e4f40(puVar4,param_2,0xb);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bfd8b00();
  func_0x00010c1a63a0(puVar4,param_2,uVar1);
  _objc_release(uVar5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bfcdbe0(param_1);
  func_0x00010c0df6e0(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1053ebb80; end: 1053ebb8f; -[SCContactPermissionInfoProviderDefault deniedDeviceLevelContactsPermissionDate] */

void FUN_1053ebb80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__1126159e0,
             &PTR____CFConstantStringClassReference_110dd8f38);
  return;
}



/* Entry: 1053ebb90; end: 1053ebb9f; -[SCContactPermissionInfoProviderDefault setDeniedDeviceLevelContactsPermissionDate:] */

void FUN_1053ebb90(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKey__112651b80,param_3,
             &PTR____CFConstantStringClassReference_110dd8f38);
  return;
}



/* Entry: 1053ebba0; end: 1053ebbd7; -[SCContactPermissionInfoProviderDefault userIdSpecificKeyForKey:] */

void FUN_1053ebba0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd4898);
  return;
}



/* Entry: 1053ebbd8; end: 1053ebcb3; -[SCContactPermissionInfoProviderDefault _currentContactPermissionRequestState] */

undefined8 FUN_1053ebbd8(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfd4a00();
  _objc_release(uVar1);
  if ((int)uVar4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bfd6380();
    if ((int)uVar4 == 0) {
      _objc_release(uVar1);
    }
    else {
      uVar2 = param_1;
      func_0x00010bfcdc40();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        return 1;
      }
    }
    uVar3 = *(ulong *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfd6380();
    _objc_release(uVar3);
    if ((uVar2 & 1) == 0) {
      func_0x00010bfcdc40();
      uVar4 = 2;
      if ((int)param_1 != 0) {
        uVar4 = 3;
      }
    }
    else {
      uVar4 = 4;
    }
  }
  return uVar4;
}



/* Entry: 1053ebcb4; end: 1053ebceb; -[SCContactPermissionInfoProviderDefault _grantUserLevelPermissionFromPersistenceWithKey:] */

void FUN_1053ebcb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 8),param_2,PTR____kCFBooleanTrue_11034ab68,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bee19d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSyncToggle__112596018,1);
  return;
}



/* Entry: 1053ebcec; end: 1053ebd4f; -[SCContactPermissionInfoProviderDefault _setContactPermissionsChangedSinceLastAppSession] */

void FUN_1053ebcec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010be46e40();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf49c00();
  _objc_release(lVar2);
  if (lVar1 != lVar3) {
    *(undefined1 *)(param_1 + 0x71) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be730f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__persistCurrentContactPermission_11257a5d8);
  return;
}



/* Entry: 1053ebd50; end: 1053ebdd3; -[SCContactPermissionInfoProviderDefault _lastAppSessionContactPermission] */

long FUN_1053ebd50(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0dff20(lVar1,param_2,&PTR____CFConstantStringClassReference_110dd8f58);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf49c00();
    _objc_release(lVar2);
  }
  else {
    lVar3 = lVar1;
    func_0x00010c067ec0(lVar1);
    lVar3 = (long)(int)lVar3;
  }
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 1053ebdd4; end: 1053ebe53; -[SCContactPermissionInfoProviderDefault _persistCurrentContactPermission] */

void FUN_1053ebdd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf49c00();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110dd8f58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1053ebe54; end: 1053ebe77; -[SCContactPermissionInfoProviderDefault _autoGrantUserPermAndSetupTaskWhenEligible] */

void FUN_1053ebe54(undefined8 param_1)

{
  func_0x00010be245a0();
                    /* WARNING: Could not recover jumptable at 0x00010beb0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupTaskWhenAppWillResignActiv_112589b38);
  return;
}



/* Entry: 1053ebe78; end: 1053ebf6b; -[SCContactPermissionInfoProviderDefault _grantUserPermWhenTaskWasSetupAndOSPermGranted] */

void FUN_1053ebe78(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined **)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c22dfe0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfd45e0();
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((int)uVar4 == 0) {
      return;
    }
    func_0x00010c28bb20(param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200000();
    _objc_release(uVar4);
    puVar1 = PTR_PTR_1126b8778;
    _objc_opt_new(PTR_PTR_1126b8778);
    FUN_1053ed12c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ebf6c; end: 1053ec05f; -[SCContactPermissionInfoProviderDefault _setupTaskWhenAppWillResignActiveIfNecessary] */

void FUN_1053ebf6c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = param_1;
  func_0x00010bf4a260();
  if (lVar1 == 1) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c2a6a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar3 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1053ec060; end: 1053ec08b;  */

void FUN_1053ec060(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaab20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053ec08c; end: 1053ec107; -[SCContactPermissionInfoProviderDefault _setupAutoGrantTaskToStorage] */

void FUN_1053ec08c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = *(long *)(param_1 + 0x50);
  (**(code **)(lVar1 + 0x10))();
  if ((int)lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200000();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b8778;
    _objc_opt_new(PTR_PTR_1126b8778);
    FUN_1053ed0b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1053ec108; end: 1053ec10b; -[SCContactPermissionInfoProviderDefault _updateSyncToggle:] */

void FUN_1053ec108(void)

{
  return;
}



/* Entry: 1053ec10c; end: 1053ec1bf; -[SCContactPermissionInfoProviderDefault .cxx_destruct] */

void FUN_1053ec10c(long param_1)

{
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



/* Entry: 1053ec1c0; end: 1053ec227; -[SCContactPermissionManagerDefault init] */

undefined8 * FUN_1053ec1c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e8200;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_38,puVar1);
    uVar2 = puVar1[5];
    puVar1[5] = 0;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_38);
  }
  return puVar1;
}



/* Entry: 1053ec228; end: 1053ec27f; -[SCContactPermissionManagerDefault initWithUserNotTrackedLogger:] */

long FUN_1053ec228(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_3;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1053ec280; end: 1053ec307; -[SCContactPermissionManagerDefault initWithUserTrackedLogger:lastLoginInfoRepository:] */

long FUN_1053ec280(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_4;
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1053ec308; end: 1053ec32f; -[SCContactPermissionManagerDefault hasBeenPromptedForDeviceContactsAccess] */

bool FUN_1053ec308(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
  func_0x00010bf10fe0(PTR__OBJC_CLASS___CNContactStore_1126b1900,param_2,0);
  return puVar1 != (undefined *)0x0;
}



/* Entry: 1053ec330; end: 1053ec357; -[SCContactPermissionManagerDefault hasDeniedDeviceContactsAccess] */

bool FUN_1053ec330(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
  func_0x00010bf10fe0(PTR__OBJC_CLASS___CNContactStore_1126b1900,param_2,0);
  return puVar1 == (undefined *)0x2;
}



/* Entry: 1053ec358; end: 1053ec37f; -[SCContactPermissionManagerDefault hasAuthorizedDeviceContactsAccess] */

bool FUN_1053ec358(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
  func_0x00010bf10fe0(PTR__OBJC_CLASS___CNContactStore_1126b1900,param_2,0);
  return puVar1 == (undefined *)0x3;
}



/* Entry: 1053ec380; end: 1053ec38f; -[SCContactPermissionManagerDefault contactAuthorizationStatus] */

void FUN_1053ec380(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf10ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CNContactStore_1126b1900,
             PTR_s_authorizationStatusForEntityType_1125a1da0,0);
  return;
}



/* Entry: 1053ec390; end: 1053ec397; -[SCContactPermissionManagerDefault isContactPermissionRequestEnabled] */

undefined8 FUN_1053ec390(void)

{
  return 1;
}



/* Entry: 1053ec398; end: 1053ec49b; -[SCContactPermissionManagerDefault requestAddressBookAccessWithSource:completionHandler:] */

void FUN_1053ec398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c06f300();
  if ((int)uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
    _objc_alloc_init(PTR__OBJC_CLASS___CNContactStore_1126b1900);
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_48,auStack_38);
    uStack_40 = param_3;
    _objc_retain(param_4);
    func_0x00010c134760(puVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1053ec49c; end: 1053ec4fb;  */

void FUN_1053ec49c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be90880();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053ec4fc; end: 1053ec697; -[SCContactPermissionManagerDefault _requestAddressBookAccessCompletedWithGranted:error:source:completionHandler:] */

void FUN_1053ec4fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010bf49c00();
  puVar1 = PTR_PTR_1126b6df0;
  _objc_opt_new(PTR_PTR_1126b6df0);
  func_0x00010c1dab80();
  func_0x00010c1dab00(puVar1);
  func_0x00010c160cc0(puVar1);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    puVar4 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b29e0();
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126af6a0;
    _objc_opt_new(PTR_PTR_1126af6a0);
    func_0x00010c206c40();
    func_0x00010c161fe0(puVar4);
    func_0x00010c1e4f40(puVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd8b00();
    func_0x00010c1a63a0(puVar4);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar3);
  }
  _objc_release(puVar4);
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,param_3,param_4);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053ec698; end: 1053ec6eb; -[SCContactPermissionManagerDefault .cxx_destruct] */

void FUN_1053ec698(long param_1)

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



/* Entry: 1053ec6ec; end: 1053ec7db; -[SCUnauthenticatedContactPermissionInfoServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053ec6ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar1 = param_1 + _DAT_112722d58;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1053ec7dc;
  puStack_50 = &UNK_110884ca8;
  puVar3 = PTR_PTR_1126ae720;
  lStack_48 = lVar2;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b8790;
  _objc_alloc(PTR_PTR_1126b8790);
  func_0x00010c002460();
  func_0x00010bf9d660(*(undefined8 *)(param_1 + _DAT_112722d5c),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  return;
}



/* Entry: 1053ec7dc; end: 1053ec80b;  */

void FUN_1053ec7dc(void)

{
  _objc_alloc(PTR_PTR_1126b8788);
  func_0x00010c05c7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053ec80c; end: 1053ec8cb; -[SCUnauthenticatedContactPermissionInfoServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053ec80c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112722d5c,0);
  _objc_destroyWeak(param_1 + _DAT_112722d58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112722d60);
  return;
}



/* Entry: 1053ec8cc; end: 1053ecb87; -[SCUserStateInfoServiceProvider _createContactPermissionInfoProviderWithLogger:lazyPermissionManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053ec8cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
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
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lVar18 = (long)_DAT_112722d6c;
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar1 = lVar18;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  puVar2 = PTR_PTR_1126b87a0;
  _objc_alloc();
  lVar18 = param_1 + _DAT_112722d70;
  _objc_loadWeakRetained();
  lVar3 = lVar18;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112722d74;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112722d78;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112722d7c;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112722d68;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c089460();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112722d80;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112722d84;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1053ecb88;
  puStack_78 = &UNK_110848868;
  lStack_70 = lVar1;
  func_0x00010beb53c0();
  func_0x00010c038300(puVar2,param_2,lVar4,lVar7,param_4,param_3,lVar9,lVar11,lVar13,lVar15,lVar17,
                      &puStack_90,(char)param_1);
  _objc_release(param_4);
  _objc_release(param_3);
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
  _objc_release(lVar18);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053ecb88; end: 1053ecc2f;  */

undefined1 FUN_1053ecb88(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  lVar2 = lRam00000001136bb9d8;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1053ecd28;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar4;
  _objc_retain(uVar4);
  uVar3 = uVar4;
  if (lVar2 != -1) {
    func_0x00010002a2fc(0x1136bb9d8,&puStack_48);
    uVar3 = uStack_28;
  }
  uVar1 = uRam00000001136bb9d0;
  _objc_release(uVar3);
  _objc_release(uVar4);
  return uVar1;
}



/* Entry: 1053ecc30; end: 1053ecc8f; -[SCUserStateInfoServiceProvider _shouldRemoveUserLevelPermission] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1053ecc30(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112722d88;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010097cf2c();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 1053ecc90; end: 1053ecd27; -[SCUserStateInfoServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053ecc90(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112722d88);
  _objc_destroyWeak(param_1 + _DAT_112722d84);
  _objc_destroyWeak(param_1 + _DAT_112722d80);
  _objc_destroyWeak(param_1 + _DAT_112722d6c);
  _objc_destroyWeak(param_1 + _DAT_112722d68);
  _objc_destroyWeak(param_1 + _DAT_112722d7c);
  _objc_destroyWeak(param_1 + _DAT_112722d64);
  _objc_destroyWeak(param_1 + _DAT_112722d78);
  _objc_destroyWeak(param_1 + _DAT_112722d70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112722d74);
  return;
}



/* Entry: 1053ecd28; end: 1053ecd57;  */

void FUN_1053ecd28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd8ff8,0,0);
  uRam00000001136bb9d0 = (char)uVar1;
  return;
}



/* Entry: 1053ecd58; end: 1053ecd83; +[SCGrapheneContactPermissionMetric reprompted] */

void FUN_1053ecd58(void)

{
  _objc_alloc(PTR_PTR_1126b8780);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053ecd84; end: 1053ecdaf; +[SCGrapheneContactPermissionMetric notReprompted] */

void FUN_1053ecd84(void)

{
  _objc_alloc(PTR_PTR_1126b8780);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053ecdb0; end: 1053ecddb; +[SCGrapheneContactPermissionMetric userPermPersist] */

void FUN_1053ecdb0(void)

{
  _objc_alloc(PTR_PTR_1126b8780);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053ecddc; end: 1053ece07; +[SCGrapheneContactPermissionMetric userPermGranted] */

void FUN_1053ecddc(void)

{
  _objc_alloc(PTR_PTR_1126b8780);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053ece08; end: 1053ece33; +[SCGrapheneContactPermissionMetric userPermDenied] */

void FUN_1053ece08(void)

{
  _objc_alloc(PTR_PTR_1126b8780);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053ece34; end: 1053eced3; -[SCGrapheneContactPermissionMetric description] */

void FUN_1053ece34(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd9018;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dd9018,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e8208;
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



/* Entry: 1053eced4; end: 1053ed03f; -[SCGrapheneRegistry contactPermissionGraphene] */

void FUN_1053eced4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1053ecf5c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bb9e8 != -1) {
    func_0x00010002a2fc(0x1136bb9e8,&puStack_48);
  }
  uVar1 = uRam00000001136bb9e0;
  _objc_retain(uRam00000001136bb9e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053ed040; end: 1053ed0b3; -[SCGrapheneContactPermAutoGrantMetric2 init] */

undefined1 * FUN_1053ed040(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8210;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1053ed0b4; end: 1053ed12b;  */

void FUN_1053ed0b4(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110884d38,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1053ed12c; end: 1053ed1a3;  */

void FUN_1053ed12c(long param_1,undefined8 param_2)

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
              (*(long **)(param_1 + 8),&UNK_110884d88,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1053ed1a4; end: 1053ed217; -[SCUnauthenticatedContactPermissionInfoServices initWithContactPermissionManager:] */

undefined1 * FUN_1053ed1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8218;
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



/* Entry: 1053ed218; end: 1053ed21f; -[SCUnauthenticatedContactPermissionInfoServices contactPermissionManager] */

undefined8 FUN_1053ed218(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053ed220; end: 1053ed24f; -[SCUnauthenticatedContactPermissionInfoServices setContactPermissionManager:] */

void FUN_1053ed220(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1053ed250; end: 1053ed25b; -[SCUnauthenticatedContactPermissionInfoServices .cxx_destruct] */

void FUN_1053ed250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053ed25c; end: 1053ed2d7;  */

undefined * FUN_1053ed25c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bb9f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dd90d8,
                        &UNK_10dda8a5c,&UNK_10dda8a88,3,FUN_1053ed2d8,0);
    do {
      if (puRam00000001136bb9f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bb9f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bb9f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bb9f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bb9f0;
}



/* Entry: 1053ed2d8; end: 1053ed2e3;  */

bool FUN_1053ed2d8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1053ed2e4; end: 1053ed34b; +[SCContactSyncUserLevelPermissionGrantedDevices descriptor] */

void FUN_1053ed2e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb9f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a34020,
                        &PTR____CFConstantStringClassReference_110dd90f8,
                        &PTR_s_com_snapchat_activation_1130d4e88,&PTR_s_permissionsArray_1130d4ea0,1
                        ,0x10,0x1c);
    puRam00000001136bb9f8 = puVar1;
  }
  return;
}



/* Entry: 1053ed34c; end: 1053ed3b3; +[SCContactSyncDevicePermissionTypePair descriptor] */

void FUN_1053ed34c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bba00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a34070,
                        &PTR____CFConstantStringClassReference_110dd9118,
                        &PTR_s_com_snapchat_activation_1130d4e88,&PTR_s_deviceId_1130d4ec0,2,0x10,
                        0x1c);
    puRam00000001136bba00 = puVar1;
  }
  return;
}



/* Entry: 1053ed3b4; end: 1053ed427; -[SCGrapheneFollowCreatorsMetric2 init] */

undefined1 * FUN_1053ed3b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8220;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1053ed428; end: 1053ed59b;  */

long ** FUN_1053ed428(long param_1,long **param_2,undefined1 *param_3)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *unaff_x22;
  long alStack_f0 [3];
  long *plStack_d8;
  long **applStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar9 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = param_2;
  puVar8 = param_3;
  _objc_retain(param_2);
  iVar7 = (int)pplVar4;
  plVar10 = (long *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long **)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    iVar7 = 0x10884dd8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110884dd8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar8 = (undefined1 *)puVar9;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = (undefined1 *)puVar9;
      unaff_x22 = &uStack_80;
    }
  }
  pplVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_2);
    pplVar5 = pplVar4;
    __Unwind_Resume();
    pcStack_88 = FUN_1053ed59c;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar6 = (long **)0x0;
    puStack_b0 = (undefined1 *)unaff_x22;
    plStack_a8 = plVar10;
    pplStack_a0 = pplVar4;
    pplStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    if (pplVar5 != (long **)0x0) {
      plVar10 = pplVar5[1];
      pcVar3 = "true";
      if (iVar7 == 0) {
        pcVar3 = "false";
      }
      func_0x00010002b838(applStack_d0,pcVar3);
      alStack_f0[0] = 0;
      alStack_f0[1] = 0;
      alStack_f0[2] = 0;
      func_0x00010007e1e8(alStack_f0,applStack_d0,&lStack_b8,1);
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110884e28,alStack_f0,puVar8);
      pplVar6 = &plStack_d8;
      plStack_d8 = alStack_f0;
      func_0x00010007e5dc();
      plVar10 = alStack_f0;
      if (cStack_b9 < '\0') {
        pplVar6 = applStack_d0[0];
        __ZdlPv();
        plVar10 = alStack_f0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      plStack_d8 = plVar10;
      func_0x00010007e5dc(&plStack_d8);
      if (cStack_b9 < '\0') {
        __ZdlPv(applStack_d0[0]);
      }
      __Unwind_Resume(pplVar6);
      if (pplRam00000001136bba08 == (long **)0x0) {
        pplVar4 = (long **)PTR_PTR_1126ae980;
        func_0x00010bf00e00();
        do {
          if (pplRam00000001136bba08 != (long **)0x0) {
            ClearExclusiveLocal();
            _objc_release();
            return pplRam00000001136bba08;
          }
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x1136bba08,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            pplRam00000001136bba08 = pplVar4;
          }
        } while (cVar1 != '\0');
      }
      return pplRam00000001136bba08;
    }
    return pplVar6;
  }
  return pplVar4;
}



/* Entry: 1053ed59c; end: 1053ed6b3;  */

undefined1 ** FUN_1053ed59c(long param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  long *plVar5;
  undefined8 *unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = (undefined1 **)0x0;
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110884e28,&uStack_70,param_3);
    ppuVar4 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar4 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puStack_58 = (undefined1 *)unaff_x21;
    func_0x00010007e5dc(&puStack_58);
    if (cStack_39 < '\0') {
      __ZdlPv(appuStack_50[0]);
    }
    __Unwind_Resume(ppuVar4);
    if (ppuRam00000001136bba08 == (undefined1 **)0x0) {
      ppuVar4 = (undefined1 **)PTR_PTR_1126ae980;
      func_0x00010bf00e00();
      do {
        if (ppuRam00000001136bba08 != (undefined1 **)0x0) {
          ClearExclusiveLocal();
          _objc_release();
          return ppuRam00000001136bba08;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(0x1136bba08,0x10);
        if (bVar3) {
          cVar2 = ExclusiveMonitorsStatus();
          ppuRam00000001136bba08 = ppuVar4;
        }
      } while (cVar2 != '\0');
    }
    return ppuRam00000001136bba08;
  }
  return ppuVar4;
}



/* Entry: 1053ed6b4; end: 1053ed72f;  */

undefined * FUN_1053ed6b4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bba08 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110dd9138,
                        &UNK_10dda8a94,&UNK_10dda8c5c,0x1e,FUN_1053ed730,0);
    do {
      if (puRam00000001136bba08 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bba08;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bba08,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bba08 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bba08;
}



/* Entry: 1053ed730; end: 1053ed73b;  */

bool FUN_1053ed730(uint param_1)

{
  return param_1 < 0x1e;
}



/* Entry: 1053ed73c; end: 1053ed7a3; +[SCContentCreatorsPayloadPbContentCreatorsPayload descriptor] */

void FUN_1053ed73c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bba10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a34160,
                        &PTR____CFConstantStringClassReference_110dd9158,
                        &PTR_s_com_snapchat_activation_1130d4f00,&PTR_s_creatorsArray_1130d4f18,1,
                        0x10,0x1c);
    puRam00000001136bba10 = puVar1;
  }
  return;
}



/* Entry: 1053ed7a4; end: 1053ed81f; +[SCContentCreatorsPayloadPbContentCreator descriptor] */

undefined * FUN_1053ed7a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bba18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a341b0,
                        &PTR____CFConstantStringClassReference_110dd9178,
                        &PTR_s_com_snapchat_activation_1130d4f00,&PTR_s_userId_1130d4f38,6,0x28,0x1c
                       );
    func_0x00010c2289e0();
    puRam00000001136bba18 = puVar1;
  }
  return puRam00000001136bba18;
}



/* Entry: 1053ed820; end: 1053eda67; -[SCDefaultPostRegistrationLogger initWithLogger:deviceInfoProvider:grapheneRegistry:registrationFlowUUIDService:authenticationSessionInfoProvider:loginInfoRepository:registrationLastPageService:registrationSourceService:] */

undefined8 *
FUN_1053ed820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
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
  puStack_68 = PTR_PTR_1126e8228;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[1];
    puVar2[1] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[2];
    puVar2[2] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[3];
    puVar2[3] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[4];
    puVar2[4] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[5];
    puVar2[5] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[6];
    puVar2[6] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[7];
    puVar2[7] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[8];
    puVar2[8] = param_10;
    _objc_release(uVar3);
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar1 = ppuVar5;
    }
    _objc_retain(ppuVar1);
    uVar3 = puVar2[9];
    puVar2[9] = ppuVar1;
    _objc_release(uVar3);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
  }
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



/* Entry: 1053eda68; end: 1053edc3f; -[SCDefaultPostRegistrationLogger logPageView:] */

void FUN_1053eda68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b79b8;
  _objc_opt_new(PTR_PTR_1126b79b8);
  lVar2 = param_1;
  func_0x00010bfc7500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c1d7e80(puVar1,param_2,param_3);
  lVar2 = param_1;
  func_0x00010beda4a0(param_1,param_2,param_3);
  func_0x00010c1d81a0(puVar1,param_2,lVar2);
  func_0x00010c0ada00(param_1,param_2,puVar1);
  puVar3 = PTR_PTR_1126af378;
  func_0x00010c0b4320(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be62ec0(param_1);
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110daedb8,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  func_0x00010bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110daedd8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c127d40();
  func_0x00010bb09798();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd33d8,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c0b4300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053edc40; end: 1053edcb3; -[SCDefaultPostRegistrationLogger _updateLastPage:] */

undefined8 FUN_1053edc40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0898c0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8460();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1053edcb4; end: 1053edd73; -[SCDefaultPostRegistrationLogger logRegistrationFlowEvent:pageType:] */

void FUN_1053edcb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b79b0;
  _objc_opt_new(PTR_PTR_1126b79b0);
  uVar2 = param_1;
  func_0x00010bfc7500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126af388;
  func_0x00010bf22380(PTR_PTR_1126af388);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ada20(puVar1,param_2,puVar3);
  func_0x00010c197620(puVar1,param_2,param_3);
  func_0x00010c1d7e80(puVar1,param_2,param_4);
  func_0x00010c0ada00(param_1,param_2,puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053edd74; end: 1053ede1b; -[SCDefaultPostRegistrationLogger logUserSetSearchability:] */

void FUN_1053edd74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b87b0;
  _objc_opt_new(PTR_PTR_1126b87b0);
  uVar2 = param_1;
  func_0x00010bfc7500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1f8d20(puVar1,param_2,param_3);
  func_0x00010c0ada00(param_1,param_2,puVar1);
  puVar3 = PTR_PTR_1126af378;
  func_0x00010c23c4e0(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be54780(param_1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ede1c; end: 1053edfb7; -[SCDefaultPostRegistrationLogger logUserGrantContactPermission:promptLevel:] */

void FUN_1053ede1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b87b8;
  _objc_opt_new(PTR_PTR_1126b87b8);
  lVar2 = param_1;
  func_0x00010bfc7500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c1a4200(puVar1,param_2,param_3);
  func_0x00010c1e4f40(puVar1,param_2,param_4);
  func_0x00010c0ada00(param_1,param_2,puVar1);
  puVar3 = PTR_PTR_1126af378;
  func_0x00010c23c460(PTR_PTR_1126af378);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd9198,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c127d40();
  func_0x00010bb09798();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar3 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110dd33d8,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010c0b4300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053edfb8; end: 1053edfc3; -[SCDefaultPostRegistrationLogger logUserFindFriends:] */

void FUN_1053edfb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5a4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logUserFindFriends_state_errorT_1125742c8,param_3,2,0);
  return;
}



/* Entry: 1053edfc4; end: 1053ee06b; -[SCDefaultPostRegistrationLogger logUserAddFriends:] */

void FUN_1053edfc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b87c0;
  _objc_opt_new(PTR_PTR_1126b87c0);
  uVar2 = param_1;
  func_0x00010bfc7500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126af388;
  func_0x00010bf22380(PTR_PTR_1126af388);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ada20(puVar1,param_2,puVar3);
  func_0x00010c1a0760(puVar1,param_2,param_3);
  func_0x00010c0ada00(param_1,param_2,puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ee06c; end: 1053ee10f; -[SCDefaultPostRegistrationLogger logResponseSetSearchability:success:searchable:] */

void FUN_1053ee06c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b87c8;
  _objc_opt_new(PTR_PTR_1126b87c8);
  uVar2 = param_1;
  func_0x00010bfc7500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1b92e0(puVar1,param_2,param_3);
  func_0x00010c20f8a0(puVar1,param_2,param_4);
  func_0x00010c1f8d20(puVar1,param_2,param_5);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ee110; end: 1053ee1b7; -[SCDefaultPostRegistrationLogger logResponseFindFriendsRequestWithSource:] */

void FUN_1053ee110(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010be5a4a0(param_1,param_2,0,-(ulong)(param_3 != 0),0);
  puVar1 = PTR_PTR_1126b87d0;
  func_0x00010c125900(PTR_PTR_1126b87d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3c68(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  func_0x00010be57d80(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1053ee1b8; end: 1053ee24b; -[SCDefaultPostRegistrationLogger logResponseFindFriendsRequestRetryWithSource:] */

void FUN_1053ee1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b87d0;
  func_0x00010c1258e0(PTR_PTR_1126b87d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3c68(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_3);
  func_0x00010be57d80(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1053ee24c; end: 1053ee363; -[SCDefaultPostRegistrationLogger logResponseFindFriendsSuccessWithSource:isShowingSuggestions:] */

void FUN_1053ee24c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b87d8;
  _objc_opt_new(PTR_PTR_1126b87d8);
  uVar2 = param_1;
  func_0x00010bfc7500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1b92e0(puVar1,param_2,5);
  func_0x00010c20f8a0(puVar1,param_2,1);
  func_0x00010c0ada00(param_1,param_2,puVar1);
  puVar3 = PTR_PTR_1126b87d0;
  if ((param_4 & 1) == 0) {
    func_0x00010c125920(PTR_PTR_1126b87d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c1258a0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010b9b3c68(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_3);
  func_0x00010be57d80(param_1,param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ee364; end: 1053ee4d7; -[SCDefaultPostRegistrationLogger logResponseFindFriendsFailureWithSource:errorType:blizzardErrorType:] */

void FUN_1053ee364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b87d8;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x00010bfc7500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1b92e0(puVar1,param_2,5);
  func_0x00010c20f8a0(puVar1,param_2,0);
  func_0x00010c0ada00(param_1,param_2,puVar1);
  func_0x00010be5a4a0(param_1,param_2,0,3,param_5);
  _objc_release(param_5);
  puVar3 = PTR_PTR_1126b87d0;
  func_0x00010c1258c0(PTR_PTR_1126b87d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3c28(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd6078,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_4);
  func_0x00010b9b3c68(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dae8d8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(param_3);
  func_0x00010be57d80(param_1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ee4d8; end: 1053ee56b; -[SCDefaultPostRegistrationLogger logResponseAddFriends:success:] */

void FUN_1053ee4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b87e0;
  _objc_opt_new(PTR_PTR_1126b87e0);
  uVar2 = param_1;
  func_0x00010bfc7500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1b92e0(puVar1,param_2,param_3);
  func_0x00010c20f8a0(puVar1,param_2,param_4);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ee56c; end: 1053ee5e7; -[SCDefaultPostRegistrationLogger logRegistrationUserContactPermissionGrantWithVersion:] */

void FUN_1053ee56c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b87e8;
  _objc_opt_new(PTR_PTR_1126b87e8);
  uVar2 = param_1;
  func_0x00010bfc7500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1e99a0(puVar1,param_2,param_3);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ee5e8; end: 1053ee663; -[SCDefaultPostRegistrationLogger logRegistrationUserContactPermissionDenyWithVersion:] */

void FUN_1053ee5e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b87f0;
  _objc_opt_new(PTR_PTR_1126b87f0);
  uVar2 = param_1;
  func_0x00010bfc7500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1e99a0(puVar1,param_2,param_3);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ee664; end: 1053ee6f7; -[SCDefaultPostRegistrationLogger logRegistrationUserContactPageviewWithVersion:verificationType:] */

void FUN_1053ee664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b87f8;
  _objc_opt_new(PTR_PTR_1126b87f8);
  uVar2 = param_1;
  func_0x00010bfc7500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c220cc0(puVar1,param_2,param_4);
  func_0x00010c1e99a0(puVar1,param_2,param_3);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ee6f8; end: 1053ee77f; -[SCDefaultPostRegistrationLogger logRegistrationUserContactSkipWithPageType:] */

void FUN_1053ee6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b8800;
  _objc_opt_new(PTR_PTR_1126b8800);
  uVar2 = param_1;
  func_0x00010bfc7500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1e99a0(puVar1,param_2,1);
  func_0x00010c1d7e80(puVar1,param_2,param_3);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ee780; end: 1053ee8b3; -[SCDefaultPostRegistrationLogger logRegistrationUserContactFindSuccessWithVersion:contactFoundCount:contactInviteCount:friendAddCount:recommendedCount:recommendedAddCount:verificationType:contactBookSize:waitTimeSec:] */

void FUN_1053ee780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b8808;
  _objc_opt_new(PTR_PTR_1126b8808);
  uVar2 = param_2;
  func_0x00010bfc7500(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_3,uVar2);
  _objc_release(uVar2);
  func_0x00010c181320(puVar1,param_3,param_5);
  func_0x00010c19f9e0(puVar1,param_3,param_7);
  func_0x00010c181380(puVar1,param_3,param_6);
  func_0x00010c1e8cc0(puVar1,param_3,param_8);
  func_0x00010c1e8ca0(puVar1,param_3,param_9);
  func_0x00010c220cc0(puVar1,param_3,param_10);
  func_0x00010c1e99a0(puVar1,param_3,param_4);
  func_0x00010c1fd2e0(puVar1,param_3,1);
  func_0x00010c181240(puVar1,param_3,param_11);
  func_0x00010c224520(param_1,puVar1);
  func_0x00010c0ada00(param_2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ee8b4; end: 1053ee97f; -[SCDefaultPostRegistrationLogger logRegistrationUserContactSkipDialogWithContactFoundCount:recommendedContactCount:userConfirmedSkip:verificationType:pageType:] */

void FUN_1053ee8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b8810;
  _objc_opt_new(PTR_PTR_1126b8810);
  uVar2 = param_1;
  func_0x00010bfc7500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0c20(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c18d420(puVar1,param_2,param_5);
  func_0x00010c181320(puVar1,param_2,param_3);
  func_0x00010c1e8cc0(puVar1,param_2,param_4);
  func_0x00010c220cc0(puVar1,param_2,param_6);
  func_0x00010c1d7e80(puVar1,param_2,param_7);
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ee980; end: 1053ee9c3; -[SCDefaultPostRegistrationLogger logRegistrationContactsInvitesPageView] */

void FUN_1053ee980(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8818;
  _objc_opt_new(PTR_PTR_1126b8818);
  func_0x00010c206c40();
  func_0x00010c0ada00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ee9c4; end: 1053eea7b; -[SCDefaultPostRegistrationLogger logRegistrationContactsInvitesPageEndWithTimeSpent:contactsAvailable:contactsSeen:contactsSelected:contactsInviteShareAttempts:] */

void FUN_1053ee9c4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8820;
  _objc_opt_new(PTR_PTR_1126b8820);
  func_0x00010c206c40();
  func_0x00010c215160(puVar1,param_3,(long)(param_1 * 1000.0));
  func_0x00010c1817c0(puVar1,param_3,param_4);
  func_0x00010c181880(puVar1,param_3,param_5);
  func_0x00010c1818a0(puVar1,param_3,param_6);
  func_0x00010c181860(puVar1,param_3,param_7);
  func_0x00010c0ada00(param_2,param_3,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053eea7c; end: 1053eeb13; -[SCDefaultPostRegistrationLogger logRegistrationFindFriendsSuggestionRenderLatency:] */

void FUN_1053eea7c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b87d0;
  func_0x00010c125880(PTR_PTR_1126b87d0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c125860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


