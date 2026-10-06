/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104835388; end: 10483539b; -[SCAdPharmaDisclaimerCta .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104835388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113091438 + 8))
  ;
  return;
}



/* Entry: 10483539c; end: 1048353bb;  */

void FUN_10483539c(void)

{
  _objc_opt_self(&PTR_PTR_1129da6e0);
  return;
}



/* Entry: 1048353bc; end: 1048353bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048353bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113091430) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091438);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048353c0; end: 1048353ef;  */

void FUN_1048353c0(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x0001048359d4(param_1);
  return;
}



/* Entry: 1048353f0; end: 104835593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048353f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091468);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113091470));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113091478));
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113091480);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113091480))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_113091488);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_c0);
    uVar2 = *(undefined8 *)(lVar3 + _DAT_1130917b8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (uVar2,((undefined8 *)(lVar3 + _DAT_1130917b8))[1]);
    uVar1 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
    __ss6HasherV8_combineyySuF(uVar1);
    uVar1 = *(undefined8 *)(lVar3 + _DAT_1130917c0);
    uVar2 = 0;
    FUN_10483f940(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
    __ss6HasherV8_combineyySuF(uVar2);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104835594; end: 104835777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104835594(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_88;
  long alStack_80 [4];
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  FUN_10483678c(param_1,alStack_80,0x112d387f8,&UNK_10d902650);
  if (alStack_80[3] == 0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar4 = &lStack_88;
    _swift_dynamicCast(plVar4,alStack_80,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar4 & 1) != 0) {
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_113091468);
      uVar7 = *(undefined8 *)(lStack_88 + _DAT_113091468);
      _swift_bridgeObjectRetain(uVar7);
      func_0x000101058cd4(uVar6,uVar7);
      _swift_bridgeObjectRelease(uVar7);
      lVar10 = *(long *)(unaff_x20 + _DAT_113091470);
      lVar11 = *(long *)(lStack_88 + _DAT_113091470);
      iVar1 = *(int *)(unaff_x20 + _DAT_113091478);
      iVar2 = *(int *)(lStack_88 + _DAT_113091478);
      lVar8 = *(long *)(unaff_x20 + _DAT_113091480);
      if (lVar8 == *(long *)(lStack_88 + _DAT_113091480) &&
          ((long *)(unaff_x20 + _DAT_113091480))[1] == ((long *)(lStack_88 + _DAT_113091480))[1]) {
        uVar5 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar5 = (uint)lVar8;
      }
      if (*(long *)(unaff_x20 + _DAT_113091488) == 0) {
        lVar9 = *(long *)(lStack_88 + _DAT_113091488);
        lVar8 = lVar9;
        _objc_retain(lVar9);
        _objc_release(lStack_88);
        if (lVar9 == 0) {
          uVar3 = 1;
        }
        else {
          _objc_release(lVar8);
          uVar3 = 0;
        }
      }
      else {
        lVar8 = *(long *)(lStack_88 + _DAT_113091488);
        if (lVar8 == 0) {
          uVar7 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          uVar7 = 0;
          FUN_104840a2c();
        }
        alStack_80[0] = lVar8;
        alStack_80[3] = uVar7;
        _objc_retain(lVar8);
        plVar4 = alStack_80;
        func_0x00010483fa58(plVar4);
        uVar3 = (uint)plVar4;
        _objc_release(lStack_88);
        func_0x00010006e7f4(alStack_80);
      }
      if (((uint)uVar6 & (uint)(lVar10 == lVar11)) == 1 && iVar1 == iVar2) {
        uVar5 = uVar5 & uVar3;
        goto LAB_104835744;
      }
    }
  }
  uVar5 = 0;
LAB_104835744:
  return uVar5 & 1;
}



/* Entry: 104835778; end: 1048357cb; -[SCAdWebViewCidMetadata cidUrlParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104835778(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113091468);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1048357cc; end: 1048357db; -[SCAdWebViewCidMetadata cidAutoCorrectServerRedirectDistance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048357cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091470);
}



/* Entry: 1048357dc; end: 1048357eb; -[SCAdWebViewCidMetadata exbMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048357dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113091478);
}



/* Entry: 1048357ec; end: 104835837; -[SCAdWebViewCidMetadata exbInAppResolveFinalUrlPrefixMatch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048357ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113091480);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113091480))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104835838; end: 104835847; -[SCAdWebViewCidMetadata webviewUrlParameterUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104835838(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091488));
  return;
}



/* Entry: 104835848; end: 1048358f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104835848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113091468) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113091470) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113091478) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091480);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113091488) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048358f4; end: 104835b27; -[SCAdWebViewCidMetadata initWithCidUrlParams:cidAutoCorrectServerRedirectDistance:exbMode:exbInAppResolveFinalUrlPrefixMatch:webviewUrlParameterUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048358f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar3 = PTR___sSSN_11034da80;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *(undefined8 *)(param_1 + _DAT_113091468) = param_3;
  *(undefined8 *)(param_1 + _DAT_113091470) = param_4;
  *(undefined8 *)(param_1 + _DAT_113091478) = param_5;
  puVar1 = (undefined8 *)(param_1 + _DAT_113091480);
  *puVar1 = param_6;
  puVar1[1] = puVar3;
  *(undefined8 *)(param_1 + _DAT_113091488) = param_7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_60,puVar3);
  return;
}



/* Entry: 104835b28; end: 104835b5b; -[SCAdWebViewCidMetadata hash] */

undefined8 FUN_104835b28(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1048353f0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104835b5c; end: 104835bdb; -[SCAdWebViewCidMetadata isEqual:] */

uint FUN_104835b5c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104835594(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104835bdc; end: 104835bdf; -[SCAdWebViewCidMetadata copyWithZone:] */

void FUN_104835bdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104835be0; end: 104835d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104835be0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091468);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (uVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar2 = 0x5f4c52555f444943;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4c52555f444943,0xee00534d41524150);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000029;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f209960);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x45444f4d5f425845;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45444f4d5f425845,0xe800000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113091480);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113091480))[1]);
  uVar2 = 0xd000000000000029;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f2110e0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f211110);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104835d9c; end: 104835deb; -[SCAdWebViewCidMetadata encodeWithCoder:] */

void FUN_104835d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104835be0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104835dec; end: 104835e1b;  */

void FUN_104835dec(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104835e1c(param_1);
  return;
}



/* Entry: 104835e1c; end: 1048361db;  */

undefined8 FUN_104835e1c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
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
  
  uVar5 = 0;
  uVar7 = 0;
  iVar2 = (int)&uStack_b0;
  uVar3 = 0x5f4c52555f444943;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4c52555f444943,0xee00534d41524150);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
LAB_104835f9c:
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    uVar3 = 0x112d550a0;
    func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
    puVar1 = PTR___sypN_11034f1a8;
    _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar3,6);
    uVar3 = uStack_b0;
    if ((uVar5 & 1) != 0) {
      uVar6 = 0xd000000000000029;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f209960);
      func_0x00010bf66f40(param_1);
      _objc_release(uVar6);
      uVar6 = 0x45444f4d5f425845;
      uVar10 = 0;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45444f4d5f425845);
      lVar4 = param_1;
      func_0x00010bf66f40(param_1);
      _objc_release(uVar6);
      FUN_1046b5b10(lVar4);
      if ((uVar10 & 0xff) != 1) {
        uVar6 = 0xd000000000000029;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f2110e0)
        ;
        lVar4 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        if (lVar4 == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar4);
          _swift_unknownObjectRelease(lVar4);
        }
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 != 0) {
          _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
          uVar6 = uStack_b0;
          if ((uVar7 & 1) != 0) {
            uVar8 = 0xd00000000000001c;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0xd00000000000001c,0x800000010f211110);
            lVar4 = param_1;
            func_0x00010bf67000();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar8);
            if (lVar4 == 0) {
              uStack_98 = 0;
              uStack_a0 = 0;
              lStack_88 = 0;
              uStack_90 = 0;
            }
            else {
              __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar4);
              _swift_unknownObjectRelease(lVar4);
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
              FUN_104840a2c(0);
              _swift_dynamicCast(&uStack_b0,&uStack_80,puVar1 + 8,uVar8,6);
              uVar8 = uStack_b0;
              if (iVar2 == 0) {
                uVar8 = 0;
              }
            }
            uVar9 = uVar3;
            __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                      (uVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
            _swift_bridgeObjectRelease(uVar3);
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uStack_a8);
            _swift_bridgeObjectRelease(uStack_a8);
            func_0x00010bffe1a0();
            _objc_release(uVar9);
            _objc_release(uVar6);
            _objc_release(param_1);
            _objc_release(uVar8);
            return unaff_x20;
          }
          _objc_release(param_1);
          _swift_bridgeObjectRelease(uVar3);
          goto LAB_104835fa4;
        }
        _objc_release(param_1);
        _swift_bridgeObjectRelease(uVar3);
        goto LAB_104835f9c;
      }
      _swift_bridgeObjectRelease(uVar3);
    }
    _objc_release(param_1);
  }
LAB_104835fa4:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1048361dc; end: 104836203; -[SCAdWebViewCidMetadata initWithCoder:] */

void FUN_1048361dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104835e1c();
  return;
}



/* Entry: 104836204; end: 10483624f; -[SCAdWebViewCidMetadata description] */

void FUN_104836204(undefined8 param_1)

{
  undefined1 auStack_60 [64];
  
  _objc_retain();
  FUN_104836318(auStack_60);
  _objc_release(param_1);
  func_0x0001017b66a4(auStack_60);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104836250; end: 1048362cb; -[SCAdWebViewCidMetadata init] */

void FUN_104836250(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdWebViewCidMetadataWrapper.swift",0x2d,2,0x6e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104836298);
  (*pcVar1)();
}



/* Entry: 1048362cc; end: 104836317; -[SCAdWebViewCidMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048362cc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091468));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113091480 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113091488));
  return;
}



/* Entry: 104836318; end: 10483678b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104836318(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined *puVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  uVar15 = *(undefined8 *)(param_2 + _DAT_113091468);
  uVar18 = *(undefined8 *)(param_2 + _DAT_113091470);
  uVar13 = *(undefined8 *)(param_2 + _DAT_113091478);
  uVar3 = *(undefined8 *)(param_2 + _DAT_113091480);
  uVar5 = ((undefined8 *)(param_2 + _DAT_113091480))[1];
  lVar21 = *(long *)(param_2 + _DAT_113091488);
  if (lVar21 == 0) {
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uVar5);
    uVar17 = 0;
    uVar19 = 0;
    puVar25 = (undefined *)0x0;
  }
  else {
    uVar17 = *(undefined8 *)(lVar21 + _DAT_1130917b8);
    uVar19 = ((undefined8 *)(lVar21 + _DAT_1130917b8))[1];
    uVar26 = *(ulong *)(lVar21 + _DAT_1130917c0);
    if (uVar26 >> 0x3e == 0) {
      uVar28 = *(ulong *)((uVar26 & 0xffffffffffffff8) + 0x10);
      puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar28 = uVar26 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar26) {
        uVar28 = uVar26;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar25;
    if (uVar28 == 0) {
      _swift_bridgeObjectRetain(uVar15);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar19);
      puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      _swift_bridgeObjectRetain(uVar15);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar19);
      _objc_retain();
      func_0x0001046c7654(0,uVar28 & ((long)uVar28 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar28 < 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10483678c);
        (*pcVar9)();
      }
      uVar10 = 0;
      do {
        if ((uVar26 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar26 & 0xffffffffffffff8) + 0x10) <= (long)uVar10) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x104836700);
            (*pcVar9)();
          }
          uVar11 = *(ulong *)(uVar26 + 0x20 + uVar10 * 8);
          _objc_retain();
        }
        else {
          uVar11 = uVar10;
          func_0x000103c52dac(uVar10,uVar26);
        }
        uVar22 = *(undefined8 *)(uVar11 + _DAT_113091770);
        uVar16 = *(ulong *)(uVar11 + _DAT_113091778);
        if (uVar16 >> 0x3e == 0) {
          uVar24 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          uVar24 = uVar16 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar16) {
            uVar24 = uVar16;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
          puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
        if (uVar24 != 0) {
          func_0x0001046c7688(0,uVar24 & ((long)uVar24 >> 0x3f ^ 0xffffffffffffffffU),0);
          if ((long)uVar24 < 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1048366fc);
            (*pcVar9)();
          }
          uVar27 = 0;
          do {
            if ((uVar16 & 0xc000000000000001) == 0) {
              uVar12 = *(ulong *)(uVar16 + uVar27 * 8 + 0x20);
              _objc_retain();
            }
            else {
              uVar12 = uVar27;
              func_0x000103c52f48();
            }
            lVar14 = *(long *)(uVar12 + _DAT_113091738);
            uVar23 = *(undefined8 *)(lVar14 + _DAT_1130916f8);
            puVar1 = (undefined8 *)(lVar14 + _DAT_113091700);
            puVar2 = (undefined8 *)(lVar14 + _DAT_113091708);
            uVar32 = puVar1[1];
            uVar31 = *puVar1;
            uVar20 = puVar1[1];
            uVar30 = puVar2[1];
            uVar29 = *puVar2;
            uVar4 = *(undefined8 *)(uVar12 + _DAT_113091740);
            uVar6 = ((undefined8 *)(uVar12 + _DAT_113091740))[1];
            _swift_bridgeObjectRetain(puVar2[1]);
            _swift_bridgeObjectRetain(uVar6);
            _swift_bridgeObjectRetain(uVar23);
            _swift_bridgeObjectRetain(uVar20);
            _objc_release(uVar12);
            uVar12 = *(ulong *)(puVar8 + 0x10);
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar12) {
              func_0x0001046c7688(1 < *(ulong *)(puVar8 + 0x18),uVar12 + 1,1);
            }
            *(ulong *)(puVar8 + 0x10) = uVar12 + 1;
            *(undefined8 *)(puVar8 + uVar12 * 0x38 + 0x20) = uVar23;
            uVar27 = uVar27 + 1;
            *(undefined8 *)(puVar8 + uVar12 * 0x38 + 0x40) = uVar30;
            *(undefined8 *)(puVar8 + uVar12 * 0x38 + 0x38) = uVar29;
            *(undefined8 *)(puVar8 + uVar12 * 0x38 + 0x30) = uVar32;
            *(undefined8 *)(puVar8 + uVar12 * 0x38 + 0x28) = uVar31;
            *(undefined8 *)(puVar8 + uVar12 * 0x38 + 0x48) = uVar4;
            *(undefined8 *)(puVar8 + uVar12 * 0x38 + 0x50) = uVar6;
          } while (uVar24 != uVar27);
        }
        uVar7 = *(undefined1 *)(uVar11 + _DAT_113091780);
        _objc_release();
        uVar11 = *(ulong *)(puVar25 + 0x10);
        if (*(ulong *)(puVar25 + 0x18) >> 1 <= uVar11) {
          func_0x0001046c7654(1 < *(ulong *)(puVar25 + 0x18),uVar11 + 1,1);
        }
        uVar10 = uVar10 + 1;
        *(ulong *)(puVar25 + 0x10) = uVar11 + 1;
        *(undefined8 *)(puVar25 + uVar11 * 0x18 + 0x20) = uVar22;
        *(undefined **)(puVar25 + uVar11 * 0x18 + 0x28) = puVar8;
        puVar25[uVar11 * 0x18 + 0x30] = uVar7;
      } while (uVar10 != uVar28);
      _objc_release(lVar21);
    }
  }
  *param_1 = uVar15;
  param_1[1] = uVar18;
  param_1[2] = uVar13;
  param_1[3] = uVar3;
  param_1[4] = uVar5;
  param_1[5] = uVar17;
  param_1[6] = uVar19;
  param_1[7] = puVar25;
  return;
}



/* Entry: 10483678c; end: 1048367d3;  */

undefined8 FUN_10483678c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1048367d4; end: 1048367f3;  */

void FUN_1048367d4(void)

{
  _objc_opt_self(&PTR_PTR_1129da7b8);
  return;
}



/* Entry: 1048367f4; end: 1048368af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048367f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  long lStack_60;
  long lStack_58;
  
  _objc_allocWithZone();
  lVar2 = 0;
  FUN_10483779c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130914e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130914f0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  plVar4 = &lStack_60;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_1130914b8) = plVar4;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048368b0; end: 104836a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048368b0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar4 = *(long *)(unaff_x20 + _DAT_1130914b8);
  __ss6HasherVABycfC(auStack_c0);
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130914e8);
  uVar2 = *puVar1;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,puVar1[1]);
  uVar3 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130914f0);
  uVar2 = *puVar1;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,puVar1[1]);
  uVar3 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104836a48; end: 104836a57; -[SCAdWebViewEngagementStreamMetadata engagementStreamScript] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104836a48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130914b8));
  return;
}



/* Entry: 104836a58; end: 104836aa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104836a58(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130914b8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104836aa4; end: 104836afb; -[SCAdWebViewEngagementStreamMetadata initWithEngagementStreamScript:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104836aa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_1130914b8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 104836afc; end: 104836bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104836afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  _swift_getObjectType();
  lVar2 = 0;
  FUN_10483779c();
  lVar3 = lVar2;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130914e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130914f0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  plVar4 = &lStack_60;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + _DAT_1130914b8) = plVar4;
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104836bb8; end: 104836beb; -[SCAdWebViewEngagementStreamMetadata hash] */

undefined8 FUN_104836bb8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1048368b0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104836bec; end: 104836c6b; -[SCAdWebViewEngagementStreamMetadata isEqual:] */

uint FUN_104836bec(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x00010483697c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104836c6c; end: 104836c6f; -[SCAdWebViewEngagementStreamMetadata copyWithZone:] */

void FUN_104836c6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104836c70; end: 104836cfb; -[SCAdWebViewEngagementStreamMetadata encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104836c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f211160);
  func_0x00010bf93020(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104836cfc; end: 104836d2b;  */

void FUN_104836cfc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104836d2c(param_1);
  return;
}



/* Entry: 104836d2c; end: 104836e5f;  */

undefined8 FUN_104836d2c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f211160);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    uVar1 = 0;
    FUN_10483779c(0);
    puVar3 = &uStack_78;
    _swift_dynamicCast(puVar3,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x00010c00ff40();
      _objc_release(param_1);
      _objc_release(uStack_78);
      return unaff_x20;
    }
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104836e60; end: 104836e87; -[SCAdWebViewEngagementStreamMetadata initWithCoder:] */

void FUN_104836e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104836d2c();
  return;
}



/* Entry: 104836e88; end: 104836ea3; -[SCAdWebViewEngagementStreamMetadata description] */

void FUN_104836e88(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104836ea4; end: 104836f1f; -[SCAdWebViewEngagementStreamMetadata init] */

void FUN_104836ea4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdWebViewEngagementStreamMetadataWrapper.swift",0x3a,2,0x3e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104836eec);
  (*pcVar1)();
}



/* Entry: 104836f20; end: 104836f2f; -[SCAdWebViewEngagementStreamMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104836f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130914b8));
  return;
}



/* Entry: 104836f30; end: 104836f4f;  */

void FUN_104836f30(void)

{
  _objc_opt_self(&PTR_PTR_1129da8a8);
  return;
}



/* Entry: 104836f50; end: 1048370f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104836f50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130914e8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_1130914e8))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130914f0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_1130914f0))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048370f8; end: 104837103; -[SCAdWebViewEngagementStreamScript url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048370f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130914e8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130914e8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104837104; end: 10483710f; -[SCAdWebViewEngagementStreamScript configJson] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104837104(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130914f0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130914f0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104837110; end: 104837157;  */

void FUN_104837110(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104837158; end: 10483715b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104837158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130914e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130914f0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10483715c; end: 1048371d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483715c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130914e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130914f0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048371d8; end: 104837267; -[SCAdWebViewEngagementStreamScript initWithUrl:configJson:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048371d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar1 = (undefined8 *)(param_1 + _DAT_1130914e8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130914f0);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104837268; end: 10483729b; -[SCAdWebViewEngagementStreamScript hash] */

undefined8 FUN_104837268(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104836f50();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10483729c; end: 10483731b; -[SCAdWebViewEngagementStreamScript isEqual:] */

uint FUN_10483729c(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x000104836ff4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10483731c; end: 10483731f; -[SCAdWebViewEngagementStreamScript copyWithZone:] */

void FUN_10483731c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104837320; end: 1048373e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104837320(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130914e8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_1130914e8))[1]);
  uVar2 = 0x4c5255;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c5255,0xe300000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1130914f0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_1130914f0))[1]);
  uVar2 = 0x4a5f4749464e4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4a5f4749464e4f43,0xeb000000004e4f53);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1048373e8; end: 104837437; -[SCAdWebViewEngagementStreamScript encodeWithCoder:] */

void FUN_1048373e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104837320(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104837438; end: 104837467;  */

void FUN_104837438(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104837468(param_1);
  return;
}



/* Entry: 104837468; end: 10483769b;  */

undefined8 FUN_104837468(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar4 = 0;
  uVar6 = 0;
  uVar2 = 0x4c5255;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c5255,0xe300000000000000);
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
    _objc_release(param_1);
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar7 = uStack_98;
    uVar2 = uStack_a0;
    if ((uVar4 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_10483764c;
    }
    uVar5 = 0x4a5f4749464e4f43;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4a5f4749464e4f43,0xeb000000004e4f53);
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
    if (lStack_78 != 0) {
      _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
      if ((uVar6 & 1) != 0) {
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar7);
        _swift_bridgeObjectRelease(uVar7);
        uVar7 = uStack_a0;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_a0,uStack_98);
        _swift_bridgeObjectRelease(uStack_98);
        func_0x00010c059f40();
        _objc_release(uVar2);
        _objc_release(uVar7);
        _objc_release(param_1);
        return unaff_x20;
      }
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uVar7);
      goto LAB_10483764c;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(uVar7);
  }
  func_0x00010006e7f4(&uStack_70);
LAB_10483764c:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10483769c; end: 1048376c3; -[SCAdWebViewEngagementStreamScript initWithCoder:] */

void FUN_10483769c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104837468();
  return;
}



/* Entry: 1048376c4; end: 1048376df; -[SCAdWebViewEngagementStreamScript description] */

void FUN_1048376c4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048376e0; end: 10483775b; -[SCAdWebViewEngagementStreamScript init] */

void FUN_1048376e0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdWebViewEngagementStreamScriptWrapper.swift",0x38,2,0x4b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104837728);
  (*pcVar1)();
}



/* Entry: 10483775c; end: 10483779b; -[SCAdWebViewEngagementStreamScript .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483775c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130914e8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130914f0 + 8))
  ;
  return;
}



/* Entry: 10483779c; end: 1048377bb;  */

void FUN_10483779c(void)

{
  _objc_opt_self(&PTR_PTR_1129da978);
  return;
}



/* Entry: 1048377bc; end: 1048377bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048377bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130914e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130914f0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048377c0; end: 10483781b; -[SCAdWebViewInHouseCache pageURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048377c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113091520))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113091520);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10483781c; end: 10483781f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10483781c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091520);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104837820; end: 1048378ef; -[SCAdWebViewInHouseCache initWithPageURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104837820(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113091520);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048378f0; end: 104837a9b; -[SCAdWebViewInHouseCache hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048378f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = ((undefined8 *)(param_1 + _DAT_113091520))[1];
  if (lVar1 == 0) {
    _objc_retain(param_1);
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113091520);
    _objc_retain(param_1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    uVar3 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 104837a9c; end: 104837b1b; -[SCAdWebViewInHouseCache isEqual:] */

uint FUN_104837a9c(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x000104837998(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104837b1c; end: 104837b1f; -[SCAdWebViewInHouseCache copyWithZone:] */

void FUN_104837b1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104837b20; end: 104837bdb; -[SCAdWebViewInHouseCache encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104837b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = ((undefined8 *)(param_1 + _DAT_113091520))[1];
  if (lVar2 == 0) {
    _objc_retain(param_3);
    _objc_retain(param_1);
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113091520);
    _objc_retain(param_3);
    _objc_retain(param_1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
  }
  uVar1 = 0x4c52555f45474150;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c52555f45474150,0xe800000000000000);
  func_0x00010bf93020(param_3);
  _swift_unknownObjectRelease(uVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104837bdc; end: 104837c0b;  */

void FUN_104837bdc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104837c0c(param_1);
  return;
}



/* Entry: 104837c0c; end: 104837d1b;  */

undefined8 FUN_104837c0c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar3 = 0;
  uVar1 = 0x4c52555f45474150;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c52555f45474150,0xe800000000000000);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_70,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    _swift_dynamicCast(&uStack_80,&uStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if ((uVar3 & 1) != 0) {
      uVar1 = uStack_80;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_80,uStack_78);
      _swift_bridgeObjectRelease(uStack_78);
      goto LAB_104837ce4;
    }
  }
  uVar1 = 0;
LAB_104837ce4:
  func_0x00010c0334c0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 104837d1c; end: 104837d43; -[SCAdWebViewInHouseCache initWithCoder:] */

void FUN_104837d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104837c0c();
  return;
}



/* Entry: 104837d44; end: 104837d5f; -[SCAdWebViewInHouseCache description] */

void FUN_104837d44(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104837d60; end: 104837ddb; -[SCAdWebViewInHouseCache init] */

void FUN_104837d60(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdWebViewInHouseCacheWrapper.swift",0x2e,2,0x3c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104837da8);
  (*pcVar1)();
}



/* Entry: 104837ddc; end: 104837def; -[SCAdWebViewInHouseCache .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104837ddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113091520 + 8))
  ;
  return;
}



/* Entry: 104837df0; end: 104837e0f;  */

void FUN_104837df0(void)

{
  _objc_opt_self(&PTR_PTR_1129daa50);
  return;
}



/* Entry: 104837e10; end: 104837e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104837e10(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113091520);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104837e14; end: 104837e6b;  */

void FUN_104837e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone();
  FUN_1048381c8(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 104837e6c; end: 104837f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104837e6c(void)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(unaff_x20 + _DAT_113091550);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_113091558);
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



/* Entry: 104837f38; end: 1048380cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104837f38(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_113091550);
      lVar7 = *(long *)(lStack_68 + _DAT_113091550);
      uVar4 = (uint)(lVar6 == 0 && lVar7 == 0);
      if (lVar6 != 0 && lVar7 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar7);
        _objc_retain(lVar6);
        lVar2 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar4 = (uint)lVar2;
        _objc_release(lVar6);
        _objc_release(lVar7);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_113091558);
      lVar7 = *(long *)(lStack_68 + _DAT_113091558);
      if (lVar6 == 0) {
        lVar2 = lVar7;
        _objc_retain(lVar7);
        _objc_release(lStack_68);
        if (lVar7 != 0) {
          uVar5 = 0;
          goto LAB_10483809c;
        }
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
        lVar2 = lStack_68;
        if (lVar7 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar7);
          _objc_retain(lVar6);
          lVar3 = lVar6;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar5 = (uint)lVar3;
          _objc_release(lVar6);
          _objc_release(lVar7);
        }
LAB_10483809c:
        _objc_release(lVar2);
      }
      uVar4 = uVar4 & uVar5;
      goto LAB_1048380a8;
    }
  }
  uVar4 = 0;
LAB_1048380a8:
  return uVar4 & 1;
}



/* Entry: 1048380cc; end: 1048380db; -[SCAdWebViewLifecycleServerConfig lifecycleExtensionTtlMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048380cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091550));
  return;
}



/* Entry: 1048380dc; end: 1048380eb; -[SCAdWebViewLifecycleServerConfig minDwellTimeMsForLifecycleExtension] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048380dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091558));
  return;
}



/* Entry: 1048380ec; end: 10483814f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048380ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113091550) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113091558) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104838150; end: 1048381c7; -[SCAdWebViewLifecycleServerConfig initWithLifecycleExtensionTtlMs:minDwellTimeMsForLifecycleExtension:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104838150(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113091550) = param_3;
  *(undefined8 *)(param_1 + _DAT_113091558) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1048381c8; end: 10483829f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048381c8(undefined8 param_1,char param_2,undefined8 param_3,char param_4)

{
  undefined *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  if (param_2 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_113091550) = puVar1;
  if (param_4 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(param_3);
  }
  *(undefined **)(unaff_x20 + _DAT_113091558) = puVar1;
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048382a0; end: 1048382d3; -[SCAdWebViewLifecycleServerConfig hash] */

undefined8 FUN_1048382a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104837e6c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1048382d4; end: 104838353; -[SCAdWebViewLifecycleServerConfig isEqual:] */

uint FUN_1048382d4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104837f38(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104838354; end: 104838357; -[SCAdWebViewLifecycleServerConfig copyWithZone:] */

void FUN_104838354(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104838358; end: 104838433; -[SCAdWebViewLifecycleServerConfig encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104838358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f209a20);
  func_0x00010bf93020(param_3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000029;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f211230);
  func_0x00010bf93020(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104838434; end: 104838473;  */

undefined8 FUN_104838434(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_104838618(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104838474; end: 1048384af; -[SCAdWebViewLifecycleServerConfig initWithCoder:] */

undefined8 FUN_104838474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_104838618();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1048384b0; end: 1048384e7; -[SCAdWebViewLifecycleServerConfig description] */

void FUN_1048384b0(undefined8 param_1)

{
  _objc_retain();
  FUN_10483859c();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048384e8; end: 104838563; -[SCAdWebViewLifecycleServerConfig init] */

void FUN_1048384e8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdWebViewLifecycleServerConfigWrapper.swift",0x37,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104838530);
  (*pcVar1)();
}



/* Entry: 104838564; end: 10483859b; -[SCAdWebViewLifecycleServerConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104838564(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113091550));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113091558));
  return;
}



/* Entry: 10483859c; end: 104838617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10483859c(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + _DAT_113091550) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf885a0();
  }
  if (*(long *)(param_2 + _DAT_113091558) != 0) {
    func_0x00010bf885a0();
  }
  return param_1;
}



/* Entry: 104838618; end: 1048387df;  */

undefined8 FUN_104838618(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
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
  
  uVar2 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f209a20);
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
  puVar1 = PTR___sypN_11034f1a8;
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_88;
    _swift_dynamicCast(puVar4,&uStack_60,puVar1 + 8,uVar2,6);
    uVar2 = uStack_88;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
    }
  }
  uVar5 = 0xd000000000000029;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f211230);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (param_1 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,param_1);
    _swift_unknownObjectRelease(param_1);
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
  func_0x00010c026100();
  _objc_release(uVar2);
  _objc_release(uVar5);
  return unaff_x20;
}



/* Entry: 1048387e0; end: 1048387ff;  */

void FUN_1048387e0(void)

{
  _objc_opt_self(&PTR_PTR_1129dab20);
  return;
}



/* Entry: 104838800; end: 10483882f;  */

void FUN_104838800(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x0001048393d0(param_1);
  return;
}


