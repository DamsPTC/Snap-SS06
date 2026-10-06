/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067c03d4; end: 1067c0403; -[SCExtensionGroupAvatarBitmoji .cxx_destruct] */

void FUN_1067c03d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1067c0404; end: 1067c040f; +[SCCInAppNotification componentPath] */

undefined ** FUN_1067c0404(void)

{
  return &PTR____CFConstantStringClassReference_110e5f578;
}



/* Entry: 1067c0410; end: 1067c0443; -[SCCInAppNotification initWithViewModel:componentContext:runtime:] */

void FUN_1067c0410(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f32a0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 1067c0444; end: 1067c0493; -[SCCInAppNotification setViewModel:] */

void FUN_1067c0444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1067c0494; end: 1067c04d7; -[SCCInAppNotification viewModel] */

void FUN_1067c0494(undefined8 param_1)

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



/* Entry: 1067c04d8; end: 1067c0523; -[SCCAnimationOptions__Enum init] */

void FUN_1067c04d8(void)

{
  undefined1 in_ZR;
  
  func_0x0001067c07b0();
  func_0x0001067c0798(PTR_PTR_113163c28);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001067c0760();
  func_0x0001067c07d4();
  func_0x0001067c0780();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001067c07b0();
    func_0x0001067c0798(PTR_PTR_113163c30);
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001067c0760();
    func_0x0001067c07d4();
    func_0x0001067c0780();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001067c0770(PTR_PTR_1126f32a8);
      func_0x0001067c074c();
      return;
    }
  }
  return;
}



/* Entry: 1067c0524; end: 1067c056f; -[SCCAvatarThumbnailType__Enum init] */

void FUN_1067c0524(void)

{
  undefined1 in_ZR;
  
  func_0x0001067c07b0();
  func_0x0001067c0798(PTR_PTR_113163c30);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001067c0760();
  func_0x0001067c07d4();
  func_0x0001067c0780();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001067c0770(PTR_PTR_1126f32a8);
  func_0x0001067c074c();
  return;
}



/* Entry: 1067c0570; end: 1067c05a7; -[SCCAvatarThumbnail initWithType:] */

void FUN_1067c0570(void)

{
  func_0x0001067c0770(PTR_PTR_1126f32a8);
  func_0x0001067c074c();
  return;
}



/* Entry: 1067c05a8; end: 1067c05bb; +[SCCAvatarThumbnail valdiMarshallableObjectDescriptor] */

void FUN_1067c05a8(undefined8 *param_1)

{
  *param_1 = &PTR_s_uri_11093c8a0;
  param_1[1] = &PTR_s_SCNValdiCoreAsset_11093c930;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067c05bc; end: 1067c05db; -[SCCInAppNotificationButton init] */

void FUN_1067c05bc(void)

{
  func_0x0001067c0738(PTR_PTR_1126f32b0);
  return;
}



/* Entry: 1067c05dc; end: 1067c05f3; +[SCCInAppNotificationButton valdiMarshallableObjectDescriptor] */

void FUN_1067c05dc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_icon_11093c950;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067c05f4; end: 1067c0613; -[SCCInAppNotificationButtonContext init] */

void FUN_1067c05f4(void)

{
  func_0x0001067c0738(PTR_PTR_1126f32b8);
  return;
}



/* Entry: 1067c0614; end: 1067c0627; +[SCCInAppNotificationButtonContext valdiMarshallableObjectDescriptor] */

void FUN_1067c0614(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11093ca10;
  param_1[1] = &PTR_s_SCBridgeObservable_11093ca58;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067c0628; end: 1067c0647; -[SCCInAppNotificationContext init] */

void FUN_1067c0628(void)

{
  func_0x0001067c0738(PTR_PTR_1126f32c0);
  return;
}



/* Entry: 1067c0648; end: 1067c065b; +[SCCInAppNotificationContext valdiMarshallableObjectDescriptor] */

void FUN_1067c0648(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11093ca70;
  param_1[1] = &PTR_DAT_11093cad0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067c065c; end: 1067c067b; -[SCCInAppNotificationTrailingTextContext init] */

void FUN_1067c065c(void)

{
  func_0x0001067c0738(PTR_PTR_1126f32c8);
  return;
}



/* Entry: 1067c067c; end: 1067c068f; +[SCCInAppNotificationTrailingTextContext valdiMarshallableObjectDescriptor] */

void FUN_1067c067c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11093cae8;
  param_1[1] = &PTR_s_SCBridgeObservable_11093cb18;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067c0690; end: 1067c06cb; -[SCCInAppNotificationViewModel initWithMsSinceQueued:] */

void FUN_1067c0690(void)

{
  func_0x0001067c0770(PTR_PTR_1126f32d0);
  func_0x0001067c074c();
  return;
}



/* Entry: 1067c06cc; end: 1067c06df; +[SCCInAppNotificationViewModel valdiMarshallableObjectDescriptor] */

void FUN_1067c06cc(undefined8 *param_1)

{
  *param_1 = &PTR_s_title_11093cb28;
  param_1[1] = &PTR_DAT_11093cc30;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067c06e0; end: 1067c0713; -[SCCSubtitle initWithText:emphasis:] */

void FUN_1067c06e0(void)

{
  func_0x0001067c0770(PTR_PTR_1126f32d8);
  func_0x0001067c074c();
  return;
}



/* Entry: 1067c0714; end: 1067c07df; +[SCCSubtitle valdiMarshallableObjectDescriptor] */

void FUN_1067c0714(undefined8 *param_1)

{
  *param_1 = &PTR_s_text_11093cc50;
  param_1[1] = &PTR_s_SCNValdiCoreAsset_11093ccf8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067c07e0; end: 1067c0bc3; -[SCLegacyNotificationSettingsPresenter initWithNavigationServices:userSession:featureSettingsService:featureFlagStore:notificationDataService:notificationsPermissionRequester:permissionRequestService:userScopedAppGroupUserDefaults:discoverFeedNotificationServices:creatorNotificationServices:userTrackedLogger:notificationOSSettingsRetriever:circumstanceEngine:familyCenterEligibilityChecker:composerServices:composerSUPServices:valdiWebLauncherServices:deckService:] */

undefined8 *
FUN_1067c07e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1126f32e0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[3];
    puVar1[3] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
  }
  _objc_release(param_20);
  _objc_release(param_19);
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



/* Entry: 1067c0bc4; end: 1067c0d5b; -[SCLegacyNotificationSettingsPresenter showNotificationSettingsWithContext:] */

void FUN_1067c0bc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x0001070c2404();
  if (iVar1 == 0) {
    uVar3 = *(ulong *)(param_1 + 0x18);
    func_0x0001070c23f0();
    if ((uVar3 & 1) == 0) {
      func_0x00010be84d00(param_1);
      goto LAB_1067c0d18;
    }
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1067c0e80;
    puStack_80 = &UNK_11084b7a0;
    ppuVar4 = &puStack_98;
    _objc_copyWeak(auStack_70,auStack_38);
    _objc_retain(param_3);
    uStack_78 = param_3;
    func_0x00010bf37da0(uVar2);
    uVar2 = uStack_78;
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010bf0c2c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1067c0d5c;
    puStack_50 = &UNK_11093cd08;
    ppuVar4 = &puStack_68;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x00010bfc9bc0(uVar2);
    _objc_release(uVar2);
    uVar2 = uStack_48;
  }
  _objc_release(uVar2);
  _objc_destroyWeak(ppuVar4 + 5);
  _objc_destroyWeak(auStack_38);
LAB_1067c0d18:
  _objc_release(param_3);
  return;
}



/* Entry: 1067c0d5c; end: 1067c0e43;  */

void FUN_1067c0d5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1067c0e44; end: 1067c0e7f;  */

void FUN_1067c0e44(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be84ee0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067c0e80; end: 1067c0ecb;  */

void FUN_1067c0e80(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be84d00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067c0ecc; end: 1067c1017; -[SCLegacyNotificationSettingsPresenter _pushNotificationSettingsViewControllerWithContext:userIsInFamilyCenter:] */

void FUN_1067c0ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar6 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_dismissAllPresentedViews_1125be5f0);
  if ((uVar6 & 1) != 0) {
    func_0x00010bf83120(uVar1);
  }
  puVar2 = PTR_PTR_1126ce0c0;
  _objc_alloc(PTR_PTR_1126ce0c0);
  func_0x00010c05f0c0();
  puVar3 = PTR_PTR_1126ce0c8;
  _objc_alloc(PTR_PTR_1126ce0c8);
  func_0x00010c004440();
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0d66a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067c1018; end: 1067c11ef; -[SCLegacyNotificationSettingsPresenter _pushV2NotificationSettingsWithRuntime:context:] */

void FUN_1067c1018(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  _objc_opt_respondsToSelector(uVar2,PTR_s_dismissAllPresentedViews_1125be5f0);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf83120(uVar2);
  }
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    puVar5 = PTR_PTR_1126ce0c0;
    _objc_alloc();
    func_0x00010c05f0c0();
    puVar6 = PTR_PTR_1126ce0d0;
    _objc_alloc(PTR_PTR_1126ce0d0);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040be0(puVar6);
    _objc_release(uVar8);
    _objc_release(uVar7);
    func_0x00010c11c520(lVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(lVar4);
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067c11f0; end: 1067c12df; -[SCLegacyNotificationSettingsPresenter .cxx_destruct] */

void FUN_1067c11f0(long param_1)

{
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



/* Entry: 1067c12e0; end: 1067c1663;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c12e0(long param_1,undefined8 param_2)

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
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar29 = (undefined *)0x0;
  }
  else {
    puVar29 = PTR_PTR_1126ce0d8;
    _objc_alloc();
    lVar1 = param_1 + _DAT_112750688;
    _objc_loadWeakRetained();
    lVar2 = param_1 + _DAT_11275068c;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_112750690;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bfa2b80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_112750694;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010bfa23c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_112750698;
    _objc_loadWeakRetained();
    lVar30 = (long)_DAT_11275069c;
    lVar9 = param_1 + lVar30;
    _objc_loadWeakRetained();
    lVar10 = lVar9;
    func_0x00010c0dccc0();
    _objc_retainAutoreleasedReturnValue();
    lVar30 = param_1 + lVar30;
    _objc_loadWeakRetained();
    lVar11 = lVar30;
    func_0x00010c0f9c20();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1 + _DAT_1127506a0;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010bf05240();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = param_1 + _DAT_1127506a4;
    _objc_loadWeakRetained();
    lVar15 = param_1 + _DAT_1127506a8;
    _objc_loadWeakRetained();
    lVar16 = param_1 + _DAT_1127506ac;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_1 + _DAT_1127506b0;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010c0dc400();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1 + _DAT_1127506b4;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_1 + _DAT_1127506b8;
    _objc_loadWeakRetained();
    lVar23 = lVar22;
    func_0x00010bfa0700();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = param_1 + _DAT_1127506bc;
    _objc_loadWeakRetained();
    lVar25 = param_1 + _DAT_1127506c0;
    _objc_loadWeakRetained();
    lVar26 = param_1 + _DAT_1127506c4;
    _objc_loadWeakRetained();
    lVar27 = param_1 + _DAT_1127506c8;
    _objc_loadWeakRetained();
    lVar28 = lVar27;
    func_0x00010bf66980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02eb20(puVar29,param_2,lVar1,lVar3,lVar5,lVar7,lVar8,lVar10,lVar11,lVar13,lVar14,
                        lVar15,lVar17,lVar19,lVar21,lVar23,lVar24,lVar25,lVar26,lVar28);
    _objc_release(lVar28);
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
    _objc_release(lVar30);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar29);
  return;
}



/* Entry: 1067c1664; end: 1067c175b; -[SCLegacyNotificationSettingsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c1664(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127506c4);
  _objc_destroyWeak(param_1 + _DAT_1127506c8);
  _objc_destroyWeak(param_1 + _DAT_1127506c0);
  _objc_destroyWeak(param_1 + _DAT_1127506bc);
  _objc_destroyWeak(param_1 + _DAT_1127506b8);
  _objc_destroyWeak(param_1 + _DAT_1127506b4);
  _objc_destroyWeak(param_1 + _DAT_1127506b0);
  _objc_destroyWeak(param_1 + _DAT_1127506ac);
  _objc_destroyWeak(param_1 + _DAT_1127506a8);
  _objc_destroyWeak(param_1 + _DAT_1127506a4);
  _objc_destroyWeak(param_1 + _DAT_1127506a0);
  _objc_destroyWeak(param_1 + _DAT_112750698);
  _objc_destroyWeak(param_1 + _DAT_112750694);
  _objc_destroyWeak(param_1 + _DAT_11275069c);
  _objc_destroyWeak(param_1 + _DAT_112750690);
  _objc_destroyWeak(param_1 + _DAT_112750688);
  _objc_destroyWeak(param_1 + _DAT_11275068c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127506cc);
  return;
}



/* Entry: 1067c175c; end: 1067c17db; -[SCNotificationSettingSwitchTableViewCell initWithSettingTag:initialValue:notificationDisplayEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1067c175c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f32e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127506d0) = param_3;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127506d4) = param_4;
    func_0x00010bf08940(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1067c17dc; end: 1067c1823; -[SCNotificationSettingSwitchTableViewCell applySystemNotificationPermission:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c17dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c210a80(param_1,param_2,(uint)param_3 & (uint)*(byte *)(param_1 + _DAT_1127506d4));
  func_0x00010c210a60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1e2b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPrimaryTextEnabled__1126564e8,param_3);
  return;
}



/* Entry: 1067c1824; end: 1067c1833; -[SCNotificationSettingSwitchTableViewCell updateSettingValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c1824(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127506d4) = param_3;
  return;
}



/* Entry: 1067c1834; end: 1067c1843; -[SCNotificationSettingSwitchTableViewCell settingTag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067c1834(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127506d0);
}



/* Entry: 1067c1844; end: 1067c184b; -[SCNotificationSettingsViewController pageViewName] */

undefined8 FUN_1067c1844(void)

{
  return 0x119;
}



/* Entry: 1067c184c; end: 1067c1d27; -[SCNotificationSettingsViewController initWithContext:userSession:logger:featureSettingsService:featureFlagStore:notificationDataServices:notificationsPermissionRequester:permissionRequestService:userScopedAppGroupUserDefaults:discoverFeedNotificationServices:creatorNotificationServices:notificationOSSettingsRetriever:circumstanceEngine:userIsInFamilyCenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1067c184c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_70 = PTR_PTR_1126f32f0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar6 = (long)_DAT_1127506d8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127506dc;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127506e0;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_15;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127506e4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_5;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127506e8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127506ec;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127506f0;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_9;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127506f4;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_10;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127506f8;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_11;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_1127506fc;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_12;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112750700;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_13;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_112750704;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112750708);
    *(undefined **)((long)puVar1 + (long)_DAT_112750708) = puVar3;
    _objc_release(uVar2);
    uVar2 = param_15;
    func_0x0001070c1ef4();
    *(char *)((long)puVar1 + (long)_DAT_11275070c) = (char)uVar2;
    uVar2 = param_15;
    func_0x0001070c2098();
    lVar7 = (long)_DAT_112750710;
    *(char *)((long)puVar1 + lVar7) = (char)uVar2;
    uVar2 = param_15;
    func_0x0001070c20d4();
    lVar6 = (long)_DAT_112750714;
    *(char *)((long)puVar1 + lVar6) = (char)uVar2;
    uVar2 = param_15;
    func_0x0001070c20ac();
    *(char *)((long)puVar1 + (long)_DAT_112750718) = (char)uVar2;
    uVar2 = param_15;
    func_0x0001070c20c0();
    *(char *)((long)puVar1 + (long)_DAT_11275071c) = (char)uVar2;
    uVar2 = param_15;
    func_0x0001070c20e8();
    *(char *)((long)puVar1 + (long)_DAT_112750720) = (char)uVar2;
    uVar2 = param_15;
    func_0x0001070c20fc();
    *(char *)((long)puVar1 + (long)_DAT_112750724) = (char)uVar2;
    uVar2 = param_15;
    func_0x0001070c2110();
    *(char *)((long)puVar1 + (long)_DAT_112750728) = (char)uVar2;
    uVar2 = param_15;
    func_0x0001070c2124();
    *(char *)((long)puVar1 + (long)_DAT_11275072c) = (char)uVar2;
    uVar2 = param_15;
    func_0x0001070c2138();
    *(char *)((long)puVar1 + (long)_DAT_112750730) = (char)uVar2;
    uVar2 = param_15;
    func_0x0001070c23f0();
    *(char *)((long)puVar1 + (long)_DAT_112750734) = (char)uVar2;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112750738) = param_16;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275073c);
    *(undefined **)((long)puVar1 + (long)_DAT_11275073c) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112750740);
    *(undefined **)((long)puVar1 + (long)_DAT_112750740) = puVar3;
    _objc_release(uVar2);
    ppuVar4 = &PTR__OBJC_CLASS___NSConstantArray_111180ae8;
    func_0x00010c0d3c80();
    if (*(char *)((long)puVar1 + lVar7) == '\x01') {
      func_0x00010befa120(ppuVar4);
    }
    func_0x00010befa160(ppuVar4);
    if (*(char *)((long)puVar1 + lVar6) == '\x01') {
      func_0x00010befa120(ppuVar4);
    }
    func_0x00010befa160(ppuVar4);
    ppuVar5 = ppuVar4;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112750744);
    *(undefined ***)((long)puVar1 + (long)_DAT_112750744) = ppuVar5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ce0e8;
    _objc_alloc();
    func_0x00010c011d00();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112750748);
    *(undefined **)((long)puVar1 + (long)_DAT_112750748) = puVar3;
    _objc_release(uVar2);
    _objc_release(ppuVar4);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1067c1d28; end: 1067c24ab; -[SCNotificationSettingsViewController systemNotificationView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c1d28(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 unaff_x22;
  long unaff_x23;
  long lVar23;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined *puStack_240;
  long lStack_238;
  long lStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = (undefined *)(long)_DAT_11275074c;
  lVar20 = *(long *)(puVar21 + param_1);
  if (lVar20 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar19 = *(undefined8 *)(puVar21 + param_1);
    *(undefined **)(puVar21 + param_1) = puVar2;
    _objc_release(uVar19);
    func_0x00010c219b60(*(undefined8 *)(puVar21 + param_1));
    puVar2 = PTR_PTR_1126b0620;
    ppuVar3 = &PTR____CFConstantStringClassReference_110e5f7f8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e5f7f8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf56720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    func_0x00010c219b60(puVar2);
    func_0x00010befbb60(*(undefined8 *)(puVar21 + param_1));
    puStack_108 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(puVar21 + param_1);
    puStack_e8 = puVar4;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = (undefined *)uVar19;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    puStack_f8 = puVar4;
    puStack_90 = puVar4;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(puVar21 + param_1);
    puStack_100 = puVar5;
    func_0x00010bf34860(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    puStack_d8 = puVar2;
    puStack_88 = puVar5;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar21 + param_1);
    puStack_e0 = puVar21;
    func_0x00010c08e400(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf493c0(0x4034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = puVar7;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(puVar21 + param_1);
    func_0x00010c1408a0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar2;
    func_0x00010bf493c0(0xc034000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar21;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_108);
    _objc_release(puVar9);
    _objc_release(puVar21);
    _objc_release(uVar8);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(uVar19);
    _objc_release(puStack_100);
    _objc_release(puStack_f8);
    _objc_release(puStack_f0);
    _objc_release(puStack_e8);
    puVar2 = PTR_PTR_1126ce0f0;
    func_0x00010bf25c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b60();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e5f818;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e5f818,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216260(puVar2);
    _objc_release(ppuVar3);
    puVar21 = puStack_e0;
    func_0x00010befbb60(*(undefined8 *)(puStack_e0 + param_1));
    func_0x00010befbd60(puVar2);
    puStack_110 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar4 = puVar2;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puStack_d8;
    puStack_f0 = puVar4;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_f8 = puVar5;
    func_0x00010bf493c0(0x4030000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    puStack_100 = puVar4;
    puStack_b0 = puVar4;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = *(undefined8 *)(puVar21 + param_1);
    puStack_108 = puVar5;
    func_0x00010bf34860(uVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    puStack_e8 = puVar2;
    puStack_a8 = puVar5;
    func_0x00010bfe0660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf25580(PTR_PTR_1126ce0f0);
    puVar7 = puVar4;
    func_0x00010bf49420();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = puVar7;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar21 + param_1);
    func_0x00010bf1ff80(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_98 = puVar9;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_110);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(uVar19);
    _objc_release(puStack_108);
    _objc_release(puStack_100);
    _objc_release(puStack_f8);
    _objc_release(puStack_f0);
    lVar20 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar20);
    puStack_128 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar19 = *(undefined8 *)(puVar21 + param_1);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1;
    puStack_f8 = (undefined *)uVar19;
    func_0x00010bfdef60();
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = (undefined *)lVar20;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = (undefined *)lVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar21 + param_1);
    puStack_108 = (undefined *)uVar19;
    uStack_d0 = uVar19;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1;
    uStack_118 = uVar6;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_110 = (undefined *)lVar20;
    func_0x00010bf34860();
    _objc_retainAutoreleasedReturnValue();
    lStack_120 = lVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = *(undefined8 *)(puVar21 + param_1);
    uStack_130 = uVar6;
    uStack_c8 = uVar6;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = unaff_x23;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = unaff_x22;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = *(undefined8 *)(puVar21 + param_1);
    uStack_c0 = unaff_x25;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = unaff_x27;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = unaff_x26;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_b8 = uVar19;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_128);
    _objc_release(puVar21);
    _objc_release(uVar19);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(unaff_x26);
    _objc_release(unaff_x25);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(unaff_x22);
    _objc_release(uStack_130);
    _objc_release(lStack_120);
    _objc_release(puStack_110);
    _objc_release(uStack_118);
    _objc_release(puStack_108);
    _objc_release(puStack_100);
    _objc_release(puStack_f0);
    _objc_release(puStack_f8);
    _objc_release(puStack_e8);
    _objc_release(puStack_d8);
    lVar20 = *(long *)(puStack_e0 + param_1);
    unaff_x19 = param_1;
  }
  lVar11 = lVar20;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar20);
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1067c24ac;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1b8 = PTR_PTR_1126f32f0;
  lStack_1c0 = lVar11;
  lStack_190 = unaff_x28;
  lStack_188 = unaff_x27;
  uStack_180 = unaff_x26;
  uStack_178 = unaff_x25;
  lStack_170 = unaff_x24;
  lStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  puStack_158 = puVar21;
  lStack_150 = lVar20;
  lStack_148 = unaff_x19;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_1c0,PTR_s_loadView_112604be0);
  puVar21 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c2116c0(lVar11);
  _objc_release(puVar21);
  lVar20 = lVar11;
  func_0x00010c267f00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar20);
  puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar11;
  func_0x00010c267f00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar20);
  _objc_release(puVar21);
  lVar20 = lVar11;
  func_0x00010c267f00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(lVar20);
  lVar20 = lVar11;
  func_0x00010c267f00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar20);
  lVar20 = lVar11;
  func_0x00010c267f00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e9a0();
  _objc_release(lVar20);
  lVar20 = lVar11;
  func_0x00010c267f00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  _objc_release(lVar20);
  lVar20 = lVar11;
  func_0x00010c267f00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167740();
  _objc_release(lVar20);
  lVar20 = lVar11;
  func_0x00010c267f00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar20);
  lVar20 = lVar11;
  func_0x00010c267f00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1974c0(0x404e000000000000);
  _objc_release(lVar20);
  lVar20 = lVar11;
  func_0x00010c267f00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  _objc_release(lVar20);
  puVar21 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar11;
  func_0x00010c267f00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0();
  _objc_release(lVar20);
  _objc_release(puVar21);
  lVar20 = lVar11;
  func_0x00010c29bf00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar11;
  func_0x00010c267f00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar20);
  _objc_release(lVar22);
  _objc_release(lVar20);
  puStack_1f8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar20 = lVar11;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1c8 = lVar20;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar11;
  lStack_1d8 = lVar20;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1d0 = lVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_1e0 = lVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar11;
  lStack_1e8 = lVar20;
  lStack_1b0 = lVar20;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_1f0 = lVar22;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar11;
  lStack_200 = lVar22;
  func_0x00010c29bf00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar20;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  lStack_1a8 = lVar22;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar11;
  func_0x00010c29bf00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_1a0 = lVar16;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1f8);
  _objc_release(puVar21);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar22);
  _objc_release(lVar23);
  _objc_release(lVar20);
  _objc_release(lStack_200);
  _objc_release(lStack_1f0);
  _objc_release(lStack_1e8);
  _objc_release(lStack_1e0);
  _objc_release(lStack_1d0);
  _objc_release(lStack_1d8);
  _objc_release(lStack_1c8);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  func_0x00010befa120(puVar2);
  lVar20 = (long)_DAT_112750714;
  if ((*(byte *)(lVar11 + lVar20) & 1) == 0) {
    func_0x00010befa120(puVar2);
  }
  func_0x00010befa120(puVar2);
  func_0x00010befa120(puVar2);
  lVar22 = (long)_DAT_112750710;
  if ((*(byte *)(lVar11 + lVar22) & 1) == 0) {
    func_0x00010befa120(puVar2);
  }
  func_0x00010befa120(puVar2);
  func_0x00010befa120(puVar2);
  func_0x00010befa120(puVar2);
  func_0x00010befa120(puVar2);
  func_0x00010befa120(puVar2);
  lVar23 = (long)_DAT_1127506e0;
  iVar1 = (int)*(undefined8 *)(lVar11 + lVar23);
  func_0x000108060b1c();
  if (iVar1 != 0) {
    func_0x00010befa120(puVar2);
  }
  func_0x00010befa120(puVar2);
  func_0x00010befa120(puVar2);
  iVar1 = (int)*(undefined8 *)(lVar11 + lVar23);
  func_0x0001005929c0();
  if (iVar1 != 0) {
    func_0x00010befa120(puVar2);
  }
  if (*(char *)(lVar11 + _DAT_11275070c) == '\x01') {
    func_0x00010befa120(puVar2);
  }
  func_0x00010befa120(puVar2);
  func_0x00010befa120(puVar2);
  if ((*(char *)(lVar11 + _DAT_112750734) == '\x01') &&
     (*(char *)(lVar11 + _DAT_112750738) == '\x01')) {
    func_0x00010befa120(puVar2);
  }
  if (*(char *)(lVar11 + _DAT_11275072c) == '\x01') {
    func_0x00010befa120(puVar2);
  }
  if (*(char *)(lVar11 + _DAT_112750730) == '\x01') {
    func_0x00010befa120(puVar2);
  }
  uVar19 = *(undefined8 *)(lVar11 + _DAT_112750750);
  *(undefined ***)(lVar11 + _DAT_112750750) = &PTR__OBJC_CLASS___NSConstantArray_111180b30;
  _objc_release(uVar19);
  if (*(char *)(lVar11 + lVar22) == '\x01') {
    uVar19 = *(undefined8 *)(lVar11 + _DAT_112750754);
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111180b48;
    if (*(char *)(lVar11 + _DAT_112750718) == '\0') {
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111180b60;
    }
    *(undefined ***)(lVar11 + _DAT_112750754) = ppuVar3;
    _objc_release(uVar19);
  }
  ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111180b78;
  if (*(char *)(lVar11 + _DAT_11275071c) == '\0') {
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantArray_111180b90;
  }
  lVar22 = (long)_DAT_112750758;
  uVar19 = *(undefined8 *)(lVar11 + lVar22);
  *(undefined ***)(lVar11 + lVar22) = ppuVar3;
  _objc_release(uVar19);
  if (*(char *)(lVar11 + _DAT_112750720) == '\x01') {
    uVar19 = *(undefined8 *)(lVar11 + lVar22);
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar11 + lVar22);
    *(undefined8 *)(lVar11 + lVar22) = uVar19;
    _objc_release(uVar6);
  }
  uVar19 = *(undefined8 *)(lVar11 + lVar22);
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(lVar11 + lVar22);
  *(undefined8 *)(lVar11 + lVar22) = uVar19;
  _objc_release(uVar6);
  lVar23 = (long)_DAT_112750724;
  if (((*(byte *)(lVar11 + lVar23) & 1) != 0) || (*(char *)(lVar11 + _DAT_112750728) == '\x01')) {
    uVar19 = *(undefined8 *)(lVar11 + lVar22);
    func_0x00010c0d3c80();
    func_0x00010c12d360();
    if (*(char *)(lVar11 + lVar23) == '\x01') {
      func_0x00010befa120(uVar19);
    }
    if (*(char *)(lVar11 + _DAT_112750728) == '\x01') {
      func_0x00010befa120(uVar19);
    }
    uVar6 = uVar19;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)(lVar11 + lVar22);
    *(undefined8 *)(lVar11 + lVar22) = uVar6;
    _objc_release(uVar8);
    _objc_release(uVar19);
  }
  uVar19 = *(undefined8 *)(lVar11 + _DAT_11275075c);
  *(undefined ***)(lVar11 + _DAT_11275075c) = &PTR__OBJC_CLASS___NSConstantArray_111180ba8;
  _objc_release(uVar19);
  if (*(char *)(lVar11 + lVar20) == '\x01') {
    uVar19 = *(undefined8 *)(lVar11 + _DAT_112750760);
    *(undefined ***)(lVar11 + _DAT_112750760) = &PTR__OBJC_CLASS___NSConstantArray_111180bc0;
    _objc_release(uVar19);
  }
  puVar4 = puVar2;
  func_0x00010bf51e00();
  uVar19 = *(undefined8 *)(lVar11 + _DAT_112750764);
  *(undefined **)(lVar11 + _DAT_112750764) = puVar4;
  _objc_release(uVar19);
  uVar19 = *(undefined8 *)(lVar11 + _DAT_112750768);
  *(undefined ***)(lVar11 + _DAT_112750768) = &PTR__OBJC_CLASS___NSConstantArray_111180bd8;
  _objc_release(uVar19);
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  puStack_240 = &DAT_112750000;
  puStack_228 = &DAT_112750764;
  pcStack_208 = FUN_1067c2da0;
  puStack_258 = PTR_PTR_1126f32f0;
  puStack_260 = puVar4;
  puStack_250 = puVar21;
  lStack_248 = lVar23;
  lStack_238 = lVar22;
  lStack_230 = lVar20;
  puStack_220 = puVar2;
  lStack_218 = lVar11;
  ppuStack_210 = &puStack_140;
  _objc_msgSendSuper2(&puStack_260,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bead7a0(puVar4);
  puVar21 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar21);
  puVar21 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar21);
  _objc_initWeak(auStack_268,puVar4);
  uVar17 = *(undefined8 *)(puVar4 + _DAT_112750704);
  func_0x00010c0dc420(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar17;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar19;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar19;
  func_0x00010c0e0ec0(uVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_270,auStack_268);
  uVar18 = uVar8;
  func_0x00010c25ff60(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar18);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar19);
  _objc_release(uVar17);
  _objc_destroyWeak(auStack_270);
  _objc_destroyWeak(auStack_268);
  return;
}



/* Entry: 1067c24ac; end: 1067c2d9f; -[SCNotificationSettingsViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c24ac(long param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_88 = PTR_PTR_1126f32f0;
  lStack_90 = param_1;
  _objc_msgSendSuper2(&lStack_90,PTR_s_loadView_112604be0);
  puVar3 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c2116c0(param_1);
  _objc_release(puVar3);
  lVar17 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar17);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar17);
  _objc_release(puVar3);
  lVar17 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(lVar17);
  lVar17 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(lVar17);
  lVar17 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e9a0();
  _objc_release(lVar17);
  lVar17 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2026e0();
  _objc_release(lVar17);
  lVar17 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167740();
  _objc_release(lVar17);
  lVar17 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar17);
  lVar17 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1974c0(0x404e000000000000);
  _objc_release(lVar17);
  lVar17 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  _objc_release(lVar17);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0();
  _objc_release(lVar17);
  _objc_release(puVar3);
  lVar17 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar17);
  puStack_c8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar17 = param_1;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_98 = lVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  lStack_a8 = lVar17;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lStack_a0 = lVar16;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_b0 = lVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  lStack_b8 = lVar17;
  lStack_80 = lVar17;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar16;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  lStack_d0 = lVar16;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  lStack_78 = lVar16;
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar5;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = lVar8;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_c8);
  _objc_release(puVar3);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar16);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lStack_d0);
  _objc_release(lStack_c0);
  _objc_release(lStack_b8);
  _objc_release(lStack_b0);
  _objc_release(lStack_a0);
  _objc_release(lStack_a8);
  _objc_release(lStack_98);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  func_0x00010befa120(puVar9);
  lVar17 = (long)_DAT_112750714;
  if ((*(byte *)(param_1 + lVar17) & 1) == 0) {
    func_0x00010befa120(puVar9);
  }
  func_0x00010befa120(puVar9);
  func_0x00010befa120(puVar9);
  lVar16 = (long)_DAT_112750710;
  if ((*(byte *)(param_1 + lVar16) & 1) == 0) {
    func_0x00010befa120(puVar9);
  }
  func_0x00010befa120(puVar9);
  func_0x00010befa120(puVar9);
  func_0x00010befa120(puVar9);
  func_0x00010befa120(puVar9);
  func_0x00010befa120(puVar9);
  lVar18 = (long)_DAT_1127506e0;
  iVar2 = (int)*(undefined8 *)(param_1 + lVar18);
  func_0x000108060b1c();
  if (iVar2 != 0) {
    func_0x00010befa120(puVar9);
  }
  func_0x00010befa120(puVar9);
  func_0x00010befa120(puVar9);
  iVar2 = (int)*(undefined8 *)(param_1 + lVar18);
  func_0x0001005929c0();
  if (iVar2 != 0) {
    func_0x00010befa120(puVar9);
  }
  if (*(char *)(param_1 + _DAT_11275070c) == '\x01') {
    func_0x00010befa120(puVar9);
  }
  func_0x00010befa120(puVar9);
  func_0x00010befa120(puVar9);
  if ((*(char *)(param_1 + _DAT_112750734) == '\x01') &&
     (*(char *)(param_1 + _DAT_112750738) == '\x01')) {
    func_0x00010befa120(puVar9);
  }
  if (*(char *)(param_1 + _DAT_11275072c) == '\x01') {
    func_0x00010befa120(puVar9);
  }
  if (*(char *)(param_1 + _DAT_112750730) == '\x01') {
    func_0x00010befa120(puVar9);
  }
  uVar10 = *(undefined8 *)(param_1 + _DAT_112750750);
  *(undefined ***)(param_1 + _DAT_112750750) = &PTR__OBJC_CLASS___NSConstantArray_111180b30;
  _objc_release(uVar10);
  if (*(char *)(param_1 + lVar16) == '\x01') {
    uVar10 = *(undefined8 *)(param_1 + _DAT_112750754);
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_111180b48;
    if (*(char *)(param_1 + _DAT_112750718) == '\0') {
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_111180b60;
    }
    *(undefined ***)(param_1 + _DAT_112750754) = ppuVar1;
    _objc_release(uVar10);
  }
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_111180b78;
  if (*(char *)(param_1 + _DAT_11275071c) == '\0') {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantArray_111180b90;
  }
  lVar16 = (long)_DAT_112750758;
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  *(undefined ***)(param_1 + lVar16) = ppuVar1;
  _objc_release(uVar10);
  if (*(char *)(param_1 + _DAT_112750720) == '\x01') {
    uVar10 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + lVar16);
    *(undefined8 *)(param_1 + lVar16) = uVar10;
    _objc_release(uVar14);
  }
  uVar10 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010bf09f60();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + lVar16);
  *(undefined8 *)(param_1 + lVar16) = uVar10;
  _objc_release(uVar14);
  lVar18 = (long)_DAT_112750724;
  if (((*(byte *)(param_1 + lVar18) & 1) != 0) || (*(char *)(param_1 + _DAT_112750728) == '\x01')) {
    uVar10 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c0d3c80();
    func_0x00010c12d360();
    if (*(char *)(param_1 + lVar18) == '\x01') {
      func_0x00010befa120(uVar10);
    }
    if (*(char *)(param_1 + _DAT_112750728) == '\x01') {
      func_0x00010befa120(uVar10);
    }
    uVar14 = uVar10;
    func_0x00010bf51e00();
    uVar15 = *(undefined8 *)(param_1 + lVar16);
    *(undefined8 *)(param_1 + lVar16) = uVar14;
    _objc_release(uVar15);
    _objc_release(uVar10);
  }
  uVar10 = *(undefined8 *)(param_1 + _DAT_11275075c);
  *(undefined ***)(param_1 + _DAT_11275075c) = &PTR__OBJC_CLASS___NSConstantArray_111180ba8;
  _objc_release(uVar10);
  if (*(char *)(param_1 + lVar17) == '\x01') {
    uVar10 = *(undefined8 *)(param_1 + _DAT_112750760);
    *(undefined ***)(param_1 + _DAT_112750760) = &PTR__OBJC_CLASS___NSConstantArray_111180bc0;
    _objc_release(uVar10);
  }
  puVar11 = puVar9;
  func_0x00010bf51e00();
  uVar10 = *(undefined8 *)(param_1 + _DAT_112750764);
  *(undefined **)(param_1 + _DAT_112750764) = puVar11;
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + _DAT_112750768);
  *(undefined ***)(param_1 + _DAT_112750768) = &PTR__OBJC_CLASS___NSConstantArray_111180bd8;
  _objc_release(uVar10);
  puVar11 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puStack_110 = &DAT_112750000;
  puStack_f8 = &DAT_112750764;
  pcStack_d8 = FUN_1067c2da0;
  puStack_128 = PTR_PTR_1126f32f0;
  puStack_130 = puVar11;
  puStack_120 = puVar3;
  lStack_118 = lVar18;
  lStack_108 = lVar16;
  lStack_100 = lVar17;
  puStack_f0 = puVar9;
  lStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_130,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bead7a0(puVar11);
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar3);
  _objc_initWeak(auStack_138,puVar11);
  uVar12 = *(undefined8 *)(puVar11 + _DAT_112750704);
  func_0x00010c0dc420(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar12;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar10;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar10;
  func_0x00010c0e0ec0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_140,auStack_138);
  uVar13 = uVar15;
  func_0x00010c25ff60(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar13);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar10);
  _objc_release(uVar12);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  return;
}



/* Entry: 1067c2da0; end: 1067c2f9f; -[SCNotificationSettingsViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c2da0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f32f0;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidLoad_112684cd8);
  func_0x00010bead7a0(param_1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112750704);
  func_0x00010c0dc420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e0ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 1067c2fa0; end: 1067c2fe7;  */

void FUN_1067c2fa0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedc340();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067c2fe8; end: 1067c3497; -[SCNotificationSettingsViewController _setupLearnMoreHeader] */

void FUN_1067c2fe8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126af270;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126c4e78;
  func_0x00010bf0e8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60(puVar1);
  puVar3 = puVar2;
  func_0x00010c0e00e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1);
  _objc_release(puVar3);
  func_0x00010c1cfce0(puVar1);
  puVar4 = puVar1;
  func_0x00010c18b5e0();
  func_0x000106e42600();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar4;
  func_0x000106e425e8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd60(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162900(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  func_0x00010c212f20(puVar1);
  func_0x00010c11f420(puVar3);
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9900(puVar1);
  _objc_release(puVar5);
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  func_0x00010befbb60();
  func_0x00010c219b60(puVar6);
  puVar7 = puVar6;
  func_0x00010c121ae0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar8 = puVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar7;
  func_0x00010bf34860(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar6;
  func_0x00010bf1ff80(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar5);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c267f00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c211680();
  _objc_release(param_1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bedc370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1067c3498; end: 1067c349b; -[SCNotificationSettingsViewController viewWillResignActive] */

void FUN_1067c3498(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedc370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateNotificationSettingsIfNec_112594a80);
  return;
}



/* Entry: 1067c349c; end: 1067c34ff; -[SCNotificationSettingsViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c349c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f32f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010c139c80(param_1);
  func_0x00010c0abca0(*(undefined8 *)(param_1 + _DAT_1127506e4));
  return;
}



/* Entry: 1067c3500; end: 1067c3547; -[SCNotificationSettingsViewController viewWillDisappear:] */

void FUN_1067c3500(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f32f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010bedc360(param_1);
  return;
}



/* Entry: 1067c3548; end: 1067c35f7; -[SCNotificationSettingsViewController _updateNotificationPermissionSettingsWithSettingsInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c3548(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf10fa0();
  lVar2 = param_3;
  func_0x00010beff6a0();
  lVar3 = param_3;
  func_0x00010bf86160();
  lVar4 = param_3;
  func_0x00010bf85860();
  _objc_release(param_3);
  if ((lVar1 == 1) && (((lVar2 == 2 || (lVar3 == 2)) || (lVar4 == 2)))) {
    *(undefined1 *)(param_1 + _DAT_11275076c) = 1;
  }
  else {
    *(undefined1 *)(param_1 + _DAT_11275076c) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c139c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetView_11262c140);
  return;
}



/* Entry: 1067c35f8; end: 1067c3877; -[SCNotificationSettingsViewController resetView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1067c35f8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + _DAT_11275073c);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar11 != 0) {
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar2);
      }
      func_0x00010bf08940(*(undefined8 *)(lVar12 * 8));
      lVar12 = lVar12 + 1;
    } while (lVar11 != lVar12);
    lVar11 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  lVar2 = (long)_DAT_112750770;
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar2));
  lVar11 = param_1;
  lVar3 = param_1;
  if ((*(byte *)(param_1 + _DAT_11275076c) & 1) == 0) {
    lVar12 = param_1;
    func_0x00010c2671c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar12);
    func_0x00010c267f00();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2671c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(long *)(param_1 + _DAT_11275074c) != 0) {
      lVar12 = param_1;
      func_0x00010c2671c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar12);
    }
    func_0x00010c267f00();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfdef60();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = lVar5;
  _objc_release(uVar10);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar12);
  _objc_release(lVar11);
  func_0x00010c162480(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c267f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128b60();
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_1;
  }
  ___stack_chk_fail();
  iVar1 = 0;
  lVar11 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    lVar11 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar6 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      if (puVar8 == (undefined *)0x0) {
        puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar7;
        func_0x00010c252de0();
        _objc_release(puVar7);
      }
      else {
        puVar6 = puVar8;
        func_0x00010c0690e0();
      }
      if (puVar6 + -1 < (undefined *)0x4) {
        lVar11 = *(long *)(&UNK_10e5f47e8 + (long)(puVar6 + -1) * 8);
      }
      _objc_release(puVar8);
    }
  }
  _objc_release(0);
  return lVar11;
}



/* Entry: 1067c3878; end: 1067c3883; -[SCNotificationSettingsViewController supportedInterfaceOrientations] */

undefined8 FUN_1067c3878(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 1067c3884; end: 1067c3893; -[SCNotificationSettingsViewController getTitle] */

void FUN_1067c3884(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad4f8;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110dad4f8,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1067c3894; end: 1067c39bf; -[SCNotificationSettingsViewController leftButtonPressed] */

void FUN_1067c3894(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29c580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == param_1) {
    lVar4 = param_1;
    func_0x00010c0d66a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 0) {
      func_0x00010c0d66a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010c10fd00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf84b00();
      _objc_release(lVar1);
      goto LAB_1067c39a8;
    }
  }
  else {
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_1067c39a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067c39c0; end: 1067c3a6f; -[SCNotificationSettingsViewController _notificationButtonPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c39c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127506f0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c135f60();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127506f4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9980();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1067c3a70; end: 1067c3b0b; -[SCNotificationSettingsViewController _didSelectManageStoryNotifications] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c3a70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127506fc);
  func_0x00010c2281a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf58da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1067c3b0c; end: 1067c3ba7; -[SCNotificationSettingsViewController _didSelectCreatorNotifications] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c3b0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112750700);
  func_0x00010c2281a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf58da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1067c3ba8; end: 1067c4203; -[SCNotificationSettingsViewController _updateNotificationSettingsIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c3ba8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **unaff_x24;
  long lVar9;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [136];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x00010be340e0();
  if ((int)lVar2 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_112750740);
    func_0x00010bf51e00();
    _objc_initWeak(auStack_f0,param_1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_1067c4204;
    puStack_108 = &UNK_110841fb0;
    unaff_x24 = &puStack_120;
    _objc_copyWeak(auStack_f8,auStack_f0);
    _objc_retain(lVar3);
    uVar5 = 0x11;
    lStack_100 = lVar3;
    func_0x0001000819a8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8520(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_retain(lVar3);
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(undefined8 *)(param_1 + _DAT_11275073c);
        func_0x00010c0e00e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar3;
        func_0x00010c0e00e0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        func_0x00010c289d20(uVar4);
        _objc_release(lVar6);
        _objc_release(uVar4);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    _objc_release(lStack_100);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_f0);
    _objc_release(lVar3);
  }
  puVar7 = PTR_PTR_1126ce0f8;
  func_0x00010c0dcd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be23c00(param_1);
  func_0x00010c2b4c40(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be203a0(param_1);
  func_0x00010c2b46e0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be23c00(param_1);
  func_0x00010c2b4ca0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be203a0(param_1);
  func_0x00010c2b4740(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be23c00(param_1);
  func_0x00010c2b4c00(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be203a0(param_1);
  func_0x00010c2b46a0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be23c00(param_1);
  func_0x00010c2b4c60(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be203a0(param_1);
  func_0x00010c2b4700(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be23c00(param_1);
  func_0x00010c2b4cc0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be203a0(param_1);
  func_0x00010c2b4760(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be23c00(param_1);
  func_0x00010c2b4be0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be203a0(param_1);
  func_0x00010c2b4680(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be23c00(param_1);
  func_0x00010c2b4bc0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be203a0(param_1);
  func_0x00010c2b4660(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be23c00(param_1);
  func_0x00010c2b4d80(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be203a0(param_1);
  func_0x00010c2b4820(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be23c00(param_1);
  func_0x00010c2b4d00(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be203a0(param_1);
  func_0x00010c2b4780(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be23c00(param_1);
  func_0x00010c2b4d20(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be203a0(param_1);
  func_0x00010c2b47a0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be23c00(param_1);
  func_0x00010c2b4d60(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be203a0(param_1);
  func_0x00010c2b4800(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be23c00(param_1);
  func_0x00010c2b4d40(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be203a0(param_1);
  func_0x00010c2b47e0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be23c00(param_1);
  func_0x00010c2b4ce0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be203a0(param_1);
  func_0x00010c2b47c0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be23c00(param_1);
  func_0x00010c2b4c80(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010be203a0(param_1);
  func_0x00010c2b4720(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127506e4);
  puVar8 = puVar7;
  func_0x00010bf21f60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab1c0(uVar4);
  _objc_release(puVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 5);
  _objc_destroyWeak(auStack_f0);
  __Unwind_Resume();
  puVar7 = puVar7 + 0x28;
  _objc_loadWeakRetained(puVar7);
  func_0x00010be72120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1067c4204; end: 1067c4237;  */

void FUN_1067c4204(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067c4238; end: 1067c423b;  */

void FUN_1067c4238(void)

{
  return;
}



/* Entry: 1067c423c; end: 1067c4397; -[SCNotificationSettingsViewController _performNotificationSettingsChanges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1067c423c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
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
  uVar1 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      uVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(uVar1);
        }
        uVar6 = *(undefined8 *)(lStack_128 + uVar8 * 8);
        uVar3 = uVar6;
        func_0x00010c067fc0(uVar6);
        uVar4 = param_3;
        func_0x00010c0e00e0(param_3,param_2,uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf1f3c0();
        _objc_release(uVar4);
        func_0x00010bea9f60(param_1,param_2,uVar3,uVar5);
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
      uVar2 = uVar1;
      func_0x00010bf52a60(uVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (uVar2 != 0);
  }
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)(param_3 + (long)_DAT_112750740);
  func_0x00010bf529e0(lVar7);
  return (ulong)(lVar7 != 0);
}



/* Entry: 1067c4398; end: 1067c43bf; -[SCNotificationSettingsViewController _hasLocalSettingsChanges] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1067c4398(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112750740);
  func_0x00010bf529e0(lVar1);
  return lVar1 != 0;
}



/* Entry: 1067c43c0; end: 1067c4457; -[SCNotificationSettingsViewController _getLocalValueForSettingTag:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1067c43c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112750740);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lVar2 == 0) {
    func_0x00010be23c00(param_1,param_2,param_3);
  }
  else {
    param_1 = lVar2;
    func_0x00010bf1f3c0(lVar2);
  }
  _objc_release(lVar2);
  return param_1;
}



/* Entry: 1067c4458; end: 1067c4b17; -[SCNotificationSettingsViewController _getValueForSettingTag:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1067c4458(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar6 = 0;
  switch(param_3) {
  case 0:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc000();
    break;
  case 1:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc020();
    break;
  case 2:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc040();
    break;
  case 3:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc060();
    break;
  case 4:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc080();
    break;
  case 5:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dcb40();
    break;
  case 6:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc2c0();
    break;
  case 7:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc300();
    break;
  case 8:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc320();
    break;
  case 9:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc2e0();
    break;
  case 10:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dbfa0();
    break;
  case 0xb:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc0a0();
    break;
  case 0xc:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc340();
    break;
  case 0xd:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc360();
    break;
  case 0xe:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc380();
    break;
  case 0xf:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dbea0();
    break;
  case 0x10:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc0c0();
    break;
  case 0x11:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dbd00();
    break;
  case 0x12:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dca80();
    break;
  case 0x13:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc540();
    break;
  case 0x14:
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 1;
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127506ec);
    func_0x00010bf1c260(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c0ea0();
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar5);
    uVar6 = (uint)*(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
    goto LAB_1067c4ae8;
  case 0x15:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc820();
    break;
  case 0x16:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc7e0();
    break;
  case 0x17:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc840();
    break;
  case 0x18:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc7a0();
    break;
  case 0x19:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc520();
    break;
  case 0x1a:
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dc560();
    uVar6 = (uint)uVar4;
    goto code_r0x0001067c4adc;
  default:
    goto LAB_1067c4ae8;
  case 0x1d:
    uVar2 = *(ulong *)(param_1 + _DAT_112750748);
                    /* WARNING: Could not recover jumptable at 0x00010c13f010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_retrieveTransactionalSmsSetting_11262d620);
    return uVar2;
  case 0x1e:
    uVar2 = *(ulong *)(param_1 + _DAT_112750748);
                    /* WARNING: Could not recover jumptable at 0x00010c13ee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_retrievePromotionalSmsSetting_11262d5c0);
    return uVar2;
  case 0x1f:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dc0e0();
    break;
  case 0x20:
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dc2a0();
    uVar6 = (uint)uVar4;
    goto code_r0x0001067c4adc;
  case 0x21:
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c102480();
    uVar6 = (uint)uVar4;
    goto code_r0x0001067c4adc;
  case 0x22:
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c102780();
    uVar6 = (uint)uVar4;
    goto code_r0x0001067c4adc;
  case 0x23:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfa07e0();
    break;
  case 0x24:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb86a0();
    break;
  case 0x25:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb89a0();
    break;
  case 0x26:
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dc800();
    uVar6 = (uint)uVar4;
    goto code_r0x0001067c4adc;
  case 0x27:
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0dc7c0();
    uVar6 = (uint)uVar4;
code_r0x0001067c4adc:
    uVar6 = uVar6 ^ 1;
    _objc_release(uVar3);
LAB_1067c4ae8:
    return (ulong)(uVar6 & 1);
  case 0x28:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c275200();
    break;
  case 0x29:
    uVar1 = *(ulong *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c262300();
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1067c4b18; end: 1067c4b27;  */

void FUN_1067c4b18(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1067c4b28; end: 1067c5247; -[SCNotificationSettingsViewController _setValueForSettingTag:value:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c4b28(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  switch(param_3) {
  case 0:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce060();
    break;
  case 1:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce080();
    break;
  case 2:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce0a0();
    break;
  case 3:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce0c0();
    break;
  case 4:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce0e0();
    break;
  case 5:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce760();
    break;
  case 6:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce240();
    break;
  case 7:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce280();
    break;
  case 8:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce2a0();
    break;
  case 9:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce260();
    break;
  case 10:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce000();
    break;
  case 0xb:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce100();
    break;
  case 0xc:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce2c0();
    break;
  case 0xd:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce2e0();
    break;
  case 0xe:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce300();
    break;
  case 0xf:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdf80();
    break;
  case 0x10:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce120();
    break;
  case 0x11:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdee0();
    break;
  case 0x12:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce6c0();
    break;
  case 0x13:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce3e0();
    break;
  case 0x14:
    puVar2 = PTR_PTR_1126ce100;
    if ((param_4 & 1) == 0) {
      func_0x00010bf80d20(PTR_PTR_1126ce100);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf926c0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127506ec);
    func_0x00010bf1c240(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c283d60();
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(puVar2);
    return;
  case 0x15:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce5a0();
    break;
  case 0x16:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce560();
    break;
  case 0x17:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce5c0();
    break;
  case 0x18:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce520();
    break;
  case 0x19:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce3c0();
    break;
  case 0x1a:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce400();
    break;
  default:
    return;
  case 0x1d:
                    /* WARNING: Could not recover jumptable at 0x00010c219650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112750748),PTR_s_setTransactionalSmsSetting__112663fb8
               ,param_4);
    return;
  case 0x1e:
                    /* WARNING: Could not recover jumptable at 0x00010c1e4c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_112750748),PTR_s_setPromotionalSmsSetting__112656d38,
               param_4);
    return;
  case 0x1f:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce140();
    break;
  case 0x20:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce220();
    break;
  case 0x21:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1de480();
    break;
  case 0x22:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1de6a0();
    break;
  case 0x23:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19a2a0();
    break;
  case 0x24:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19fec0();
    break;
  case 0x25:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a0020();
    break;
  case 0x26:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce580();
    break;
  case 0x27:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce540();
    break;
  case 0x28:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2177a0();
    break;
  case 0x29:
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127506e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20fb00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067c5248; end: 1067c524b;  */

void FUN_1067c5248(void)

{
  return;
}



/* Entry: 1067c524c; end: 1067c525b; -[SCNotificationSettingsViewController numberOfSectionsInTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c524c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112750744),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1067c525c; end: 1067c5387; -[SCNotificationSettingsViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_1067c525c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  
  lVar1 = param_1;
  func_0x00010be169a0(param_1,param_2,0);
  if (param_4 == lVar1) {
    piVar3 = (int *)&DAT_112750764;
  }
  else {
    lVar1 = param_1;
    func_0x00010be169a0();
    if (param_4 == lVar1) {
      return 1;
    }
    lVar1 = param_1;
    func_0x00010be169a0();
    if (param_4 == lVar1) {
      piVar3 = (int *)&DAT_112750768;
    }
    else {
      lVar1 = param_1;
      func_0x00010be169a0();
      if (param_4 == lVar1) {
        piVar3 = (int *)&DAT_112750750;
      }
      else {
        lVar1 = param_1;
        func_0x00010be169a0();
        if (param_4 == lVar1) {
          piVar3 = (int *)&DAT_112750754;
        }
        else {
          lVar1 = param_1;
          func_0x00010be169a0();
          if (param_4 == lVar1) {
            piVar3 = (int *)&DAT_112750758;
          }
          else {
            lVar1 = param_1;
            func_0x00010be169a0();
            if (param_4 == lVar1) {
              piVar3 = (int *)&DAT_11275075c;
            }
            else {
              lVar1 = param_1;
              func_0x00010be169a0();
              if (param_4 != lVar1) {
                return 0;
              }
              piVar3 = (int *)&DAT_112750760;
            }
          }
        }
      }
    }
  }
  uVar2 = *(undefined8 *)(param_1 + *piVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_count_1125b2420);
  return uVar2;
}



/* Entry: 1067c5388; end: 1067c5397; -[SCNotificationSettingsViewController tableView:heightForRowAtIndexPath:] */

undefined8 FUN_1067c5388(void)

{
  return *(undefined8 *)PTR__UITableViewAutomaticDimension_110345db8;
}



/* Entry: 1067c5398; end: 1067c547f; -[SCNotificationSettingsViewController tableView:cellForRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c5398(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c1554e0();
  lVar3 = (long)_DAT_112750744;
  uVar2 = *(ulong *)(param_1 + lVar3);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    uVar2 = *(ulong *)(param_1 + lVar3);
    uVar1 = param_4;
    func_0x00010c1554e0(param_4);
    func_0x00010c0dfd40(uVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c067ec0();
    _objc_release(uVar2);
    if ((uint)uVar1 < 8) {
      if ((uint)uVar1 == 2) {
        func_0x00010c0b7d80(param_1);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar2 = param_4;
        func_0x00010c142240(param_4);
        func_0x00010beaa460(param_1,param_2,uVar2,uVar1 & 0xffffffff);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_1067c5450;
    }
  }
  param_1 = 0;
LAB_1067c5450:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1067c5480; end: 1067c548b; -[SCNotificationSettingsViewController tableView:heightForHeaderInSection:] */

undefined8 FUN_1067c5480(void)

{
  return 0x4040000000000000;
}



/* Entry: 1067c548c; end: 1067c561f; -[SCNotificationSettingsViewController tableView:viewForHeaderInSection:] */

void FUN_1067c548c(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = param_1;
  func_0x00010be169a0(param_1,param_2,2);
  puVar2 = PTR_PTR_1126b0710;
  if (param_4 == ppuVar1) {
    param_1 = &PTR____CFConstantStringClassReference_110e5f838;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e5f838,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar1 = param_1;
    func_0x00010be169a0();
    puVar2 = PTR_PTR_1126b0710;
    if (param_4 == ppuVar1) {
      func_0x000106e42048();
      _objc_retainAutoreleasedReturnValue();
      param_1 = ppuVar1;
    }
    else {
      ppuVar1 = param_1;
      func_0x00010be169a0();
      puVar2 = PTR_PTR_1126b0710;
      if (param_4 == ppuVar1) {
        func_0x000106e42150();
        _objc_retainAutoreleasedReturnValue();
        param_1 = ppuVar1;
      }
      else {
        ppuVar1 = param_1;
        func_0x00010be169a0();
        puVar2 = PTR_PTR_1126b0710;
        if (param_4 == ppuVar1) {
          func_0x000106e421f8();
          _objc_retainAutoreleasedReturnValue();
          param_1 = ppuVar1;
        }
        else {
          ppuVar1 = param_1;
          func_0x00010be169a0();
          puVar2 = PTR_PTR_1126b0710;
          if (param_4 == ppuVar1) {
            func_0x000106e42240();
            _objc_retainAutoreleasedReturnValue();
            param_1 = ppuVar1;
          }
          else {
            ppuVar1 = param_1;
            func_0x00010be169a0();
            puVar2 = PTR_PTR_1126b0710;
            if (param_4 == ppuVar1) {
              func_0x000106e423d8();
              _objc_retainAutoreleasedReturnValue();
              param_1 = ppuVar1;
            }
            else {
              func_0x00010be169a0();
              puVar2 = PTR_PTR_1126b0710;
              if (param_4 != param_1) {
                puVar2 = (undefined *)0x0;
                goto LAB_1067c5604;
              }
              func_0x000106e42450();
              _objc_retainAutoreleasedReturnValue();
            }
          }
        }
      }
    }
  }
  func_0x00010c29cf80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
LAB_1067c5604:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067c5620; end: 1067c5757; -[SCNotificationSettingsViewController tableView:didSelectRowAtIndexPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c5620(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c1554e0();
  uVar2 = param_1;
  func_0x00010be169a0(param_1,param_2,0);
  if (uVar1 != uVar2) {
    uVar1 = param_4;
    func_0x00010c1554e0();
    uVar2 = param_1;
    func_0x00010be169a0(param_1,param_2,1);
    if (uVar1 != uVar2) {
      uVar1 = param_4;
      func_0x00010c1554e0();
      uVar2 = param_1;
      func_0x00010be169a0(param_1,param_2,2);
      if (uVar1 == uVar2) {
        func_0x00010be00240(param_1);
      }
      goto LAB_1067c5738;
    }
  }
  uVar1 = param_4;
  func_0x00010c142240();
  lVar5 = (long)_DAT_112750764;
  uVar2 = *(ulong *)(param_1 + lVar5);
  func_0x00010bf529e0();
  if (uVar1 < uVar2) {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    uVar1 = param_4;
    func_0x00010c142240(param_4);
    func_0x00010c0dfd40(uVar4,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c067ec0();
    _objc_release(uVar4);
    if ((int)uVar3 == 0x1b) {
      func_0x00010be00220(param_1);
    }
    else {
      func_0x00010bf6e880(param_3,param_2,param_4,1);
    }
  }
LAB_1067c5738:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067c5758; end: 1067c586f; -[SCNotificationSettingsViewController _settingsCellForIndex:inSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c5758(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_4 < 4) {
    if (param_4 == 0) {
      lVar3 = (long)_DAT_112750764;
    }
    else if (param_4 == 1) {
      lVar3 = (long)_DAT_112750768;
    }
    else {
      if (param_4 != 3) goto LAB_1067c5860;
      lVar3 = (long)_DAT_112750750;
    }
  }
  else if (param_4 < 6) {
    if (param_4 == 4) {
      lVar3 = (long)_DAT_112750754;
    }
    else {
      if (param_4 != 5) goto LAB_1067c5860;
      lVar3 = (long)_DAT_112750758;
    }
  }
  else if (param_4 == 6) {
    lVar3 = (long)_DAT_11275075c;
  }
  else {
    if (param_4 != 7) goto LAB_1067c5860;
    lVar3 = (long)_DAT_112750760;
  }
  uVar1 = *(ulong *)(param_1 + lVar3);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar2 = *(ulong *)(param_1 + lVar3);
    func_0x00010c0dfd40(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c067ec0();
    _objc_release(uVar2);
    func_0x00010beaa480(param_1,param_2,(long)(int)uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1067c5860:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067c5870; end: 1067c58d7; -[SCNotificationSettingsViewController _settingsCellForTag:] */

void FUN_1067c5870(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x2a) {
    if ((1L << (param_3 & 0x3f) & 0x3ffe7ffffffU) == 0) {
      if (param_3 == 0x1b) {
        func_0x00010bf5b5c0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010c23f1e0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010be21000();
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067c58d8; end: 1067c5f43; -[SCNotificationSettingsViewController _getOrCreateCellForSettingTag:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c58d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11275073c;
  ppuVar5 = *(undefined ***)(param_1 + lVar6);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (ppuVar5 != (undefined **)0x0) goto LAB_1067c5e8c;
  ppuVar5 = (undefined **)PTR_PTR_1126ce108;
  _objc_alloc(PTR_PTR_1126ce108);
  func_0x00010be23c00(param_1);
  func_0x00010c045820(ppuVar5);
  ppuVar3 = ppuVar5;
  func_0x00010c17a3a0();
  ppuVar2 = (undefined **)0x0;
  switch(param_3) {
  case 0:
    func_0x000106e423f0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 1:
    func_0x000106e42420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 2:
    func_0x000106e42168();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 3:
    func_0x000106e421c8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 4:
    func_0x000106e42198();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 5:
    ppuVar2 = &PTR____CFConstantStringClassReference_110e5f5f8;
    goto code_r0x0001067c5bb0;
  case 6:
    ppuVar2 = &PTR____CFConstantStringClassReference_110e5f618;
    goto code_r0x0001067c5bb0;
  case 7:
    func_0x000106e42468();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 8:
    func_0x000106e42498();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 9:
    func_0x000106e424c8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 10:
    ppuVar2 = &PTR____CFConstantStringClassReference_110e5f638;
    goto code_r0x0001067c5bb0;
  case 0xb:
    ppuVar2 = &PTR____CFConstantStringClassReference_110e5f658;
    goto code_r0x0001067c5bb0;
  case 0xc:
    ppuVar2 = &PTR____CFConstantStringClassReference_110e5f678;
    goto code_r0x0001067c5bb0;
  case 0xd:
    func_0x000106e42210();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0xe:
    func_0x000106e42228();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0xf:
    ppuVar2 = &PTR____CFConstantStringClassReference_110e5f698;
    goto code_r0x0001067c5bb0;
  case 0x10:
    ppuVar2 = &PTR____CFConstantStringClassReference_110e5f6b8;
    goto code_r0x0001067c5bb0;
  case 0x11:
    ppuVar2 = &PTR____CFConstantStringClassReference_110e5f6d8;
code_r0x0001067c5bb0:
    func_0x00010bcbeaa8(ppuVar2,0);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x12:
    func_0x000106e41f58();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x13:
    func_0x000108f587a4();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x14:
    FUN_1067c9500();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x15:
    func_0x000106e42258();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x16:
    func_0x000106e42288();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x17:
    func_0x000106e422b8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x18:
    func_0x000106e423a8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x19:
    func_0x000106e41f88();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x1a:
    func_0x000106e41fb8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x1d:
    func_0x000106e420c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x1e:
    func_0x000106e420f0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x1f:
    func_0x000106e42120();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x20:
    func_0x000106e42018();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x21:
    func_0x000106e424f8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x22:
    func_0x000106e42528();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x23:
    func_0x000106e425b8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x24:
    func_0x000106e422e8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x25:
    func_0x000106e42318();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x26:
    func_0x000106e42348();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x27:
    func_0x000106e42378();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x28:
    func_0x000106e42558();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
    break;
  case 0x29:
    func_0x000106e42588();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar3;
  }
  func_0x00010c1e2a80(ppuVar5);
  _objc_release(ppuVar2);
  ppuVar3 = (undefined **)0x0;
  switch(param_3) {
  case 0:
    func_0x000106e42408();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 1:
    func_0x000106e42438();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 2:
    func_0x000106e42180();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 3:
    func_0x000106e421e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 4:
    func_0x000106e421b0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 5:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e5f6f8;
    goto code_r0x0001067c5e08;
  case 6:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e5f718;
    goto code_r0x0001067c5e08;
  case 7:
    func_0x000106e42480();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 8:
    func_0x000106e424b0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 9:
    func_0x000106e424e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 10:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e5f738;
    goto code_r0x0001067c5e08;
  case 0xb:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e5f758;
    goto code_r0x0001067c5e08;
  case 0xc:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e5f778;
    goto code_r0x0001067c5e08;
  case 0xd:
    func_0x000106e42210();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0xe:
    func_0x000106e42228();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0xf:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e5f798;
    goto code_r0x0001067c5e08;
  case 0x10:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e5f7b8;
    goto code_r0x0001067c5e08;
  case 0x11:
    ppuVar3 = &PTR____CFConstantStringClassReference_110e5f7d8;
code_r0x0001067c5e08:
    func_0x00010bcbeaa8(ppuVar3,0);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x12:
    func_0x000106e41f70();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x13:
    func_0x000108f5878c();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x14:
    func_0x0001067c9518();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x15:
    func_0x000106e42270();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x16:
    func_0x000106e422a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x17:
    func_0x000106e422d0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x18:
    func_0x000106e423c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x19:
    func_0x000106e41fa0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x1a:
    func_0x000106e41fd0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x1d:
    func_0x000106e420d8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x1e:
    func_0x000106e42108();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x1f:
    func_0x000106e42138();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x20:
    func_0x000106e42030();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x21:
    func_0x000106e42510();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x22:
    func_0x000106e42540();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x23:
    func_0x000106e425d0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x24:
    func_0x000106e42300();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x25:
    func_0x000106e42330();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x26:
    func_0x000106e42360();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x27:
    func_0x000106e42390();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x28:
    func_0x000106e42570();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    break;
  case 0x29:
    func_0x000106e425a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
  }
  func_0x00010c1f9020(ppuVar5);
  _objc_release(ppuVar3);
  func_0x00010c210a20(ppuVar5);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar4);
  _objc_release(puVar1);
LAB_1067c5e8c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 1067c5f44; end: 1067c5fdf; -[SCNotificationSettingsViewController manageStoryNotificationsCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c5f44(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112750774;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126c31e0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e5f858;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e5f858,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2a80(*(undefined8 *)(param_1 + lVar5));
    _objc_release(ppuVar2);
    func_0x00010c18ee00(*(undefined8 *)(param_1 + lVar5));
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1067c5fe0; end: 1067c6093; -[SCNotificationSettingsViewController creatorNotificationsCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c5fe0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112750778;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c31e0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x000106e41fe8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e2a80(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    _objc_release(uVar2);
    func_0x000106e42000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9020(*(undefined8 *)(param_1 + lVar4),param_2,uVar2);
    _objc_release(uVar2);
    func_0x00010c18ee00(*(undefined8 *)(param_1 + lVar4),param_2,1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1067c6094; end: 1067c628b; -[SCNotificationSettingsViewController smsSettingDescriptionCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c6094(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11275077c;
  lVar6 = *(long *)(param_1 + lVar7);
  if (lVar6 == 0) {
    puVar1 = PTR_PTR_1126c31e0;
    _objc_alloc_init();
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    *(undefined **)(param_1 + lVar7) = puVar1;
    _objc_release(uVar5);
    func_0x00010c1e2b00(*(undefined8 *)(param_1 + lVar7),param_2,0);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar7),param_2,puVar1);
    _objc_release(puVar1);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c1fbac0(uVar5,param_2,0);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000106e42078();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110e5f878);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000106e42090();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e5f898);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000106e420a8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e5f8b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000106e42060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f9020(*(undefined8 *)(param_1 + lVar7),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar5);
    func_0x00010c18ee00(*(undefined8 *)(param_1 + lVar7),param_2,0);
    func_0x00010c17a3a0(*(undefined8 *)(param_1 + lVar7),param_2,param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar6 = *(long *)(param_1 + lVar7);
  }
  _objc_retain(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 1067c628c; end: 1067c63ff; -[SCNotificationSettingsViewController settingsSwitchTableViewCell:didToggleSwitch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c628c(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ce108;
  _objc_opt_class(PTR_PTR_1126ce108);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    func_0x00010c227f20(param_3);
    lVar8 = (long)_DAT_112750740;
    lVar7 = *(long *)(param_1 + lVar8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if ((lVar7 == 0) || (lVar4 = lVar7, func_0x00010bf1f3c0(), param_4 == (int)lVar4)) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar6);
      _objc_release(puVar5);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + lVar8);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0(uVar6);
    }
    _objc_release(puVar2);
    _objc_release(lVar7);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067c6400; end: 1067c645f; -[SCNotificationSettingsViewController _findIndexForSection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1067c6400(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112750744);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfecde0(lVar2,param_2,puVar1);
  _objc_release(puVar1);
  if (lVar2 == 0x7fffffffffffffff) {
    lVar2 = -1;
  }
  return lVar2;
}



/* Entry: 1067c6460; end: 1067c64df; -[SCNotificationSettingsViewController settingsTextTableViewCell:didTapURL:] */

void FUN_1067c6460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afb78;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c057840();
  _objc_release(param_4);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067c64e0; end: 1067c655f; -[SCNotificationSettingsViewController attributedLabel:didSelectLinkWithURL:] */

void FUN_1067c64e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afb78;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c057840();
  _objc_release(param_4);
  func_0x00010c0d66a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11c520();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067c6560; end: 1067c656b; -[SCNotificationSettingsViewController defaultProjectNameV3] */

void FUN_1067c6560(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dcc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_notifications_112614d20);
  return;
}



/* Entry: 1067c656c; end: 1067c6577; -[SCNotificationSettingsViewController defaultProjectNameV2] */

void FUN_1067c656c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dcc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126aedf8,PTR_s_notifications_112614d20);
  return;
}



/* Entry: 1067c6578; end: 1067c6587; -[SCNotificationSettingsViewController tableView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1067c6578(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112750780);
}



/* Entry: 1067c6588; end: 1067c65c7; -[SCNotificationSettingsViewController setTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c6588(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112750780;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067c65c8; end: 1067c6607; -[SCNotificationSettingsViewController setSystemNotificationView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c65c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275074c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067c6608; end: 1067c6807; -[SCNotificationSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c6608(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275074c,0);
  _objc_storeStrong(param_1 + _DAT_112750780,0);
  _objc_storeStrong(param_1 + _DAT_112750708,0);
  _objc_storeStrong(param_1 + _DAT_112750770,0);
  _objc_storeStrong(param_1 + _DAT_112750748,0);
  _objc_storeStrong(param_1 + _DAT_11275077c,0);
  _objc_storeStrong(param_1 + _DAT_112750778,0);
  _objc_storeStrong(param_1 + _DAT_112750774,0);
  _objc_storeStrong(param_1 + _DAT_112750740,0);
  _objc_storeStrong(param_1 + _DAT_11275073c,0);
  _objc_storeStrong(param_1 + _DAT_1127506e0,0);
  _objc_storeStrong(param_1 + _DAT_112750704,0);
  _objc_storeStrong(param_1 + _DAT_112750700,0);
  _objc_storeStrong(param_1 + _DAT_1127506fc,0);
  _objc_storeStrong(param_1 + _DAT_1127506f8,0);
  _objc_storeStrong(param_1 + _DAT_1127506f4,0);
  _objc_storeStrong(param_1 + _DAT_1127506f0,0);
  _objc_storeStrong(param_1 + _DAT_1127506ec,0);
  _objc_storeStrong(param_1 + _DAT_1127506e8,0);
  _objc_storeStrong(param_1 + _DAT_1127506e4,0);
  _objc_storeStrong(param_1 + _DAT_1127506dc,0);
  _objc_storeStrong(param_1 + _DAT_1127506d8,0);
  _objc_storeStrong(param_1 + _DAT_112750760,0);
  _objc_storeStrong(param_1 + _DAT_11275075c,0);
  _objc_storeStrong(param_1 + _DAT_112750758,0);
  _objc_storeStrong(param_1 + _DAT_112750754,0);
  _objc_storeStrong(param_1 + _DAT_112750750,0);
  _objc_storeStrong(param_1 + _DAT_112750768,0);
  _objc_storeStrong(param_1 + _DAT_112750764,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112750744,0);
  return;
}



/* Entry: 1067c6808; end: 1067c68ab; -[SCNotificationSmsSettingReaderWriter initWithFeatureSettingsService:circumstanceEngine:] */

undefined1 *
FUN_1067c6808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f32f8;
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



/* Entry: 1067c68ac; end: 1067c6923; -[SCNotificationSmsSettingReaderWriter retrieveTransactionalSmsSetting] */

undefined8 FUN_1067c68ac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ebc80();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    uVar3 = 1;
  }
  else {
    if (lVar2 != 2) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
                 &PTR____CFConstantStringClassReference_110e9f858,1,0);
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1067c6924; end: 1067c6967; -[SCNotificationSmsSettingReaderWriter setTransactionalSmsSetting:] */

void FUN_1067c6924(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067c6968; end: 1067c69df; -[SCNotificationSmsSettingReaderWriter retrievePromotionalSmsSetting] */

undefined8 FUN_1067c6968(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ebc60();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    uVar3 = 1;
  }
  else {
    if (lVar2 != 2) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
                 &PTR____CFConstantStringClassReference_110e9f838,0,0);
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1067c69e0; end: 1067c6a23; -[SCNotificationSmsSettingReaderWriter setPromotionalSmsSetting:] */

void FUN_1067c69e0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d5ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067c6a24; end: 1067c6a53; -[SCNotificationSmsSettingReaderWriter .cxx_destruct] */

void FUN_1067c6a24(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067c6a54; end: 1067c6ae3; -[SCReceiveNotificationsFromSettingsViewController initWithNotificationDataServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1067c6a54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f3300;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar3 = (long)_DAT_112750790;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067c6ae4; end: 1067c6aeb; -[SCReceiveNotificationsFromSettingsViewController pageViewName] */

undefined8 FUN_1067c6ae4(void)

{
  return 0x135;
}



/* Entry: 1067c6aec; end: 1067c706b; -[SCReceiveNotificationsFromSettingsViewController loadView] */

void FUN_1067c6aec(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_1126f3300;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(&uStack_a0,PTR_s_loadView_112604be0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_alloc(PTR__OBJC_CLASS___UITableView_1126aed40);
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c211620(param_1);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c267ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c267ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c267ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e9a0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eeb20(0x4046000000000000);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167740();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f7b20();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c267ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fce00(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                      *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c267ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fcde0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c267ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puStack_f0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = param_1;
  func_0x00010c267ca0();
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  uStack_b8 = uVar2;
  func_0x00010bfdef60();
  _objc_retainAutoreleasedReturnValue();
  uStack_b0 = uVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = uVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  uStack_c8 = uVar2;
  uStack_90 = uVar2;
  func_0x00010c267ca0();
  _objc_retainAutoreleasedReturnValue();
  uStack_d0 = uVar3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_e0 = uVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uStack_d8 = uVar2;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uStack_e8 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  uStack_f8 = uVar3;
  uStack_88 = uVar3;
  func_0x00010c267ca0();
  _objc_retainAutoreleasedReturnValue();
  uStack_100 = uVar2;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  uStack_80 = uVar5;
  func_0x00010c267ca0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_f0);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_100);
  _objc_release(uStack_f8);
  _objc_release(uStack_e8);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_d0);
  _objc_release(uStack_c8);
  _objc_release(uStack_c0);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  uVar2 = uStack_a8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_108 = FUN_1067c706c;
  puStack_128 = PTR_PTR_1126f3300;
  uStack_130 = uVar2;
  uStack_120 = uVar9;
  uStack_118 = param_1;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_130,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be1e4c0(uVar2);
  func_0x00010c1e82a0(uVar2);
  return;
}



/* Entry: 1067c706c; end: 1067c70bf; -[SCReceiveNotificationsFromSettingsViewController viewDidLoad] */

void FUN_1067c706c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f3300;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be1e4c0(param_1);
  func_0x00010c1e82a0(param_1);
  return;
}



/* Entry: 1067c70c0; end: 1067c70cf; -[SCReceiveNotificationsFromSettingsViewController getTitle] */

void FUN_1067c70c0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e5f8d8;
  func_0x000107c312f0(&PTR____CFConstantStringClassReference_110e5f8d8,0);
  _objc_retainAutoreleasedReturnValue();
  if (lRam00000001137fe070 != -1) {
    func_0x000107c27d9c(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x00010bcbea50(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1067c70d0; end: 1067c70db; -[SCReceiveNotificationsFromSettingsViewController supportedInterfaceOrientations] */

undefined8 FUN_1067c70d0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  iVar1 = 0;
  uVar5 = 2;
  _objc_retain();
  if (lRam00000001137fbfe8 != -1) {
    iVar1 = 0x137fbfe8;
    func_0x000107c27d9c(0x1137fbfe8,&PTR___NSConcreteGlobalBlock_110d662b8);
  }
  if ((bRam00000001137fbfd2 & 1) == 0) {
    uVar5 = 2;
  }
  else {
    func_0x000107c30aa4();
    if (iVar1 != 0) {
      puVar2 = (undefined *)0x0;
      func_0x00010c29d0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c2a72c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar4 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c252de0();
        _objc_release(puVar3);
      }
      else {
        puVar2 = puVar4;
        func_0x00010c0690e0();
      }
      if (puVar2 + -1 < (undefined *)0x4) {
        uVar5 = *(undefined8 *)(&UNK_10e5f47e8 + (long)(puVar2 + -1) * 8);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(0);
  return uVar5;
}



/* Entry: 1067c70dc; end: 1067c713b; -[SCReceiveNotificationsFromSettingsViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c70dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = (long)_DAT_112750794;
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar1),param_2,0);
  func_0x00010c189840(*(undefined8 *)(param_1 + lVar1));
  puStack_28 = PTR_PTR_1126f3300;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1067c713c; end: 1067c718b; -[SCReceiveNotificationsFromSettingsViewController saveSetting] */

void FUN_1067c713c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010be1e4c0();
  lVar2 = param_1;
  func_0x00010c122180();
  if (lVar2 == lVar1) {
    return;
  }
  lVar1 = param_1;
  func_0x00010c122180(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bede570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateReceiveNotifsFromSetting__112595300,lVar1);
  return;
}


