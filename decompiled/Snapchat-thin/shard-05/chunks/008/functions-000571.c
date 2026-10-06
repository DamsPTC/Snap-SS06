/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10428e968; end: 10428e98f; -[SCAdLiveReviewTrackInfo initWithCoder:] */

void FUN_10428e968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10428e744();
  return;
}



/* Entry: 10428e990; end: 10428e9bb; -[SCAdLiveReviewTrackInfo description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428e990(long param_1)

{
  func_0x00010c067fc0(*(undefined8 *)(param_1 + _DAT_11306ab10));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10428e9bc; end: 10428ea37; -[SCAdLiveReviewTrackInfo init] */

void FUN_10428e9bc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdLiveReviewTrackInfoWrapper.swift",0x31,2,0x49,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10428ea04);
  (*pcVar1)();
}



/* Entry: 10428ea38; end: 10428ea6f; -[SCAdLiveReviewTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428ea38(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ab08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306ab10));
  return;
}



/* Entry: 10428ea70; end: 10428ea8f;  */

void FUN_10428ea70(void)

{
  _objc_opt_self(&PTR_PTR_1129934f0);
  return;
}



/* Entry: 10428ea90; end: 10428ea9f; -[SCAdPharmaTrackInfo impressions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428ea90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ab40));
  return;
}



/* Entry: 10428eaa0; end: 10428eaaf; -[SCAdPharmaTrackInfo clickInteractions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428eaa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ab48));
  return;
}



/* Entry: 10428eab0; end: 10428eb13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428eab0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306ab40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306ab48) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10428eb14; end: 10428eb8b; -[SCAdPharmaTrackInfo initWithImpressions:clickInteractions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428eb14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306ab40) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306ab48) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 10428eb8c; end: 10428ec33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428eb8c(ulong param_1,uint param_2)

{
  ulong uVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  FUN_104290ab0();
  _objc_allocWithZone();
  uVar1 = param_1 & 0xffffffffff;
  func_0x00010428fd54();
  *(ulong *)(unaff_x20 + _DAT_11306ab40) = uVar1;
  func_0x000104290ad0();
  _objc_allocWithZone();
  uVar1 = CONCAT44(param_2 >> 8,param_2 << 0x18) & 0xffffffffff | param_1 >> 0x28;
  func_0x0001042903a0();
  *(ulong *)(unaff_x20 + _DAT_11306ab48) = uVar1;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10428ec34; end: 10428ec93;  */

void FUN_10428ec34(ulong param_1)

{
  _objc_allocWithZone();
  func_0x00010428fd54(param_1 & 0xffffffffff);
  return;
}



/* Entry: 10428ec94; end: 10428ed13; -[SCAdPharmaTrackInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10428ec94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  _objc_retain();
  uVar1 = param_1;
  FUN_10428ed14();
  __ss6HasherV8_combineyySuF();
  func_0x00010428eeb8();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10428ed14; end: 10428f163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428ed14(void)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(unaff_x20 + _DAT_11306ab50);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306ab58);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306ab60);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306ab68);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11306ab70);
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



/* Entry: 10428f164; end: 10428f743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10428f164(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar9 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar1 = &lStack_88;
    _swift_dynamicCast(plVar1,auStack_80,PTR___sypN_11034f1a8 + 8,lVar9,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_11306ab50);
      lVar9 = *(long *)(lStack_88 + _DAT_11306ab50);
      uVar7 = (uint)(lVar6 == 0 && lVar9 == 0);
      if (lVar6 != 0 && lVar9 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar9);
        _objc_retain();
        lVar2 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar7 = (uint)lVar2;
        _objc_release(lVar6);
        _objc_release(lVar9);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11306ab58);
      lVar9 = *(long *)(lStack_88 + _DAT_11306ab58);
      uVar8 = (uint)(lVar6 == 0 && lVar9 == 0);
      if (lVar6 != 0 && lVar9 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar9);
        _objc_retain();
        lVar2 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar8 = (uint)lVar2;
        _objc_release(lVar6);
        _objc_release(lVar9);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11306ab60);
      lVar9 = *(long *)(lStack_88 + _DAT_11306ab60);
      uVar10 = (uint)(lVar6 == 0 && lVar9 == 0);
      if ((lVar6 != 0) && (lVar9 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar9);
        _objc_retain();
        lVar2 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar10 = (uint)lVar2;
        _objc_release(lVar6);
        _objc_release(lVar9);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11306ab68);
      lVar9 = *(long *)(lStack_88 + _DAT_11306ab68);
      uVar4 = (uint)(lVar6 == 0 && lVar9 == 0);
      if ((lVar6 != 0) && (lVar9 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar9);
        _objc_retain(lVar6);
        lVar2 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar4 = (uint)lVar2;
        _objc_release(lVar6);
        _objc_release(lVar9);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11306ab70);
      lVar9 = *(long *)(lStack_88 + _DAT_11306ab70);
      if (lVar6 == 0) {
        lVar2 = lVar9;
        _objc_retain(lVar9);
        _objc_release(lStack_88);
        if (lVar9 != 0) {
          uVar5 = 0;
          goto LAB_10428f408;
        }
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
        lVar2 = lStack_88;
        if (lVar9 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar9);
          _objc_retain(lVar6);
          lVar3 = lVar6;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar5 = (uint)lVar3;
          _objc_release(lVar6);
          _objc_release(lVar9);
        }
LAB_10428f408:
        _objc_release(lVar2);
      }
      if ((uVar7 & uVar8 & uVar10 & 1) != 0) {
        uVar4 = uVar4 & uVar5;
        goto LAB_10428f428;
      }
    }
  }
  uVar4 = 0;
LAB_10428f428:
  return uVar4 & 1;
}



/* Entry: 10428f744; end: 10428f74f; -[SCAdPharmaTrackInfo isEqual:] */

uint FUN_10428f744(undefined8 param_1,undefined8 param_2,long param_3)

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
  (*(code *)0x10428f05c)(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10428f750; end: 10428f7fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428f750(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x4953534552504d49;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4953534552504d49,0xeb00000000534e4f);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f1530);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10428f7fc; end: 10428f84b; -[SCAdPharmaTrackInfo encodeWithCoder:] */

void FUN_10428f7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10428f750(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10428f84c; end: 10428f87b;  */

void FUN_10428f84c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10428f87c(param_1);
  return;
}



/* Entry: 10428f87c; end: 10428fa7b;  */

undefined8 FUN_10428f87c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar2 = 0x4953534552504d49;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4953534552504d49,0xeb00000000534e4f);
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
LAB_10428fa24:
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    FUN_104290ab0();
    puVar1 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_88;
    _swift_dynamicCast(plVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,lVar2,6);
    lVar3 = lStack_88;
    if (((ulong)plVar4 & 1) != 0) {
      lVar5 = -0x2fffffffffffffee;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f1530);
      lVar2 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      if (lVar2 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
        _swift_unknownObjectRelease(lVar2);
        lVar5 = lVar2;
      }
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      lStack_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) {
        _objc_release(param_1);
        param_1 = lVar3;
        goto LAB_10428fa24;
      }
      func_0x000104290ad0();
      plVar4 = &lStack_88;
      _swift_dynamicCast(plVar4,&uStack_60,puVar1 + 8,lVar5,6);
      if (((ulong)plVar4 & 1) != 0) {
        func_0x00010c01d4a0();
        _objc_release(param_1);
        _objc_release(lStack_88);
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



/* Entry: 10428fa7c; end: 10428faa3; -[SCAdPharmaTrackInfo initWithCoder:] */

void FUN_10428fa7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10428f87c();
  return;
}



/* Entry: 10428faa4; end: 10428fb1b; -[SCAdPharmaTrackInfo description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428faa4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11306ab40);
  _objc_retain();
  _objc_retain(uVar1);
  FUN_1042908b8();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11306ab48);
  _objc_retain(uVar1);
  func_0x0001042909b4();
  _objc_release(param_1);
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10428fb1c; end: 10428fb63; -[SCAdPharmaTrackInfo init] */

void FUN_10428fb1c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdPharmaTrackInfoWrapper.swift",0x2d,2,0x49,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10428fb64);
  (*pcVar1)();
}



/* Entry: 10428fb64; end: 10428fb67;  */

void FUN_10428fb64(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10428fb68; end: 10428fb9f; -[SCAdPharmaTrackInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428fb68(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ab40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306ab48));
  return;
}



/* Entry: 10428fba0; end: 10428fbaf; -[SCAdPharmaDisclaimerImpressions importantSafetyInformation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428fba0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ab50));
  return;
}



/* Entry: 10428fbb0; end: 10428fbbf; -[SCAdPharmaDisclaimerImpressions prescribingInformation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428fbb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ab58));
  return;
}



/* Entry: 10428fbc0; end: 10428fbcf; -[SCAdPharmaDisclaimerImpressions medicationGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428fbc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ab60));
  return;
}



/* Entry: 10428fbd0; end: 10428fbdf; -[SCAdPharmaDisclaimerImpressions patientInformation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428fbd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ab68));
  return;
}



/* Entry: 10428fbe0; end: 10428fbef; -[SCAdPharmaDisclaimerImpressions brandWebsite] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428fbe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ab70));
  return;
}



/* Entry: 10428fbf0; end: 10428fc8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428fbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306ab50) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306ab58) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306ab60) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306ab68) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306ab70) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10428fc8c; end: 10428feb3; -[SCAdPharmaDisclaimerImpressions initWithImportantSafetyInformation:prescribingInformation:medicationGuide:patientInformation:brandWebsite:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428fc8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306ab50) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306ab58) = param_4;
  *(undefined8 *)(param_1 + _DAT_11306ab60) = param_5;
  *(undefined8 *)(param_1 + _DAT_11306ab68) = param_6;
  *(undefined8 *)(param_1 + _DAT_11306ab70) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 10428feb4; end: 10428fee7; -[SCAdPharmaDisclaimerImpressions hash] */

undefined8 FUN_10428feb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10428ed14();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10428fee8; end: 10428fef3; -[SCAdPharmaDisclaimerImpressions isEqual:] */

uint FUN_10428fee8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10428f164(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10428fef4; end: 104290073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10428fef4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f1580);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f15a0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f15c0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f15e0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x45575f444e415242;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45575f444e415242,0xed00004554495342);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104290074; end: 1042900c3; -[SCAdPharmaDisclaimerImpressions encodeWithCoder:] */

void FUN_104290074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10428fef4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1042900c4; end: 104290103;  */

undefined8 FUN_1042900c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_104290af0(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104290104; end: 10429013b; -[SCAdPharmaDisclaimerImpressions description] */

void FUN_104290104(undefined8 param_1)

{
  _objc_retain();
  FUN_1042908b8();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10429013c; end: 104290183; -[SCAdPharmaDisclaimerImpressions init] */

void FUN_10429013c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdPharmaTrackInfoWrapper.swift",0x2d,2,0xb5,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104290184);
  (*pcVar1)();
}



/* Entry: 104290184; end: 1042901eb; -[SCAdPharmaDisclaimerImpressions .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104290184(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ab50));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ab58));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ab60));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ab68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306ab70));
  return;
}



/* Entry: 1042901ec; end: 1042901fb; -[SCAdPharmaDisclaimerClickInteractions importantSafetyInformation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042901ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ab78));
  return;
}



/* Entry: 1042901fc; end: 10429020b; -[SCAdPharmaDisclaimerClickInteractions prescribingInformation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042901fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ab80));
  return;
}



/* Entry: 10429020c; end: 10429021b; -[SCAdPharmaDisclaimerClickInteractions medicationGuide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10429020c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ab88));
  return;
}



/* Entry: 10429021c; end: 10429022b; -[SCAdPharmaDisclaimerClickInteractions patientInformation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10429021c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ab90));
  return;
}



/* Entry: 10429022c; end: 10429023b; -[SCAdPharmaDisclaimerClickInteractions brandWebsite] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10429022c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ab98));
  return;
}



/* Entry: 10429023c; end: 1042902d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10429023c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306ab78) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306ab80) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306ab88) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306ab90) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306ab98) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042902d8; end: 1042904ff; -[SCAdPharmaDisclaimerClickInteractions initWithImportantSafetyInformation:prescribingInformation:medicationGuide:patientInformation:brandWebsite:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042902d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11306ab78) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306ab80) = param_4;
  *(undefined8 *)(param_1 + _DAT_11306ab88) = param_5;
  *(undefined8 *)(param_1 + _DAT_11306ab90) = param_6;
  *(undefined8 *)(param_1 + _DAT_11306ab98) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 104290500; end: 104290533; -[SCAdPharmaDisclaimerClickInteractions hash] */

undefined8 FUN_104290500(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010428eeb8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104290534; end: 10429053f; -[SCAdPharmaDisclaimerClickInteractions isEqual:] */

uint FUN_104290534(undefined8 param_1,undefined8 param_2,long param_3)

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
  (*(code *)0x10428f454)(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 104290540; end: 1042905cb;  */

uint FUN_104290540(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

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



/* Entry: 1042905cc; end: 10429074b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042905cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f1580);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f15a0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f15c0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f15e0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x45575f444e415242;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45575f444e415242,0xed00004554495342);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10429074c; end: 10429079b; -[SCAdPharmaDisclaimerClickInteractions encodeWithCoder:] */

void FUN_10429074c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1042905cc(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10429079c; end: 1042907d3; -[SCAdPharmaDisclaimerClickInteractions description] */

void FUN_10429079c(undefined8 param_1)

{
  _objc_retain();
  func_0x0001042909b4();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1042907d4; end: 10429084f; -[SCAdPharmaDisclaimerClickInteractions init] */

void FUN_1042907d4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdPharmaTrackInfoWrapper.swift",0x2d,2,0x124,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10429081c);
  (*pcVar1)();
}



/* Entry: 104290850; end: 1042908b7; -[SCAdPharmaDisclaimerClickInteractions .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104290850(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ab78));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ab80));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ab88));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ab90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306ab98));
  return;
}



/* Entry: 1042908b8; end: 104290aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1042908b8(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = *(ulong *)(param_1 + _DAT_11306ab50);
  if (uVar1 == 0) {
    uVar1 = 2;
  }
  else {
    func_0x00010bf1f3c0();
    uVar1 = uVar1 & 0xffffffff;
  }
  lVar2 = *(long *)(param_1 + _DAT_11306ab58);
  if (lVar2 == 0) {
    uVar4 = 0x200;
  }
  else {
    func_0x00010bf1f3c0();
    uVar4 = 0x100;
    if ((int)lVar2 == 0) {
      uVar4 = 0;
    }
  }
  lVar2 = *(long *)(param_1 + _DAT_11306ab60);
  if (lVar2 == 0) {
    uVar5 = 0x20000;
  }
  else {
    func_0x00010bf1f3c0();
    uVar5 = 0x10000;
    if ((int)lVar2 == 0) {
      uVar5 = 0;
    }
  }
  lVar2 = *(long *)(param_1 + _DAT_11306ab68);
  if (lVar2 == 0) {
    uVar6 = 0x2000000;
  }
  else {
    func_0x00010bf1f3c0();
    uVar6 = 0x1000000;
    if ((int)lVar2 == 0) {
      uVar6 = 0;
    }
  }
  lVar2 = *(long *)(param_1 + _DAT_11306ab70);
  if (lVar2 == 0) {
    uVar3 = 0x200000000;
  }
  else {
    func_0x00010bf1f3c0();
    uVar3 = 0x100000000;
    if ((int)lVar2 == 0) {
      uVar3 = 0;
    }
  }
  return uVar4 | uVar1 | uVar5 | uVar6 | uVar3;
}



/* Entry: 104290ab0; end: 104290aef;  */

void FUN_104290ab0(void)

{
  _objc_opt_self(&PTR_PTR_1129936a0);
  return;
}



/* Entry: 104290af0; end: 104290ef3;  */

undefined8 FUN_104290af0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar2 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f1580);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar2,6);
    uVar2 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
    }
  }
  uVar5 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f15a0);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar5,6);
    uVar5 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
  }
  uVar6 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1f15c0);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar6,6);
    uVar6 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar6 = 0;
    }
  }
  uVar7 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f15e0);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar7,6);
    uVar7 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar7 = 0;
    }
  }
  uVar8 = 0x45575f444e415242;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45575f444e415242,0xed00004554495342);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (param_1 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar8,6);
    uVar8 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar8 = 0;
    }
  }
  func_0x00010c01d3a0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar8);
  return unaff_x20;
}



/* Entry: 104290ef4; end: 104290f13;  */

void FUN_104290ef4(void)

{
  _objc_opt_self(&PTR_PTR_1129935c8);
  return;
}



/* Entry: 104290f14; end: 104290f17; -[SCAdPharmaDisclaimerClickInteractions initWithCoder:] */

undefined8 FUN_104290f14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_104290af0();
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 104290f18; end: 104290f1f; -[SCAdPharmaDisclaimerImpressions initWithCoder:] */

undefined8 FUN_104290f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_104290af0();
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 104290f20; end: 104290f23; -[SCAdPharmaDisclaimerImpressions copyWithZone:] */

void FUN_104290f20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104290f24; end: 104290f27; -[SCAdPharmaTrackInfo copyWithZone:] */

void FUN_104290f24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104290f28; end: 104290f33; -[SCAdPharmaDisclaimerClickInteractions copyWithZone:] */

void FUN_104290f28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104290f34; end: 104290f43; -[SCAdPlayableImpressionInfo containsPlayableAd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104290f34(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ac18);
}



/* Entry: 104290f44; end: 104290f53; -[SCAdPlayableImpressionInfo playableCtaDsiplayedTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104290f44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ac20));
  return;
}



/* Entry: 104290f54; end: 104290f63; -[SCAdPlayableImpressionInfo playableCtaTapTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104290f54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ac28));
  return;
}



/* Entry: 104290f64; end: 104290f73; -[SCAdPlayableImpressionInfo playableLoadedTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104290f64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ac30));
  return;
}



/* Entry: 104290f74; end: 104290f83; -[SCAdPlayableImpressionInfo playableDismissTapTsMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104290f74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ac38));
  return;
}



/* Entry: 104290f84; end: 104290f93; -[SCAdPlayableImpressionInfo playableContentTaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104290f84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ac40));
  return;
}



/* Entry: 104290f94; end: 104290fef; -[SCAdPlayableImpressionInfo loadingErrorDomain] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104290f94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ac48))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ac48);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104290ff0; end: 104290fff; -[SCAdPlayableImpressionInfo loadingErrorCode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104290ff0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ac50));
  return;
}



/* Entry: 104291000; end: 10429100f; -[SCAdPlayableImpressionInfo didTapRetry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104291000(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ac58));
  return;
}



/* Entry: 104291010; end: 1042911f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104291010(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306ac18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306ac20) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306ac28) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306ac30) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306ac38) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306ac40) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ac48);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306ac50) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11306ac58) = param_10;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1042911f8; end: 1042912db; -[SCAdPlayableImpressionInfo initWithContainsPlayableAd:playableCtaDsiplayedTsMs:playableCtaTapTsMs:playableLoadedTsMs:playableDismissTapTsMs:playableContentTaps:loadingErrorDomain:loadingErrorCode:didTapRetry:] */

void FUN_1042911f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11)

{
  if (param_9 == 0) {
    param_9 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  func_0x000104291104(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_2,param_10,
                      param_11);
  return;
}



/* Entry: 1042912dc; end: 10429130b;  */

void FUN_1042912dc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10429130c(param_1);
  return;
}



/* Entry: 10429130c; end: 10429151f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10429130c(undefined1 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_b8 [120];
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_11306ac18) = *param_1;
  if (param_1[0x10] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c059500();
  }
  *(undefined **)(unaff_x20 + _DAT_11306ac20) = puVar2;
  if (param_1[0x20] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c059500();
  }
  *(undefined **)(unaff_x20 + _DAT_11306ac28) = puVar2;
  if (param_1[0x30] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c059500();
  }
  *(undefined **)(unaff_x20 + _DAT_11306ac30) = puVar2;
  if (param_1[0x40] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c059500();
  }
  *(undefined **)(unaff_x20 + _DAT_11306ac38) = puVar2;
  if (param_1[0x50] == '\x01') {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c059500();
  }
  *(undefined **)(unaff_x20 + _DAT_11306ac40) = puVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ac48);
  puVar1[1] = *(undefined8 *)(param_1 + 0x60);
  *puVar1 = uVar3;
  if (param_1[0x70] == '\x01') {
    func_0x0001034bbb04(param_1,auStack_b8);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x0001034bbb04(param_1,auStack_b8);
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11306ac50) = puVar2;
  if (param_1[0x71] == '\x02') {
    func_0x000101865840(param_1);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010bff91e0();
    func_0x000101865840(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_11306ac58) = puVar2;
  _objc_msgSendSuper2(&stack0xffffffffffffff38,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104291520; end: 104291553; -[SCAdPlayableImpressionInfo hash] */

undefined8 FUN_104291520(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104291554();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104291554; end: 1042917df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104291554(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11306ac18));
  lVar2 = *(long *)(unaff_x20 + _DAT_11306ac20);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306ac28);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306ac30);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306ac38);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306ac40);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11306ac48))[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ac48);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar3 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306ac50);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11306ac58);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar2);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1042917e0; end: 104291c67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1042917e0(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uStack_8c;
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
    plVar3 = &lStack_88;
    _swift_dynamicCast(plVar3,auStack_80,PTR___sypN_11034f1a8 + 8,lVar10,6);
    if (((ulong)plVar3 & 1) != 0) {
      bVar1 = *(byte *)(unaff_x20 + _DAT_11306ac18);
      bVar2 = *(byte *)(lStack_88 + _DAT_11306ac18);
      lVar8 = *(long *)(unaff_x20 + _DAT_11306ac20);
      lVar10 = *(long *)(lStack_88 + _DAT_11306ac20);
      if (lVar8 == 0 || lVar10 == 0) {
        uStack_8c = (uint)(lVar8 == 0 && lVar10 == 0);
      }
      else {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uStack_8c = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11306ac28);
      lVar10 = *(long *)(lStack_88 + _DAT_11306ac28);
      uVar11 = (uint)(lVar8 == 0 && lVar10 == 0);
      if (lVar8 != 0 && lVar10 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar11 = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11306ac30);
      lVar10 = *(long *)(lStack_88 + _DAT_11306ac30);
      uVar12 = (uint)(lVar8 == 0 && lVar10 == 0);
      if ((lVar8 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar12 = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11306ac38);
      lVar10 = *(long *)(lStack_88 + _DAT_11306ac38);
      uVar13 = (uint)(lVar8 == 0 && lVar10 == 0);
      if ((lVar8 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar13 = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11306ac40);
      lVar10 = *(long *)(lStack_88 + _DAT_11306ac40);
      uVar9 = (uint)(lVar8 == 0 && lVar10 == 0);
      if ((lVar8 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain();
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar9 = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar10 = ((long *)(unaff_x20 + _DAT_11306ac48))[1];
      lVar8 = ((long *)(lStack_88 + _DAT_11306ac48))[1];
      uVar14 = (uint)(lVar10 == 0 && lVar8 == 0);
      if ((lVar10 != 0) && (lVar8 != 0)) {
        lVar4 = *(long *)(unaff_x20 + _DAT_11306ac48);
        if ((lVar4 == *(long *)(lStack_88 + _DAT_11306ac48)) && (lVar10 == lVar8)) {
          uVar14 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar14 = (uint)lVar4;
        }
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11306ac50);
      lVar10 = *(long *)(lStack_88 + _DAT_11306ac50);
      uVar15 = (uint)(lVar8 == 0 && lVar10 == 0);
      if ((lVar8 != 0) && (lVar10 != 0)) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar10);
        _objc_retain(lVar8);
        lVar4 = lVar8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar15 = (uint)lVar4;
        _objc_release(lVar8);
        _objc_release(lVar10);
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11306ac58);
      lVar10 = *(long *)(lStack_88 + _DAT_11306ac58);
      if (lVar8 == 0) {
        lVar4 = lVar10;
        _objc_retain(lVar10);
        _objc_release(lStack_88);
        if (lVar10 != 0) {
          uVar7 = 0;
          goto LAB_104291c10;
        }
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
        lVar4 = lStack_88;
        if (lVar10 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar10);
          _objc_retain(lVar8);
          lVar5 = lVar8;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar7 = (uint)lVar5;
          _objc_release(lVar8);
          _objc_release(lVar10);
        }
LAB_104291c10:
        _objc_release(lVar4);
      }
      uVar6 = 0;
      if (((((((uint)(bVar1 ^ bVar2) | uStack_8c ^ 0xffffffff) & 1) == 0) &&
           (((uVar11 ^ 1) & 1) == 0)) && (((uVar12 ^ 1) & 1) == 0)) &&
         (((((uVar13 ^ 1) & 1) == 0 && (((uVar9 ^ 1) & 1) == 0)) && (((uVar14 ^ 1) & 1) == 0)))) {
        uVar6 = uVar15 & uVar7;
      }
      goto LAB_1042918a0;
    }
  }
  uVar6 = 0;
LAB_1042918a0:
  return uVar6 & 1;
}



/* Entry: 104291c68; end: 104291ce7; -[SCAdPlayableImpressionInfo isEqual:] */

uint FUN_104291c68(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1042917e0(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104291ce8; end: 104291ceb; -[SCAdPlayableImpressionInfo copyWithZone:] */

void FUN_104291ce8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104291cec; end: 104291f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104291cec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f1600);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f1620);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f1640);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f1660);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f1680);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f16a0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ac48))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ac48);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f16c0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f16e0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x5f5041545f444944;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f5041545f444944,0xed00005952544552);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104291f94; end: 104291fe3; -[SCAdPlayableImpressionInfo encodeWithCoder:] */

void FUN_104291f94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104291cec(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104291fe4; end: 104292013;  */

void FUN_104291fe4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104292014(param_1);
  return;
}



/* Entry: 104292014; end: 1042926c7;  */

undefined8 FUN_104292014(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f1600);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f1f1620);
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
    uStack_c8 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar2,6);
    uStack_c8 = uStack_b0;
    if ((int)puVar4 == 0) {
      uStack_c8 = 0;
    }
  }
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f1640);
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
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uStack_d0 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar2,6);
    uStack_d0 = uStack_b0;
    if ((int)puVar4 == 0) {
      uStack_d0 = 0;
    }
  }
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f1660);
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
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar2,6);
    uVar2 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
    }
  }
  uVar5 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f1680);
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
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar5,6);
    uVar5 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
  }
  uVar6 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f16a0);
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
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar6,6);
    uVar6 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar6 = 0;
    }
  }
  uVar7 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f16c0);
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
    lVar3 = 0;
    uVar7 = 0;
  }
  else {
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar3 = lStack_a8;
    uVar7 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar7 = 0;
      lVar3 = 0;
    }
  }
  uVar8 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f16e0);
  lVar9 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (lVar9 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar9);
    _swift_unknownObjectRelease(lVar9);
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
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar8,6);
    uVar8 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar8 = 0;
    }
  }
  uVar10 = 0x5f5041545f444944;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f5041545f444944,0xed00005952544552);
  lVar9 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  if (lVar9 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar9);
    _swift_unknownObjectRelease(lVar9);
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
    func_0x0001002ed07c(0);
    puVar4 = &uStack_b0;
    _swift_dynamicCast(puVar4,&uStack_80,puVar1 + 8,uVar10,6);
    uVar10 = uStack_b0;
    if ((int)puVar4 == 0) {
      uVar10 = 0;
    }
  }
  if (lVar3 == 0) {
    uVar7 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,lVar3);
    _swift_bridgeObjectRelease(lVar3);
  }
  func_0x00010c002ac0(unaff_x20);
  _objc_release(uVar7);
  _objc_release(param_1);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(uVar10);
  return unaff_x20;
}



/* Entry: 1042926c8; end: 1042926ef; -[SCAdPlayableImpressionInfo initWithCoder:] */

void FUN_1042926c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104292014();
  return;
}



/* Entry: 1042926f0; end: 10429273b; -[SCAdPlayableImpressionInfo description] */

void FUN_1042926f0(undefined8 param_1)

{
  undefined1 auStack_98 [120];
  
  _objc_retain();
  FUN_104292854(auStack_98);
  _objc_release(param_1);
  func_0x000101865840(auStack_98);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10429273c; end: 1042927b7; -[SCAdPlayableImpressionInfo init] */

void FUN_10429273c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataServices/AdPlayableImpressionInfoWrapper.swift",0x34,2,0x94,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104292784);
  (*pcVar1)();
}



/* Entry: 1042927b8; end: 104292853; -[SCAdPlayableImpressionInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1042927b8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ac20));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ac28));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ac30));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ac38));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ac40));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ac48 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ac50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306ac58));
  return;
}



/* Entry: 104292854; end: 104292a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104292854(undefined1 *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lStack_90;
  long lStack_80;
  long lStack_70;
  
  uVar9 = *(undefined1 *)(param_2 + _DAT_11306ac18);
  lStack_70 = *(long *)(param_2 + _DAT_11306ac20);
  bVar1 = lStack_70 == 0;
  if (bVar1) {
    lStack_70 = 0;
  }
  else {
    func_0x00010c2827c0();
  }
  lStack_80 = *(long *)(param_2 + _DAT_11306ac28);
  bVar2 = lStack_80 == 0;
  if (bVar2) {
    lStack_80 = 0;
  }
  else {
    func_0x00010c2827c0();
  }
  lStack_90 = *(long *)(param_2 + _DAT_11306ac30);
  bVar3 = lStack_90 == 0;
  if (bVar3) {
    lStack_90 = 0;
  }
  else {
    func_0x00010c2827c0();
  }
  lVar11 = *(long *)(param_2 + _DAT_11306ac38);
  bVar4 = lVar11 == 0;
  if (bVar4) {
    lVar11 = 0;
  }
  else {
    func_0x00010c2827c0();
  }
  lVar12 = *(long *)(param_2 + _DAT_11306ac40);
  bVar5 = lVar12 == 0;
  if (bVar5) {
    lVar12 = 0;
  }
  else {
    func_0x00010c2827c0();
  }
  uVar7 = *(undefined8 *)(param_2 + _DAT_11306ac48);
  uVar8 = ((undefined8 *)(param_2 + _DAT_11306ac48))[1];
  lVar14 = *(long *)(param_2 + _DAT_11306ac50);
  bVar6 = lVar14 == 0;
  if (bVar6) {
    _swift_bridgeObjectRetain(uVar8);
  }
  else {
    _swift_bridgeObjectRetain(uVar8);
    func_0x00010c067fc0();
  }
  lVar13 = *(long *)(param_2 + _DAT_11306ac58);
  if (lVar13 == 0) {
    uVar10 = 2;
  }
  else {
    func_0x00010bf1f3c0();
    uVar10 = (undefined1)lVar13;
  }
  *param_1 = uVar9;
  *(long *)(param_1 + 8) = lStack_70;
  param_1[0x10] = bVar1;
  *(long *)(param_1 + 0x18) = lStack_80;
  param_1[0x20] = bVar2;
  *(long *)(param_1 + 0x28) = lStack_90;
  param_1[0x30] = bVar3;
  *(long *)(param_1 + 0x38) = lVar11;
  param_1[0x40] = bVar4;
  *(long *)(param_1 + 0x48) = lVar12;
  param_1[0x50] = bVar5;
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  *(undefined8 *)(param_1 + 0x60) = uVar8;
  *(long *)(param_1 + 0x68) = lVar14;
  param_1[0x70] = bVar6;
  param_1[0x71] = uVar10;
  return;
}



/* Entry: 104292a3c; end: 104292a5b;  */

void FUN_104292a3c(void)

{
  _objc_opt_self(&PTR_PTR_112993880);
  return;
}



/* Entry: 104292a5c; end: 104292a6b; -[SCAdPodTrackInfo placementInPod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104292a5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ac88);
}



/* Entry: 104292a6c; end: 104292a7b; -[SCAdPodTrackInfo adsPerPod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104292a6c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ac90);
}



/* Entry: 104292a7c; end: 104292ac7; -[SCAdPodTrackInfo podId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104292a7c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306ac98);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306ac98))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104292ac8; end: 104292ad7; -[SCAdPodTrackInfo podIndexPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104292ac8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306aca0);
}



/* Entry: 104292ad8; end: 104292ae7; -[SCAdPodTrackInfo adsPerPodOriginal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104292ad8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306aca8);
}



/* Entry: 104292ae8; end: 104292b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104292ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306ac88) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306ac90) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ac98);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11306aca0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11306aca8) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104292b94; end: 104292c47; -[SCAdPodTrackInfo initWithPlacementInPod:adsPerPod:podId:podIndexPosition:adsPerPodOriginal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104292b94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(param_1 + _DAT_11306ac88) = param_3;
  *(undefined8 *)(param_1 + _DAT_11306ac90) = param_4;
  puVar1 = (undefined8 *)(param_1 + _DAT_11306ac98);
  *puVar1 = param_5;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11306aca0) = param_6;
  *(undefined8 *)(param_1 + _DAT_11306aca8) = param_7;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104292c48; end: 104292d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104292c48(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11306ac88) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306ac90) = uVar2;
  uVar2 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ac98);
  puVar1[1] = param_1[3];
  *puVar1 = uVar2;
  uVar2 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_11306aca0) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_11306aca8) = uVar2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104292d58; end: 104292d8b; -[SCAdPodTrackInfo hash] */

undefined8 FUN_104292d58(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104292d8c();
  _objc_release(param_1);
  return uVar1;
}


