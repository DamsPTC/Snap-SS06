/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1042da868; end: 1042da883; -[SCLensPlayableEventType description] */

void FUN_1042da868(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042da884; end: 1042da8cb; -[SCLensPlayableEventType init] */

void FUN_1042da884(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SponsoredLensTrackerServices/PlayableEventWrapper.swift",0x37,2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042da8cc);
  (*pcVar1)();
}



/* Entry: 1042da8cc; end: 1042da9e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042da8cc(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long unaff_x20;
  
  uVar2 = 0xd000000000000017;
  bVar1 = *(byte *)(unaff_x20 + _DAT_11306c190);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      uVar2 = 0xd00000000000001a;
      pcVar4 = "SUBTYPE_PLAYABLE_LOADED";
    }
    else if (bVar1 == 1) {
      pcVar4 = "SUBTYPE_PLAYABLE_CLOSED";
    }
    else {
      pcVar4 = "SUBTYPE_PLAYABLE_CONTENT_TAPPED";
    }
  }
  else if (bVar1 == 3) {
    pcVar4 = "SUBTYPE_LOADING_ERROR";
    uVar2 = 0xd00000000000001f;
  }
  else if (bVar1 == 4) {
    pcVar4 = "SUBTYPE_RETRY_TAP";
    uVar2 = 0xd000000000000015;
  }
  else {
    pcVar4 = "yableEventWrapper.swift";
    uVar2 = 0xd000000000000011;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,(ulong)pcVar4 | 0x8000000000000000);
  uVar3 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1042da9e4; end: 1042daa33; -[SCLensPlayableEventType encodeWithCoder:] */

void FUN_1042da9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042da8cc(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042daa34; end: 1042daa63;  */

void FUN_1042daa34(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042daa64(param_1);
  return;
}



/* Entry: 1042daa64; end: 1042dae5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1042daa64(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar4 = auStack_f0;
  _swift_getObjectType();
  uVar1 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
    goto LAB_1042dae24;
  }
  plVar3 = &lStack_90;
  _swift_dynamicCast(plVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar3 & 1) == 0) {
LAB_1042dae1c:
    _objc_release(param_1);
LAB_1042dae24:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return (undefined1 *)0x0;
  }
  uVar5 = 0;
  if (((lStack_90 == -0x2fffffffffffffe6) && (lStack_88 == -0x7ffffffef0e0be40)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd00000000000001a,0x800000010f1f41c0,lStack_90,lStack_88,0), (uVar5 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_88);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11306c190) = 0;
    goto LAB_1042daba0;
  }
  if ((lStack_90 != -0x2fffffffffffffe9) || (lStack_88 != -0x7ffffffef0e0be60)) {
    uVar5 = 0xd000000000000017;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000017,0x800000010f1f41a0,lStack_90,lStack_88,0);
    if ((uVar5 & 1) == 0) {
      if ((lStack_90 != -0x2fffffffffffffe9) || (lStack_88 != -0x7ffffffef0e0be80)) {
        uVar5 = 0xd000000000000017;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000017,0x800000010f1f4180,lStack_90,lStack_88,0);
        if ((uVar5 & 1) == 0) {
          uVar5 = 0xd00000000000001f;
          if (((lStack_90 == -0x2fffffffffffffe1) && (lStack_88 == -0x7ffffffef0e0bea0)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd00000000000001f,0x800000010f1f4160,lStack_90,lStack_88,0),
             (uVar5 & 1) != 0)) {
            _swift_bridgeObjectRelease(lStack_88);
            _objc_allocWithZone();
            *(undefined1 *)(unaff_x20 + _DAT_11306c190) = 3;
            puVar4 = auStack_c0;
            goto LAB_1042daba0;
          }
          uVar5 = 0xd000000000000015;
          if (((lStack_90 == -0x2fffffffffffffeb) && (lStack_88 == -0x7ffffffef0e0bec0)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (0xd000000000000015,0x800000010f1f4140,lStack_90,lStack_88,0),
             (uVar5 & 1) != 0)) {
            _swift_bridgeObjectRelease(lStack_88);
            _objc_allocWithZone();
            *(undefined1 *)(unaff_x20 + _DAT_11306c190) = 4;
            puVar4 = auStack_b0;
            goto LAB_1042daba0;
          }
          uVar5 = 0xd000000000000011;
          if ((lStack_90 == -0x2fffffffffffffef) && (lStack_88 == -0x7ffffffef0e0bee0)) {
            _swift_bridgeObjectRelease(0x800000010f1f4120);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd000000000000011,0x800000010f1f4120,lStack_90,lStack_88,0);
            _swift_bridgeObjectRelease(lStack_88);
            if ((uVar5 & 1) == 0) goto LAB_1042dae1c;
          }
          _objc_allocWithZone();
          *(undefined1 *)(unaff_x20 + _DAT_11306c190) = 5;
          puVar4 = auStack_a0;
          goto LAB_1042daba0;
        }
      }
      _swift_bridgeObjectRelease(lStack_88);
      _objc_allocWithZone();
      *(undefined1 *)(unaff_x20 + _DAT_11306c190) = 2;
      puVar4 = auStack_d0;
      goto LAB_1042daba0;
    }
  }
  _swift_bridgeObjectRelease(lStack_88);
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306c190) = 1;
  puVar4 = auStack_e0;
LAB_1042daba0:
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar4;
}



/* Entry: 1042dae5c; end: 1042dae83; -[SCLensPlayableEventType initWithCoder:] */

void FUN_1042dae5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042daa64();
  return;
}



/* Entry: 1042dae84; end: 1042dae8b; +[SCLensPlayableEventType playableAdOpened] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042dae84(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c190) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042dae8c; end: 1042dae93; +[SCLensPlayableEventType playableLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042dae8c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c190) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042dae94; end: 1042dae9b; +[SCLensPlayableEventType playableClosed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042dae94(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c190) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042dae9c; end: 1042daea3; +[SCLensPlayableEventType playableContentTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042dae9c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c190) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042daea4; end: 1042daeab; +[SCLensPlayableEventType loadingError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042daea4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c190) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042daeac; end: 1042daeb3; +[SCLensPlayableEventType retryTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042daeac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c190) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042daeb4; end: 1042daf03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042daeb4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11306c190) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042daf04; end: 1042daf5b; -[SCLensPlayableEventType matchPlayableAdOpened:playableLoaded:playableClosed:playableContentTapped:loadingError:retryTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042daf04(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11306c190);
  if (bVar1 < 3) {
    param_6 = param_3;
    if ((bVar1 != 0) && (param_6 = param_4, bVar1 != 1)) {
      param_6 = param_5;
    }
  }
  else if ((bVar1 != 3) && (param_6 = param_7, bVar1 != 4)) {
    param_6 = param_8;
  }
                    /* WARNING: Could not recover jumptable at 0x0001042daf54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_6 + 0x10))(param_6);
  return;
}



/* Entry: 1042daf5c; end: 1042daf5f; -[SCLensPlayableEventType .cxx_destruct] */

void FUN_1042daf5c(void)

{
  return;
}



/* Entry: 1042daf60; end: 1042daf6f; -[SCPlayableEvent eventType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042daf60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306c180));
  return;
}



/* Entry: 1042daf70; end: 1042dafbb; -[SCPlayableEvent lensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042daf70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306c188);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306c188))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1042dafbc; end: 1042db027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042dafbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306c180) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306c188);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042db028; end: 1042db0a7; -[SCPlayableEvent initWithEventType:lensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042db028(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(param_1 + _DAT_11306c180) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_11306c188);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 1042db0a8; end: 1042db14f; -[SCPlayableEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1042db0a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306c180);
  _objc_retain();
  func_0x00010bfde980(uVar2);
  __ss6HasherV8_combineyySuF();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306c188);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(param_1 + _DAT_11306c188))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042db150; end: 1042db1cf; -[SCPlayableEvent isEqual:] */

uint FUN_1042db150(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1042da694(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042db1d0; end: 1042db287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042db1d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x59545f544e455645;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59545f544e455645,0xea00000000004550);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306c188);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11306c188))[1]);
  uVar2 = 0x44495f534e454c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f534e454c,0xe700000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1042db288; end: 1042db2d7; -[SCPlayableEvent encodeWithCoder:] */

void FUN_1042db288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042db1d0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042db2d8; end: 1042db307;  */

void FUN_1042db2d8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1042db308(param_1);
  return;
}



/* Entry: 1042db308; end: 1042db513;  */

undefined8 FUN_1042db308(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 unaff_x20;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar4 = 0;
  uVar6 = 0;
  lVar2 = 0x59545f544e455645;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59545f544e455645,0xea00000000004550);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
    _swift_unknownObjectRelease(lVar3);
    lVar2 = lVar3;
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
LAB_1042db4bc:
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    FUN_1042db6d4();
    puVar1 = PTR___sypN_11034f1a8;
    _swift_dynamicCast(&lStack_90,&uStack_60,PTR___sypN_11034f1a8 + 8,lVar2,6);
    lVar3 = lStack_90;
    if ((uVar4 & 1) != 0) {
      uVar5 = 0x44495f534e454c;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f534e454c,0xe700000000000000);
      lVar2 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (lVar2 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
        _swift_unknownObjectRelease(lVar2);
      }
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      lStack_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) {
        _objc_release(param_1);
        param_1 = lVar3;
        goto LAB_1042db4bc;
      }
      _swift_dynamicCast(&lStack_90,&uStack_60,puVar1 + 8,PTR___sSSN_11034da80,6);
      if ((uVar6 & 1) != 0) {
        lVar2 = lStack_90;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_90,uStack_88);
        _swift_bridgeObjectRelease(uStack_88);
        func_0x00010c010e60();
        _objc_release(lVar2);
        _objc_release(param_1);
        _objc_release(lVar3);
        return unaff_x20;
      }
      _objc_release(param_1);
      param_1 = lVar3;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1042db514; end: 1042db53b; -[SCPlayableEvent initWithCoder:] */

void FUN_1042db514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1042db308();
  return;
}



/* Entry: 1042db53c; end: 1042db55b; -[SCPlayableEvent description] */

void FUN_1042db53c(void)

{
  FUN_1042db6a8();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042db55c; end: 1042db5d7; -[SCPlayableEvent init] */

void FUN_1042db55c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SponsoredLensTrackerServices/PlayableEventWrapper.swift",0x37,2,0xfc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042db5a4);
  (*pcVar1)();
}



/* Entry: 1042db5d8; end: 1042db6a7; -[SCPlayableEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042db5d8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306c180));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306c188 + 8))
  ;
  return;
}



/* Entry: 1042db6a8; end: 1042db6d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042db6a8(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + _DAT_11306c180) + _DAT_11306c190);
}



/* Entry: 1042db6d4; end: 1042db713;  */

void FUN_1042db6d4(void)

{
  _objc_opt_self(&PTR_PTR_112996998);
  return;
}



/* Entry: 1042db714; end: 1042db87b;  */

int FUN_1042db714(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1042db790;
        goto LAB_1042db774;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1042db774:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1042db790:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1042db87c; end: 1042db8bb;  */

void FUN_1042db87c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c1e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce6a60;
  _swift_getWitnessTable(&UNK_10dce6a60,&UNK_110755960);
  puRam000000011306c1e8 = puVar1;
  return;
}



/* Entry: 1042db8bc; end: 1042db8cb;  */

ulong FUN_1042db8bc(ulong param_1)

{
  if (5 < param_1) {
    param_1 = 6;
  }
  return param_1;
}



/* Entry: 1042db8cc; end: 1042db8cf; -[SCPlayableEvent copyWithZone:] */

void FUN_1042db8cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042db8d0; end: 1042db927; -[SCLensPlayableEventType copyWithZone:] */

void FUN_1042db8d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042db928; end: 1042db9db;  */

undefined1 * FUN_1042db928(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1042db9dc; end: 1042dba93;  */

int FUN_1042db9dc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1042dba94; end: 1042dbb17;  */

void FUN_1042dba94(void)

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



/* Entry: 1042dbb18; end: 1042dbb5f;  */

void FUN_1042dbb18(undefined1 *param_1,long *param_2)

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



/* Entry: 1042dbb60; end: 1042dbbbb;  */

undefined * FUN_1042dbb60(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1508;
  _objc_allocWithZone(PTR_PTR_1126e1508);
  func_0x00010bfee200();
  func_0x00010c21acc0();
  func_0x00010c1cafa0(puVar1);
  return puVar1;
}



/* Entry: 1042dbbbc; end: 1042dbc27;  */

bool FUN_1042dbbbc(ulong param_1,long param_2,short param_3,ulong param_4,long param_5,short param_6
                  )

{
  if (param_2 == 0) {
    if (param_5 == 0) goto LAB_1042dbc0c;
  }
  else if (param_5 != 0) {
    if (((param_1 != param_4) || (param_2 != param_5)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_1,param_2,param_4,param_5,0), (param_1 & 1) == 0)) {
      return false;
    }
LAB_1042dbc0c:
    return param_3 == param_6;
  }
  return false;
}



/* Entry: 1042dbc28; end: 1042dbc2b;  */

void FUN_1042dbc28(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c1f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce6b60;
  _swift_getWitnessTable(&UNK_10dce6b60,&UNK_110755b58);
  puRam000000011306c1f0 = puVar1;
  return;
}



/* Entry: 1042dbc2c; end: 1042dbc6b;  */

void FUN_1042dbc2c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c1f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce6b60;
  _swift_getWitnessTable(&UNK_10dce6b60,&UNK_110755b58);
  puRam000000011306c1f0 = puVar1;
  return;
}



/* Entry: 1042dbc6c; end: 1042dbc6f;  */

void FUN_1042dbc6c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c1f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce6c00;
  _swift_getWitnessTable(&UNK_10dce6c00,&UNK_110755be8);
  puRam000000011306c1f8 = puVar1;
  return;
}



/* Entry: 1042dbc70; end: 1042dbcaf;  */

void FUN_1042dbc70(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c1f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce6c00;
  _swift_getWitnessTable(&UNK_10dce6c00,&UNK_110755be8);
  puRam000000011306c1f8 = puVar1;
  return;
}



/* Entry: 1042dbcb0; end: 1042dbf5f;  */

int FUN_1042dbcb0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1042dbd2c;
        goto LAB_1042dbd10;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1042dbd10:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1042dbd2c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1042dbf60; end: 1042dbf93;  */

undefined8 * FUN_1042dbf60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1042dbf94; end: 1042dbfef;  */

undefined8 * FUN_1042dbf94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  return param_1;
}



/* Entry: 1042dbff0; end: 1042dc02b;  */

undefined8 * FUN_1042dbff0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1042dc02c; end: 1042dc12b;  */

int FUN_1042dc02c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x12) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1042dc12c; end: 1042dc147;  */

void FUN_1042dc12c(void)

{
  _objc_allocWithZone(PTR_PTR_1126adc58);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1042dc148; end: 1042dc2bf;  */

byte FUN_1042dc148(byte *param_1,byte *param_2)

{
  return (*param_1 ^ *param_2 ^ 0xff) & 1;
}



/* Entry: 1042dc2c0; end: 1042dc36b;  */

void FUN_1042dc2c0(void)

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



/* Entry: 1042dc36c; end: 1042dc393;  */

void FUN_1042dc36c(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1042dc394; end: 1042dc3d3;  */

void FUN_1042dc394(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce6d70;
  _swift_getWitnessTable(&UNK_10dce6d70,&UNK_110755df8);
  puRam000000011306c230 = puVar1;
  return;
}



/* Entry: 1042dc3d4; end: 1042dc40f;  */

undefined * FUN_1042dc3d4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1518;
  _objc_allocWithZone(PTR_PTR_1126e1518);
  func_0x00010bfee200();
  func_0x00010c21a2a0();
  return puVar1;
}



/* Entry: 1042dc410; end: 1042dc59b;  */

undefined1 FUN_1042dc410(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1042dc59c; end: 1042dc647;  */

void FUN_1042dc59c(void)

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



/* Entry: 1042dc648; end: 1042dc65b;  */

bool FUN_1042dc648(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1042dc65c; end: 1042dc733;  */

undefined * FUN_1042dc65c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126e14e8;
  _objc_allocWithZone(PTR_PTR_1126e14e8);
  func_0x00010bfee200();
  func_0x00010c2237c0();
  func_0x00010c1ae9e0(puVar1);
  func_0x00010c227be0((float)*(long *)(unaff_x20 + 0x20),puVar1);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (*(long *)(lVar2 + 0x10) != 0) {
    func_0x00010102c3b8();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar4 = lVar2;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sypN_11034f1a8 + 8);
    _swift_bridgeObjectRelease(lVar2);
    func_0x00010bff4000(puVar3);
    _objc_release(lVar4);
    func_0x00010c1d0980(puVar1);
    _objc_release(puVar3);
  }
  return puVar1;
}



/* Entry: 1042dc734; end: 1042dc737;  */

undefined * FUN_1042dc734(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126e14e8;
  _objc_allocWithZone(PTR_PTR_1126e14e8);
  func_0x00010bfee200();
  func_0x00010c2237c0();
  func_0x00010c1ae9e0(puVar1);
  func_0x00010c227be0((float)*(long *)(unaff_x20 + 0x20),puVar1);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (*(long *)(lVar2 + 0x10) != 0) {
    func_0x00010102c3b8();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar4 = lVar2;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sypN_11034f1a8 + 8);
    _swift_bridgeObjectRelease(lVar2);
    func_0x00010bff4000(puVar3);
    _objc_release(lVar4);
    func_0x00010c1d0980(puVar1);
    _objc_release(puVar3);
  }
  return puVar1;
}



/* Entry: 1042dc738; end: 1042dc77f;  */

uint FUN_1042dc738(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_1042dc780(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042dc780; end: 1042dc80b;  */

bool FUN_1042dc780(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if ((((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar1 & 1) != 0)) && ((((byte)param_1[2] ^ (byte)param_2[2]) & 1) == 0)) &&
     (*(char *)((long)param_1 + 0x11) == *(char *)((long)param_2 + 0x11))) {
    uVar1 = param_1[3];
    func_0x00010142cfc4(uVar1,param_2[3]);
    if ((uVar1 & 1) != 0) {
      return param_1[4] == param_2[4];
    }
  }
  return false;
}



/* Entry: 1042dc80c; end: 1042dc80f;  */

void FUN_1042dc80c(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c250 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce6ed0;
  _swift_getWitnessTable(&UNK_10dce6ed0,&UNK_110755f68);
  puRam000000011306c250 = puVar1;
  return;
}



/* Entry: 1042dc810; end: 1042dc84f;  */

void FUN_1042dc810(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c250 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce6ed0;
  _swift_getWitnessTable(&UNK_10dce6ed0,&UNK_110755f68);
  puRam000000011306c250 = puVar1;
  return;
}



/* Entry: 1042dc850; end: 1042dc9b3;  */

int FUN_1042dc850(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1042dc8cc;
        goto LAB_1042dc8b0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1042dc8b0:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_1042dc8cc:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1042dc9b4; end: 1042dca4b;  */

long FUN_1042dc9b4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1042dca4c; end: 1042dcac7;  */

undefined8 * FUN_1042dca4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 1042dcac8; end: 1042dcb23;  */

undefined8 * FUN_1042dcac8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar2);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 1042dcb24; end: 1042dcbd7;  */

int FUN_1042dcb24(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1042dcbd8; end: 1042dccab;  */

void FUN_1042dcbd8(void)

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



/* Entry: 1042dccac; end: 1042dccd7;  */

void FUN_1042dccac(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1042dccd8; end: 1042dcd13;  */

undefined * FUN_1042dccd8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e14f0;
  _objc_allocWithZone(PTR_PTR_1126e14f0);
  func_0x00010bfee200();
  func_0x00010c161620();
  return puVar1;
}



/* Entry: 1042dcd14; end: 1042dcd17;  */

void FUN_1042dcd14(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c270 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce6f90;
  _swift_getWitnessTable(&UNK_10dce6f90,&UNK_1107560c8);
  puRam000000011306c270 = puVar1;
  return;
}



/* Entry: 1042dcd18; end: 1042dcd57;  */

void FUN_1042dcd18(void)

{
  undefined *puVar1;
  
  if (puRam000000011306c270 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dce6f90;
  _swift_getWitnessTable(&UNK_10dce6f90,&UNK_1107560c8);
  puRam000000011306c270 = puVar1;
  return;
}



/* Entry: 1042dcd58; end: 1042dcec3;  */

int FUN_1042dcd58(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf7 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 8) {
      iVar2 = 4;
    }
    if (param_2 + 8 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1042dcdd4;
        goto LAB_1042dcdb8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1042dcdb8:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_1042dcdd4:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1042dcec4; end: 1042dcef7;  */

undefined8 * FUN_1042dcec4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 1042dcef8; end: 1042dcf4b;  */

undefined8 * FUN_1042dcef8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1042dcf4c; end: 1042dcf87;  */

undefined8 * FUN_1042dcf4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 1042dcf88; end: 1042dd02b;  */

int FUN_1042dcf88(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1042dd02c; end: 1042dd257;  */

void FUN_1042dd02c(void)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_1042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1042dde0c();
  _swift_getEnumCaseMultiPayload(puVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001042dd0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10dce70a0)[(ulong)puVar2 & 0xffffffff] * 4 + 0x1042dd0b8))
            (0x6d6f6f7a,0xe400000000000000);
  return;
}



/* Entry: 1042dd258; end: 1042dd25b;  */

uint FUN_1042dd258(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ushort *puVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  byte *pbVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  ulong uVar18;
  uint uVar19;
  ulong *puVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong *puVar25;
  long lVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong *puVar29;
  byte *apbStack_90 [2];
  undefined8 uStack_80;
  ushort *puStack_78;
  ulong auStack_70 [2];
  
  lVar12 = 0;
  auStack_70[1] = param_1;
  func_0x0001042e769c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  uVar14 = (long)apbStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  auStack_70[0] = uVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar26 = uVar14 - extraout_x12;
  lVar13 = 0;
  FUN_1042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar24 = lVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_80 = (byte *)(lVar24 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar17 = (byte *)(lVar24 - extraout_x12_00) + -extraout_x12_01;
  apbStack_90[1] = pbVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar17 = pbVar17 + -extraout_x12_02;
  apbStack_90[0] = pbVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_78 = (ushort *)(pbVar17 + -extraout_x12_03);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar25 = (ulong *)((long)(pbVar17 + -extraout_x12_03) - extraout_x12_04);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar20 = (ulong *)((long)puVar25 - extraout_x12_05);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar27 = (ulong *)((long)puVar20 - extraout_x12_06);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar29 = (ulong *)((long)puVar27 - extraout_x12_07);
  lVar12 = 0x11306c3e8;
  func_0x0001000285a8(0x11306c3e8,&UNK_10dce7208);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = (long)puVar29 - extraout_x8_01;
  puVar1 = (ulong *)(lVar22 + *(int *)(lVar12 + 0x30));
  FUN_1042dde0c(auStack_70[1],lVar22);
  FUN_1042dde0c(param_2,puVar1);
  auStack_70[1] = lVar22;
  _swift_getEnumCaseMultiPayload(lVar22,lVar13);
  uVar16 = auStack_70[1];
  uVar14 = auStack_70[0];
  puVar9 = puStack_78;
  pbVar8 = uStack_80;
  pbVar7 = apbStack_90[1];
  pbVar17 = apbStack_90[0];
  iVar11 = (int)lVar22;
  if (iVar11 < 6) {
    if (iVar11 < 4) {
      if (iVar11 == 0) {
        FUN_1042dde0c(auStack_70[1],puVar29);
        puVar20 = puVar1;
        _swift_getEnumCaseMultiPayload(puVar1,lVar13);
        if ((int)puVar20 == 0) {
          uVar19 = (uint)(*puVar29 == *puVar1);
          goto LAB_1042dddd0;
        }
      }
      else if (iVar11 == 1) {
        FUN_1042dde0c(auStack_70[1],puVar27);
        uVar14 = *puVar27;
        uVar15 = puVar27[1];
        uVar21 = puVar27[2];
        bVar4 = *(byte *)((long)puVar27 + 0x11);
        uVar16 = puVar27[3];
        uVar23 = puVar27[4];
        puVar20 = puVar1;
        _swift_getEnumCaseMultiPayload(puVar1,lVar13);
        if ((int)puVar20 != 1) {
          _swift_bridgeObjectRelease(uVar16);
          goto LAB_1042ddca4;
        }
        uVar28 = puVar1[1];
        uVar6 = puVar1[2];
        bVar5 = *(byte *)((long)puVar1 + 0x11);
        uVar18 = puVar1[3];
        auStack_70[0] = puVar1[4];
        if ((((uVar14 == *puVar1 && uVar15 == uVar28) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar14,uVar15,*puVar1,uVar28,0), (uVar14 & 1) != 0)) &&
            ((byte)uVar21 == (byte)uVar6)) &&
           ((bVar4 == bVar5 &&
            (uVar14 = uVar16, func_0x00010142cfc4(uVar16,uVar18), (uVar14 & 1) != 0)))) {
          _swift_bridgeObjectRelease(uVar18);
          _swift_bridgeObjectRelease(uVar28);
          _swift_bridgeObjectRelease(uVar16);
          _swift_bridgeObjectRelease(uVar15);
          uVar19 = (uint)(uVar23 == auStack_70[0]);
          uVar16 = auStack_70[1];
        }
        else {
          _swift_bridgeObjectRelease(uVar16);
          _swift_bridgeObjectRelease(uVar15);
          _swift_bridgeObjectRelease(uVar18);
          _swift_bridgeObjectRelease(uVar28);
          uVar19 = 0;
          uVar16 = auStack_70[1];
        }
LAB_1042dddd0:
        func_0x0001042dded8(uVar16,FUN_1042dddf8);
        goto LAB_1042dddd4;
      }
    }
    else if (iVar11 == 4) {
      FUN_1042dde0c(auStack_70[1],lVar24);
      puVar20 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar13);
      if ((int)puVar20 == 4) {
        func_0x0001042dde94(lVar24,lVar26,0x1042e769c);
        func_0x0001042dde94(puVar1,uVar14,0x1042e769c);
        if (*(long *)(lVar26 + 0x28) != *(long *)(uVar14 + 0x28)) {
          func_0x0001042dded8(uVar14,0x1042e769c);
          func_0x0001042dded8(lVar26,0x1042e769c);
          uVar19 = 0;
          uVar16 = auStack_70[1];
          goto LAB_1042dddd0;
        }
        cVar2 = *(char *)(lVar26 + 0x10);
        cVar3 = *(char *)(uVar14 + 0x10);
        func_0x0001042dded8(uVar14,0x1042e769c);
        func_0x0001042dded8(lVar26,0x1042e769c);
        bVar10 = cVar2 == cVar3;
LAB_1042ddd84:
        uVar19 = (uint)bVar10;
        uVar16 = auStack_70[1];
        goto LAB_1042dddd0;
      }
      func_0x0001042dded8(lVar24,0x1042e769c);
      uVar16 = auStack_70[1];
    }
    else if (iVar11 == 5) {
      FUN_1042dde0c(auStack_70[1],puVar20);
      uVar14 = *puVar20;
      uVar15 = puVar20[1];
      uVar23 = puVar20[2];
      puVar20 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar13);
      if ((int)puVar20 == 5) {
        uVar21 = puVar1[1];
        uVar28 = puVar1[2];
        if ((uVar14 == *puVar1 && uVar15 == uVar21) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar14,uVar15,*puVar1,uVar21,0), (uVar14 & 1) != 0)) {
          _swift_bridgeObjectRelease(uVar15);
          _swift_bridgeObjectRelease(uVar21);
          uVar19 = (uint)((byte)uVar23 == (byte)uVar28);
        }
        else {
          _swift_bridgeObjectRelease(uVar15);
          _swift_bridgeObjectRelease(uVar21);
          uVar19 = 0;
        }
        goto LAB_1042dddd0;
      }
LAB_1042ddad4:
      _swift_bridgeObjectRelease(uVar15);
    }
  }
  else if (iVar11 < 8) {
    if (iVar11 == 6) {
      FUN_1042dde0c(auStack_70[1],puVar25);
      uVar14 = *puVar25;
      uVar15 = puVar25[1];
      uVar16 = puVar25[2];
      bVar4 = *(byte *)((long)puVar25 + 0x11);
      puVar20 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar13);
      if ((int)puVar20 == 6) {
        uVar21 = puVar1[1];
        uVar23 = puVar1[2];
        bVar5 = *(byte *)((long)puVar1 + 0x11);
        if (uVar15 == 0) {
          uVar28 = uVar21;
          if (uVar21 == 0) {
LAB_1042ddd64:
            _swift_bridgeObjectRelease(uVar21);
            _swift_bridgeObjectRelease(uVar15);
            bVar10 = false;
            if ((byte)uVar16 == (byte)uVar23) {
              bVar10 = bVar4 == bVar5;
            }
            goto LAB_1042ddd84;
          }
        }
        else {
          uVar28 = uVar15;
          if (uVar21 != 0) {
            if ((uVar14 == *puVar1 && uVar15 == uVar21) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar14,uVar15,*puVar1,uVar21,0), (uVar14 & 1) != 0)) goto LAB_1042ddd64;
            _swift_bridgeObjectRelease(uVar15);
            uVar28 = uVar21;
          }
        }
        _swift_bridgeObjectRelease(uVar28);
        uVar19 = 0;
        uVar16 = auStack_70[1];
        goto LAB_1042dddd0;
      }
LAB_1042ddca4:
      _swift_bridgeObjectRelease(uVar15);
      uVar16 = auStack_70[1];
    }
    else if (iVar11 == 7) {
      FUN_1042dde0c(auStack_70[1],puStack_78);
      puVar20 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar13);
      if ((int)puVar20 == 7) {
        uVar19 = (uint)*puVar9;
        func_0x0001042f4f5c(*puVar9,(short)*puVar1);
        goto LAB_1042dddd0;
      }
    }
  }
  else if (iVar11 == 8) {
    FUN_1042dde0c(auStack_70[1],apbStack_90[0]);
    puVar20 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,lVar13);
    if ((int)puVar20 == 8) {
      uVar19 = (byte)(*pbVar17 ^ (byte)*puVar1) ^ 1;
      goto LAB_1042dddd0;
    }
  }
  else if (iVar11 == 9) {
    FUN_1042dde0c(auStack_70[1],apbStack_90[1]);
    puVar20 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,lVar13);
    if ((int)puVar20 == 9) {
      uVar19 = (uint)(*pbVar7 == (byte)*puVar1);
      goto LAB_1042dddd0;
    }
  }
  else if (iVar11 == 0xb) {
    FUN_1042dde0c(auStack_70[1],uStack_80);
    uVar14 = *(ulong *)(pbVar8 + 8);
    uVar15 = *(ulong *)(pbVar8 + 0x10);
    puVar20 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,lVar13);
    if ((int)puVar20 != 0xb) goto LAB_1042ddad4;
    uVar23 = puVar1[2];
    if (*pbVar8 == (byte)*puVar1) {
      if (uVar14 == puVar1[1] && uVar15 == uVar23) {
        uVar19 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar14,uVar15,puVar1[1],uVar23,0);
        uVar19 = (uint)uVar14;
      }
    }
    else {
      uVar19 = 0;
    }
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(uVar23);
    goto LAB_1042dddd0;
  }
  func_0x0001042e7498(uVar16,0x11306c3e8,&UNK_10dce7208);
  uVar19 = 0;
LAB_1042dddd4:
  return uVar19 & 1;
}



/* Entry: 1042dd25c; end: 1042dd617;  */

void FUN_1042dd25c(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 auStack_a0 [80];
  
  lVar1 = 0;
  func_0x0001042e769c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = 0;
  FUN_1042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_a0 +
           (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
           (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _objc_allocWithZone(PTR_PTR_1126e14d8);
  func_0x00010bfee200();
  lVar2 = 0;
  FUN_1042dde50();
  FUN_1042dde0c(unaff_x20 + *(int *)(lVar2 + 0x14),puVar3);
  _swift_getEnumCaseMultiPayload(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001042dd338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10dce70ac)[(ulong)puVar3 & 0xffffffff] * 4 + 0x1042dd33c))();
  return;
}



/* Entry: 1042dd618; end: 1042dd61b;  */

void FUN_1042dd618(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 auStack_a0 [80];
  
  lVar1 = 0;
  func_0x0001042e769c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = 0;
  FUN_1042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_a0 +
           (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) -
           (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _objc_allocWithZone(PTR_PTR_1126e14d8);
  func_0x00010bfee200();
  lVar2 = 0;
  FUN_1042dde50();
  FUN_1042dde0c(unaff_x20 + *(int *)(lVar2 + 0x14),puVar3);
  _swift_getEnumCaseMultiPayload(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001042dd338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10dce70ac)[(ulong)puVar3 & 0xffffffff] * 4 + 0x1042dd33c))();
  return;
}



/* Entry: 1042dd61c; end: 1042dd68b;  */

uint FUN_1042dd61c(ulong *param_1,ulong *param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ushort *puVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  byte *pbVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  ulong uVar18;
  uint uVar19;
  ulong *puVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong *puVar25;
  long lVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong *puVar29;
  byte *apbStack_90 [2];
  undefined8 uStack_80;
  ushort *puStack_78;
  ulong auStack_70 [2];
  
  uVar12 = *param_1;
  if ((uVar12 != *param_2 || param_1[1] != param_2[1]) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar12 & 1) == 0)) {
    return 0;
  }
  iVar11 = *(int *)(param_3 + 0x14);
  auStack_70[1] = (long)param_1 + (long)iVar11;
  lVar13 = 0;
  func_0x0001042e769c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  uVar12 = (long)apbStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  auStack_70[0] = uVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar26 = uVar12 - extraout_x12;
  lVar14 = 0;
  FUN_1042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  lVar24 = lVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_80 = (byte *)(lVar24 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar17 = (byte *)(lVar24 - extraout_x12_00) + -extraout_x12_01;
  apbStack_90[1] = pbVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar17 = pbVar17 + -extraout_x12_02;
  apbStack_90[0] = pbVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_78 = (ushort *)(pbVar17 + -extraout_x12_03);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar25 = (ulong *)((long)(pbVar17 + -extraout_x12_03) - extraout_x12_04);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar20 = (ulong *)((long)puVar25 - extraout_x12_05);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar27 = (ulong *)((long)puVar20 - extraout_x12_06);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar29 = (ulong *)((long)puVar27 - extraout_x12_07);
  lVar13 = 0x11306c3e8;
  func_0x0001000285a8(0x11306c3e8,&UNK_10dce7208);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = (long)puVar29 - extraout_x8_01;
  puVar1 = (ulong *)(lVar22 + *(int *)(lVar13 + 0x30));
  FUN_1042dde0c(auStack_70[1],lVar22);
  FUN_1042dde0c((long)param_2 + (long)iVar11,puVar1);
  auStack_70[1] = lVar22;
  _swift_getEnumCaseMultiPayload(lVar22,lVar14);
  uVar16 = auStack_70[1];
  uVar12 = auStack_70[0];
  puVar9 = puStack_78;
  pbVar8 = uStack_80;
  pbVar7 = apbStack_90[1];
  pbVar17 = apbStack_90[0];
  iVar11 = (int)lVar22;
  if (iVar11 < 6) {
    if (iVar11 < 4) {
      if (iVar11 == 0) {
        FUN_1042dde0c(auStack_70[1],puVar29);
        puVar20 = puVar1;
        _swift_getEnumCaseMultiPayload(puVar1,lVar14);
        if ((int)puVar20 == 0) {
          uVar19 = (uint)(*puVar29 == *puVar1);
          goto LAB_1042dddd0;
        }
      }
      else if (iVar11 == 1) {
        FUN_1042dde0c(auStack_70[1],puVar27);
        uVar12 = *puVar27;
        uVar15 = puVar27[1];
        uVar21 = puVar27[2];
        bVar4 = *(byte *)((long)puVar27 + 0x11);
        uVar16 = puVar27[3];
        uVar23 = puVar27[4];
        puVar20 = puVar1;
        _swift_getEnumCaseMultiPayload(puVar1,lVar14);
        if ((int)puVar20 != 1) {
          _swift_bridgeObjectRelease(uVar16);
          goto LAB_1042ddca4;
        }
        uVar28 = puVar1[1];
        uVar6 = puVar1[2];
        bVar5 = *(byte *)((long)puVar1 + 0x11);
        uVar18 = puVar1[3];
        auStack_70[0] = puVar1[4];
        if ((((uVar12 == *puVar1 && uVar15 == uVar28) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar12,uVar15,*puVar1,uVar28,0), (uVar12 & 1) != 0)) &&
            ((byte)uVar21 == (byte)uVar6)) &&
           ((bVar4 == bVar5 &&
            (uVar12 = uVar16, func_0x00010142cfc4(uVar16,uVar18), (uVar12 & 1) != 0)))) {
          _swift_bridgeObjectRelease(uVar18);
          _swift_bridgeObjectRelease(uVar28);
          _swift_bridgeObjectRelease(uVar16);
          _swift_bridgeObjectRelease(uVar15);
          uVar19 = (uint)(uVar23 == auStack_70[0]);
          uVar16 = auStack_70[1];
        }
        else {
          _swift_bridgeObjectRelease(uVar16);
          _swift_bridgeObjectRelease(uVar15);
          _swift_bridgeObjectRelease(uVar18);
          _swift_bridgeObjectRelease(uVar28);
          uVar19 = 0;
          uVar16 = auStack_70[1];
        }
LAB_1042dddd0:
        func_0x0001042dded8(uVar16,FUN_1042dddf8);
        goto LAB_1042dddd4;
      }
    }
    else if (iVar11 == 4) {
      FUN_1042dde0c(auStack_70[1],lVar24);
      puVar20 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar14);
      if ((int)puVar20 == 4) {
        func_0x0001042dde94(lVar24,lVar26,0x1042e769c);
        func_0x0001042dde94(puVar1,uVar12,0x1042e769c);
        if (*(long *)(lVar26 + 0x28) != *(long *)(uVar12 + 0x28)) {
          func_0x0001042dded8(uVar12,0x1042e769c);
          func_0x0001042dded8(lVar26,0x1042e769c);
          uVar19 = 0;
          uVar16 = auStack_70[1];
          goto LAB_1042dddd0;
        }
        cVar2 = *(char *)(lVar26 + 0x10);
        cVar3 = *(char *)(uVar12 + 0x10);
        func_0x0001042dded8(uVar12,0x1042e769c);
        func_0x0001042dded8(lVar26,0x1042e769c);
        bVar10 = cVar2 == cVar3;
LAB_1042ddd84:
        uVar19 = (uint)bVar10;
        uVar16 = auStack_70[1];
        goto LAB_1042dddd0;
      }
      func_0x0001042dded8(lVar24,0x1042e769c);
      uVar16 = auStack_70[1];
    }
    else if (iVar11 == 5) {
      FUN_1042dde0c(auStack_70[1],puVar20);
      uVar12 = *puVar20;
      uVar15 = puVar20[1];
      uVar23 = puVar20[2];
      puVar20 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar14);
      if ((int)puVar20 == 5) {
        uVar21 = puVar1[1];
        uVar28 = puVar1[2];
        if ((uVar12 == *puVar1 && uVar15 == uVar21) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar12,uVar15,*puVar1,uVar21,0), (uVar12 & 1) != 0)) {
          _swift_bridgeObjectRelease(uVar15);
          _swift_bridgeObjectRelease(uVar21);
          uVar19 = (uint)((byte)uVar23 == (byte)uVar28);
        }
        else {
          _swift_bridgeObjectRelease(uVar15);
          _swift_bridgeObjectRelease(uVar21);
          uVar19 = 0;
        }
        goto LAB_1042dddd0;
      }
LAB_1042ddad4:
      _swift_bridgeObjectRelease(uVar15);
    }
  }
  else if (iVar11 < 8) {
    if (iVar11 == 6) {
      FUN_1042dde0c(auStack_70[1],puVar25);
      uVar12 = *puVar25;
      uVar15 = puVar25[1];
      uVar16 = puVar25[2];
      bVar4 = *(byte *)((long)puVar25 + 0x11);
      puVar20 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar14);
      if ((int)puVar20 == 6) {
        uVar21 = puVar1[1];
        uVar23 = puVar1[2];
        bVar5 = *(byte *)((long)puVar1 + 0x11);
        if (uVar15 == 0) {
          uVar28 = uVar21;
          if (uVar21 == 0) {
LAB_1042ddd64:
            _swift_bridgeObjectRelease(uVar21);
            _swift_bridgeObjectRelease(uVar15);
            bVar10 = false;
            if ((byte)uVar16 == (byte)uVar23) {
              bVar10 = bVar4 == bVar5;
            }
            goto LAB_1042ddd84;
          }
        }
        else {
          uVar28 = uVar15;
          if (uVar21 != 0) {
            if ((uVar12 == *puVar1 && uVar15 == uVar21) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar12,uVar15,*puVar1,uVar21,0), (uVar12 & 1) != 0)) goto LAB_1042ddd64;
            _swift_bridgeObjectRelease(uVar15);
            uVar28 = uVar21;
          }
        }
        _swift_bridgeObjectRelease(uVar28);
        uVar19 = 0;
        uVar16 = auStack_70[1];
        goto LAB_1042dddd0;
      }
LAB_1042ddca4:
      _swift_bridgeObjectRelease(uVar15);
      uVar16 = auStack_70[1];
    }
    else if (iVar11 == 7) {
      FUN_1042dde0c(auStack_70[1],puStack_78);
      puVar20 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar14);
      if ((int)puVar20 == 7) {
        uVar19 = (uint)*puVar9;
        func_0x0001042f4f5c(*puVar9,(short)*puVar1);
        goto LAB_1042dddd0;
      }
    }
  }
  else if (iVar11 == 8) {
    FUN_1042dde0c(auStack_70[1],apbStack_90[0]);
    puVar20 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,lVar14);
    if ((int)puVar20 == 8) {
      uVar19 = (byte)(*pbVar17 ^ (byte)*puVar1) ^ 1;
      goto LAB_1042dddd0;
    }
  }
  else if (iVar11 == 9) {
    FUN_1042dde0c(auStack_70[1],apbStack_90[1]);
    puVar20 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,lVar14);
    if ((int)puVar20 == 9) {
      uVar19 = (uint)(*pbVar7 == (byte)*puVar1);
      goto LAB_1042dddd0;
    }
  }
  else if (iVar11 == 0xb) {
    FUN_1042dde0c(auStack_70[1],uStack_80);
    uVar12 = *(ulong *)(pbVar8 + 8);
    uVar15 = *(ulong *)(pbVar8 + 0x10);
    puVar20 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,lVar14);
    if ((int)puVar20 != 0xb) goto LAB_1042ddad4;
    uVar23 = puVar1[2];
    if (*pbVar8 == (byte)*puVar1) {
      if (uVar12 == puVar1[1] && uVar15 == uVar23) {
        uVar19 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar12,uVar15,puVar1[1],uVar23,0);
        uVar19 = (uint)uVar12;
      }
    }
    else {
      uVar19 = 0;
    }
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(uVar23);
    goto LAB_1042dddd0;
  }
  func_0x0001042e7498(uVar16,0x11306c3e8,&UNK_10dce7208);
  uVar19 = 0;
LAB_1042dddd4:
  return uVar19 & 1;
}



/* Entry: 1042dd68c; end: 1042dddf7;  */

uint FUN_1042dd68c(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ushort *puVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  byte *pbVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  ulong uVar18;
  uint uVar19;
  ulong *puVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong *puVar25;
  long lVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong *puVar29;
  byte *apbStack_90 [2];
  undefined8 uStack_80;
  ushort *puStack_78;
  ulong auStack_70 [2];
  
  lVar12 = 0;
  auStack_70[1] = param_1;
  func_0x0001042e769c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  uVar14 = (long)apbStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  auStack_70[0] = uVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar26 = uVar14 - extraout_x12;
  lVar13 = 0;
  FUN_1042dddf8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar24 = lVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_80 = (byte *)(lVar24 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar17 = (byte *)(lVar24 - extraout_x12_00) + -extraout_x12_01;
  apbStack_90[1] = pbVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pbVar17 = pbVar17 + -extraout_x12_02;
  apbStack_90[0] = pbVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_78 = (ushort *)(pbVar17 + -extraout_x12_03);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar25 = (ulong *)((long)(pbVar17 + -extraout_x12_03) - extraout_x12_04);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar20 = (ulong *)((long)puVar25 - extraout_x12_05);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar27 = (ulong *)((long)puVar20 - extraout_x12_06);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar29 = (ulong *)((long)puVar27 - extraout_x12_07);
  lVar12 = 0x11306c3e8;
  func_0x0001000285a8(0x11306c3e8,&UNK_10dce7208);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = (long)puVar29 - extraout_x8_01;
  puVar1 = (ulong *)(lVar22 + *(int *)(lVar12 + 0x30));
  FUN_1042dde0c(auStack_70[1],lVar22);
  FUN_1042dde0c(param_2,puVar1);
  auStack_70[1] = lVar22;
  _swift_getEnumCaseMultiPayload(lVar22,lVar13);
  uVar16 = auStack_70[1];
  uVar14 = auStack_70[0];
  puVar9 = puStack_78;
  pbVar8 = uStack_80;
  pbVar7 = apbStack_90[1];
  pbVar17 = apbStack_90[0];
  iVar11 = (int)lVar22;
  if (iVar11 < 6) {
    if (iVar11 < 4) {
      if (iVar11 == 0) {
        FUN_1042dde0c(auStack_70[1],puVar29);
        puVar20 = puVar1;
        _swift_getEnumCaseMultiPayload(puVar1,lVar13);
        if ((int)puVar20 == 0) {
          uVar19 = (uint)(*puVar29 == *puVar1);
          goto LAB_1042dddd0;
        }
      }
      else if (iVar11 == 1) {
        FUN_1042dde0c(auStack_70[1],puVar27);
        uVar14 = *puVar27;
        uVar15 = puVar27[1];
        uVar21 = puVar27[2];
        bVar4 = *(byte *)((long)puVar27 + 0x11);
        uVar16 = puVar27[3];
        uVar23 = puVar27[4];
        puVar20 = puVar1;
        _swift_getEnumCaseMultiPayload(puVar1,lVar13);
        if ((int)puVar20 != 1) {
          _swift_bridgeObjectRelease(uVar16);
          goto LAB_1042ddca4;
        }
        uVar28 = puVar1[1];
        uVar6 = puVar1[2];
        bVar5 = *(byte *)((long)puVar1 + 0x11);
        uVar18 = puVar1[3];
        auStack_70[0] = puVar1[4];
        if ((((uVar14 == *puVar1 && uVar15 == uVar28) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (uVar14,uVar15,*puVar1,uVar28,0), (uVar14 & 1) != 0)) &&
            ((byte)uVar21 == (byte)uVar6)) &&
           ((bVar4 == bVar5 &&
            (uVar14 = uVar16, func_0x00010142cfc4(uVar16,uVar18), (uVar14 & 1) != 0)))) {
          _swift_bridgeObjectRelease(uVar18);
          _swift_bridgeObjectRelease(uVar28);
          _swift_bridgeObjectRelease(uVar16);
          _swift_bridgeObjectRelease(uVar15);
          uVar19 = (uint)(uVar23 == auStack_70[0]);
          uVar16 = auStack_70[1];
        }
        else {
          _swift_bridgeObjectRelease(uVar16);
          _swift_bridgeObjectRelease(uVar15);
          _swift_bridgeObjectRelease(uVar18);
          _swift_bridgeObjectRelease(uVar28);
          uVar19 = 0;
          uVar16 = auStack_70[1];
        }
LAB_1042dddd0:
        func_0x0001042dded8(uVar16,FUN_1042dddf8);
        goto LAB_1042dddd4;
      }
    }
    else if (iVar11 == 4) {
      FUN_1042dde0c(auStack_70[1],lVar24);
      puVar20 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar13);
      if ((int)puVar20 == 4) {
        func_0x0001042dde94(lVar24,lVar26,0x1042e769c);
        func_0x0001042dde94(puVar1,uVar14,0x1042e769c);
        if (*(long *)(lVar26 + 0x28) != *(long *)(uVar14 + 0x28)) {
          func_0x0001042dded8(uVar14,0x1042e769c);
          func_0x0001042dded8(lVar26,0x1042e769c);
          uVar19 = 0;
          uVar16 = auStack_70[1];
          goto LAB_1042dddd0;
        }
        cVar2 = *(char *)(lVar26 + 0x10);
        cVar3 = *(char *)(uVar14 + 0x10);
        func_0x0001042dded8(uVar14,0x1042e769c);
        func_0x0001042dded8(lVar26,0x1042e769c);
        bVar10 = cVar2 == cVar3;
LAB_1042ddd84:
        uVar19 = (uint)bVar10;
        uVar16 = auStack_70[1];
        goto LAB_1042dddd0;
      }
      func_0x0001042dded8(lVar24,0x1042e769c);
      uVar16 = auStack_70[1];
    }
    else if (iVar11 == 5) {
      FUN_1042dde0c(auStack_70[1],puVar20);
      uVar14 = *puVar20;
      uVar15 = puVar20[1];
      uVar23 = puVar20[2];
      puVar20 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar13);
      if ((int)puVar20 == 5) {
        uVar21 = puVar1[1];
        uVar28 = puVar1[2];
        if ((uVar14 == *puVar1 && uVar15 == uVar21) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar14,uVar15,*puVar1,uVar21,0), (uVar14 & 1) != 0)) {
          _swift_bridgeObjectRelease(uVar15);
          _swift_bridgeObjectRelease(uVar21);
          uVar19 = (uint)((byte)uVar23 == (byte)uVar28);
        }
        else {
          _swift_bridgeObjectRelease(uVar15);
          _swift_bridgeObjectRelease(uVar21);
          uVar19 = 0;
        }
        goto LAB_1042dddd0;
      }
LAB_1042ddad4:
      _swift_bridgeObjectRelease(uVar15);
    }
  }
  else if (iVar11 < 8) {
    if (iVar11 == 6) {
      FUN_1042dde0c(auStack_70[1],puVar25);
      uVar14 = *puVar25;
      uVar15 = puVar25[1];
      uVar16 = puVar25[2];
      bVar4 = *(byte *)((long)puVar25 + 0x11);
      puVar20 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar13);
      if ((int)puVar20 == 6) {
        uVar21 = puVar1[1];
        uVar23 = puVar1[2];
        bVar5 = *(byte *)((long)puVar1 + 0x11);
        if (uVar15 == 0) {
          uVar28 = uVar21;
          if (uVar21 == 0) {
LAB_1042ddd64:
            _swift_bridgeObjectRelease(uVar21);
            _swift_bridgeObjectRelease(uVar15);
            bVar10 = false;
            if ((byte)uVar16 == (byte)uVar23) {
              bVar10 = bVar4 == bVar5;
            }
            goto LAB_1042ddd84;
          }
        }
        else {
          uVar28 = uVar15;
          if (uVar21 != 0) {
            if ((uVar14 == *puVar1 && uVar15 == uVar21) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar14,uVar15,*puVar1,uVar21,0), (uVar14 & 1) != 0)) goto LAB_1042ddd64;
            _swift_bridgeObjectRelease(uVar15);
            uVar28 = uVar21;
          }
        }
        _swift_bridgeObjectRelease(uVar28);
        uVar19 = 0;
        uVar16 = auStack_70[1];
        goto LAB_1042dddd0;
      }
LAB_1042ddca4:
      _swift_bridgeObjectRelease(uVar15);
      uVar16 = auStack_70[1];
    }
    else if (iVar11 == 7) {
      FUN_1042dde0c(auStack_70[1],puStack_78);
      puVar20 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,lVar13);
      if ((int)puVar20 == 7) {
        uVar19 = (uint)*puVar9;
        func_0x0001042f4f5c(*puVar9,(short)*puVar1);
        goto LAB_1042dddd0;
      }
    }
  }
  else if (iVar11 == 8) {
    FUN_1042dde0c(auStack_70[1],apbStack_90[0]);
    puVar20 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,lVar13);
    if ((int)puVar20 == 8) {
      uVar19 = (byte)(*pbVar17 ^ (byte)*puVar1) ^ 1;
      goto LAB_1042dddd0;
    }
  }
  else if (iVar11 == 9) {
    FUN_1042dde0c(auStack_70[1],apbStack_90[1]);
    puVar20 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,lVar13);
    if ((int)puVar20 == 9) {
      uVar19 = (uint)(*pbVar7 == (byte)*puVar1);
      goto LAB_1042dddd0;
    }
  }
  else if (iVar11 == 0xb) {
    FUN_1042dde0c(auStack_70[1],uStack_80);
    uVar14 = *(ulong *)(pbVar8 + 8);
    uVar15 = *(ulong *)(pbVar8 + 0x10);
    puVar20 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,lVar13);
    if ((int)puVar20 != 0xb) goto LAB_1042ddad4;
    uVar23 = puVar1[2];
    if (*pbVar8 == (byte)*puVar1) {
      if (uVar14 == puVar1[1] && uVar15 == uVar23) {
        uVar19 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar14,uVar15,puVar1[1],uVar23,0);
        uVar19 = (uint)uVar14;
      }
    }
    else {
      uVar19 = 0;
    }
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(uVar23);
    goto LAB_1042dddd0;
  }
  func_0x0001042e7498(uVar16,0x11306c3e8,&UNK_10dce7208);
  uVar19 = 0;
LAB_1042dddd4:
  return uVar19 & 1;
}



/* Entry: 1042dddf8; end: 1042dde0b;  */

void FUN_1042dddf8(undefined8 param_1)

{
  if (lRam000000011306c318 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f8860);
  return;
}



/* Entry: 1042dde0c; end: 1042dde4f;  */

undefined8 FUN_1042dde0c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1042dddf8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1042dde50; end: 1042dde63;  */

void FUN_1042dde50(undefined8 param_1)

{
  if (lRam000000011306c3a8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7f8888);
  return;
}



/* Entry: 1042dde64; end: 1042dde93;  */

void FUN_1042dde64(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,param_3);
  return;
}



/* Entry: 1042dde94; end: 1042ddf13;  */

undefined8 FUN_1042dde94(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1042ddf14; end: 1042defd7;  */

long * FUN_1042ddf14(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  
  lVar25 = *(long *)(param_3 + -8);
  uVar13 = *(uint *)(lVar25 + 0x50);
  if ((uVar13 >> 0x11 & 1) == 0) {
    plVar15 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar14 = (int)plVar15;
    if (iVar14 < 5) {
      if (iVar14 < 3) {
        if (iVar14 == 1) {
          lVar25 = param_2[1];
          *param_1 = *param_2;
          param_1[1] = lVar25;
          *(short *)(param_1 + 2) = (short)param_2[2];
          lVar25 = param_2[3];
          lVar16 = param_2[4];
          param_1[3] = lVar25;
          param_1[4] = lVar16;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(lVar25);
          uVar20 = 1;
        }
        else {
          if (iVar14 != 2) {
LAB_1042de25c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar25 + 0x40));
            return param_1;
          }
          lVar25 = param_2[1];
          *param_1 = *param_2;
          param_1[1] = lVar25;
          *(char *)(param_1 + 2) = (char)param_2[2];
          _swift_bridgeObjectRetain();
          uVar20 = 2;
        }
      }
      else if (iVar14 == 3) {
        lVar25 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = lVar25;
        *(char *)(param_1 + 2) = (char)param_2[2];
        _swift_bridgeObjectRetain();
        uVar20 = 3;
      }
      else {
        if (iVar14 != 4) goto LAB_1042de25c;
        lVar25 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = lVar25;
        *(char *)(param_1 + 2) = (char)param_2[2];
        lVar21 = param_2[3];
        param_1[3] = lVar21;
        lVar16 = param_2[4];
        param_1[5] = param_2[5];
        param_1[4] = lVar16;
        lVar16 = 0;
        func_0x0001042e769c();
        puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x24));
        puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x24));
        uVar8 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar8;
        uVar9 = puVar2[3];
        puVar1[2] = puVar2[2];
        puVar1[3] = uVar9;
        lVar16 = 0;
        func_0x0001042e75b8();
        puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar16 + 0x18));
        puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar16 + 0x18));
        uVar20 = *puVar4;
        uVar31 = puVar4[3];
        uVar29 = puVar4[2];
        puVar3[1] = puVar4[1];
        *puVar3 = uVar20;
        puVar3[3] = uVar31;
        puVar3[2] = uVar29;
        uVar20 = puVar4[4];
        puVar3[5] = puVar4[5];
        puVar3[4] = uVar20;
        uVar20 = puVar4[6];
        uVar29 = puVar4[7];
        puVar3[6] = uVar20;
        puVar3[7] = uVar29;
        uVar29 = puVar4[8];
        uVar31 = puVar4[9];
        puVar3[8] = uVar29;
        puVar3[9] = uVar31;
        uVar31 = puVar4[10];
        uVar36 = puVar4[0xb];
        puVar3[10] = uVar31;
        puVar3[0xb] = uVar36;
        uVar36 = puVar4[0xc];
        uVar35 = puVar4[0xd];
        puVar3[0xc] = uVar36;
        puVar3[0xd] = uVar35;
        uVar35 = puVar4[0xe];
        uVar32 = puVar4[0xf];
        puVar3[0xe] = uVar35;
        puVar3[0xf] = uVar32;
        uVar32 = puVar4[0x10];
        puVar3[0x10] = uVar32;
        lVar17 = 0;
        func_0x000100b91d00();
        lVar26 = (long)*(int *)(lVar17 + 0x3c);
        lVar18 = 0;
        __s10Foundation4UUIDVMa();
        lVar22 = *(long *)(lVar18 + -8);
        pcVar23 = *(code **)(lVar22 + 0x30);
        _swift_bridgeObjectRetain(lVar25);
        _swift_bridgeObjectRetain(lVar21);
        _swift_bridgeObjectRetain(uVar8);
        _swift_bridgeObjectRetain(uVar9);
        _swift_bridgeObjectRetain(uVar20);
        _swift_bridgeObjectRetain(uVar29);
        _swift_bridgeObjectRetain(uVar31);
        _swift_bridgeObjectRetain(uVar36);
        _swift_bridgeObjectRetain(uVar35);
        _swift_bridgeObjectRetain(uVar32);
        lVar25 = (long)puVar4 + lVar26;
        (*pcVar23)(lVar25,1,lVar18);
        if ((int)lVar25 == 0) {
          (**(code **)(lVar22 + 0x10))((long)puVar3 + lVar26,(long)puVar4 + lVar26,lVar18);
          (**(code **)(lVar22 + 0x38))((long)puVar3 + lVar26,0,1,lVar18);
        }
        else {
          lVar25 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar3 + lVar26,(long)puVar4 + lVar26,
                  *(undefined8 *)(*(long *)(lVar25 + -8) + 0x40));
        }
        lVar21 = (long)*(int *)(lVar17 + 0x40);
        lVar25 = (long)puVar4 + lVar21;
        (*pcVar23)(lVar25,1,lVar18);
        if ((int)lVar25 == 0) {
          (**(code **)(lVar22 + 0x10))((long)puVar3 + lVar21,(long)puVar4 + lVar21,lVar18);
          (**(code **)(lVar22 + 0x38))((long)puVar3 + lVar21,0,1,lVar18);
        }
        else {
          lVar25 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar3 + lVar21,(long)puVar4 + lVar21,
                  *(undefined8 *)(*(long *)(lVar25 + -8) + 0x40));
        }
        lVar21 = (long)*(int *)(lVar17 + 0x44);
        lVar25 = (long)puVar4 + lVar21;
        (*pcVar23)(lVar25,1,lVar18);
        if ((int)lVar25 == 0) {
          (**(code **)(lVar22 + 0x10))((long)puVar3 + lVar21,(long)puVar4 + lVar21,lVar18);
          (**(code **)(lVar22 + 0x38))((long)puVar3 + lVar21,0,1,lVar18);
        }
        else {
          lVar25 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar3 + lVar21,(long)puVar4 + lVar21,
                  *(undefined8 *)(*(long *)(lVar25 + -8) + 0x40));
        }
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x48)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x48));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x4c)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x4c));
        uVar20 = *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x50));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x50)) = uVar20;
        uVar29 = *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x54));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x54)) = uVar29;
        uVar31 = *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x58));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x58)) = uVar31;
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x5c));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x5c));
        lVar25 = puVar6[1];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar20);
        _swift_bridgeObjectRetain(uVar29);
        _swift_bridgeObjectRetain(uVar31);
        if (lVar25 == 1) {
          uVar20 = puVar6[0xc];
          uVar31 = puVar6[0xf];
          uVar29 = puVar6[0xe];
          puVar5[0xd] = puVar6[0xd];
          puVar5[0xc] = uVar20;
          puVar5[0xf] = uVar31;
          puVar5[0xe] = uVar29;
          uVar20 = puVar6[0x10];
          uVar31 = puVar6[0x13];
          uVar29 = puVar6[0x12];
          puVar5[0x11] = puVar6[0x11];
          puVar5[0x10] = uVar20;
          puVar5[0x13] = uVar31;
          puVar5[0x12] = uVar29;
          uVar20 = puVar6[4];
          uVar31 = puVar6[7];
          uVar29 = puVar6[6];
          puVar5[5] = puVar6[5];
          puVar5[4] = uVar20;
          puVar5[7] = uVar31;
          puVar5[6] = uVar29;
          uVar20 = puVar6[8];
          uVar31 = puVar6[0xb];
          uVar29 = puVar6[10];
          puVar5[9] = puVar6[9];
          puVar5[8] = uVar20;
          puVar5[0xb] = uVar31;
          puVar5[10] = uVar29;
          uVar20 = *puVar6;
          uVar31 = puVar6[3];
          uVar29 = puVar6[2];
          puVar5[1] = puVar6[1];
          *puVar5 = uVar20;
          puVar5[3] = uVar31;
          puVar5[2] = uVar29;
        }
        else {
          *puVar5 = *puVar6;
          puVar5[1] = lVar25;
          uVar20 = puVar6[3];
          puVar5[2] = puVar6[2];
          puVar5[3] = uVar20;
          uVar29 = puVar6[5];
          puVar5[4] = puVar6[4];
          puVar5[5] = uVar29;
          uVar31 = puVar6[7];
          puVar5[6] = puVar6[6];
          puVar5[7] = uVar31;
          uVar36 = puVar6[9];
          puVar5[8] = puVar6[8];
          puVar5[9] = uVar36;
          *(undefined1 *)(puVar5 + 10) = *(undefined1 *)(puVar6 + 10);
          uVar35 = puVar6[0xb];
          puVar5[0xc] = puVar6[0xc];
          puVar5[0xb] = uVar35;
          lVar21 = puVar6[0x12];
          _swift_bridgeObjectRetain(lVar25);
          _swift_bridgeObjectRetain(uVar20);
          _swift_bridgeObjectRetain(uVar29);
          _swift_bridgeObjectRetain(uVar31);
          _swift_bridgeObjectRetain(uVar36);
          if (lVar21 == 0) {
            uVar20 = puVar6[0xd];
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xd] = uVar20;
            uVar20 = puVar6[0xf];
            puVar5[0x10] = puVar6[0x10];
            puVar5[0xf] = uVar20;
            uVar20 = puVar6[0x11];
            puVar5[0x12] = puVar6[0x12];
            puVar5[0x11] = uVar20;
            puVar5[0x13] = puVar6[0x13];
          }
          else {
            uVar20 = puVar6[0xe];
            puVar5[0xd] = puVar6[0xd];
            puVar5[0xe] = uVar20;
            uVar20 = puVar6[0x10];
            puVar5[0xf] = puVar6[0xf];
            puVar5[0x10] = uVar20;
            puVar5[0x11] = puVar6[0x11];
            puVar5[0x12] = lVar21;
            puVar5[0x13] = puVar6[0x13];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar20);
            _swift_bridgeObjectRetain(lVar21);
          }
        }
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x60)) =
             *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x60));
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 100));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 100));
        lVar25 = puVar6[1];
        if (lVar25 == 1) {
          uVar20 = *puVar6;
          uVar31 = puVar6[3];
          uVar29 = puVar6[2];
          puVar5[1] = puVar6[1];
          *puVar5 = uVar20;
          puVar5[3] = uVar31;
          puVar5[2] = uVar29;
          puVar5[4] = puVar6[4];
        }
        else {
          *puVar5 = *puVar6;
          puVar5[1] = lVar25;
          puVar5[2] = puVar6[2];
          *(undefined1 *)(puVar5 + 3) = *(undefined1 *)(puVar6 + 3);
          *(undefined2 *)((long)puVar5 + 0x19) = *(undefined2 *)((long)puVar6 + 0x19);
          puVar5[4] = puVar6[4];
          _swift_bridgeObjectRetain();
        }
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x68));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x68));
        if (puVar6[0x27] == 0) {
          _memcpy(puVar5,puVar6,0x160);
        }
        else {
          uVar20 = *puVar6;
          puVar5[1] = puVar6[1];
          *puVar5 = uVar20;
          uVar20 = puVar6[2];
          uVar29 = puVar6[3];
          puVar5[2] = uVar20;
          puVar5[3] = uVar29;
          uVar28 = puVar6[4];
          puVar5[4] = uVar28;
          uVar29 = puVar6[5];
          puVar5[6] = puVar6[6];
          puVar5[5] = uVar29;
          uVar29 = puVar6[7];
          uVar31 = puVar6[8];
          puVar5[7] = uVar29;
          puVar5[8] = uVar31;
          *(undefined2 *)(puVar5 + 9) = *(undefined2 *)(puVar6 + 9);
          *(undefined1 *)((long)puVar5 + 0x4a) = *(undefined1 *)((long)puVar6 + 0x4a);
          uVar31 = puVar6[0xb];
          puVar5[10] = puVar6[10];
          puVar5[0xb] = uVar31;
          uVar24 = puVar6[0xc];
          puVar5[0xc] = uVar24;
          *(undefined1 *)(puVar5 + 0xd) = *(undefined1 *)(puVar6 + 0xd);
          uVar36 = puVar6[0xe];
          puVar5[0xf] = puVar6[0xf];
          puVar5[0xe] = uVar36;
          *(undefined1 *)(puVar5 + 0x10) = *(undefined1 *)(puVar6 + 0x10);
          uVar36 = puVar6[0x12];
          puVar5[0x11] = puVar6[0x11];
          puVar5[0x12] = uVar36;
          uVar35 = puVar6[0x14];
          puVar5[0x13] = puVar6[0x13];
          puVar5[0x14] = uVar35;
          uVar8 = puVar6[0x16];
          puVar5[0x15] = puVar6[0x15];
          puVar5[0x16] = uVar8;
          uVar9 = puVar6[0x18];
          puVar5[0x17] = puVar6[0x17];
          puVar5[0x18] = uVar9;
          uVar32 = puVar6[0x1a];
          puVar5[0x19] = puVar6[0x19];
          puVar5[0x1a] = uVar32;
          uVar37 = puVar6[0x1b];
          puVar5[0x1c] = puVar6[0x1c];
          puVar5[0x1b] = uVar37;
          uVar33 = puVar6[0x1d];
          puVar5[0x1d] = uVar33;
          *(undefined1 *)(puVar5 + 0x1e) = *(undefined1 *)(puVar6 + 0x1e);
          *(undefined1 *)((long)puVar5 + 0xf1) = *(undefined1 *)((long)puVar6 + 0xf1);
          *(undefined1 *)((long)puVar5 + 0xf2) = *(undefined1 *)((long)puVar6 + 0xf2);
          uVar37 = puVar6[0x20];
          puVar5[0x1f] = puVar6[0x1f];
          puVar5[0x20] = uVar37;
          uVar10 = puVar6[0x22];
          puVar5[0x21] = puVar6[0x21];
          puVar5[0x22] = uVar10;
          uVar11 = puVar6[0x24];
          puVar5[0x23] = puVar6[0x23];
          puVar5[0x24] = uVar11;
          uVar12 = puVar6[0x26];
          puVar5[0x25] = puVar6[0x25];
          puVar5[0x26] = uVar12;
          uVar30 = puVar6[0x27];
          puVar5[0x27] = uVar30;
          uVar38 = puVar6[0x28];
          puVar5[0x29] = puVar6[0x29];
          puVar5[0x28] = uVar38;
          uVar38 = puVar6[0x2b];
          puVar5[0x2a] = puVar6[0x2a];
          puVar5[0x2b] = uVar38;
          _swift_bridgeObjectRetain(uVar20);
          _swift_bridgeObjectRetain(uVar28);
          _swift_bridgeObjectRetain(uVar29);
          _swift_bridgeObjectRetain(uVar31);
          _swift_bridgeObjectRetain(uVar24);
          _swift_bridgeObjectRetain(uVar36);
          _swift_bridgeObjectRetain(uVar35);
          _swift_bridgeObjectRetain(uVar8);
          _swift_bridgeObjectRetain(uVar9);
          _swift_bridgeObjectRetain(uVar32);
          _swift_bridgeObjectRetain(uVar33);
          _swift_bridgeObjectRetain(uVar37);
          _swift_bridgeObjectRetain(uVar10);
          _swift_bridgeObjectRetain(uVar11);
          _swift_bridgeObjectRetain(uVar12);
          _swift_bridgeObjectRetain(uVar30);
        }
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x6c));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x6c));
        uVar27 = puVar6[1];
        if (uVar27 >> 0x3c < 0xf) {
          uVar20 = *puVar6;
          func_0x00010006c00c(uVar20,uVar27);
          *puVar5 = uVar20;
          puVar5[1] = uVar27;
        }
        else {
          uVar20 = *puVar6;
          puVar5[1] = puVar6[1];
          *puVar5 = uVar20;
        }
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x70)) =
             *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x70));
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x74));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x74));
        uVar20 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar20;
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x78));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x78));
        uVar20 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar20;
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x7c));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x7c));
        uVar29 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar29;
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x80));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x80));
        uVar27 = puVar6[1];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar20);
        _swift_bridgeObjectRetain(uVar29);
        if (uVar27 >> 0x3c < 0xf) {
          uVar20 = *puVar6;
          func_0x00010006c00c(uVar20,uVar27);
          *puVar5 = uVar20;
          puVar5[1] = uVar27;
        }
        else {
          uVar20 = *puVar6;
          puVar5[1] = puVar6[1];
          *puVar5 = uVar20;
        }
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x84));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x84));
        lVar25 = 0;
        func_0x000100b91fbc();
        lVar21 = *(long *)(lVar25 + -8);
        puVar19 = puVar6;
        (**(code **)(lVar21 + 0x30))(puVar6,1,lVar25);
        if ((int)puVar19 == 0) {
          uVar20 = puVar6[1];
          *puVar5 = *puVar6;
          puVar5[1] = uVar20;
          uVar20 = puVar6[2];
          uVar31 = puVar6[5];
          uVar29 = puVar6[4];
          puVar5[3] = puVar6[3];
          puVar5[2] = uVar20;
          puVar5[5] = uVar31;
          puVar5[4] = uVar29;
          uVar20 = puVar6[6];
          uVar29 = puVar6[7];
          puVar5[6] = uVar20;
          puVar5[7] = uVar29;
          uVar29 = puVar6[8];
          puVar5[8] = uVar29;
          lVar34 = (long)*(int *)(lVar25 + 0x28);
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar20);
          _swift_bridgeObjectRetain(uVar29);
          lVar26 = (long)puVar6 + lVar34;
          (*pcVar23)(lVar26,1,lVar18);
          if ((int)lVar26 == 0) {
            (**(code **)(lVar22 + 0x10))((long)puVar5 + lVar34,(long)puVar6 + lVar34,lVar18);
            (**(code **)(lVar22 + 0x38))((long)puVar5 + lVar34,0,1,lVar18);
          }
          else {
            lVar26 = 0x112d3bc20;
            func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
            _memcpy((long)puVar5 + lVar34,(long)puVar6 + lVar34,
                    *(undefined8 *)(*(long *)(lVar26 + -8) + 0x40));
          }
          puVar19 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar25 + 0x2c));
          puVar7 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x2c));
          uVar20 = puVar7[1];
          *puVar19 = *puVar7;
          puVar19[1] = uVar20;
          puVar19 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar25 + 0x30));
          puVar7 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x30));
          uVar20 = puVar7[1];
          *puVar19 = *puVar7;
          puVar19[1] = uVar20;
          lVar34 = (long)*(int *)(lVar25 + 0x34);
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar20);
          lVar26 = (long)puVar6 + lVar34;
          (*pcVar23)(lVar26,1,lVar18);
          if ((int)lVar26 == 0) {
            (**(code **)(lVar22 + 0x10))((long)puVar5 + lVar34,(long)puVar6 + lVar34,lVar18);
            (**(code **)(lVar22 + 0x38))((long)puVar5 + lVar34,0,1,lVar18);
          }
          else {
            lVar18 = 0x112d3bc20;
            func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
            _memcpy((long)puVar5 + lVar34,(long)puVar6 + lVar34,
                    *(undefined8 *)(*(long *)(lVar18 + -8) + 0x40));
          }
          puVar19 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar25 + 0x38));
          puVar7 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x38));
          uVar20 = puVar7[1];
          *puVar19 = *puVar7;
          puVar19[1] = uVar20;
          puVar19 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar25 + 0x3c));
          puVar6 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar25 + 0x3c));
          uVar20 = puVar6[1];
          *puVar19 = *puVar6;
          puVar19[1] = uVar20;
          pcVar23 = *(code **)(lVar21 + 0x38);
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar20);
          (*pcVar23)(puVar5,0,1,lVar25);
        }
        else {
          lVar25 = 0x112db39a8;
          func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
          _memcpy(puVar5,puVar6,*(undefined8 *)(*(long *)(lVar25 + -8) + 0x40));
        }
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x88));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x88));
        lVar25 = puVar6[1];
        if (lVar25 == 0) {
          uVar20 = puVar6[0x10];
          uVar31 = puVar6[0x13];
          uVar29 = puVar6[0x12];
          puVar5[0x11] = puVar6[0x11];
          puVar5[0x10] = uVar20;
          puVar5[0x13] = uVar31;
          puVar5[0x12] = uVar29;
          *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
          uVar20 = puVar6[8];
          uVar31 = puVar6[0xb];
          uVar29 = puVar6[10];
          puVar5[9] = puVar6[9];
          puVar5[8] = uVar20;
          puVar5[0xb] = uVar31;
          puVar5[10] = uVar29;
          uVar31 = puVar6[0xc];
          uVar29 = puVar6[0xf];
          uVar20 = puVar6[0xe];
          puVar5[0xd] = puVar6[0xd];
          puVar5[0xc] = uVar31;
          puVar5[0xf] = uVar29;
          puVar5[0xe] = uVar20;
          uVar20 = *puVar6;
          uVar31 = puVar6[3];
          uVar29 = puVar6[2];
          puVar5[1] = puVar6[1];
          *puVar5 = uVar20;
          puVar5[3] = uVar31;
          puVar5[2] = uVar29;
          uVar31 = puVar6[4];
          uVar29 = puVar6[7];
          uVar20 = puVar6[6];
          puVar5[5] = puVar6[5];
          puVar5[4] = uVar31;
          puVar5[7] = uVar29;
          puVar5[6] = uVar20;
        }
        else {
          *puVar5 = *puVar6;
          puVar5[1] = lVar25;
          lVar25 = puVar6[8];
          _swift_bridgeObjectRetain();
          if (lVar25 == 1) {
            uVar20 = puVar6[2];
            uVar31 = puVar6[5];
            uVar29 = puVar6[4];
            puVar5[3] = puVar6[3];
            puVar5[2] = uVar20;
            puVar5[5] = uVar31;
            puVar5[4] = uVar29;
            uVar20 = puVar6[6];
            puVar5[7] = puVar6[7];
            puVar5[6] = uVar20;
            puVar5[8] = puVar6[8];
          }
          else {
            lVar18 = puVar6[4];
            if (lVar18 == 1) {
              uVar20 = puVar6[2];
              uVar31 = puVar6[5];
              uVar29 = puVar6[4];
              puVar5[3] = puVar6[3];
              puVar5[2] = uVar20;
              puVar5[5] = uVar31;
              puVar5[4] = uVar29;
              puVar5[6] = puVar6[6];
            }
            else {
              uVar20 = puVar6[2];
              puVar5[3] = puVar6[3];
              puVar5[2] = uVar20;
              uVar20 = puVar6[5];
              uVar29 = puVar6[6];
              puVar5[4] = lVar18;
              puVar5[5] = uVar20;
              puVar5[6] = uVar29;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar29);
            }
            puVar5[7] = puVar6[7];
            puVar5[8] = lVar25;
            _swift_bridgeObjectRetain(lVar25);
          }
          lVar25 = puVar6[0xf];
          if (lVar25 == 1) {
            uVar20 = puVar6[9];
            puVar5[10] = puVar6[10];
            puVar5[9] = uVar20;
            uVar20 = puVar6[0xb];
            puVar5[0xc] = puVar6[0xc];
            puVar5[0xb] = uVar20;
            uVar20 = puVar6[0xd];
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xd] = uVar20;
            puVar5[0xf] = puVar6[0xf];
          }
          else {
            lVar18 = puVar6[0xb];
            if (lVar18 == 1) {
              uVar20 = puVar6[9];
              puVar5[10] = puVar6[10];
              puVar5[9] = uVar20;
              uVar20 = puVar6[0xb];
              puVar5[0xc] = puVar6[0xc];
              puVar5[0xb] = uVar20;
              puVar5[0xd] = puVar6[0xd];
            }
            else {
              uVar20 = puVar6[9];
              puVar5[10] = puVar6[10];
              puVar5[9] = uVar20;
              uVar20 = puVar6[0xc];
              uVar29 = puVar6[0xd];
              puVar5[0xb] = lVar18;
              puVar5[0xc] = uVar20;
              puVar5[0xd] = uVar29;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar29);
            }
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xf] = lVar25;
            _swift_bridgeObjectRetain(lVar25);
          }
          *(undefined2 *)(puVar5 + 0x10) = *(undefined2 *)(puVar6 + 0x10);
          uVar20 = puVar6[0x11];
          puVar5[0x12] = puVar6[0x12];
          puVar5[0x11] = uVar20;
          puVar5[0x13] = puVar6[0x13];
          *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
          _swift_bridgeObjectRetain();
        }
        *(undefined4 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x8c)) =
             *(undefined4 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x8c));
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x90)) =
             *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x90));
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x94));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x94));
        uVar20 = *puVar6;
        uVar31 = puVar6[3];
        uVar29 = puVar6[2];
        puVar5[1] = puVar6[1];
        *puVar5 = uVar20;
        puVar5[3] = uVar31;
        puVar5[2] = uVar29;
        uVar20 = puVar6[4];
        uVar31 = puVar6[7];
        uVar29 = puVar6[6];
        puVar5[5] = puVar6[5];
        puVar5[4] = uVar20;
        puVar5[7] = uVar31;
        puVar5[6] = uVar29;
        uVar31 = puVar6[0xc];
        uVar29 = puVar6[0xf];
        uVar20 = puVar6[0xe];
        puVar5[0xd] = puVar6[0xd];
        puVar5[0xc] = uVar31;
        puVar5[0xf] = uVar29;
        puVar5[0xe] = uVar20;
        uVar31 = puVar6[8];
        uVar29 = puVar6[0xb];
        uVar20 = puVar6[10];
        puVar5[9] = puVar6[9];
        puVar5[8] = uVar31;
        puVar5[0xb] = uVar29;
        puVar5[10] = uVar20;
        uVar20 = *(undefined8 *)((long)puVar6 + 0xa9);
        *(undefined8 *)((long)puVar5 + 0xb1) = *(undefined8 *)((long)puVar6 + 0xb1);
        *(undefined8 *)((long)puVar5 + 0xa9) = uVar20;
        uVar20 = puVar6[0x12];
        uVar31 = puVar6[0x15];
        uVar29 = puVar6[0x14];
        puVar5[0x13] = puVar6[0x13];
        puVar5[0x12] = uVar20;
        puVar5[0x15] = uVar31;
        puVar5[0x14] = uVar29;
        uVar20 = puVar6[0x10];
        puVar5[0x11] = puVar6[0x11];
        puVar5[0x10] = uVar20;
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x98)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x98));
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar17 + 0x9c)) =
             *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar17 + 0x9c));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0xa0)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0xa0));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0xa4)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0xa4));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0xa8)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0xa8));
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0xac));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0xac));
        lVar25 = puVar6[1];
        if (lVar25 == 0) {
          uVar20 = *puVar6;
          uVar31 = puVar6[3];
          uVar29 = puVar6[2];
          puVar5[1] = puVar6[1];
          *puVar5 = uVar20;
          puVar5[3] = uVar31;
          puVar5[2] = uVar29;
        }
        else {
          *puVar5 = *puVar6;
          puVar5[1] = lVar25;
          uVar20 = puVar6[3];
          puVar5[2] = puVar6[2];
          puVar5[3] = uVar20;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar20);
        }
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0xb0)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0xb0));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0xb4)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0xb4));
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0xb8));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0xb8));
        lVar25 = puVar6[1];
        if (lVar25 == 0) {
          uVar20 = puVar6[0x10];
          uVar31 = puVar6[0x13];
          uVar29 = puVar6[0x12];
          puVar5[0x11] = puVar6[0x11];
          puVar5[0x10] = uVar20;
          puVar5[0x13] = uVar31;
          puVar5[0x12] = uVar29;
          *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
          uVar20 = puVar6[8];
          uVar31 = puVar6[0xb];
          uVar29 = puVar6[10];
          puVar5[9] = puVar6[9];
          puVar5[8] = uVar20;
          puVar5[0xb] = uVar31;
          puVar5[10] = uVar29;
          uVar31 = puVar6[0xc];
          uVar29 = puVar6[0xf];
          uVar20 = puVar6[0xe];
          puVar5[0xd] = puVar6[0xd];
          puVar5[0xc] = uVar31;
          puVar5[0xf] = uVar29;
          puVar5[0xe] = uVar20;
          uVar20 = *puVar6;
          uVar31 = puVar6[3];
          uVar29 = puVar6[2];
          puVar5[1] = puVar6[1];
          *puVar5 = uVar20;
          puVar5[3] = uVar31;
          puVar5[2] = uVar29;
          uVar31 = puVar6[4];
          uVar29 = puVar6[7];
          uVar20 = puVar6[6];
          puVar5[5] = puVar6[5];
          puVar5[4] = uVar31;
          puVar5[7] = uVar29;
          puVar5[6] = uVar20;
        }
        else {
          *puVar5 = *puVar6;
          puVar5[1] = lVar25;
          lVar25 = puVar6[8];
          _swift_bridgeObjectRetain();
          if (lVar25 == 1) {
            uVar20 = puVar6[2];
            uVar31 = puVar6[5];
            uVar29 = puVar6[4];
            puVar5[3] = puVar6[3];
            puVar5[2] = uVar20;
            puVar5[5] = uVar31;
            puVar5[4] = uVar29;
            uVar20 = puVar6[6];
            puVar5[7] = puVar6[7];
            puVar5[6] = uVar20;
            puVar5[8] = puVar6[8];
          }
          else {
            lVar18 = puVar6[4];
            if (lVar18 == 1) {
              uVar20 = puVar6[2];
              uVar31 = puVar6[5];
              uVar29 = puVar6[4];
              puVar5[3] = puVar6[3];
              puVar5[2] = uVar20;
              puVar5[5] = uVar31;
              puVar5[4] = uVar29;
              puVar5[6] = puVar6[6];
            }
            else {
              uVar20 = puVar6[2];
              puVar5[3] = puVar6[3];
              puVar5[2] = uVar20;
              uVar20 = puVar6[5];
              uVar29 = puVar6[6];
              puVar5[4] = lVar18;
              puVar5[5] = uVar20;
              puVar5[6] = uVar29;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar29);
            }
            puVar5[7] = puVar6[7];
            puVar5[8] = lVar25;
            _swift_bridgeObjectRetain(lVar25);
          }
          lVar25 = puVar6[0xf];
          if (lVar25 == 1) {
            uVar20 = puVar6[9];
            puVar5[10] = puVar6[10];
            puVar5[9] = uVar20;
            uVar20 = puVar6[0xb];
            puVar5[0xc] = puVar6[0xc];
            puVar5[0xb] = uVar20;
            uVar20 = puVar6[0xd];
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xd] = uVar20;
            puVar5[0xf] = puVar6[0xf];
          }
          else {
            lVar18 = puVar6[0xb];
            if (lVar18 == 1) {
              uVar20 = puVar6[9];
              puVar5[10] = puVar6[10];
              puVar5[9] = uVar20;
              uVar20 = puVar6[0xb];
              puVar5[0xc] = puVar6[0xc];
              puVar5[0xb] = uVar20;
              puVar5[0xd] = puVar6[0xd];
            }
            else {
              uVar20 = puVar6[9];
              puVar5[10] = puVar6[10];
              puVar5[9] = uVar20;
              uVar20 = puVar6[0xc];
              uVar29 = puVar6[0xd];
              puVar5[0xb] = lVar18;
              puVar5[0xc] = uVar20;
              puVar5[0xd] = uVar29;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar29);
            }
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xf] = lVar25;
            _swift_bridgeObjectRetain(lVar25);
          }
          *(undefined2 *)(puVar5 + 0x10) = *(undefined2 *)(puVar6 + 0x10);
          uVar20 = puVar6[0x11];
          puVar5[0x12] = puVar6[0x12];
          puVar5[0x11] = uVar20;
          puVar5[0x13] = puVar6[0x13];
          *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
          _swift_bridgeObjectRetain();
        }
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0xbc));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0xbc));
        lVar25 = puVar6[1];
        if (lVar25 == 0) {
          uVar20 = puVar6[0x10];
          uVar31 = puVar6[0x13];
          uVar29 = puVar6[0x12];
          puVar5[0x11] = puVar6[0x11];
          puVar5[0x10] = uVar20;
          puVar5[0x13] = uVar31;
          puVar5[0x12] = uVar29;
          *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
          uVar20 = puVar6[8];
          uVar31 = puVar6[0xb];
          uVar29 = puVar6[10];
          puVar5[9] = puVar6[9];
          puVar5[8] = uVar20;
          puVar5[0xb] = uVar31;
          puVar5[10] = uVar29;
          uVar31 = puVar6[0xc];
          uVar29 = puVar6[0xf];
          uVar20 = puVar6[0xe];
          puVar5[0xd] = puVar6[0xd];
          puVar5[0xc] = uVar31;
          puVar5[0xf] = uVar29;
          puVar5[0xe] = uVar20;
          uVar20 = *puVar6;
          uVar31 = puVar6[3];
          uVar29 = puVar6[2];
          puVar5[1] = puVar6[1];
          *puVar5 = uVar20;
          puVar5[3] = uVar31;
          puVar5[2] = uVar29;
          uVar31 = puVar6[4];
          uVar29 = puVar6[7];
          uVar20 = puVar6[6];
          puVar5[5] = puVar6[5];
          puVar5[4] = uVar31;
          puVar5[7] = uVar29;
          puVar5[6] = uVar20;
        }
        else {
          *puVar5 = *puVar6;
          puVar5[1] = lVar25;
          lVar25 = puVar6[8];
          _swift_bridgeObjectRetain();
          if (lVar25 == 1) {
            uVar20 = puVar6[2];
            uVar31 = puVar6[5];
            uVar29 = puVar6[4];
            puVar5[3] = puVar6[3];
            puVar5[2] = uVar20;
            puVar5[5] = uVar31;
            puVar5[4] = uVar29;
            uVar20 = puVar6[6];
            puVar5[7] = puVar6[7];
            puVar5[6] = uVar20;
            puVar5[8] = puVar6[8];
          }
          else {
            lVar18 = puVar6[4];
            if (lVar18 == 1) {
              uVar20 = puVar6[2];
              uVar31 = puVar6[5];
              uVar29 = puVar6[4];
              puVar5[3] = puVar6[3];
              puVar5[2] = uVar20;
              puVar5[5] = uVar31;
              puVar5[4] = uVar29;
              puVar5[6] = puVar6[6];
            }
            else {
              uVar20 = puVar6[2];
              puVar5[3] = puVar6[3];
              puVar5[2] = uVar20;
              uVar20 = puVar6[5];
              uVar29 = puVar6[6];
              puVar5[4] = lVar18;
              puVar5[5] = uVar20;
              puVar5[6] = uVar29;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar29);
            }
            puVar5[7] = puVar6[7];
            puVar5[8] = lVar25;
            _swift_bridgeObjectRetain(lVar25);
          }
          lVar25 = puVar6[0xf];
          if (lVar25 == 1) {
            uVar20 = puVar6[9];
            puVar5[10] = puVar6[10];
            puVar5[9] = uVar20;
            uVar20 = puVar6[0xb];
            puVar5[0xc] = puVar6[0xc];
            puVar5[0xb] = uVar20;
            uVar20 = puVar6[0xd];
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xd] = uVar20;
            puVar5[0xf] = puVar6[0xf];
          }
          else {
            lVar18 = puVar6[0xb];
            if (lVar18 == 1) {
              uVar20 = puVar6[9];
              puVar5[10] = puVar6[10];
              puVar5[9] = uVar20;
              uVar20 = puVar6[0xb];
              puVar5[0xc] = puVar6[0xc];
              puVar5[0xb] = uVar20;
              puVar5[0xd] = puVar6[0xd];
            }
            else {
              uVar20 = puVar6[9];
              puVar5[10] = puVar6[10];
              puVar5[9] = uVar20;
              uVar20 = puVar6[0xc];
              uVar29 = puVar6[0xd];
              puVar5[0xb] = lVar18;
              puVar5[0xc] = uVar20;
              puVar5[0xd] = uVar29;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar29);
            }
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xf] = lVar25;
            _swift_bridgeObjectRetain(lVar25);
          }
          *(undefined2 *)(puVar5 + 0x10) = *(undefined2 *)(puVar6 + 0x10);
          uVar20 = puVar6[0x11];
          puVar5[0x12] = puVar6[0x12];
          puVar5[0x11] = uVar20;
          puVar5[0x13] = puVar6[0x13];
          *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
          _swift_bridgeObjectRetain();
        }
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar17 + 0xc0)) =
             *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar17 + 0xc0));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 0xc4)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 0xc4));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar17 + 200)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar17 + 200));
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar17 + 0xcc)) =
             *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar17 + 0xcc));
        *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar16 + 0x1c)) =
             *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar16 + 0x1c));
        *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar16 + 0x20)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar16 + 0x20));
        uVar20 = 4;
      }
    }
    else if (iVar14 < 10) {
      if (iVar14 == 5) {
        lVar25 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = lVar25;
        *(char *)(param_1 + 2) = (char)param_2[2];
        _swift_bridgeObjectRetain();
        uVar20 = 5;
      }
      else {
        if (iVar14 != 6) goto LAB_1042de25c;
        lVar25 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = lVar25;
        *(short *)(param_1 + 2) = (short)param_2[2];
        _swift_bridgeObjectRetain();
        uVar20 = 6;
      }
    }
    else if (iVar14 == 10) {
      *(char *)param_1 = (char)*param_2;
      lVar25 = param_2[2];
      param_1[1] = param_2[1];
      param_1[2] = lVar25;
      _swift_bridgeObjectRetain();
      uVar20 = 10;
    }
    else {
      if (iVar14 != 0xb) goto LAB_1042de25c;
      *(char *)param_1 = (char)*param_2;
      lVar25 = param_2[2];
      param_1[1] = param_2[1];
      param_1[2] = lVar25;
      _swift_bridgeObjectRetain();
      uVar20 = 0xb;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar20);
  }
  else {
    lVar25 = *param_2;
    *param_1 = lVar25;
    uVar27 = (ulong)uVar13 & 0xff;
    param_1 = (long *)(lVar25 + (uVar27 + 0x10 & (uVar27 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1042defd8; end: 1042df5b7;  */

void FUN_1042defd8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  code *pcVar9;
  
  lVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar1 = (int)lVar2;
  if (iVar1 < 5) {
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
        puVar7 = (undefined8 *)(param_1 + 0x18);
        goto LAB_1042df59c;
      }
      if (iVar1 != 2) {
        return;
      }
    }
    else if (iVar1 != 3) {
      if (iVar1 != 4) {
        return;
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
      lVar2 = 0;
      func_0x0001042e769c();
      param_1 = param_1 + *(int *)(lVar2 + 0x24);
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
      lVar2 = 0;
      func_0x0001042e75b8();
      param_1 = param_1 + *(int *)(lVar2 + 0x18);
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x50));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x70));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x80));
      lVar3 = 0;
      func_0x000100b91d00();
      iVar1 = *(int *)(lVar3 + 0x3c);
      lVar4 = 0;
      __s10Foundation4UUIDVMa();
      lVar8 = *(long *)(lVar4 + -8);
      pcVar9 = *(code **)(lVar8 + 0x30);
      lVar2 = param_1 + iVar1;
      (*pcVar9)(lVar2,1,lVar4);
      if ((int)lVar2 == 0) {
        (**(code **)(lVar8 + 8))(param_1 + iVar1,lVar4);
      }
      iVar1 = *(int *)(lVar3 + 0x40);
      lVar2 = param_1 + iVar1;
      (*pcVar9)(lVar2,1,lVar4);
      if ((int)lVar2 == 0) {
        (**(code **)(lVar8 + 8))(param_1 + iVar1,lVar4);
      }
      iVar1 = *(int *)(lVar3 + 0x44);
      lVar2 = param_1 + iVar1;
      (*pcVar9)(lVar2,1,lVar4);
      if ((int)lVar2 == 0) {
        (**(code **)(lVar8 + 8))(param_1 + iVar1,lVar4);
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x4c)));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x50)));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x54)));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x58)));
      lVar2 = param_1 + *(int *)(lVar3 + 0x5c);
      if (*(long *)(lVar2 + 8) != 1) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x18));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x28));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x38));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x48));
        if (*(long *)(lVar2 + 0x90) != 0) {
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x70));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x80));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x90));
        }
      }
      if (*(long *)(param_1 + *(int *)(lVar3 + 100) + 8) != 1) {
        _swift_bridgeObjectRelease();
      }
      lVar2 = param_1 + *(int *)(lVar3 + 0x68);
      if (*(long *)(lVar2 + 0x138) != 0) {
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x10));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x20));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x38));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x60));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x90));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0xa0));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0xb0));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0xc0));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0xd0));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0xe8));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x100));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x110));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x120));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x130));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x138));
      }
      puVar7 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x6c));
      if ((ulong)puVar7[1] >> 0x3c < 0xf) {
        func_0x00010006c090(*puVar7);
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x74) + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x78) + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x7c) + 8));
      puVar7 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x80));
      if ((ulong)puVar7[1] >> 0x3c < 0xf) {
        func_0x00010006c090(*puVar7);
      }
      lVar2 = param_1 + *(int *)(lVar3 + 0x84);
      lVar5 = 0;
      func_0x000100b91fbc();
      lVar6 = lVar2;
      (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar2,1,lVar5);
      if ((int)lVar6 == 0) {
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x30));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x40));
        iVar1 = *(int *)(lVar5 + 0x28);
        lVar6 = lVar2 + iVar1;
        (*pcVar9)(lVar6,1,lVar4);
        if ((int)lVar6 == 0) {
          (**(code **)(lVar8 + 8))(lVar2 + iVar1,lVar4);
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x2c) + 8));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x30) + 8));
        iVar1 = *(int *)(lVar5 + 0x34);
        lVar6 = lVar2 + iVar1;
        (*pcVar9)(lVar6,1,lVar4);
        if ((int)lVar6 == 0) {
          (**(code **)(lVar8 + 8))(lVar2 + iVar1,lVar4);
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x38) + 8));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x3c) + 8));
      }
      lVar2 = param_1 + *(int *)(lVar3 + 0x88);
      if (*(long *)(lVar2 + 8) != 0) {
        _swift_bridgeObjectRelease();
        lVar4 = *(long *)(lVar2 + 0x40);
        if (lVar4 != 1) {
          if (*(long *)(lVar2 + 0x20) != 1) {
            _swift_bridgeObjectRelease(*(long *)(lVar2 + 0x20));
            _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x30));
            lVar4 = *(long *)(lVar2 + 0x40);
          }
          _swift_bridgeObjectRelease(lVar4);
        }
        lVar4 = *(long *)(lVar2 + 0x78);
        if (lVar4 != 1) {
          if (*(long *)(lVar2 + 0x58) != 1) {
            _swift_bridgeObjectRelease(*(long *)(lVar2 + 0x58));
            _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x68));
            lVar4 = *(long *)(lVar2 + 0x78);
          }
          _swift_bridgeObjectRelease(lVar4);
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x98));
      }
      lVar2 = param_1 + *(int *)(lVar3 + 0xac);
      if (*(long *)(lVar2 + 8) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x18));
      }
      lVar2 = param_1 + *(int *)(lVar3 + 0xb8);
      if (*(long *)(lVar2 + 8) != 0) {
        _swift_bridgeObjectRelease();
        lVar4 = *(long *)(lVar2 + 0x40);
        if (lVar4 != 1) {
          if (*(long *)(lVar2 + 0x20) != 1) {
            _swift_bridgeObjectRelease(*(long *)(lVar2 + 0x20));
            _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x30));
            lVar4 = *(long *)(lVar2 + 0x40);
          }
          _swift_bridgeObjectRelease(lVar4);
        }
        lVar4 = *(long *)(lVar2 + 0x78);
        if (lVar4 != 1) {
          if (*(long *)(lVar2 + 0x58) != 1) {
            _swift_bridgeObjectRelease(*(long *)(lVar2 + 0x58));
            _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x68));
            lVar4 = *(long *)(lVar2 + 0x78);
          }
          _swift_bridgeObjectRelease(lVar4);
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x98));
      }
      param_1 = param_1 + *(int *)(lVar3 + 0xbc);
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      _swift_bridgeObjectRelease();
      lVar2 = *(long *)(param_1 + 0x40);
      if (lVar2 != 1) {
        if (*(long *)(param_1 + 0x20) != 1) {
          _swift_bridgeObjectRelease(*(long *)(param_1 + 0x20));
          _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
          lVar2 = *(long *)(param_1 + 0x40);
        }
        _swift_bridgeObjectRelease(lVar2);
      }
      lVar2 = *(long *)(param_1 + 0x78);
      if (lVar2 != 1) {
        if (*(long *)(param_1 + 0x58) != 1) {
          _swift_bridgeObjectRelease(*(long *)(param_1 + 0x58));
          _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
          lVar2 = *(long *)(param_1 + 0x78);
        }
        _swift_bridgeObjectRelease(lVar2);
      }
      puVar7 = (undefined8 *)(param_1 + 0x98);
      goto LAB_1042df59c;
    }
  }
  else {
    if (9 < iVar1) {
      if ((iVar1 != 10) && (iVar1 != 0xb)) {
        return;
      }
      puVar7 = (undefined8 *)(param_1 + 0x10);
      goto LAB_1042df59c;
    }
    if ((iVar1 != 5) && (iVar1 != 6)) {
      return;
    }
  }
  puVar7 = (undefined8 *)(param_1 + 8);
LAB_1042df59c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*puVar7);
  return;
}



/* Entry: 1042df5b8; end: 1042e2863;  */

undefined8 * FUN_1042df5b8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  code *pcVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  puVar11 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar10 = (int)puVar11;
  if (iVar10 < 5) {
    if (iVar10 < 3) {
      if (iVar10 == 1) {
        uVar18 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = uVar18;
        *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
        uVar18 = param_2[3];
        uVar26 = param_2[4];
        param_1[3] = uVar18;
        param_1[4] = uVar26;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar18);
        uVar18 = 1;
      }
      else {
        if (iVar10 != 2) {
LAB_1042df8c8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__memcpy_11034c658)
                    (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
          return param_1;
        }
        uVar18 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = uVar18;
        *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
        _swift_bridgeObjectRetain();
        uVar18 = 2;
      }
    }
    else if (iVar10 == 3) {
      uVar18 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar18;
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
      _swift_bridgeObjectRetain();
      uVar18 = 3;
    }
    else {
      if (iVar10 != 4) goto LAB_1042df8c8;
      uVar6 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar6;
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
      uVar19 = param_2[3];
      param_1[3] = uVar19;
      uVar18 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = uVar18;
      lVar12 = 0;
      func_0x0001042e769c();
      puVar11 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x24));
      param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar12 + 0x24));
      uVar7 = param_2[1];
      *puVar11 = *param_2;
      puVar11[1] = uVar7;
      uVar34 = param_2[3];
      puVar11[2] = param_2[2];
      puVar11[3] = uVar34;
      lVar13 = 0;
      func_0x0001042e75b8();
      puVar1 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar13 + 0x18));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar13 + 0x18));
      uVar18 = *puVar2;
      uVar28 = puVar2[3];
      uVar26 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar18;
      puVar1[3] = uVar28;
      puVar1[2] = uVar26;
      uVar18 = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar18;
      uVar18 = puVar2[6];
      uVar26 = puVar2[7];
      puVar1[6] = uVar18;
      puVar1[7] = uVar26;
      uVar26 = puVar2[8];
      uVar28 = puVar2[9];
      puVar1[8] = uVar26;
      puVar1[9] = uVar28;
      uVar28 = puVar2[10];
      uVar8 = puVar2[0xb];
      puVar1[10] = uVar28;
      puVar1[0xb] = uVar8;
      uVar8 = puVar2[0xc];
      uVar33 = puVar2[0xd];
      puVar1[0xc] = uVar8;
      puVar1[0xd] = uVar33;
      uVar33 = puVar2[0xe];
      uVar30 = puVar2[0xf];
      puVar1[0xe] = uVar33;
      puVar1[0xf] = uVar30;
      uVar30 = puVar2[0x10];
      puVar1[0x10] = uVar30;
      lVar14 = 0;
      func_0x000100b91d00();
      lVar31 = (long)*(int *)(lVar14 + 0x3c);
      lVar15 = 0;
      __s10Foundation4UUIDVMa();
      lVar20 = *(long *)(lVar15 + -8);
      pcVar27 = *(code **)(lVar20 + 0x30);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar34);
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar26);
      _swift_bridgeObjectRetain(uVar28);
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar33);
      _swift_bridgeObjectRetain(uVar30);
      lVar12 = (long)puVar2 + lVar31;
      (*pcVar27)(lVar12,1,lVar15);
      if ((int)lVar12 == 0) {
        (**(code **)(lVar20 + 0x10))((long)puVar1 + lVar31,(long)puVar2 + lVar31,lVar15);
        (**(code **)(lVar20 + 0x38))((long)puVar1 + lVar31,0,1,lVar15);
      }
      else {
        lVar12 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar31,(long)puVar2 + lVar31,
                *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
      }
      lVar31 = (long)*(int *)(lVar14 + 0x40);
      lVar12 = (long)puVar2 + lVar31;
      (*pcVar27)(lVar12,1,lVar15);
      if ((int)lVar12 == 0) {
        (**(code **)(lVar20 + 0x10))((long)puVar1 + lVar31,(long)puVar2 + lVar31,lVar15);
        (**(code **)(lVar20 + 0x38))((long)puVar1 + lVar31,0,1,lVar15);
      }
      else {
        lVar12 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar31,(long)puVar2 + lVar31,
                *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
      }
      lVar31 = (long)*(int *)(lVar14 + 0x44);
      lVar12 = (long)puVar2 + lVar31;
      (*pcVar27)(lVar12,1,lVar15);
      if ((int)lVar12 == 0) {
        (**(code **)(lVar20 + 0x10))((long)puVar1 + lVar31,(long)puVar2 + lVar31,lVar15);
        (**(code **)(lVar20 + 0x38))((long)puVar1 + lVar31,0,1,lVar15);
      }
      else {
        lVar12 = 0x112d3bc20;
        func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
        _memcpy((long)puVar1 + lVar31,(long)puVar2 + lVar31,
                *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x48)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x48));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x4c)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x4c));
      uVar18 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x50));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x50)) = uVar18;
      uVar26 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x54));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x54)) = uVar26;
      uVar28 = *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x58));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x58)) = uVar28;
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x5c));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x5c));
      lVar12 = puVar4[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar26);
      _swift_bridgeObjectRetain(uVar28);
      if (lVar12 == 1) {
        uVar18 = puVar4[0xc];
        uVar28 = puVar4[0xf];
        uVar26 = puVar4[0xe];
        puVar3[0xd] = puVar4[0xd];
        puVar3[0xc] = uVar18;
        puVar3[0xf] = uVar28;
        puVar3[0xe] = uVar26;
        uVar18 = puVar4[0x10];
        uVar28 = puVar4[0x13];
        uVar26 = puVar4[0x12];
        puVar3[0x11] = puVar4[0x11];
        puVar3[0x10] = uVar18;
        puVar3[0x13] = uVar28;
        puVar3[0x12] = uVar26;
        uVar18 = puVar4[4];
        uVar28 = puVar4[7];
        uVar26 = puVar4[6];
        puVar3[5] = puVar4[5];
        puVar3[4] = uVar18;
        puVar3[7] = uVar28;
        puVar3[6] = uVar26;
        uVar18 = puVar4[8];
        uVar28 = puVar4[0xb];
        uVar26 = puVar4[10];
        puVar3[9] = puVar4[9];
        puVar3[8] = uVar18;
        puVar3[0xb] = uVar28;
        puVar3[10] = uVar26;
        uVar18 = *puVar4;
        uVar28 = puVar4[3];
        uVar26 = puVar4[2];
        puVar3[1] = puVar4[1];
        *puVar3 = uVar18;
        puVar3[3] = uVar28;
        puVar3[2] = uVar26;
      }
      else {
        *puVar3 = *puVar4;
        puVar3[1] = lVar12;
        uVar18 = puVar4[3];
        puVar3[2] = puVar4[2];
        puVar3[3] = uVar18;
        uVar26 = puVar4[5];
        puVar3[4] = puVar4[4];
        puVar3[5] = uVar26;
        uVar28 = puVar4[7];
        puVar3[6] = puVar4[6];
        puVar3[7] = uVar28;
        uVar8 = puVar4[9];
        puVar3[8] = puVar4[8];
        puVar3[9] = uVar8;
        *(undefined1 *)(puVar3 + 10) = *(undefined1 *)(puVar4 + 10);
        uVar33 = puVar4[0xb];
        puVar3[0xc] = puVar4[0xc];
        puVar3[0xb] = uVar33;
        lVar31 = puVar4[0x12];
        _swift_bridgeObjectRetain(lVar12);
        _swift_bridgeObjectRetain(uVar18);
        _swift_bridgeObjectRetain(uVar26);
        _swift_bridgeObjectRetain(uVar28);
        _swift_bridgeObjectRetain(uVar8);
        if (lVar31 == 0) {
          uVar18 = puVar4[0xd];
          puVar3[0xe] = puVar4[0xe];
          puVar3[0xd] = uVar18;
          uVar18 = puVar4[0xf];
          puVar3[0x10] = puVar4[0x10];
          puVar3[0xf] = uVar18;
          uVar18 = puVar4[0x11];
          puVar3[0x12] = puVar4[0x12];
          puVar3[0x11] = uVar18;
          puVar3[0x13] = puVar4[0x13];
        }
        else {
          uVar18 = puVar4[0xe];
          puVar3[0xd] = puVar4[0xd];
          puVar3[0xe] = uVar18;
          uVar18 = puVar4[0x10];
          puVar3[0xf] = puVar4[0xf];
          puVar3[0x10] = uVar18;
          puVar3[0x11] = puVar4[0x11];
          puVar3[0x12] = lVar31;
          puVar3[0x13] = puVar4[0x13];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar18);
          _swift_bridgeObjectRetain(lVar31);
        }
      }
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x60)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x60));
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 100));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 100));
      lVar12 = puVar4[1];
      if (lVar12 == 1) {
        uVar18 = *puVar4;
        uVar28 = puVar4[3];
        uVar26 = puVar4[2];
        puVar3[1] = puVar4[1];
        *puVar3 = uVar18;
        puVar3[3] = uVar28;
        puVar3[2] = uVar26;
        puVar3[4] = puVar4[4];
      }
      else {
        *puVar3 = *puVar4;
        puVar3[1] = lVar12;
        puVar3[2] = puVar4[2];
        *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar4 + 3);
        *(undefined2 *)((long)puVar3 + 0x19) = *(undefined2 *)((long)puVar4 + 0x19);
        puVar3[4] = puVar4[4];
        _swift_bridgeObjectRetain();
      }
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x68));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x68));
      if (puVar4[0x27] == 0) {
        _memcpy(puVar3,puVar4,0x160);
      }
      else {
        uVar18 = *puVar4;
        puVar3[1] = puVar4[1];
        *puVar3 = uVar18;
        uVar18 = puVar4[2];
        uVar26 = puVar4[3];
        puVar3[2] = uVar18;
        puVar3[3] = uVar26;
        uVar21 = puVar4[4];
        puVar3[4] = uVar21;
        uVar26 = puVar4[5];
        puVar3[6] = puVar4[6];
        puVar3[5] = uVar26;
        uVar23 = puVar4[7];
        uVar26 = puVar4[8];
        puVar3[7] = uVar23;
        puVar3[8] = uVar26;
        *(undefined2 *)(puVar3 + 9) = *(undefined2 *)(puVar4 + 9);
        *(undefined1 *)((long)puVar3 + 0x4a) = *(undefined1 *)((long)puVar4 + 0x4a);
        uVar26 = puVar4[0xb];
        puVar3[10] = puVar4[10];
        puVar3[0xb] = uVar26;
        uVar22 = puVar4[0xc];
        puVar3[0xc] = uVar22;
        *(undefined1 *)(puVar3 + 0xd) = *(undefined1 *)(puVar4 + 0xd);
        uVar28 = puVar4[0xe];
        puVar3[0xf] = puVar4[0xf];
        puVar3[0xe] = uVar28;
        *(undefined1 *)(puVar3 + 0x10) = *(undefined1 *)(puVar4 + 0x10);
        uVar28 = puVar4[0x12];
        puVar3[0x11] = puVar4[0x11];
        puVar3[0x12] = uVar28;
        uVar8 = puVar4[0x14];
        puVar3[0x13] = puVar4[0x13];
        puVar3[0x14] = uVar8;
        uVar33 = puVar4[0x16];
        puVar3[0x15] = puVar4[0x15];
        puVar3[0x16] = uVar33;
        uVar6 = puVar4[0x18];
        puVar3[0x17] = puVar4[0x17];
        puVar3[0x18] = uVar6;
        uVar7 = puVar4[0x1a];
        puVar3[0x19] = puVar4[0x19];
        puVar3[0x1a] = uVar7;
        uVar34 = puVar4[0x1b];
        puVar3[0x1c] = puVar4[0x1c];
        puVar3[0x1b] = uVar34;
        uVar32 = puVar4[0x1d];
        puVar3[0x1d] = uVar32;
        *(undefined1 *)(puVar3 + 0x1e) = *(undefined1 *)(puVar4 + 0x1e);
        *(undefined1 *)((long)puVar3 + 0xf1) = *(undefined1 *)((long)puVar4 + 0xf1);
        *(undefined1 *)((long)puVar3 + 0xf2) = *(undefined1 *)((long)puVar4 + 0xf2);
        uVar34 = puVar4[0x20];
        puVar3[0x1f] = puVar4[0x1f];
        puVar3[0x20] = uVar34;
        uVar30 = puVar4[0x22];
        puVar3[0x21] = puVar4[0x21];
        puVar3[0x22] = uVar30;
        uVar19 = puVar4[0x24];
        puVar3[0x23] = puVar4[0x23];
        puVar3[0x24] = uVar19;
        uVar9 = puVar4[0x26];
        puVar3[0x25] = puVar4[0x25];
        puVar3[0x26] = uVar9;
        uVar25 = puVar4[0x27];
        puVar3[0x27] = uVar25;
        uVar35 = puVar4[0x28];
        puVar3[0x29] = puVar4[0x29];
        puVar3[0x28] = uVar35;
        uVar35 = puVar4[0x2b];
        puVar3[0x2a] = puVar4[0x2a];
        puVar3[0x2b] = uVar35;
        _swift_bridgeObjectRetain(uVar18);
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(uVar26);
        _swift_bridgeObjectRetain(uVar22);
        _swift_bridgeObjectRetain(uVar28);
        _swift_bridgeObjectRetain(uVar8);
        _swift_bridgeObjectRetain(uVar33);
        _swift_bridgeObjectRetain(uVar6);
        _swift_bridgeObjectRetain(uVar7);
        _swift_bridgeObjectRetain(uVar32);
        _swift_bridgeObjectRetain(uVar34);
        _swift_bridgeObjectRetain(uVar30);
        _swift_bridgeObjectRetain(uVar19);
        _swift_bridgeObjectRetain(uVar9);
        _swift_bridgeObjectRetain(uVar25);
      }
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x6c));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x6c));
      uVar24 = puVar4[1];
      if (uVar24 >> 0x3c < 0xf) {
        uVar18 = *puVar4;
        func_0x00010006c00c(uVar18,uVar24);
        *puVar3 = uVar18;
        puVar3[1] = uVar24;
      }
      else {
        uVar18 = *puVar4;
        puVar3[1] = puVar4[1];
        *puVar3 = uVar18;
      }
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x70)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x70));
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x74));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x74));
      uVar18 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar18;
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x78));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x78));
      uVar18 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar18;
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x7c));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x7c));
      uVar26 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar26;
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x80));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x80));
      uVar24 = puVar4[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar26);
      if (uVar24 >> 0x3c < 0xf) {
        uVar18 = *puVar4;
        func_0x00010006c00c(uVar18,uVar24);
        *puVar3 = uVar18;
        puVar3[1] = uVar24;
      }
      else {
        uVar18 = *puVar4;
        puVar3[1] = puVar4[1];
        *puVar3 = uVar18;
      }
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x84));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x84));
      lVar12 = 0;
      func_0x000100b91fbc();
      lVar31 = *(long *)(lVar12 + -8);
      puVar16 = puVar4;
      (**(code **)(lVar31 + 0x30))(puVar4,1,lVar12);
      if ((int)puVar16 == 0) {
        uVar18 = puVar4[1];
        *puVar3 = *puVar4;
        puVar3[1] = uVar18;
        uVar18 = puVar4[2];
        uVar28 = puVar4[5];
        uVar26 = puVar4[4];
        puVar3[3] = puVar4[3];
        puVar3[2] = uVar18;
        puVar3[5] = uVar28;
        puVar3[4] = uVar26;
        uVar18 = puVar4[6];
        uVar26 = puVar4[7];
        puVar3[6] = uVar18;
        puVar3[7] = uVar26;
        uVar26 = puVar4[8];
        puVar3[8] = uVar26;
        lVar29 = (long)*(int *)(lVar12 + 0x28);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar18);
        _swift_bridgeObjectRetain(uVar26);
        lVar17 = (long)puVar4 + lVar29;
        (*pcVar27)(lVar17,1,lVar15);
        if ((int)lVar17 == 0) {
          (**(code **)(lVar20 + 0x10))((long)puVar3 + lVar29,(long)puVar4 + lVar29,lVar15);
          (**(code **)(lVar20 + 0x38))((long)puVar3 + lVar29,0,1,lVar15);
        }
        else {
          lVar17 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar3 + lVar29,(long)puVar4 + lVar29,
                  *(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
        }
        puVar16 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x2c));
        puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar12 + 0x2c));
        uVar18 = puVar5[1];
        *puVar16 = *puVar5;
        puVar16[1] = uVar18;
        puVar16 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x30));
        puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar12 + 0x30));
        uVar18 = puVar5[1];
        *puVar16 = *puVar5;
        puVar16[1] = uVar18;
        lVar29 = (long)*(int *)(lVar12 + 0x34);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar18);
        lVar17 = (long)puVar4 + lVar29;
        (*pcVar27)(lVar17,1,lVar15);
        if ((int)lVar17 == 0) {
          (**(code **)(lVar20 + 0x10))((long)puVar3 + lVar29,(long)puVar4 + lVar29,lVar15);
          (**(code **)(lVar20 + 0x38))((long)puVar3 + lVar29,0,1,lVar15);
        }
        else {
          lVar15 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar3 + lVar29,(long)puVar4 + lVar29,
                  *(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
        }
        puVar16 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x38));
        puVar5 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar12 + 0x38));
        uVar18 = puVar5[1];
        *puVar16 = *puVar5;
        puVar16[1] = uVar18;
        puVar16 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x3c));
        puVar4 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar12 + 0x3c));
        uVar18 = puVar4[1];
        *puVar16 = *puVar4;
        puVar16[1] = uVar18;
        pcVar27 = *(code **)(lVar31 + 0x38);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar18);
        (*pcVar27)(puVar3,0,1,lVar12);
      }
      else {
        lVar12 = 0x112db39a8;
        func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
        _memcpy(puVar3,puVar4,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
      }
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x88));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x88));
      lVar12 = puVar4[1];
      if (lVar12 == 0) {
        uVar18 = puVar4[0x10];
        uVar28 = puVar4[0x13];
        uVar26 = puVar4[0x12];
        puVar3[0x11] = puVar4[0x11];
        puVar3[0x10] = uVar18;
        puVar3[0x13] = uVar28;
        puVar3[0x12] = uVar26;
        *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
        uVar18 = puVar4[8];
        uVar28 = puVar4[0xb];
        uVar26 = puVar4[10];
        puVar3[9] = puVar4[9];
        puVar3[8] = uVar18;
        puVar3[0xb] = uVar28;
        puVar3[10] = uVar26;
        uVar28 = puVar4[0xc];
        uVar26 = puVar4[0xf];
        uVar18 = puVar4[0xe];
        puVar3[0xd] = puVar4[0xd];
        puVar3[0xc] = uVar28;
        puVar3[0xf] = uVar26;
        puVar3[0xe] = uVar18;
        uVar18 = *puVar4;
        uVar28 = puVar4[3];
        uVar26 = puVar4[2];
        puVar3[1] = puVar4[1];
        *puVar3 = uVar18;
        puVar3[3] = uVar28;
        puVar3[2] = uVar26;
        uVar28 = puVar4[4];
        uVar26 = puVar4[7];
        uVar18 = puVar4[6];
        puVar3[5] = puVar4[5];
        puVar3[4] = uVar28;
        puVar3[7] = uVar26;
        puVar3[6] = uVar18;
      }
      else {
        *puVar3 = *puVar4;
        puVar3[1] = lVar12;
        lVar12 = puVar4[8];
        _swift_bridgeObjectRetain();
        if (lVar12 == 1) {
          uVar18 = puVar4[2];
          uVar28 = puVar4[5];
          uVar26 = puVar4[4];
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar18;
          puVar3[5] = uVar28;
          puVar3[4] = uVar26;
          uVar18 = puVar4[6];
          puVar3[7] = puVar4[7];
          puVar3[6] = uVar18;
          puVar3[8] = puVar4[8];
        }
        else {
          lVar15 = puVar4[4];
          if (lVar15 == 1) {
            uVar18 = puVar4[2];
            uVar28 = puVar4[5];
            uVar26 = puVar4[4];
            puVar3[3] = puVar4[3];
            puVar3[2] = uVar18;
            puVar3[5] = uVar28;
            puVar3[4] = uVar26;
            puVar3[6] = puVar4[6];
          }
          else {
            uVar18 = puVar4[2];
            puVar3[3] = puVar4[3];
            puVar3[2] = uVar18;
            uVar18 = puVar4[5];
            uVar26 = puVar4[6];
            puVar3[4] = lVar15;
            puVar3[5] = uVar18;
            puVar3[6] = uVar26;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar26);
          }
          puVar3[7] = puVar4[7];
          puVar3[8] = lVar12;
          _swift_bridgeObjectRetain(lVar12);
        }
        lVar12 = puVar4[0xf];
        if (lVar12 == 1) {
          uVar18 = puVar4[9];
          puVar3[10] = puVar4[10];
          puVar3[9] = uVar18;
          uVar18 = puVar4[0xb];
          puVar3[0xc] = puVar4[0xc];
          puVar3[0xb] = uVar18;
          uVar18 = puVar4[0xd];
          puVar3[0xe] = puVar4[0xe];
          puVar3[0xd] = uVar18;
          puVar3[0xf] = puVar4[0xf];
        }
        else {
          lVar15 = puVar4[0xb];
          if (lVar15 == 1) {
            uVar18 = puVar4[9];
            puVar3[10] = puVar4[10];
            puVar3[9] = uVar18;
            uVar18 = puVar4[0xb];
            puVar3[0xc] = puVar4[0xc];
            puVar3[0xb] = uVar18;
            puVar3[0xd] = puVar4[0xd];
          }
          else {
            uVar18 = puVar4[9];
            puVar3[10] = puVar4[10];
            puVar3[9] = uVar18;
            uVar18 = puVar4[0xc];
            uVar26 = puVar4[0xd];
            puVar3[0xb] = lVar15;
            puVar3[0xc] = uVar18;
            puVar3[0xd] = uVar26;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar26);
          }
          puVar3[0xe] = puVar4[0xe];
          puVar3[0xf] = lVar12;
          _swift_bridgeObjectRetain(lVar12);
        }
        *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
        uVar18 = puVar4[0x11];
        puVar3[0x12] = puVar4[0x12];
        puVar3[0x11] = uVar18;
        puVar3[0x13] = puVar4[0x13];
        *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
        _swift_bridgeObjectRetain();
      }
      *(undefined4 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x8c)) =
           *(undefined4 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x8c));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x90)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x90));
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x94));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x94));
      uVar18 = *puVar4;
      uVar28 = puVar4[3];
      uVar26 = puVar4[2];
      puVar3[1] = puVar4[1];
      *puVar3 = uVar18;
      puVar3[3] = uVar28;
      puVar3[2] = uVar26;
      uVar18 = puVar4[4];
      uVar28 = puVar4[7];
      uVar26 = puVar4[6];
      puVar3[5] = puVar4[5];
      puVar3[4] = uVar18;
      puVar3[7] = uVar28;
      puVar3[6] = uVar26;
      uVar28 = puVar4[0xc];
      uVar26 = puVar4[0xf];
      uVar18 = puVar4[0xe];
      puVar3[0xd] = puVar4[0xd];
      puVar3[0xc] = uVar28;
      puVar3[0xf] = uVar26;
      puVar3[0xe] = uVar18;
      uVar28 = puVar4[8];
      uVar26 = puVar4[0xb];
      uVar18 = puVar4[10];
      puVar3[9] = puVar4[9];
      puVar3[8] = uVar28;
      puVar3[0xb] = uVar26;
      puVar3[10] = uVar18;
      uVar18 = *(undefined8 *)((long)puVar4 + 0xa9);
      *(undefined8 *)((long)puVar3 + 0xb1) = *(undefined8 *)((long)puVar4 + 0xb1);
      *(undefined8 *)((long)puVar3 + 0xa9) = uVar18;
      uVar18 = puVar4[0x12];
      uVar28 = puVar4[0x15];
      uVar26 = puVar4[0x14];
      puVar3[0x13] = puVar4[0x13];
      puVar3[0x12] = uVar18;
      puVar3[0x15] = uVar28;
      puVar3[0x14] = uVar26;
      uVar18 = puVar4[0x10];
      puVar3[0x11] = puVar4[0x11];
      puVar3[0x10] = uVar18;
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x98)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x98));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x9c)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x9c));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0xa0)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0xa0));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0xa4)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0xa4));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0xa8)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0xa8));
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0xac));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0xac));
      lVar12 = puVar4[1];
      if (lVar12 == 0) {
        uVar18 = *puVar4;
        uVar28 = puVar4[3];
        uVar26 = puVar4[2];
        puVar3[1] = puVar4[1];
        *puVar3 = uVar18;
        puVar3[3] = uVar28;
        puVar3[2] = uVar26;
      }
      else {
        *puVar3 = *puVar4;
        puVar3[1] = lVar12;
        uVar18 = puVar4[3];
        puVar3[2] = puVar4[2];
        puVar3[3] = uVar18;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar18);
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0xb0)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0xb0));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0xb4)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0xb4));
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0xb8));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0xb8));
      lVar12 = puVar4[1];
      if (lVar12 == 0) {
        uVar18 = puVar4[0x10];
        uVar28 = puVar4[0x13];
        uVar26 = puVar4[0x12];
        puVar3[0x11] = puVar4[0x11];
        puVar3[0x10] = uVar18;
        puVar3[0x13] = uVar28;
        puVar3[0x12] = uVar26;
        *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
        uVar18 = puVar4[8];
        uVar28 = puVar4[0xb];
        uVar26 = puVar4[10];
        puVar3[9] = puVar4[9];
        puVar3[8] = uVar18;
        puVar3[0xb] = uVar28;
        puVar3[10] = uVar26;
        uVar28 = puVar4[0xc];
        uVar26 = puVar4[0xf];
        uVar18 = puVar4[0xe];
        puVar3[0xd] = puVar4[0xd];
        puVar3[0xc] = uVar28;
        puVar3[0xf] = uVar26;
        puVar3[0xe] = uVar18;
        uVar18 = *puVar4;
        uVar28 = puVar4[3];
        uVar26 = puVar4[2];
        puVar3[1] = puVar4[1];
        *puVar3 = uVar18;
        puVar3[3] = uVar28;
        puVar3[2] = uVar26;
        uVar28 = puVar4[4];
        uVar26 = puVar4[7];
        uVar18 = puVar4[6];
        puVar3[5] = puVar4[5];
        puVar3[4] = uVar28;
        puVar3[7] = uVar26;
        puVar3[6] = uVar18;
      }
      else {
        *puVar3 = *puVar4;
        puVar3[1] = lVar12;
        lVar12 = puVar4[8];
        _swift_bridgeObjectRetain();
        if (lVar12 == 1) {
          uVar18 = puVar4[2];
          uVar28 = puVar4[5];
          uVar26 = puVar4[4];
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar18;
          puVar3[5] = uVar28;
          puVar3[4] = uVar26;
          uVar18 = puVar4[6];
          puVar3[7] = puVar4[7];
          puVar3[6] = uVar18;
          puVar3[8] = puVar4[8];
        }
        else {
          lVar15 = puVar4[4];
          if (lVar15 == 1) {
            uVar18 = puVar4[2];
            uVar28 = puVar4[5];
            uVar26 = puVar4[4];
            puVar3[3] = puVar4[3];
            puVar3[2] = uVar18;
            puVar3[5] = uVar28;
            puVar3[4] = uVar26;
            puVar3[6] = puVar4[6];
          }
          else {
            uVar18 = puVar4[2];
            puVar3[3] = puVar4[3];
            puVar3[2] = uVar18;
            uVar18 = puVar4[5];
            uVar26 = puVar4[6];
            puVar3[4] = lVar15;
            puVar3[5] = uVar18;
            puVar3[6] = uVar26;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar26);
          }
          puVar3[7] = puVar4[7];
          puVar3[8] = lVar12;
          _swift_bridgeObjectRetain(lVar12);
        }
        lVar12 = puVar4[0xf];
        if (lVar12 == 1) {
          uVar18 = puVar4[9];
          puVar3[10] = puVar4[10];
          puVar3[9] = uVar18;
          uVar18 = puVar4[0xb];
          puVar3[0xc] = puVar4[0xc];
          puVar3[0xb] = uVar18;
          uVar18 = puVar4[0xd];
          puVar3[0xe] = puVar4[0xe];
          puVar3[0xd] = uVar18;
          puVar3[0xf] = puVar4[0xf];
        }
        else {
          lVar15 = puVar4[0xb];
          if (lVar15 == 1) {
            uVar18 = puVar4[9];
            puVar3[10] = puVar4[10];
            puVar3[9] = uVar18;
            uVar18 = puVar4[0xb];
            puVar3[0xc] = puVar4[0xc];
            puVar3[0xb] = uVar18;
            puVar3[0xd] = puVar4[0xd];
          }
          else {
            uVar18 = puVar4[9];
            puVar3[10] = puVar4[10];
            puVar3[9] = uVar18;
            uVar18 = puVar4[0xc];
            uVar26 = puVar4[0xd];
            puVar3[0xb] = lVar15;
            puVar3[0xc] = uVar18;
            puVar3[0xd] = uVar26;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar26);
          }
          puVar3[0xe] = puVar4[0xe];
          puVar3[0xf] = lVar12;
          _swift_bridgeObjectRetain(lVar12);
        }
        *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
        uVar18 = puVar4[0x11];
        puVar3[0x12] = puVar4[0x12];
        puVar3[0x11] = uVar18;
        puVar3[0x13] = puVar4[0x13];
        *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
        _swift_bridgeObjectRetain();
      }
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0xbc));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0xbc));
      lVar12 = puVar4[1];
      if (lVar12 == 0) {
        uVar18 = puVar4[0x10];
        uVar28 = puVar4[0x13];
        uVar26 = puVar4[0x12];
        puVar3[0x11] = puVar4[0x11];
        puVar3[0x10] = uVar18;
        puVar3[0x13] = uVar28;
        puVar3[0x12] = uVar26;
        *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
        uVar18 = puVar4[8];
        uVar28 = puVar4[0xb];
        uVar26 = puVar4[10];
        puVar3[9] = puVar4[9];
        puVar3[8] = uVar18;
        puVar3[0xb] = uVar28;
        puVar3[10] = uVar26;
        uVar28 = puVar4[0xc];
        uVar26 = puVar4[0xf];
        uVar18 = puVar4[0xe];
        puVar3[0xd] = puVar4[0xd];
        puVar3[0xc] = uVar28;
        puVar3[0xf] = uVar26;
        puVar3[0xe] = uVar18;
        uVar18 = *puVar4;
        uVar28 = puVar4[3];
        uVar26 = puVar4[2];
        puVar3[1] = puVar4[1];
        *puVar3 = uVar18;
        puVar3[3] = uVar28;
        puVar3[2] = uVar26;
        uVar28 = puVar4[4];
        uVar26 = puVar4[7];
        uVar18 = puVar4[6];
        puVar3[5] = puVar4[5];
        puVar3[4] = uVar28;
        puVar3[7] = uVar26;
        puVar3[6] = uVar18;
      }
      else {
        *puVar3 = *puVar4;
        puVar3[1] = lVar12;
        lVar12 = puVar4[8];
        _swift_bridgeObjectRetain();
        if (lVar12 == 1) {
          uVar18 = puVar4[2];
          uVar28 = puVar4[5];
          uVar26 = puVar4[4];
          puVar3[3] = puVar4[3];
          puVar3[2] = uVar18;
          puVar3[5] = uVar28;
          puVar3[4] = uVar26;
          uVar18 = puVar4[6];
          puVar3[7] = puVar4[7];
          puVar3[6] = uVar18;
          puVar3[8] = puVar4[8];
        }
        else {
          lVar15 = puVar4[4];
          if (lVar15 == 1) {
            uVar18 = puVar4[2];
            uVar28 = puVar4[5];
            uVar26 = puVar4[4];
            puVar3[3] = puVar4[3];
            puVar3[2] = uVar18;
            puVar3[5] = uVar28;
            puVar3[4] = uVar26;
            puVar3[6] = puVar4[6];
          }
          else {
            uVar18 = puVar4[2];
            puVar3[3] = puVar4[3];
            puVar3[2] = uVar18;
            uVar18 = puVar4[5];
            uVar26 = puVar4[6];
            puVar3[4] = lVar15;
            puVar3[5] = uVar18;
            puVar3[6] = uVar26;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar26);
          }
          puVar3[7] = puVar4[7];
          puVar3[8] = lVar12;
          _swift_bridgeObjectRetain(lVar12);
        }
        lVar12 = puVar4[0xf];
        if (lVar12 == 1) {
          uVar18 = puVar4[9];
          puVar3[10] = puVar4[10];
          puVar3[9] = uVar18;
          uVar18 = puVar4[0xb];
          puVar3[0xc] = puVar4[0xc];
          puVar3[0xb] = uVar18;
          uVar18 = puVar4[0xd];
          puVar3[0xe] = puVar4[0xe];
          puVar3[0xd] = uVar18;
          puVar3[0xf] = puVar4[0xf];
        }
        else {
          lVar15 = puVar4[0xb];
          if (lVar15 == 1) {
            uVar18 = puVar4[9];
            puVar3[10] = puVar4[10];
            puVar3[9] = uVar18;
            uVar18 = puVar4[0xb];
            puVar3[0xc] = puVar4[0xc];
            puVar3[0xb] = uVar18;
            puVar3[0xd] = puVar4[0xd];
          }
          else {
            uVar18 = puVar4[9];
            puVar3[10] = puVar4[10];
            puVar3[9] = uVar18;
            uVar18 = puVar4[0xc];
            uVar26 = puVar4[0xd];
            puVar3[0xb] = lVar15;
            puVar3[0xc] = uVar18;
            puVar3[0xd] = uVar26;
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar26);
          }
          puVar3[0xe] = puVar4[0xe];
          puVar3[0xf] = lVar12;
          _swift_bridgeObjectRetain(lVar12);
        }
        *(undefined2 *)(puVar3 + 0x10) = *(undefined2 *)(puVar4 + 0x10);
        uVar18 = puVar4[0x11];
        puVar3[0x12] = puVar4[0x12];
        puVar3[0x11] = uVar18;
        puVar3[0x13] = puVar4[0x13];
        *(undefined1 *)(puVar3 + 0x14) = *(undefined1 *)(puVar4 + 0x14);
        _swift_bridgeObjectRetain();
      }
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar14 + 0xc0)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar14 + 0xc0));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0xc4)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0xc4));
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 200)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 200));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar14 + 0xcc)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar14 + 0xcc));
      *(undefined1 *)((long)puVar11 + (long)*(int *)(lVar13 + 0x1c)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar13 + 0x1c));
      *(undefined8 *)((long)puVar11 + (long)*(int *)(lVar13 + 0x20)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar13 + 0x20));
      uVar18 = 4;
    }
  }
  else if (iVar10 < 10) {
    if (iVar10 == 5) {
      uVar18 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar18;
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
      _swift_bridgeObjectRetain();
      uVar18 = 5;
    }
    else {
      if (iVar10 != 6) goto LAB_1042df8c8;
      uVar18 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar18;
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
      _swift_bridgeObjectRetain();
      uVar18 = 6;
    }
  }
  else if (iVar10 == 10) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    uVar18 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = uVar18;
    _swift_bridgeObjectRetain();
    uVar18 = 10;
  }
  else {
    if (iVar10 != 0xb) goto LAB_1042df8c8;
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    uVar18 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = uVar18;
    _swift_bridgeObjectRetain();
    uVar18 = 0xb;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar18);
  return param_1;
}



/* Entry: 1042e2864; end: 1042e2893;  */

void FUN_1042e2864(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001042e286c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 1042e2894; end: 1042e294f;  */

void FUN_1042e2894(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_80 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_78 = &UNK_10dce7138;
  puStack_70 = &UNK_10dce7150;
  puStack_68 = &UNK_10dce7150;
  lVar1 = 0x13f;
  func_0x0001042e769c();
  if (param_2 < 0x40) {
    lStack_60 = *(long *)(lVar1 + -8) + 0x40;
    puStack_58 = &UNK_10dce7150;
    puStack_50 = &UNK_10dce7168;
    puStack_48 = &UNK_10dce7180;
    puStack_40 = &UNK_10dce7198;
    puStack_38 = &UNK_10dce71b0;
    puStack_30 = &UNK_10dce71c8;
    puStack_28 = &UNK_10dce71c8;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,0xc,&puStack_80);
  }
  return;
}



/* Entry: 1042e2950; end: 1042e3a57;  */

long * FUN_1042e2950(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  code *pcVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulong uVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  
  uVar13 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar13 >> 0x11 & 1) != 0) {
    lVar17 = *param_2;
    *param_1 = lVar17;
    uVar31 = (ulong)uVar13 & 0xff;
    _swift_retain();
    return (long *)(lVar17 + (uVar31 + 0x10 & (uVar31 ^ 0xffffffffffffffff)));
  }
  lVar17 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar17;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  lVar15 = 0;
  FUN_1042dddf8();
  _swift_bridgeObjectRetain(lVar17);
  puVar16 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,lVar15);
  iVar14 = (int)puVar16;
  if (iVar14 < 5) {
    if (iVar14 < 3) {
      if (iVar14 == 1) {
        uVar29 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar29;
        *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(puVar2 + 2);
        uVar29 = puVar2[3];
        uVar33 = puVar2[4];
        puVar1[3] = uVar29;
        puVar1[4] = uVar33;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar29);
        _swift_storeEnumTagMultiPayload(puVar1,lVar15,1);
        goto LAB_1042e3a28;
      }
      if (iVar14 == 2) {
        uVar29 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar29;
        *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
        _swift_bridgeObjectRetain();
        _swift_storeEnumTagMultiPayload(puVar1,lVar15,2);
        goto LAB_1042e3a28;
      }
    }
    else {
      if (iVar14 == 3) {
        uVar29 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar29;
        *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
        _swift_bridgeObjectRetain();
        _swift_storeEnumTagMultiPayload(puVar1,lVar15,3);
        goto LAB_1042e3a28;
      }
      if (iVar14 == 4) {
        uVar8 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar8;
        *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
        uVar23 = puVar2[3];
        puVar1[3] = uVar23;
        uVar29 = puVar2[4];
        puVar1[5] = puVar2[5];
        puVar1[4] = uVar29;
        lVar17 = 0;
        func_0x0001042e769c();
        puVar16 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar17 + 0x24));
        puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar17 + 0x24));
        uVar9 = puVar2[1];
        *puVar16 = *puVar2;
        puVar16[1] = uVar9;
        uVar10 = puVar2[3];
        puVar16[2] = puVar2[2];
        puVar16[3] = uVar10;
        lVar18 = 0;
        func_0x0001042e75b8();
        puVar3 = (undefined8 *)((long)puVar16 + (long)*(int *)(lVar18 + 0x18));
        puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x18));
        uVar29 = *puVar4;
        uVar34 = puVar4[3];
        uVar33 = puVar4[2];
        puVar3[1] = puVar4[1];
        *puVar3 = uVar29;
        puVar3[3] = uVar34;
        puVar3[2] = uVar33;
        uVar29 = puVar4[4];
        puVar3[5] = puVar4[5];
        puVar3[4] = uVar29;
        uVar29 = puVar4[6];
        uVar33 = puVar4[7];
        puVar3[6] = uVar29;
        puVar3[7] = uVar33;
        uVar33 = puVar4[8];
        uVar34 = puVar4[9];
        puVar3[8] = uVar33;
        puVar3[9] = uVar34;
        uVar34 = puVar4[10];
        uVar38 = puVar4[0xb];
        puVar3[10] = uVar34;
        puVar3[0xb] = uVar38;
        uVar38 = puVar4[0xc];
        uVar37 = puVar4[0xd];
        puVar3[0xc] = uVar38;
        puVar3[0xd] = uVar37;
        uVar37 = puVar4[0xe];
        uVar28 = puVar4[0xf];
        puVar3[0xe] = uVar37;
        puVar3[0xf] = uVar28;
        uVar28 = puVar4[0x10];
        puVar3[0x10] = uVar28;
        lVar19 = 0;
        func_0x000100b91d00();
        lVar32 = (long)*(int *)(lVar19 + 0x3c);
        lVar20 = 0;
        __s10Foundation4UUIDVMa();
        lVar24 = *(long *)(lVar20 + -8);
        pcVar25 = *(code **)(lVar24 + 0x30);
        _swift_bridgeObjectRetain(uVar8);
        _swift_bridgeObjectRetain(uVar23);
        _swift_bridgeObjectRetain(uVar9);
        _swift_bridgeObjectRetain(uVar10);
        _swift_bridgeObjectRetain(uVar29);
        _swift_bridgeObjectRetain(uVar33);
        _swift_bridgeObjectRetain(uVar34);
        _swift_bridgeObjectRetain(uVar38);
        _swift_bridgeObjectRetain(uVar37);
        _swift_bridgeObjectRetain(uVar28);
        lVar17 = (long)puVar4 + lVar32;
        (*pcVar25)(lVar17,1,lVar20);
        if ((int)lVar17 == 0) {
          (**(code **)(lVar24 + 0x10))((long)puVar3 + lVar32,(long)puVar4 + lVar32,lVar20);
          (**(code **)(lVar24 + 0x38))((long)puVar3 + lVar32,0,1,lVar20);
        }
        else {
          lVar17 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar3 + lVar32,(long)puVar4 + lVar32,
                  *(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
        }
        lVar32 = (long)*(int *)(lVar19 + 0x40);
        lVar17 = (long)puVar4 + lVar32;
        (*pcVar25)(lVar17,1,lVar20);
        if ((int)lVar17 == 0) {
          (**(code **)(lVar24 + 0x10))((long)puVar3 + lVar32,(long)puVar4 + lVar32,lVar20);
          (**(code **)(lVar24 + 0x38))((long)puVar3 + lVar32,0,1,lVar20);
        }
        else {
          lVar17 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar3 + lVar32,(long)puVar4 + lVar32,
                  *(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
        }
        lVar32 = (long)*(int *)(lVar19 + 0x44);
        lVar17 = (long)puVar4 + lVar32;
        (*pcVar25)(lVar17,1,lVar20);
        if ((int)lVar17 == 0) {
          (**(code **)(lVar24 + 0x10))((long)puVar3 + lVar32,(long)puVar4 + lVar32,lVar20);
          (**(code **)(lVar24 + 0x38))((long)puVar3 + lVar32,0,1,lVar20);
        }
        else {
          lVar17 = 0x112d3bc20;
          func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
          _memcpy((long)puVar3 + lVar32,(long)puVar4 + lVar32,
                  *(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
        }
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x48)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x48));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x4c)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x4c));
        uVar29 = *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x50));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x50)) = uVar29;
        uVar33 = *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x54));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x54)) = uVar33;
        uVar34 = *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x58));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x58)) = uVar34;
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x5c));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x5c));
        lVar17 = puVar6[1];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar29);
        _swift_bridgeObjectRetain(uVar33);
        _swift_bridgeObjectRetain(uVar34);
        if (lVar17 == 1) {
          uVar29 = puVar6[0xc];
          uVar34 = puVar6[0xf];
          uVar33 = puVar6[0xe];
          puVar5[0xd] = puVar6[0xd];
          puVar5[0xc] = uVar29;
          puVar5[0xf] = uVar34;
          puVar5[0xe] = uVar33;
          uVar29 = puVar6[0x10];
          uVar34 = puVar6[0x13];
          uVar33 = puVar6[0x12];
          puVar5[0x11] = puVar6[0x11];
          puVar5[0x10] = uVar29;
          puVar5[0x13] = uVar34;
          puVar5[0x12] = uVar33;
          uVar29 = puVar6[4];
          uVar34 = puVar6[7];
          uVar33 = puVar6[6];
          puVar5[5] = puVar6[5];
          puVar5[4] = uVar29;
          puVar5[7] = uVar34;
          puVar5[6] = uVar33;
          uVar29 = puVar6[8];
          uVar34 = puVar6[0xb];
          uVar33 = puVar6[10];
          puVar5[9] = puVar6[9];
          puVar5[8] = uVar29;
          puVar5[0xb] = uVar34;
          puVar5[10] = uVar33;
          uVar29 = *puVar6;
          uVar34 = puVar6[3];
          uVar33 = puVar6[2];
          puVar5[1] = puVar6[1];
          *puVar5 = uVar29;
          puVar5[3] = uVar34;
          puVar5[2] = uVar33;
        }
        else {
          *puVar5 = *puVar6;
          puVar5[1] = lVar17;
          uVar29 = puVar6[3];
          puVar5[2] = puVar6[2];
          puVar5[3] = uVar29;
          uVar33 = puVar6[5];
          puVar5[4] = puVar6[4];
          puVar5[5] = uVar33;
          uVar34 = puVar6[7];
          puVar5[6] = puVar6[6];
          puVar5[7] = uVar34;
          uVar38 = puVar6[9];
          puVar5[8] = puVar6[8];
          puVar5[9] = uVar38;
          *(undefined1 *)(puVar5 + 10) = *(undefined1 *)(puVar6 + 10);
          uVar37 = puVar6[0xb];
          puVar5[0xc] = puVar6[0xc];
          puVar5[0xb] = uVar37;
          lVar32 = puVar6[0x12];
          _swift_bridgeObjectRetain(lVar17);
          _swift_bridgeObjectRetain(uVar29);
          _swift_bridgeObjectRetain(uVar33);
          _swift_bridgeObjectRetain(uVar34);
          _swift_bridgeObjectRetain(uVar38);
          if (lVar32 == 0) {
            uVar29 = puVar6[0xd];
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xd] = uVar29;
            uVar29 = puVar6[0xf];
            puVar5[0x10] = puVar6[0x10];
            puVar5[0xf] = uVar29;
            uVar29 = puVar6[0x11];
            puVar5[0x12] = puVar6[0x12];
            puVar5[0x11] = uVar29;
            puVar5[0x13] = puVar6[0x13];
          }
          else {
            uVar29 = puVar6[0xe];
            puVar5[0xd] = puVar6[0xd];
            puVar5[0xe] = uVar29;
            uVar29 = puVar6[0x10];
            puVar5[0xf] = puVar6[0xf];
            puVar5[0x10] = uVar29;
            puVar5[0x11] = puVar6[0x11];
            puVar5[0x12] = lVar32;
            puVar5[0x13] = puVar6[0x13];
            _swift_bridgeObjectRetain();
            _swift_bridgeObjectRetain(uVar29);
            _swift_bridgeObjectRetain(lVar32);
          }
        }
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x60)) =
             *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x60));
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 100));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 100));
        lVar17 = puVar6[1];
        if (lVar17 == 1) {
          uVar29 = *puVar6;
          uVar34 = puVar6[3];
          uVar33 = puVar6[2];
          puVar5[1] = puVar6[1];
          *puVar5 = uVar29;
          puVar5[3] = uVar34;
          puVar5[2] = uVar33;
          puVar5[4] = puVar6[4];
        }
        else {
          *puVar5 = *puVar6;
          puVar5[1] = lVar17;
          puVar5[2] = puVar6[2];
          *(undefined1 *)(puVar5 + 3) = *(undefined1 *)(puVar6 + 3);
          *(undefined2 *)((long)puVar5 + 0x19) = *(undefined2 *)((long)puVar6 + 0x19);
          puVar5[4] = puVar6[4];
          _swift_bridgeObjectRetain();
        }
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x68));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x68));
        if (puVar6[0x27] == 0) {
          _memcpy(puVar5,puVar6,0x160);
        }
        else {
          uVar29 = *puVar6;
          puVar5[1] = puVar6[1];
          *puVar5 = uVar29;
          uVar29 = puVar6[2];
          uVar33 = puVar6[3];
          puVar5[2] = uVar29;
          puVar5[3] = uVar33;
          uVar30 = puVar6[4];
          puVar5[4] = uVar30;
          uVar33 = puVar6[5];
          puVar5[6] = puVar6[6];
          puVar5[5] = uVar33;
          uVar33 = puVar6[7];
          uVar34 = puVar6[8];
          puVar5[7] = uVar33;
          puVar5[8] = uVar34;
          *(undefined2 *)(puVar5 + 9) = *(undefined2 *)(puVar6 + 9);
          *(undefined1 *)((long)puVar5 + 0x4a) = *(undefined1 *)((long)puVar6 + 0x4a);
          uVar34 = puVar6[0xb];
          puVar5[10] = puVar6[10];
          puVar5[0xb] = uVar34;
          uVar26 = puVar6[0xc];
          puVar5[0xc] = uVar26;
          *(undefined1 *)(puVar5 + 0xd) = *(undefined1 *)(puVar6 + 0xd);
          uVar38 = puVar6[0xe];
          puVar5[0xf] = puVar6[0xf];
          puVar5[0xe] = uVar38;
          *(undefined1 *)(puVar5 + 0x10) = *(undefined1 *)(puVar6 + 0x10);
          uVar38 = puVar6[0x12];
          puVar5[0x11] = puVar6[0x11];
          puVar5[0x12] = uVar38;
          uVar37 = puVar6[0x14];
          puVar5[0x13] = puVar6[0x13];
          puVar5[0x14] = uVar37;
          uVar8 = puVar6[0x16];
          puVar5[0x15] = puVar6[0x15];
          puVar5[0x16] = uVar8;
          uVar9 = puVar6[0x18];
          puVar5[0x17] = puVar6[0x17];
          puVar5[0x18] = uVar9;
          uVar10 = puVar6[0x1a];
          puVar5[0x19] = puVar6[0x19];
          puVar5[0x1a] = uVar10;
          uVar28 = puVar6[0x1b];
          puVar5[0x1c] = puVar6[0x1c];
          puVar5[0x1b] = uVar28;
          uVar27 = puVar6[0x1d];
          puVar5[0x1d] = uVar27;
          *(undefined1 *)(puVar5 + 0x1e) = *(undefined1 *)(puVar6 + 0x1e);
          *(undefined1 *)((long)puVar5 + 0xf1) = *(undefined1 *)((long)puVar6 + 0xf1);
          *(undefined1 *)((long)puVar5 + 0xf2) = *(undefined1 *)((long)puVar6 + 0xf2);
          uVar28 = puVar6[0x20];
          puVar5[0x1f] = puVar6[0x1f];
          puVar5[0x20] = uVar28;
          uVar23 = puVar6[0x22];
          puVar5[0x21] = puVar6[0x21];
          puVar5[0x22] = uVar23;
          uVar11 = puVar6[0x24];
          puVar5[0x23] = puVar6[0x23];
          puVar5[0x24] = uVar11;
          uVar12 = puVar6[0x26];
          puVar5[0x25] = puVar6[0x25];
          puVar5[0x26] = uVar12;
          uVar36 = puVar6[0x27];
          puVar5[0x27] = uVar36;
          uVar39 = puVar6[0x28];
          puVar5[0x29] = puVar6[0x29];
          puVar5[0x28] = uVar39;
          uVar39 = puVar6[0x2b];
          puVar5[0x2a] = puVar6[0x2a];
          puVar5[0x2b] = uVar39;
          _swift_bridgeObjectRetain(uVar29);
          _swift_bridgeObjectRetain(uVar30);
          _swift_bridgeObjectRetain(uVar33);
          _swift_bridgeObjectRetain(uVar34);
          _swift_bridgeObjectRetain(uVar26);
          _swift_bridgeObjectRetain(uVar38);
          _swift_bridgeObjectRetain(uVar37);
          _swift_bridgeObjectRetain(uVar8);
          _swift_bridgeObjectRetain(uVar9);
          _swift_bridgeObjectRetain(uVar10);
          _swift_bridgeObjectRetain(uVar27);
          _swift_bridgeObjectRetain(uVar28);
          _swift_bridgeObjectRetain(uVar23);
          _swift_bridgeObjectRetain(uVar11);
          _swift_bridgeObjectRetain(uVar12);
          _swift_bridgeObjectRetain(uVar36);
        }
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x6c));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x6c));
        uVar31 = puVar6[1];
        if (uVar31 >> 0x3c < 0xf) {
          uVar29 = *puVar6;
          func_0x00010006c00c(uVar29,uVar31);
          *puVar5 = uVar29;
          puVar5[1] = uVar31;
        }
        else {
          uVar29 = *puVar6;
          puVar5[1] = puVar6[1];
          *puVar5 = uVar29;
        }
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x70)) =
             *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x70));
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x74));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x74));
        uVar29 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar29;
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x78));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x78));
        uVar29 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar29;
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x7c));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x7c));
        uVar33 = puVar6[1];
        *puVar5 = *puVar6;
        puVar5[1] = uVar33;
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x80));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x80));
        uVar31 = puVar6[1];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar29);
        _swift_bridgeObjectRetain(uVar33);
        if (uVar31 >> 0x3c < 0xf) {
          uVar29 = *puVar6;
          func_0x00010006c00c(uVar29,uVar31);
          *puVar5 = uVar29;
          puVar5[1] = uVar31;
        }
        else {
          uVar29 = *puVar6;
          puVar5[1] = puVar6[1];
          *puVar5 = uVar29;
        }
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x84));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x84));
        lVar17 = 0;
        func_0x000100b91fbc();
        lVar32 = *(long *)(lVar17 + -8);
        puVar21 = puVar6;
        (**(code **)(lVar32 + 0x30))(puVar6,1,lVar17);
        if ((int)puVar21 == 0) {
          uVar29 = puVar6[1];
          *puVar5 = *puVar6;
          puVar5[1] = uVar29;
          uVar29 = puVar6[2];
          uVar34 = puVar6[5];
          uVar33 = puVar6[4];
          puVar5[3] = puVar6[3];
          puVar5[2] = uVar29;
          puVar5[5] = uVar34;
          puVar5[4] = uVar33;
          uVar29 = puVar6[6];
          uVar33 = puVar6[7];
          puVar5[6] = uVar29;
          puVar5[7] = uVar33;
          uVar33 = puVar6[8];
          puVar5[8] = uVar33;
          lVar35 = (long)*(int *)(lVar17 + 0x28);
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar29);
          _swift_bridgeObjectRetain(uVar33);
          lVar22 = (long)puVar6 + lVar35;
          (*pcVar25)(lVar22,1,lVar20);
          if ((int)lVar22 == 0) {
            (**(code **)(lVar24 + 0x10))((long)puVar5 + lVar35,(long)puVar6 + lVar35,lVar20);
            (**(code **)(lVar24 + 0x38))((long)puVar5 + lVar35,0,1,lVar20);
          }
          else {
            lVar22 = 0x112d3bc20;
            func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
            _memcpy((long)puVar5 + lVar35,(long)puVar6 + lVar35,
                    *(undefined8 *)(*(long *)(lVar22 + -8) + 0x40));
          }
          puVar21 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar17 + 0x2c));
          puVar7 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar17 + 0x2c));
          uVar29 = puVar7[1];
          *puVar21 = *puVar7;
          puVar21[1] = uVar29;
          puVar21 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar17 + 0x30));
          puVar7 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar17 + 0x30));
          uVar29 = puVar7[1];
          *puVar21 = *puVar7;
          puVar21[1] = uVar29;
          lVar35 = (long)*(int *)(lVar17 + 0x34);
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar29);
          lVar22 = (long)puVar6 + lVar35;
          (*pcVar25)(lVar22,1,lVar20);
          if ((int)lVar22 == 0) {
            (**(code **)(lVar24 + 0x10))((long)puVar5 + lVar35,(long)puVar6 + lVar35,lVar20);
            (**(code **)(lVar24 + 0x38))((long)puVar5 + lVar35,0,1,lVar20);
          }
          else {
            lVar20 = 0x112d3bc20;
            func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
            _memcpy((long)puVar5 + lVar35,(long)puVar6 + lVar35,
                    *(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
          }
          puVar21 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar17 + 0x38));
          puVar7 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar17 + 0x38));
          uVar29 = puVar7[1];
          *puVar21 = *puVar7;
          puVar21[1] = uVar29;
          puVar21 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar17 + 0x3c));
          puVar6 = (undefined8 *)((long)puVar6 + (long)*(int *)(lVar17 + 0x3c));
          uVar29 = puVar6[1];
          *puVar21 = *puVar6;
          puVar21[1] = uVar29;
          pcVar25 = *(code **)(lVar32 + 0x38);
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar29);
          (*pcVar25)(puVar5,0,1,lVar17);
        }
        else {
          lVar17 = 0x112db39a8;
          func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
          _memcpy(puVar5,puVar6,*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
        }
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x88));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x88));
        lVar17 = puVar6[1];
        if (lVar17 == 0) {
          uVar29 = puVar6[0x10];
          uVar34 = puVar6[0x13];
          uVar33 = puVar6[0x12];
          puVar5[0x11] = puVar6[0x11];
          puVar5[0x10] = uVar29;
          puVar5[0x13] = uVar34;
          puVar5[0x12] = uVar33;
          *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
          uVar29 = puVar6[8];
          uVar34 = puVar6[0xb];
          uVar33 = puVar6[10];
          puVar5[9] = puVar6[9];
          puVar5[8] = uVar29;
          puVar5[0xb] = uVar34;
          puVar5[10] = uVar33;
          uVar34 = puVar6[0xc];
          uVar33 = puVar6[0xf];
          uVar29 = puVar6[0xe];
          puVar5[0xd] = puVar6[0xd];
          puVar5[0xc] = uVar34;
          puVar5[0xf] = uVar33;
          puVar5[0xe] = uVar29;
          uVar29 = *puVar6;
          uVar34 = puVar6[3];
          uVar33 = puVar6[2];
          puVar5[1] = puVar6[1];
          *puVar5 = uVar29;
          puVar5[3] = uVar34;
          puVar5[2] = uVar33;
          uVar34 = puVar6[4];
          uVar33 = puVar6[7];
          uVar29 = puVar6[6];
          puVar5[5] = puVar6[5];
          puVar5[4] = uVar34;
          puVar5[7] = uVar33;
          puVar5[6] = uVar29;
        }
        else {
          *puVar5 = *puVar6;
          puVar5[1] = lVar17;
          lVar17 = puVar6[8];
          _swift_bridgeObjectRetain();
          if (lVar17 == 1) {
            uVar29 = puVar6[2];
            uVar34 = puVar6[5];
            uVar33 = puVar6[4];
            puVar5[3] = puVar6[3];
            puVar5[2] = uVar29;
            puVar5[5] = uVar34;
            puVar5[4] = uVar33;
            uVar29 = puVar6[6];
            puVar5[7] = puVar6[7];
            puVar5[6] = uVar29;
            puVar5[8] = puVar6[8];
          }
          else {
            lVar20 = puVar6[4];
            if (lVar20 == 1) {
              uVar29 = puVar6[2];
              uVar34 = puVar6[5];
              uVar33 = puVar6[4];
              puVar5[3] = puVar6[3];
              puVar5[2] = uVar29;
              puVar5[5] = uVar34;
              puVar5[4] = uVar33;
              puVar5[6] = puVar6[6];
            }
            else {
              uVar29 = puVar6[2];
              puVar5[3] = puVar6[3];
              puVar5[2] = uVar29;
              uVar29 = puVar6[5];
              uVar33 = puVar6[6];
              puVar5[4] = lVar20;
              puVar5[5] = uVar29;
              puVar5[6] = uVar33;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar33);
            }
            puVar5[7] = puVar6[7];
            puVar5[8] = lVar17;
            _swift_bridgeObjectRetain(lVar17);
          }
          lVar17 = puVar6[0xf];
          if (lVar17 == 1) {
            uVar29 = puVar6[9];
            puVar5[10] = puVar6[10];
            puVar5[9] = uVar29;
            uVar29 = puVar6[0xb];
            puVar5[0xc] = puVar6[0xc];
            puVar5[0xb] = uVar29;
            uVar29 = puVar6[0xd];
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xd] = uVar29;
            puVar5[0xf] = puVar6[0xf];
          }
          else {
            lVar20 = puVar6[0xb];
            if (lVar20 == 1) {
              uVar29 = puVar6[9];
              puVar5[10] = puVar6[10];
              puVar5[9] = uVar29;
              uVar29 = puVar6[0xb];
              puVar5[0xc] = puVar6[0xc];
              puVar5[0xb] = uVar29;
              puVar5[0xd] = puVar6[0xd];
            }
            else {
              uVar29 = puVar6[9];
              puVar5[10] = puVar6[10];
              puVar5[9] = uVar29;
              uVar29 = puVar6[0xc];
              uVar33 = puVar6[0xd];
              puVar5[0xb] = lVar20;
              puVar5[0xc] = uVar29;
              puVar5[0xd] = uVar33;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar33);
            }
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xf] = lVar17;
            _swift_bridgeObjectRetain(lVar17);
          }
          *(undefined2 *)(puVar5 + 0x10) = *(undefined2 *)(puVar6 + 0x10);
          uVar29 = puVar6[0x11];
          puVar5[0x12] = puVar6[0x12];
          puVar5[0x11] = uVar29;
          puVar5[0x13] = puVar6[0x13];
          *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
          _swift_bridgeObjectRetain();
        }
        *(undefined4 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x8c)) =
             *(undefined4 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x8c));
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x90)) =
             *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x90));
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x94));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x94));
        uVar29 = *puVar6;
        uVar34 = puVar6[3];
        uVar33 = puVar6[2];
        puVar5[1] = puVar6[1];
        *puVar5 = uVar29;
        puVar5[3] = uVar34;
        puVar5[2] = uVar33;
        uVar29 = puVar6[4];
        uVar34 = puVar6[7];
        uVar33 = puVar6[6];
        puVar5[5] = puVar6[5];
        puVar5[4] = uVar29;
        puVar5[7] = uVar34;
        puVar5[6] = uVar33;
        uVar34 = puVar6[0xc];
        uVar33 = puVar6[0xf];
        uVar29 = puVar6[0xe];
        puVar5[0xd] = puVar6[0xd];
        puVar5[0xc] = uVar34;
        puVar5[0xf] = uVar33;
        puVar5[0xe] = uVar29;
        uVar34 = puVar6[8];
        uVar33 = puVar6[0xb];
        uVar29 = puVar6[10];
        puVar5[9] = puVar6[9];
        puVar5[8] = uVar34;
        puVar5[0xb] = uVar33;
        puVar5[10] = uVar29;
        uVar29 = *(undefined8 *)((long)puVar6 + 0xa9);
        *(undefined8 *)((long)puVar5 + 0xb1) = *(undefined8 *)((long)puVar6 + 0xb1);
        *(undefined8 *)((long)puVar5 + 0xa9) = uVar29;
        uVar29 = puVar6[0x12];
        uVar34 = puVar6[0x15];
        uVar33 = puVar6[0x14];
        puVar5[0x13] = puVar6[0x13];
        puVar5[0x12] = uVar29;
        puVar5[0x15] = uVar34;
        puVar5[0x14] = uVar33;
        uVar29 = puVar6[0x10];
        puVar5[0x11] = puVar6[0x11];
        puVar5[0x10] = uVar29;
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x98)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x98));
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar19 + 0x9c)) =
             *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar19 + 0x9c));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0xa0)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0xa0));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0xa4)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0xa4));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0xa8)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0xa8));
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0xac));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0xac));
        lVar17 = puVar6[1];
        if (lVar17 == 0) {
          uVar29 = *puVar6;
          uVar34 = puVar6[3];
          uVar33 = puVar6[2];
          puVar5[1] = puVar6[1];
          *puVar5 = uVar29;
          puVar5[3] = uVar34;
          puVar5[2] = uVar33;
        }
        else {
          *puVar5 = *puVar6;
          puVar5[1] = lVar17;
          uVar29 = puVar6[3];
          puVar5[2] = puVar6[2];
          puVar5[3] = uVar29;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar29);
        }
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0xb0)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0xb0));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0xb4)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0xb4));
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0xb8));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0xb8));
        lVar17 = puVar6[1];
        if (lVar17 == 0) {
          uVar29 = puVar6[0x10];
          uVar34 = puVar6[0x13];
          uVar33 = puVar6[0x12];
          puVar5[0x11] = puVar6[0x11];
          puVar5[0x10] = uVar29;
          puVar5[0x13] = uVar34;
          puVar5[0x12] = uVar33;
          *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
          uVar29 = puVar6[8];
          uVar34 = puVar6[0xb];
          uVar33 = puVar6[10];
          puVar5[9] = puVar6[9];
          puVar5[8] = uVar29;
          puVar5[0xb] = uVar34;
          puVar5[10] = uVar33;
          uVar34 = puVar6[0xc];
          uVar33 = puVar6[0xf];
          uVar29 = puVar6[0xe];
          puVar5[0xd] = puVar6[0xd];
          puVar5[0xc] = uVar34;
          puVar5[0xf] = uVar33;
          puVar5[0xe] = uVar29;
          uVar29 = *puVar6;
          uVar34 = puVar6[3];
          uVar33 = puVar6[2];
          puVar5[1] = puVar6[1];
          *puVar5 = uVar29;
          puVar5[3] = uVar34;
          puVar5[2] = uVar33;
          uVar34 = puVar6[4];
          uVar33 = puVar6[7];
          uVar29 = puVar6[6];
          puVar5[5] = puVar6[5];
          puVar5[4] = uVar34;
          puVar5[7] = uVar33;
          puVar5[6] = uVar29;
        }
        else {
          *puVar5 = *puVar6;
          puVar5[1] = lVar17;
          lVar17 = puVar6[8];
          _swift_bridgeObjectRetain();
          if (lVar17 == 1) {
            uVar29 = puVar6[2];
            uVar34 = puVar6[5];
            uVar33 = puVar6[4];
            puVar5[3] = puVar6[3];
            puVar5[2] = uVar29;
            puVar5[5] = uVar34;
            puVar5[4] = uVar33;
            uVar29 = puVar6[6];
            puVar5[7] = puVar6[7];
            puVar5[6] = uVar29;
            puVar5[8] = puVar6[8];
          }
          else {
            lVar20 = puVar6[4];
            if (lVar20 == 1) {
              uVar29 = puVar6[2];
              uVar34 = puVar6[5];
              uVar33 = puVar6[4];
              puVar5[3] = puVar6[3];
              puVar5[2] = uVar29;
              puVar5[5] = uVar34;
              puVar5[4] = uVar33;
              puVar5[6] = puVar6[6];
            }
            else {
              uVar29 = puVar6[2];
              puVar5[3] = puVar6[3];
              puVar5[2] = uVar29;
              uVar29 = puVar6[5];
              uVar33 = puVar6[6];
              puVar5[4] = lVar20;
              puVar5[5] = uVar29;
              puVar5[6] = uVar33;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar33);
            }
            puVar5[7] = puVar6[7];
            puVar5[8] = lVar17;
            _swift_bridgeObjectRetain(lVar17);
          }
          lVar17 = puVar6[0xf];
          if (lVar17 == 1) {
            uVar29 = puVar6[9];
            puVar5[10] = puVar6[10];
            puVar5[9] = uVar29;
            uVar29 = puVar6[0xb];
            puVar5[0xc] = puVar6[0xc];
            puVar5[0xb] = uVar29;
            uVar29 = puVar6[0xd];
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xd] = uVar29;
            puVar5[0xf] = puVar6[0xf];
          }
          else {
            lVar20 = puVar6[0xb];
            if (lVar20 == 1) {
              uVar29 = puVar6[9];
              puVar5[10] = puVar6[10];
              puVar5[9] = uVar29;
              uVar29 = puVar6[0xb];
              puVar5[0xc] = puVar6[0xc];
              puVar5[0xb] = uVar29;
              puVar5[0xd] = puVar6[0xd];
            }
            else {
              uVar29 = puVar6[9];
              puVar5[10] = puVar6[10];
              puVar5[9] = uVar29;
              uVar29 = puVar6[0xc];
              uVar33 = puVar6[0xd];
              puVar5[0xb] = lVar20;
              puVar5[0xc] = uVar29;
              puVar5[0xd] = uVar33;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar33);
            }
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xf] = lVar17;
            _swift_bridgeObjectRetain(lVar17);
          }
          *(undefined2 *)(puVar5 + 0x10) = *(undefined2 *)(puVar6 + 0x10);
          uVar29 = puVar6[0x11];
          puVar5[0x12] = puVar6[0x12];
          puVar5[0x11] = uVar29;
          puVar5[0x13] = puVar6[0x13];
          *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
          _swift_bridgeObjectRetain();
        }
        puVar5 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0xbc));
        puVar6 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0xbc));
        lVar17 = puVar6[1];
        if (lVar17 == 0) {
          uVar29 = puVar6[0x10];
          uVar34 = puVar6[0x13];
          uVar33 = puVar6[0x12];
          puVar5[0x11] = puVar6[0x11];
          puVar5[0x10] = uVar29;
          puVar5[0x13] = uVar34;
          puVar5[0x12] = uVar33;
          *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
          uVar29 = puVar6[8];
          uVar34 = puVar6[0xb];
          uVar33 = puVar6[10];
          puVar5[9] = puVar6[9];
          puVar5[8] = uVar29;
          puVar5[0xb] = uVar34;
          puVar5[10] = uVar33;
          uVar34 = puVar6[0xc];
          uVar33 = puVar6[0xf];
          uVar29 = puVar6[0xe];
          puVar5[0xd] = puVar6[0xd];
          puVar5[0xc] = uVar34;
          puVar5[0xf] = uVar33;
          puVar5[0xe] = uVar29;
          uVar29 = *puVar6;
          uVar34 = puVar6[3];
          uVar33 = puVar6[2];
          puVar5[1] = puVar6[1];
          *puVar5 = uVar29;
          puVar5[3] = uVar34;
          puVar5[2] = uVar33;
          uVar34 = puVar6[4];
          uVar33 = puVar6[7];
          uVar29 = puVar6[6];
          puVar5[5] = puVar6[5];
          puVar5[4] = uVar34;
          puVar5[7] = uVar33;
          puVar5[6] = uVar29;
        }
        else {
          *puVar5 = *puVar6;
          puVar5[1] = lVar17;
          lVar17 = puVar6[8];
          _swift_bridgeObjectRetain();
          if (lVar17 == 1) {
            uVar29 = puVar6[2];
            uVar34 = puVar6[5];
            uVar33 = puVar6[4];
            puVar5[3] = puVar6[3];
            puVar5[2] = uVar29;
            puVar5[5] = uVar34;
            puVar5[4] = uVar33;
            uVar29 = puVar6[6];
            puVar5[7] = puVar6[7];
            puVar5[6] = uVar29;
            puVar5[8] = puVar6[8];
          }
          else {
            lVar20 = puVar6[4];
            if (lVar20 == 1) {
              uVar29 = puVar6[2];
              uVar34 = puVar6[5];
              uVar33 = puVar6[4];
              puVar5[3] = puVar6[3];
              puVar5[2] = uVar29;
              puVar5[5] = uVar34;
              puVar5[4] = uVar33;
              puVar5[6] = puVar6[6];
            }
            else {
              uVar29 = puVar6[2];
              puVar5[3] = puVar6[3];
              puVar5[2] = uVar29;
              uVar29 = puVar6[5];
              uVar33 = puVar6[6];
              puVar5[4] = lVar20;
              puVar5[5] = uVar29;
              puVar5[6] = uVar33;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar33);
            }
            puVar5[7] = puVar6[7];
            puVar5[8] = lVar17;
            _swift_bridgeObjectRetain(lVar17);
          }
          lVar17 = puVar6[0xf];
          if (lVar17 == 1) {
            uVar29 = puVar6[9];
            puVar5[10] = puVar6[10];
            puVar5[9] = uVar29;
            uVar29 = puVar6[0xb];
            puVar5[0xc] = puVar6[0xc];
            puVar5[0xb] = uVar29;
            uVar29 = puVar6[0xd];
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xd] = uVar29;
            puVar5[0xf] = puVar6[0xf];
          }
          else {
            lVar20 = puVar6[0xb];
            if (lVar20 == 1) {
              uVar29 = puVar6[9];
              puVar5[10] = puVar6[10];
              puVar5[9] = uVar29;
              uVar29 = puVar6[0xb];
              puVar5[0xc] = puVar6[0xc];
              puVar5[0xb] = uVar29;
              puVar5[0xd] = puVar6[0xd];
            }
            else {
              uVar29 = puVar6[9];
              puVar5[10] = puVar6[10];
              puVar5[9] = uVar29;
              uVar29 = puVar6[0xc];
              uVar33 = puVar6[0xd];
              puVar5[0xb] = lVar20;
              puVar5[0xc] = uVar29;
              puVar5[0xd] = uVar33;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar33);
            }
            puVar5[0xe] = puVar6[0xe];
            puVar5[0xf] = lVar17;
            _swift_bridgeObjectRetain(lVar17);
          }
          *(undefined2 *)(puVar5 + 0x10) = *(undefined2 *)(puVar6 + 0x10);
          uVar29 = puVar6[0x11];
          puVar5[0x12] = puVar6[0x12];
          puVar5[0x11] = uVar29;
          puVar5[0x13] = puVar6[0x13];
          *(undefined1 *)(puVar5 + 0x14) = *(undefined1 *)(puVar6 + 0x14);
          _swift_bridgeObjectRetain();
        }
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar19 + 0xc0)) =
             *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar19 + 0xc0));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 0xc4)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 0xc4));
        *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar19 + 200)) =
             *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar19 + 200));
        *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar19 + 0xcc)) =
             *(undefined1 *)((long)puVar4 + (long)*(int *)(lVar19 + 0xcc));
        *(undefined1 *)((long)puVar16 + (long)*(int *)(lVar18 + 0x1c)) =
             *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x1c));
        *(undefined8 *)((long)puVar16 + (long)*(int *)(lVar18 + 0x20)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar18 + 0x20));
        _swift_storeEnumTagMultiPayload(puVar1,lVar15,4);
        goto LAB_1042e3a28;
      }
    }
  }
  else if (iVar14 < 10) {
    if (iVar14 == 5) {
      uVar29 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar29;
      *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
      _swift_bridgeObjectRetain();
      _swift_storeEnumTagMultiPayload(puVar1,lVar15,5);
      goto LAB_1042e3a28;
    }
    if (iVar14 == 6) {
      uVar29 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar29;
      *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(puVar2 + 2);
      _swift_bridgeObjectRetain();
      _swift_storeEnumTagMultiPayload(puVar1,lVar15,6);
      goto LAB_1042e3a28;
    }
  }
  else {
    if (iVar14 == 10) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar2;
      uVar29 = puVar2[2];
      puVar1[1] = puVar2[1];
      puVar1[2] = uVar29;
      _swift_bridgeObjectRetain();
      _swift_storeEnumTagMultiPayload(puVar1,lVar15,10);
      goto LAB_1042e3a28;
    }
    if (iVar14 == 0xb) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar2;
      uVar29 = puVar2[2];
      puVar1[1] = puVar2[1];
      puVar1[2] = uVar29;
      _swift_bridgeObjectRetain();
      _swift_storeEnumTagMultiPayload(puVar1,lVar15,0xb);
      goto LAB_1042e3a28;
    }
  }
  _memcpy(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
LAB_1042e3a28:
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  return param_1;
}



/* Entry: 1042e3a58; end: 1042e405b;  */

void FUN_1042e3a58(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  param_1 = param_1 + *(int *)(param_2 + 0x14);
  uVar2 = 0;
  FUN_1042dddf8(0);
  lVar3 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar2);
  iVar1 = (int)lVar3;
  if (iVar1 < 5) {
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
        puVar8 = (undefined8 *)(param_1 + 0x18);
        goto LAB_1042e4040;
      }
      if (iVar1 != 2) {
        return;
      }
    }
    else if (iVar1 != 3) {
      if (iVar1 != 4) {
        return;
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
      lVar3 = 0;
      func_0x0001042e769c();
      param_1 = param_1 + *(int *)(lVar3 + 0x24);
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
      lVar3 = 0;
      func_0x0001042e75b8();
      param_1 = param_1 + *(int *)(lVar3 + 0x18);
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x50));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x70));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x80));
      lVar4 = 0;
      func_0x000100b91d00();
      iVar1 = *(int *)(lVar4 + 0x3c);
      lVar5 = 0;
      __s10Foundation4UUIDVMa();
      lVar9 = *(long *)(lVar5 + -8);
      pcVar10 = *(code **)(lVar9 + 0x30);
      lVar3 = param_1 + iVar1;
      (*pcVar10)(lVar3,1,lVar5);
      if ((int)lVar3 == 0) {
        (**(code **)(lVar9 + 8))(param_1 + iVar1,lVar5);
      }
      iVar1 = *(int *)(lVar4 + 0x40);
      lVar3 = param_1 + iVar1;
      (*pcVar10)(lVar3,1,lVar5);
      if ((int)lVar3 == 0) {
        (**(code **)(lVar9 + 8))(param_1 + iVar1,lVar5);
      }
      iVar1 = *(int *)(lVar4 + 0x44);
      lVar3 = param_1 + iVar1;
      (*pcVar10)(lVar3,1,lVar5);
      if ((int)lVar3 == 0) {
        (**(code **)(lVar9 + 8))(param_1 + iVar1,lVar5);
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x4c)));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x50)));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x54)));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x58)));
      lVar3 = param_1 + *(int *)(lVar4 + 0x5c);
      if (*(long *)(lVar3 + 8) != 1) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x18));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x28));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x38));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x48));
        if (*(long *)(lVar3 + 0x90) != 0) {
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x70));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x80));
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x90));
        }
      }
      if (*(long *)(param_1 + *(int *)(lVar4 + 100) + 8) != 1) {
        _swift_bridgeObjectRelease();
      }
      lVar3 = param_1 + *(int *)(lVar4 + 0x68);
      if (*(long *)(lVar3 + 0x138) != 0) {
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x10));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x20));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x38));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x58));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x60));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x90));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0xa0));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0xb0));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0xc0));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0xd0));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0xe8));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x100));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x110));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x120));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x130));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x138));
      }
      puVar8 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x6c));
      if ((ulong)puVar8[1] >> 0x3c < 0xf) {
        func_0x00010006c090(*puVar8);
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x74) + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x78) + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar4 + 0x7c) + 8));
      puVar8 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x80));
      if ((ulong)puVar8[1] >> 0x3c < 0xf) {
        func_0x00010006c090(*puVar8);
      }
      lVar3 = param_1 + *(int *)(lVar4 + 0x84);
      lVar6 = 0;
      func_0x000100b91fbc();
      lVar7 = lVar3;
      (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar3,1,lVar6);
      if ((int)lVar7 == 0) {
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 8));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x30));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x40));
        iVar1 = *(int *)(lVar6 + 0x28);
        lVar7 = lVar3 + iVar1;
        (*pcVar10)(lVar7,1,lVar5);
        if ((int)lVar7 == 0) {
          (**(code **)(lVar9 + 8))(lVar3 + iVar1,lVar5);
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar6 + 0x2c) + 8));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar6 + 0x30) + 8));
        iVar1 = *(int *)(lVar6 + 0x34);
        lVar7 = lVar3 + iVar1;
        (*pcVar10)(lVar7,1,lVar5);
        if ((int)lVar7 == 0) {
          (**(code **)(lVar9 + 8))(lVar3 + iVar1,lVar5);
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar6 + 0x38) + 8));
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + *(int *)(lVar6 + 0x3c) + 8));
      }
      lVar3 = param_1 + *(int *)(lVar4 + 0x88);
      if (*(long *)(lVar3 + 8) != 0) {
        _swift_bridgeObjectRelease();
        lVar5 = *(long *)(lVar3 + 0x40);
        if (lVar5 != 1) {
          if (*(long *)(lVar3 + 0x20) != 1) {
            _swift_bridgeObjectRelease(*(long *)(lVar3 + 0x20));
            _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x30));
            lVar5 = *(long *)(lVar3 + 0x40);
          }
          _swift_bridgeObjectRelease(lVar5);
        }
        lVar5 = *(long *)(lVar3 + 0x78);
        if (lVar5 != 1) {
          if (*(long *)(lVar3 + 0x58) != 1) {
            _swift_bridgeObjectRelease(*(long *)(lVar3 + 0x58));
            _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x68));
            lVar5 = *(long *)(lVar3 + 0x78);
          }
          _swift_bridgeObjectRelease(lVar5);
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x98));
      }
      lVar3 = param_1 + *(int *)(lVar4 + 0xac);
      if (*(long *)(lVar3 + 8) != 0) {
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x18));
      }
      lVar3 = param_1 + *(int *)(lVar4 + 0xb8);
      if (*(long *)(lVar3 + 8) != 0) {
        _swift_bridgeObjectRelease();
        lVar5 = *(long *)(lVar3 + 0x40);
        if (lVar5 != 1) {
          if (*(long *)(lVar3 + 0x20) != 1) {
            _swift_bridgeObjectRelease(*(long *)(lVar3 + 0x20));
            _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x30));
            lVar5 = *(long *)(lVar3 + 0x40);
          }
          _swift_bridgeObjectRelease(lVar5);
        }
        lVar5 = *(long *)(lVar3 + 0x78);
        if (lVar5 != 1) {
          if (*(long *)(lVar3 + 0x58) != 1) {
            _swift_bridgeObjectRelease(*(long *)(lVar3 + 0x58));
            _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x68));
            lVar5 = *(long *)(lVar3 + 0x78);
          }
          _swift_bridgeObjectRelease(lVar5);
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x98));
      }
      param_1 = param_1 + *(int *)(lVar4 + 0xbc);
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      _swift_bridgeObjectRelease();
      lVar3 = *(long *)(param_1 + 0x40);
      if (lVar3 != 1) {
        if (*(long *)(param_1 + 0x20) != 1) {
          _swift_bridgeObjectRelease(*(long *)(param_1 + 0x20));
          _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
          lVar3 = *(long *)(param_1 + 0x40);
        }
        _swift_bridgeObjectRelease(lVar3);
      }
      lVar3 = *(long *)(param_1 + 0x78);
      if (lVar3 != 1) {
        if (*(long *)(param_1 + 0x58) != 1) {
          _swift_bridgeObjectRelease(*(long *)(param_1 + 0x58));
          _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
          lVar3 = *(long *)(param_1 + 0x78);
        }
        _swift_bridgeObjectRelease(lVar3);
      }
      puVar8 = (undefined8 *)(param_1 + 0x98);
      goto LAB_1042e4040;
    }
  }
  else {
    if (9 < iVar1) {
      if ((iVar1 != 10) && (iVar1 != 0xb)) {
        return;
      }
      puVar8 = (undefined8 *)(param_1 + 0x10);
      goto LAB_1042e4040;
    }
    if ((iVar1 != 5) && (iVar1 != 6)) {
      return;
    }
  }
  puVar8 = (undefined8 *)(param_1 + 8);
LAB_1042e4040:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*puVar8);
  return;
}


