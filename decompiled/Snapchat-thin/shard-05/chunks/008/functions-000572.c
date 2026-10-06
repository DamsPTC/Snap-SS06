/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104292d8c; end: 104292e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104292d8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306ac88));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306ac90));
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ac98);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11306ac98))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306aca0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11306aca8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104292e4c; end: 104292f87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104292e4c(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar3 = &lStack_88;
    _swift_dynamicCast(plVar3,auStack_80,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_11306ac88);
      lVar6 = *(long *)(lStack_88 + _DAT_11306ac88);
      lVar7 = *(long *)(unaff_x20 + _DAT_11306ac90);
      lVar8 = *(long *)(lStack_88 + _DAT_11306ac90);
      lVar4 = *(long *)(unaff_x20 + _DAT_11306ac98);
      if (lVar4 == *(long *)(lStack_88 + _DAT_11306ac98) &&
          ((long *)(unaff_x20 + _DAT_11306ac98))[1] == ((long *)(lStack_88 + _DAT_11306ac98))[1]) {
        uVar2 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar2 = (uint)lVar4;
      }
      lVar9 = *(long *)(unaff_x20 + _DAT_11306aca0);
      lVar10 = *(long *)(lStack_88 + _DAT_11306aca0);
      lVar4 = *(long *)(unaff_x20 + _DAT_11306aca8);
      lVar11 = *(long *)(lStack_88 + _DAT_11306aca8);
      _objc_release(lStack_88);
      uVar1 = 0;
      if (lVar9 == lVar10) {
        uVar1 = (lVar5 == lVar6 && lVar7 == lVar8) & uVar2;
      }
      if (lVar4 != lVar11) {
        return 0;
      }
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 104292f88; end: 104293007; -[SCAdPodTrackInfo isEqual:] */

uint FUN_104292f88(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104292e4c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104293008; end: 10429300b; -[SCAdPodTrackInfo copyWithZone:] */

void FUN_104293008(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10429300c; end: 104293197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10429300c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f1740);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5f5245505f534441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f5245505f534441,0xeb00000000444f50);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ac98);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11306ac98))[1]);
  uVar2 = 0x44495f444f50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f444f50,0xe600000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f1760);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f1780);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104293198; end: 1042931e7; -[SCAdPodTrackInfo encodeWithCoder:] */

void FUN_104293198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10429300c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042931e8; end: 104293217;  */

void FUN_1042931e8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104293218(param_1);
  return;
}



/* Entry: 104293218; end: 104293463;  */

undefined8 FUN_104293218(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar3 = 0;
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f1740);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5f5245505f534441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f5245505f534441,0xeb00000000444f50);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  uVar1 = 0x44495f444f50;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f444f50,0xe600000000000000);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar3 & 1) != 0) {
      uVar1 = 0xd000000000000012;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f1760);
      func_0x00010bf66f40(param_1);
      _objc_release(uVar1);
      uVar1 = 0xd000000000000014;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f1780);
      func_0x00010bf66f40(param_1);
      _objc_release(uVar1);
      uVar1 = uStack_b0;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_b0,uStack_a8);
      _swift_bridgeObjectRelease(uStack_a8);
      func_0x00010c036940();
      _objc_release(uVar1);
      _objc_release(param_1);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104293464; end: 10429348b; -[SCAdPodTrackInfo initWithCoder:] */

void FUN_104293464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104293218();
  return;
}



/* Entry: 10429348c; end: 1042934a7; -[SCAdPodTrackInfo description] */

void FUN_10429348c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042934a8; end: 104293523; -[SCAdPodTrackInfo init] */

void FUN_1042934a8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataServices/AdPodTrackInfoWrapper.swift",
             0x2a,2,0x65,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1042934f0);
  (*pcVar1)();
}



/* Entry: 104293524; end: 104293537; -[SCAdPodTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104293524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306ac98 + 8))
  ;
  return;
}



/* Entry: 104293538; end: 104293557;  */

void FUN_104293538(void)

{
  _objc_opt_self(&PTR_PTR_112993990);
  return;
}



/* Entry: 104293558; end: 10429359f; -[SCAdPollStickerTrackInfo selectedOptionIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104293558(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306acd8);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1042935a0; end: 1042935af; -[SCAdPollStickerTrackInfo pollStickerShownTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042935a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ace0));
  return;
}



/* Entry: 1042935b0; end: 104293613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042935b0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306acd8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306ace0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104293614; end: 104293697; -[SCAdPollStickerTrackInfo initWithSelectedOptionIds:pollStickerShownTimeMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104293614(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  *(undefined8 *)(param_1 + _DAT_11306acd8) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306ace0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104293698; end: 10429373b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104293698(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306acd8) = param_1;
  if (param_3 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(param_2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306ace0) = puVar1;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10429373c; end: 10429376f; -[SCAdPollStickerTrackInfo hash] */

undefined8 FUN_10429373c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104293770();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104293770; end: 10429382b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104293770(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306acd8);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,PTR___sSSN_11034da80);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_11306ace0);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10429382c; end: 104293967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10429382c(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11306acd8);
      func_0x00010142cfc4(uVar2,*(undefined8 *)(lStack_68 + _DAT_11306acd8));
      lVar7 = *(long *)(unaff_x20 + _DAT_11306ace0);
      lVar6 = *(long *)(lStack_68 + _DAT_11306ace0);
      if (lVar7 == 0) {
        lVar4 = lVar6;
        _objc_retain(lVar6);
        _objc_release(lStack_68);
        if (lVar6 != 0) {
          uVar5 = 0;
          goto LAB_104293938;
        }
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
        lVar4 = lStack_68;
        if (lVar6 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar6);
          _objc_retain(lVar7);
          lVar3 = lVar7;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar5 = (uint)lVar3;
          _objc_release(lVar7);
          _objc_release(lVar6);
        }
LAB_104293938:
        _objc_release(lVar4);
      }
      uVar5 = (uint)uVar2 & uVar5;
      goto LAB_104293944;
    }
  }
  uVar5 = 0;
LAB_104293944:
  return uVar5 & 1;
}



/* Entry: 104293968; end: 1042939e7; -[SCAdPollStickerTrackInfo isEqual:] */

uint FUN_104293968(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10429382c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1042939e8; end: 1042939eb; -[SCAdPollStickerTrackInfo copyWithZone:] */

void FUN_1042939e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1042939ec; end: 104293ab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042939ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306acd8);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,PTR___sSSN_11034da80);
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f17d0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f17f0);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104293ab8; end: 104293b07; -[SCAdPollStickerTrackInfo encodeWithCoder:] */

void FUN_104293ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042939ec(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104293b08; end: 104293b37;  */

void FUN_104293b08(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104293b38(param_1);
  return;
}



/* Entry: 104293b38; end: 104293d5b;  */

undefined8 FUN_104293b38(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f17d0);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar2 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    puVar1 = PTR___sypN_11034f1a8;
    puVar4 = &uStack_88;
    _swift_dynamicCast(puVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar2,6);
    uVar2 = uStack_88;
    if (((ulong)puVar4 & 1) != 0) {
      uVar5 = 0xd00000000000001a;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f17f0);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (lVar3 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      lStack_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) {
        func_0x00010006e7f4(&uStack_60);
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        func_0x0001002ed07c(0);
        puVar4 = &uStack_88;
        _swift_dynamicCast(puVar4,&uStack_60,puVar1 + 8,uVar5,6);
        uVar5 = uStack_88;
        if ((int)puVar4 == 0) {
          uVar5 = 0;
        }
      }
      uVar6 = uVar2;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar2,PTR___sSSN_11034da80);
      _swift_bridgeObjectRelease(uVar2);
      func_0x00010c043c60();
      _objc_release(uVar6);
      _objc_release(param_1);
      _objc_release(uVar5);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104293d5c; end: 104293d83; -[SCAdPollStickerTrackInfo initWithCoder:] */

void FUN_104293d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104293b38();
  return;
}



/* Entry: 104293d84; end: 104293daf; -[SCAdPollStickerTrackInfo description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104293d84(long param_1)

{
  func_0x00010bf885a0(*(undefined8 *)(param_1 + _DAT_11306ace0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104293db0; end: 104293e2b; -[SCAdPollStickerTrackInfo init] */

void FUN_104293db0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdPollStickerTrackInfoWrapper.swift",0x32,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104293df8);
  (*pcVar1)();
}



/* Entry: 104293e2c; end: 104293e63; -[SCAdPollStickerTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104293e2c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306acd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306ace0));
  return;
}



/* Entry: 104293e64; end: 104293e83;  */

void FUN_104293e64(void)

{
  _objc_opt_self(&PTR_PTR_112993a80);
  return;
}



/* Entry: 104293e84; end: 104293e93; -[SCAdReminderTrackInfo reminderSetTapCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104293e84(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ad10);
}



/* Entry: 104293e94; end: 104293eef; -[SCAdReminderTrackInfo countdownId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104293e94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ad18))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ad18);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104293ef0; end: 104293ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104293ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306ad10) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ad18);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104293ef4; end: 104293fe3; -[SCAdReminderTrackInfo initWithReminderSetTapCount:countdownId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104293ef4(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined8 *)(param_1 + _DAT_11306ad10) = param_3;
  plVar1 = (long *)(param_1 + _DAT_11306ad18);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104293fe4; end: 1042940a3; -[SCAdReminderTrackInfo hash] */

undefined8 FUN_104293fe4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104294018();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042940a4; end: 1042941c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042940a4(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
    return 0;
  }
  plVar1 = &lStack_58;
  _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
  if (((ulong)plVar1 & 1) == 0) {
    return 0;
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_11306ad10);
  lVar7 = *(long *)(lStack_58 + _DAT_11306ad10);
  lVar3 = ((long *)(unaff_x20 + _DAT_11306ad18))[1];
  lVar5 = ((long *)(lStack_58 + _DAT_11306ad18))[1];
  if (lVar3 == 0) {
    _swift_bridgeObjectRetain(lVar5);
    _objc_release(lStack_58);
    if (lVar5 != 0) {
      _swift_bridgeObjectRelease(lVar5);
      uVar4 = 0;
      goto LAB_1042941a4;
    }
LAB_1042941a0:
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    if (lVar5 != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_11306ad18);
      if (lVar2 == *(long *)(lStack_58 + _DAT_11306ad18) && lVar3 == lVar5) {
        _objc_release(lStack_58);
        goto LAB_1042941a0;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar4 = (uint)lVar2;
    }
    _objc_release(lStack_58);
  }
LAB_1042941a4:
  return lVar6 == lVar7 & uVar4;
}



/* Entry: 1042941c4; end: 104294243; -[SCAdReminderTrackInfo isEqual:] */

uint FUN_1042941c4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042940a4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104294244; end: 104294247; -[SCAdReminderTrackInfo copyWithZone:] */

void FUN_104294244(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104294248; end: 104294317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104294248(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f1850);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ad18))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ad18);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x574f44544e554f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x574f44544e554f43,0xec00000044495f4e);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104294318; end: 104294367; -[SCAdReminderTrackInfo encodeWithCoder:] */

void FUN_104294318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104294248(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104294368; end: 104294397;  */

void FUN_104294368(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104294398(param_1);
  return;
}



/* Entry: 104294398; end: 1042944f3;  */

undefined8 FUN_104294398(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = 0;
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f1850);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  uVar1 = 0x574f44544e554f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x574f44544e554f43,0xec00000044495f4e);
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
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    _swift_dynamicCast(&uStack_90,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar3 & 1) != 0) {
      uVar1 = uStack_90;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_90,uStack_88);
      _swift_bridgeObjectRelease(uStack_88);
      goto LAB_1042944b4;
    }
  }
  uVar1 = 0;
LAB_1042944b4:
  func_0x00010c03dd80();
  _objc_release(uVar1);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 1042944f4; end: 10429451b; -[SCAdReminderTrackInfo initWithCoder:] */

void FUN_1042944f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104294398();
  return;
}



/* Entry: 10429451c; end: 104294537; -[SCAdReminderTrackInfo description] */

void FUN_10429451c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104294538; end: 1042945b3; -[SCAdReminderTrackInfo init] */

void FUN_104294538(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdReminderTrackInfoWrapper.swift",0x2f,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104294580);
  (*pcVar1)();
}



/* Entry: 1042945b4; end: 1042945c7; -[SCAdReminderTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042945b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306ad18 + 8))
  ;
  return;
}



/* Entry: 1042945c8; end: 1042945e7;  */

void FUN_1042945c8(void)

{
  _objc_opt_self(&PTR_PTR_112993b58);
  return;
}



/* Entry: 1042945e8; end: 1042945eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042945e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306ad10) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ad18);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042945ec; end: 1042945fb; -[SCAdReportTrackInfo adFlagged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1042945ec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ad48);
}



/* Entry: 1042945fc; end: 104294607; -[SCAdReportTrackInfo adFlaggedReason] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042945fc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ad50))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ad50);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104294608; end: 104294613; -[SCAdReportTrackInfo adFlaggedNote] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104294608(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ad58))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ad58);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104294614; end: 10429466b;  */

void FUN_104294614(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10429466c; end: 1042946f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10429466c(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306ad48) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ad50);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ad58);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042946f8; end: 1042947b3; -[SCAdReportTrackInfo initWithAdFlagged:adFlaggedReason:adFlaggedNote:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042946f8(long param_1,long param_2,undefined1 param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  *(undefined1 *)(param_1 + _DAT_11306ad48) = param_3;
  plVar1 = (long *)(param_1 + _DAT_11306ad50);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_11306ad58);
  *plVar1 = param_5;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042947b4; end: 104294823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042947b4(undefined1 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306ad48) = *param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ad50);
  puVar1[1] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ad58);
  puVar1[1] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104294824; end: 104294857; -[SCAdReportTrackInfo hash] */

undefined8 FUN_104294824(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104294858();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104294858; end: 10429492f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104294858(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306ad48));
  if (((undefined8 *)(unaff_x20 + _DAT_11306ad50))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ad50);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ad58))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ad58);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104294930; end: 104294acb;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104294930(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long unaff_x20;
  uint uVar8;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    _swift_dynamicCast(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar3 & 1) != 0) {
      bVar1 = *(byte *)(unaff_x20 + _DAT_11306ad48);
      bVar2 = *(byte *)(lStack_68 + _DAT_11306ad48);
      lVar5 = ((long *)(unaff_x20 + _DAT_11306ad50))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_11306ad50))[1];
      uVar7 = (uint)(lVar5 == 0 && lVar6 == 0);
      if (lVar5 != 0 && lVar6 != 0) {
        lVar4 = *(long *)(unaff_x20 + _DAT_11306ad50);
        if (lVar4 == *(long *)(lStack_68 + _DAT_11306ad50) && lVar5 == lVar6) {
          uVar7 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar7 = (uint)lVar4;
        }
      }
      lVar5 = ((long *)(unaff_x20 + _DAT_11306ad58))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_11306ad58))[1];
      if (lVar5 == 0) {
        _swift_bridgeObjectRetain(lVar6);
        _objc_release(lStack_68);
        if (lVar6 == 0) {
          uVar8 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar6);
          uVar8 = 0;
        }
      }
      else {
        uVar8 = 0;
        if (lVar6 != 0) {
          lVar4 = *(long *)(unaff_x20 + _DAT_11306ad58);
          if (lVar4 == *(long *)(lStack_68 + _DAT_11306ad58) && lVar5 == lVar6) {
            _objc_release(lStack_68);
            uVar8 = 1;
            goto joined_r0x000104294a84;
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar8 = (uint)lVar4;
        }
        _objc_release(lStack_68);
      }
joined_r0x000104294a84:
      if (((bVar1 ^ bVar2) & 1) == 0) {
        uVar7 = uVar7 & uVar8;
        goto LAB_104294aa0;
      }
    }
  }
  uVar7 = 0;
LAB_104294aa0:
  return uVar7 & 1;
}



/* Entry: 104294acc; end: 104294b4b; -[SCAdReportTrackInfo isEqual:] */

uint FUN_104294acc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104294930(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104294b4c; end: 104294b4f; -[SCAdReportTrackInfo copyWithZone:] */

void FUN_104294b4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104294b50; end: 104294c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104294b50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = 0x4747414c465f4441;
  uVar1 = uVar3;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4747414c465f4441,0xea00000000004445);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ad50))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ad50);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f18a0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ad58))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ad58);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4747414c465f4441,0xef45544f4e5f4445);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104294c8c; end: 104294cdb; -[SCAdReportTrackInfo encodeWithCoder:] */

void FUN_104294c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104294b50(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104294cdc; end: 104294d0b;  */

void FUN_104294cdc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104294d0c(param_1);
  return;
}



/* Entry: 104294d0c; end: 104294f6b;  */

undefined8 FUN_104294d0c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_x20;
  undefined8 uVar7;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int iVar3;
  
  iVar2 = (int)&uStack_a0;
  iVar3 = (int)&uStack_a0;
  uVar7 = 0x4747414c465f4441;
  uVar4 = uVar7;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4747414c465f4441,0xea00000000004445);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar4);
  uVar4 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f18a0);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    lVar5 = 0;
    uVar4 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_98;
    uVar4 = uStack_a0;
    if (iVar2 == 0) {
      uVar4 = 0;
      lVar5 = 0;
    }
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4747414c465f4441,0xef45544f4e5f4445);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (lVar6 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar7 = 0;
    lVar6 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar7 = uStack_a0;
    lVar6 = lStack_98;
    if (iVar3 == 0) {
      uVar7 = 0;
      lVar6 = 0;
    }
  }
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar5);
    _swift_bridgeObjectRelease(lVar5);
  }
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,lVar6);
    _swift_bridgeObjectRelease(lVar6);
  }
  func_0x00010bff1680();
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 104294f6c; end: 104294f93; -[SCAdReportTrackInfo initWithCoder:] */

void FUN_104294f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104294d0c();
  return;
}



/* Entry: 104294f94; end: 104294faf; -[SCAdReportTrackInfo description] */

void FUN_104294f94(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104294fb0; end: 10429502b; -[SCAdReportTrackInfo init] */

void FUN_104294fb0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdReportTrackInfoWrapper.swift",0x2d,2,0x52,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104294ff8);
  (*pcVar1)();
}



/* Entry: 10429502c; end: 10429506b; -[SCAdReportTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10429502c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ad50 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306ad58 + 8))
  ;
  return;
}



/* Entry: 10429506c; end: 10429508b;  */

void FUN_10429506c(void)

{
  _objc_opt_self(&PTR_PTR_112993c30);
  return;
}



/* Entry: 10429508c; end: 1042950cb;  */

undefined8 FUN_10429508c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_104295e5c(param_1);
  func_0x00010180cee4(param_1);
  return uVar1;
}



/* Entry: 1042950cc; end: 1042952f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042950cc(void)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(unaff_x20 + _DAT_11306ad88);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306ad90);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306ad98);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306ada0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306ada8);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x00010bfde980();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306adb0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306adb8);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042952f4; end: 104295743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042952f4(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long unaff_x20;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar10 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar2 = &lStack_88;
    _swift_dynamicCast(plVar2,auStack_80,PTR___sypN_11034f1a8 + 8,lVar10,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar7 = *(long *)(unaff_x20 + _DAT_11306ad88);
      lVar10 = *(long *)(lStack_88 + _DAT_11306ad88);
      uVar8 = (uint)(lVar7 == 0 && lVar10 == 0);
      if (lVar7 != 0 && lVar10 != 0) {
        FUN_1042967d0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retain(lVar10);
        _objc_retain();
        lVar3 = lVar7;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar8 = (uint)lVar3;
        _objc_release(lVar7);
        _objc_release(lVar10);
      }
      lVar7 = *(long *)(unaff_x20 + _DAT_11306ad90);
      lVar10 = *(long *)(lStack_88 + _DAT_11306ad90);
      uVar9 = (uint)(lVar7 == 0 && lVar10 == 0);
      if (lVar7 != 0 && lVar10 != 0) {
        FUN_1042967d0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retain(lVar10);
        _objc_retain();
        lVar3 = lVar7;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar9 = (uint)lVar3;
        _objc_release(lVar7);
        _objc_release(lVar10);
      }
      lVar7 = *(long *)(unaff_x20 + _DAT_11306ad98);
      lVar10 = *(long *)(lStack_88 + _DAT_11306ad98);
      uVar11 = (uint)(lVar7 == 0 && lVar10 == 0);
      if ((lVar7 != 0) && (lVar10 != 0)) {
        FUN_1042967d0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retain(lVar10);
        _objc_retain();
        lVar3 = lVar7;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar11 = (uint)lVar3;
        _objc_release(lVar7);
        _objc_release(lVar10);
      }
      lVar7 = *(long *)(unaff_x20 + _DAT_11306ada0);
      lVar10 = *(long *)(lStack_88 + _DAT_11306ada0);
      uVar12 = (uint)(lVar7 == 0 && lVar10 == 0);
      if ((lVar7 != 0) && (lVar10 != 0)) {
        FUN_1042967d0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retain(lVar10);
        _objc_retain();
        lVar3 = lVar7;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar12 = (uint)lVar3;
        _objc_release(lVar7);
        _objc_release(lVar10);
      }
      lVar10 = *(long *)(unaff_x20 + _DAT_11306ada8);
      if (lVar10 == 0) {
        uVar1 = (uint)(*(long *)(lStack_88 + _DAT_11306ada8) == 0);
      }
      else {
        func_0x00010c071ae0();
        uVar1 = (uint)lVar10;
      }
      lVar7 = *(long *)(unaff_x20 + _DAT_11306adb0);
      lVar10 = *(long *)(lStack_88 + _DAT_11306adb0);
      uVar5 = (uint)(lVar7 == 0 && lVar10 == 0);
      if ((lVar7 != 0) && (lVar10 != 0)) {
        FUN_1042967d0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retain(lVar10);
        _objc_retain();
        lVar3 = lVar7;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar5 = (uint)lVar3;
        _objc_release(lVar7);
        _objc_release(lVar10);
      }
      lVar7 = *(long *)(unaff_x20 + _DAT_11306adb8);
      lVar10 = *(long *)(lStack_88 + _DAT_11306adb8);
      if (lVar7 == 0) {
        lVar3 = lVar10;
        _objc_retain(lVar10);
        _objc_release(lStack_88);
        if (lVar10 != 0) {
          uVar6 = 0;
          goto LAB_1042956f0;
        }
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
        lVar3 = lStack_88;
        if (lVar10 != 0) {
          FUN_1042967d0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retain(lVar10);
          _objc_retain(lVar7);
          lVar4 = lVar7;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar6 = (uint)lVar4;
          _objc_release(lVar7);
          _objc_release(lVar10);
        }
LAB_1042956f0:
        _objc_release(lVar3);
      }
      if ((uVar8 & uVar9 & uVar11 & uVar12 & uVar1 & 1) != 0) {
        uVar5 = uVar5 & uVar6;
        goto LAB_104295718;
      }
    }
  }
  uVar5 = 0;
LAB_104295718:
  return uVar5 & 1;
}



/* Entry: 104295744; end: 104295753; -[SCAdSKOverlayTrackInfo preloadTriggeredMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104295744(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ad88));
  return;
}



/* Entry: 104295754; end: 104295763; -[SCAdSKOverlayTrackInfo preloadedMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104295754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ad90));
  return;
}



/* Entry: 104295764; end: 104295773; -[SCAdSKOverlayTrackInfo presentTriggeredMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104295764(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ad98));
  return;
}



/* Entry: 104295774; end: 104295783; -[SCAdSKOverlayTrackInfo presentedMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104295774(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ada0));
  return;
}



/* Entry: 104295784; end: 104295793; -[SCAdSKOverlayTrackInfo loadError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104295784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ada8));
  return;
}



/* Entry: 104295794; end: 1042957a3; -[SCAdSKOverlayTrackInfo erroredMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104295794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306adb0));
  return;
}



/* Entry: 1042957a4; end: 1042957b3; -[SCAdSKOverlayTrackInfo cumulativeViewTimeSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042957a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306adb8));
  return;
}



/* Entry: 1042957b4; end: 104295877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042957b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306ad88) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306ad90) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306ad98) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306ada0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306ada8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306adb0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306adb8) = param_7;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104295878; end: 104295977; -[SCAdSKOverlayTrackInfo initWithPreloadTriggeredMs:preloadedMs:presentTriggeredMs:presentedMs:loadError:erroredMs:cumulativeViewTimeSeconds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104295878(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306ad88) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306ad90) = param_4;
  *(undefined8 *)(param_1 + _DAT_11306ad98) = param_5;
  *(undefined8 *)(param_1 + _DAT_11306ada0) = param_6;
  *(undefined8 *)(param_1 + _DAT_11306ada8) = param_7;
  *(undefined8 *)(param_1 + _DAT_11306adb0) = param_8;
  *(undefined8 *)(param_1 + _DAT_11306adb8) = param_9;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 104295978; end: 1042959ab; -[SCAdSKOverlayTrackInfo hash] */

undefined8 FUN_104295978(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1042950cc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1042959ac; end: 104295a2b; -[SCAdSKOverlayTrackInfo isEqual:] */

uint FUN_1042959ac(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042952f4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104295a2c; end: 104295a2f; -[SCAdSKOverlayTrackInfo copyWithZone:] */

void FUN_104295a2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104295a30; end: 104295c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104295a30(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f18f0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4544414f4c455250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4544414f4c455250,0xec000000534d5f44);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f1910);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x45544e4553455250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45544e4553455250,0xec000000534d5f44);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5252455f44414f4c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5252455f44414f4c,0xea0000000000524f);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5f4445524f525245;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4445524f525245,0xea0000000000534d);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f1930);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104295c40; end: 104295c8f; -[SCAdSKOverlayTrackInfo encodeWithCoder:] */

void FUN_104295c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104295a30(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104295c90; end: 104295ccf;  */

undefined8 FUN_104295c90(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1042961b4(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104295cd0; end: 104295d0b; -[SCAdSKOverlayTrackInfo initWithCoder:] */

undefined8 FUN_104295cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1042961b4();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104295d0c; end: 104295d57; -[SCAdSKOverlayTrackInfo description] */

void FUN_104295d0c(undefined8 param_1)

{
  undefined1 auStack_88 [104];
  
  _objc_retain();
  FUN_104296024(auStack_88);
  _objc_release(param_1);
  func_0x00010180cee4(auStack_88);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104295d58; end: 104295dd3; -[SCAdSKOverlayTrackInfo init] */

void FUN_104295d58(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdSKOverlayTrackInfoWrapper.swift",0x30,2,0x7f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104295da0);
  (*pcVar1)();
}



/* Entry: 104295dd4; end: 104295e5b; -[SCAdSKOverlayTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104295dd4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ad88));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ad90));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ad98));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ada0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ada8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306adb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306adb8));
  return;
}



/* Entry: 104295e5c; end: 104296023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104295e5c(undefined8 *param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_b8 [104];
  
  _swift_getObjectType();
  if (*(char *)(param_1 + 1) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = *param_1;
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306ad88) = puVar1;
  if (*(char *)(param_1 + 3) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[2];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306ad90) = puVar1;
  if (*(char *)(param_1 + 5) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[4];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306ad98) = puVar1;
  if (*(char *)(param_1 + 7) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[6];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306ada0) = puVar1;
  *(undefined8 *)(unaff_x20 + _DAT_11306ada8) = param_1[8];
  if (*(char *)(param_1 + 10) == '\x01') {
    func_0x0001018a3350(param_1,auStack_b8);
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[9];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x0001018a3350(param_1,auStack_b8);
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306adb0) = puVar1;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    uVar2 = param_1[0xb];
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(uVar2);
  }
  *(undefined **)(unaff_x20 + _DAT_11306adb8) = puVar1;
  _objc_msgSendSuper2(&stack0xffffffffffffff38,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104296024; end: 1042961b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296024(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar8 = 0;
  bVar1 = *(long *)(param_3 + _DAT_11306ad88) == 0;
  if (bVar1) {
    uVar9 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar9 = param_2;
  }
  bVar2 = *(long *)(param_3 + _DAT_11306ad90) == 0;
  if (!bVar2) {
    func_0x00010bf885a0();
    uVar8 = param_2;
  }
  uVar10 = 0;
  bVar3 = *(long *)(param_3 + _DAT_11306ad98) == 0;
  if (bVar3) {
    uVar11 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar11 = param_2;
  }
  bVar4 = *(long *)(param_3 + _DAT_11306ada0) == 0;
  if (!bVar4) {
    func_0x00010bf885a0();
    uVar10 = param_2;
  }
  uVar6 = *(undefined8 *)(param_3 + _DAT_11306ada8);
  lVar7 = *(long *)(param_3 + _DAT_11306adb0);
  if (lVar7 == 0) {
    _objc_retain(uVar6);
    uVar12 = 0;
  }
  else {
    _objc_retain(uVar6);
    func_0x00010bf885a0(lVar7);
    uVar12 = param_2;
  }
  bVar5 = *(long *)(param_3 + _DAT_11306adb8) == 0;
  if (bVar5) {
    param_2 = 0;
  }
  else {
    func_0x00010bf885a0();
  }
  *param_1 = uVar9;
  *(bool *)(param_1 + 1) = bVar1;
  param_1[2] = uVar8;
  *(bool *)(param_1 + 3) = bVar2;
  param_1[4] = uVar11;
  *(bool *)(param_1 + 5) = bVar3;
  param_1[6] = uVar10;
  *(bool *)(param_1 + 7) = bVar4;
  param_1[8] = uVar6;
  param_1[9] = uVar12;
  *(bool *)(param_1 + 10) = lVar7 == 0;
  param_1[0xb] = param_2;
  *(bool *)(param_1 + 0xc) = bVar5;
  return;
}



/* Entry: 1042961b4; end: 1042967af;  */

undefined8 FUN_1042961b4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f18f0);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1042967d0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar2,6);
    uVar2 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
    }
  }
  uVar5 = 0x4544414f4c455250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4544414f4c455250,0xec000000534d5f44);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    FUN_1042967d0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar5,6);
    uVar5 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
  }
  uVar6 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f1910);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    FUN_1042967d0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar6,6);
    uVar6 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar6 = 0;
    }
  }
  uVar7 = 0x45544e4553455250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45544e4553455250,0xec000000534d5f44);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    FUN_1042967d0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar7,6);
    uVar7 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar7 = 0;
    }
  }
  uVar8 = 0x5252455f44414f4c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5252455f44414f4c,0xea0000000000524f);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    FUN_1042967d0(0,0x112d46e68,&PTR__OBJC_CLASS___NSError_1126ae858);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar8,6);
    uVar8 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar8 = 0;
    }
  }
  uVar9 = 0x5f4445524f525245;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4445524f525245,0xea0000000000534d);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    FUN_1042967d0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar9,6);
    uVar9 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar9 = 0;
    }
  }
  uVar10 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f1930);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  if (param_1 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    FUN_1042967d0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar4 = &uStack_a8;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar10,6);
    uVar10 = uStack_a8;
    if ((int)puVar4 == 0) {
      uVar10 = 0;
    }
  }
  func_0x00010c038620();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  _objc_release(uVar9);
  _objc_release(uVar10);
  return unaff_x20;
}



/* Entry: 1042967b0; end: 1042967cf;  */

void FUN_1042967b0(void)

{
  _objc_opt_self(&PTR_PTR_112993d10);
  return;
}



/* Entry: 1042967d0; end: 10429684f;  */

void FUN_1042967d0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 104296850; end: 10429685b; -[SCAdSnapCommonTrackInfo creativeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104296850(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ade8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ade8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10429685c; end: 10429686b; -[SCAdSnapCommonTrackInfo snapIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10429685c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306adf0);
}


