/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100013de4; end: 100013dfb; -[FLFriend initWithCoder:] */

undefined1 * FUN_100013de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  FUN_100013d2c();
  puVar1 = PTR_s_initWithCoder__10002ef00;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 100013dfc; end: 100013e4b;  */

void FUN_100013dfc(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined **ppuStack_28;
  
  _swift_getObjCClassFromMetadata();
  ppuStack_28 = &PTR__OBJC_METACLASS___NSObject_100030988;
  _objc_msgSendSuper2(auStack_30,PTR_s_successWithResolvedObject__10002e8e8,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010001e7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_100028180)();
  return;
}



/* Entry: 100013e4c; end: 100013e8f; +[FLFriendResolutionResult successWithResolvedFLFriend:] */

void FUN_100013e4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_getObjCClassMetadata();
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_100013dfc();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(uVar1);
  return;
}



/* Entry: 100013e90; end: 100013f87;  */

undefined1 * FUN_100013e90(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 auStack_40 [8];
  undefined **ppuStack_38;
  
  puVar3 = auStack_40;
  if (param_1 >> 0x3e == 0) {
    _swift_bridgeObjectRetain(param_1);
    __ss28__ContiguousArrayStorageBaseC17staticElementTypeypXpvgTj();
    uVar1 = 0;
    FUN_100013f88(0);
    uVar4 = param_1;
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    uVar1 = 0;
    FUN_100013f88(0);
    _swift_bridgeObjectRetain(param_1);
    __ss17_bridgeCocoaArrayySayxGyXllF(uVar4,uVar1);
    _swift_bridgeObjectRelease(param_1);
  }
  _swift_getObjCClassFromMetadata();
  FUN_100013f88(0);
  uVar2 = uVar4;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar4,uVar1);
  _swift_bridgeObjectRelease(uVar4);
  ppuStack_38 = &PTR__OBJC_METACLASS___NSObject_100030988;
  _objc_msgSendSuper2(auStack_40,PTR_s_disambiguationWithObjectsToDisam_10002e8f0,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  return puVar3;
}



/* Entry: 100013f88; end: 100013fcb;  */

void FUN_100013f88(void)

{
  undefined *puVar1;
  
  if (puRam00000001000309b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___INObject_10002f2c8;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam00000001000309b0 = puVar1;
  return;
}



/* Entry: 100013fcc; end: 100014073; +[FLFriendResolutionResult disambiguationWithFLFriendsToDisambiguate:] */

void FUN_100013fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100013d2c();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  _swift_getObjCClassMetadata(param_1);
  uVar1 = param_3;
  FUN_100013e90(param_3);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(uVar1);
  return;
}



/* Entry: 100014074; end: 1000140c3; +[FLFriendResolutionResult confirmationRequiredWithFLFriendToConfirm:] */

void FUN_100014074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100014024(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(param_3);
  return;
}



/* Entry: 1000140c4; end: 10001410b; +[FLFriendResolutionResult successWithResolvedObject:] */

void FUN_1000140c4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "FriendLocation/FriendLocation.intentdefinition.swift.swift",0x3a,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001410c);
  (*pcVar1)();
}



/* Entry: 10001410c; end: 100014153; +[FLFriendResolutionResult disambiguationWithObjectsToDisambiguate:] */

void FUN_10001410c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "FriendLocation/FriendLocation.intentdefinition.swift.swift",0x3a,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100014154);
  (*pcVar1)();
}



/* Entry: 100014154; end: 10001419b; +[FLFriendResolutionResult confirmationRequiredWithObjectToConfirm:] */

void FUN_100014154(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "FriendLocation/FriendLocation.intentdefinition.swift.swift",0x3a,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001419c);
  (*pcVar1)();
}



/* Entry: 10001419c; end: 1000141a7;  */

void FUN_10001419c(void)

{
  FUN_1000141a8();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002eae0);
  return;
}



/* Entry: 1000141a8; end: 1000141e7;  */

void FUN_1000141a8(void)

{
  _objc_opt_self(&PTR_PTR_10002f8a0);
  return;
}



/* Entry: 1000141e8; end: 100014223; -[FriendLocationIntent init] */

void FUN_1000141e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x0001000141c8();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002eed8);
  return;
}



/* Entry: 100014224; end: 10001422f; -[FriendLocationIntent initWithCoder:] */

undefined1 * FUN_100014224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  (*(code *)0x1000141c8)();
  puVar1 = PTR_s_initWithCoder__10002ef00;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 100014230; end: 1000142af;  */

undefined1 * FUN_100014230(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  (*param_4)();
  puVar1 = PTR_s_initWithCoder__10002ef00;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 1000142b0; end: 1000142cf;  */

void FUN_1000142b0(void)

{
  (*(code *)0x1000141c8)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002eae0);
  return;
}



/* Entry: 1000142d0; end: 1000143a7;  */

void FUN_1000142d0(void)

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



/* Entry: 1000143a8; end: 1000143b3;  */

void FUN_1000143a8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1000143b4; end: 100014437; -[FriendLocationIntentResponse code] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1000143b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1000309b8;
  _swift_beginAccess(param_1 + _DAT_1000309b8,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 100014438; end: 100014487; -[FriendLocationIntentResponse setCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014438(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1000309b8;
  _swift_beginAccess(param_1 + _DAT_1000309b8,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 100014488; end: 100014517; -[FriendLocationIntentResponse initWithCode:userActivity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100014488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_4);
  func_0x00010001f360();
  lVar1 = _DAT_1000309b8;
  _swift_beginAccess(param_1 + _DAT_1000309b8,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_1);
  func_0x00010001fc60();
  _objc_release(param_1);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 100014518; end: 10001455f; -[FriendLocationIntentResponse init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014518(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_1000309b8) = 0;
  lVar1 = param_1;
  FUN_100014638();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_10002eed8);
  return;
}



/* Entry: 100014560; end: 1000145eb; -[FriendLocationIntentResponse initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100014560(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  *(undefined8 *)(param_1 + _DAT_1000309b8) = 0;
  lVar2 = param_1;
  FUN_100014638();
  puVar1 = PTR_s_initWithCoder__10002ef00;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (plVar3 != (long *)0x0) {
    _objc_release(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 1000145ec; end: 1000145f7;  */

void FUN_1000145ec(void)

{
  FUN_100014638();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002eae0);
  return;
}



/* Entry: 1000145f8; end: 100014627;  */

void FUN_1000145f8(code *param_1)

{
  (*param_1)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002eae0);
  return;
}



/* Entry: 100014628; end: 100014637;  */

undefined1  [16] FUN_100014628(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 7) {
    uVar1 = param_1;
  }
  auVar2[8] = 6 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 100014638; end: 100014657;  */

void FUN_100014638(void)

{
  _objc_opt_self(&PTR_PTR_10002fa18);
  return;
}



/* Entry: 100014658; end: 10001465b;  */

void FUN_100014658(void)

{
  undefined *puVar1;
  
  if (puRam00000001000309c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100021b10;
  _swift_getWitnessTable(&UNK_100021b10,&UNK_100028928);
  puRam00000001000309c0 = puVar1;
  return;
}



/* Entry: 10001465c; end: 10001469b;  */

void FUN_10001465c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000309c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100021b10;
  _swift_getWitnessTable(&UNK_100021b10,&UNK_100028928);
  puRam00000001000309c0 = puVar1;
  return;
}



/* Entry: 10001469c; end: 1000146ab;  */

undefined1  [16] FUN_10001469c(void)

{
  return ZEXT816(0x100028928);
}



/* Entry: 1000146ac; end: 1000146b3; +[PMFFriend supportsSecureCoding] */

undefined8 FUN_1000146ac(void)

{
  return 1;
}



/* Entry: 1000146b4; end: 10001479b;  */

undefined1 *
FUN_1000146b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0xffffffffffffffa0;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(param_2);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  _swift_bridgeObjectRelease();
  if (param_6 == 0) {
    param_5 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    _swift_bridgeObjectRelease();
  }
  FUN_10001479c();
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_initWithIdentifier_displayString_10002ef20,
                      param_1,param_3,param_5);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 10001479c; end: 1000147bb;  */

void FUN_10001479c(void)

{
  _objc_opt_self(&PTR_PTR_10002fae8);
  return;
}



/* Entry: 1000147bc; end: 100014853; -[PMFFriend initWithIdentifier:displayString:pronunciationHint:] */

void FUN_1000147bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    uVar2 = param_2;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  FUN_1000146b4(param_3,uVar2,param_4,param_2,param_5,uVar1);
  return;
}



/* Entry: 100014854; end: 10001486b; -[PMFFriend initWithCoder:] */

undefined1 * FUN_100014854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  FUN_10001479c();
  puVar1 = PTR_s_initWithCoder__10002ef00;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 10001486c; end: 1000148bb;  */

void FUN_10001486c(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined **ppuStack_28;
  
  _swift_getObjCClassFromMetadata();
  ppuStack_28 = &PTR__OBJC_METACLASS___NSObject_100030a40;
  _objc_msgSendSuper2(auStack_30,PTR_s_successWithResolvedObject__10002e8e8,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010001e7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_100028180)();
  return;
}



/* Entry: 1000148bc; end: 1000148ff; +[PMFFriendResolutionResult successWithResolvedPMFFriend:] */

void FUN_1000148bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_getObjCClassMetadata();
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_10001486c();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(uVar1);
  return;
}



/* Entry: 100014900; end: 1000149f7;  */

undefined1 * FUN_100014900(ulong param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 auStack_40 [8];
  undefined **ppuStack_38;
  
  puVar3 = auStack_40;
  if (param_1 >> 0x3e == 0) {
    _swift_bridgeObjectRetain(param_1);
    __ss28__ContiguousArrayStorageBaseC17staticElementTypeypXpvgTj();
    uVar1 = 0;
    FUN_100013f88(0);
    uVar4 = param_1;
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    uVar1 = 0;
    FUN_100013f88(0);
    _swift_bridgeObjectRetain(param_1);
    __ss17_bridgeCocoaArrayySayxGyXllF(uVar4,uVar1);
    _swift_bridgeObjectRelease(param_1);
  }
  _swift_getObjCClassFromMetadata();
  FUN_100013f88(0);
  uVar2 = uVar4;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar4,uVar1);
  _swift_bridgeObjectRelease(uVar4);
  ppuStack_38 = &PTR__OBJC_METACLASS___NSObject_100030a40;
  _objc_msgSendSuper2(auStack_40,PTR_s_disambiguationWithObjectsToDisam_10002e8f0,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  return puVar3;
}



/* Entry: 1000149f8; end: 100014a9f; +[PMFFriendResolutionResult disambiguationWithPMFFriendsToDisambiguate:] */

void FUN_1000149f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10001479c();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  _swift_getObjCClassMetadata(param_1);
  uVar1 = param_3;
  FUN_100014900(param_3);
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(uVar1);
  return;
}



/* Entry: 100014aa0; end: 100014aef; +[PMFFriendResolutionResult confirmationRequiredWithPMFFriendToConfirm:] */

void FUN_100014aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_getObjCClassMetadata();
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000100014a50(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(param_3);
  return;
}



/* Entry: 100014af0; end: 100014b37; +[PMFFriendResolutionResult successWithResolvedObject:] */

void FUN_100014af0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SelectFriend/SelectFriend.intentdefinition.swift.swift",0x36,2,0x32,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100014b38);
  (*pcVar1)();
}



/* Entry: 100014b38; end: 100014b7f; +[PMFFriendResolutionResult disambiguationWithObjectsToDisambiguate:] */

void FUN_100014b38(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SelectFriend/SelectFriend.intentdefinition.swift.swift",0x36,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100014b80);
  (*pcVar1)();
}



/* Entry: 100014b80; end: 100014bc7; +[PMFFriendResolutionResult confirmationRequiredWithObjectToConfirm:] */

void FUN_100014b80(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SelectFriend/SelectFriend.intentdefinition.swift.swift",0x36,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100014bc8);
  (*pcVar1)();
}



/* Entry: 100014bc8; end: 100014bd3;  */

void FUN_100014bc8(void)

{
  FUN_100014bd4();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002eae0);
  return;
}



/* Entry: 100014bd4; end: 100014bf3;  */

void FUN_100014bd4(void)

{
  _objc_opt_self(&PTR_PTR_10002fb98);
  return;
}



/* Entry: 100014bf4; end: 100014c0f;  */

void FUN_100014bf4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 100014c10; end: 100014c3f;  */

void FUN_100014c10(void)

{
  _swift_getObjCClassFromMetadata();
  func_0x00010001fd20();
                    /* WARNING: Could not recover jumptable at 0x00010001e7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_100028180)();
  return;
}



/* Entry: 100014c40; end: 100014c9b; +[OpenToResolutionResult successWithResolvedOpenTo:] */

void FUN_100014c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getObjCClassMetadata();
  FUN_100014c10(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)();
  return;
}



/* Entry: 100014c9c; end: 100014cc7; +[OpenToResolutionResult confirmationRequiredWithOpenToToConfirm:] */

void FUN_100014c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getObjCClassMetadata();
  func_0x000100014c6c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)();
  return;
}



/* Entry: 100014cc8; end: 100014cd3;  */

void FUN_100014cc8(void)

{
  FUN_100014cd4();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002eae0);
  return;
}



/* Entry: 100014cd4; end: 100014d13;  */

void FUN_100014cd4(void)

{
  _objc_opt_self(&PTR_PTR_10002fc60);
  return;
}



/* Entry: 100014d14; end: 100014d4f; -[SelectFriendIntent init] */

void FUN_100014d14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000100014cf4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002eed8);
  return;
}



/* Entry: 100014d50; end: 100014d5b; -[SelectFriendIntent initWithCoder:] */

undefined1 * FUN_100014d50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  (*(code *)0x100014cf4)();
  puVar1 = PTR_s_initWithCoder__10002ef00;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 100014d5c; end: 100014ddb;  */

undefined1 * FUN_100014d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  (*param_4)();
  puVar1 = PTR_s_initWithCoder__10002ef00;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 100014ddc; end: 100014dff;  */

void FUN_100014ddc(void)

{
  (*(code *)0x100014cf4)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002eae0);
  return;
}



/* Entry: 100014e00; end: 100014e6b;  */

void FUN_100014e00(void)

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



/* Entry: 100014e6c; end: 100014e6f;  */

void FUN_100014e6c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100014e70; end: 100014edb;  */

void FUN_100014e70(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 100014edc; end: 100014ee7;  */

void FUN_100014edc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 100014ee8; end: 100014f6b; -[SelectFriendIntentResponse code] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100014ee8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_100030a68;
  _swift_beginAccess(param_1 + _DAT_100030a68,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 100014f6c; end: 100014fbb; -[SelectFriendIntentResponse setCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014f6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_100030a68;
  _swift_beginAccess(param_1 + _DAT_100030a68,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 100014fbc; end: 10001504b; -[SelectFriendIntentResponse initWithCode:userActivity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100014fbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_4);
  func_0x00010001f360();
  lVar1 = _DAT_100030a68;
  _swift_beginAccess(param_1 + _DAT_100030a68,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_1);
  func_0x00010001fc60();
  _objc_release(param_1);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 10001504c; end: 100015093; -[SelectFriendIntentResponse init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001504c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_100030a68) = 0;
  lVar1 = param_1;
  FUN_10001516c();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_10002eed8);
  return;
}



/* Entry: 100015094; end: 10001511f; -[SelectFriendIntentResponse initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100015094(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  *(undefined8 *)(param_1 + _DAT_100030a68) = 0;
  lVar2 = param_1;
  FUN_10001516c();
  puVar1 = PTR_s_initWithCoder__10002ef00;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (plVar3 != (long *)0x0) {
    _objc_release(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 100015120; end: 10001512b;  */

void FUN_100015120(void)

{
  FUN_10001516c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002eae0);
  return;
}



/* Entry: 10001512c; end: 10001515b;  */

void FUN_10001512c(code *param_1)

{
  (*param_1)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002eae0);
  return;
}



/* Entry: 10001515c; end: 10001516b;  */

undefined1  [16] FUN_10001515c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 7) {
    uVar1 = param_1;
  }
  auVar2[8] = 6 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10001516c; end: 10001518b;  */

void FUN_10001516c(void)

{
  _objc_opt_self(&PTR_PTR_10002fdd0);
  return;
}



/* Entry: 10001518c; end: 10001518f;  */

void FUN_10001518c(void)

{
  undefined *puVar1;
  
  if (puRam0000000100030a70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100021c60;
  _swift_getWitnessTable(&UNK_100021c60,&UNK_1000289f0);
  puRam0000000100030a70 = puVar1;
  return;
}



/* Entry: 100015190; end: 1000151cf;  */

void FUN_100015190(void)

{
  undefined *puVar1;
  
  if (puRam0000000100030a70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100021c60;
  _swift_getWitnessTable(&UNK_100021c60,&UNK_1000289f0);
  puRam0000000100030a70 = puVar1;
  return;
}



/* Entry: 1000151d0; end: 1000151d3;  */

void FUN_1000151d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000100030a78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100021d00;
  _swift_getWitnessTable(&UNK_100021d00,&UNK_100028a10);
  puRam0000000100030a78 = puVar1;
  return;
}



/* Entry: 1000151d4; end: 100015213;  */

void FUN_1000151d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000100030a78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_100021d00;
  _swift_getWitnessTable(&UNK_100021d00,&UNK_100028a10);
  puRam0000000100030a78 = puVar1;
  return;
}



/* Entry: 100015214; end: 10001525b;  */

undefined1  [16] FUN_100015214(void)

{
  return ZEXT816(0x1000289f0);
}



/* Entry: 10001525c; end: 10001527f;  */

void FUN_10001525c(undefined8 param_1)

{
  FUN_10001568c();
  _objc_allocWithZone();
  func_0x00010001f360();
  uRam0000000100031598 = param_1;
  return;
}



/* Entry: 100015280; end: 1000152bf; +[SCAppEnvironmentBindings shared] */

void FUN_100015280(void)

{
  if (lRam00000001000314c0 != -1) {
    _swift_once(0x1000314c0,FUN_10001525c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010001e7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_100028178)(uRam0000000100031598);
  return;
}



/* Entry: 1000152c0; end: 10001547b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000152c0(undefined8 param_1)

{
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  lVar4 = 0x100030b20;
  func_0x00010000c478(0x100030b20,&UNK_100021e70);
  (*(code *)PTR____chkstk_darwin_1000281f0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000281f0)();
  lVar4 = (long)puVar3 - extraout_x12;
  pcVar5 = *(code **)(unaff_x20 + _DAT_100030b28);
  if (pcVar5 == (code *)0x0) {
    lVar6 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar4,1,1,lVar6);
  }
  else {
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_100030b28))[1];
    _swift_retain(uVar2);
    (*pcVar5)(auStack_68);
    FUN_10001547c(pcVar5,uVar2);
    FUN_10000f8a8(auStack_68,uStack_50);
    (**(code **)(lStack_48 + 8))(lVar4,uStack_50,lStack_48);
    FUN_10000fa38(auStack_68);
  }
  FUN_10001548c(lVar4,puVar3);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar4 + -8);
  pcVar5 = *(code **)(lVar6 + 0x30);
  puVar1 = puVar3;
  (*pcVar5)(puVar3,1,lVar4);
  if ((int)puVar1 == 1) {
    (**(code **)(lVar6 + 0x38))(param_1,1,1,lVar4);
    puVar1 = puVar3;
    (*pcVar5)(puVar3,1,lVar4);
    if ((int)puVar1 != 1) {
      func_0x0001000154dc(puVar3);
    }
  }
  else {
    (**(code **)(lVar6 + 0x20))(param_1,puVar3,lVar4);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar4);
  }
  return;
}



/* Entry: 10001547c; end: 10001548b;  */

void FUN_10001547c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010001e9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_100028480)(param_2);
    return;
  }
  return;
}



/* Entry: 10001548c; end: 100015523;  */

undefined8 FUN_10001548c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x100030b20;
  func_0x00010000c478(0x100030b20,&UNK_100021e70);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100015524; end: 1000155f7; -[SCAppEnvironmentBindings appStoreReceiptURL] */

void FUN_100015524(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x100030b20;
  func_0x00010000c478(0x100030b20,&UNK_100021e70);
  (*(code *)PTR____chkstk_darwin_1000281f0)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  _objc_retain(param_1);
  FUN_1000152c0(puVar4);
  _objc_release(param_1);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(uVar3);
  return;
}



/* Entry: 1000155f8; end: 100015643; -[SCAppEnvironmentBindings init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000155f8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = (undefined8 *)(param_1 + _DAT_100030b28);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_10002eed8);
  return;
}



/* Entry: 100015644; end: 100015677;  */

void FUN_100015644(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002eae0);
  return;
}



/* Entry: 100015678; end: 10001568b; -[SCAppEnvironmentBindings .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100015678(long param_1)

{
  if (*(long *)(param_1 + _DAT_100030b28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010001e9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_100028480)(((long *)(param_1 + _DAT_100030b28))[1]);
    return;
  }
  return;
}



/* Entry: 10001568c; end: 1000156ab;  */

void FUN_10001568c(void)

{
  _objc_opt_self(&PTR_PTR_10002fea0);
  return;
}



/* Entry: 1000156ac; end: 1000156c3;  */

undefined1  [16] FUN_1000156ac(void)

{
  return ZEXT816(0x100028ac0);
}



/* Entry: 1000156c4; end: 10001584b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1000156c4(undefined4 param_1,undefined1 *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_40;
  uint uStack_3c;
  long lStack_38;
  
  puVar5 = &uStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_100028200;
  iVar4 = (int)param_2;
  if (lRam00000001000314e0 != -1) {
    func_0x00010001e37c();
  }
  if (lRam00000001000314e8 == 0) {
    if (lRam00000001000314d8 != -1) goto LAB_10001581c;
    bVar2 = SBORROW4(iVar4,iRam00000001000314c8);
    iVar1 = iVar4 - iRam00000001000314c8;
    bVar3 = iVar4 == iRam00000001000314c8;
    if (iVar4 < iRam00000001000314c8) goto LAB_1000157bc;
    goto LAB_100015788;
  }
  uStack_3c = iVar4 << 0x10 | ((uint)param_3 & 0xff) << 8 | param_4 & 0xff;
  uStack_40 = param_1;
  __availability_version_check(1);
  param_2 = (undefined1 *)puVar5;
  if (*(long *)PTR____stack_chk_guard_100028200 == lStack_38) {
    return;
  }
LAB_100015818:
  do {
    while( true ) {
      ___stack_chk_fail();
LAB_10001581c:
      func_0x00010001e394();
      iVar4 = (int)param_2;
      bVar2 = SBORROW4(iVar4,iRam00000001000314c8);
      iVar1 = iVar4 - iRam00000001000314c8;
      bVar3 = iVar4 == iRam00000001000314c8;
      if (iRam00000001000314c8 <= iVar4) break;
LAB_1000157bc:
      if (*(long *)PTR____stack_chk_guard_100028200 == lStack_38) {
        return;
      }
    }
LAB_100015788:
    if (bVar3 || iVar1 < 0 != bVar2) {
      if ((int)param_3 < iRam00000001000314cc) goto LAB_1000157bc;
      if ((int)param_3 <= iRam00000001000314cc) {
        if (*(long *)PTR____stack_chk_guard_100028200 == lStack_38) {
          return;
        }
        goto LAB_100015818;
      }
    }
    if (*(long *)PTR____stack_chk_guard_100028200 == lStack_38) {
      return;
    }
  } while( true );
}



/* Entry: 10001584c; end: 100015853;  */

void FUN_10001584c(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_88 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100028200;
  if (puRam00000001000314e8 == (undefined *)0x0) {
    if (PTR___availability_version_check_100028208 != (undefined *)0x0) {
      puRam00000001000314e8 = PTR___availability_version_check_100028208;
    }
    if (puRam00000001000314e8 == (undefined *)0x0) {
      puVar1 = (undefined8 *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
      if (puVar1 != (undefined8 *)0x0) {
        uVar20 = *puVar1;
        pcVar2 = (code *)0xfffffffffffffffe;
        _dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
        if (pcVar2 != (code *)0x0) {
          pcVar3 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
          pcVar4 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
          if (pcVar3 != (code *)0x0 || pcVar4 != (code *)0x0) {
            pcVar5 = (code *)0xfffffffffffffffe;
            _dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
            if (pcVar5 != (code *)0x0) {
              pcVar6 = (code *)0xfffffffffffffffe;
              _dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
              if (pcVar6 != (code *)0x0) {
                pcVar7 = (code *)0xfffffffffffffffe;
                _dlsym(0xfffffffffffffffe,"CFGetTypeID");
                if (pcVar7 != (code *)0x0) {
                  pcVar8 = (code *)0xfffffffffffffffe;
                  _dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
                  if (pcVar8 != (code *)0x0) {
                    pcVar9 = (code *)0xfffffffffffffffe;
                    _dlsym(0xfffffffffffffffe,"CFStringGetCString");
                    if (pcVar9 != (code *)0x0) {
                      pcVar10 = (code *)0xfffffffffffffffe;
                      _dlsym(0xfffffffffffffffe,"CFRelease");
                      if (pcVar10 != (code *)0x0) {
                        pcVar11 = "/System/Library/CoreServices/SystemVersion.plist";
                        _fopen("/System/Library/CoreServices/SystemVersion.plist","r");
                        if (pcVar11 != (char *)0x0) {
                          _fseek();
                          pcVar12 = pcVar11;
                          _ftell();
                          if (-1 < (long)pcVar12) {
                            _rewind(pcVar11);
                            pcVar13 = pcVar12;
                            _malloc();
                            if ((pcVar13 != (char *)0x0) &&
                               (pcVar14 = pcVar13, _fread(), pcVar14 == pcVar12)) {
                              lVar15 = 0;
                              (*pcVar2)(0,pcVar13,pcVar12,uVar20);
                              if (lVar15 != 0) {
                                lVar16 = 0;
                                if (pcVar3 == (code *)0x0) {
                                  (*pcVar4)(0,lVar15,0,0);
                                }
                                else {
                                  (*pcVar3)();
                                }
                                if (lVar16 != 0) {
                                  lVar17 = 0;
                                  (*pcVar5)(0,"ProductVersion",0x600,uVar20);
                                  if (lVar17 != 0) {
                                    lVar18 = lVar16;
                                    (*pcVar6)(lVar16,lVar17);
                                    (*pcVar10)(lVar17);
                                    if (lVar18 != 0) {
                                      lVar17 = lVar18;
                                      (*pcVar7)();
                                      lVar19 = lVar17;
                                      (*pcVar8)();
                                      if ((lVar17 == lVar19) &&
                                         ((*pcVar9)(lVar18,auStack_88,0x20,0x8000100),
                                         (int)lVar18 != 0)) {
                                        _sscanf(auStack_88,"%d.%d.%d");
                                      }
                                    }
                                  }
                                  (*pcVar10)(lVar16);
                                }
                                (*pcVar10)(lVar15);
                              }
                            }
                          }
                          _free();
                          _fclose(pcVar11);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100028200 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010001e604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_100028230)(0x1000314d8,0,0x1000156bc);
  return;
}



/* Entry: 100015854; end: 100015b6b;  */

void FUN_100015854(ulong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_88 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100028200;
  if (((param_1 & 1) != 0) || (puRam00000001000314e8 == (undefined *)0x0)) {
    if (PTR___availability_version_check_100028208 != (undefined *)0x0) {
      puRam00000001000314e8 = PTR___availability_version_check_100028208;
    }
    if (((param_1 & 1) != 0) || (puRam00000001000314e8 == (undefined *)0x0)) {
      puVar1 = (undefined8 *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
      if (puVar1 != (undefined8 *)0x0) {
        uVar20 = *puVar1;
        pcVar2 = (code *)0xfffffffffffffffe;
        _dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
        if (pcVar2 != (code *)0x0) {
          pcVar3 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
          pcVar4 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
          if (pcVar3 != (code *)0x0 || pcVar4 != (code *)0x0) {
            pcVar5 = (code *)0xfffffffffffffffe;
            _dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
            if (pcVar5 != (code *)0x0) {
              pcVar6 = (code *)0xfffffffffffffffe;
              _dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
              if (pcVar6 != (code *)0x0) {
                pcVar7 = (code *)0xfffffffffffffffe;
                _dlsym(0xfffffffffffffffe,"CFGetTypeID");
                if (pcVar7 != (code *)0x0) {
                  pcVar8 = (code *)0xfffffffffffffffe;
                  _dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
                  if (pcVar8 != (code *)0x0) {
                    pcVar9 = (code *)0xfffffffffffffffe;
                    _dlsym(0xfffffffffffffffe,"CFStringGetCString");
                    if (pcVar9 != (code *)0x0) {
                      pcVar10 = (code *)0xfffffffffffffffe;
                      _dlsym(0xfffffffffffffffe,"CFRelease");
                      if (pcVar10 != (code *)0x0) {
                        pcVar11 = "/System/Library/CoreServices/SystemVersion.plist";
                        _fopen("/System/Library/CoreServices/SystemVersion.plist","r");
                        if (pcVar11 != (char *)0x0) {
                          _fseek();
                          pcVar12 = pcVar11;
                          _ftell();
                          if (-1 < (long)pcVar12) {
                            _rewind(pcVar11);
                            pcVar13 = pcVar12;
                            _malloc();
                            if ((pcVar13 != (char *)0x0) &&
                               (pcVar14 = pcVar13, _fread(), pcVar14 == pcVar12)) {
                              lVar15 = 0;
                              (*pcVar2)(0,pcVar13,pcVar12,uVar20);
                              if (lVar15 != 0) {
                                lVar16 = 0;
                                if (pcVar3 == (code *)0x0) {
                                  (*pcVar4)(0,lVar15,0,0);
                                }
                                else {
                                  (*pcVar3)();
                                }
                                if (lVar16 != 0) {
                                  lVar17 = 0;
                                  (*pcVar5)(0,"ProductVersion",0x600,uVar20);
                                  if (lVar17 != 0) {
                                    lVar18 = lVar16;
                                    (*pcVar6)(lVar16,lVar17);
                                    (*pcVar10)(lVar17);
                                    if (lVar18 != 0) {
                                      lVar17 = lVar18;
                                      (*pcVar7)();
                                      lVar19 = lVar17;
                                      (*pcVar8)();
                                      if ((lVar17 == lVar19) &&
                                         ((*pcVar9)(lVar18,auStack_88,0x20,0x8000100),
                                         (int)lVar18 != 0)) {
                                        _sscanf(auStack_88,"%d.%d.%d");
                                      }
                                    }
                                  }
                                  (*pcVar10)(lVar16);
                                }
                                (*pcVar10)(lVar15);
                              }
                            }
                          }
                          _free();
                          _fclose(pcVar11);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100028200 != lStack_68) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010001e604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_once_f_100028230)(0x1000314d8,0,0x1000156bc);
    return;
  }
  return;
}



/* Entry: 100015b6c; end: 100015b83;  */

void FUN_100015b6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_100028230)(0x1000314d8,0,0x1000156bc);
  return;
}



/* Entry: 100015b84; end: 100015bef; +[SCExtensionConversation groupWithGroup:] */

void FUN_100015b84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_10002f2d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010001f5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar2);
  return;
}



/* Entry: 100015bf0; end: 100015c53; +[SCExtensionConversation snapchatterWithSnapchatter:] */

void FUN_100015bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_10002f2d0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010001f5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar2);
  return;
}



/* Entry: 100015c54; end: 100015df3; -[SCExtensionConversation initWithCoder:] */

undefined8 * FUN_100015c54(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_100028200;
  _objc_retain(param_3);
  puStack_60 = PTR_PTR_10002f3d8;
  puVar1 = &uStack_68;
  uStack_68 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x21;
    func_0x00010001f620();
    if ((uVar2 & 1) == 0) {
      uVar2 = unaff_x21;
      func_0x00010001f620();
      if ((uVar2 & 1) == 0) goto LAB_100015d80;
      uVar5 = 1;
      lVar6 = 0x18;
    }
    else {
      uVar5 = 0;
      lVar6 = 0x10;
    }
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(ulong *)((long)puVar1 + lVar6) = uVar2;
    _objc_release(uVar4);
    puVar1[1] = uVar5;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_100028200 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_100015d80:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_10002f2d8;
  ppuStack_58 = &PTR____CFConstantStringClassReference_100029038;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_10002f2e0;
  uStack_50 = unaff_x21;
  func_0x00010001f060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001f160();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar3);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 100015df4; end: 100015e17; -[SCExtensionConversation copyWithZone:] */

undefined8 FUN_100015df4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 100015e18; end: 100015ea7; -[SCExtensionConversation encodeWithCoder:] */

void FUN_100015e18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_100028f78;
    lVar2 = 0x10;
    ppuVar1 = &PTR____CFConstantStringClassReference_100028f98;
  }
  else {
    if (*(long *)(param_1 + 8) != 1) goto LAB_100015e94;
    ppuVar3 = &PTR____CFConstantStringClassReference_100028fb8;
    lVar2 = 0x18;
    ppuVar1 = &PTR____CFConstantStringClassReference_100028fd8;
  }
  func_0x00010001fa80(param_3,param_2,*(undefined8 *)(param_1 + lVar2),ppuVar1);
  func_0x00010001fa80(param_3,param_2,ppuVar3,&PTR____CFConstantStringClassReference_100028f58);
LAB_100015e94:
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_3);
  return;
}



/* Entry: 100015ea8; end: 100015f1f; -[SCExtensionConversation hash] */

void FUN_100015ea8(long param_1)

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
  lStack_28 = *(long *)PTR____stack_chk_guard_100028200;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010001f340();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010001f340();
  uStack_30 = uVar2;
  func_0x00010001d4a4(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_100028200 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_10002f3d8;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_10002eed8);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)();
  return;
}



/* Entry: 100015f20; end: 100015f63; -[SCExtensionConversation internalInit] */

void FUN_100015f20(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_10002f3d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002eed8);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)();
  return;
}



/* Entry: 100015f64; end: 10001601b; -[SCExtensionConversation isEqual:] */

long FUN_100015f64(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_100015ff4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100016000;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010001f5e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010001f5e0();
          goto LAB_100016000;
        }
        goto LAB_100015ff4;
      }
    }
    lVar3 = 0;
  }
LAB_100016000:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10001601c; end: 10001609f; -[SCExtensionConversation matchSnapchatter:group:] */

void FUN_10001601c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_100016084;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_100016084;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_100016084:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_3);
  return;
}



/* Entry: 1000160a0; end: 1000160cf; -[SCExtensionConversation .cxx_destruct] */

void FUN_1000160a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010001e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000281a0)(param_1 + 0x10,0);
  return;
}



/* Entry: 1000160d0; end: 1000161f7; -[SCExtensionGroup initWithCoder:] */

undefined1 * FUN_1000160d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_10002f3e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010001efe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000161f8; end: 10001632f; -[SCExtensionGroup initWithGroupId:groupName:groupParticipants:groupParticipantsUserNames:bitmojiInfos:] */

undefined1 *
FUN_1000161f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_10002f3e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_10002eed8);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010001eea0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


