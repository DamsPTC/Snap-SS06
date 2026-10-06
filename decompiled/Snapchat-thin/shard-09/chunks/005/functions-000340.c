/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e433d0; end: 106e433d7; -[SCNotificationsSettingLogParametersBuilder withNewValueSmsPromotional:] */

void FUN_106e433d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x23) = param_3;
  return;
}



/* Entry: 106e433d8; end: 106e433df; -[SCNotificationsSettingLogParametersBuilder withOldValueNotificationGroupCommunities:] */

void FUN_106e433d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x24) = param_3;
  return;
}



/* Entry: 106e433e0; end: 106e433e7; -[SCNotificationsSettingLogParametersBuilder withNewValueNotificationsGroupCommunities:] */

void FUN_106e433e0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x25) = param_3;
  return;
}



/* Entry: 106e433e8; end: 106e433ef; -[SCNotificationsSettingLogParametersBuilder withOldValueMapNotifications:] */

void FUN_106e433e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x26) = param_3;
  return;
}



/* Entry: 106e433f0; end: 106e433f7; -[SCNotificationsSettingLogParametersBuilder withNewValueMapNotifications:] */

void FUN_106e433f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x27) = param_3;
  return;
}



/* Entry: 106e433f8; end: 106e434ab; -[SCNotificationSettingsContext initWithNotificationType:notificationId:source:] */

undefined1 *
FUN_106e433f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f72b0;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e434ac; end: 106e434cf; -[SCNotificationSettingsContext copyWithZone:] */

undefined8 FUN_106e434ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e434d0; end: 106e4354f; -[SCNotificationSettingsContext hash] */

undefined8 * FUN_106e434d0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106e435e0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e435ec;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106e435ec;
        }
        goto LAB_106e435e0;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106e435ec:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106e43550; end: 106e43607; -[SCNotificationSettingsContext isEqual:] */

long FUN_106e43550(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e435e0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e435ec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106e435ec;
        }
        goto LAB_106e435e0;
      }
    }
    lVar3 = 0;
  }
LAB_106e435ec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e43608; end: 106e4360f; -[SCNotificationSettingsContext notificationType] */

undefined8 FUN_106e43608(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e43610; end: 106e43617; -[SCNotificationSettingsContext notificationId] */

undefined8 FUN_106e43610(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e43618; end: 106e4361f; -[SCNotificationSettingsContext source] */

undefined8 FUN_106e43618(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e43620; end: 106e4364f; -[SCNotificationSettingsContext .cxx_destruct] */

void FUN_106e43620(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e43650; end: 106e436c3; -[SCCommunitiesStoreServices initWithCommunityStoreProvider:] */

undefined1 * FUN_106e43650(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f72b8;
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



/* Entry: 106e436c4; end: 106e436cb; -[SCCommunitiesStoreServices communityStoreProvider] */

undefined8 FUN_106e436c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e436cc; end: 106e436d7; -[SCCommunitiesStoreServices .cxx_destruct] */

void FUN_106e436cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e436d8; end: 106e4374b; -[SCComposerMapServices initWithMapPresenterFactory:] */

undefined1 * FUN_106e436d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f72c0;
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



/* Entry: 106e4374c; end: 106e43753; -[SCComposerMapServices mapPresenterFactory] */

undefined8 FUN_106e4374c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e43754; end: 106e4375f; -[SCComposerMapServices .cxx_destruct] */

void FUN_106e43754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e43760; end: 106e437d3; -[SCMessageReportingPluginServices initWithMessageReportingPluginManager:] */

undefined1 * FUN_106e43760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f72c8;
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



/* Entry: 106e437d4; end: 106e437db; -[SCMessageReportingPluginServices messageReportingPluginManager] */

undefined8 FUN_106e437d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e437dc; end: 106e437e7; -[SCMessageReportingPluginServices .cxx_destruct] */

void FUN_106e437dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e437e8; end: 106e4385b; -[SCCustomReportServices initWithComposerFactory:] */

undefined1 * FUN_106e437e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f72d0;
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



/* Entry: 106e4385c; end: 106e43863; -[SCCustomReportServices composerFactory] */

undefined8 FUN_106e4385c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e43864; end: 106e4386f; -[SCCustomReportServices .cxx_destruct] */

void FUN_106e43864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e43870; end: 106e438d7; +[SCSecurityDuplexPayloadSecurityDuplexPayload descriptor] */

void FUN_106e43870(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7df0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b3cf80,
                        &PTR____CFConstantStringClassReference_110e88c58,&PTR_DAT_113187938,
                        &PTR_DAT_113187990,2,0x18,0x1c);
    puRam00000001136c7df0 = puVar1;
  }
  return;
}



/* Entry: 106e438d8; end: 106e43973; +[SCSecurityDuplexPayloadSecurityDuplexPayload_Operation descriptor] */

undefined * FUN_106e438d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7df8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b3cfd0,
                        &PTR____CFConstantStringClassReference_110e88c78,&PTR_DAT_113187938,
                        &PTR_DAT_113187a10,3,0x20,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112b3cf80);
    puRam00000001136c7df8 = puVar1;
  }
  return puRam00000001136c7df8;
}



/* Entry: 106e43974; end: 106e439ef; +[SCSecurityDuplexPayloadSecurityDuplexPayload_ForceArgosTokenRefresh descriptor] */

undefined * FUN_106e43974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7e00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b3d020,
                        &PTR____CFConstantStringClassReference_110e88c98,&PTR_DAT_113187938,
                        &PTR_DAT_1131879d0,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c7e00 = puVar1;
  }
  return puRam00000001136c7e00;
}



/* Entry: 106e439f0; end: 106e43a6b; +[SCSecurityDuplexPayloadSecurityDuplexPayload_FetchDeviceCheckToken descriptor] */

undefined * FUN_106e439f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7e08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b3d070,
                        &PTR____CFConstantStringClassReference_110e88cb8,&PTR_DAT_113187938,
                        &PTR_s_nonce_113187950,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c7e08 = puVar1;
  }
  return puRam00000001136c7e08;
}



/* Entry: 106e43a6c; end: 106e43ae7; +[SCSecurityDuplexPayloadSecurityDuplexPayload_FetchPlayIntegrityToken descriptor] */

undefined * FUN_106e43a6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7e10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b3d0c0,
                        &PTR____CFConstantStringClassReference_110e88cd8,&PTR_DAT_113187938,
                        &PTR_s_nonce_113187970,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c7e10 = puVar1;
  }
  return puRam00000001136c7e10;
}



/* Entry: 106e43ae8; end: 106e43b5b; -[SCBoltURLMediaOperaService initWithPresenter:] */

undefined1 * FUN_106e43ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f72d8;
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



/* Entry: 106e43b5c; end: 106e43b63; -[SCBoltURLMediaOperaService presenter] */

undefined8 FUN_106e43b5c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e43b64; end: 106e43b6f; -[SCBoltURLMediaOperaService .cxx_destruct] */

void FUN_106e43b64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e43b70; end: 106e43c57; -[SCBoltURLMediaPlayableDataModel initWithIdentifier:boltURL:isImage:lensId:] */

undefined1 *
FUN_106e43b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f72e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e43c58; end: 106e43c7b; -[SCBoltURLMediaPlayableDataModel copyWithZone:] */

undefined8 FUN_106e43c58(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e43c7c; end: 106e43cff; -[SCBoltURLMediaPlayableDataModel hash] */

undefined8 * FUN_106e43c7c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106e43da8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e43db4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_106e43db4;
          }
          goto LAB_106e43da8;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106e43db4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106e43d00; end: 106e43dcf; -[SCBoltURLMediaPlayableDataModel isEqual:] */

long FUN_106e43d00(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e43da8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e43db4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_106e43db4;
          }
          goto LAB_106e43da8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e43db4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e43dd0; end: 106e43dd7; -[SCBoltURLMediaPlayableDataModel identifier] */

undefined8 FUN_106e43dd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e43dd8; end: 106e43ddf; -[SCBoltURLMediaPlayableDataModel boltURL] */

undefined8 FUN_106e43dd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e43de0; end: 106e43de7; -[SCBoltURLMediaPlayableDataModel isImage] */

undefined1 FUN_106e43de0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e43de8; end: 106e43def; -[SCBoltURLMediaPlayableDataModel lensId] */

undefined8 FUN_106e43de8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e43df0; end: 106e43e2b; -[SCBoltURLMediaPlayableDataModel .cxx_destruct] */

void FUN_106e43df0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e43e2c; end: 106e43f3f; -[SCBoltURLMediaPackage initWithLinkId:senderUserId:deepLink:mediaArray:disableInPlaybackDelete:] */

undefined1 *
FUN_106e43e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f72e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e43f40; end: 106e43f63; -[SCBoltURLMediaPackage copyWithZone:] */

undefined8 FUN_106e43f40(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e43f64; end: 106e43ff3; -[SCBoltURLMediaPackage hash] */

undefined8 * FUN_106e43f64(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106e440b4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e440c0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_106e440c0;
            }
            goto LAB_106e440b4;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106e440c0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106e43ff4; end: 106e440db; -[SCBoltURLMediaPackage isEqual:] */

long FUN_106e43ff4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e440b4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e440c0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_106e440c0;
            }
            goto LAB_106e440b4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e440c0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e440dc; end: 106e440e3; -[SCBoltURLMediaPackage linkId] */

undefined8 FUN_106e440dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e440e4; end: 106e440eb; -[SCBoltURLMediaPackage senderUserId] */

undefined8 FUN_106e440e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e440ec; end: 106e440f3; -[SCBoltURLMediaPackage deepLink] */

undefined8 FUN_106e440ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e440f4; end: 106e440fb; -[SCBoltURLMediaPackage mediaArray] */

undefined8 FUN_106e440f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e440fc; end: 106e44103; -[SCBoltURLMediaPackage disableInPlaybackDelete] */

undefined1 FUN_106e440fc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e44104; end: 106e4414b; -[SCBoltURLMediaPackage .cxx_destruct] */

void FUN_106e44104(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e4414c; end: 106e441bf; -[SCFriendsFeedHeaderShortcutsLoggingServices initWithShortcutsSessionLoggingService:] */

undefined1 * FUN_106e4414c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f72f0;
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



/* Entry: 106e441c0; end: 106e441c7; -[SCFriendsFeedHeaderShortcutsLoggingServices shortcutsSessionLoggingService] */

undefined8 FUN_106e441c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e441c8; end: 106e441d3; -[SCFriendsFeedHeaderShortcutsLoggingServices .cxx_destruct] */

void FUN_106e441c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e441d4; end: 106e44247; -[SCSendToHeaderShortcutsLoggingServices initWithShortcutsSessionLoggingService:] */

undefined1 * FUN_106e441d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f72f8;
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



/* Entry: 106e44248; end: 106e4424f; -[SCSendToHeaderShortcutsLoggingServices shortcutsSessionLoggingService] */

undefined8 FUN_106e44248(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e44250; end: 106e4425b; -[SCSendToHeaderShortcutsLoggingServices .cxx_destruct] */

void FUN_106e44250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e4425c; end: 106e44343; -[SCShortcutsSessionRecipientLoggingData initWithRecipientId:recipientType:shortcutId:isSelected:] */

undefined1 *
FUN_106e4425c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f7300;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e44344; end: 106e44367; -[SCShortcutsSessionRecipientLoggingData copyWithZone:] */

undefined8 FUN_106e44344(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e44368; end: 106e443eb; -[SCShortcutsSessionRecipientLoggingData hash] */

undefined8 * FUN_106e44368(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106e44494:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e444a0;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_106e444a0;
          }
          goto LAB_106e44494;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106e444a0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106e443ec; end: 106e444bb; -[SCShortcutsSessionRecipientLoggingData isEqual:] */

long FUN_106e443ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e44494:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e444a0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_106e444a0;
          }
          goto LAB_106e44494;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e444a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e444bc; end: 106e444c3; -[SCShortcutsSessionRecipientLoggingData recipientId] */

undefined8 FUN_106e444bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e444c4; end: 106e444cb; -[SCShortcutsSessionRecipientLoggingData recipientType] */

undefined8 FUN_106e444c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e444cc; end: 106e444d3; -[SCShortcutsSessionRecipientLoggingData shortcutId] */

undefined8 FUN_106e444cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e444d4; end: 106e444db; -[SCShortcutsSessionRecipientLoggingData isSelected] */

undefined1 FUN_106e444d4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e444dc; end: 106e44517; -[SCShortcutsSessionRecipientLoggingData .cxx_destruct] */

void FUN_106e444dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e44518; end: 106e445bb; -[SCImageToVideoWriterScopeExposerProviderServices initWithMultiScopeExposer:imageToVideoWriterScopeServices:] */

undefined1 *
FUN_106e44518(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7308;
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



/* Entry: 106e445bc; end: 106e445c3; -[SCImageToVideoWriterScopeExposerProviderServices imageToVideoWriterScopeExposer] */

undefined8 FUN_106e445bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e445c4; end: 106e445cb; -[SCImageToVideoWriterScopeExposerProviderServices imageToVideoWriterScopeServices] */

undefined8 FUN_106e445c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e445cc; end: 106e445fb; -[SCImageToVideoWriterScopeExposerProviderServices .cxx_destruct] */

void FUN_106e445cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e445fc; end: 106e44607; -[SCSpectaclesAppRoutingService .cxx_destruct] */

void FUN_106e445fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e44608; end: 106e44613; -[SCDiscoverFeedOperaServices .cxx_destruct] */

void FUN_106e44608(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e44614; end: 106e44687; -[SCSharedStoryServices initWithSharedStorySnapManager:] */

undefined1 * FUN_106e44614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7320;
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



/* Entry: 106e44688; end: 106e4468f; -[SCSharedStoryServices sharedStorySnapManager] */

undefined8 FUN_106e44688(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e44690; end: 106e4469b; -[SCSharedStoryServices .cxx_destruct] */

void FUN_106e44690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e4469c; end: 106e447d3; -[SCMessagingConversationStoryElementResponse initWithStory:statusEnum:publisherData:typeEnum:storyId:subtypeEnum:customStoryType:storyDisplayName:] */

undefined1 *
FUN_106e4469c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f7328;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e447d4; end: 106e447f7; -[SCMessagingConversationStoryElementResponse copyWithZone:] */

undefined8 FUN_106e447d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e447f8; end: 106e448a7; -[SCMessagingConversationStoryElementResponse hash] */

undefined8 * FUN_106e447f8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x10);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  lStack_60 = -lVar4;
  if (-1 < lVar4) {
    lStack_60 = lVar4;
  }
  uStack_68 = uVar1;
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x20);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  lStack_50 = -lVar4;
  if (-1 < lVar4) {
    lStack_50 = lVar4;
  }
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bfde980();
  puVar2 = &uStack_68;
  uStack_30 = uVar1;
  func_0x000100505190(puVar2,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
LAB_106e44998:
    puVar5 = (undefined8 *)0x1;
  }
  else {
    puVar5 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e449a4;
    puVar5 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((((ulong)puVar3 & 1) != 0) &&
       ((((puVar2[2] == param_3[2] && (puVar2[4] == param_3[4])) && (puVar2[6] == param_3[6])) &&
        (puVar2[7] == param_3[7])))) {
      lVar4 = puVar2[1];
      if ((lVar4 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = puVar2[3];
        if ((lVar4 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          lVar4 = puVar2[5];
          if ((lVar4 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
            puVar5 = (undefined8 *)puVar2[8];
            if (puVar5 != (undefined8 *)param_3[8]) {
              func_0x00010c071ae0();
              goto LAB_106e449a4;
            }
            goto LAB_106e44998;
          }
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_106e449a4:
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 106e448a8; end: 106e449bf; -[SCMessagingConversationStoryElementResponse isEqual:] */

long FUN_106e448a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e44998:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e449a4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x40);
            if (lVar3 != *(long *)(param_3 + 0x40)) {
              func_0x00010c071ae0();
              goto LAB_106e449a4;
            }
            goto LAB_106e44998;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e449a4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e449c0; end: 106e449c7; -[SCMessagingConversationStoryElementResponse story] */

undefined8 FUN_106e449c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e449c8; end: 106e449cf; -[SCMessagingConversationStoryElementResponse statusEnum] */

undefined8 FUN_106e449c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e449d0; end: 106e449d7; -[SCMessagingConversationStoryElementResponse publisherData] */

undefined8 FUN_106e449d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e449d8; end: 106e449df; -[SCMessagingConversationStoryElementResponse typeEnum] */

undefined8 FUN_106e449d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e449e0; end: 106e449e7; -[SCMessagingConversationStoryElementResponse storyId] */

undefined8 FUN_106e449e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e449e8; end: 106e449ef; -[SCMessagingConversationStoryElementResponse subtypeEnum] */

undefined8 FUN_106e449e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e449f0; end: 106e449f7; -[SCMessagingConversationStoryElementResponse customStoryType] */

undefined8 FUN_106e449f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106e449f8; end: 106e449ff; -[SCMessagingConversationStoryElementResponse storyDisplayName] */

undefined8 FUN_106e449f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106e44a00; end: 106e44a47; -[SCMessagingConversationStoryElementResponse .cxx_destruct] */

void FUN_106e44a00(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e44a48; end: 106e44b4b; -[SCSharedFriendStory initWithStoryMetadata:poster:contextHint:postingTimestamp:isPublic:status:storyType:] */

undefined1 *
FUN_106e44a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

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
  puStack_58 = PTR_PTR_1126f7330;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e44b4c; end: 106e44b6f; -[SCSharedFriendStory copyWithZone:] */

undefined8 FUN_106e44b4c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e44b70; end: 106e44c0f; -[SCSharedFriendStory hash] */

undefined8 * FUN_106e44b70(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x28);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_50 = uVar1;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106e44ce8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106e44cf4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28) &&
          (*(char *)((long)puVar3 + 8) == param_3[8])) &&
         (*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30))))) &&
       (*(long *)((long)puVar3 + 0x38) == *(long *)(param_3 + 0x38))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_106e44cf4;
          }
          goto LAB_106e44ce8;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_106e44cf4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 106e44c10; end: 106e44d0f; -[SCSharedFriendStory isEqual:] */

long FUN_106e44c10(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e44ce8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e44cf4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) &&
       (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_106e44cf4;
          }
          goto LAB_106e44ce8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e44cf4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e44d10; end: 106e44d17; -[SCSharedFriendStory storyMetadata] */

undefined8 FUN_106e44d10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e44d18; end: 106e44d1f; -[SCSharedFriendStory poster] */

undefined8 FUN_106e44d18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e44d20; end: 106e44d27; -[SCSharedFriendStory contextHint] */

undefined8 FUN_106e44d20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e44d28; end: 106e44d2f; -[SCSharedFriendStory postingTimestamp] */

undefined8 FUN_106e44d28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e44d30; end: 106e44d37; -[SCSharedFriendStory isPublic] */

undefined1 FUN_106e44d30(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106e44d38; end: 106e44d3f; -[SCSharedFriendStory status] */

undefined8 FUN_106e44d38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e44d40; end: 106e44d47; -[SCSharedFriendStory storyType] */

undefined8 FUN_106e44d40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


