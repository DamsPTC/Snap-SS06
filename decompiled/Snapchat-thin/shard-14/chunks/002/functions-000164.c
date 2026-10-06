/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b05f05c; end: 10b05f097; -[SCCChatCtaButton setViewModel:] */

void FUN_10b05f05c(void)

{
  func_0x00010b05f0f4();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b05f110();
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b05f098; end: 10b05f0d3; -[SCCChatCtaButton viewModel] */

void FUN_10b05f098(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b05f0d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05f0d4; end: 10b05f11b;  */

void FUN_10b05f0d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b05f11c; end: 10b05f123; -[SCDeepLinkHandlingServices deferredDeepLinkOnLoginHandling] */

undefined8 FUN_10b05f11c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b05f124; end: 10b05f15f; -[SCDeepLinkHandlingServices .cxx_destruct] */

void FUN_10b05f124(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05f160; end: 10b05f1c7; +[SCDeepLinkHandlingResult askedToDeferUntilUserAuthenticatedWithUrl:] */

void FUN_10b05f160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b6300;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b05f1c8; end: 10b05f233; +[SCDeepLinkHandlingResult failedWithError:] */

void FUN_10b05f1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b6300;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b05f234; end: 10b05f27b; +[SCDeepLinkHandlingResult handled] */

void FUN_10b05f234(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b6300;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b05f27c; end: 10b05f2c7; +[SCDeepLinkHandlingResult ignored] */

void FUN_10b05f27c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b6300;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b05f2c8; end: 10b05f2eb; -[SCDeepLinkHandlingResult copyWithZone:] */

undefined8 FUN_10b05f2c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b05f2ec; end: 10b05f363; -[SCDeepLinkHandlingResult hash] */

void FUN_10b05f2ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_112704f80;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05f364; end: 10b05f3a7; -[SCDeepLinkHandlingResult internalInit] */

void FUN_10b05f364(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704f80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05f3a8; end: 10b05f45f; -[SCDeepLinkHandlingResult isEqual:] */

long FUN_10b05f3a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b05f438:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b05f444;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_10b05f444;
        }
        goto LAB_10b05f438;
      }
    }
    lVar3 = 0;
  }
LAB_10b05f444:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b05f460; end: 10b05f54b; -[SCDeepLinkHandlingResult matchHandled:askedToDeferUntilUserAuthenticated:failed:ignored:] */

void FUN_10b05f460(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_10b05f51c;
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
LAB_10b05f500:
      (*pcVar3)(lVar2);
      goto LAB_10b05f51c;
    }
    if ((lVar2 != 1) || (param_4 == 0)) goto LAB_10b05f51c;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar2 = param_4;
  }
  else {
    if (lVar2 != 2) {
      if ((lVar2 != 3) || (param_6 == 0)) goto LAB_10b05f51c;
      pcVar3 = *(code **)(param_6 + 0x10);
      lVar2 = param_6;
      goto LAB_10b05f500;
    }
    if (param_5 == 0) goto LAB_10b05f51c;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10b05f51c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b05f54c; end: 10b05f57b; -[SCDeepLinkHandlingResult .cxx_destruct] */

void FUN_10b05f54c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b05f57c; end: 10b05f5ef; -[SCDeepLinkAuthProcessorPluginScope initWithPlugInRegistry:] */

undefined1 * FUN_10b05f57c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704f88;
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



/* Entry: 10b05f5f0; end: 10b05f5f7; -[SCDeepLinkAuthProcessorPluginScope plugInRegistry] */

undefined8 FUN_10b05f5f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b05f5f8; end: 10b05f603; -[SCDeepLinkAuthProcessorPluginScope .cxx_destruct] */

void FUN_10b05f5f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05f604; end: 10b05f677; -[SCDeepLinkUnauthProcessorPluginScope initWithPlugInRegistry:] */

undefined1 * FUN_10b05f604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704f90;
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



/* Entry: 10b05f678; end: 10b05f67f; -[SCDeepLinkUnauthProcessorPluginScope plugInRegistry] */

undefined8 FUN_10b05f678(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b05f680; end: 10b05f68b; -[SCDeepLinkUnauthProcessorPluginScope .cxx_destruct] */

void FUN_10b05f680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05f68c; end: 10b05f707;  */

undefined * FUN_10b05f68c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3e38 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f543f8,
                        &UNK_10e553a5c,&UNK_10e553b78,10,FUN_10b05f708,0);
    do {
      if (puRam00000001137f3e38 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f3e38;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3e38,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3e38 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3e38;
}



/* Entry: 10b05f708; end: 10b05f713;  */

bool FUN_10b05f708(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10b05f714; end: 10b05f7af; +[SCDynamicResolutionDeeplinkResolutionResult descriptor] */

undefined * FUN_10b05f714(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3e40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c640c0,
                        &PTR____CFConstantStringClassReference_110f54418,&PTR_DAT_113368780,
                        &PTR_DAT_113368978,0xb,0x60,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10e553ba0);
    puRam00000001137f3e40 = puVar1;
  }
  return puRam00000001137f3e40;
}



/* Entry: 10b05f7b0; end: 10b05f817; +[SCDynamicResolutionFriendsFeedResult descriptor] */

void FUN_10b05f7b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3e48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c64110,
                        &PTR____CFConstantStringClassReference_110f54438,&PTR_DAT_113368780,
                        &PTR_s_username_1133687f8,2,0x18,0x1c);
    puRam00000001137f3e48 = puVar1;
  }
  return;
}



/* Entry: 10b05f818; end: 10b05f87f; +[SCDynamicResolutionAstrologyProfileResult descriptor] */

void FUN_10b05f818(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3e50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c64160,
                        &PTR____CFConstantStringClassReference_110f54458,&PTR_DAT_113368780,0,0,4,
                        0x1c);
    puRam00000001137f3e50 = puVar1;
  }
  return;
}



/* Entry: 10b05f880; end: 10b05f8e7; +[SCDynamicResolutionAddFriendResult descriptor] */

void FUN_10b05f880(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3e58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c641b0,
                        &PTR____CFConstantStringClassReference_110f54478,&PTR_DAT_113368780,
                        &PTR_s_username_113368838,2,0x18,0x1c);
    puRam00000001137f3e58 = puVar1;
  }
  return;
}



/* Entry: 10b05f8e8; end: 10b05f94f; +[SCDynamicResolutionAddFriendsResult descriptor] */

void FUN_10b05f8e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3e60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c64200,
                        &PTR____CFConstantStringClassReference_110f54498,&PTR_DAT_113368780,0,0,4,
                        0x1c);
    puRam00000001137f3e60 = puVar1;
  }
  return;
}



/* Entry: 10b05f950; end: 10b05f9b7; +[SCDynamicResolutionLensCarouselResult descriptor] */

void FUN_10b05f950(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3e68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c64250,
                        &PTR____CFConstantStringClassReference_110f544b8,&PTR_DAT_113368780,
                        &PTR_s_snapcode_113368798,1,0x10,0x1c);
    puRam00000001137f3e68 = puVar1;
  }
  return;
}



/* Entry: 10b05f9b8; end: 10b05fa1f; +[SCDynamicResolutionLensCollectionResult descriptor] */

void FUN_10b05f9b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3e70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c642a0,
                        &PTR____CFConstantStringClassReference_110f544d8,&PTR_DAT_113368780,
                        &PTR_s_collectionId_1133687b8,1,0x10,0x1c);
    puRam00000001137f3e70 = puVar1;
  }
  return;
}



/* Entry: 10b05fa20; end: 10b05fa87; +[SCDynamicResolutionOurStoryResult descriptor] */

void FUN_10b05fa20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3e78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c642f0,
                        &PTR____CFConstantStringClassReference_110f544f8,&PTR_DAT_113368780,
                        &PTR_s_snapId_1133687d8,1,0x10,0x1c);
    puRam00000001137f3e78 = puVar1;
  }
  return;
}



/* Entry: 10b05fa88; end: 10b05faef; +[SCDynamicResolutionActivityFeedResult descriptor] */

void FUN_10b05fa88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3e80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c64340,
                        &PTR____CFConstantStringClassReference_110f54518,&PTR_DAT_113368780,
                        &PTR_s_profileId_113368878,3,0x20,0x1c);
    puRam00000001137f3e80 = puVar1;
  }
  return;
}



/* Entry: 10b05faf0; end: 10b05fb57; +[SCDynamicResolutionCreatorMilestoneResult descriptor] */

void FUN_10b05faf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f3e88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c64390,
                        &PTR____CFConstantStringClassReference_110f54538,&PTR_DAT_113368780,
                        &PTR_s_profileId_1133688d8,5,0x30,0x1c);
    puRam00000001137f3e88 = puVar1;
  }
  return;
}



/* Entry: 10b05fb58; end: 10b05fbc3; -[SCOperaPageViewModel initWithPage:] */

undefined1 * FUN_10b05fb58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704f98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1d7e80(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b05fbc4; end: 10b05fbcb; -[SCOperaPageViewModel page] */

undefined8 FUN_10b05fbc4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b05fbcc; end: 10b05fbfb; -[SCOperaPageViewModel setPage:] */

void FUN_10b05fbcc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b05fbfc; end: 10b05fc13; -[SCOperaPageViewModel previousGroup] */

void FUN_10b05fbfc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05fc14; end: 10b05fc1f; -[SCOperaPageViewModel setPreviousGroup:] */

void FUN_10b05fc14(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 10b05fc20; end: 10b05fc37; -[SCOperaPageViewModel nextGroup] */

void FUN_10b05fc20(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05fc38; end: 10b05fc43; -[SCOperaPageViewModel setNextGroup:] */

void FUN_10b05fc38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 10b05fc44; end: 10b05fc5b; -[SCOperaPageViewModel attachment] */

void FUN_10b05fc44(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05fc5c; end: 10b05fc67; -[SCOperaPageViewModel setAttachment:] */

void FUN_10b05fc5c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 10b05fc68; end: 10b05fc7f; -[SCOperaPageViewModel parent] */

void FUN_10b05fc68(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05fc80; end: 10b05fc8b; -[SCOperaPageViewModel setParent:] */

void FUN_10b05fc80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 10b05fc8c; end: 10b05fca3; -[SCOperaPageViewModel previous] */

void FUN_10b05fc8c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05fca4; end: 10b05fcaf; -[SCOperaPageViewModel setPrevious:] */

void FUN_10b05fca4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 10b05fcb0; end: 10b05fcc7; -[SCOperaPageViewModel next] */

void FUN_10b05fcb0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b05fcc8; end: 10b05fcd3; -[SCOperaPageViewModel setNext:] */

void FUN_10b05fcc8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 10b05fcd4; end: 10b05fcdb; -[SCOperaPageViewModel triggerGroups] */

undefined8 FUN_10b05fcd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10b05fcdc; end: 10b05fce3; -[SCOperaPageViewModel setTriggerGroups:] */

void FUN_10b05fcdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b05fce4; end: 10b05fceb; -[SCOperaPageViewModel pageID] */

undefined8 FUN_10b05fce4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10b05fcec; end: 10b05fcf3; -[SCOperaPageViewModel setPageID:] */

void FUN_10b05fcec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b05fcf4; end: 10b05fcfb; -[SCOperaPageViewModel lastValidPageID] */

undefined8 FUN_10b05fcf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b05fcfc; end: 10b05fd03; -[SCOperaPageViewModel setLastValidPageID:] */

void FUN_10b05fcfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b05fd04; end: 10b05fd0b; -[SCOperaPageViewModel pageClearReason] */

undefined8 FUN_10b05fd04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10b05fd0c; end: 10b05fd13; -[SCOperaPageViewModel setPageClearReason:] */

void FUN_10b05fd0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b05fd14; end: 10b05fd97; -[SCOperaPageViewModel .cxx_destruct] */

void FUN_10b05fd14(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05fd98; end: 10b05fd9f; -[SCComposerCoreUIServices actionSheetPresenterFactory] */

undefined8 FUN_10b05fd98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b05fda0; end: 10b05fda7; -[SCComposerCoreUIServices notificationPresenterFactory] */

undefined8 FUN_10b05fda0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b05fda8; end: 10b05fde3; -[SCComposerCoreUIServices .cxx_destruct] */

void FUN_10b05fda8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05fde4; end: 10b05fdeb; -[SCShakeToReportServices isUserGodMode] */

undefined1 FUN_10b05fde4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b05fdec; end: 10b05fe1b; -[SCShakeToReportServices .cxx_destruct] */

void FUN_10b05fdec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b05fe1c; end: 10b05fe27; -[SCCustomVolumeServices .cxx_destruct] */

void FUN_10b05fe1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05fe28; end: 10b05fe33; -[SCDeviceMotionServices .cxx_destruct] */

void FUN_10b05fe28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05fe34; end: 10b05fe3b; -[SCPlaybackAssetService assetCompositor] */

undefined8 FUN_10b05fe34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b05fe3c; end: 10b05fe6b; -[SCPlaybackAssetService .cxx_destruct] */

void FUN_10b05fe3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b05fe6c; end: 10b05ff17; -[SCPlaybackAssetError initWithAssetId:error:] */

undefined1 *
FUN_10b05fe6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704fc8;
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



/* Entry: 10b05ff18; end: 10b05ff3b; -[SCPlaybackAssetError copyWithZone:] */

undefined8 FUN_10b05ff18(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b05ff3c; end: 10b05ffaf; -[SCPlaybackAssetError hash] */

undefined8 * FUN_10b05ff3c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b060030:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b06003c;
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
          goto LAB_10b06003c;
        }
        goto LAB_10b060030;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b06003c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b05ffb0; end: 10b060057; -[SCPlaybackAssetError isEqual:] */

long FUN_10b05ffb0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b060030:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b06003c;
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
          goto LAB_10b06003c;
        }
        goto LAB_10b060030;
      }
    }
    lVar3 = 0;
  }
LAB_10b06003c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b060058; end: 10b06005f; -[SCPlaybackAssetError assetId] */

undefined8 FUN_10b060058(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b060060; end: 10b060067; -[SCPlaybackAssetError error] */

undefined8 FUN_10b060060(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b060068; end: 10b060097; -[SCPlaybackAssetError .cxx_destruct] */

void FUN_10b060068(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b060098; end: 10b060137; +[SCPlaybackAssetRequest loadAssetWithBoltUrl:contentKey:enableABR:] */

void FUN_10b060098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126df4f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
  puVar2[0x20] = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b060138; end: 10b0601a3; +[SCPlaybackAssetRequest loadCompositeAssetWithDescriptors:] */

void FUN_10b060138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126df4f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0601a4; end: 10b0601ef; +[SCPlaybackAssetRequest releaseAll] */

void FUN_10b0601a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126df4f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0601f0; end: 10b06025b; +[SCPlaybackAssetRequest releaseWithAssetToRelease:] */

void FUN_10b0601f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126df4f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b06025c; end: 10b06027f; -[SCPlaybackAssetRequest copyWithZone:] */

undefined8 FUN_10b06025c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b060280; end: 10b060313; -[SCPlaybackAssetRequest hash] */

void FUN_10b060280(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_112704fd0;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b060314; end: 10b060357; -[SCPlaybackAssetRequest internalInit] */

void FUN_10b060314(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704fd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b060358; end: 10b06044f; -[SCPlaybackAssetRequest isEqual:] */

long FUN_10b060358(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b060428:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b060434;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x20) == *(char *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_10b060434;
            }
            goto LAB_10b060428;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10b060434:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b060450; end: 10b060547; -[SCPlaybackAssetRequest matchLoadAsset:loadCompositeAsset:release:releaseAll:] */

void FUN_10b060450(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                   *(undefined1 *)(param_1 + 0x20));
      }
      goto LAB_10b060518;
    }
    if ((lVar2 != 1) || (param_4 == 0)) goto LAB_10b060518;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar2 = param_4;
  }
  else {
    if (lVar2 != 2) {
      if ((lVar2 == 3) && (param_6 != 0)) {
        (**(code **)(param_6 + 0x10))(param_6);
      }
      goto LAB_10b060518;
    }
    if (param_5 == 0) goto LAB_10b060518;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10b060518:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b060548; end: 10b06058f; -[SCPlaybackAssetRequest .cxx_destruct] */

void FUN_10b060548(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b060590; end: 10b0605d7; -[SCSubtitleConfig initWithLanguageCode:] */

void FUN_10b060590(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112704fd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10b0605d8; end: 10b0605fb; -[SCSubtitleConfig copyWithZone:] */

undefined8 FUN_10b0605d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0605fc; end: 10b06060b; -[SCSubtitleConfig hash] */

int FUN_10b0605fc(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = -iVar2;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}



/* Entry: 10b06060c; end: 10b060693; -[SCSubtitleConfig isEqual:] */

bool FUN_10b06060c(ulong param_1,undefined8 param_2,ulong param_3)

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
        bVar1 = *(int *)(param_1 + 8) == *(int *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b060694; end: 10b06069b; -[SCSubtitleConfig languageCode] */

undefined4 FUN_10b060694(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b06069c; end: 10b060747; -[SCPlaybackAssetRequestDescriptor initWithMediaIdentifier:optionalProperties:] */

undefined1 *
FUN_10b06069c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704fe0;
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



/* Entry: 10b060748; end: 10b06076b; -[SCPlaybackAssetRequestDescriptor copyWithZone:] */

undefined8 FUN_10b060748(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b06076c; end: 10b0607df; -[SCPlaybackAssetRequestDescriptor hash] */

undefined8 * FUN_10b06076c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10b060860:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b06086c;
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
          goto LAB_10b06086c;
        }
        goto LAB_10b060860;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10b06086c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10b0607e0; end: 10b060887; -[SCPlaybackAssetRequestDescriptor isEqual:] */

long FUN_10b0607e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10b060860:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b06086c;
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
          goto LAB_10b06086c;
        }
        goto LAB_10b060860;
      }
    }
    lVar3 = 0;
  }
LAB_10b06086c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b060888; end: 10b06088f; -[SCPlaybackAssetRequestDescriptor mediaIdentifier] */

undefined8 FUN_10b060888(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b060890; end: 10b060897; -[SCPlaybackAssetRequestDescriptor optionalProperties] */

undefined8 FUN_10b060890(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b060898; end: 10b0608c7; -[SCPlaybackAssetRequestDescriptor .cxx_destruct] */

void FUN_10b060898(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0608c8; end: 10b060953; -[SCPlaybackAssetRequestOptionalProperties initWithContentKey:mediaType:layerType:] */

undefined1 *
FUN_10b0608c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112704fe8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b060954; end: 10b060977; -[SCPlaybackAssetRequestOptionalProperties copyWithZone:] */

undefined8 FUN_10b060954(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b060978; end: 10b0609eb; -[SCPlaybackAssetRequestOptionalProperties hash] */

undefined8 * FUN_10b060978(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_40 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10b060a80;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(long *)((long)puVar2 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)((long)puVar2 + 0x18) != *(long *)(param_3 + 0x18))))) {
      puVar4 = (undefined1 *)0x0;
      goto LAB_10b060a80;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 8);
    if (puVar4 != *(undefined1 **)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b060a80;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_10b060a80:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 10b0609ec; end: 10b060a9b; -[SCPlaybackAssetRequestOptionalProperties isEqual:] */

long FUN_10b0609ec(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b060a80;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
        (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) {
      lVar3 = 0;
      goto LAB_10b060a80;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10b060a80;
    }
  }
  lVar3 = 1;
LAB_10b060a80:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b060a9c; end: 10b060aa3; -[SCPlaybackAssetRequestOptionalProperties contentKey] */

undefined8 FUN_10b060a9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


