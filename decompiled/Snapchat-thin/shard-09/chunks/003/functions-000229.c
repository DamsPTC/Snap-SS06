/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c19dc4; end: 106c19de3; +[SCCStreakMetadata valdiMarshallableObjectDescriptor] */

void FUN_106c19dc4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110969018;
  param_1[1] = &PTR_DAT_110969090;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106c19de4; end: 106c19e17; -[SCCStreaksResult initWithStreaks:streakEmoji:hourglassThresholdMs:] */

void FUN_106c19de4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_20 [16];
  
  func_0x000106c19e34(PTR_PTR_1126f5ca0);
  _objc_msgSendSuper2(auStack_20,param_2,0);
  return;
}



/* Entry: 106c19e18; end: 106c19e5b; +[SCCStreaksResult valdiMarshallableObjectDescriptor] */

void FUN_106c19e18(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109690a0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 106c19e5c; end: 106c19fe7; -[SCLogAppBackgroundEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c19e5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b7228;
  _objc_alloc_init(PTR_PTR_1126b7228);
  puVar2 = PTR_PTR_1126b7240;
  _objc_alloc_init(PTR_PTR_1126b7240);
  func_0x00010c1b6740(puVar1,param_2,0);
  puVar3 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  func_0x00010c1eeea0();
  puVar4 = PTR_PTR_1126b7248;
  _objc_opt_new(PTR_PTR_1126b7248);
  func_0x00010c1eac20();
  func_0x00010c1e9180(puVar3,param_2,puVar4);
  func_0x00010c1cc140(puVar2,param_2,1);
  puVar5 = puVar2;
  func_0x00010bf06200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar5);
  func_0x00010c198180(puVar1,param_2,0);
  func_0x00010c1b66e0(puVar1,param_2,puVar2);
  func_0x00010c1b67e0(puVar1,param_2,puVar3);
  func_0x00010c1b6780(puVar1,param_2,0);
  func_0x00010c1b6840(puVar1,param_2,&PTR____CFConstantStringClassReference_110e796d8);
  param_1 = param_1 + _DAT_11275af60;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f200();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c19fe8; end: 106c1a01f; -[SCLogAppBackgroundEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c19fe8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275af64);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275af60);
  return;
}



/* Entry: 106c1a020; end: 106c1a11b; -[SCLogAppBackgroundJobProcessor initWithBlizzardLogger:locationSharingPreferencesProvider:devicePermissionManager:appBackgroundNetworkStatsProvider:] */

undefined1 *
FUN_106c1a020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f5ca8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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



/* Entry: 106c1a11c; end: 106c1a26b; -[SCLogAppBackgroundJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_106c1a11c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_6);
  func_0x00010bf96720(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 106c1a26c; end: 106c1a29f;  */

void FUN_106c1a26c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e4e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c1a2a0; end: 106c1a313; -[SCLogAppBackgroundJobProcessor _populateRequestStatsOnRequest:] */

void FUN_106c1a2a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bfe4cc0(uVar1);
  func_0x00010c1a9560(param_3,param_2,uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2685a0(uVar1);
  func_0x00010c1cc520(param_3,param_2,uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2685c0(uVar1);
  func_0x00010c1cc540(param_3,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c1a314; end: 106c1a40f; -[SCLogAppBackgroundJobProcessor _handlePreferencesLoadedWithJobCompletion:] */

void FUN_106c1a314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  func_0x00010bf5f5a0(PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfc81e0(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106c1a410; end: 106c1a4ff;  */

void FUN_106c1a410(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  ulong uStack_48;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf10fa0();
  uStack_48 = uVar1;
  if (3 < uVar1) {
    uStack_48 = 0xffffffffffffffff;
  }
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_2);
  return;
}



/* Entry: 106c1a500; end: 106c1a537;  */

void FUN_106c1a500(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be0fc80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c1a538; end: 106c1a63b; -[SCLogAppBackgroundJobProcessor _fetchAuthorizationStatus:notificationStatus:] */

void FUN_106c1a538(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010bfa8140(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106c1a63c; end: 106c1a683;  */

void FUN_106c1a63c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be15100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c1a684; end: 106c1a88f; -[SCLogAppBackgroundJobProcessor _fetchUISettingsWithJobCompletion:notificationStatus:locationAuthorizationStatus:] */

void FUN_106c1a684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0ed100();
  _objc_release(puVar1);
  func_0x00010099c714();
  uVar3 = param_2;
  func_0x00010bdccf40();
  uVar4 = param_2;
  func_0x00010bdccf20();
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c1069c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar5;
  func_0x000106c1b010();
  puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetHeight();
  uVar8 = param_1;
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar6);
  _objc_initWeak(auStack_78,param_2);
  uVar7 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106c1a890;
  puStack_c8 = &UNK_110969168;
  _objc_copyWeak(auStack_b8,auStack_78);
  uStack_c0 = param_4;
  uStack_b0 = uVar3;
  uStack_a8 = uVar4;
  puStack_a0 = puVar1;
  uStack_98 = param_5;
  uStack_90 = param_1;
  uStack_88 = uVar8;
  uStack_80 = param_6;
  uStack_7c = puVar2 + -3 < (undefined *)0x2;
  _objc_retain(param_4);
  func_0x00010007380c(uVar7,&puStack_e0);
  _objc_release(uVar7);
  _objc_release(uStack_c0);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar5);
  return;
}



/* Entry: 106c1a890; end: 106c1a95b;  */

void FUN_106c1a890(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar3 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  lVar4 = lVar3;
  _UIAccessibilityIsVoiceOverRunning();
  lVar5 = lVar4;
  _UIAccessibilityIsClosedCaptioningEnabled();
  lVar6 = lVar5;
  _UIAccessibilityDarkerSystemColorsEnabled();
  lVar7 = lVar6;
  _UIAccessibilityIsSwitchControlRunning();
  _UIAccessibilityIsGrayscaleEnabled();
  func_0x00010be2e500(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),lVar3,param_2,
                      uVar1,uVar2,uVar8,lVar4,lVar5,lVar6,(char)lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106c1a95c; end: 106c1ad5f; -[SCLogAppBackgroundJobProcessor _handlePreferencesLoadedWithSystemAppearanceSetting:appAppearanceSetting:accessibilityFontSize:voiceOverStatus:captionsStatus:contrastStatus:switchControlStatus:grayscaleStatus:notificationStatus:locationAuthorizationStatus:onComplete:screenHeightInPoints:screenWidthInPoints:isLandscape:] */

void FUN_106c1a95c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long in_stack_00000018;
  
  puVar1 = PTR_PTR_1126d1640;
  _objc_retain(in_stack_00000018);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126c1078;
  func_0x00010bf32da0(PTR_PTR_1126c1078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179de0(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c1078;
  func_0x00010bf32d40(PTR_PTR_1126c1078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179d80(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126c1078;
  func_0x00010bf32d60(PTR_PTR_1126c1078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179dc0(puVar1);
  _objc_release(puVar2);
  func_0x00010be75fc0(param_3);
  func_0x00010c160f20(puVar1);
  func_0x00010c1aee60(puVar1);
  func_0x00010c18cb20(puVar1);
  func_0x00010c1bfac0(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  puVar5 = puVar4;
  func_0x00010c25e980(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf51e00();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = puVar6;
  func_0x00010bfb1920(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193e00(puVar1);
  _objc_release(puVar4);
  puVar4 = puVar6;
  func_0x00010bfb1920(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e0120(puVar1);
  _objc_release(puVar4);
  func_0x00010c18c8c0(puVar1);
  func_0x00010c1e0140(puVar1);
  func_0x00010c18ca80(puVar1);
  func_0x00010c210fe0(puVar1);
  func_0x00010c168720(puVar1);
  puVar4 = PTR_PTR_1126b2930;
  func_0x00010bf5e640(PTR_PTR_1126b2930);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf22880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d69a0(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  lVar7 = *(long *)(param_3 + 0x10);
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    func_0x00010c1bfd20(puVar1);
  }
  else {
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c1067a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000106c1af90();
    func_0x00010c1bfd20(puVar1);
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c1067a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010be4f800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    if (lVar7 != 0) {
      func_0x00010c1bfc60(puVar1);
    }
    _objc_release(lVar7);
  }
  func_0x00010c160e80(puVar1);
  func_0x00010c160f60(puVar1);
  func_0x00010c161000(puVar1);
  func_0x00010c161040(puVar1);
  func_0x00010c161060(puVar1);
  func_0x00010c1f71c0(param_1,puVar1);
  func_0x00010c1f7620(param_2,puVar1);
  func_0x00010c0b2e60(*(undefined8 *)(param_3 + 8));
  (**(code **)(in_stack_00000018 + 0x10))(in_stack_00000018,0,0);
  _objc_release(in_stack_00000018);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c1ad60; end: 106c1af03; -[SCLogAppBackgroundJobProcessor _locationSharingListUserIdsFromPreferences:] */

void FUN_106c1ad60(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    lVar3 = 0;
    goto LAB_106c1aee0;
  }
  lVar3 = param_3;
  func_0x00010c22c5c0();
  lVar1 = param_3;
  if (lVar3 == 2) {
    lVar3 = param_3;
    func_0x00010c2a4ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    if (lVar2 == 0) goto LAB_106c1adfc;
    lVar3 = param_3;
    func_0x00010c2a4ba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(lVar3);
    func_0x00010c2a4ba0();
    _objc_retainAutoreleasedReturnValue();
LAB_106c1ae74:
    lVar2 = lVar1;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if ((lVar2 == 0) || (lVar3 = lVar2, func_0x00010bf529e0(), lVar3 == 0)) {
LAB_106c1aed4:
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2;
      func_0x00010bf446e0(lVar2,param_2,&PTR____CFConstantStringClassReference_110dbdd98);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
LAB_106c1adfc:
    lVar3 = param_3;
    func_0x00010c22c5c0();
    if (lVar3 != 3) {
      lVar2 = 0;
      goto LAB_106c1aed4;
    }
    lVar3 = param_3;
    func_0x00010bf1c9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf529e0();
    _objc_release(lVar3);
    if (lVar2 != 0) {
      lVar3 = param_3;
      func_0x00010bf1c9a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(lVar3);
      func_0x00010bf1c9a0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106c1ae74;
    }
    lVar2 = 0;
    lVar3 = 0;
  }
  _objc_release(lVar2);
LAB_106c1aee0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106c1af04; end: 106c1af27; -[SCLogAppBackgroundJobProcessor _appearanceSettingFromSystemSetting:] */

undefined8 FUN_106c1af04(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return *(undefined8 *)(&UNK_10dde8498 + (param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 106c1af28; end: 106c1af47; -[SCLogAppBackgroundJobProcessor _appearanceSettingFromAppPreference:] */

undefined8 FUN_106c1af28(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 3) {
    return *(undefined8 *)(&UNK_10dde84b0 + param_3 * 8);
  }
  return 0;
}



/* Entry: 106c1af48; end: 106c1b1bb; -[SCLogAppBackgroundJobProcessor .cxx_destruct] */

void FUN_106c1af48(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c1b1bc; end: 106c1b29b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_106c1b1bc(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  if ((param_2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf06200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc800();
    _objc_release(uVar1);
  }
  if ((param_2 >> 1 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf06200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc800();
    _objc_release(uVar1);
  }
  if ((param_2 >> 2 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf06200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc800();
    _objc_release(uVar1);
  }
  if ((param_2 >> 3 & 1) != 0) {
    uVar1 = param_1;
    func_0x00010bf06200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc800();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c1b29c; end: 106c1b33b; -[SCMapStylePrefetchEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c1b29c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_11275af78;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdeee20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f200(lVar3,param_2,0,param_1,0,0);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c1b33c; end: 106c1b4af; -[SCMapStylePrefetchEntryPoint _createJobConfig] */

void FUN_106c1b33c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b7228;
  _objc_alloc_init(PTR_PTR_1126b7228);
  puVar2 = PTR_PTR_1126b7238;
  _objc_alloc_init(PTR_PTR_1126b7238);
  puVar3 = PTR_PTR_1126b7248;
  _objc_alloc_init(PTR_PTR_1126b7248);
  uVar4 = param_1;
  func_0x00010be87e60(param_1);
  func_0x00010c1eac20(puVar3,param_2,uVar4);
  func_0x00010c19dca0(puVar3,param_2,300);
  func_0x00010c1e9180(puVar2,param_2,puVar3);
  func_0x00010c1eeea0(puVar2,param_2,0);
  func_0x00010c1b67e0(puVar1,param_2,puVar2);
  puVar5 = PTR_PTR_1126b7230;
  _objc_alloc_init(PTR_PTR_1126b7230);
  func_0x00010c1edbc0();
  func_0x00010c1c35c0(puVar5,param_2,3);
  func_0x00010c1edae0(puVar5,param_2,10);
  func_0x00010c1c3020(puVar5,param_2,4);
  func_0x00010c1ed860(puVar1,param_2,puVar5);
  func_0x00010c198180(puVar1,param_2,0);
  puVar6 = PTR_PTR_1126b7240;
  _objc_alloc_init(PTR_PTR_1126b7240);
  func_0x00010c1cc140();
  func_0x00010bea1d00(param_1,param_2,puVar6);
  func_0x00010c1b66e0(puVar1,param_2,puVar6);
  func_0x00010c1b6780(puVar1,param_2,0);
  func_0x00010c1b6740(puVar1,param_2,0);
  func_0x00010c1b6840(puVar1,param_2,&PTR____CFConstantStringClassReference_110e796f8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c1b4b0; end: 106c1b50f; -[SCMapStylePrefetchEntryPoint _recurringIntervalSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106c1b4b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_11275af7c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000109021844();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 106c1b510; end: 106c1b58b; -[SCMapStylePrefetchEntryPoint _setAllowedAppStatesForConstraint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c1b510(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275af7c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010902186c();
  _objc_release(lVar2);
  _objc_release(param_1);
  FUN_106c1b1bc(param_3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c1b58c; end: 106c1b5cf; -[SCMapStylePrefetchEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c1b58c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275af7c);
  _objc_destroyWeak(param_1 + _DAT_11275af78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275af80);
  return;
}



/* Entry: 106c1b5d0; end: 106c1b647; -[SCMapSDKStylePrefetchObserver initWithJobCompletionCallback:] */

undefined1 * FUN_106c1b5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5cb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106c1b648; end: 106c1b667; -[SCMapSDKStylePrefetchObserver onComplete:] */

void FUN_106c1b648(long param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 3) {
                    /* WARNING: Could not recover jumptable at 0x000106c1b660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3,0);
    return;
  }
  return;
}



/* Entry: 106c1b668; end: 106c1b673; -[SCMapSDKStylePrefetchObserver .cxx_destruct] */

void FUN_106c1b668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c1b674; end: 106c1b73f; -[SCMapStylePrefetchJobProcessor initWithMapSDK:featureSettingsService:circumstanceEngine:] */

undefined1 *
FUN_106c1b674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f5cb8;
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



/* Entry: 106c1b740; end: 106c1b883; -[SCMapStylePrefetchJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8
FUN_106c1b740(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  ulong uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010beb4ca0();
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106c1b884;
    puStack_60 = &UNK_110848708;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_6);
    lStack_58 = param_6;
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    _objc_release(lStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 106c1b884; end: 106c1b8b7;  */

void FUN_106c1b884(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4e9e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106c1b8b8; end: 106c1b933; -[SCMapStylePrefetchJobProcessor _loadStyleWithJobCompletionCallback:] */

void FUN_106c1b8b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d1648;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0207c0();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c107fc0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c1b934; end: 106c1ba33; -[SCMapStylePrefetchJobProcessor _shouldPrefetchBasedOnRecentMapUsage] */

bool FUN_106c1b934(double param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  uVar3 = *(ulong *)(param_2 + 0x18);
  func_0x000109021894();
  if (uVar3 == 0) {
    bVar2 = true;
  }
  else {
    uVar4 = *(ulong *)(param_2 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar4 == 0) || (uVar6 = uVar4, func_0x00010c077580(), (int)uVar6 == 0)) {
      bVar1 = false;
      uVar6 = 0;
    }
    else {
      uVar6 = uVar4;
      func_0x00010c0b92c0();
      bVar1 = true;
    }
    puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    bVar2 = true;
    if ((bVar1) && (0 < (long)uVar6)) {
      bVar2 = param_1 + (double)uVar3 * 24.0 * -60.0 * 60.0 <= (double)uVar6 / 1000.0;
    }
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  return bVar2;
}



/* Entry: 106c1ba34; end: 106c1ba6f; -[SCMapStylePrefetchJobProcessor .cxx_destruct] */

void FUN_106c1ba34(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c1ba70; end: 106c1bb0f;  */

void FUN_106c1ba70(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88;
  if (param_1 < 2) {
    if ((param_1 != 0) && (param_1 == 1)) {
      puVar1 = (undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_110346d78;
    }
  }
  else {
    puVar1 = (undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_110346d80;
    if ((param_1 != 2) &&
       (puVar1 = (undefined8 *)PTR__kCAMediaTimingFunctionLinear_110346d88, param_1 == 3)) {
      func_0x00010bfbc0c0(0x3dcccccd,0x3f666666,0x3e4ccccd,0x3f733333,
                          PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106c1bb08;
    }
  }
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140,param_2,*puVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_106c1bb08:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c1bb10; end: 106c1bb17; -[SCMapCamera isVisuallyEqualToCamera:] */

void FUN_106c1bb10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0838b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_isVisuallyEqualToCamera_ignoring_1125fe838,param_3,0);
  return;
}



/* Entry: 106c1bb18; end: 106c1bc67; -[SCMapCamera isVisuallyEqualToCamera:ignoringAltitude:] */

bool FUN_106c1bb18(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_5);
  dVar3 = 1.0;
  if ((param_6 & 1) == 0) {
    func_0x00010bf01f00(param_3);
    dVar3 = param_1;
    func_0x00010bf01f00(param_5);
    if (dVar3 == 0.0) {
      dVar3 = 0.01;
    }
    else {
      func_0x00010bf01f00(param_5);
    }
    param_1 = param_1 / dVar3;
    dVar3 = ABS(param_1);
  }
  func_0x00010bf34640(param_3);
  dVar2 = param_1;
  func_0x00010bf34640(param_5);
  if (ABS(param_1 - dVar2) < 0.005) {
    func_0x00010bf34640(param_3);
    dVar2 = param_2;
    func_0x00010bf34640(param_5);
    bVar1 = false;
    if (((0.005 <= ABS(param_2 - dVar2)) || (dVar3 <= 0.95)) || (dVar2 = 1.05, 1.05 <= dVar3))
    goto LAB_106c1bc44;
    func_0x00010c0fc7c0(param_3);
    dVar3 = dVar2;
    func_0x00010c0fc7c0(param_5);
    dVar3 = ABS(dVar2 - dVar3);
    if (dVar3 < 0.01) {
      func_0x00010bfe0320(param_3);
      dVar2 = dVar3;
      func_0x00010bfe0320(param_5);
      bVar1 = ABS(dVar3 - dVar2) < 1.0;
      goto LAB_106c1bc44;
    }
  }
  bVar1 = false;
LAB_106c1bc44:
  _objc_release(param_5);
  return bVar1;
}



/* Entry: 106c1bc68; end: 106c1bc8f; +[SCMapCameraTransition nonAnimatedTransition] */

void FUN_106c1bc68(void)

{
  _objc_alloc(PTR_PTR_1126b1e20);
  func_0x00010c00eb00(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c1bc90; end: 106c1bd57; +[SCMapCameraUtil dynamicDurationForFlyToCoordinate:zoomLevel:mapViewport:mapView:] */

void FUN_106c1bc90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  uVar3 = param_2;
  uVar4 = param_3;
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010bf34640(param_7);
  uVar2 = uVar1;
  func_0x00010c2bf200(param_7);
  _objc_release(param_7);
  func_0x00010bf20c00(param_8);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bf8b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,param_3,uVar1,uVar3,uVar2,uVar4,param_4,param_5,
             PTR_s_dynamicDurationForFlyToCoordinat_1125c0798);
  return;
}



/* Entry: 106c1bd58; end: 106c1be87; +[SCMapCameraUtil dynamicDurationForFlyToCoordinate:toZoomLevel:fromCoordinate:fromZoomLevel:mapSize:] */

double FUN_106c1bd58(double param_1,undefined8 param_2,double param_3,double param_4,
                    undefined8 param_5,double param_6,double param_7,double param_8)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_3 + param_6) * 0.5;
  dVar2 = 0.0;
  if (0.0 <= dVar1) {
    dVar2 = dVar1;
  }
  dVar1 = (double)NEON_fminnm(dVar2,0x4039800000000000);
  _exp2();
  dVar2 = -85.0511287798066;
  if (-85.0511287798066 <= param_1) {
    dVar2 = param_1;
  }
  dVar2 = (double)NEON_fminnm(dVar2,0x40554345b1a549d7);
  dVar2 = dVar2 * 0.017453292519943295;
  _cos();
  func_0x000108d312a8(param_4,param_5,param_1,param_2);
  dVar2 = (param_4 / ((dVar2 * 6.283185307179586 * 6378137.0) / (dVar1 * 512.0))) /
          ((param_7 + param_8) * 0.5);
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  dVar1 = 25.0;
  if (dVar2 <= 25.0) {
    dVar1 = dVar2;
  }
  dVar2 = (dVar1 * 0.44999999999999996) / 25.0 + 0.4;
  if (dVar2 <= 0.4) {
    dVar2 = 0.4;
  }
  dVar1 = 0.85;
  if (dVar2 <= 0.85) {
    dVar1 = dVar2;
  }
  return dVar1;
}



/* Entry: 106c1be88; end: 106c1c06b; +[SCMapCameraUtil dynamicDurationForFlyToCoordinateBounds:edgePadding:mapViewport:mapView:] */

double FUN_106c1be88(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  
  _objc_retain(param_12);
  _objc_retain(param_11);
  uVar1 = param_11;
  func_0x00010bf2b200(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_11);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108d312f8(param_3,param_4,param_1,param_2);
  dVar2 = param_3;
  func_0x00010bf01f00(uVar1);
  dVar3 = dVar2;
  func_0x00010c0fc7c0(uVar1);
  func_0x00010bf20c00(param_12);
  dVar3 = 1.5707963267948966 - (dVar3 * 3.141592653589793) / 180.0;
  dVar7 = param_2;
  _sin(dVar3);
  dVar4 = 0.2617993877991494;
  _tan(0x3fd0c152382d7365);
  dVar5 = (param_3 * 3.141592653589793) / 180.0;
  _cos(dVar5);
  uVar6 = 0x3f60000000000000;
  dVar4 = ((dVar5 * 6.283185307179586 * 6378137.0) /
          ((dVar4 * (dVar2 / dVar3 + dVar2 / dVar3)) / param_2)) * 0.001953125;
  _log2(dVar4);
  dVar2 = dVar4;
  func_0x00010bf34640(param_11);
  dVar3 = dVar2;
  func_0x00010c2bf200(param_11);
  _objc_release(param_11);
  func_0x00010bf20c00(param_12);
  _objc_release(param_12);
  func_0x00010bf8b7c0(param_3,param_4,dVar4,dVar2,uVar6,dVar3,param_1,dVar7,param_9);
  _objc_release(uVar1);
  return param_3;
}



/* Entry: 106c1c06c; end: 106c1c24b; +[SCMapCameraUtil dynamicDurationForAnimationForCamera:otherCamera:mapSize:] */

void FUN_106c1c06c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar2 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf01f00(param_5);
  dVar3 = dVar2;
  func_0x00010c0fc7c0(param_5);
  dVar5 = dVar3;
  func_0x00010bf34640(param_5);
  dVar3 = 1.5707963267948966 - (dVar3 * 3.141592653589793) / 180.0;
  _sin();
  dVar4 = 0.2617993877991494;
  _tan();
  dVar5 = (dVar5 * 3.141592653589793) / 180.0;
  _cos();
  dVar6 = ((dVar5 * 6.283185307179586 * 6378137.0) /
          ((dVar4 * (dVar2 / dVar3 + dVar2 / dVar3)) / param_2)) * 0.001953125;
  _log2();
  dVar2 = dVar6;
  func_0x00010bf01f00(param_6);
  dVar3 = dVar2;
  func_0x00010c0fc7c0(param_6);
  dVar5 = dVar3;
  func_0x00010bf34640(param_6);
  dVar3 = 1.5707963267948966 - (dVar3 * 3.141592653589793) / 180.0;
  _sin(dVar3);
  dVar7 = (dVar5 * 3.141592653589793) / 180.0;
  dVar5 = param_2;
  _cos(dVar7);
  dVar7 = ((dVar7 * 6.283185307179586 * 6378137.0) /
          ((dVar4 * (dVar2 / dVar3 + dVar2 / dVar3)) / param_2)) * 0.001953125;
  _log2(dVar7);
  puVar1 = PTR_PTR_1126b1e08;
  dVar2 = dVar7;
  func_0x00010bf34640(param_5);
  dVar3 = dVar2;
  dVar4 = dVar5;
  _objc_release(param_5);
  func_0x00010bf34640(param_6);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bf8b7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar2,dVar5,dVar6,dVar3,dVar4,dVar7,param_1,param_2,puVar1,
             PTR_s_dynamicDurationForFlyToCoordinat_1125c0798);
  return;
}



/* Entry: 106c1c24c; end: 106c1c79f; +[SCMapCameraUtil initialCoordinateBoundsForFriendLocations:mapView:mapViewport:edgePadding:minZoom:maxZoom:] */

double FUN_106c1c24c(double param_1,double param_2,double param_3,double param_4,double param_5,
                    double param_6,undefined8 param_7,undefined8 param_8,ulong param_9,
                    undefined8 param_10,undefined8 param_11)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined8 uVar5;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar23 = param_1;
  dVar21 = param_5;
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  uVar4 = param_9;
  func_0x00010bf529e0();
  dVar15 = dVar23;
  dVar17 = param_2;
  dVar20 = param_3;
  dVar24 = param_4;
  if (uVar4 != 0) {
    uVar4 = param_9;
    func_0x00010bf529e0();
    if (uVar4 == 1) {
      uVar4 = param_9;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf51c80();
      _objc_release();
      dVar15 = dVar23;
      dVar17 = param_2;
      _CLLocationCoordinate2DIsValid();
      dVar20 = param_3;
      dVar24 = param_4;
      if ((uVar4 & 1) != 0) {
        func_0x00010bf20c00(param_10);
        FUN_106c1c7a0();
        dVar15 = dVar23;
        goto LAB_106c1c6a4;
      }
    }
    else {
      dVar15 = 0.0;
      _objc_retain(param_9);
      uVar4 = param_9;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      if (uVar4 == 0) {
        _objc_release(param_9);
        dVar17 = param_2;
        dVar20 = param_3;
        dVar24 = param_4;
      }
      else {
        uVar9 = 0;
        dVar22 = 0.0;
        dVar23 = 0.0;
        do {
          uVar10 = 0;
          do {
            if (lRam0000000000000000 != lVar2) {
              _objc_enumerationMutation(param_9);
            }
            uVar8 = *(undefined8 *)(uVar10 * 8);
            uVar5 = uVar8;
            func_0x00010bf51c80();
            iVar3 = (int)uVar5;
            _CLLocationCoordinate2DIsValid();
            if (iVar3 != 0) {
              func_0x00010bf51c80(uVar8);
              dVar23 = dVar23 + dVar15;
              func_0x00010bf51c80(uVar8);
              dVar22 = dVar22 + param_2;
              uVar9 = uVar9 + 1;
            }
            uVar10 = uVar10 + 1;
          } while (uVar4 != uVar10);
          uVar4 = param_9;
          func_0x00010bf52a60();
        } while (uVar4 != 0);
        _objc_release(param_9);
        dVar17 = param_2;
        dVar20 = param_3;
        dVar24 = param_4;
        if (uVar9 != 0) {
          dVar23 = dVar23 / (double)uVar9;
          param_2 = dVar22 / (double)uVar9;
          _CLLocationCoordinate2DMake(dVar23,param_2);
          uVar4 = param_9;
          func_0x00010c0d3c80();
          func_0x000108d320d0(dVar23,param_2);
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x00010bf529e0(uVar4);
          func_0x00010bf0a0e0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          dVar23 = 0.0;
          _objc_retain(uVar4);
          uVar9 = uVar4;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          if (uVar9 == 0) {
            dVar15 = 0.0;
          }
          else {
            dVar22 = 0.2617993877991494;
            _tan();
            bVar1 = 0;
            dVar15 = 0.0;
            dVar17 = 0.0;
            dVar20 = 0.0;
            dVar24 = 0.0;
            do {
              uVar10 = 0;
              dVar11 = dVar15;
              dVar16 = dVar17;
              dVar23 = dVar20;
              dVar18 = dVar24;
              do {
                dVar15 = dVar11;
                dVar17 = dVar16;
                dVar20 = dVar23;
                dVar24 = dVar18;
                if (lRam0000000000000000 != lVar2) {
                  _objc_enumerationMutation(uVar4);
                }
                func_0x00010befa120(puVar6);
                func_0x000108d31a2c(puVar6,&PTR___NSConcreteGlobalBlock_1109691e0);
                uVar5 = param_11;
                dVar14 = dVar15;
                param_3 = dVar20;
                dVar19 = dVar24;
                dVar21 = param_1;
                func_0x00010bf2b200(param_11);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf01f00();
                dVar12 = dVar14;
                func_0x00010c0fc7c0(uVar5);
                dVar13 = dVar12;
                func_0x00010bf34640(uVar5);
                func_0x00010bf20c00(param_10);
                dVar12 = 1.5707963267948966 - (dVar12 * 3.141592653589793) / 180.0;
                param_4 = dVar19;
                _sin();
                dVar13 = (dVar13 * 3.141592653589793) / 180.0;
                _cos();
                dVar14 = ((dVar13 * 6.283185307179586 * 6378137.0) /
                         ((dVar22 * (dVar14 / dVar12 + dVar14 / dVar12)) / dVar19)) * 0.001953125;
                _log2();
                if ((bool)((param_6 < dVar14 || dVar14 < param_5) & bVar1)) {
                  dVar23 = ABS(dVar11 - dVar23);
                  param_2 = 2.220446049250313e-16;
                  if (dVar23 <= 2.220446049250313e-16) {
                    dVar23 = ABS(dVar16 - dVar18);
                    param_2 = 2.220446049250313e-16;
                    if (dVar23 <= 2.220446049250313e-16) {
                      func_0x00010c29fd40(param_11);
                      dVar11 = dVar23;
                    }
                  }
                  _objc_release(uVar5);
                  dVar15 = dVar11;
                  goto LAB_106c1c77c;
                }
                bVar1 = (param_6 >= dVar14 && dVar14 >= param_5) | bVar1;
                _objc_release(uVar5);
                uVar10 = uVar10 + 1;
                dVar11 = dVar15;
                dVar16 = dVar17;
                dVar23 = dVar20;
                dVar18 = dVar24;
              } while (uVar9 != uVar10);
              uVar9 = uVar4;
              dVar23 = dVar15;
              param_2 = dVar17;
              param_3 = dVar20;
              param_4 = dVar24;
              func_0x00010bf52a60();
            } while (uVar9 != 0);
          }
LAB_106c1c77c:
          _objc_release(uVar4);
          _objc_release(puVar6);
          _objc_release(uVar4);
          param_6 = param_3;
          param_3 = param_4;
          param_4 = dVar21;
          goto LAB_106c1c6a4;
        }
      }
    }
  }
  param_4 = dVar21;
  param_3 = dVar24;
  param_6 = dVar20;
  param_2 = dVar17;
  dVar23 = dVar15;
  func_0x00010c29fd40(param_11);
  dVar15 = dVar23;
LAB_106c1c6a4:
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return dVar15;
  }
  ___stack_chk_fail();
  _exp2(param_6);
  func_0x000108d31494(dVar23,param_2);
  dVar20 = (ABS(param_3) / (param_6 * 512.0)) * 0.5;
  dVar17 = (ABS(param_4) / (param_6 * 512.0)) * 0.5;
  dVar15 = ((dVar17 + param_2) * -2.0 + 1.0) * 3.141592653589793;
  _sinh(dVar15);
  _atan();
  dVar15 = (dVar15 * 180.0) / 3.141592653589793;
  _CLLocationCoordinate2DMake(dVar15,(dVar23 - dVar20) * 360.0 + -180.0);
  dVar17 = ((param_2 - dVar17) * -2.0 + 1.0) * 3.141592653589793;
  _sinh(dVar17);
  _atan();
  _CLLocationCoordinate2DMake
            ((dVar17 * 180.0) / 3.141592653589793,(dVar20 + dVar23) * 360.0 + -180.0);
  return dVar15;
}



/* Entry: 106c1c7a0; end: 106c1c8af;  */

double FUN_106c1c7a0(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  _exp2(param_3);
  func_0x000108d31494(param_1,param_2);
  dVar3 = (ABS(param_4) / (param_3 * 512.0)) * 0.5;
  dVar2 = (ABS(param_5) / (param_3 * 512.0)) * 0.5;
  dVar1 = ((dVar2 + param_2) * -2.0 + 1.0) * 3.141592653589793;
  _sinh(dVar1);
  _atan();
  dVar1 = (dVar1 * 180.0) / 3.141592653589793;
  _CLLocationCoordinate2DMake(dVar1,(param_1 - dVar3) * 360.0 + -180.0);
  dVar2 = ((param_2 - dVar2) * -2.0 + 1.0) * 3.141592653589793;
  _sinh(dVar2);
  _atan();
  _CLLocationCoordinate2DMake
            ((dVar2 * 180.0) / 3.141592653589793,(dVar3 + param_1) * 360.0 + -180.0);
  return dVar1;
}



/* Entry: 106c1c8b0; end: 106c1c8bf;  */

void FUN_106c1c8b0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf51c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_coordinate_1125b20c8);
  return;
}



/* Entry: 106c1c8c0; end: 106c1ccab; +[SCMapCameraUtil initialCoordinateBoundsForFriendLocations:mapView:mapViewport:edgePadding:userLocation:minZoom:maxZoom:] */

double FUN_106c1c8c0(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                    double param_5,double param_6,undefined8 param_7,undefined8 param_8,
                    undefined *param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  if (param_12 == 0) {
    func_0x00010c29fd40(param_11);
    goto LAB_106c1cc58;
  }
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_9 != (undefined *)0x0) {
    puVar1 = param_9;
  }
  func_0x00010c0d3c80();
  func_0x00010bf51c80(param_12);
  func_0x000108d320d0(puVar1,&PTR___NSConcreteGlobalBlock_110969200);
  func_0x00010c066b00(puVar1);
  func_0x00010bf20c00(param_10);
  dVar9 = param_4;
  func_0x000108d31a2c(puVar1,&PTR___NSConcreteGlobalBlock_110969220);
  uVar2 = param_11;
  dVar8 = param_1;
  func_0x00010bf2b200(param_11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01f00();
  dVar5 = dVar8;
  func_0x00010c0fc7c0(uVar2);
  dVar7 = dVar5;
  func_0x00010bf34640(uVar2);
  func_0x00010bf20c00(param_10);
  dVar5 = 1.5707963267948966 - (dVar5 * 3.141592653589793) / 180.0;
  _sin();
  dVar6 = 0.2617993877991494;
  _tan();
  dVar7 = (dVar7 * 3.141592653589793) / 180.0;
  _cos();
  dVar8 = ((dVar7 * 6.283185307179586 * 6378137.0) /
          ((dVar6 * (dVar8 / dVar5 + dVar8 / dVar5)) / dVar9)) * 0.001953125;
  _log2();
  puVar3 = puVar1;
  dVar5 = dVar8;
  func_0x00010bf529e0();
  while (((undefined *)0x1 < puVar3 && (dVar8 < param_5))) {
    func_0x00010c12cd60(puVar1);
    func_0x000108d31a2c(puVar1,&PTR___NSConcreteGlobalBlock_110969240);
    uVar4 = param_11;
    dVar8 = dVar5;
    func_0x00010bf2b200(param_11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010bf01f00(uVar4);
    dVar7 = dVar8;
    func_0x00010c0fc7c0(uVar4);
    dVar9 = dVar7;
    func_0x00010bf34640(uVar4);
    dVar7 = 1.5707963267948966 - (dVar7 * 3.141592653589793) / 180.0;
    _sin();
    dVar9 = (dVar9 * 3.141592653589793) / 180.0;
    _cos();
    dVar8 = ((dVar9 * 6.283185307179586 * 6378137.0) /
            ((dVar6 * (dVar8 / dVar7 + dVar8 / dVar7)) / param_4)) * 0.001953125;
    _log2();
    puVar3 = puVar1;
    dVar7 = dVar8;
    func_0x00010bf529e0();
    uVar2 = uVar4;
    param_1 = dVar5;
    dVar5 = dVar7;
  }
  puVar3 = puVar1;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x1) {
    func_0x00010bf51c80(param_12);
LAB_106c1cc2c:
    FUN_106c1c7a0();
    param_1 = dVar5;
  }
  else if (param_6 < dVar8 || dVar8 < param_5) {
    func_0x00010bf51c80(param_12);
    goto LAB_106c1cc2c;
  }
  _objc_release(uVar2);
  _objc_release(puVar1);
LAB_106c1cc58:
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  return param_1;
}



/* Entry: 106c1ccac; end: 106c1ccc3;  */

void FUN_106c1ccac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf51c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_coordinate_1125b20c8);
  return;
}



/* Entry: 106c1ccc4; end: 106c1ccdf; +[SCMapCameraUtil flyToCoordinateBounds:mapViewport:duration:edgePadding:completion:] */

void FUN_106c1ccc4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb34f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_flyToCoordinateBounds_pitch_mapV_1125ca6e0);
  return;
}



/* Entry: 106c1cce0; end: 106c1cfdb; +[SCMapCameraUtil flyToCoordinateBounds:pitch:mapViewport:duration:edgePadding:completion:] */

void FUN_106c1cce0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010c2121a0(param_9);
  uVar1 = param_9;
  func_0x00010bf28e60(param_9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_9;
  dVar5 = param_1;
  uVar8 = param_2;
  func_0x00010bf2b200(param_9);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c5a00;
  _objc_alloc();
  func_0x00010bf34640(uVar2);
  dVar6 = dVar5;
  func_0x00010bfe0320(uVar2);
  dVar7 = dVar6;
  func_0x00010bf01f00(uVar2);
  func_0x00010c0f0ba0(uVar2);
  func_0x00010bffd4e0(dVar5,uVar8,dVar6,param_5,dVar7);
  _objc_release(uVar2);
  func_0x00010bf34640(puVar3);
  if (dVar5 <= -90.0) goto LAB_106c1cf90;
  puVar4 = puVar3;
  func_0x00010c083880();
  if ((int)puVar4 != 0) {
    if (param_10 != 0) {
      (**(code **)(param_10 + 0x10))(param_10,0);
    }
    goto LAB_106c1cf90;
  }
  puVar4 = puVar3;
  func_0x00010c0838a0();
  if ((int)puVar4 == 0) {
LAB_106c1cf14:
    _objc_retain(puVar3);
    _objc_retain(param_9);
    _objc_retain(param_10);
    func_0x00010bfb33c0(param_6,param_9);
    _objc_release(param_10);
    _objc_release(param_9);
  }
  else {
    func_0x00010bf01f00(puVar3);
    dVar6 = dVar5;
    func_0x00010bf01f00(uVar1);
    if (dVar5 <= dVar6) goto LAB_106c1cf14;
    _objc_retain(puVar3);
    _objc_retain(param_9);
    _objc_retain(param_10);
    func_0x00010bf34760(param_1,param_2,param_3,param_4,in_stack_00000000,in_stack_00000008,
                        in_stack_00000010,in_stack_00000018,param_7);
    _objc_release(param_10);
    _objc_release(param_9);
  }
  _objc_release(puVar3);
LAB_106c1cf90:
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  return;
}



/* Entry: 106c1cfdc; end: 106c1d0c3;  */

void FUN_106c1cfdc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf28e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0838a0(uVar2);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106c1d03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,(uint)uVar2 ^ 1);
    return;
  }
  return;
}



/* Entry: 106c1d0c4; end: 106c1d1b7; +[SCMapCameraUtil centerMapViewport:bounds:animated:edgePadding:completion:] */

void FUN_106c1d0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,int param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_13);
  _objc_retain(param_11);
  func_0x00010c2121a0(param_11,param_10,0);
  uVar1 = param_11;
  func_0x00010bf2b200(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_11);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0x3fd3333333333333;
  if (param_12 == 0) {
    uVar2 = 0;
  }
  func_0x00010c176100(uVar2,param_11,param_10,uVar1,param_13);
  _objc_release(param_13);
  _objc_release(param_11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c1d1b8; end: 106c1d1e7; +[SCMapCameraUtil flyToCoordinate:zoomLevel:mapView:mapViewport:duration:edgePadding:completion:] */

void FUN_106c1d1b8(void)

{
  func_0x00010bfb34a0();
  return;
}



/* Entry: 106c1d1e8; end: 106c1d33f; +[SCMapCameraUtil cameraForCoordinate:zoomLevel:pitch:heading:mapView:edgePadding:] */

void FUN_106c1d1e8(double param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar2;
  
  uVar2 = param_8;
  dVar7 = param_4;
  _objc_retain();
  iVar1 = (int)uVar2;
  _CLLocationCoordinate2DIsValid(param_1,param_2);
  if (iVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010bf20c00(param_8);
    dVar5 = 0.0;
    if (0.0 <= param_3) {
      dVar5 = param_3;
    }
    dVar4 = (double)NEON_fminnm(dVar5,0x4039800000000000);
    _exp2(dVar4);
    dVar5 = -85.0511287798066;
    if (-85.0511287798066 <= param_1) {
      dVar5 = param_1;
    }
    dVar5 = (double)NEON_fminnm(dVar5,0x40554345b1a549d7);
    dVar5 = dVar5 * 0.017453292519943295;
    _cos(dVar5);
    dVar6 = 0.2617993877991494;
    _tan(0x3fd0c152382d7365);
    puVar3 = PTR_PTR_1126c5a00;
    _objc_alloc(PTR_PTR_1126c5a00);
    func_0x00010bffd4e0(param_1,param_2,param_5,param_4,
                        (((dVar5 * 6.283185307179586 * 6378137.0) / (dVar4 * 512.0)) * dVar7 * 0.5)
                        / dVar6);
  }
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c1d340; end: 106c1d62b; +[SCMapCameraUtil flyToCoordinate:zoomLevel:pitch:mapView:mapViewport:duration:edgePadding:completion:] */

void FUN_106c1d340(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  long param_10)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010c2121a0(param_9);
  func_0x00010bf29880(param_1,param_2,param_3,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  if (param_6 == 0) {
    if (param_10 == 0) goto LAB_106c1d5e0;
    pcVar4 = *(code **)(param_10 + 0x10);
    uVar3 = 1;
  }
  else {
    func_0x00010bf50ea0(param_1,param_2,param_9);
    func_0x00010bf20c00(param_8);
    func_0x00010bf20c00(param_8);
    func_0x00010bf20c00(param_8);
    func_0x00010bf20c00(param_8);
    func_0x00010bf51400(param_1 - param_3 * 0.5,param_2 - param_4 * 0.5,param_9);
    uVar3 = param_9;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c071ae0();
    _objc_release(uVar3);
    if ((int)uVar1 == 0) {
      uVar3 = param_9;
      func_0x00010bf28e60(param_9);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_6;
      func_0x00010c0838a0();
      _objc_release(uVar3);
      if ((int)lVar2 == 0) {
        _objc_retain(param_6);
        _objc_retain(param_9);
        _objc_retain(param_10);
        func_0x00010bfb33c0(param_5,param_9);
        _objc_release(param_10);
        _objc_release(param_9);
        lVar2 = param_6;
      }
      else {
        _objc_retain(param_10);
        func_0x00010c176100(param_5,param_9);
        lVar2 = param_10;
      }
      _objc_release(lVar2);
      goto LAB_106c1d5e0;
    }
    if (param_10 == 0) goto LAB_106c1d5e0;
    pcVar4 = *(code **)(param_10 + 0x10);
    uVar3 = 0;
  }
  (*pcVar4)(param_10,uVar3);
LAB_106c1d5e0:
  _objc_release(param_6);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  return;
}



/* Entry: 106c1d62c; end: 106c1d643;  */

void FUN_106c1d62c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106c1d63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 106c1d644; end: 106c1d737;  */

void FUN_106c1d644(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf28e60(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0838a0(uVar2);
    uVar4 = (uint)uVar2 ^ 1;
    _objc_release(uVar1);
  }
  else {
    uVar4 = 0;
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106c1d6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,uVar4);
    return;
  }
  return;
}



/* Entry: 106c1d738; end: 106c1d9ab;  */

/* WARNING: Removing unreachable block (ram,0x000106c1da90) */
/* WARNING: Removing unreachable block (ram,0x000106c1da9c) */
/* WARNING: Removing unreachable block (ram,0x000106c1daa0) */
/* WARNING: Removing unreachable block (ram,0x000106c1daa4) */
/* WARNING: Removing unreachable block (ram,0x000106c1daa8) */
/* WARNING: Removing unreachable block (ram,0x000106c1daac) */
/* WARNING: Removing unreachable block (ram,0x000106c1dac8) */
/* WARNING: Removing unreachable block (ram,0x000106c1dacc) */
/* WARNING: Removing unreachable block (ram,0x000106c1dad4) */
/* WARNING: Removing unreachable block (ram,0x000106c1dad8) */
/* WARNING: Removing unreachable block (ram,0x000106c1dae0) */
/* WARNING: Removing unreachable block (ram,0x000106c1dae4) */
/* WARNING: Removing unreachable block (ram,0x000106c1dae8) */
/* WARNING: Removing unreachable block (ram,0x000106c1daec) */
/* WARNING: Removing unreachable block (ram,0x000106c1daf0) */

void FUN_106c1d738(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  
  puVar11 = PTR_PTR_1126d1650;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc_init();
  puVar1 = PTR_PTR_1126d1658;
  _objc_alloc_init();
  func_0x00010c1cafa0();
  uVar2 = 0x2a;
  FUN_106c1d9ac(0x2a,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126d1658;
  _objc_alloc_init();
  func_0x00010c1cafa0();
  uVar2 = 0x2d;
  FUN_106c1d9ac(0x2d,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar3);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126d1658;
  _objc_alloc_init();
  func_0x00010c1cafa0();
  uVar2 = 0x28;
  FUN_106c1d9ac(0x28,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar4);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126d1658;
  _objc_alloc_init();
  func_0x00010c1cafa0();
  uVar2 = 0x6b;
  FUN_106c1d9ac(0x6b,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(puVar5);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126d1658;
  _objc_alloc_init();
  func_0x00010c1cafa0();
  uVar7 = 0x6a;
  uVar2 = param_1;
  FUN_106c1d9ac(0x6a,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c220160(puVar6);
  _objc_release(uVar7);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eb80(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_retain(uVar2);
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar9;
    func_0x00010c13afc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar9);
    puVar9 = puVar1;
    func_0x00010bfc9760();
    puVar11 = (undefined *)0x0;
    if ((int)puVar9 != 0) {
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 106c1d9ac; end: 106c1db67;  */

/* WARNING: Removing unreachable block (ram,0x000106c1da90) */
/* WARNING: Removing unreachable block (ram,0x000106c1da9c) */
/* WARNING: Removing unreachable block (ram,0x000106c1daa0) */
/* WARNING: Removing unreachable block (ram,0x000106c1daa4) */
/* WARNING: Removing unreachable block (ram,0x000106c1daa8) */
/* WARNING: Removing unreachable block (ram,0x000106c1daac) */
/* WARNING: Removing unreachable block (ram,0x000106c1dac8) */
/* WARNING: Removing unreachable block (ram,0x000106c1dacc) */
/* WARNING: Removing unreachable block (ram,0x000106c1dad4) */
/* WARNING: Removing unreachable block (ram,0x000106c1dad8) */
/* WARNING: Removing unreachable block (ram,0x000106c1dae0) */
/* WARNING: Removing unreachable block (ram,0x000106c1dae4) */
/* WARNING: Removing unreachable block (ram,0x000106c1dae8) */
/* WARNING: Removing unreachable block (ram,0x000106c1daec) */
/* WARNING: Removing unreachable block (ram,0x000106c1daf0) */

void FUN_106c1d9ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_2);
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c13afc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bfc9760();
  puVar3 = (undefined *)0x0;
  if ((int)puVar1 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c1db68; end: 106c1dbdb; -[SCMemoriesCameraRollIndexBackgroundJobProcessor initWithJobProcessorScheduler:] */

undefined1 * FUN_106c1db68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5cc0;
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



/* Entry: 106c1dbdc; end: 106c1dc33; -[SCMemoriesCameraRollIndexBackgroundJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_106c1dbdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  _objc_retain(param_3);
  _objc_retain(param_6);
  (**(code **)(param_6 + 0x10))(param_6,0,0);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 106c1dc34; end: 106c1dc3f; -[SCMemoriesCameraRollIndexBackgroundJobProcessor .cxx_destruct] */

void FUN_106c1dc34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106c1dc40; end: 106c1dc43; -[SCMemoriesCameraRollIndexBackgroundJobProviderEntryPoint begin] */

void FUN_106c1dc40(void)

{
  return;
}



/* Entry: 106c1dc44; end: 106c1dcbf; -[SCMemoriesCameraRollIndexBackgroundJobProviderEntryPoint _jobProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c1dc44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d1668;
  _objc_alloc(PTR_PTR_1126d1668);
  param_1 = param_1 + _DAT_11275af98;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c150420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020840(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c1dcc0; end: 106c1deb3; -[SCMemoriesCameraRollIndexBackgroundJobProviderEntryPoint _jobConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c1dcc0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  param_1 = param_1 + _DAT_11275af9c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  puVar4 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  puVar5 = PTR_PTR_1126b7248;
  _objc_opt_new(PTR_PTR_1126b7248);
  lVar1 = lVar2;
  func_0x000108ec0b18(lVar2);
  func_0x00010c1eac20(puVar5,param_2,lVar1);
  func_0x00010c1e9180(puVar4,param_2,puVar5);
  func_0x00010c1b67e0(puVar3,param_2,puVar4);
  puVar6 = PTR_PTR_1126b7230;
  _objc_opt_new(PTR_PTR_1126b7230);
  lVar1 = lVar2;
  func_0x000108ec0b68(lVar2);
  func_0x00010c1c35c0(puVar6,param_2,lVar1);
  func_0x00010c1edbc0(puVar6,param_2,2);
  lVar1 = lVar2;
  func_0x000108ec0b40(lVar2);
  func_0x00010c1edae0(puVar6,param_2,lVar1);
  func_0x00010c1ed860(puVar3,param_2,puVar6);
  puVar7 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  lVar1 = lVar2;
  func_0x000108ec09b4(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169200(puVar7,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x000108ec0988(lVar2);
  func_0x00010c20bfc0(puVar7,param_2,lVar1);
  func_0x00010c1b66e0(puVar3,param_2,puVar7);
  func_0x00010c198180(puVar3,param_2,1);
  func_0x00010c1b6780(puVar3,param_2,0);
  puVar8 = puVar3;
  func_0x00010c1b6840(puVar3,param_2,&PTR____CFConstantStringClassReference_110e797d8);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b67a0(puVar3,param_2,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c1deb4; end: 106c1df4b; -[SCMemoriesCameraRollIndexBackgroundJobProviderEntryPoint _submitBackgroundJob] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c1deb4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010be46360();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275afa0;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f200();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106c1df4c; end: 106c1df9b; -[SCMemoriesCameraRollIndexBackgroundJobProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c1df4c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275af98);
  _objc_destroyWeak(param_1 + _DAT_11275af9c);
  _objc_destroyWeak(param_1 + _DAT_11275afa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275afa4);
  return;
}



/* Entry: 106c1df9c; end: 106c1e04f; -[SCMemoriesCameraRollIndexCommand initWithJobType:jobSubtypeIdentifier:completion:] */

undefined1 *
FUN_106c1df9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f5cc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106c1e050; end: 106c1e15f; -[SCMemoriesCameraRollIndexCommand isEqualToCommand:] */

uint FUN_106c1e050(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x23;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar1 = 0;
    goto LAB_106c1e13c;
  }
  lVar2 = param_1;
  func_0x00010c085920(param_1);
  lVar3 = param_3;
  func_0x00010c085920(param_3);
  lVar4 = param_1;
  func_0x00010c085840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    unaff_x23 = param_3;
    func_0x00010c085840();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x23 != 0) goto LAB_106c1e0c4;
    uVar1 = 1;
LAB_106c1e120:
    _objc_release(unaff_x23);
  }
  else {
LAB_106c1e0c4:
    func_0x00010c085840(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c085840(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c0720c0(param_1,param_2,lVar5);
    uVar1 = (uint)lVar6;
    _objc_release(lVar5);
    _objc_release(param_1);
    if (lVar4 == 0) goto LAB_106c1e120;
  }
  _objc_release(lVar4);
  uVar1 = lVar2 == lVar3 & uVar1;
LAB_106c1e13c:
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106c1e160; end: 106c1e1d7; -[SCMemoriesCameraRollIndexCommand isEqual:] */

ulong FUN_106c1e160(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    param_1 = 1;
  }
  else {
    puVar1 = PTR_PTR_1126d1670;
    _objc_opt_class(PTR_PTR_1126d1670);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010c071c80(param_1);
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106c1e1d8; end: 106c1e22b; -[SCMemoriesCameraRollIndexCommand hash] */

ulong FUN_106c1e1d8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010c085920();
  func_0x00010c085840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar2 ^ uVar1;
}



/* Entry: 106c1e22c; end: 106c1e233; -[SCMemoriesCameraRollIndexCommand jobType] */

undefined8 FUN_106c1e22c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106c1e234; end: 106c1e23b; -[SCMemoriesCameraRollIndexCommand setJobType:] */

void FUN_106c1e234(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106c1e23c; end: 106c1e243; -[SCMemoriesCameraRollIndexCommand jobSubtypeIdentifier] */

undefined8 FUN_106c1e23c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106c1e244; end: 106c1e24b; -[SCMemoriesCameraRollIndexCommand setJobSubtypeIdentifier:] */

void FUN_106c1e244(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106c1e24c; end: 106c1e253; -[SCMemoriesCameraRollIndexCommand completion] */

undefined8 FUN_106c1e24c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106c1e254; end: 106c1e25b; -[SCMemoriesCameraRollIndexCommand setCompletion:] */

void FUN_106c1e254(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106c1e25c; end: 106c1e28b; -[SCMemoriesCameraRollIndexCommand .cxx_destruct] */

void FUN_106c1e25c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106c1e28c; end: 106c1e673; -[SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler initWithCoreConfigProvider:photoPermissionCoordinator:applicationLifecycleEvents:grapheneRegistry:transactorProvider:localNotificationScheduler:boltDataUploader:snapIndexClientService:deviceIdentifierProvider:performer:blizzardLogger:modelProvider:memoriesVisualTagAnalyzer:memoriesLogger:fetchLimit:requestHeaderProvider:] */

undefined8 *
FUN_106c1e28c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  puStack_70 = PTR_PTR_1126f5cd0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[2];
    puVar1[2] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[4];
    puVar1[4] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[5];
    puVar1[5] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[6];
    puVar1[6] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d1678;
    _objc_alloc();
    func_0x00010c005c40();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126d1680;
    _objc_alloc();
    func_0x00010bff90c0();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[7];
    puVar1[7] = param_17;
    _objc_release(uVar2);
    _objc_release(param_7);
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



/* Entry: 106c1e674; end: 106c1e67b;  */

void FUN_106c1e674(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  lVar1 = lRam00000001136c6e10;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106c2a098;
  puStack_40 = &UNK_110842e18;
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  uVar4 = uVar3;
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x1136c6e10,&puStack_58);
    uVar4 = uStack_38;
  }
  uVar2 = uRam00000001136c6e18;
  _objc_retain(uRam00000001136c6e18);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106c1e67c; end: 106c1e7bb; -[SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler scheduleJob:jobSubtypeIdentifier:completionCallback:] */

void FUN_106c1e67c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x106c1e740;
  puStack_68 = &UNK_110845188;
  uStack_60 = param_4;
  lStack_58 = param_1;
  uStack_50 = param_5;
  uStack_48 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106c1e7bc; end: 106c1e84b; -[SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler cancel] */

void FUN_106c1e7bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000108ec0d94();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_106c1e84c;
    puStack_40 = &UNK_110842e18;
    lStack_38 = param_1;
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_58);
  }
  return;
}



/* Entry: 106c1e84c; end: 106c1e887;  */

/* WARNING: Possible PIC construction at 0x000106c1e870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106c1e874) */

void FUN_106c1e84c(long param_1)

{
  func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 106c1e888; end: 106c1e8cb; -[SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler _addCommandAndExecuteIfNecessary:] */

void FUN_106c1e888(long param_1)

{
  long lVar1;
  
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x60));
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010bf529e0();
  if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010be0bb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__executeFirstCommandIfNecessary_112560878);
    return;
  }
  return;
}



/* Entry: 106c1e8cc; end: 106c1e943; -[SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler _executeFirstCommandIfNecessary] */

void FUN_106c1e8cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x60);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c085920();
    if (lVar1 == 1) {
      func_0x00010be9b980(param_1,param_2,lVar2);
    }
    else if (lVar1 == 0) {
      func_0x00010be9b120(param_1,param_2,lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 106c1e944; end: 106c1e993; -[SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler _didFinish:] */

void FUN_106c1e944(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf4b900(uVar1,param_2,param_3);
  if ((int)uVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x60),param_2,param_3);
  }
  func_0x00010be0bb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c1e994; end: 106c1ebc7; -[SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler _scheduleIndexJob:] */

void FUN_106c1e994(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c085920();
  uVar2 = param_4;
  func_0x00010c085840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(uVar8);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar10);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_80,param_2);
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c24f020(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_80);
  uStack_90 = param_1;
  uStack_88 = uVar1;
  _objc_retain(param_4);
  uVar1 = uVar7;
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 106c1ebc8; end: 106c1f033;  */

void FUN_106c1ebc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    _objc_release(uVar1);
    _CACurrentMediaTime();
    func_0x00010c0c0800(param_2);
    func_0x00010bdfe140(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c1f034; end: 106c1f267; -[SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler _scheduleUploadJob:] */

void FUN_106c1f034(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c085920();
  uVar2 = param_4;
  func_0x00010c085840();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  _objc_retain(uVar8);
  uVar4 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  _objc_retain(uVar9);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar10);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_80,param_2);
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  func_0x00010c2516c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_80);
  uStack_90 = param_1;
  uStack_88 = uVar1;
  _objc_retain(param_4);
  uVar1 = uVar7;
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 106c1f268; end: 106c1f367;  */

void FUN_106c1f268(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _CACurrentMediaTime();
    func_0x00010c0c0800(param_2);
    func_0x00010bdfe140(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c1f368; end: 106c1f5af;  */

void FUN_106c1f368(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0c8b00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  FUN_106c29fc4(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b5f2274(*(undefined8 *)(param_1 + 0x58),uVar1,uVar2,1,0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x000106c1ede8(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x50),1,0,
                      *(undefined8 *)(param_1 + 0x30));
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0,0);
  FUN_106c2a78c(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),1,0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c1f5b0; end: 106c1f657; -[SCMemoriesCameraRollIndexBackgroundJobProcessorScheduler .cxx_destruct] */

void FUN_106c1f5b0(long param_1)

{
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



/* Entry: 106c1f658; end: 106c1faa7; -[SCMemoriesCameraRollIndexBackgroundJobProcessorSchedulerServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c1f658(long param_1,undefined8 param_2)

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
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  long lVar30;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3c0fa5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar1,param_2,puVar2,0x15,0,0xc);
  _objc_release(puVar2);
  lVar3 = param_1 + _DAT_11275afe4;
  _objc_loadWeakRetained(lVar3);
  lVar30 = lVar3;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bdf37a0(param_1,param_2,lVar30,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar30);
  _objc_release(lVar3);
  lVar30 = (long)_DAT_11275afe8;
  lVar3 = param_1 + lVar30;
  _objc_loadWeakRetained();
  lVar5 = lVar3;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar3);
  puVar2 = PTR_PTR_1126d1690;
  _objc_alloc();
  lVar30 = param_1 + lVar30;
  _objc_loadWeakRetained();
  lVar7 = lVar30;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11275afec;
  _objc_loadWeakRetained();
  lVar8 = lVar3;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11275aff0;
  _objc_loadWeakRetained();
  lVar9 = lVar5;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11275aff4;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11275aff8;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c2798e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11275affc;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c09dc80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11275b000;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf1ef20();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11275b004;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bfe5f40();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11275b008;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_11275b00c;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c0d0060();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_11275b010;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c0ca040();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_11275b014;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010c08f100();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275b018;
  _objc_loadWeakRetained();
  lVar28 = param_1;
  func_0x00010bfdfdc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005c60(puVar2,param_2,lVar7,lVar8,lVar9,lVar11,lVar13,lVar15,lVar17,lVar4,lVar19,
                      puVar1,lVar21,lVar23,lVar25,lVar27,lVar6,lVar28);
  _objc_release(lVar28);
  _objc_release(param_1);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
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
  _objc_release(lVar5);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar30);
  puVar29 = PTR_PTR_1126d1698;
  _objc_alloc(PTR_PTR_1126d1698);
  func_0x00010c041d40();
  _objc_release(puVar2);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar29);
  return;
}



/* Entry: 106c1faa8; end: 106c1fad7;  */

void FUN_106c1faa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0fb7e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 106c1fad8; end: 106c1fcab; -[SCMemoriesCameraRollIndexBackgroundJobProcessorSchedulerServiceProvider _createSnapFeedCameraRollIndexUploadService:performer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c1fad8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  lVar2 = (long)_DAT_11275afe8;
  _objc_retain(param_3);
  param_1 = param_1 + lVar2;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106c1fbbc;
  puStack_48 = &UNK_110969378;
  lStack_40 = lVar2;
  uStack_38 = param_4;
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0b8600(param_3,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106c1fcac; end: 106c1fd7f; -[SCMemoriesCameraRollIndexBackgroundJobProcessorSchedulerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c1fcac(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275b018);
  _objc_destroyWeak(param_1 + _DAT_11275b014);
  _objc_destroyWeak(param_1 + _DAT_11275b010);
  _objc_destroyWeak(param_1 + _DAT_11275b00c);
  _objc_destroyWeak(param_1 + _DAT_11275b008);
  _objc_destroyWeak(param_1 + _DAT_11275b004);
  _objc_destroyWeak(param_1 + _DAT_11275afe4);
  _objc_destroyWeak(param_1 + _DAT_11275b000);
  _objc_destroyWeak(param_1 + _DAT_11275affc);
  _objc_destroyWeak(param_1 + _DAT_11275aff8);
  _objc_destroyWeak(param_1 + _DAT_11275afec);
  _objc_destroyWeak(param_1 + _DAT_11275aff4);
  _objc_destroyWeak(param_1 + _DAT_11275aff0);
  _objc_destroyWeak(param_1 + _DAT_11275afe8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275b01c);
  return;
}



/* Entry: 106c1fd80; end: 106c1fdf3; -[SCMemoriesCameraRollUploadBackgroundJobProcessor initWithJobProcessorScheduler:] */

undefined1 * FUN_106c1fd80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5cd8;
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



/* Entry: 106c1fdf4; end: 106c1fe4b; -[SCMemoriesCameraRollUploadBackgroundJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_106c1fdf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  _objc_retain(param_3);
  _objc_retain(param_6);
  (**(code **)(param_6 + 0x10))(param_6,0,0);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 106c1fe4c; end: 106c1fe57; -[SCMemoriesCameraRollUploadBackgroundJobProcessor .cxx_destruct] */

void FUN_106c1fe4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


