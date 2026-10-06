/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ee6460; end: 103ee647f;  */

void FUN_103ee6460(void)

{
  _objc_opt_self(&PTR_PTR_1129627d8);
  return;
}



/* Entry: 103ee6480; end: 103ee64bf;  */

void FUN_103ee6480(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 103ee64c0; end: 103ee66f7;  */

long FUN_103ee64c0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103ee66f8; end: 103ee67a7;  */

void FUN_103ee66f8(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000103ee67c4();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 103ee67a8; end: 103ee67d7;  */

void FUN_103ee67a8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103ee67d8; end: 103ee6817;  */

void FUN_103ee67d8(void)

{
  undefined *puVar1;
  
  if (puRam000000011302cbf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca8430;
  _swift_getWitnessTable(&UNK_10dca8430,&UNK_11071fad0);
  puRam000000011302cbf0 = puVar1;
  return;
}



/* Entry: 103ee6818; end: 103ee681b;  */

void FUN_103ee6818(void)

{
  undefined *puVar1;
  
  if (puRam000000011302cbf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca84d0;
  _swift_getWitnessTable(&UNK_10dca84d0,&UNK_11071faf0);
  puRam000000011302cbf8 = puVar1;
  return;
}



/* Entry: 103ee681c; end: 103ee685b;  */

void FUN_103ee681c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302cbf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca84d0;
  _swift_getWitnessTable(&UNK_10dca84d0,&UNK_11071faf0);
  puRam000000011302cbf8 = puVar1;
  return;
}



/* Entry: 103ee685c; end: 103ee68a3;  */

undefined1  [16] FUN_103ee685c(void)

{
  return ZEXT816(0x11071fad0);
}



/* Entry: 103ee68a4; end: 103ee68cf; +[SCCreatorSettingsDataActionSource discoverFeedActionSheetHandler] */

void FUN_103ee68a4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f1ccc50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee68d0; end: 103ee68fb; +[SCCreatorSettingsDataActionSource discoverFeedFriendStoryOptInStatusHandler] */

void FUN_103ee68d0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000030,0x800000010f1ccc80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee68fc; end: 103ee6927; +[SCCreatorSettingsDataActionSource discoverFeedManagement] */

void FUN_103ee68fc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1cccc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6928; end: 103ee6953; +[SCCreatorSettingsDataActionSource discoverFeedMiniProfile] */

void FUN_103ee6928(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1ccce0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6954; end: 103ee697f; +[SCCreatorSettingsDataActionSource discoverFeedSubscriptionRequestHandler] */

void FUN_103ee6954(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f1ccd00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6980; end: 103ee69ab; +[SCCreatorSettingsDataActionSource friendStoriesSharingSession] */

void FUN_103ee6980(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f1ccd30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee69ac; end: 103ee69d7; +[SCCreatorSettingsDataActionSource friendUnifiedProfileDataSource] */

void FUN_103ee69ac(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f1ccd50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee69d8; end: 103ee6a03; +[SCCreatorSettingsDataActionSource friendUnifiedProfileStoryNotificationActionHandler] */

void FUN_103ee69d8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000038,0x800000010f1ccd80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6a04; end: 103ee6a2f; +[SCCreatorSettingsDataActionSource impalaDiscoverFeedHelper] */

void FUN_103ee6a04(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1ccdc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6a30; end: 103ee6a5b; +[SCCreatorSettingsDataActionSource impalaPublicProfileHandler] */

void FUN_103ee6a30(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1ccde0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6a5c; end: 103ee6a87; +[SCCreatorSettingsDataActionSource impalaPublisherProfileViewController] */

void FUN_103ee6a5c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010f1cce00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6a88; end: 103ee6ab3; +[SCCreatorSettingsDataActionSource impalaSubscriptionStore] */

void FUN_103ee6a88(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f1cce30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6ab4; end: 103ee6adf; +[SCCreatorSettingsDataActionSource optInNotificationPromptCard] */

void FUN_103ee6ab4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1cce50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6ae0; end: 103ee6b0b; +[SCCreatorSettingsDataActionSource storiesSharingSession] */

void FUN_103ee6ae0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1cce70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6b0c; end: 103ee6b37; +[SCCreatorSettingsDataActionSource storiesNotificationSetting] */

void FUN_103ee6b0c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1cce90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6b38; end: 103ee6b6b; +[SCCreatorSettingsDataActionSource cameraLenses] */

void FUN_103ee6b38(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6c5f6172656d6163,0xed00007365736e65);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6b6c; end: 103ee6b77;  */

undefined * FUN_103ee6b6c(void)

{
  return &UNK_11071fb58;
}



/* Entry: 103ee6b78; end: 103ee6ba3; +[SCCreatorSettingsDataActionSource creatorSubscriptionsPaywall] */

void FUN_103ee6b78(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1cceb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6ba4; end: 103ee6ba7;  */

void FUN_103ee6ba4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ee6ba8; end: 103ee6bab; -[SCCreatorSettingsDataActionSource .cxx_destruct] */

void FUN_103ee6ba8(void)

{
  return;
}



/* Entry: 103ee6bac; end: 103ee6bd7; +[SCCreatorSettingsDataUpdateAction creatorSettingsDataStoreRefreshed] */

void FUN_103ee6bac(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1cced0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6bd8; end: 103ee6c03; +[SCCreatorSettingsDataUpdateAction discoverDataStoreRefreshed] */

void FUN_103ee6bd8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1ccf00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6c04; end: 103ee6c2f; +[SCCreatorSettingsDataUpdateAction creatorDidSubscribe] */

void FUN_103ee6c04(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1ccf20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6c30; end: 103ee6c5b; +[SCCreatorSettingsDataUpdateAction creatorDidUnsubscribe] */

void FUN_103ee6c30(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1ccf40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6c5c; end: 103ee6c87; +[SCCreatorSettingsDataUpdateAction creatorDidOptInNotification] */

void FUN_103ee6c5c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1ccf60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6c88; end: 103ee6cb3; +[SCCreatorSettingsDataUpdateAction creatorDidOptOutNotification] */

void FUN_103ee6c88(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f1ccf80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6cb4; end: 103ee6cdf; +[SCCreatorSettingsDataUpdateAction creatorDidHide] */

void FUN_103ee6cb4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1ccfb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6ce0; end: 103ee6d0b; +[SCCreatorSettingsDataUpdateAction creatorDidUnhide] */

void FUN_103ee6ce0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1ccfd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6d0c; end: 103ee6d0f; -[SCCreatorSettingsDataUpdateAction .cxx_destruct] */

void FUN_103ee6d0c(void)

{
  return;
}



/* Entry: 103ee6d10; end: 103ee6d3b; +[SCCreatorSettingsDataTrackingKeys creatorSettings] */

void FUN_103ee6d10(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002e,0x800000010f1ccff0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6d3c; end: 103ee6d67; +[SCCreatorSettingsDataTrackingKeys didSubscribe] */

void FUN_103ee6d3c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010f1cd020);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee6d68; end: 103ee6da3;  */

void FUN_103ee6d68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee6da4; end: 103ee6dd7;  */

void FUN_103ee6da4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ee6dd8; end: 103ee6ddb; -[SCCreatorSettingsDataTrackingKeys .cxx_destruct] */

void FUN_103ee6dd8(void)

{
  return;
}



/* Entry: 103ee6ddc; end: 103ee6e3b;  */

void FUN_103ee6ddc(void)

{
  _objc_opt_self(&PTR_PTR_112962888);
  return;
}



/* Entry: 103ee6e3c; end: 103ee6e3f; -[SCCreatorSettingsDataUpdateAction init] */

void FUN_103ee6e3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee6e40; end: 103ee6e43; -[SCCreatorSettingsDataActionSource init] */

void FUN_103ee6e40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee6e44; end: 103ee6e4f; -[SCCreatorSettingsDataTrackingKeys init] */

void FUN_103ee6e44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee6e50; end: 103ee6e5f; -[_TtC24SCCreatorSettingsService24SCCreatorSettingsService creatorSettingsTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee6e50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302cc88));
  return;
}



/* Entry: 103ee6e60; end: 103ee6ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee6e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302cc78) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302cc80) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302cc88) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee6ed4; end: 103ee6f63; -[_TtC24SCCreatorSettingsService24SCCreatorSettingsService initWithCreatorSettingsFetcher:creatorSettingsMutator:creatorSettingsTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee6ed4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11302cc78) = param_3;
  *(undefined8 *)(param_1 + _DAT_11302cc80) = param_4;
  *(undefined8 *)(param_1 + _DAT_11302cc88) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103ee6f64; end: 103ee6fc3; -[_TtC24SCCreatorSettingsService24SCCreatorSettingsService init] */

void FUN_103ee6f64(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCreatorSettingsService.SCCreatorSettingsService",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee6f90);
  (*pcVar1)();
}



/* Entry: 103ee6fc4; end: 103ee700b; -[_TtC24SCCreatorSettingsService24SCCreatorSettingsService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee6fc4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302cc78));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302cc80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302cc88));
  return;
}



/* Entry: 103ee700c; end: 103ee7017; -[SCPublisherData displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee700c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302ccb8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302ccb8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ee7018; end: 103ee7023; -[SCPublisherData logoUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee7018(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302ccc0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302ccc0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ee7024; end: 103ee709f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee7024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302ccb8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302ccc0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee70a0; end: 103ee714b; -[SCPublisherData initWithDisplayName:logoUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee70a0(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11302ccb8);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_11302ccc0);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee714c; end: 103ee717f; -[SCPublisherData hash] */

undefined8 FUN_103ee714c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103ee7180();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103ee7180; end: 103ee73af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee7180(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_11302ccb8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11302ccb8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11302ccc0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11302ccc0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103ee73b0; end: 103ee73bb; -[SCPublisherData isEqual:] */

uint FUN_103ee73b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  (*(code *)0x103ee7244)(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103ee73bc; end: 103ee7403; -[SCPublisherData init] */

void FUN_103ee73bc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCreatorSettingsService/CreatorSettings.swift",0x2e,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee7404);
  (*pcVar1)();
}



/* Entry: 103ee7404; end: 103ee7443; -[SCPublisherData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee7404(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302ccb8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302ccc0 + 8))
  ;
  return;
}



/* Entry: 103ee7444; end: 103ee752b; -[SCUserData init] */

void FUN_103ee7444(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee752c; end: 103ee7567;  */

void FUN_103ee752c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103ee7568; end: 103ee7577; -[SCCreatorData subtype] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ee7568(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302ccc8);
}



/* Entry: 103ee7578; end: 103ee75bf; -[SCCreatorData init] */

void FUN_103ee7578(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCreatorSettingsService/CreatorSettings.swift",0x2e,2,0x4f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee75c0);
  (*pcVar1)();
}



/* Entry: 103ee75c0; end: 103ee7633; +[SCCreatorData userDataWithUserData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee75c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11302ccc8) = 0;
  *(undefined8 *)(lVar2 + _DAT_11302ccd0) = param_3;
  *(undefined8 *)(lVar2 + _DAT_11302ccd8) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee7634; end: 103ee7747; +[SCCreatorData publisherDataWithPublisherData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee7634(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar2 + _DAT_11302ccc8) = 1;
  *(undefined8 *)(lVar2 + _DAT_11302ccd0) = 0;
  *(undefined8 *)(lVar2 + _DAT_11302ccd8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee7748; end: 103ee779b; -[SCCreatorData matchUserData:publisherData:] */

void FUN_103ee7748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x000103ee76ac(FUN_103ee7f3c,auStack_40,0x103ee7f4c,auStack_60);
  _objc_release(param_1);
  return;
}



/* Entry: 103ee779c; end: 103ee779f;  */

void FUN_103ee779c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ee77a0; end: 103ee77d7; -[SCCreatorData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee77a0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302ccd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302ccd8));
  return;
}



/* Entry: 103ee77d8; end: 103ee77e3; -[SCCreatorSettings identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee77d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302cce0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302cce0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ee77e4; end: 103ee783b;  */

void FUN_103ee77e4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ee783c; end: 103ee784b; -[SCCreatorSettings creatorData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee783c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302cce8));
  return;
}



/* Entry: 103ee784c; end: 103ee785b; -[SCCreatorSettings isSubscribed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103ee784c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302ccf0);
}



/* Entry: 103ee785c; end: 103ee786b; -[SCCreatorSettings isOptedInForNotifications] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103ee785c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302ccf8);
}



/* Entry: 103ee786c; end: 103ee787b; -[SCCreatorSettings canOptInForNotifications] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103ee786c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302cd00);
}



/* Entry: 103ee787c; end: 103ee788b; -[SCCreatorSettings isHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103ee787c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302cd08);
}



/* Entry: 103ee788c; end: 103ee7947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee788c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302cce0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302cce8) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11302ccf0) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_11302ccf8) = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_11302cd00) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_11302cd08) = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee7948; end: 103ee7a27; -[SCCreatorSettings initWithIdentifier:creatorData:isSubscribed:isOptedInForNotifications:canOptInForNotifications:isHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee7948(long param_1,long param_2,long param_3,undefined8 param_4,undefined1 param_5,
                  undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11302cce0);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11302cce8) = param_4;
  *(undefined1 *)(param_1 + _DAT_11302ccf0) = param_5;
  *(undefined1 *)(param_1 + _DAT_11302ccf8) = param_6;
  *(undefined1 *)(param_1 + _DAT_11302cd00) = param_7;
  *(undefined1 *)(param_1 + _DAT_11302cd08) = param_8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_60,puVar2);
  return;
}



/* Entry: 103ee7a28; end: 103ee7a5b; -[SCCreatorSettings hash] */

undefined8 FUN_103ee7a28(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103ee7a5c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103ee7a5c; end: 103ee7b67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee7a5c(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_11302cce0))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11302cce0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_11302cce8);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x000107c44c3c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11302ccf0));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11302ccf8));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11302cd00));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11302cd08));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103ee7b68; end: 103ee7d17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103ee7b68(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  uint uStack_8c;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar12 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar10 = &lStack_88;
    _swift_dynamicCast(plVar10,auStack_80,PTR___sypN_11034f1a8 + 8,lVar12,6);
    if (((ulong)plVar10 & 1) != 0) {
      lVar12 = ((long *)(unaff_x20 + _DAT_11302cce0))[1];
      lVar13 = ((long *)(lStack_88 + _DAT_11302cce0))[1];
      if (lVar12 == 0 || lVar13 == 0) {
        uStack_8c = (uint)(lVar12 == 0 && lVar13 == 0);
      }
      else {
        lVar11 = *(long *)(unaff_x20 + _DAT_11302cce0);
        if (lVar11 == *(long *)(lStack_88 + _DAT_11302cce0) && lVar12 == lVar13) {
          uStack_8c = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uStack_8c = (uint)lVar11;
        }
      }
      lVar12 = *(long *)(unaff_x20 + _DAT_11302cce8);
      if (lVar12 == 0) {
        uVar9 = (uint)(*(long *)(lStack_88 + _DAT_11302cce8) == 0);
      }
      else {
        func_0x000107c49cec();
        uVar9 = (uint)lVar12;
      }
      bVar1 = *(byte *)(unaff_x20 + _DAT_11302ccf0);
      bVar2 = *(byte *)(lStack_88 + _DAT_11302ccf0);
      bVar3 = *(byte *)(unaff_x20 + _DAT_11302ccf8);
      bVar4 = *(byte *)(lStack_88 + _DAT_11302ccf8);
      bVar5 = *(byte *)(unaff_x20 + _DAT_11302cd00);
      bVar6 = *(byte *)(lStack_88 + _DAT_11302cd00);
      bVar7 = *(byte *)(unaff_x20 + _DAT_11302cd08);
      bVar8 = *(byte *)(lStack_88 + _DAT_11302cd08);
      _objc_release(lStack_88);
      uVar9 = uStack_8c & uVar9 & ((bVar1 ^ bVar2) ^ 1) &
              ((bVar3 ^ bVar4) ^ 1) & ((bVar5 ^ bVar6) ^ 1) & ((bVar7 ^ bVar8) ^ 1);
      goto LAB_103ee7cf4;
    }
  }
  uVar9 = 0;
LAB_103ee7cf4:
  return uVar9 & 1;
}



/* Entry: 103ee7d18; end: 103ee7d23; -[SCCreatorSettings isEqual:] */

uint FUN_103ee7d18(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_103ee7b68(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103ee7d24; end: 103ee7daf;  */

uint FUN_103ee7d24(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  (*param_4)(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103ee7db0; end: 103ee7e2b; -[SCCreatorSettings init] */

void FUN_103ee7db0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCreatorSettingsService/CreatorSettings.swift",0x2e,2,0xae,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee7df8);
  (*pcVar1)();
}



/* Entry: 103ee7e2c; end: 103ee7e67; -[SCCreatorSettings .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee7e2c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302cce0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302cce8));
  return;
}



/* Entry: 103ee7e68; end: 103ee7e6b;  */

void FUN_103ee7e68(void)

{
  undefined *puVar1;
  
  if (puRam000000011302cd10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca86b0;
  _swift_getWitnessTable(&UNK_10dca86b0,&UNK_11071fb78);
  puRam000000011302cd10 = puVar1;
  return;
}



/* Entry: 103ee7e6c; end: 103ee7eeb;  */

void FUN_103ee7e6c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302cd10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca86b0;
  _swift_getWitnessTable(&UNK_10dca86b0,&UNK_11071fb78);
  puRam000000011302cd10 = puVar1;
  return;
}



/* Entry: 103ee7eec; end: 103ee7efb;  */

undefined1  [16] FUN_103ee7eec(void)

{
  return ZEXT816(0x11071fb78);
}



/* Entry: 103ee7efc; end: 103ee7f3b;  */

void FUN_103ee7efc(void)

{
  _objc_opt_self(&PTR_PTR_112962ce0);
  return;
}



/* Entry: 103ee7f3c; end: 103ee7f4f;  */

void FUN_103ee7f3c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103ee7f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103ee7f50; end: 103ee7f53; -[SCCreatorData asUserData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee7f50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302ccd0));
  return;
}



/* Entry: 103ee7f54; end: 103ee7f57; -[SCCreatorData userDataUserData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee7f54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302ccd0));
  return;
}



/* Entry: 103ee7f58; end: 103ee7f5b; -[SCCreatorData publisherDataPublisherData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee7f58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302ccd8));
  return;
}



/* Entry: 103ee7f5c; end: 103ee7f5f; -[SCCreatorData asPublisherData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee7f5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302ccd8));
  return;
}



/* Entry: 103ee7f60; end: 103ee7f63; -[SCPublisherData copyWithZone:] */

void FUN_103ee7f60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103ee7f64; end: 103ee7f67; -[SCUserData copyWithZone:] */

void FUN_103ee7f64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103ee7f68; end: 103ee7f6b; -[SCCreatorData copyWithZone:] */

void FUN_103ee7f68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103ee7f6c; end: 103ee7f7b; -[SCCreatorSettings copyWithZone:] */

void FUN_103ee7f6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103ee7f7c; end: 103ee8027;  */

void FUN_103ee7f7c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}


