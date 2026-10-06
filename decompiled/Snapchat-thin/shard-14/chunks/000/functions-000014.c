/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af19270; end: 10af19283; +[SCCHomeProfileUpsellCardData valdiMarshallableObjectDescriptor] */

void FUN_10af19270(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c91348;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af19284; end: 10af192bf; -[SCCHomeProfileViewModel initWithIsSelf:userId:displayName:] */

void FUN_10af19284(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112701f48;
  uStack_20 = param_1;
  func_0x00010af19844();
  func_0x00010af19830(&uStack_20);
  return;
}



/* Entry: 10af192c0; end: 10af192d3; +[SCCHomeProfileViewModel valdiMarshallableObjectDescriptor] */

void FUN_10af192c0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c913c0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af192d4; end: 10af193bf; -[SCCPlacesHomeLocationEditorContext initWithBlizzardLogger:homeSettingsMetrics:dismissPage:onTapSave:onHomeModelUpdated:] */

undefined8 * FUN_10af192d4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(in_x6);
  _objc_retain(in_x5);
  func_0x00010af198d4();
  _objc_retain();
  func_0x00010af198c4();
  _objc_retainBlock();
  func_0x00010af198a8();
  _objc_retainBlock();
  _objc_release(in_x6);
  puStack_58 = PTR_PTR_112701f50;
  uStack_60 = param_1;
  func_0x00010af19844();
  puVar1 = &uStack_60;
  func_0x00010af19830(puVar1);
  func_0x00010af19898();
  func_0x00010af19850();
  func_0x00010af198a8();
  _objc_release(in_x5);
  func_0x00010af198cc();
  return puVar1;
}



/* Entry: 10af193c0; end: 10af193e3; +[SCCPlacesHomeLocationEditorContext valdiMarshallableObjectDescriptor] */

void FUN_10af193c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c91480;
  param_1[1] = &PTR_s_SCValdiViewFactory_110c91588;
  param_1[2] = &PTR_DAT_110c91450;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af193e4; end: 10af1940b;  */

undefined8 FUN_10af193e4(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2));
  return 0;
}



/* Entry: 10af1940c; end: 10af1945b;  */

void FUN_10af1940c(void)

{
  func_0x00010af198b0();
  func_0x00010af19888();
  func_0x00010af197f8(0x10af19768);
  func_0x00010af198a0();
  func_0x00010af19838();
  func_0x00010af19850();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af1945c; end: 10af1948b; -[SCCPlacesHomeLocationEditorViewModel initWithInitialHomeModel:shouldHideHome:] */

void FUN_10af1945c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112701f58;
  uStack_20 = param_1;
  func_0x00010af19844();
  func_0x00010af19830(&uStack_20);
  return;
}



/* Entry: 10af1948c; end: 10af1949f; +[SCCPlacesHomeLocationEditorViewModel valdiMarshallableObjectDescriptor] */

void FUN_10af1948c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c915c8;
  param_1[1] = &PTR_DAT_110c91610;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af194a0; end: 10af194cb; -[SCCPlacesHomeSettings initWithHideUserHomeLocationFromFriends:userHomeLocation:] */

void FUN_10af194a0(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af19808(PTR_PTR_112701f60);
  func_0x00010af19830(auStack_20);
  return;
}



/* Entry: 10af194cc; end: 10af194df; +[SCCPlacesHomeSettings valdiMarshallableObjectDescriptor] */

void FUN_10af194cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c91620;
  param_1[1] = &PTR_DAT_110c91698;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af194e0; end: 10af19513; -[SCCPlacesHomeSettingsMetrics init] */

void FUN_10af194e0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112701f68;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10af19514; end: 10af19527; +[SCCPlacesHomeSettingsMetrics valdiMarshallableObjectDescriptor] */

void FUN_10af19514(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_mapSessionId_110c916b0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af19528; end: 10af19553; -[SCCPlacesHomeSettingsOnboardingDialogViewModel initWithUserId:] */

void FUN_10af19528(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af19808(PTR_PTR_112701f70);
  func_0x00010af19830(auStack_20);
  return;
}



/* Entry: 10af19554; end: 10af19567; +[SCCPlacesHomeSettingsOnboardingDialogViewModel valdiMarshallableObjectDescriptor] */

void FUN_10af19554(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userId_110c91710;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af19568; end: 10af195ff; -[SCCPlacesHomeSettingsPageContext initWithUpdateUserHideHomeSetting:handleSaveHomeSettings:dismissPage:] */

undefined1 * FUN_10af19568(void)

{
  undefined1 *puVar1;
  
  func_0x00010af19858();
  func_0x00010af198d4();
  func_0x00010af198c4();
  func_0x00010af198b8();
  func_0x00010af19898();
  _objc_retainBlock();
  func_0x00010af19850();
  func_0x00010af19844();
  puVar1 = &stack0xffffffffffffffb0;
  func_0x00010af19830(puVar1);
  func_0x00010af19898();
  func_0x00010af198a8();
  func_0x00010af198cc();
  return puVar1;
}



/* Entry: 10af19600; end: 10af19637; +[SCCPlacesHomeSettingsPageContext valdiMarshallableObjectDescriptor] */

void FUN_10af19600(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c917e8;
  param_1[1] = &PTR_s_SCBridgeObservable_110c918f0;
  param_1[2] = &PTR_DAT_110c91788;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af19638; end: 10af19687;  */

void FUN_10af19638(void)

{
  func_0x00010af198b0();
  func_0x00010af19888();
  func_0x00010af197f8(0x10af19798);
  func_0x00010af198a0();
  func_0x00010af19838();
  func_0x00010af19850();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af19688; end: 10af196b7;  */

undefined8 FUN_10af19688(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1,param_2[3]);
  return 0;
}



/* Entry: 10af196b8; end: 10af19707;  */

void FUN_10af196b8(void)

{
  func_0x00010af198b0();
  func_0x00010af19888();
  func_0x00010af197f8(0x10af197b4);
  func_0x00010af198a0();
  func_0x00010af19838();
  func_0x00010af19850();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af19708; end: 10af19737; -[SCCPlacesHomeSettingsPageViewModel initWithSettings:] */

void FUN_10af19708(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112701f80;
  uStack_20 = param_1;
  func_0x00010af19844();
  func_0x00010af19830(&uStack_20);
  return;
}



/* Entry: 10af19738; end: 10af1974b; +[SCCPlacesHomeSettingsPageViewModel valdiMarshallableObjectDescriptor] */

void FUN_10af19738(undefined8 *param_1)

{
  *param_1 = &PTR_s_settings_110c91930;
  param_1[1] = &PTR_DAT_110c91978;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af1974c; end: 10af197e7;  */

void FUN_10af1974c(void)

{
  func_0x00010af19870();
  return;
}



/* Entry: 10af197e8; end: 10af198eb;  */

void FUN_10af197e8(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af198ec; end: 10af198f3; -[SCMapNetworkCachingServices networkCacheManager] */

undefined8 FUN_10af198ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af198f4; end: 10af198ff; -[SCMapNetworkCachingServices .cxx_destruct] */

void FUN_10af198f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af19900; end: 10af199ab; -[SCMapBatchCacheResult initWithCachedById:missingIds:] */

undefined1 *
FUN_10af19900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701f90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af199ac; end: 10af199cf; -[SCMapBatchCacheResult copyWithZone:] */

undefined8 FUN_10af199ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af199d0; end: 10af19a43; -[SCMapBatchCacheResult hash] */

undefined8 * FUN_10af199d0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af19ac4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af19ad0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10af19ad0;
        }
        goto LAB_10af19ac4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af19ad0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af19a44; end: 10af19aeb; -[SCMapBatchCacheResult isEqual:] */

long FUN_10af19a44(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af19ac4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af19ad0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10af19ad0;
        }
        goto LAB_10af19ac4;
      }
    }
    lVar3 = 0;
  }
LAB_10af19ad0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af19aec; end: 10af19af3; -[SCMapBatchCacheResult cachedById] */

undefined8 FUN_10af19aec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af19af4; end: 10af19afb; -[SCMapBatchCacheResult missingIds] */

undefined8 FUN_10af19af4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af19afc; end: 10af19b2b; -[SCMapBatchCacheResult .cxx_destruct] */

void FUN_10af19afc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af19b2c; end: 10af19bab; +[SCMapUserNetworkingRequest requestWithUrl:message:responseType:] */

void FUN_10af19b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bf180;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c05a180();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af19bac; end: 10af19c47; +[SCMapUserNetworkingRequest requestWithUrl:message:cacheConfiguration:responseType:] */

void FUN_10af19bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bf180;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c05a180();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af19c48; end: 10af19d5f; -[SCMapUserNetworkingRequest initWithUrl:message:headers:cacheConfiguration:responseType:visibility:] */

undefined1 *
FUN_10af19c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_112701f98;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af19d60; end: 10af19d67; -[SCMapUserNetworkingRequest url] */

undefined8 FUN_10af19d60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af19d68; end: 10af19d6f; -[SCMapUserNetworkingRequest message] */

undefined8 FUN_10af19d68(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af19d70; end: 10af19d77; -[SCMapUserNetworkingRequest headers] */

undefined8 FUN_10af19d70(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af19d78; end: 10af19d7f; -[SCMapUserNetworkingRequest responseType] */

undefined8 FUN_10af19d78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af19d80; end: 10af19d87; -[SCMapUserNetworkingRequest visibility] */

undefined8 FUN_10af19d80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af19d88; end: 10af19d8f; -[SCMapUserNetworkingRequest cacheConfiguration] */

undefined8 FUN_10af19d88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af19d90; end: 10af19dd7; -[SCMapUserNetworkingRequest .cxx_destruct] */

void FUN_10af19d90(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af19dd8; end: 10af19ddf; -[SCMapUserNetworkServices mapUserNetworking] */

undefined8 FUN_10af19dd8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af19de0; end: 10af19deb; -[SCMapUserNetworkServices .cxx_destruct] */

void FUN_10af19de0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af19dec; end: 10af19e73; -[SCMapUserNetworkingCacheConfiguration initWithIdentifier:ttlSeconds:] */

undefined1 *
FUN_10af19dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701fa8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10af19e74; end: 10af19e97; -[SCMapUserNetworkingCacheConfiguration copyWithZone:] */

undefined8 FUN_10af19e74(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af19e98; end: 10af19f23; -[SCMapUserNetworkingCacheConfiguration hash] */

undefined8 * FUN_10af19e98(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_30 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar3 = &uStack_38;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10af19fc0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af19fcc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      dVar8 = ABS((double)puVar3[2] - (double)param_3[2]);
      dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = (undefined8 *)puVar3[1];
        if (puVar6 != (undefined8 *)param_3[1]) {
          func_0x00010c071ae0();
          goto LAB_10af19fcc;
        }
        goto LAB_10af19fc0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10af19fcc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10af19f24; end: 10af19fe7; -[SCMapUserNetworkingCacheConfiguration isEqual:] */

long FUN_10af19f24(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af19fc0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af19fcc;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10af19fcc;
        }
        goto LAB_10af19fc0;
      }
    }
    lVar4 = 0;
  }
LAB_10af19fcc:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10af19fe8; end: 10af19fef; -[SCMapUserNetworkingCacheConfiguration identifier] */

undefined8 FUN_10af19fe8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af19ff0; end: 10af19ff7; -[SCMapUserNetworkingCacheConfiguration ttlSeconds] */

undefined8 FUN_10af19ff0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af19ff8; end: 10af1a003; -[SCMapUserNetworkingCacheConfiguration .cxx_destruct] */

void FUN_10af19ff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1a004; end: 10af1a0a7; -[SCComposerMediaBridgeServices initWithImageFactory:videoFactory:] */

undefined1 *
FUN_10af1a004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701fb0;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af1a0a8; end: 10af1a0af; -[SCComposerMediaBridgeServices imageFactory] */

undefined8 FUN_10af1a0a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af1a0b0; end: 10af1a0b7; -[SCComposerMediaBridgeServices videoFactory] */

undefined8 FUN_10af1a0b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af1a0b8; end: 10af1a0e7; -[SCComposerMediaBridgeServices .cxx_destruct] */

void FUN_10af1a0b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1a0e8; end: 10af1a15b; -[SCComposerMediaCameraRollServices initWithCameraRollProvider:] */

undefined1 * FUN_10af1a0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701fb8;
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



/* Entry: 10af1a15c; end: 10af1a163; -[SCComposerMediaCameraRollServices cameraRollProvider] */

undefined8 FUN_10af1a15c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af1a164; end: 10af1a16f; -[SCComposerMediaCameraRollServices .cxx_destruct] */

void FUN_10af1a164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1a170; end: 10af1a1b7; -[SCComposerMediaCameraRollConfig initWithDataWriterContext:] */

void FUN_10af1a170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112701fc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10af1a1b8; end: 10af1a1db; -[SCComposerMediaCameraRollConfig copyWithZone:] */

undefined8 FUN_10af1a1b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af1a1dc; end: 10af1a1eb; -[SCComposerMediaCameraRollConfig hash] */

long FUN_10af1a1dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 10af1a1ec; end: 10af1a273; -[SCComposerMediaCameraRollConfig isEqual:] */

bool FUN_10af1a1ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10af1a274; end: 10af1a27b; -[SCComposerMediaCameraRollConfig dataWriterContext] */

undefined8 FUN_10af1a274(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af1a27c; end: 10af1a287; -[SCAudioProcessingServices .cxx_destruct] */

void FUN_10af1a27c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1a288; end: 10af1a28f; -[SCMediaVideoImportServices videoImporter] */

undefined8 FUN_10af1a288(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af1a290; end: 10af1a297; -[SCMediaVideoImportServices imageImporter] */

undefined8 FUN_10af1a290(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af1a298; end: 10af1a2c7; -[SCMediaVideoImportServices .cxx_destruct] */

void FUN_10af1a298(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1a2c8; end: 10af1a36b; -[SCMediaVideoImportProcessingRequestResponse initWithFuture:canceler:] */

undefined1 *
FUN_10af1a2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112701fd8;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af1a36c; end: 10af1a373; -[SCMediaVideoImportProcessingRequestResponse future] */

undefined8 FUN_10af1a36c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af1a374; end: 10af1a37b; -[SCMediaVideoImportProcessingRequestResponse canceler] */

undefined8 FUN_10af1a374(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af1a37c; end: 10af1a383; -[SCMediaVideoImportProcessingRequestResponse embeddedMetadata] */

undefined8 FUN_10af1a37c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af1a384; end: 10af1a3b3; -[SCMediaVideoImportProcessingRequestResponse setEmbeddedMetadata:] */

void FUN_10af1a384(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10af1a3b4; end: 10af1a3bb; -[SCMediaVideoImportProcessingRequestResponse externalMediaSource] */

undefined4 FUN_10af1a3b4(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10af1a3bc; end: 10af1a3c3; -[SCMediaVideoImportProcessingRequestResponse setExternalMediaSource:] */

void FUN_10af1a3bc(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10af1a3c4; end: 10af1a3cb; -[SCMediaVideoImportProcessingRequestResponse importedContentId] */

undefined8 FUN_10af1a3c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af1a3cc; end: 10af1a3fb; -[SCMediaVideoImportProcessingRequestResponse setImportedContentId:] */

void FUN_10af1a3cc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10af1a3fc; end: 10af1a443; -[SCMediaVideoImportProcessingRequestResponse .cxx_destruct] */

void FUN_10af1a3fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af1a444; end: 10af1a4df; -[SCMediaCameraRollExportedVideoResponse initWithCoder:] */

undefined1 * FUN_10af1a444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112701fe0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af1a4e0; end: 10af1a567; -[SCMediaCameraRollExportedVideoResponse initWithExportedVideoURL:isSkipTranscoding:] */

undefined1 *
FUN_10af1a4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112701fe0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af1a568; end: 10af1a58b; -[SCMediaCameraRollExportedVideoResponse copyWithZone:] */

undefined8 FUN_10af1a568(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af1a58c; end: 10af1a5eb; -[SCMediaCameraRollExportedVideoResponse encodeWithCoder:] */

void FUN_10af1a58c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f37538);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f37558);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af1a5ec; end: 10af1a657; -[SCMediaCameraRollExportedVideoResponse hash] */

undefined8 * FUN_10af1a5ec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10af1a6dc;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10af1a6dc;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10af1a6dc;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10af1a6dc:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10af1a658; end: 10af1a6f7; -[SCMediaCameraRollExportedVideoResponse isEqual:] */

long FUN_10af1a658(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af1a6dc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10af1a6dc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10af1a6dc;
    }
  }
  lVar3 = 1;
LAB_10af1a6dc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af1a6f8; end: 10af1a6ff; -[SCMediaCameraRollExportedVideoResponse exportedVideoURL] */

undefined8 FUN_10af1a6f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af1a700; end: 10af1a707; -[SCMediaCameraRollExportedVideoResponse isSkipTranscoding] */

undefined1 FUN_10af1a700(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10af1a708; end: 10af1a713; -[SCMediaCameraRollExportedVideoResponse .cxx_destruct] */

void FUN_10af1a708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af1a714; end: 10af1a71b; -[SCSmartTemplateService smartTemplateService] */

undefined8 FUN_10af1a714(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af1a71c; end: 10af1a727; -[SCSmartTemplateService .cxx_destruct] */

void FUN_10af1a71c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af1a728; end: 10af1a7a3;  */

undefined * FUN_10af1a728(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef9a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f37578,
                        &UNK_10e5392e4,&UNK_10e539310,3,FUN_10af1a7a4,0);
    do {
      if (puRam00000001137ef9a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef9a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef9a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef9a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef9a0;
}



/* Entry: 10af1a7a4; end: 10af1a7af;  */

bool FUN_10af1a7a4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af1a7b0; end: 10af1a82b;  */

undefined * FUN_10af1a7b0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef9a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f37598,
                        &UNK_10e53931c,&UNK_10e53934c,5,FUN_10af1a82c,0);
    do {
      if (puRam00000001137ef9a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef9a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef9a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef9a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef9a8;
}



/* Entry: 10af1a82c; end: 10af1a837;  */

bool FUN_10af1a82c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10af1a838; end: 10af1a8c3; +[SCMEListSmartTemplateRequest descriptor] */

undefined * FUN_10af1a838(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef9b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c134e0,
                        &PTR____CFConstantStringClassReference_110f375b8,&PTR_DAT_11332e3c0,
                        &PTR_s_platform_11332e418,3,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137ef9b0 = puVar1;
  }
  return puRam00000001137ef9b0;
}



/* Entry: 10af1a8c4; end: 10af1a94f; +[SCMEBeatSyncQueryArgs descriptor] */

undefined * FUN_10af1a8c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef9b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c13530,
                        &PTR____CFConstantStringClassReference_110f375d8,&PTR_DAT_11332e3c0,
                        &PTR_s_trackId_11332e3d8,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137ef9b8 = puVar1;
  }
  return puRam00000001137ef9b8;
}



/* Entry: 10af1a950; end: 10af1a9db; +[SCMESmartTemplate descriptor] */

undefined * FUN_10af1a950(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef9c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c135d0,
                        &PTR____CFConstantStringClassReference_110f375f8,&PTR_DAT_11332e480,
                        &PTR_DAT_11332e4b8,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137ef9c0 = puVar1;
  }
  return puRam00000001137ef9c0;
}



/* Entry: 10af1a9dc; end: 10af1aa57; +[SCMESmartTemplateMetadata descriptor] */

undefined * FUN_10af1a9dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef9c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c13620,
                        &PTR____CFConstantStringClassReference_110f37618,&PTR_DAT_11332e480,
                        &PTR_s_templateId_11332e4f8,3,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001137ef9c8 = puVar1;
  }
  return puRam00000001137ef9c8;
}



/* Entry: 10af1aa58; end: 10af1aabf; +[SCMETemplateRules descriptor] */

void FUN_10af1aa58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef9d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c13670,
                        &PTR____CFConstantStringClassReference_110f37638,&PTR_DAT_11332e480,
                        &PTR_DAT_11332e498,1,0x10,0x1c);
    puRam00000001137ef9d0 = puVar1;
  }
  return;
}



/* Entry: 10af1aac0; end: 10af1ab4b; +[SCMETemplateRule descriptor] */

undefined * FUN_10af1aac0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef9d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c13710,
                        &PTR____CFConstantStringClassReference_110f37658,&PTR_DAT_11332e568,
                        &PTR_DAT_11332e5e0,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001137ef9d8 = puVar1;
  }
  return puRam00000001137ef9d8;
}



/* Entry: 10af1ab4c; end: 10af1abb3; +[SCMEConditionalRuleGroup descriptor] */

void FUN_10af1ab4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef9e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c13760,
                        &PTR____CFConstantStringClassReference_110f37678,&PTR_DAT_11332e568,
                        &PTR_DAT_11332e580,1,0x10,0x1c);
    puRam00000001137ef9e0 = puVar1;
  }
  return;
}


