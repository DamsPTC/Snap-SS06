/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10446fcd0; end: 10446fd37; -[WebViewNavigationPluginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446fcd0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307c378));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11307c388));
  func_0x000101424b1c(param_1 + _DAT_11307c390);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_11307c398));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11307c3a0));
  return;
}



/* Entry: 10446fd38; end: 10446fe33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446fd38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  lVar2 = _DAT_11307c390;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_11307c390,0);
  *(undefined8 *)(unaff_x20 + _DAT_11307c388) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11307c378) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11307c380) = param_3;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_11307c398) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11307c3a0) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_msgSendSuper2(&stack0xffffffffffffff78,puVar1);
  return;
}



/* Entry: 10446fe34; end: 10446fe53;  */

void FUN_10446fe34(void)

{
  _objc_opt_self(&PTR_PTR_1129baf08);
  return;
}



/* Entry: 10446fe54; end: 10446ff13;  */

void FUN_10446fe54(ulong *param_1)

{
  ulong uVar1;
  ulong uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1044d77a8(0);
  uVar1 = uStack_38;
  _swift_unknownObjectRetain();
  FUN_1044d65c8();
  _swift_unknownObjectRelease(uStack_38);
  if ((uVar1 & 1) != 0) {
    uVar1 = uStack_38;
    _swift_unknownObjectRetain();
    func_0x0001044d66cc();
    _swift_unknownObjectRelease(uStack_38);
    if ((uVar1 & 1) != 0) {
      uVar1 = 0;
      FUN_104470d5c();
      _objc_allocWithZone();
      func_0x00010bfee200();
      _swift_unknownObjectRelease(uStack_38);
      uStack_38 = uVar1;
      goto LAB_10446fefc;
    }
  }
  FUN_104470c04(0);
  _objc_allocWithZone();
  func_0x00010446ff88();
LAB_10446fefc:
  *param_1 = uStack_38;
  return;
}



/* Entry: 10446ff14; end: 10446ff3b;  */

void FUN_10446ff14(ulong *param_1)

{
  ulong uVar1;
  ulong uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1044d77a8(0);
  uVar1 = uStack_38;
  _swift_unknownObjectRetain();
  FUN_1044d65c8();
  _swift_unknownObjectRelease(uStack_38);
  if ((uVar1 & 1) != 0) {
    uVar1 = uStack_38;
    _swift_unknownObjectRetain();
    func_0x0001044d66cc();
    _swift_unknownObjectRelease(uStack_38);
    if ((uVar1 & 1) != 0) {
      uVar1 = 0;
      FUN_104470d5c();
      _objc_allocWithZone();
      func_0x00010bfee200();
      _swift_unknownObjectRelease(uStack_38);
      uStack_38 = uVar1;
      goto LAB_10446fefc;
    }
  }
  FUN_104470c04(0);
  _objc_allocWithZone();
  func_0x00010446ff88();
LAB_10446fefc:
  *param_1 = uStack_38;
  return;
}



/* Entry: 10446ff3c; end: 10446ffd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446ff3c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307c3e0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10446ffd4; end: 10447002b; -[_TtC23StreamingImplementation32SCCodecFilteringManifestRewriter initWithConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10446ffd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11307c3e0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 10447002c; end: 10447020b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10447002c(undefined1 *param_1,ulong param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_80 [12];
  uint uStack_74;
  undefined1 *puStack_70;
  ulong uStack_68;
  
  lVar1 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1044d77a8(0);
  uVar7 = *(ulong *)(unaff_x20 + _DAT_11307c3e0);
  uVar5 = uVar7;
  FUN_1044d65c8();
  func_0x0001044d66cc();
  if (((uVar5 & 1) == 0) || ((uVar7 & 1) == 0)) {
    uStack_74 = (uint)uVar7;
    __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar6);
    puVar2 = param_1;
    uVar7 = param_2;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(param_1,param_2,puVar6);
    if (uVar7 != 0) {
      puVar3 = puVar2;
      puStack_70 = puVar2;
      uStack_68 = uVar7;
      func_0x000100e8b654();
      uVar4 = 0;
      __sSy10FoundationE8containsySbqd__SyRd__lF
                (&UNK_1107745b0,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar3,puVar3);
      if ((uVar4 & 1) == 0) {
        uVar4 = 0;
        puStack_70 = puVar2;
        uStack_68 = uVar7;
        __sSy10FoundationE8containsySbqd__SyRd__lF
                  (&UNK_1107745c0,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar3,puVar3);
        if ((uVar4 & 1) == 0) {
          _swift_bridgeObjectRelease(uVar7);
          goto LAB_1044701d8;
        }
      }
      uVar4 = uVar7;
      FUN_104470904(puVar2,uVar7,(uint)uVar5 & 1,uStack_74 & 1);
      _swift_bridgeObjectRelease(uVar7);
      puStack_70 = puVar2;
      uStack_68 = uVar4;
      __sSS10FoundationE8EncodingV4utf8ACvgZ(puVar6);
      uVar5 = 0;
      puVar2 = puVar6;
      __sSy10FoundationE4data5using20allowLossyConversionAA4DataVSgSSAAE8EncodingV_SbtF
                (puVar6,0,PTR___sSSN_11034da80,puVar3);
      (**(code **)(lVar8 + 8))(puVar6,lVar1);
      _swift_bridgeObjectRelease(uVar4);
      if (uVar5 >> 0x3c < 0xf) goto LAB_1044701e4;
    }
  }
LAB_1044701d8:
  func_0x00010006c00c(param_1,param_2);
  uVar5 = param_2;
  puVar2 = param_1;
LAB_1044701e4:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = puVar2;
  return auVar9;
}



/* Entry: 10447020c; end: 1044702b3; -[_TtC23StreamingImplementation32SCCodecFilteringManifestRewriter rewriteManifestFromData:] */

void FUN_10447020c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_3);
  _objc_release(uVar1);
  uVar1 = param_3;
  uVar3 = param_2;
  FUN_10447002c(param_3,param_2);
  func_0x00010006c090(param_3,param_2);
  _objc_release(param_1);
  uVar2 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar3);
  func_0x00010006c090(uVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1044702b4; end: 10447031f; +[_TtC23StreamingImplementation32SCCodecFilteringManifestRewriter filterDisallowedVariantsWithManifest:hevcAllowed:av1Allowed:] */

void FUN_1044702b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  FUN_104470904();
  _swift_bridgeObjectRelease(param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 104470320; end: 10447037f; -[_TtC23StreamingImplementation32SCCodecFilteringManifestRewriter init] */

void FUN_104470320(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("StreamingImplementation.SCCodecFilteringManifestRewriter",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10447034c);
  (*pcVar1)();
}



/* Entry: 104470380; end: 10447038f; -[_TtC23StreamingImplementation32SCCodecFilteringManifestRewriter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104470380(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11307c3e0));
  return;
}



/* Entry: 104470390; end: 104470503;  */

undefined8
FUN_104470390(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar4 = param_2;
  _swift_bridgeObjectRetain(param_2);
  uVar2 = param_3;
  do {
    while( true ) {
      if ((uVar2 ^ param_4) < 0x4000) {
        __sSS8IteratorV4nextSJSgyF();
        _swift_bridgeObjectRelease(param_2);
        if (uVar4 == 0) {
          return 1;
        }
        uVar7 = 0;
        param_2 = uVar4;
        goto LAB_1044704dc;
      }
      uVar1 = uVar2;
      uVar5 = param_3;
      __sSsySJSS5IndexVcig(uVar2,param_3,param_4,param_5,param_6);
      uVar6 = param_3;
      __sSs5index5afterSS5IndexVAD_tF(uVar2,param_3,param_4,param_5,param_6);
      uVar3 = uVar2;
      __sSS8IteratorV4nextSJSgyF();
      if (uVar6 == 0) {
        _swift_bridgeObjectRelease(uVar5);
        uVar7 = 1;
        goto LAB_1044704dc;
      }
      if ((uVar1 != uVar3) || (uVar6 != uVar5)) break;
      uVar4 = uVar6;
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease(uVar6);
    }
    uVar4 = uVar5;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar1,uVar5,uVar3,uVar6,0);
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(uVar6);
  } while ((uVar1 & 1) != 0);
  uVar7 = 0;
LAB_1044704dc:
  _swift_bridgeObjectRelease(param_2);
  return uVar7;
}



/* Entry: 104470504; end: 10447075b;  */

undefined1  [16] FUN_104470504(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long lVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  long alStack_90 [2];
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x112d483a8;
  func_0x0001000285a8(0x112d483a8,&UNK_10d910f00);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  lVar11 = (long)&uStack_80 + lVar2;
  uStack_80 = 0x223d534345444f43;
  uStack_78 = 0xe800000000000000;
  lVar3 = 0;
  uStack_70 = param_1;
  uStack_68 = param_2;
  __s10Foundation6LocaleVMa();
  lVar4 = lVar11;
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar11,1,1,lVar3);
  func_0x000100e8b654();
  *(long *)((long)alStack_90 + lVar2) = lVar4;
  *(long *)((long)alStack_90 + lVar2 + 8) = lVar4;
  uVar6 = 1;
  uVar9 = 0;
  uVar10 = 0;
  __sSy10FoundationE5range2of7optionsAB6localeSnySS5IndexVGSgqd___So22NSStringCompareOptionsVAiA6LocaleVSgtSyRd__lF
            (&uStack_80,1,0,0,1,lVar11,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
  func_0x000100eca640(lVar11);
  uVar7 = 0;
  uVar12 = 0;
  if ((uVar9 & 0xff) != 1) {
    func_0x000100ed9f54(uVar6,param_1,param_2);
    uVar12 = uVar6 >> 0xe;
    uVar7 = uVar6;
    while (uVar12 != param_1 >> 0xe) {
      uVar5 = uVar7;
      uVar8 = uVar6;
      __sSsySJSS5IndexVcig(uVar7,uVar6,param_1,param_2,uVar10);
      if ((uVar5 == 0x22) && (uVar8 == 0xe100000000000000)) {
        _swift_bridgeObjectRelease(0xe100000000000000);
LAB_1044706d0:
        if (uVar12 < uVar6 >> 0xe) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10447075c);
          (*pcVar1)();
        }
        uVar12 = uVar6;
        __sSsySsSnySS5IndexVGcig(uVar6,uVar7,uVar6,param_1,param_2,uVar10);
        _swift_bridgeObjectRelease(uVar10);
        __sSS14_fromSubstringySSSshFZ(uVar6,uVar7,uVar12,param_1);
        _swift_bridgeObjectRelease(param_1);
        uVar12 = uVar6;
        goto LAB_104470738;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(uVar8);
      if ((uVar5 & 1) != 0) goto LAB_1044706d0;
      __sSs5index5afterSS5IndexVAD_tF(uVar7,uVar6,param_1,param_2,uVar10);
      uVar12 = uVar7 >> 0xe;
    }
    _swift_bridgeObjectRelease(uVar10);
    uVar7 = 0;
    uVar12 = 0;
  }
LAB_104470738:
  auVar13._8_8_ = uVar7;
  auVar13._0_8_ = uVar12;
  return auVar13;
}



/* Entry: 10447075c; end: 104470903;  */

undefined8 FUN_10447075c(undefined8 param_1,undefined1 *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_48;
  
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  puVar4 = &uStack_60;
  uVar5 = 0;
  FUN_104470504();
  if (param_2 == (undefined1 *)0x0) {
    return 1;
  }
  puVar6 = param_2;
  __sSS10lowercasedSSyF();
  _swift_bridgeObjectRelease(param_2);
  if ((param_3 & 1) != 0) {
LAB_1044707a0:
    if ((param_4 & 1) == 0) {
      uStack_60 = 0x31307661;
      uStack_58 = 0xe400000000000000;
      uStack_50 = param_1;
      puStack_48 = puVar6;
      func_0x000100e8b654();
      __sSy10FoundationE8containsySbqd__SyRd__lF
                (&uStack_60,PTR___sSSN_11034da80,PTR___sSSN_11034da80,param_2,param_2);
      _swift_bridgeObjectRelease(puVar6);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
    }
    else {
      _swift_bridgeObjectRelease(puVar6);
    }
    return 0;
  }
  uStack_60 = 0x31637668;
  uStack_58 = 0xe400000000000000;
  uStack_50 = param_1;
  puStack_48 = puVar6;
  func_0x000100e8b654();
  __sSy10FoundationE8containsySbqd__SyRd__lF
            (&uStack_60,PTR___sSSN_11034da80,PTR___sSSN_11034da80,param_2,param_2);
  if ((uVar1 & 1) == 0) {
    uStack_60 = 0x31766568;
    uStack_58 = 0xe400000000000000;
    uStack_50 = param_1;
    puStack_48 = puVar6;
    __sSy10FoundationE8containsySbqd__SyRd__lF
              (&uStack_60,PTR___sSSN_11034da80,PTR___sSSN_11034da80,param_2,param_2);
    if ((uVar2 & 1) == 0) {
      uStack_60 = 0x31687664;
      uStack_58 = 0xe400000000000000;
      uStack_50 = param_1;
      puStack_48 = puVar6;
      __sSy10FoundationE8containsySbqd__SyRd__lF
                (&uStack_60,PTR___sSSN_11034da80,PTR___sSSN_11034da80,param_2,param_2);
      if ((uVar3 & 1) == 0) {
        uStack_60 = 0x65687664;
        uStack_58 = 0xe400000000000000;
        uStack_50 = param_1;
        puStack_48 = puVar6;
        __sSy10FoundationE8containsySbqd__SyRd__lF
                  (&uStack_60,PTR___sSSN_11034da80,PTR___sSSN_11034da80,param_2,param_2);
        param_2 = (undefined1 *)puVar4;
        if (((ulong)puVar4 & 1) == 0) goto LAB_1044707a0;
      }
    }
  }
  _swift_bridgeObjectRelease(puVar6);
  return 1;
}



/* Entry: 104470904; end: 104470c03;  */

undefined1  [16] FUN_104470904(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined *puStack_b8;
  undefined1 auStack_90 [16];
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uStack_78 = 10;
  uStack_70 = 0xe100000000000000;
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_80 = &uStack_78;
  _swift_bridgeObjectRetain(param_2);
  lVar5 = 0x7fffffffffffffff;
  func_0x0001014784b8(0x7fffffffffffffff,0,FUN_104470c24,auStack_90,param_1,param_2);
  if (*(long *)(lVar5 + 0x10) == 0) {
LAB_104470b80:
    _swift_bridgeObjectRelease(lVar5);
    uVar8 = 0x112e07ba0;
    func_0x0001000285a8(0x112e07ba0,&UNK_10dc1ee40);
    uVar9 = uVar8;
    FUN_104470c78();
    uVar10 = uVar9;
    func_0x000101478db0();
    uVar11 = 10;
    uVar12 = 0xe100000000000000;
    __sSTsSy7ElementRpzrlE6joined9separatorS2S_tF(10,0xe100000000000000,uVar8,uVar9,uVar10);
    _swift_bridgeObjectRelease(puStack_b8);
    auVar16._8_8_ = uVar12;
    auVar16._0_8_ = uVar11;
    return auVar16;
  }
  uVar13 = 0;
  uVar15 = *(long *)(lVar5 + 0x10) - 1;
  puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1044709c0:
  if (*(ulong *)(lVar5 + 0x10) <= uVar13) {
LAB_104470c00:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104470c04);
    (*pcVar3)();
  }
  bVar4 = false;
  puVar14 = (undefined8 *)(lVar5 + 0x38 + uVar13 * 0x20);
  do {
    if (bVar4) {
LAB_104470a70:
      if (uVar15 == uVar13) goto LAB_104470b80;
      bVar4 = false;
    }
    else {
      uVar2 = puVar14[-3];
      uVar9 = puVar14[-2];
      uVar8 = puVar14[-1];
      uVar10 = *puVar14;
      _swift_bridgeObjectRetain(uVar10);
      uVar6 = 0xd000000000000019;
      FUN_104470390(0xd000000000000019,0x800000010f200e50,uVar2,uVar9,uVar8,uVar10);
      if ((uVar6 & 1) != 0) {
        uVar6 = uVar2;
        uVar11 = uVar9;
        __sSS14_fromSubstringySSSshFZ(uVar2,uVar9,uVar8,uVar10);
        FUN_10447075c();
        _swift_bridgeObjectRelease(uVar11);
        if ((uVar6 & 1) != 0) {
          _swift_bridgeObjectRelease(uVar10);
          goto LAB_104470a70;
        }
        break;
      }
      uVar6 = 0xd000000000000011;
      FUN_104470390(0xd000000000000011,0x800000010f200e30,uVar2,uVar9,uVar8,uVar10);
      if ((uVar6 & 1) == 0) break;
      uVar6 = uVar2;
      uVar11 = uVar9;
      __sSS14_fromSubstringySSSshFZ(uVar2,uVar9,uVar8,uVar10);
      FUN_10447075c();
      _swift_bridgeObjectRelease(uVar11);
      if ((uVar6 & 1) == 0) break;
      _swift_bridgeObjectRelease(uVar10);
      if (uVar15 == uVar13) goto LAB_104470b80;
      bVar4 = true;
    }
    uVar13 = uVar13 + 1;
    puVar14 = puVar14 + 4;
    if (*(ulong *)(lVar5 + 0x10) <= uVar13) goto LAB_104470c00;
  } while( true );
  puVar7 = puStack_b8;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    plVar1 = (long *)(puStack_b8 + 0x10);
    puStack_b8 = (undefined *)0x0;
    func_0x0001014788a4(0,*plVar1 + 1,1);
  }
  uVar6 = *(ulong *)(puStack_b8 + 0x10);
  if (*(ulong *)(puStack_b8 + 0x18) >> 1 <= uVar6) {
    puStack_b8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_b8 + 0x18));
    func_0x0001014788a4(puStack_b8,uVar6 + 1,1);
  }
  *(ulong *)(puStack_b8 + 0x10) = uVar6 + 1;
  *(ulong *)(puStack_b8 + uVar6 * 0x20 + 0x20) = uVar2;
  *(undefined8 *)(puStack_b8 + uVar6 * 0x20 + 0x28) = uVar9;
  *(undefined8 *)(puStack_b8 + uVar6 * 0x20 + 0x30) = uVar8;
  *(undefined8 *)(puStack_b8 + uVar6 * 0x20 + 0x38) = uVar10;
  bVar4 = uVar15 == uVar13;
  uVar13 = uVar13 + 1;
  puStack_68 = puStack_b8;
  if (bVar4) goto LAB_104470b80;
  goto LAB_1044709c0;
}



/* Entry: 104470c04; end: 104470c23;  */

void FUN_104470c04(void)

{
  _objc_opt_self(&PTR_PTR_1129baff0);
  return;
}



/* Entry: 104470c24; end: 104470c77;  */

uint FUN_104470c24(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 104470c78; end: 104470cc7;  */

void FUN_104470c78(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112eca618 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e07ba0;
  func_0x00010002969c(0x112e07ba0,&UNK_10dc1ee40);
  puVar2 = PTR___sSayxGSTsMc_11034dd08;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_11034dd08,uVar1);
  puRam0000000112eca618 = puVar2;
  return;
}



/* Entry: 104470cc8; end: 104470cf3;  */

undefined1  [16] FUN_104470cc8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  func_0x00010006c00c();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 104470cf4; end: 104470d5b; -[_TtC23StreamingImplementation22SCNoOpManifestRewriter rewriteManifestFromData:] */

void FUN_104470cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_3);
  _objc_release(uVar1);
  uVar1 = param_3;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_3,param_2);
  func_0x00010006c090(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104470d5c; end: 104470d7b;  */

void FUN_104470d5c(void)

{
  _objc_opt_self(&PTR_PTR_1129bb0b0);
  return;
}



/* Entry: 104470d7c; end: 104470db7; -[_TtC23StreamingImplementation22SCNoOpManifestRewriter init] */

void FUN_104470d7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_104470d5c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104470db8; end: 104470de7;  */

void FUN_104470db8(void)

{
  FUN_104470d5c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104470de8; end: 104470df7; -[_TtC12StreamingApi18SCStreamingService manifestRewriter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104470de8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307c438));
  return;
}



/* Entry: 104470df8; end: 104470e43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104470df8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11307c438) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104470e44; end: 104470ea3; -[_TtC12StreamingApi18SCStreamingService init] */

void FUN_104470e44(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("StreamingApi.SCStreamingService",0x1f,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104470e70);
  (*pcVar1)();
}



/* Entry: 104470ea4; end: 104470ec3; -[_TtC12StreamingApi18SCStreamingService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104470ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11307c438));
  return;
}



/* Entry: 104470ec4; end: 104470ef3;  */

void FUN_104470ec4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6b18;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *param_1 = puVar1;
  return;
}



/* Entry: 104470ef4; end: 104470f23;  */

undefined1  [16] FUN_104470ef4(void)

{
  return ZEXT816(0x1107746e0);
}



/* Entry: 104470f24; end: 104470f5f;  */

undefined8 FUN_104470f24(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 104470f60; end: 104470fb7;  */

void FUN_104470f60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104470fb8; end: 10447100f;  */

void FUN_104470fb8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd00000000000002a,0x800000010f200f00,
             "EntryPoint/ServiceProvider.swift",0x20,2,0x12,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104471010);
  (*pcVar1)();
}



/* Entry: 104471010; end: 10447102f;  */

undefined8 FUN_104471010(void)

{
  return 0;
}



/* Entry: 104471030; end: 10447105b;  */

void FUN_104471030(undefined8 *param_1,undefined8 param_2)

{
  FUN_1044712e0();
  _objc_allocWithZone();
  func_0x00010bfee200();
  *param_1 = param_2;
  return;
}



/* Entry: 10447105c; end: 104471097; -[SCGhostImageServiceImpl init] */

void FUN_10447105c(undefined8 param_1)

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



/* Entry: 104471098; end: 1044711ab;  */

undefined * FUN_104471098(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _swift_getObjectType();
  _swift_getObjCClassFromMetadata();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _objc_opt_self(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x00010bf249e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_self();
  puVar4 = puVar3;
  func_0x00010bfe8240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar2);
  if (puVar4 == (undefined *)0x0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar4 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      _objc_allocWithZone(PTR__OBJC_CLASS___UIImage_1126aea68);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return puVar1;
    }
  }
  return puVar4;
}



/* Entry: 1044711ac; end: 1044711fb; -[SCGhostImageServiceImpl mediumGhost] */

void FUN_1044711ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = 0x656d5f74736f6867;
  FUN_104471098(0x656d5f74736f6867,0xec0000006d756964);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1044711fc; end: 104471247; -[SCGhostImageServiceImpl tinyGhost] */

void FUN_1044711fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = 0x69745f74736f6867;
  FUN_104471098(0x69745f74736f6867,0xea0000000000796e);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104471248; end: 10447129b; -[SCGhostImageServiceImpl engravedGhost] */

void FUN_104471248(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = 0x6e655f74736f6867;
  FUN_104471098(0x6e655f74736f6867,0xee00646576617267);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10447129c; end: 1044712cf;  */

void FUN_10447129c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1044712d0; end: 1044712df;  */

undefined1  [16] FUN_1044712d0(void)

{
  return ZEXT816(0x110774ba8);
}



/* Entry: 1044712e0; end: 1044712ff;  */

void FUN_1044712e0(void)

{
  _objc_opt_self(&PTR_PTR_1129bb228);
  return;
}



/* Entry: 104471300; end: 10447132f;  */

void FUN_104471300(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104471330; end: 10447133f;  */

undefined1  [16] FUN_104471330(void)

{
  return ZEXT816(0x110774cc8);
}



/* Entry: 104471340; end: 104471417;  */

undefined8 FUN_104471340(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _swift_allocObject();
  uVar1 = param_1;
  func_0x0001000bafec(param_1,param_2);
  _swift_release(param_1);
  _swift_release(param_2);
  return uVar1;
}



/* Entry: 104471418; end: 10447144f;  */

void FUN_104471418(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  _swift_retain(uVar2);
  (*pcVar1)();
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104471450; end: 10447148b;  */

void FUN_104471450(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10447148c; end: 1044714ab;  */

undefined1  [16] FUN_10447148c(void)

{
  return ZEXT816(0x110774d10);
}



/* Entry: 1044714ac; end: 1044714d7;  */

void FUN_1044714ac(void)

{
  _objc_allocWithZone(PTR_PTR_1126adcd0);
                    /* WARNING: Could not recover jumptable at 0x00010c009910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1044714d8; end: 1044714f3;  */

void FUN_1044714d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1044714f4; end: 104471523;  */

void FUN_1044714f4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126adce8;
  _objc_allocWithZone();
  func_0x00010bfee200();
  *param_1 = puVar1;
  return;
}



/* Entry: 104471524; end: 10447155b;  */

undefined1  [16] FUN_104471524(void)

{
  return ZEXT816(0x110774e70);
}



/* Entry: 10447155c; end: 1044715d7;  */

void FUN_10447155c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x22 + 200) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
  uVar1 = 0;
  __sScMMa();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar1;
  uVar2 = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar2;
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1044715d8,uVar1,uVar2);
  return;
}



/* Entry: 1044715d8; end: 10447171b;  */

void FUN_1044715d8(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar7 = *(undefined8 *)(unaff_x22 + 200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  __sScM6sharedScMvgZ();
  *(long *)(unaff_x22 + 0x108) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
    plVar2 = (long *)(ulong)*(uint *)(
                                     PTR___ss31withCheckedThrowingContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5Error_pGXEtYaKlFTu_11034fff0
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x110) = plVar2;
    uVar3 = 0x11307c7f8;
    func_0x0001000285a8(0x11307c7f8,&UNK_10dd04950);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10447171c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss31withCheckedThrowingContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5Error_pGXEtYaKlF_11034ffe8
    )(unaff_x22 + 0x90,param_1,uVar4,0xd000000000000010,0x800000010f200f30,FUN_104471af4,
      unaff_x22 + 0x10,uVar3);
    return;
  }
  if (param_1 == 0) {
    param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
    _swift_getObjectType(param_1);
    __sScA15unownedExecutorScevgTj();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_104471798,param_1,uVar3);
  return;
}



/* Entry: 10447171c; end: 104471797;  */

void FUN_10447171c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  undefined1 auVar5 [16];
  
  lVar4 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar4 + 0x108);
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x110));
  _swift_release(uVar2);
  if (unaff_x20 == 0) {
    auVar5 = NEON_ext(*(undefined1 (*) [16])(lVar4 + 0x90),*(undefined1 (*) [16])(lVar4 + 0x90),8,1)
    ;
    *(long *)(lVar4 + 0x120) = auVar5._8_8_;
    *(long *)(lVar4 + 0x118) = auVar5._0_8_;
    uVar2 = *(undefined8 *)(lVar4 + 0xf8);
    uVar3 = *(undefined8 *)(lVar4 + 0x100);
    pcVar1 = FUN_104471970;
  }
  else {
    *(long *)(lVar4 + 0x128) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar4 + 0xf8);
    uVar3 = *(undefined8 *)(lVar4 + 0x100);
    pcVar1 = (code *)0x1044719a8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 104471798; end: 1044718db;  */

void FUN_104471798(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0xa0;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_1044718dc;
  lVar7 = unaff_x22 + 0x50;
  _swift_continuation_init(lVar7,1);
  lVar8 = 0x11307c7f0;
  func_0x0001000285a8(0x11307c7f0,&UNK_10dd04948);
  lVar12 = *(long *)(lVar8 + -8);
  uVar9 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar9);
  uVar10 = 0x11307c7f8;
  func_0x0001000285a8(0x11307c7f8,&UNK_10dd04950);
  uVar11 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  __sScC12continuation8functionScCyxq_GSccyxq_G_SStcfC
            (uVar9,lVar7,0xd000000000000010,0x800000010f200f30,uVar10,uVar11,
             PTR___ss5ErrorWS_11034ee10);
  FUN_1044719dc(uVar9,uVar4,uVar3,uVar6,uVar2,uVar5,uVar1);
  (**(code **)(lVar12 + 8))(uVar9,lVar8);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
  return;
}



/* Entry: 1044718dc; end: 10447196f;  */

void FUN_1044718dc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar5 = *unaff_x22;
  lVar4 = *(long *)(lVar5 + 0x70);
  uVar3 = *(undefined8 *)(lVar5 + 0x108);
  if (lVar4 == 0) {
    _swift_release(uVar3);
    auVar6 = NEON_ext(*(undefined1 (*) [16])(lVar5 + 0xa0),*(undefined1 (*) [16])(lVar5 + 0xa0),8,1)
    ;
    *(long *)(lVar5 + 0x120) = auVar6._8_8_;
    *(long *)(lVar5 + 0x118) = auVar6._0_8_;
    uVar3 = *(undefined8 *)(lVar5 + 0xf8);
    uVar2 = *(undefined8 *)(lVar5 + 0x100);
    pcVar1 = FUN_104471970;
  }
  else {
    _swift_willThrow();
    _swift_release(uVar3);
    *(long *)(lVar5 + 0x128) = lVar4;
    uVar3 = *(undefined8 *)(lVar5 + 0xf8);
    uVar2 = *(undefined8 *)(lVar5 + 0x100);
    pcVar1 = (code *)0x1044719a8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar3,uVar2);
  return;
}



/* Entry: 104471970; end: 1044719db;  */

void FUN_104471970(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x0001044719a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x118));
  return;
}



/* Entry: 1044719dc; end: 104471af3;  */

void FUN_1044719dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x11307c7f0;
  uStack_70 = param_5;
  uStack_68 = param_6;
  func_0x0001000285a8(0x11307c7f0,&UNK_10dd04948);
  lVar5 = *(long *)(lVar1 + -8);
  lVar6 = *(long *)(lVar5 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar6 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar5 + 0x10))((long)&uStack_70 - extraout_x8,param_1,lVar1);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar4 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  puVar2 = &UNK_110774eb8;
  _swift_allocObject(&UNK_110774eb8,uVar4 + lVar6,uVar3 | 7);
  (**(code **)(lVar5 + 0x20))(puVar2 + uVar4,(long)&uStack_70 - extraout_x8,lVar1);
  (**(code **)(param_7 + 0x18))(param_3,param_4,uStack_70,FUN_104471b04,puVar2,uStack_68,param_7);
  _swift_release(puVar2);
  return;
}



/* Entry: 104471af4; end: 104471b03;  */

void FUN_104471af4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar4 = 0x11307c7f0;
  func_0x0001000285a8(0x11307c7f0,&UNK_10dd04948);
  lVar8 = *(long *)(lVar4 + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar9 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))((long)&uStack_70 - extraout_x8,param_1,lVar4);
  uVar6 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar7 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  puVar5 = &UNK_110774eb8;
  _swift_allocObject(&UNK_110774eb8,uVar7 + lVar9,uVar6 | 7);
  (**(code **)(lVar8 + 0x20))(puVar5 + uVar7,(long)&uStack_70 - extraout_x8,lVar4);
  (**(code **)(lVar2 + 0x18))(uVar3,uVar1,uStack_70,FUN_104471b04,puVar5,uStack_68,lVar2);
  _swift_release(puVar5);
  return;
}



/* Entry: 104471b04; end: 104471be7;  */

void FUN_104471b04(undefined *param_1,undefined8 param_2,char param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = (undefined1 *)0x11307c7f0;
  func_0x0001000285a8(0x11307c7f0,&UNK_10dd04948);
  if (param_3 == '\x01') {
    FUN_104471be8();
    puVar2 = &UNK_110774f58;
    _swift_allocError(&UNK_110774f58,puVar1,0,0);
    *puVar1 = (char)param_1;
    uVar3 = 0x11307c7f0;
    puStack_50 = puVar2;
    func_0x0001000285a8(0x11307c7f0,&UNK_10dd04948);
    __sScC6resume8throwingyq_n_tF(&puStack_50,uVar3);
  }
  else {
    puStack_50 = param_1;
    uStack_48 = param_2;
    _swift_unknownObjectRetain(*(undefined1 *)(*(long *)(puVar1 + -8) + 0x50),param_1);
    uVar3 = 0x11307c7f0;
    func_0x0001000285a8(0x11307c7f0,&UNK_10dd04948);
    __sScC6resume9returningyxn_tF(&puStack_50,uVar3);
  }
  return;
}



/* Entry: 104471be8; end: 104471c27;  */

void FUN_104471be8(void)

{
  undefined *puVar1;
  
  if (puRam000000011307c800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd04a0c;
  _swift_getWitnessTable(&UNK_10dd04a0c,&UNK_110774f58);
  puRam000000011307c800 = puVar1;
  return;
}



/* Entry: 104471c28; end: 104471c3b;  */

bool FUN_104471c28(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104471c3c; end: 104471ce7;  */

void FUN_104471c3c(void)

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



/* Entry: 104471ce8; end: 104471ceb;  */

void FUN_104471ce8(void)

{
  undefined *puVar1;
  
  if (puRam000000011307c808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd049a4;
  _swift_getWitnessTable(&UNK_10dd049a4,&UNK_110774f58);
  puRam000000011307c808 = puVar1;
  return;
}



/* Entry: 104471cec; end: 104471d2b;  */

void FUN_104471cec(void)

{
  undefined *puVar1;
  
  if (puRam000000011307c808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd049a4;
  _swift_getWitnessTable(&UNK_10dd049a4,&UNK_110774f58);
  puRam000000011307c808 = puVar1;
  return;
}



/* Entry: 104471d2c; end: 104471e9f;  */

void FUN_104471d2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 104471ea0; end: 104471ebb;  */

void FUN_104471ea0(void)

{
  long unaff_x20;
  
  FUN_104471ebc(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 104471ebc; end: 104471f5b;  */

void FUN_104471ebc(undefined8 param_1,code *param_2,undefined8 param_3,long *param_4)

{
  long extraout_x8;
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = *(long *)(*param_4 + 0x50);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000100083b20(puVar2);
  (*param_2)(param_1,puVar2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 104471f5c; end: 104471f87;  */

void FUN_104471f5c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 104471f88; end: 104471f9b;  */

bool FUN_104471f88(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104471f9c; end: 104472047;  */

void FUN_104471f9c(void)

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



/* Entry: 104472048; end: 10447204b;  */

void FUN_104472048(void)

{
  undefined *puVar1;
  
  if (puRam000000011307c810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd04a70;
  _swift_getWitnessTable(&UNK_10dd04a70,&UNK_110775158);
  puRam000000011307c810 = puVar1;
  return;
}



/* Entry: 10447204c; end: 10447208b;  */

void FUN_10447204c(void)

{
  undefined *puVar1;
  
  if (puRam000000011307c810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd04a70;
  _swift_getWitnessTable(&UNK_10dd04a70,&UNK_110775158);
  puRam000000011307c810 = puVar1;
  return;
}



/* Entry: 10447208c; end: 1044721ef;  */

int FUN_10447208c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104472108;
        goto LAB_1044720ec;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1044720ec:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_104472108:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1044721f0; end: 1044722db;  */

undefined8 * FUN_1044721f0(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar1 = *param_2;
  uVar10 = param_2[1];
  uVar2 = param_2[2];
  uVar11 = param_2[3];
  uVar3 = param_2[4];
  uVar12 = param_2[5];
  uVar4 = param_2[6];
  uVar13 = param_2[7];
  uVar5 = param_2[8];
  uVar14 = param_2[9];
  uVar22 = param_2[10];
  uVar19 = *(undefined4 *)(param_2 + 0xb);
  func_0x000100087e18(uVar1,uVar10,uVar2,uVar11,uVar3,uVar12,uVar4,uVar13,uVar5,uVar14,uVar22,uVar19
                     );
  uVar6 = *param_1;
  uVar15 = param_1[1];
  uVar7 = param_1[2];
  uVar16 = param_1[3];
  uVar8 = param_1[4];
  uVar17 = param_1[5];
  uVar9 = param_1[6];
  uVar18 = param_1[7];
  uVar24 = param_1[9];
  uVar23 = param_1[8];
  uVar21 = param_1[10];
  uVar20 = *(undefined4 *)(param_1 + 0xb);
  *param_1 = uVar1;
  param_1[1] = uVar10;
  param_1[2] = uVar2;
  param_1[3] = uVar11;
  param_1[4] = uVar3;
  param_1[5] = uVar12;
  param_1[6] = uVar4;
  param_1[7] = uVar13;
  param_1[8] = uVar5;
  param_1[9] = uVar14;
  param_1[10] = uVar22;
  *(undefined4 *)(param_1 + 0xb) = uVar19;
  func_0x000100088130(uVar6,uVar15,uVar7,uVar16,uVar8,uVar17,uVar9,uVar18,uVar23,uVar24,uVar21,
                      uVar20);
  return param_1;
}



/* Entry: 1044722dc; end: 10447235f;  */

undefined8 * FUN_1044722dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar11 = param_2[10];
  uVar7 = *(undefined4 *)(param_2 + 0xb);
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar10 = param_1[7];
  uVar14 = param_1[9];
  uVar13 = param_1[8];
  uVar12 = param_1[10];
  uVar8 = *(undefined4 *)(param_1 + 0xb);
  uVar15 = *param_2;
  uVar17 = param_2[3];
  uVar16 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar15;
  param_1[3] = uVar17;
  param_1[2] = uVar16;
  uVar15 = param_2[4];
  uVar17 = param_2[7];
  uVar16 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar15;
  param_1[7] = uVar17;
  param_1[6] = uVar16;
  uVar15 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar15;
  param_1[10] = uVar11;
  *(undefined4 *)(param_1 + 0xb) = uVar7;
  func_0x000100088130(uVar9,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar10,uVar13,uVar14,uVar12,uVar8);
  return param_1;
}



/* Entry: 104472360; end: 1044723bb;  */

uint FUN_104472360(long param_1)

{
  return *(uint *)(param_1 + 0x58) >> 0x1e;
}



/* Entry: 1044723bc; end: 104472403;  */

undefined8 FUN_1044723bc(void)

{
  long lVar1;
  undefined8 uVar2;
  
  if (lRam000000011307c820 != -1) {
    _swift_once(0x11307c820,&UNK_1000286d0);
  }
  lVar1 = 0;
  __s2os12OSSignpostIDVMa();
  uVar2 = 0x113813658;
  if ((*(byte *)(*(long *)(lVar1 + -8) + 0x52) >> 1 & 1) != 0) {
    uVar2 = uRam0000000113813658;
  }
  return uVar2;
}



/* Entry: 104472404; end: 10447242f;  */

long FUN_104472404(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104472430; end: 1044724e3;  */

undefined1 * FUN_104472430(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  param_1[0x30] = param_2[0x30];
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  param_1[0x58] = param_2[0x58];
  param_1[0x59] = param_2[0x59];
  param_1[0x5a] = param_2[0x5a];
  param_1[0x5b] = param_2[0x5b];
  return param_1;
}



/* Entry: 1044724e4; end: 10447256f;  */

undefined1 * FUN_1044724e4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  param_1[0x30] = param_2[0x30];
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  param_1[0x58] = param_2[0x58];
  param_1[0x59] = param_2[0x59];
  param_1[0x5a] = param_2[0x5a];
  param_1[0x5b] = param_2[0x5b];
  return param_1;
}



/* Entry: 104472570; end: 1044725c7;  */

void FUN_104472570(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x5c) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x5c) = 0;
    }
    if (param_2 != 0) {
      param_1[7] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Entry: 1044725c8; end: 1044726a7; +[SCAppLaunchSignaler shared] */

void FUN_1044725c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = lRam000000011307c828;
  lVar3 = lRam000000011307c828;
  if (lRam000000011307c828 == 0) {
    _swift_getObjCClassMetadata(param_1);
    puVar1 = PTR_PTR_1126ae820;
    _objc_allocWithZone(PTR_PTR_1126ae820);
    func_0x00010bfee200();
    puVar2 = PTR_PTR_1126ae820;
    _objc_allocWithZone(PTR_PTR_1126ae820);
    func_0x00010bfee200();
    _objc_allocWithZone(param_1);
    lVar3 = 1;
    func_0x000100085c88(1,puVar1,puVar2,param_1);
    lVar4 = 0;
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1044726a8; end: 10447270b;  */

void FUN_1044726a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  uVar3 = param_2;
  _objc_retain(param_2);
  (*pcVar1)(param_2,param_3);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10447270c; end: 104472727;  */

void FUN_10447270c(undefined8 param_1)

{
  _mach_absolute_time();
  uRam00000001138136a8 = param_1;
  return;
}



/* Entry: 104472728; end: 104472743; +[SCAppLaunchSignaler signalParamedicCrashLoopDetected] */

void FUN_104472728(undefined8 param_1)

{
  _mach_absolute_time();
  uRam00000001138136b0 = param_1;
  return;
}



/* Entry: 104472744; end: 10447275f; +[SCAppLaunchSignaler signalParamedicSingleCrashDetected] */

void FUN_104472744(undefined8 param_1)

{
  _mach_absolute_time();
  uRam00000001138136b8 = param_1;
  return;
}



/* Entry: 104472760; end: 1044727a3; +[SCAppLaunchSignaler frameInfoObservable] */

void FUN_104472760(void)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113813670,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(uRam0000000113813670);
  return;
}



/* Entry: 1044727a4; end: 1044727cb; +[SCAppLaunchSignaler setFrameInfoObservable:] */

void FUN_1044727a4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  func_0x000107c61428(0x113813670,auStack_48,1,0);
  uVar5 = plRam0000000113813670;
  plVar2 = param_3;
  plRam0000000113813670 = param_3;
  func_0x000107c61174();
  func_0x000107c61170(uVar5);
  if (param_3 != (long *)0x0) {
    func_0x0001000285a8(0x112da1598,&UNK_10d9d0cd0);
    plVar3 = plVar2;
    func_0x0001000b637c();
    puVar4 = &UNK_100c7bab0;
    uVar5 = 0;
    (**(code **)(*plVar3 + 0x60))();
    func_0x000107c61574(plVar3);
    puVar1 = puRam000000011307c840;
    puRam000000011307c840 = puVar4;
    uRam000000011307c848 = uVar5;
    func_0x000107c61170(plVar2);
    func_0x000107c615e8(puVar1);
  }
  return;
}



/* Entry: 1044727cc; end: 104472aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1044727cc(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  uint uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  uint uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _swift_beginAccess(param_2 + 0x10,auStack_80,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    if (*(char *)(param_2 + _DAT_11307c858) == '\x01') {
      puVar1 = (ulong *)(param_2 + _DAT_11307c860);
      _swift_beginAccess(puVar1,auStack_98,1,0);
      uVar11 = puVar1[7];
      if ((uVar11 != 0) && (puVar1[1] = 3, uVar11 != 0)) {
        uVar10 = *puVar1;
        uVar2 = puVar1[2];
        uVar5 = puVar1[3];
        uVar3 = puVar1[4];
        uVar6 = puVar1[5];
        uVar12 = puVar1[6];
        uVar4 = puVar1[8];
        uVar7 = puVar1[9];
        uVar9 = puVar1[10];
        uVar8 = puVar1[0xb];
        uStack_f8 = uVar10;
        uStack_f0 = 3;
        uStack_e8 = uVar2;
        uStack_e0 = uVar5;
        uStack_d8 = uVar3;
        uStack_d0 = uVar6;
        uStack_c8 = uVar12;
        uStack_c0 = uVar11;
        uStack_b8 = uVar4;
        uStack_b0 = uVar7;
        uStack_a8 = uVar9;
        uStack_a0 = (uint)uVar8;
        func_0x00010008718c(&uStack_f8,&uStack_158);
        if (lRam000000011307c830 != -1) {
          _swift_once(0x11307c830,&UNK_100087328);
        }
        uStack_158 = uVar10 & 0x701;
        uStack_128 = uVar12 & 1;
        uStack_100 = (uint)uVar8 & 0x1010101 | 0x40000000;
        uStack_150 = 3;
        uStack_148 = uVar2;
        uStack_140 = uVar5;
        uStack_138 = uVar3;
        uStack_130 = uVar6;
        uStack_120 = uVar11;
        uStack_118 = uVar4;
        uStack_110 = uVar7;
        uStack_108 = uVar9;
        func_0x000100087c34(&uStack_158);
        _objc_release(param_2);
        func_0x0001000880fc(&uStack_158);
        return;
      }
    }
    _objc_release();
  }
  return;
}



/* Entry: 104472aec; end: 104472b37;  */

void FUN_104472aec(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  _objc_retain(param_2);
  (*pcVar1)();
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104472b38; end: 104472e37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104472b38(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  long *plVar12;
  long *plVar13;
  undefined *puVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong *puVar19;
  undefined *puVar20;
  ulong *puVar21;
  long unaff_x20;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  uint uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  
  lVar1 = _DAT_11307c858;
  if ((*(byte *)(unaff_x20 + _DAT_11307c858) & 1) == 0) {
    puVar17 = (undefined8 *)0x4;
    if ((*(byte *)(unaff_x20 + _DAT_11307c858) & 1) != 0) {
      return;
    }
    func_0x0001000298f0();
    func_0x000107c61428();
    uVar10 = *puVar17;
    uVar16 = *(undefined8 *)(unaff_x20 + _DAT_11307c878);
    uVar6 = ((undefined8 *)(unaff_x20 + _DAT_11307c878))[1];
    func_0x000107c61174(uVar10);
    func_0x000100029b28(uVar16,uVar6);
    func_0x000107c61170(uVar10);
    *(undefined8 *)(unaff_x20 + _DAT_11307c880) = uVar16;
    *(undefined1 *)(unaff_x20 + lVar1) = 1;
    func_0x00010008637c(4);
    puVar21 = (ulong *)(unaff_x20 + _DAT_11307c860);
    func_0x000107c61428(puVar21,&uStack_98,0,0);
    uVar23 = puVar21[7];
    if (uVar23 != 0) {
      uStack_188 = CONCAT44(4,(undefined4)uStack_188);
      uVar2 = *puVar21;
      uStack_160 = puVar21[1];
      uStack_168 = puVar21[2];
      uStack_170 = puVar21[3];
      uStack_178 = puVar21[4];
      uStack_180 = puVar21[5];
      uVar27 = puVar21[6];
      uVar3 = puVar21[8];
      uVar4 = puVar21[9];
      uVar26 = puVar21[10];
      uVar5 = puVar21[0xb];
      uStack_e8 = (undefined4)uStack_168;
      uStack_e4 = (undefined4)(uStack_168 >> 0x20);
      uStack_e0 = (undefined4)uStack_170;
      uStack_dc = (undefined4)(uStack_170 >> 0x20);
      uStack_d8 = (undefined4)uStack_178;
      uStack_d4 = (undefined4)(uStack_178 >> 0x20);
      uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)uVar5);
      uStack_f8 = uVar2;
      uStack_f0 = uStack_160;
      uStack_d0 = uStack_180;
      uStack_c8 = uVar27;
      uStack_c0 = uVar23;
      uStack_b8 = uVar3;
      uStack_b0 = uVar4;
      uStack_a8 = uVar26;
      func_0x00010008718c(&uStack_f8,&uStack_158);
      if (lRam000000011307c830 != -1) {
        func_0x000107c61568(0x11307c830,&UNK_100087328);
      }
      uStack_158 = uVar2 & 0x701;
      uStack_128 = uVar27 & 1;
      uStack_150 = uStack_160;
      uStack_148 = uStack_168;
      uStack_140 = uStack_170;
      uStack_138 = uStack_178;
      uStack_130 = uStack_180;
      uStack_100 = CONCAT44(uStack_100._4_4_,(int)uVar5) & 0xffffffff01010101;
      uStack_120 = uVar23;
      uStack_118 = uVar3;
      uStack_110 = uVar4;
      uStack_108 = uVar26;
      func_0x000100087c34(&uStack_158);
      func_0x0001000880fc(&uStack_158);
      pbVar11 = (byte *)0x113813670;
      func_0x000107c61428(0x113813670,&uStack_158,0,0);
      plVar12 = plRam0000000113813670;
      if (plRam0000000113813670 != (long *)0x0) {
        func_0x0001000285a8(0x112da1598,&UNK_10d9d0cd0);
        func_0x000107c61174();
        plVar13 = plVar12;
        func_0x0001000b637c();
        puVar14 = &UNK_1107752e8;
        func_0x000107c613fc(&UNK_1107752e8,0x18,7);
        func_0x000107c61614(puVar14 + 0x10,unaff_x20);
        pcVar15 = FUN_1044732a8;
        puVar20 = puVar14;
        (**(code **)(*plVar13 + 0x60))();
        func_0x000107c61574(plVar13);
        func_0x000107c61574(puVar14);
        uVar16 = pcRam000000011307c840;
        pcRam000000011307c840 = pcVar15;
        puRam000000011307c848 = puVar20;
        func_0x000107c61170(plVar12);
        func_0x000107c615e8(uVar16);
        return;
      }
      if ((uStack_188._4_4_ & 0xff) != 4) {
        return;
      }
      func_0x000100028eb0();
      if ((*pbVar11 & 1) != 0) {
        return;
      }
    }
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
    return;
  }
  lVar1 = unaff_x20 + _DAT_11307c860;
  puVar21 = &uStack_d0;
  if (*(char *)(unaff_x20 + _DAT_11307c868) == '\x01') {
    lVar18 = lVar1;
    _swift_beginAccess(lVar1,puVar21,0x21,0);
    if (*(long *)(lVar1 + 0x38) != 0) {
      _mach_absolute_time();
      uVar16 = *(undefined8 *)(lVar1 + 0x40);
      _swift_isUniquelyReferenced_nonNull_native(uVar16);
      uStack_130 = *(ulong *)(lVar1 + 0x40);
      *(undefined8 *)(lVar1 + 0x40) = 0x8000000000000000;
      func_0x000100086a54(lVar18,0x3a,uVar16);
      *(ulong *)(lVar1 + 0x40) = uStack_130;
    }
LAB_104472c88:
    _swift_endAccess(&uStack_d0);
  }
  else {
    lVar18 = lVar1;
    _swift_beginAccess(lVar1,puVar21,0x21,0);
    if (*(long *)(lVar1 + 0x38) == 0) goto LAB_104472c88;
    _mach_absolute_time();
    lVar22 = *(long *)(lVar1 + 0x40);
    if (*(long *)(lVar22 + 0x10) == 0) {
LAB_104472c4c:
      _swift_isUniquelyReferenced_nonNull_native(lVar22);
      uStack_130 = *(ulong *)(lVar1 + 0x40);
      func_0x000100086a54(lVar18,0x3a,lVar22);
      *(ulong *)(lVar1 + 0x40) = uStack_130;
    }
    else {
      func_0x000100086a50(0x3a);
      if (((ulong)puVar21 & 1) == 0) {
        lVar22 = *(long *)(lVar1 + 0x40);
        goto LAB_104472c4c;
      }
    }
    _swift_endAccess(&uStack_d0);
  }
  puVar21 = (ulong *)(unaff_x20 + _DAT_11307c860);
  _swift_beginAccess(puVar21,&uStack_148,0,0);
  uStack_108 = puVar21[5];
  uStack_110 = puVar21[4];
  uStack_f8 = puVar21[7];
  uStack_100 = puVar21[6];
  uStack_f0 = puVar21[8];
  uStack_e8 = (undefined4)puVar21[9];
  uStack_dc = (undefined4)*(undefined8 *)((long)puVar21 + 0x54);
  uStack_d8 = (undefined4)((ulong)*(undefined8 *)((long)puVar21 + 0x54) >> 0x20);
  uStack_e4 = (undefined4)*(undefined8 *)((long)puVar21 + 0x4c);
  uStack_e0 = (undefined4)((ulong)*(undefined8 *)((long)puVar21 + 0x4c) >> 0x20);
  uStack_128 = puVar21[1];
  uStack_130 = *puVar21;
  uStack_118 = puVar21[3];
  uStack_120 = puVar21[2];
  if (uStack_f8 != 0) {
    uStack_a8 = puVar21[5];
    uStack_b0 = puVar21[4];
    uStack_98 = puVar21[7];
    uStack_a0 = puVar21[6];
    uStack_90 = puVar21[8];
    uStack_88 = (undefined4)puVar21[9];
    uStack_7c = *(undefined8 *)((long)puVar21 + 0x54);
    uStack_84 = (undefined4)*(undefined8 *)((long)puVar21 + 0x4c);
    uStack_80 = (undefined4)((ulong)*(undefined8 *)((long)puVar21 + 0x4c) >> 0x20);
    uStack_c8 = puVar21[1];
    uStack_d0 = *puVar21;
    uStack_b8 = puVar21[3];
    uStack_c0 = puVar21[2];
    _swift_beginAccess(puVar21,&uStack_208,0x21,0);
    if (puVar21[7] == 0) {
      _swift_endAccess(&uStack_208);
      uVar23 = puVar21[7];
      goto joined_r0x000104472d3c;
    }
    FUN_104473228(&uStack_130,&uStack_1a8);
    puVar19 = &uStack_d0;
    func_0x000100086f7c();
    puVar21[10] = (ulong)puVar19;
    _swift_endAccess(&uStack_208);
    func_0x000100087288(&uStack_130);
  }
  uVar23 = puVar21[7];
joined_r0x000104472d3c:
  if (uVar23 != 0) {
    uVar2 = *puVar21;
    uVar26 = puVar21[1];
    uVar3 = puVar21[2];
    uVar27 = puVar21[3];
    uVar4 = puVar21[4];
    uVar7 = puVar21[5];
    uVar25 = puVar21[6];
    uVar5 = puVar21[8];
    uVar8 = puVar21[9];
    uVar24 = puVar21[10];
    uVar9 = puVar21[0xb];
    uStack_150 = CONCAT44(uStack_150._4_4_,(uint)uVar9);
    uStack_1a8 = uVar2;
    uStack_1a0 = uVar26;
    uStack_198 = uVar3;
    uStack_190 = uVar27;
    uStack_188 = uVar4;
    uStack_180 = uVar7;
    uStack_178 = uVar25;
    uStack_170 = uVar23;
    uStack_168 = uVar5;
    uStack_160 = uVar8;
    uStack_158 = uVar24;
    func_0x00010008718c(&uStack_1a8,&uStack_208);
    if (lRam000000011307c830 != -1) {
      _swift_once(0x11307c830,&UNK_100087328);
    }
    uStack_208 = uVar2 & 0x701;
    uStack_1d8 = uVar25 & 1;
    uStack_1b0 = (uint)uVar9 & 0x1010101 | 0x40000000;
    uStack_200 = uVar26;
    uStack_1f8 = uVar3;
    uStack_1f0 = uVar27;
    uStack_1e8 = uVar4;
    uStack_1e0 = uVar7;
    uStack_1d0 = uVar23;
    uStack_1c8 = uVar5;
    uStack_1c0 = uVar8;
    uStack_1b8 = uVar24;
    func_0x000100087c34(&uStack_208);
    func_0x0001000880fc(&uStack_208);
  }
  return;
}



/* Entry: 104472e38; end: 104472e5f; -[SCAppLaunchSignaler appWillEnterForeground] */

void FUN_104472e38(undefined8 param_1)

{
  _objc_retain();
  FUN_104472b38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104472e60; end: 104472f2b; -[SCAppLaunchSignaler appDidEnterBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104472e60(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  lVar1 = param_1 + _DAT_11307c860;
  puVar2 = auStack_48;
  _swift_beginAccess(lVar1,puVar2,0x21,0);
  lVar5 = *(long *)(lVar1 + 0x38);
  _objc_retain(param_1);
  if (lVar5 != 0) {
    lVar5 = param_1;
    _mach_absolute_time();
    lVar4 = *(long *)(lVar1 + 0x40);
    if (*(long *)(lVar4 + 0x10) != 0) {
      func_0x000100086a50(0x3b);
      if (((ulong)puVar2 & 1) != 0) goto LAB_104472efc;
      lVar4 = *(long *)(lVar1 + 0x40);
    }
    _swift_isUniquelyReferenced_nonNull_native(lVar4);
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    func_0x000100086a54(lVar5,0x3b,lVar4);
    *(undefined8 *)(lVar1 + 0x40) = uVar3;
  }
LAB_104472efc:
  _swift_endAccess(auStack_48);
  func_0x000100c7be28(0);
  _objc_release(param_1);
  return;
}



/* Entry: 104472f2c; end: 104472f2f;  */

undefined1 ** FUN_104472f2c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined8 *puVar6;
  undefined1 **ppuVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar6 = &uStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c6106c();
  uVar1 = param_1 - uRam0000000113813688;
  if (param_1 < uRam0000000113813688) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100c72e00);
    (*pcVar5)();
  }
  uStack_30 = 0;
  func_0x000107c6109c();
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uStack_30 & 0xffffffff;
  if (SUB168(auVar3 * auVar4,8) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100c72e04);
    (*pcVar5)();
  }
  if (uStack_30._4_4_ == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100c72e08);
    (*pcVar5)();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    uVar2 = 0;
    if ((ulong)uStack_30._4_4_ != 0) {
      uVar2 = (uVar1 * (uStack_30 & 0xffffffff)) / (ulong)uStack_30._4_4_;
    }
    return (undefined1 **)(uVar2 / 1000000);
  }
  func_0x000107c60e78();
  puStack_58 = (undefined1 *)&uStack_70;
  ppuVar7 = (undefined1 **)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    (**(code **)(**(long **)((long)puVar6 + 8) + 0x18))
              (*(long **)((long)puVar6 + 8),&UNK_11089f7b0,&uStack_70,param_2);
    ppuVar7 = &puStack_58;
    func_0x00010007e5dc(ppuVar7);
  }
  return ppuVar7;
}



/* Entry: 104472f30; end: 104473067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104472f30(undefined8 *param_1,ulong param_2,byte param_3,long param_4,byte *param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [48];
  
  if ((param_2 & 1) != 0) {
    func_0x0001000298f0();
    _swift_beginAccess();
    lVar2 = _DAT_11307c880;
    uVar1 = *param_1;
    uVar3 = *(undefined8 *)(param_4 + _DAT_11307c880);
    _objc_retain(uVar1);
    func_0x0001048d81b4(uVar3);
    _objc_release(uVar1);
    _swift_beginAccess(param_1,auStack_80,0,0);
    uVar1 = *param_1;
    uVar3 = *(undefined8 *)(param_4 + lVar2);
    _objc_retain(uVar1);
    func_0x000100c7bdd8(uVar3);
    _objc_release(uVar1);
    param_4 = param_4 + _DAT_11307c860;
    lVar2 = param_4;
    _swift_beginAccess(param_4,auStack_98,0x21,0);
    if (*(long *)(param_4 + 0x38) != 0) {
      _mach_absolute_time();
      uVar1 = *(undefined8 *)(param_4 + 0x40);
      _swift_isUniquelyReferenced_nonNull_native(uVar1);
      uVar3 = *(undefined8 *)(param_4 + 0x40);
      *(undefined8 *)(param_4 + 0x40) = 0x8000000000000000;
      func_0x000100086a54(lVar2,2,uVar1);
      *(undefined8 *)(param_4 + 0x40) = uVar3;
    }
    _swift_endAccess(auStack_98);
  }
  *param_5 = param_3 & 1;
  return;
}



/* Entry: 104473068; end: 10447306b;  */

void FUN_104473068(void)

{
  return;
}



/* Entry: 10447306c; end: 10447310f;  */

void FUN_10447306c(undefined8 param_1,long param_2)

{
  undefined1 auStack_80 [16];
  long lStack_70;
  char *pcStack_68;
  undefined1 auStack_60 [16];
  char *pcStack_50;
  long lStack_48;
  char cStack_39;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    cStack_39 = '\0';
    pcStack_68 = &cStack_39;
    lStack_70 = param_2;
    pcStack_50 = pcStack_68;
    lStack_48 = param_2;
    func_0x000100c7bb9c(0x1044732c4,auStack_60,0x1044732b0,auStack_80,FUN_104473068,0);
    if (cStack_39 == '\x01') {
      func_0x000100c7be28(1);
    }
    _objc_release(param_2);
  }
  return;
}


