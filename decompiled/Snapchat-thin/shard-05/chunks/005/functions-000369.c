/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ee8028; end: 103ee8067;  */

void FUN_103ee8028(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103ee8068; end: 103ee80b3; -[SCCreatorSettingsSubscriptionEntityId description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee8068(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_11302cdb8) == '\x01') &&
     (*(char *)(param_1 + _DAT_11302cdc8 + 8) == '\x01')) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee80b4);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee80b4; end: 103ee80fb; -[SCCreatorSettingsSubscriptionEntityId init] */

void FUN_103ee80b4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCCreatorSettingsService/SCCreatorSettingsSubscriptionEntityIdWrapper.swift",0x4b,2,
             0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee80fc);
  (*pcVar1)();
}



/* Entry: 103ee80fc; end: 103ee80ff; -[SCCreatorSettingsSubscriptionEntityId copyWithZone:] */

void FUN_103ee80fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103ee8100; end: 103ee818f; +[SCCreatorSettingsSubscriptionEntityId snapchatterWithSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee8100(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_11302cdb8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11302cdc0) = param_3;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11302cdc8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11302cdd0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee8190; end: 103ee8243; +[SCCreatorSettingsSubscriptionEntityId publisherWithPublisherId:displayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee8190(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_11302cdb8) = 1;
  *(undefined8 *)(lVar3 + _DAT_11302cdc0) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_11302cdc8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  plVar2 = (long *)(lVar3 + _DAT_11302cdd0);
  *plVar2 = param_4;
  plVar2[1] = param_2;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee8244; end: 103ee8317; -[SCCreatorSettingsSubscriptionEntityId matchSnapchatter:publisher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee8244(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + _DAT_11302cdb8) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103ee82d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_11302cdc0));
    return;
  }
  if (*(char *)((undefined8 *)(param_1 + _DAT_11302cdc8) + 1) != '\x01') {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302cdc8);
    lVar3 = ((undefined8 *)(param_1 + _DAT_11302cdd0))[1];
    if (lVar3 == 0) {
      _objc_retain();
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + _DAT_11302cdd0);
      _objc_retain();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar3);
    }
    (**(code **)(param_4 + 0x10))(param_4,uVar2,uVar4);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee8318);
  (*pcVar1)();
}



/* Entry: 103ee8318; end: 103ee834b;  */

void FUN_103ee8318(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ee834c; end: 103ee8387; -[SCCreatorSettingsSubscriptionEntityId .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee834c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302cdc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302cdd0 + 8))
  ;
  return;
}



/* Entry: 103ee8388; end: 103ee83a7;  */

void FUN_103ee8388(void)

{
  _objc_opt_self(&PTR_PTR_112962e98);
  return;
}



/* Entry: 103ee83a8; end: 103ee850f;  */

int FUN_103ee83a8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103ee8424;
        goto LAB_103ee8408;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103ee8408:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103ee8424:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103ee8510; end: 103ee854f;  */

void FUN_103ee8510(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ce00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca87ac;
  _swift_getWitnessTable(&UNK_10dca87ac,&UNK_11071fc60);
  puRam000000011302ce00 = puVar1;
  return;
}



/* Entry: 103ee8550; end: 103ee8563;  */

bool FUN_103ee8550(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103ee8564; end: 103ee863b;  */

void FUN_103ee8564(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ee863c; end: 103ee865b;  */

void FUN_103ee863c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103ee865c; end: 103ee869b;  */

void FUN_103ee865c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ce08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca8850;
  _swift_getWitnessTable(&UNK_10dca8850,&UNK_11071fd60);
  puRam000000011302ce08 = puVar1;
  return;
}



/* Entry: 103ee869c; end: 103ee86ab;  */

undefined1  [16] FUN_103ee869c(void)

{
  return ZEXT816(0x11071fd60);
}



/* Entry: 103ee86ac; end: 103ee86bb; -[_TtC34SCDiscoverFeedNotificationServices34SCDiscoverFeedNotificationServices optInProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee86ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302ce10));
  return;
}



/* Entry: 103ee86bc; end: 103ee86cb; -[_TtC34SCDiscoverFeedNotificationServices34SCDiscoverFeedNotificationServices notificationPromptHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee86bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302ce18));
  return;
}



/* Entry: 103ee86cc; end: 103ee86db; -[_TtC34SCDiscoverFeedNotificationServices34SCDiscoverFeedNotificationServices notificationOptInRequestManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee86cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302ce20));
  return;
}



/* Entry: 103ee86dc; end: 103ee86eb; -[_TtC34SCDiscoverFeedNotificationServices34SCDiscoverFeedNotificationServices settingsNotificationViewControllerCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee86dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302ce28));
  return;
}



/* Entry: 103ee86ec; end: 103ee8777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee86ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302ce10) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302ce18) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302ce20) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11302ce28) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee8778; end: 103ee87d7; -[_TtC34SCDiscoverFeedNotificationServices34SCDiscoverFeedNotificationServices init] */

void FUN_103ee8778(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCDiscoverFeedNotificationServices.SCDiscoverFeedNotificationServices",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee87a4);
  (*pcVar1)();
}



/* Entry: 103ee87d8; end: 103ee882f; -[_TtC34SCDiscoverFeedNotificationServices34SCDiscoverFeedNotificationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee87d8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302ce10));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302ce18));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302ce20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302ce28));
  return;
}



/* Entry: 103ee8830; end: 103ee8a87;  */

long FUN_103ee8830(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103ee8a88; end: 103ee8a9f;  */

bool FUN_103ee8a88(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103ee8aa0; end: 103ee8adf;  */

void FUN_103ee8aa0(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ce58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca89f0;
  _swift_getWitnessTable(&UNK_10dca89f0,&UNK_11071ff98);
  puRam000000011302ce58 = puVar1;
  return;
}



/* Entry: 103ee8ae0; end: 103ee8b8b;  */

void FUN_103ee8ae0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103ee8b8c; end: 103ee8bc3;  */

void FUN_103ee8b8c(ulong *param_1,ulong *param_2)

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



/* Entry: 103ee8bc4; end: 103ee8bd3; -[_TtC27SCDiscoverFeedQueryServices27SCDiscoverFeedQueryServices discoverFeedQueryCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee8bc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302ce60));
  return;
}



/* Entry: 103ee8bd4; end: 103ee8be3; -[_TtC27SCDiscoverFeedQueryServices27SCDiscoverFeedQueryServices prefetchHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee8bd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302ce68));
  return;
}



/* Entry: 103ee8be4; end: 103ee8bf3; -[_TtC27SCDiscoverFeedQueryServices27SCDiscoverFeedQueryServices viewModelGenerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee8be4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302ce78));
  return;
}



/* Entry: 103ee8bf4; end: 103ee8c7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee8bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302ce60) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302ce68) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302ce70) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11302ce78) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee8c80; end: 103ee8cdf; -[_TtC27SCDiscoverFeedQueryServices27SCDiscoverFeedQueryServices init] */

void FUN_103ee8c80(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCDiscoverFeedQueryServices.SCDiscoverFeedQueryServices",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee8cac);
  (*pcVar1)();
}



/* Entry: 103ee8ce0; end: 103ee8d37; -[_TtC27SCDiscoverFeedQueryServices27SCDiscoverFeedQueryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee8ce0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302ce60));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302ce68));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302ce70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302ce78));
  return;
}



/* Entry: 103ee8d38; end: 103ee8d47; -[SCStoriesSnapPrefetchConfig story] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee8d38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302cea8));
  return;
}



/* Entry: 103ee8d48; end: 103ee8d57; -[SCStoriesSnapPrefetchConfig numOfSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ee8d48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302ceb0);
}



/* Entry: 103ee8d58; end: 103ee8db7; -[SCStoriesSnapPrefetchConfig debugInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee8d58(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11302ceb8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103ee8db8; end: 103ee8dcb; -[SCStoriesSnapPrefetchConfig completePrefetchOnFirstSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103ee8db8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302cec0);
}



/* Entry: 103ee8dcc; end: 103ee8f1b; -[SCStoriesSnapPrefetchConfig initWithStory:numOfSnaps:debugInfo:completePrefetchOnFirstSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee8dcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined1 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_5 == 0) {
    param_5 = 0;
  }
  else {
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  *(undefined8 *)(param_1 + _DAT_11302cea8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11302ceb0) = param_4;
  *(long *)(param_1 + _DAT_11302ceb8) = param_5;
  *(undefined1 *)(param_1 + _DAT_11302cec0) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 103ee8f1c; end: 103ee8f1f; -[SCStoriesSnapPrefetchConfig copyWithZone:] */

void FUN_103ee8f1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103ee8f20; end: 103ee8f3b; -[SCStoriesSnapPrefetchConfig description] */

void FUN_103ee8f20(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee8f3c; end: 103ee8fb7; -[SCStoriesSnapPrefetchConfig init] */

void FUN_103ee8f3c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedQueryServices/SCStoriesSnapPrefetchConfigWrapper.swift",0x44,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee8f84);
  (*pcVar1)();
}



/* Entry: 103ee8fb8; end: 103ee8fef; -[SCStoriesSnapPrefetchConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee8fb8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302cea8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302ceb8));
  return;
}



/* Entry: 103ee8ff0; end: 103ee900f;  */

void FUN_103ee8ff0(void)

{
  _objc_opt_self(&PTR_PTR_112963120);
  return;
}



/* Entry: 103ee9010; end: 103ee9013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee9010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302cea8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302ceb0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302ceb8) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11302cec0) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee9014; end: 103ee9023; -[SCStoriesStoryPrefetchConfig numOfStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ee9014(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302cef0);
}



/* Entry: 103ee9024; end: 103ee9033; -[SCStoriesStoryPrefetchConfig numOfSnapsInAStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ee9024(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302cef8);
}



/* Entry: 103ee9034; end: 103ee9047; -[SCStoriesStoryPrefetchConfig maxNumOfSnapsInAStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ee9034(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302cf00);
}



/* Entry: 103ee9048; end: 103ee912f; -[SCStoriesStoryPrefetchConfig initWithNumOfStories:numOfSnapsInAStory:maxNumOfSnapsInAStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee9048(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11302cef0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11302cef8) = param_4;
  *(undefined8 *)(param_1 + _DAT_11302cf00) = param_5;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee9130; end: 103ee9133; -[SCStoriesStoryPrefetchConfig copyWithZone:] */

void FUN_103ee9130(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103ee9134; end: 103ee914f; -[SCStoriesStoryPrefetchConfig description] */

void FUN_103ee9134(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee9150; end: 103ee91eb; -[SCStoriesStoryPrefetchConfig init] */

void FUN_103ee9150(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedQueryServices/SCStoriesStoryPrefetchConfigWrapper.swift",0x45,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee9198);
  (*pcVar1)();
}



/* Entry: 103ee91ec; end: 103ee91ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee91ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302cef0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302cef8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302cf00) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee91f0; end: 103ee9203; -[SCDiscoverFeedPrefetchContext eventType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ee91f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302cf30);
}



/* Entry: 103ee9204; end: 103ee929b; -[SCDiscoverFeedPrefetchContext initWithEventType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee9204(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11302cf30) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee929c; end: 103ee929f; -[SCDiscoverFeedPrefetchContext copyWithZone:] */

void FUN_103ee929c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103ee92a0; end: 103ee92bb; -[SCDiscoverFeedPrefetchContext description] */

void FUN_103ee92a0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee92bc; end: 103ee9357; -[SCDiscoverFeedPrefetchContext init] */

void FUN_103ee92bc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedQueryServices/SCDiscoverFeedPrefetchContextWrapper.swift",0x46,2,0x22,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee9304);
  (*pcVar1)();
}



/* Entry: 103ee9358; end: 103ee935b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee9358(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302cf30) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee935c; end: 103ee93c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee935c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001002ab1d4();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_11302cf68) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _swift_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103ee93c8; end: 103ee93cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee93c8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x0001002ab1d4();
  _objc_allocWithZone();
  *(long *)(lVar2 + _DAT_11302cf68) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain();
  _objc_msgSendSuper2(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 103ee93d0; end: 103ee941b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee93d0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302cf68) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee941c; end: 103ee947b; -[_TtC21SnapProRPCServicesAPI18SnapProRPCServices init] */

void FUN_103ee941c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapProRPCServicesAPI.SnapProRPCServices",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee9448);
  (*pcVar1)();
}



/* Entry: 103ee947c; end: 103ee948b;  */

undefined1  [16] FUN_103ee947c(void)

{
  return ZEXT816(0x110720090);
}



/* Entry: 103ee948c; end: 103ee949b; -[_TtC21SnapProRPCServicesAPI18SnapProRPCServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee948c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302cf68));
  return;
}



/* Entry: 103ee949c; end: 103ee96e7;  */

long FUN_103ee949c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103ee96e8; end: 103ee9733; -[SCSnapProRPCConfig baseUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee96e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302cf98);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11302cf98))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ee9734; end: 103ee9743; -[SCSnapProRPCConfig accessType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103ee9734(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302cfa0);
}



/* Entry: 103ee9744; end: 103ee974f; -[SCSnapProRPCConfig routeTag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee9744(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302cfa8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302cfa8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ee9750; end: 103ee975b; -[SCSnapProRPCConfig scopeName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee9750(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302cfb0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302cfb0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103ee975c; end: 103ee97b3;  */

void FUN_103ee975c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103ee97b4; end: 103ee985f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee97b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302cf98);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302cfa0) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302cfa8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302cfb0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee9860; end: 103ee9947; -[SCSnapProRPCConfig initWithBaseUrl:accessType:routeTag:scopeName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee9860(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_5 == 0) {
    lVar5 = 0;
    lVar4 = param_2;
  }
  else {
    lVar5 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar4 = lVar5;
  }
  if (param_6 == 0) {
    param_6 = 0;
    lVar4 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11302cf98);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11302cfa0) = param_4;
  plVar2 = (long *)(param_1 + _DAT_11302cfa8);
  *plVar2 = param_5;
  plVar2[1] = lVar5;
  plVar2 = (long *)(param_1 + _DAT_11302cfb0);
  *plVar2 = param_6;
  plVar2[1] = lVar4;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee9948; end: 103ee9a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee9948(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_allocWithZone();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302cf98);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  *(undefined8 *)(unaff_x20 + _DAT_11302cfa0) = param_1[2];
  uStack_48 = param_1[4];
  uStack_50 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302cfa8);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[6];
  uStack_60 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302cfb0);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  func_0x000100402194(&uStack_40,auStack_70);
  func_0x000101223174(&uStack_50,auStack_70);
  func_0x000101223174(&uStack_60,auStack_70);
  func_0x0001027949a8(param_1);
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ee9a0c; end: 103ee9a0f; -[SCSnapProRPCConfig copyWithZone:] */

void FUN_103ee9a0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103ee9a10; end: 103ee9a2b; -[SCSnapProRPCConfig description] */

void FUN_103ee9a10(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103ee9a2c; end: 103ee9aa7; -[SCSnapProRPCConfig init] */

void FUN_103ee9a2c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapProRPCServicesAPI/SnapProRPCConfigWrapper.swift",0x33,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ee9a74);
  (*pcVar1)();
}



/* Entry: 103ee9aa8; end: 103ee9afb; -[SCSnapProRPCConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ee9aa8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302cf98 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302cfa8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302cfb0 + 8))
  ;
  return;
}



/* Entry: 103ee9afc; end: 103ee9b1b;  */

void FUN_103ee9afc(void)

{
  _objc_opt_self(&PTR_PTR_112963460);
  return;
}



/* Entry: 103ee9b1c; end: 103ee9c47;  */

long * FUN_103ee9b1c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar2 == 2) {
      lVar3 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
      lVar3 = 0x11302cfe0;
      func_0x0001000285a8(0x11302cfe0,&UNK_10dca8c10);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x30));
      _objc_retain();
      uVar4 = 2;
    }
    else if ((int)plVar2 == 1) {
      lVar3 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar3;
      _objc_retain();
      _objc_retain(lVar3);
      uVar4 = 1;
    }
    else {
      lVar3 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar3;
      lVar3 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = lVar3;
      lVar6 = param_2[4];
      param_1[4] = lVar6;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar3);
      _objc_retain(lVar6);
      uVar4 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 103ee9c48; end: 103ee9ce7;  */

void FUN_103ee9c48(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar1 = (int)puVar2;
  if (iVar1 == 2) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
    lVar3 = 0x11302cfe0;
    func_0x0001000285a8(0x11302cfe0,&UNK_10dca8c10);
    lVar3 = (long)*(int *)(lVar3 + 0x30);
  }
  else if (iVar1 == 1) {
    _objc_release(*param_1);
    lVar3 = 8;
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    _swift_bridgeObjectRelease(param_1[1]);
    _swift_bridgeObjectRelease(param_1[3]);
    lVar3 = 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)((long)param_1 + lVar3));
  return;
}



/* Entry: 103ee9ce8; end: 103ee9edf;  */

undefined8 * FUN_103ee9ce8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar2 == 2) {
    lVar3 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    lVar3 = 0x11302cfe0;
    func_0x0001000285a8(0x11302cfe0,&UNK_10dca8c10);
    uVar4 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x30));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x30)) = uVar4;
  }
  else if ((int)puVar2 == 1) {
    uVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar4;
    _objc_retain();
  }
  else {
    uVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar4;
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    uVar4 = param_2[4];
    param_1[4] = uVar4;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar1);
  }
  _objc_retain(uVar4);
  _swift_storeEnumTagMultiPayload(param_1,param_3,puVar2);
  return param_1;
}



/* Entry: 103ee9ee0; end: 103ee9f1b;  */

undefined8 FUN_103ee9ee0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103ee9f1c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103ee9f1c; end: 103ee9f53;  */

void FUN_103ee9f1c(undefined8 param_1)

{
  if (lRam000000011302d058 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d3e88);
  return;
}



/* Entry: 103ee9f54; end: 103eea0cb;  */

long FUN_103ee9f54(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)lVar1 == 2) {
    lVar1 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
    lVar1 = 0x11302cfe0;
    func_0x0001000285a8(0x11302cfe0,&UNK_10dca8c10);
    *(undefined8 *)(param_1 + *(int *)(lVar1 + 0x30)) =
         *(undefined8 *)(param_2 + *(int *)(lVar1 + 0x30));
    _swift_storeEnumTagMultiPayload(param_1,param_3,2);
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
  return param_1;
}



/* Entry: 103eea0cc; end: 103eea0fb;  */

void FUN_103eea0cc(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000103eea0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 103eea0fc; end: 103eea18b;  */

void FUN_103eea0fc(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_58 [32];
  undefined *puStack_38;
  undefined *puStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = &UNK_10dca8c70;
  puStack_30 = &UNK_10dca8c88;
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_58,*(long *)(lVar1 + -8) + 0x40,PTR___sBOWV_11034d658 + 0x40)
    ;
    puStack_28 = auStack_58;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,3,&puStack_38);
  }
  return;
}



/* Entry: 103eea18c; end: 103eea19b;  */

void FUN_103eea18c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 103eea19c; end: 103eea1d3;  */

void FUN_103eea19c(undefined8 param_1)

{
  if (lRam000000011302d0e8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7d3eb0);
  return;
}



/* Entry: 103eea1d4; end: 103eea217;  */

undefined8 FUN_103eea1d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103ee9f1c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103eea218; end: 103eea22f;  */

undefined * FUN_103eea218(void)

{
  return PTR___sSSSHsWP_11034da90;
}



/* Entry: 103eea230; end: 103eea3c7;  */

long * FUN_103eea230(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar8 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar8;
    *(char *)(param_1 + 2) = (char)param_2[2];
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar6 = 0;
    FUN_103ee9f1c(0);
    _swift_bridgeObjectRetain(lVar8);
    puVar7 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,uVar6);
    if ((int)puVar7 == 2) {
      lVar8 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar8 + -8) + 0x10))(puVar1,puVar2,lVar8);
      lVar8 = 0x11302cfe0;
      func_0x0001000285a8(0x11302cfe0,&UNK_10dca8c10);
      uVar10 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x30));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x30)) = uVar10;
    }
    else if ((int)puVar7 == 1) {
      uVar10 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar10;
      _objc_retain();
    }
    else {
      uVar10 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar10;
      uVar3 = puVar2[3];
      puVar1[2] = puVar2[2];
      puVar1[3] = uVar3;
      uVar10 = puVar2[4];
      puVar1[4] = uVar10;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar3);
    }
    _objc_retain(uVar10);
    _swift_storeEnumTagMultiPayload(puVar1,uVar6,puVar7);
    iVar4 = *(int *)(param_3 + 0x20);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    iVar4 = *(int *)(param_3 + 0x28);
    uVar10 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) = uVar10;
    *(undefined8 *)((long)param_1 + (long)iVar4) = *(undefined8 *)((long)param_2 + (long)iVar4);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar6);
    _objc_retain(uVar10);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar9 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar8 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 103eea3c8; end: 103eea4b3;  */

void FUN_103eea3c8(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x18));
  uVar3 = 0;
  FUN_103ee9f1c(0);
  puVar4 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,uVar3);
  iVar2 = (int)puVar4;
  if (iVar2 == 2) {
    lVar5 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 8))(puVar1,lVar5);
    lVar5 = 0x11302cfe0;
    func_0x0001000285a8(0x11302cfe0,&UNK_10dca8c10);
    lVar5 = (long)*(int *)(lVar5 + 0x30);
  }
  else if (iVar2 == 1) {
    _objc_release(*puVar1);
    lVar5 = 8;
  }
  else {
    if (iVar2 != 0) goto LAB_103eea47c;
    _swift_bridgeObjectRelease(puVar1[1]);
    _swift_bridgeObjectRelease(puVar1[3]);
    lVar5 = 0x20;
  }
  _objc_release(*(undefined8 *)((long)puVar1 + lVar5));
LAB_103eea47c:
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24)));
  return;
}



/* Entry: 103eea4b4; end: 103eea7f7;  */

undefined8 * FUN_103eea4b4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar5 = 0;
  FUN_103ee9f1c(0);
  _swift_bridgeObjectRetain(uVar8);
  puVar6 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,uVar5);
  if ((int)puVar6 == 2) {
    lVar7 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar7 + -8) + 0x10))(puVar1,puVar2,lVar7);
    lVar7 = 0x11302cfe0;
    func_0x0001000285a8(0x11302cfe0,&UNK_10dca8c10);
    uVar8 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x30));
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x30)) = uVar8;
  }
  else if ((int)puVar6 == 1) {
    uVar8 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    _objc_retain();
  }
  else {
    uVar8 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    uVar3 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar3;
    uVar8 = puVar2[4];
    puVar1[4] = uVar8;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
  }
  _objc_retain(uVar8);
  _swift_storeEnumTagMultiPayload(puVar1,uVar5,puVar6);
  iVar4 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar8 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar8 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  iVar4 = *(int *)(param_3 + 0x28);
  uVar5 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) = uVar5;
  *(undefined8 *)((long)param_1 + (long)iVar4) = *(undefined8 *)((long)param_2 + (long)iVar4);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar8);
  _objc_retain(uVar5);
  return param_1;
}



/* Entry: 103eea7f8; end: 103eeaa47;  */

undefined8 * FUN_103eea7f8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  lVar1 = (long)param_1 + (long)*(int *)(param_3 + 0x18);
  lVar2 = (long)param_2 + (long)*(int *)(param_3 + 0x18);
  lVar6 = 0;
  FUN_103ee9f1c();
  lVar7 = lVar2;
  _swift_getEnumCaseMultiPayload(lVar2,lVar6);
  if ((int)lVar7 == 2) {
    lVar7 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar7 + -8) + 0x20))(lVar1,lVar2,lVar7);
    lVar7 = 0x11302cfe0;
    func_0x0001000285a8(0x11302cfe0,&UNK_10dca8c10);
    *(undefined8 *)(lVar1 + *(int *)(lVar7 + 0x30)) =
         *(undefined8 *)(lVar2 + *(int *)(lVar7 + 0x30));
    _swift_storeEnumTagMultiPayload(lVar1,lVar6,2);
  }
  else {
    _memcpy(lVar1,lVar2,*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x20);
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar8 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar8;
  puVar4 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar8 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar5[1] = puVar4[1];
  *puVar5 = uVar8;
  iVar3 = *(int *)(param_3 + 0x28);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  return param_1;
}



/* Entry: 103eeaa48; end: 103eeaa5f;  */

void FUN_103eeaa48(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103eeaa60; end: 103eeaaff;  */

void FUN_103eeaa60(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_58 = &UNK_10dca8d70;
  puStack_50 = &UNK_10dca8d88;
  lVar1 = 0x13f;
  FUN_103ee9f1c();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &UNK_10dca8d70;
    puStack_38 = &UNK_10dca8da0;
    puStack_30 = &UNK_10dca8db8;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    _swift_initStructMetadata(param_1,0x100,7,&puStack_58,param_1 + 0x10);
  }
  return;
}



/* Entry: 103eeab00; end: 103eeab13;  */

bool FUN_103eeab00(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103eeab14; end: 103eeabbf;  */

void FUN_103eeab14(void)

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


