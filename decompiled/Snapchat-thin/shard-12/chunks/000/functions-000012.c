/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c2cc14; end: 108c2cc23; -[SCFeatureSettingsService bloopsOnePersonFriendCameoNotificationDate] */

void FUN_108c2cc14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,param_1,PTR_s__doubleForFeatureSetting_default_11255f090,
             &PTR____CFConstantStringClassReference_110eefb98);
  return;
}



/* Entry: 108c2cc24; end: 108c2cc2f; -[SCFeatureSettingsService isBloopsUserAdsPolicyAvailable] */

void FUN_108c2cc24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eefbb8);
  return;
}



/* Entry: 108c2cc30; end: 108c2cc3b; -[SCFeatureSettingsService bloopsUserAdsPolicyServerParam] */

undefined ** FUN_108c2cc30(void)

{
  return &PTR____CFConstantStringClassReference_110eefbb8;
}



/* Entry: 108c2cc3c; end: 108c2cc4b; -[SCFeatureSettingsService setBloopsUserAdsPolicy:] */

void FUN_108c2cc3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110eefbb8,param_3);
  return;
}



/* Entry: 108c2cc4c; end: 108c2cc53; -[SCFeatureSettingsService cameos_ads_policy_v2_client_value:] */

void FUN_108c2cc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108c2cc54; end: 108c2cc5b; -[SCFeatureSettingsService cameos_ads_policy_v2_server_value:] */

void FUN_108c2cc54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108c2cc5c; end: 108c2cc6b; -[SCFeatureSettingsService bloopsUserAdsPolicy] */

void FUN_108c2cc5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110eefbb8,0);
  return;
}



/* Entry: 108c2cc6c; end: 108c2cc77; -[SCFeatureSettingsService hasBloopsProfileGenerativeBackgroundsDisclaimerAccepted] */

void FUN_108c2cc6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eefbd8);
  return;
}



/* Entry: 108c2cc78; end: 108c2cc83; -[SCFeatureSettingsService bloopsProfileGenerativeBackgroundsDisclaimerAcceptedServerParam] */

undefined ** FUN_108c2cc78(void)

{
  return &PTR____CFConstantStringClassReference_110eefbd8;
}



/* Entry: 108c2cc84; end: 108c2cc93; -[SCFeatureSettingsService setBloopsProfileGenerativeBackgroundsDisclaimerAccepted:] */

void FUN_108c2cc84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110eefbd8,param_3);
  return;
}



/* Entry: 108c2cc94; end: 108c2cc9b; -[SCFeatureSettingsService bitmoji_profile_generative_backgrounds_disclaimer_accepted_client_value:] */

undefined * FUN_108c2cc94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108c2cc9c; end: 108c2cca3; -[SCFeatureSettingsService bitmoji_profile_generative_backgrounds_disclaimer_accepted_server_value:] */

void FUN_108c2cc9c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108c2cca4; end: 108c2ccb3; -[SCFeatureSettingsService bloopsProfileGenerativeBackgroundsDisclaimerAccepted] */

void FUN_108c2cca4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110eefbd8,0);
  return;
}



/* Entry: 108c2ccb4; end: 108c2ccbf; -[SCFeatureSettingsService hasBloopsMultiverseSelfieTargetIdentifier] */

void FUN_108c2ccb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110eefbf8);
  return;
}



/* Entry: 108c2ccc0; end: 108c2cccb; -[SCFeatureSettingsService bloopsMultiverseSelfieTargetIdentifierServerParam] */

undefined ** FUN_108c2ccc0(void)

{
  return &PTR____CFConstantStringClassReference_110eefbf8;
}



/* Entry: 108c2cccc; end: 108c2ccdb; -[SCFeatureSettingsService setBloopsMultiverseSelfieTargetIdentifier:] */

void FUN_108c2cccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110eefbf8,param_3);
  return;
}



/* Entry: 108c2ccdc; end: 108c2cd03; -[SCFeatureSettingsService bloops_multiverse_selfie_target_identifier_client_value:] */

void FUN_108c2ccdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108c2cd04; end: 108c2cd2b; -[SCFeatureSettingsService bloops_multiverse_selfie_target_identifier_server_value:] */

void FUN_108c2cd04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108c2cd2c; end: 108c2cd3f; -[SCFeatureSettingsService bloopsMultiverseSelfieTargetIdentifier] */

void FUN_108c2cd2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110eefbf8,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 108c2cd40; end: 108c2cd43; -[SCFeatureSettingsService updateBloopsMultiverseSelfieTargetIdentifier:] */

void FUN_108c2cd40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1726b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setBloopsMultiverseSelfieTargetI_11263a3c8);
  return;
}



/* Entry: 108c2cd44; end: 108c2cdbf; +[SCCameosPublisherConfig descriptor] */

undefined * FUN_108c2cd44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e158 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb8d10,
                        &PTR____CFConstantStringClassReference_110eefc18,&PTR_DAT_113291840,
                        &PTR_s_deeplink_113291858,8,0x40,0x1c);
    func_0x00010c2289e0();
    puRam000000011372e158 = puVar1;
  }
  return puRam000000011372e158;
}



/* Entry: 108c2cdc0; end: 108c2cde3; -[SCSnapchattersShouldProcessStreakResult copyWithZone:] */

undefined8 FUN_108c2cdc0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108c2cde4; end: 108c2ce4f; -[SCSnapchattersShouldProcessStreakResult hash] */

undefined8 * FUN_108c2cde4(long param_1,undefined8 param_2,undefined8 *param_3)

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
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108c2ced4;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_108c2ced4;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_108c2ced4;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_108c2ced4:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 108c2ce50; end: 108c2ceef; -[SCSnapchattersShouldProcessStreakResult isEqual:] */

long FUN_108c2ce50(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108c2ced4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_108c2ced4;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108c2ced4;
    }
  }
  lVar3 = 1;
LAB_108c2ced4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108c2cef0; end: 108c2cef7; -[SCSnapchattersShouldProcessStreakResult shouldProcess] */

undefined1 FUN_108c2cef0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108c2cef8; end: 108c2cf83;  */

void FUN_108c2cef8(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108c2cf84; end: 108c2cfe7;  */

undefined ** FUN_108c2cf84(void)

{
  int iVar1;
  
  if ((bRam0000000113828c68 & 1) == 0) {
    iVar1 = 0x13828c68;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113291a98,0x100000000);
      ___cxa_guard_release(0x113828c68);
    }
  }
  return &PTR_PTR_113291a98;
}



/* Entry: 108c2cfe8; end: 108c2d06f;  */

void FUN_108c2cfe8(uint *param_1,undefined1 *param_2)

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



/* Entry: 108c2d070; end: 108c2d0fb;  */

void FUN_108c2d070(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c294420(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108c2d0fc; end: 108c2d15f;  */

undefined ** FUN_108c2d0fc(void)

{
  int iVar1;
  
  if ((bRam0000000113828ce8 & 1) == 0) {
    iVar1 = 0x13828ce8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113291b08,0x100000000);
      ___cxa_guard_release(0x113828ce8);
    }
  }
  return &PTR_PTR_113291b08;
}



/* Entry: 108c2d160; end: 108c2d1e7;  */

void FUN_108c2d160(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 0x21) || (puVar1[0x10] == 0)) {
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



/* Entry: 108c2d1e8; end: 108c2d273;  */

void FUN_108c2d1e8(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c0d3e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c0d3e20(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108c2d274; end: 108c2d2d7;  */

undefined ** FUN_108c2d274(void)

{
  int iVar1;
  
  if ((bRam0000000113828cf0 & 1) == 0) {
    iVar1 = 0x13828cf0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113291b78,0x100000000);
      ___cxa_guard_release(0x113828cf0);
    }
  }
  return &PTR_PTR_113291b78;
}



/* Entry: 108c2d2d8; end: 108c2d35f;  */

void FUN_108c2d2d8(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 0x23) || (puVar1[0x11] == 0)) {
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



/* Entry: 108c2d360; end: 108c2d3eb;  */

void FUN_108c2d360(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c08f840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c08f840(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108c2d3ec; end: 108c2d457;  */

undefined8 FUN_108c2d3ec(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x17) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xb], uVar3 == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    puVar2 = (uint *)((long)piVar1 + uVar3);
    piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
    if ((0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar3 != 0)) {
      return *(undefined8 *)((long)piVar1 + uVar3);
    }
  }
  return 0;
}



/* Entry: 108c2d458; end: 108c2d4c3;  */

undefined8 * FUN_108c2d458(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110ab8df8;
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



/* Entry: 108c2d4c4; end: 108c2d57f;  */

undefined8 FUN_108c2d4c4(void)

{
  int iVar1;
  
  if ((bRam0000000113828e58 & 1) == 0) {
    iVar1 = 0x13828e58;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113828df0 = 0xe;
      puRam0000000113828df8 = &UNK_10f50bfd3;
      uRam0000000113828e00 = 0x1010000;
      pcRam0000000113828e08 = FUN_108c2d580;
      pcRam0000000113828e10 = FUN_108c2d650;
      ppuRam0000000113828de8 = &PTR_SUB_1108629c8;
      uRam0000000113828e28 = 0;
      uRam0000000113828e20 = 0;
      uRam0000000113828e38 = 0;
      uRam0000000113828e30 = 0;
      uRam0000000113828e48 = 0;
      uRam0000000113828e40 = 0;
      uRam0000000113828e50 = 0;
      ___cxa_atexit(&SUB_105007830,0x113828de8,0x100000000);
      ___cxa_guard_release(0x113828e58);
    }
  }
  return 0x113828de8;
}



/* Entry: 108c2d580; end: 108c2d64f;  */

bool FUN_108c2d580(uint *param_1,undefined1 *param_2)

{
  uint *puVar1;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  
  piVar3 = (int *)((long)param_1 + (ulong)*param_1);
  if ((0x16 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
     (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0xb], uVar4 != 0)) {
    puVar1 = (uint *)((long)piVar3 + uVar4);
    lVar2 = (long)puVar1 + (ulong)*puVar1;
    func_0x000107c2a814();
    if (lVar2 != 0) {
      *param_2 = 0;
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 0x17) ||
         (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[0xb], uVar4 == 0)) {
        piVar3 = (int *)0x0;
      }
      else {
        puVar1 = (uint *)((long)piVar3 + uVar4);
        piVar3 = (int *)((long)puVar1 + (ulong)*puVar1);
      }
      func_0x000107c2a814();
      if ((8 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar4 != 0)) {
        return *(char *)((long)piVar3 + uVar4) != '\0';
      }
      return false;
    }
  }
  *param_2 = 1;
  return false;
}



/* Entry: 108c2d650; end: 108c2d757;  */

long FUN_108c2d650(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar4 = param_1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0a8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(lVar4);
  if (lVar2 == 0) {
    lVar4 = 0;
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bfb8280(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0a8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c06d240();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_1);
  return lVar4;
}



/* Entry: 108c2d758; end: 108c2d85f;  */

long FUN_108c2d758(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar4 = param_1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0a8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  _objc_release(lVar4);
  if (lVar2 == 0) {
    lVar4 = 0;
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bfb8280(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0a8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c07a0c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_1);
  return lVar4;
}



/* Entry: 108c2d860; end: 108c2d917;  */

undefined8 FUN_108c2d860(void)

{
  int iVar1;
  
  if ((bRam0000000113828f48 & 1) == 0) {
    iVar1 = 0x13828f48;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000100c433f0();
      uRam0000000113828ee0 = 1;
      uRam0000000113828ef0 = 0;
      uRam0000000113828ef1 = uRam0000000113829499;
      uRam0000000113828ef3 = uRam000000011382949b;
      ppuRam0000000113828ed8 = &PTR_SUB_1108629c8;
      uRam0000000113828f10 = 0x113829480;
      uRam0000000113828f20 = 0;
      uRam0000000113828f18 = 0;
      uRam0000000113828f30 = 0;
      uRam0000000113828f28 = 0;
      uRam0000000113828f40 = 0;
      uRam0000000113828f38 = 0;
      ___cxa_atexit(&SUB_105007830,0x113828ed8,0x100000000);
      ___cxa_guard_release(0x113828f48);
    }
  }
  return 0x113828ed8;
}



/* Entry: 108c2d918; end: 108c2d97b;  */

undefined ** FUN_108c2d918(void)

{
  int iVar1;
  
  if ((bRam0000000113828fc8 & 1) == 0) {
    iVar1 = 0x13828fc8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113291be8,0x100000000);
      ___cxa_guard_release(0x113828fc8);
    }
  }
  return &PTR_PTR_113291be8;
}



/* Entry: 108c2d97c; end: 108c2da43;  */

void FUN_108c2d97c(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  ushort *puVar4;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  if ((((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x19) ||
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xc], uVar3 == 0)) ||
      (puVar2 = (uint *)((long)piVar1 + uVar3), piVar1 = (int *)((long)puVar2 + (ulong)*puVar2),
      puVar4 = (ushort *)((long)piVar1 - (long)*piVar1), *puVar4 < 5)) || (puVar4[2] == 0)) {
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



/* Entry: 108c2da44; end: 108c2db03;  */

void FUN_108c2da44(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010befb8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bfebe20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010befb8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108c2db04; end: 108c2dbbf;  */

undefined8 FUN_108c2db04(void)

{
  int iVar1;
  
  if ((bRam0000000113829040 & 1) == 0) {
    iVar1 = 0x13829040;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113828fd8 = 0xe;
      puRam0000000113828fe0 = &UNK_10f50c067;
      uRam0000000113828fe8 = 0x1010000;
      pcRam0000000113828ff0 = FUN_108c2dbc0;
      pcRam0000000113828ff8 = FUN_108c2dc2c;
      ppuRam0000000113828fd0 = &PTR_SUB_11086d7d0;
      uRam0000000113829010 = 0;
      uRam0000000113829008 = 0;
      uRam0000000113829020 = 0;
      uRam0000000113829018 = 0;
      uRam0000000113829030 = 0;
      uRam0000000113829028 = 0;
      uRam0000000113829038 = 0;
      ___cxa_atexit(&SUB_105187b98,0x113828fd0,0x100000000);
      ___cxa_guard_release(0x113829040);
    }
  }
  return 0x113828fd0;
}



/* Entry: 108c2dbc0; end: 108c2dc2b;  */

undefined8 FUN_108c2dbc0(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x19) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xc], uVar3 == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    puVar2 = (uint *)((long)piVar1 + uVar3);
    piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
    if ((6 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar3 != 0)) {
      return *(undefined8 *)((long)piVar1 + uVar3);
    }
  }
  return 0;
}



/* Entry: 108c2dc2c; end: 108c2dcd3;  */

undefined8 FUN_108c2dc2c(undefined8 param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_3 = 1;
    param_1 = 0;
  }
  else {
    *param_3 = 0;
    lVar1 = param_2;
    func_0x00010bfebe20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befcae0();
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c2dcd4; end: 108c2dd8f;  */

undefined8 FUN_108c2dcd4(void)

{
  int iVar1;
  
  if ((bRam00000001138290b8 & 1) == 0) {
    iVar1 = 0x138290b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113829050 = 0xe;
      puRam0000000113829058 = &UNK_10f50c092;
      uRam0000000113829060 = 0x1010000;
      pcRam0000000113829068 = FUN_108c2dd90;
      pcRam0000000113829070 = FUN_108c2de08;
      ppuRam0000000113829048 = &PTR_SUB_1108629c8;
      uRam0000000113829088 = 0;
      uRam0000000113829080 = 0;
      uRam0000000113829098 = 0;
      uRam0000000113829090 = 0;
      uRam00000001138290a8 = 0;
      uRam00000001138290a0 = 0;
      uRam00000001138290b0 = 0;
      ___cxa_atexit(&SUB_105007830,0x113829048,0x100000000);
      ___cxa_guard_release(0x1138290b8);
    }
  }
  return 0x113829048;
}



/* Entry: 108c2dd90; end: 108c2de07;  */

bool FUN_108c2dd90(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x19) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xc], uVar3 == 0)) {
    *param_2 = 1;
    return false;
  }
  *param_2 = 0;
  puVar2 = (uint *)((long)piVar1 + uVar3);
  piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
  if ((8 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar3 != 0)) {
    return *(char *)((long)piVar1 + uVar3) != '\0';
  }
  return false;
}



/* Entry: 108c2de08; end: 108c2dea3;  */

long FUN_108c2de08(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar2 = param_1;
    func_0x00010bfebe20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0737e0();
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 108c2dea4; end: 108c2df5f;  */

undefined8 FUN_108c2dea4(void)

{
  int iVar1;
  
  if ((bRam0000000113829130 & 1) == 0) {
    iVar1 = 0x13829130;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138290c8 = 0xe;
      puRam00000001138290d0 = &UNK_10f50c0bd;
      uRam00000001138290d8 = 0x1010000;
      pcRam00000001138290e0 = FUN_108c2df60;
      pcRam00000001138290e8 = FUN_108c2dfd8;
      ppuRam00000001138290c0 = &PTR_SUB_1108629c8;
      uRam0000000113829100 = 0;
      uRam00000001138290f8 = 0;
      uRam0000000113829110 = 0;
      uRam0000000113829108 = 0;
      uRam0000000113829120 = 0;
      uRam0000000113829118 = 0;
      uRam0000000113829128 = 0;
      ___cxa_atexit(&SUB_105007830,0x1138290c0,0x100000000);
      ___cxa_guard_release(0x113829130);
    }
  }
  return 0x1138290c0;
}



/* Entry: 108c2df60; end: 108c2dfd7;  */

bool FUN_108c2df60(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x19) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xc], uVar3 == 0)) {
    *param_2 = 1;
    return false;
  }
  *param_2 = 0;
  puVar2 = (uint *)((long)piVar1 + uVar3);
  piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
  if ((10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar3 != 0)) {
    return *(char *)((long)piVar1 + uVar3) != '\0';
  }
  return false;
}



/* Entry: 108c2dfd8; end: 108c2e073;  */

long FUN_108c2dfd8(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar2 = param_1;
    func_0x00010bfebe20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c073820();
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 108c2e074; end: 108c2e12f;  */

undefined8 FUN_108c2e074(void)

{
  int iVar1;
  
  if ((bRam00000001138291a8 & 1) == 0) {
    iVar1 = 0x138291a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113829140 = 0xe;
      puRam0000000113829148 = &UNK_10f50c0e7;
      uRam0000000113829150 = 0x1010000;
      pcRam0000000113829158 = FUN_108c2e130;
      pcRam0000000113829160 = FUN_108c2e19c;
      ppuRam0000000113829138 = &PTR_SUB_11086d7d0;
      uRam0000000113829178 = 0;
      uRam0000000113829170 = 0;
      uRam0000000113829188 = 0;
      uRam0000000113829180 = 0;
      uRam0000000113829198 = 0;
      uRam0000000113829190 = 0;
      uRam00000001138291a0 = 0;
      ___cxa_atexit(&SUB_105187b98,0x113829138,0x100000000);
      ___cxa_guard_release(0x1138291a8);
    }
  }
  return 0x113829138;
}



/* Entry: 108c2e130; end: 108c2e19b;  */

undefined8 FUN_108c2e130(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x19) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xc], uVar3 == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    puVar2 = (uint *)((long)piVar1 + uVar3);
    piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
    if ((0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
       (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar3 != 0)) {
      return *(undefined8 *)((long)piVar1 + uVar3);
    }
  }
  return 0;
}



/* Entry: 108c2e19c; end: 108c2e243;  */

undefined8 FUN_108c2e19c(undefined8 param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_3 = 1;
    param_1 = 0;
  }
  else {
    *param_3 = 0;
    lVar1 = param_2;
    func_0x00010bfebe20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11fc60();
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c2e244; end: 108c2e2f7;  */

void FUN_108c2e244(void)

{
  int iVar1;
  
  if ((bRam0000000113829568 & 1) == 0) {
    iVar1 = 0x13829568;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113829500 = 0xe;
      puRam0000000113829508 = &UNK_10f50c15d;
      uRam0000000113829510 = 0x1010000;
      pcRam0000000113829518 = FUN_108c2fb9c;
      pcRam0000000113829520 = FUN_108c2fbd4;
      ppuRam00000001138294f8 = &PTR_SUB_1108629c8;
      uRam0000000113829538 = 0;
      uRam0000000113829530 = 0;
      uRam0000000113829548 = 0;
      uRam0000000113829540 = 0;
      uRam0000000113829558 = 0;
      uRam0000000113829550 = 0;
      uRam0000000113829560 = 0;
      ___cxa_atexit(&SUB_105007830,0x1138294f8,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113829568);
      return;
    }
  }
  return;
}



/* Entry: 108c2e2f8; end: 108c2e3af;  */

undefined8 FUN_108c2e2f8(void)

{
  int iVar1;
  
  if ((bRam0000000113829220 & 1) == 0) {
    iVar1 = 0x13829220;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108c2e244();
      uRam00000001138291b8 = 2;
      uRam00000001138291c8 = 0;
      uRam00000001138291c9 = uRam0000000113829511;
      uRam00000001138291cb = uRam0000000113829513;
      ppuRam00000001138291b0 = &PTR_SUB_1108629c8;
      uRam00000001138291e8 = 0x1138294f8;
      uRam00000001138291f8 = 0;
      uRam00000001138291f0 = 0;
      uRam0000000113829208 = 0;
      uRam0000000113829200 = 0;
      uRam0000000113829218 = 0;
      uRam0000000113829210 = 0;
      ___cxa_atexit(&SUB_105007830,0x1138291b0,0x100000000);
      ___cxa_guard_release(0x113829220);
    }
  }
  return 0x1138291b0;
}



/* Entry: 108c2e3b0; end: 108c2e463;  */

void FUN_108c2e3b0(void)

{
  int iVar1;
  
  if ((bRam00000001138295e0 & 1) == 0) {
    iVar1 = 0x138295e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113829578 = 0xe;
      puRam0000000113829580 = &UNK_10f50c177;
      uRam0000000113829588 = 0x1010000;
      pcRam0000000113829590 = FUN_108c2fc40;
      pcRam0000000113829598 = FUN_108c2fc78;
      ppuRam0000000113829570 = &PTR_SUB_1108629c8;
      uRam00000001138295b0 = 0;
      uRam00000001138295a8 = 0;
      uRam00000001138295c0 = 0;
      uRam00000001138295b8 = 0;
      uRam00000001138295d0 = 0;
      uRam00000001138295c8 = 0;
      uRam00000001138295d8 = 0;
      ___cxa_atexit(&SUB_105007830,0x113829570,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138295e0);
      return;
    }
  }
  return;
}



/* Entry: 108c2e464; end: 108c2e51b;  */

undefined8 FUN_108c2e464(void)

{
  int iVar1;
  
  if ((bRam0000000113829298 & 1) == 0) {
    iVar1 = 0x13829298;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108c2e3b0();
      uRam0000000113829230 = 2;
      uRam0000000113829240 = 0;
      uRam0000000113829241 = uRam0000000113829589;
      uRam0000000113829243 = uRam000000011382958b;
      ppuRam0000000113829228 = &PTR_SUB_1108629c8;
      uRam0000000113829260 = 0x113829570;
      uRam0000000113829270 = 0;
      uRam0000000113829268 = 0;
      uRam0000000113829280 = 0;
      uRam0000000113829278 = 0;
      uRam0000000113829290 = 0;
      uRam0000000113829288 = 0;
      ___cxa_atexit(&SUB_105007830,0x113829228,0x100000000);
      ___cxa_guard_release(0x113829298);
    }
  }
  return 0x113829228;
}



/* Entry: 108c2e51c; end: 108c2e5d7;  */

undefined8 FUN_108c2e51c(void)

{
  int iVar1;
  
  if ((bRam0000000113829310 & 1) == 0) {
    iVar1 = 0x13829310;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138292a8 = 0xe;
      puRam00000001138292b0 = &UNK_10f50c108;
      uRam00000001138292b8 = 0x1010000;
      pcRam00000001138292c0 = FUN_108c2e5d8;
      pcRam00000001138292c8 = FUN_108c2e648;
      ppuRam00000001138292a0 = &PTR_DAT_110ab8940;
      uRam00000001138292e0 = 0;
      uRam00000001138292d8 = 0;
      uRam00000001138292f0 = 0;
      uRam00000001138292e8 = 0;
      uRam0000000113829300 = 0;
      uRam00000001138292f8 = 0;
      uRam0000000113829308 = 0;
      ___cxa_atexit(0x108c1cfac,0x1138292a0,0x100000000);
      ___cxa_guard_release(0x113829310);
    }
  }
  return 0x1138292a0;
}



/* Entry: 108c2e5d8; end: 108c2e647;  */

undefined4 FUN_108c2e5d8(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1d) ||
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xe], uVar3 == 0)) {
    *param_2 = 1;
    return 0;
  }
  *param_2 = 0;
  puVar2 = (uint *)((long)piVar1 + uVar3);
  piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
  if ((0xe < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7], uVar3 != 0)) {
    return *(undefined4 *)((long)piVar1 + uVar3);
  }
  return 0;
}



/* Entry: 108c2e648; end: 108c2e6e3;  */

long FUN_108c2e648(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf4a3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar2 = param_1;
    func_0x00010bf4a3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf4a480();
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 108c2e6e4; end: 108c2e797;  */

void FUN_108c2e6e4(void)

{
  int iVar1;
  
  if ((bRam0000000113829658 & 1) == 0) {
    iVar1 = 0x13829658;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam00000001138295f0 = 0xe;
      puRam00000001138295f8 = &UNK_10f50c197;
      uRam0000000113829600 = 0x1010000;
      pcRam0000000113829608 = FUN_108c2fce4;
      pcRam0000000113829610 = FUN_108c2fd1c;
      ppuRam00000001138295e8 = &PTR_SUB_1108629c8;
      uRam0000000113829628 = 0;
      uRam0000000113829620 = 0;
      uRam0000000113829638 = 0;
      uRam0000000113829630 = 0;
      uRam0000000113829648 = 0;
      uRam0000000113829640 = 0;
      uRam0000000113829650 = 0;
      ___cxa_atexit(&SUB_105007830,0x1138295e8,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113829658);
      return;
    }
  }
  return;
}



/* Entry: 108c2e798; end: 108c2e84f;  */

undefined8 FUN_108c2e798(void)

{
  int iVar1;
  
  if ((bRam0000000113829388 & 1) == 0) {
    iVar1 = 0x13829388;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_108c2e6e4();
      uRam0000000113829320 = 2;
      uRam0000000113829330 = 0;
      uRam0000000113829331 = uRam0000000113829601;
      uRam0000000113829333 = uRam0000000113829603;
      ppuRam0000000113829318 = &PTR_SUB_1108629c8;
      uRam0000000113829350 = 0x1138295e8;
      uRam0000000113829360 = 0;
      uRam0000000113829358 = 0;
      uRam0000000113829370 = 0;
      uRam0000000113829368 = 0;
      uRam0000000113829380 = 0;
      uRam0000000113829378 = 0;
      ___cxa_atexit(&SUB_105007830,0x113829318,0x100000000);
      ___cxa_guard_release(0x113829388);
    }
  }
  return 0x113829318;
}



/* Entry: 108c2e850; end: 108c2e91f;  */

long FUN_108c2e850(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar3 = param_1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar1 == 0) {
    lVar3 = 0;
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bfb8280(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c261400();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_1);
  return lVar3;
}



/* Entry: 108c2e920; end: 108c2e98b;  */

undefined8 * FUN_108c2e920(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110ab8d88;
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



/* Entry: 108c2e98c; end: 108c2f047;  */

void FUN_108c2e98c(long param_1,undefined8 param_2,int *param_3)

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
    goto code_r0x000108c2efec;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000108c2f00c;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000108c2f00c;
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
code_r0x000108c2ef80:
                    /* WARNING: Could not recover jumptable at 0x000108c2efa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000108c2ef80;
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
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x000108c2f00c;
    }
    goto code_r0x000108c2f000;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000108c2f000;
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
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x000108c2f00c;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000108c2f00c;
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
    goto LAB_108c2f01c;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000108c2efec:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000108c2f000:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000108c2f00c:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_108c2f01c:
  return;
}



/* Entry: 108c2f048; end: 108c2f0cf;  */

void FUN_108c2f048(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x000107c27dd0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108c2f0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 108c2f0d0; end: 108c2f203;  */

void FUN_108c2f0d0(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
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
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined4 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108c2f1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 108c2f204; end: 108c2f2a3;  */

void FUN_108c2f204(long *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  
  if (param_4 != 0) {
    if (param_4 >> 0x3e != 0) {
      FUN_108c2f2a4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x108c2f288);
      (*pcVar1)();
    }
    lVar2 = param_4 << 2;
    __Znwm();
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + param_4 * 4;
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memcpy(lVar2,param_2,param_3);
    }
    param_1[1] = lVar2 + param_3;
  }
  return;
}



/* Entry: 108c2f2a4; end: 108c2f2b7;  */

void FUN_108c2f2a4(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *******pppppppuVar5;
  undefined *puVar6;
  long *plVar7;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  long alStack_a8 [2];
  char cStack_91;
  undefined8 ******ppppppuStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  puVar6 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if ((puVar6[0x1b] & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(puVar6 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar7 = *(long **)(puVar6 + 0x38);
    goto code_r0x000108c2f918;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    pcVar8 = ") ISNULL";
    pcVar9 = (char *)0x8;
    goto code_r0x000108c2f938;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    pcVar8 = ") IS NOT NULL";
    pcVar9 = (char *)0xd;
    goto code_r0x000108c2f938;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar7 = *(long **)(puVar6 + 0x38);
    plVar4 = *(long **)(puVar6 + 0x40);
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar7 = plVar4;
code_r0x000108c2f8ac:
                    /* WARNING: Could not recover jumptable at 0x000108c2f8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar7,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar7 + 0x10);
      goto code_r0x000108c2f8ac;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(puVar6 + 0x50) != *(long *)(puVar6 + 0x48)) {
      uVar10 = 0;
      pcVar9 = (char *)0x1;
      pcVar8 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_a8);
        pcVar2 = "?";
        if (uVar10 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar10 != 0) {
          uVar1 = 2;
        }
        plVar7 = alStack_a8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar7,0,pcVar2,uVar1);
        uStack_88 = plVar7[1];
        ppppppuStack_90 = (undefined8 ******)*plVar7;
        uStack_80 = plVar7[2];
        plVar7[1] = 0;
        plVar7[2] = 0;
        *plVar7 = 0;
        uVar3 = uStack_88;
        pppppppuVar5 = (undefined8 *******)ppppppuStack_90;
        if (-1 < (long)uStack_80) {
          uVar3 = uStack_80 >> 0x38;
          pppppppuVar5 = &ppppppuStack_90;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,pppppppuVar5,uVar3);
        if ((long)uStack_80 < 0) {
          __ZdlPv(ppppppuStack_90);
        }
        if (cStack_91 < '\0') {
          __ZdlPv(alStack_a8[0]);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < (ulong)(*(long *)(puVar6 + 0x50) - *(long *)(puVar6 + 0x48) >> 2));
      goto code_r0x000108c2f938;
    }
    goto code_r0x000108c2f92c;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(puVar6 + 0x38) + 0x10))(*(long **)(puVar6 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(puVar6 + 0x50) == *(long *)(puVar6 + 0x48)) goto code_r0x000108c2f92c;
    uVar10 = 0;
    pcVar9 = (char *)0x1;
    pcVar8 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_a8);
      pcVar2 = "?";
      if (uVar10 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar10 != 0) {
        uVar1 = 2;
      }
      plVar7 = alStack_a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar7,0,pcVar2,uVar1);
      uStack_88 = plVar7[1];
      ppppppuStack_90 = (undefined8 ******)*plVar7;
      uStack_80 = plVar7[2];
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = 0;
      uVar3 = uStack_88;
      pppppppuVar5 = (undefined8 *******)ppppppuStack_90;
      if (-1 < (long)uStack_80) {
        uVar3 = uStack_80 >> 0x38;
        pppppppuVar5 = &ppppppuStack_90;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,pppppppuVar5,uVar3);
      if ((long)uStack_80 < 0) {
        __ZdlPv(ppppppuStack_90);
      }
      if (cStack_91 < '\0') {
        __ZdlPv(alStack_a8[0]);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)(*(long *)(puVar6 + 0x50) - *(long *)(puVar6 + 0x48) >> 2));
    goto code_r0x000108c2f938;
  case 0xe:
    pcVar8 = *(char **)(puVar6 + 0x10);
    pcVar9 = pcVar8;
    _strlen(pcVar8);
    goto code_r0x000108c2f938;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_a8);
    plVar7 = alStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar7,0,"?",1);
    uStack_88 = plVar7[1];
    ppppppuStack_90 = (undefined8 ******)*plVar7;
    uStack_80 = plVar7[2];
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = 0;
    uVar10 = uStack_88;
    pppppppuVar5 = (undefined8 *******)ppppppuStack_90;
    if (-1 < (long)uStack_80) {
      uVar10 = uStack_80 >> 0x38;
      pppppppuVar5 = &ppppppuStack_90;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,pppppppuVar5,uVar10);
    if ((long)uStack_80 < 0) {
      __ZdlPv(ppppppuStack_90);
    }
    if (cStack_91 < '\0') {
      __ZdlPv(alStack_a8[0]);
    }
  default:
    goto LAB_108c2f948;
  }
  plVar7 = *(long **)(puVar6 + 0x40);
code_r0x000108c2f918:
  (**(code **)(*plVar7 + 0x10))(plVar7,param_2,param_3);
code_r0x000108c2f92c:
  pcVar8 = ")";
  pcVar9 = (char *)0x1;
code_r0x000108c2f938:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar8,pcVar9);
LAB_108c2f948:
  return;
}



/* Entry: 108c2f2b8; end: 108c2f973;  */

void FUN_108c2f2b8(long param_1,undefined8 param_2,int *param_3)

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
    goto code_r0x000108c2f918;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000108c2f938;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000108c2f938;
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
code_r0x000108c2f8ac:
                    /* WARNING: Could not recover jumptable at 0x000108c2f8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000108c2f8ac;
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
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x000108c2f938;
    }
    goto code_r0x000108c2f92c;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000108c2f92c;
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
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x000108c2f938;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000108c2f938;
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
    goto LAB_108c2f948;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000108c2f918:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000108c2f92c:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000108c2f938:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_108c2f948:
  return;
}



/* Entry: 108c2f974; end: 108c2f9fb;  */

void FUN_108c2f974(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x000107c27dd0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108c2f9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 108c2f9fc; end: 108c2fb2f;  */

void FUN_108c2f9fc(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
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
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000108c2fb24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 108c2fb30; end: 108c2fb9b;  */

bool FUN_108c2fb30(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  *(bool *)param_2 = lVar1 == 0;
  _objc_release(param_1);
  _objc_release(param_1);
  return lVar1 == 0;
}



/* Entry: 108c2fb9c; end: 108c2fbd3;  */

void FUN_108c2fb9c(uint *param_1,undefined8 param_2)

{
  bool bVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if (*puVar2 < 0x19) {
    bVar1 = true;
  }
  else {
    bVar1 = puVar2[0xc] == 0;
  }
  *(bool *)param_2 = bVar1;
  return;
}



/* Entry: 108c2fbd4; end: 108c2fc3f;  */

bool FUN_108c2fbd4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  *(bool *)param_2 = lVar1 == 0;
  _objc_release(param_1);
  _objc_release(param_1);
  return lVar1 == 0;
}



/* Entry: 108c2fc40; end: 108c2fc77;  */

void FUN_108c2fc40(uint *param_1,undefined8 param_2)

{
  bool bVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if (*puVar2 < 0x1b) {
    bVar1 = true;
  }
  else {
    bVar1 = puVar2[0xd] == 0;
  }
  *(bool *)param_2 = bVar1;
  return;
}



/* Entry: 108c2fc78; end: 108c2fce3;  */

bool FUN_108c2fc78(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  *(bool *)param_2 = lVar1 == 0;
  _objc_release(param_1);
  _objc_release(param_1);
  return lVar1 == 0;
}



/* Entry: 108c2fce4; end: 108c2fd1b;  */

void FUN_108c2fce4(uint *param_1,undefined8 param_2)

{
  bool bVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if (*puVar2 < 0x1d) {
    bVar1 = true;
  }
  else {
    bVar1 = puVar2[0xe] == 0;
  }
  *(bool *)param_2 = bVar1;
  return;
}



/* Entry: 108c2fd1c; end: 108c2fd87;  */

bool FUN_108c2fd1c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf4a3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  *(bool *)param_2 = lVar1 == 0;
  _objc_release(param_1);
  _objc_release(param_1);
  return lVar1 == 0;
}



/* Entry: 108c2fd88; end: 108c2fd9b; +[SCSnapchatter objectClassFunctionPointer] */

undefined1  [16] FUN_108c2fd88(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_108c2fe04;
  auVar1._0_8_ = FUN_108c2fd9c;
  return auVar1;
}



/* Entry: 108c2fd9c; end: 108c2fe03;  */

void FUN_108c2fd9c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf1fbb9c;
  _strcmp("username",param_1);
  if (iVar1 != 0) {
    iVar1 = 0xf2fd108;
    _strcmp(&DAT_10f2fd108,param_1);
    if (iVar1 != 0) {
      _strcmp(&DAT_10f50bf9f,param_1);
    }
  }
  return;
}



/* Entry: 108c2fe04; end: 108c2ff53;  */

bool FUN_108c2fe04(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  ushort uVar3;
  ulong uVar4;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  if (param_1 == 2) {
    func_0x000107c310d8(param_2,&UNK_10f50c253);
    _sqlite3_bind_int64();
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x23) ||
       (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x11], uVar4 == 0))
    goto LAB_108c2ff20;
LAB_108c2fefc:
    puVar2 = (undefined4 *)((long)((long)piVar1 + uVar4) + (ulong)*(uint *)((long)piVar1 + uVar4));
    _sqlite3_bind_text(param_2,2,puVar2 + 1,*puVar2,0);
  }
  else {
    if (param_1 == 1) {
      func_0x000107c310d8(param_2,&UNK_10f50c1fd);
      _sqlite3_bind_int64();
      if (0x20 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar3 = ((ushort *)((long)piVar1 - (long)*piVar1))[0x10];
        goto joined_r0x000108c2feb4;
      }
    }
    else {
      if (param_1 != 0) {
        return false;
      }
      func_0x000107c310d8(param_2,&UNK_10f50c1b5);
      _sqlite3_bind_int64();
      if (6 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar3 = ((ushort *)((long)piVar1 - (long)*piVar1))[3];
joined_r0x000108c2feb4:
        uVar4 = (ulong)uVar3;
        if (uVar4 != 0) goto LAB_108c2fefc;
      }
    }
LAB_108c2ff20:
    _sqlite3_bind_null(param_2,2);
  }
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 108c2ff54; end: 108c303f3;  */

void FUN_108c2ff54(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined *puVar22;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar22 = PTR_PTR_1126c2820;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar22 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    uVar1 = param_2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_2;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c07a6a0();
    uVar5 = param_2;
    func_0x00010bfb9b40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_2;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_2;
    func_0x00010bf8e9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010c06d560();
    uVar9 = param_2;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_2;
    func_0x00010bfebe20();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    func_0x00010c262240();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_2;
    func_0x00010bf4a3a0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_2;
    func_0x00010c242760();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_2;
    func_0x00010c0d3e20();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = param_2;
    func_0x00010c08f840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c102000();
    uVar16 = param_2;
    func_0x00010c105520();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_2;
    func_0x00010bf5b820();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = param_2;
    func_0x00010beef400();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = param_2;
    func_0x00010c105040();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = param_2;
    func_0x00010c1022a0();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = param_2;
    func_0x00010c149b60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06bb80();
    func_0x000100c36ac8(puVar22,0xffffffffffffffff,uVar1,uVar2,uVar3,uVar4 & 0xffffffff,uVar5,uVar6,
                        uVar7,(char)uVar8);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  *(undefined4 *)(puVar22 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 108c303f4; end: 108c30467;  */

void FUN_108c303f4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  func_0x000100c360bc();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108c30468; end: 108c308f7;  */

void FUN_108c30468(undefined8 param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar3 = PTR_PTR_1126c2820;
    FUN_108c2ff54(PTR_PTR_1126c2820,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    uVar2 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c294420(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf85d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c07a6a0();
    puVar1[0x14] = (char)uVar2;
    uVar2 = param_1;
    func_0x00010bfb9b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf1bae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf8e9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c06d560();
    puVar1[0x15] = (char)uVar2;
    uVar2 = param_1;
    func_0x00010bfb8280(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bfebe20(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c262240(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf4a3a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c242760(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c0d3e20(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c08f840(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c102000();
    *(int *)(puVar1 + 0x18) = (int)uVar2;
    uVar2 = param_1;
    func_0x00010c105520(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf5b820(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010beef400(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c105040(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c1022a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c149b60(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c06bb80();
    puVar1[0x16] = (char)uVar2;
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c308f8; end: 108c30bb3;  */

ulong FUN_108c308f8(ulong param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x000100c3b18c(param_1,lVar4);
  lVar6 = param_2;
  func_0x00010bf1c0a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x000100c3b18c(param_1,lVar6);
  lVar8 = param_2;
  func_0x00010bf1c000();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x000100c3b18c(param_1,lVar8);
  lVar10 = param_2;
  func_0x00010bf1af00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x000100c3b18c(param_1,lVar10);
  lVar12 = param_2;
  func_0x00010bf1af20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x000100c3b18c(param_1,lVar12);
  lVar14 = param_2;
  func_0x00010bf1ad40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar14 == 0) {
    uVar17 = 0;
  }
  else {
    lVar15 = lVar14;
    _objc_retainAutorelease(lVar14);
    func_0x00010bf25f00();
    lVar16 = lVar14;
    func_0x00010c08fa60(lVar14);
    uVar17 = param_1;
    func_0x000107c27df8(param_1,lVar15,lVar16);
  }
  _objc_release(lVar14);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27de4(param_1,0xe,uVar17 & 0xffffffff);
  func_0x000107c27ddc(param_1,0xc,uVar13 & 0xffffffff);
  func_0x000107c27ddc(param_1,10,uVar11 & 0xffffffff);
  func_0x000107c27ddc(param_1,8,uVar9 & 0xffffffff);
  func_0x000107c27ddc(param_1,6,uVar7 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar5 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c30bb4; end: 108c30dab;  */

ulong FUN_108c30bb4(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c078f60();
  uVar5 = param_2;
  func_0x00010c280020();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x000100c3b18c(param_1,uVar5);
  uVar7 = param_2;
  func_0x00010c26e7a0();
  uVar8 = param_2;
  func_0x00010c1173c0(param_2);
  uVar9 = param_2;
  func_0x00010bf15520(param_2);
  uVar10 = param_2;
  func_0x00010bf699c0(param_2);
  uVar11 = param_2;
  func_0x00010c116d00(param_2);
  uVar12 = param_2;
  func_0x00010c116cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_1;
  func_0x000100c3b18c(param_1,uVar12);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27ddc(param_1,0x12,uVar13 & 0xffffffff);
  func_0x000107c27de0(param_1,0x10,uVar11,0);
  func_0x000107c27de0(param_1,0xe,uVar10,0);
  func_0x000107c27de0(param_1,0xc,uVar9,0);
  func_0x000107c27de0(param_1,10,uVar8,0);
  func_0x000107c27de0(param_1,8,uVar7 & 0xffffffff,0);
  func_0x000107c27ddc(param_1,6,uVar6 & 0xffffffff);
  func_0x000107c27dec(param_1,4,uVar4 & 0xffffffff,0);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c30dac; end: 108c30dbf;  */

void FUN_108c30dac(void)

{
  func_0x000104bd47e8(&DAT_10f62a4d8);
  return;
}



/* Entry: 108c30dc0; end: 108c30dc7;  */

void FUN_108c30dc0(void)

{
  return;
}



/* Entry: 108c30dc8; end: 108c30dfb;  */

void FUN_108c30dc8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110ab8e58;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 108c30dfc; end: 108c30e23;  */

void FUN_108c30dfc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110ab8e58;
  param_2[1] = uVar1;
  return;
}



/* Entry: 108c30e24; end: 108c30e5f;  */

long FUN_108c30e24(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110ab8ec8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108c30e60; end: 108c30e7b;  */

undefined ** FUN_108c30e60(void)

{
  return &PTR_DAT_110ab8ec8;
}



/* Entry: 108c30e7c; end: 108c3102b;  */

void FUN_108c30e7c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  uVar10 = *(ulong *)(param_1 + 0x30);
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010bf1a5c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uVar11 = 0;
  }
  else {
    lVar7 = param_2;
    func_0x00010bf1a5c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar8 = lVar7;
    func_0x00010c0d0e40(lVar7);
    lVar9 = lVar7;
    func_0x00010bf65700(lVar7);
    *(undefined1 *)(uVar10 + 0x46) = 1;
    iVar3 = *(int *)(uVar10 + 0x20);
    iVar4 = *(int *)(uVar10 + 0x30);
    iVar5 = *(int *)(uVar10 + 0x28);
    func_0x000107c27dec(uVar10,6,lVar9,0);
    func_0x000107c27dec(uVar10,4,lVar8,0);
    uVar11 = uVar10;
    func_0x000107c27dc0(uVar10,(iVar3 - iVar4) + iVar5);
    _objc_release(lVar7);
    _objc_release(lVar7);
    uVar11 = uVar11 & 0xffffffff;
  }
  _objc_release(lVar6);
  *(undefined1 *)(uVar10 + 0x46) = 1;
  uVar1 = *(undefined8 *)(uVar10 + 0x28);
  uVar2 = *(undefined8 *)(uVar10 + 0x30);
  uVar12 = *(undefined8 *)(uVar10 + 0x20);
  func_0x000100c3b07c(uVar10,4,uVar11);
  func_0x000107c27dc0(uVar10,((int)uVar12 - (int)uVar2) + (int)uVar1);
  _objc_release(param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108c3102c; end: 108c31087;  */

void FUN_108c3102c(long param_1)

{
  long lVar1;
  
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  lVar1 = *(long *)(param_1 + 0x30);
  *(undefined1 *)(lVar1 + 0x46) = 1;
  func_0x000107c27dc0(lVar1,(*(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x30)) +
                            *(int *)(lVar1 + 0x28));
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)lVar1;
  return;
}



/* Entry: 108c31088; end: 108c31093; +[SCSnapchattersPublisher table] */

undefined * FUN_108c31088(void)

{
  return &UNK_10f50c517;
}


