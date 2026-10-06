/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10481182c; end: 1048118db; -[SCAdMediaCookie initWithCookieName:cookieContent:cookieType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481182c(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_4 == 0) {
    param_4 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_113090a30);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  plVar2 = (long *)(param_1 + _DAT_113090a38);
  *plVar2 = param_4;
  plVar2[1] = lVar4;
  *(undefined8 *)(param_1 + _DAT_113090a40) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048118dc; end: 104811947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048118dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090a30);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090a38);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113090a40) = param_1[4];
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104811948; end: 10481197b; -[SCAdMediaCookie hash] */

undefined8 FUN_104811948(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10481197c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10481197c; end: 104811a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481197c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090a30);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090a30))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113090a38))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090a38);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113090a40));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104811a44; end: 104811b8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104811a44(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  uint uVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar5 = *(ulong *)(unaff_x20 + _DAT_113090a30);
      if (uVar5 == *(ulong *)(lStack_68 + _DAT_113090a30) &&
          ((ulong *)(unaff_x20 + _DAT_113090a30))[1] == ((ulong *)(lStack_68 + _DAT_113090a30))[1])
      {
        uVar5 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
      }
      lVar3 = ((long *)(unaff_x20 + _DAT_113090a38))[1];
      lVar4 = ((long *)(lStack_68 + _DAT_113090a38))[1];
      uVar6 = (uint)(lVar3 == 0 && lVar4 == 0);
      if (lVar3 != 0 && lVar4 != 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_113090a38);
        if (lVar2 == *(long *)(lStack_68 + _DAT_113090a38) && lVar3 == lVar4) {
          uVar6 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar6 = (uint)lVar2;
        }
      }
      lVar3 = *(long *)(unaff_x20 + _DAT_113090a40);
      lVar4 = *(long *)(lStack_68 + _DAT_113090a40);
      _objc_release(lStack_68);
      if ((uVar5 & 1) != 0) {
        return uVar6 & lVar3 == lVar4;
      }
    }
  }
  return 0;
}



/* Entry: 104811b8c; end: 104811c0b; -[SCAdMediaCookie isEqual:] */

uint FUN_104811b8c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104811a44(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104811c0c; end: 104811c0f; -[SCAdMediaCookie copyWithZone:] */

void FUN_104811c0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104811c10; end: 104811d47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104811c10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090a30);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090a30))[1]);
  uVar1 = 0x4e5f45494b4f4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e5f45494b4f4f43,0xeb00000000454d41);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113090a38))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090a38);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0x435f45494b4f4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x435f45494b4f4f43,0xee00544e45544e4f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x545f45494b4f4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f45494b4f4f43,0xeb00000000455059);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104811d48; end: 104811d97; -[SCAdMediaCookie encodeWithCoder:] */

void FUN_104811d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104811c10(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104811d98; end: 104811dc7;  */

void FUN_104811d98(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104811dc8(param_1);
  return;
}



/* Entry: 104811dc8; end: 104812043;  */

undefined8 FUN_104811dc8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
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
  
  uVar5 = 0;
  iVar2 = (int)&uStack_a0;
  uVar3 = 0x4e5f45494b4f4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e5f45494b4f4f43,0xeb00000000454d41);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_70);
LAB_104811f10:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return 0;
  }
  _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  lVar4 = lStack_98;
  uVar3 = uStack_a0;
  if ((uVar5 & 1) == 0) {
    _objc_release(param_1);
    goto LAB_104811f10;
  }
  uVar6 = 0x435f45494b4f4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x435f45494b4f4f43,0xee00544e45544e4f);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar7 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar7 = lStack_98;
    uVar6 = uStack_a0;
    if (iVar2 != 0) goto LAB_104811f84;
  }
  lVar7 = 0;
  uVar6 = 0;
LAB_104811f84:
  uVar8 = 0x545f45494b4f4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f45494b4f4f43,0xeb00000000455059);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar4);
  _swift_bridgeObjectRelease(lVar4);
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,lVar7);
    _swift_bridgeObjectRelease(lVar7);
  }
  func_0x00010c005a80();
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 104812044; end: 10481206b; -[SCAdMediaCookie initWithCoder:] */

void FUN_104812044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104811dc8();
  return;
}



/* Entry: 10481206c; end: 104812087; -[SCAdMediaCookie description] */

void FUN_10481206c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104812088; end: 104812103; -[SCAdMediaCookie init] */

void FUN_104812088(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdMediaCookieWrapper.swift",0x26,
             2,0x51,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048120d0);
  (*pcVar1)();
}



/* Entry: 104812104; end: 104812143; -[SCAdMediaCookie .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104812104(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090a30 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090a38 + 8))
  ;
  return;
}



/* Entry: 104812144; end: 104812163;  */

void FUN_104812144(void)

{
  _objc_opt_self(&PTR_PTR_1129d8ae0);
  return;
}



/* Entry: 104812164; end: 10481226f;  */

void FUN_104812164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  FUN_1048125bc(param_1,param_2,param_3);
  return;
}



/* Entry: 104812270; end: 1048123e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104812270(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x20;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar2 = &lStack_68;
    _swift_dynamicCast(plVar2,auStack_60,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar4 = ((long *)(unaff_x20 + _DAT_113090a70))[1];
      lVar5 = ((long *)(lStack_68 + _DAT_113090a70))[1];
      uVar6 = (uint)(lVar4 == 0 && lVar5 == 0);
      if (lVar4 != 0 && lVar5 != 0) {
        lVar3 = *(long *)(unaff_x20 + _DAT_113090a70);
        if (lVar3 == *(long *)(lStack_68 + _DAT_113090a70) && lVar4 == lVar5) {
          uVar6 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar6 = (uint)lVar3;
        }
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_113090a78);
      lVar4 = *(long *)(lStack_68 + _DAT_113090a78);
      if (lVar5 == 0) {
        _swift_bridgeObjectRetain(lVar4);
        _objc_release(lStack_68);
        if (lVar4 == 0) {
          uVar6 = uVar6 & 1;
          goto LAB_104812338;
        }
        _swift_bridgeObjectRelease(lVar4);
      }
      else {
        if (lVar4 != 0) {
          _swift_bridgeObjectRetain(lVar4);
          lVar3 = lVar5;
          _swift_bridgeObjectRetain(lVar5);
          uVar1 = (uint)lVar3;
          func_0x00010470d2ec();
          _swift_bridgeObjectRelease(lVar5);
          _swift_bridgeObjectRelease(lVar4);
          _objc_release(lStack_68);
          uVar6 = uVar6 & uVar1;
          goto LAB_104812338;
        }
        _objc_release(lStack_68);
      }
      uVar6 = 0;
      goto LAB_104812338;
    }
  }
  uVar6 = 0;
LAB_104812338:
  return uVar6 & 1;
}



/* Entry: 1048123e8; end: 104812443; -[SCAdMediaWebView url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048123e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090a70))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090a70);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104812444; end: 10481249f; -[SCAdMediaWebView cookieInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104812444(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113090a78);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_104812144(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1048124a0; end: 10481250b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048124a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090a70);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113090a78) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10481250c; end: 1048125bb; -[SCAdMediaWebView initWithUrl:cookieInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481250c(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  lVar4 = 0;
  if (param_4 != 0) {
    uVar3 = 0;
    FUN_104812144();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar3);
    lVar4 = param_4;
  }
  plVar1 = (long *)(param_1 + _DAT_113090a70);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(long *)(param_1 + _DAT_113090a78) = lVar4;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048125bc; end: 10481279f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048125bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [16];
  
  _swift_getObjectType();
  puVar13 = (undefined8 *)(unaff_x20 + _DAT_113090a70);
  *puVar13 = param_1;
  puVar13[1] = param_2;
  if (param_3 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    lVar14 = *(long *)(param_3 + 0x10);
    if (lVar14 == 0) {
      _swift_bridgeObjectRelease(param_3);
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      _swift_bridgeObjectRetain(param_2);
      func_0x0001046c75d0(0,lVar14,0);
      puVar12 = puStack_78;
      lVar8 = 0;
      FUN_104812144();
      puVar13 = (undefined8 *)(param_3 + 0x40);
      do {
        uVar2 = puVar13[-4];
        uVar5 = puVar13[-3];
        uVar3 = puVar13[-2];
        uVar6 = puVar13[-1];
        uVar11 = *puVar13;
        lVar9 = lVar8;
        _objc_allocWithZone();
        puVar1 = (undefined8 *)(lVar9 + _DAT_113090a30);
        *puVar1 = uVar2;
        puVar1[1] = uVar5;
        puVar1 = (undefined8 *)(lVar9 + _DAT_113090a38);
        *puVar1 = uVar3;
        puVar1[1] = uVar6;
        *(undefined8 *)(lVar9 + _DAT_113090a40) = uVar11;
        puVar7 = PTR_s_init_1125d9248;
        lStack_88 = lVar9;
        lStack_80 = lVar8;
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar6);
        plVar10 = &lStack_88;
        _objc_msgSendSuper2(plVar10,puVar7);
        uVar4 = *(ulong *)(puVar12 + 0x10);
        puStack_78 = puVar12;
        if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar4) {
          func_0x0001046c75d0(1 < *(ulong *)(puVar12 + 0x18),uVar4 + 1,1);
        }
        puVar12 = puStack_78;
        puVar13 = puVar13 + 5;
        *(ulong *)(puStack_78 + 0x10) = uVar4 + 1;
        *(long **)(puStack_78 + uVar4 * 8 + 0x20) = plVar10;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      _swift_bridgeObjectRelease(param_3);
      _swift_bridgeObjectRelease(param_2);
    }
  }
  *(undefined **)(unaff_x20 + _DAT_113090a78) = puVar12;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048127a0; end: 1048127d3; -[SCAdMediaWebView hash] */

undefined8 FUN_1048127a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001048121ac();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1048127d4; end: 104812853; -[SCAdMediaWebView isEqual:] */

uint FUN_1048127d4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104812270(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104812854; end: 104812857; -[SCAdMediaWebView copyWithZone:] */

void FUN_104812854(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104812858; end: 10481293f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104812858(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  
  if (((undefined8 *)(unaff_x20 + _DAT_113090a70))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090a70);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4c5255;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c5255,0xe300000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_113090a78);
  if (lVar3 != 0) {
    uVar1 = 0;
    FUN_104812144(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
  }
  uVar1 = 0x495f45494b4f4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f45494b4f4f43,0xeb000000004f464e);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104812940; end: 10481298f; -[SCAdMediaWebView encodeWithCoder:] */

void FUN_104812940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104812858(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104812990; end: 1048129bf;  */

void FUN_104812990(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1048129c0(param_1);
  return;
}



/* Entry: 1048129c0; end: 104812beb;  */

undefined8 FUN_1048129c0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_a0;
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
  
  iVar2 = (int)&lStack_a0;
  iVar3 = (int)&lStack_a0;
  uVar4 = 0x4c5255;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c5255,0xe300000000000000);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar7 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    _swift_dynamicCast(&lStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar6 = lStack_98;
    lVar7 = lStack_a0;
    if (iVar2 == 0) {
      lVar7 = 0;
      lVar6 = 0;
    }
  }
  uVar4 = 0x495f45494b4f4f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f45494b4f4f43,0xeb000000004f464e);
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
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    lVar5 = 0;
  }
  else {
    uVar4 = 0x113090a80;
    func_0x0001000285a8(0x113090a80,&UNK_10dd36458);
    _swift_dynamicCast(&lStack_a0,&uStack_70,puVar1 + 8,uVar4,6);
    lVar5 = lStack_a0;
    if (iVar3 == 0) {
      lVar5 = 0;
    }
  }
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar7,lVar6);
    _swift_bridgeObjectRelease(lVar6);
  }
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    uVar4 = 0;
    FUN_104812144(0);
    lVar6 = lVar5;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar5,uVar4);
    _swift_bridgeObjectRelease(lVar5);
  }
  func_0x00010c059f80();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 104812bec; end: 104812c13; -[SCAdMediaWebView initWithCoder:] */

void FUN_104812bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1048129c0();
  return;
}



/* Entry: 104812c14; end: 104812c53; -[SCAdMediaWebView description] */

void FUN_104812c14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_104812d0c();
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104812c54; end: 104812ccf; -[SCAdMediaWebView init] */

void FUN_104812c54(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdMediaWebViewWrapper.swift",0x27
             ,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104812c9c);
  (*pcVar1)();
}



/* Entry: 104812cd0; end: 104812d0b; -[SCAdMediaWebView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104812cd0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113090a70 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090a78));
  return;
}



/* Entry: 104812d0c; end: 104812fbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104812d0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113090a70);
  uVar3 = ((undefined8 *)(param_1 + _DAT_113090a70))[1];
  uVar11 = *(ulong *)(param_1 + _DAT_113090a78);
  if (uVar11 == 0) {
    _swift_bridgeObjectRetain(uVar3);
    _objc_release(param_1);
  }
  else {
    if (uVar11 >> 0x3e == 0) {
      uVar13 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar13 = uVar11;
      if (-1 < (long)uVar11) {
        uVar13 = uVar11 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
    if (uVar13 == 0) {
      _swift_bridgeObjectRetain(uVar3);
      _objc_release(param_1);
    }
    else {
      _swift_bridgeObjectRetain(uVar3);
      func_0x0001046c7604(0,uVar13 & ((long)uVar13 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x104812fc0);
        (*pcVar7)();
      }
      if ((uVar11 & 0xc000000000000001) == 0) {
        plVar9 = (long *)(uVar11 + 0x20);
        do {
          lVar10 = *plVar9;
          uVar3 = *(undefined8 *)(lVar10 + _DAT_113090a30);
          uVar4 = ((undefined8 *)(lVar10 + _DAT_113090a30))[1];
          uVar2 = *(undefined8 *)(lVar10 + _DAT_113090a38);
          uVar5 = ((undefined8 *)(lVar10 + _DAT_113090a38))[1];
          uVar12 = *(undefined8 *)(lVar10 + _DAT_113090a40);
          uVar11 = *(ulong *)(puVar6 + 0x10);
          uVar14 = *(ulong *)(puVar6 + 0x18);
          _swift_bridgeObjectRetain(uVar4);
          _swift_bridgeObjectRetain(uVar5);
          if (uVar14 >> 1 <= uVar11) {
            func_0x0001046c7604(1 < uVar14,uVar11 + 1,1);
          }
          *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
          *(undefined8 *)(puVar6 + uVar11 * 0x28 + 0x20) = uVar3;
          *(undefined8 *)(puVar6 + uVar11 * 0x28 + 0x28) = uVar4;
          *(undefined8 *)(puVar6 + uVar11 * 0x28 + 0x30) = uVar2;
          *(undefined8 *)(puVar6 + uVar11 * 0x28 + 0x38) = uVar5;
          *(undefined8 *)(puVar6 + uVar11 * 0x28 + 0x40) = uVar12;
          uVar13 = uVar13 - 1;
          plVar9 = plVar9 + 1;
        } while (uVar13 != 0);
      }
      else {
        uVar14 = 0;
        do {
          uVar8 = uVar14;
          func_0x0001046c46ac(uVar14,uVar11);
          uVar3 = *(undefined8 *)(uVar8 + _DAT_113090a30);
          uVar4 = ((undefined8 *)(uVar8 + _DAT_113090a30))[1];
          uVar2 = *(undefined8 *)(uVar8 + _DAT_113090a38);
          uVar5 = ((undefined8 *)(uVar8 + _DAT_113090a38))[1];
          uVar12 = *(undefined8 *)(uVar8 + _DAT_113090a40);
          _swift_bridgeObjectRetain(uVar5);
          _swift_bridgeObjectRetain(uVar4);
          _swift_unknownObjectRelease(uVar8);
          uVar8 = *(ulong *)(puVar6 + 0x10);
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
            func_0x0001046c7604(1 < *(ulong *)(puVar6 + 0x18),uVar8 + 1,1);
          }
          uVar14 = uVar14 + 1;
          *(ulong *)(puVar6 + 0x10) = uVar8 + 1;
          *(undefined8 *)(puVar6 + uVar8 * 0x28 + 0x20) = uVar3;
          *(undefined8 *)(puVar6 + uVar8 * 0x28 + 0x28) = uVar4;
          *(undefined8 *)(puVar6 + uVar8 * 0x28 + 0x30) = uVar2;
          *(undefined8 *)(puVar6 + uVar8 * 0x28 + 0x38) = uVar5;
          *(undefined8 *)(puVar6 + uVar8 * 0x28 + 0x40) = uVar12;
        } while (uVar13 != uVar14);
      }
      _objc_release(param_1);
    }
  }
  return uVar1;
}



/* Entry: 104812fc0; end: 104812fdf;  */

void FUN_104812fc0(void)

{
  _objc_opt_self(&PTR_PTR_1129d8bc0);
  return;
}



/* Entry: 104812fe0; end: 104812fef; -[SCAdPageAnimationConfig animationDurationSec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104812fe0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090ab0);
}



/* Entry: 104812ff0; end: 10481304b; -[SCAdPageAnimationConfig curveControlPoints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104812ff0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113090ab8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000100f6e714(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10481304c; end: 10481304f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481304c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090ab0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113090ab8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104813050; end: 1048130d7; -[SCAdPageAnimationConfig initWithAnimationDurationSec:curveControlPoints:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104813050(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_2;
  _swift_getObjectType();
  lVar2 = 0;
  if (param_4 != 0) {
    func_0x000100f6e714();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,lVar2);
    lVar2 = param_4;
  }
  *(undefined8 *)(param_2 + _DAT_113090ab0) = param_1;
  *(long *)(param_2 + _DAT_113090ab8) = lVar2;
  lStack_50 = param_2;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048130d8; end: 10481313b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048130d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090ab0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113090ab8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10481313c; end: 10481320b; -[SCAdPageAnimationConfig hash] */

undefined8 FUN_10481313c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104813170();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10481320c; end: 10481330b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10481320c(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long unaff_x20;
  long lVar4;
  double dVar5;
  double dVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      dVar5 = *(double *)(unaff_x20 + _DAT_113090ab0);
      dVar6 = *(double *)(lStack_68 + _DAT_113090ab0);
      lVar2 = *(long *)(unaff_x20 + _DAT_113090ab8);
      lVar4 = *(long *)(lStack_68 + _DAT_113090ab8);
      if (lVar2 == 0) {
        _swift_bridgeObjectRetain(lVar4);
        _objc_release(lStack_68);
        if (lVar4 == 0) {
          uVar3 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar4);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
        if (lVar4 != 0) {
          FUN_10470b510(lVar2,lVar4);
          uVar3 = (uint)lVar2;
        }
        _objc_release(lStack_68);
      }
      return dVar5 == dVar6 & uVar3;
    }
  }
  return 0;
}



/* Entry: 10481330c; end: 10481338b; -[SCAdPageAnimationConfig isEqual:] */

uint FUN_10481330c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10481320c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10481338c; end: 10481338f; -[SCAdPageAnimationConfig copyWithZone:] */

void FUN_10481338c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104813390; end: 104813467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104813390(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_113090ab0);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f210150);
  func_0x00010bf92e80(uVar3,param_1);
  _objc_release(uVar1);
  lVar2 = *(long *)(unaff_x20 + _DAT_113090ab8);
  if (lVar2 != 0) {
    uVar1 = 0;
    func_0x000100f6e714(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,uVar1);
  }
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f210170);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104813468; end: 1048134b7; -[SCAdPageAnimationConfig encodeWithCoder:] */

void FUN_104813468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104813390(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048134b8; end: 1048134e7;  */

void FUN_1048134b8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1048134e8(param_1);
  return;
}



/* Entry: 1048134e8; end: 10481365f;  */

undefined8 FUN_1048134e8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
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
  
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f210150);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f210170);
  lVar2 = param_2;
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
    uVar1 = 0x113090ac0;
    func_0x0001000285a8(0x113090ac0,&UNK_10dd36478);
    puVar3 = &uStack_88;
    _swift_dynamicCast(puVar3,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar3 & 1) != 0) {
      uVar4 = 0;
      func_0x000100f6e714(0);
      uVar1 = uStack_88;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uStack_88,uVar4);
      _swift_bridgeObjectRelease(uStack_88);
      goto LAB_104813620;
    }
  }
  uVar1 = 0;
LAB_104813620:
  func_0x00010bff2fa0(param_1);
  _objc_release(uVar1);
  _objc_release(param_2);
  return unaff_x20;
}



/* Entry: 104813660; end: 104813687; -[SCAdPageAnimationConfig initWithCoder:] */

void FUN_104813660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1048134e8();
  return;
}



/* Entry: 104813688; end: 1048136a3; -[SCAdPageAnimationConfig description] */

void FUN_104813688(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048136a4; end: 10481371f; -[SCAdPageAnimationConfig init] */

void FUN_1048136a4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdPageAnimationConfigWrapper.swift",0x2e,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048136ec);
  (*pcVar1)();
}



/* Entry: 104813720; end: 10481372f; -[SCAdPageAnimationConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104813720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113090ab8));
  return;
}



/* Entry: 104813730; end: 10481374f;  */

void FUN_104813730(void)

{
  _objc_opt_self(&PTR_PTR_1129d8c98);
  return;
}



/* Entry: 104813750; end: 104813753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104813750(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090ab0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113090ab8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104813754; end: 10481394f;  */

void FUN_104813754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone();
  FUN_104813bc8(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 104813950; end: 104813acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104813950(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  long lStack_58;
  long alStack_50 [4];
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_50);
  if (alStack_50[3] == 0) {
    func_0x00010006e7f4(alStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,alStack_50,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar1 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_113090af0) == 0) {
        uVar4 = (uint)(*(long *)(lStack_58 + _DAT_113090af0) == 0);
      }
      else {
        lVar6 = *(long *)(lStack_58 + _DAT_113090af0);
        if (lVar6 == 0) {
          lVar2 = 0;
          alStack_50[1] = 0;
          alStack_50[2] = 0;
        }
        else {
          lVar2 = 0;
          FUN_104813730();
        }
        alStack_50[0] = lVar6;
        alStack_50[3] = lVar2;
        _objc_retain(lVar6);
        plVar1 = alStack_50;
        FUN_10481320c(plVar1);
        uVar4 = (uint)plVar1;
        func_0x00010006e7f4(alStack_50);
      }
      if (*(long *)(unaff_x20 + _DAT_113090af8) == 0) {
        lVar2 = *(long *)(lStack_58 + _DAT_113090af8);
        lVar6 = lVar2;
        _objc_retain(lVar2);
        _objc_release(lStack_58);
        if (lVar2 != 0) {
          _objc_release(lVar6);
          uVar4 = 0;
          goto LAB_104813aac;
        }
        uVar5 = 1;
      }
      else {
        lVar6 = *(long *)(lStack_58 + _DAT_113090af8);
        if (lVar6 == 0) {
          uVar3 = 0;
          alStack_50[1] = 0;
          alStack_50[2] = 0;
        }
        else {
          uVar3 = 0;
          FUN_104813730();
        }
        alStack_50[0] = lVar6;
        alStack_50[3] = uVar3;
        _objc_retain(lVar6);
        plVar1 = alStack_50;
        FUN_10481320c(plVar1);
        uVar5 = (uint)plVar1;
        _objc_release(lStack_58);
        func_0x00010006e7f4(alStack_50);
      }
      uVar4 = uVar4 & uVar5;
      goto LAB_104813aac;
    }
  }
  uVar4 = 0;
LAB_104813aac:
  return uVar4 & 1;
}



/* Entry: 104813acc; end: 104813adb; -[SCAdPageTransitionConfig groupAnimationFromConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104813acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090af0));
  return;
}



/* Entry: 104813adc; end: 104813aeb; -[SCAdPageTransitionConfig groupAnimationToConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104813adc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113090af8));
  return;
}



/* Entry: 104813aec; end: 104813b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104813aec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090af0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113090af8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104813b50; end: 104813bc7; -[SCAdPageTransitionConfig initWithGroupAnimationFromConfig:groupAnimationToConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104813b50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113090af0) = param_3;
  *(undefined8 *)(param_1 + _DAT_113090af8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 104813bc8; end: 104813d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104813bc8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  plVar2 = &lStack_90;
  _swift_getObjectType();
  if (param_2 == 1) {
    plVar2 = (long *)0x0;
  }
  else {
    lVar4 = 0;
    FUN_104813730();
    lVar3 = lVar4;
    _objc_allocWithZone();
    *(undefined8 *)(lVar3 + _DAT_113090ab0) = param_1;
    *(long *)(lVar3 + _DAT_113090ab8) = param_2;
    puVar1 = PTR_s_init_1125d9248;
    lStack_90 = lVar3;
    lStack_88 = lVar4;
    _swift_bridgeObjectRetain(param_2);
    _objc_msgSendSuper2(&lStack_90,puVar1);
  }
  *(long **)(unaff_x20 + _DAT_113090af0) = plVar2;
  if (param_4 == 1) {
    FUN_1047078fc(param_1,param_2);
    plVar2 = (long *)0x0;
  }
  else {
    lVar4 = 0;
    FUN_104813730();
    lVar3 = lVar4;
    _objc_allocWithZone();
    *(undefined8 *)(lVar3 + _DAT_113090ab0) = param_3;
    *(long *)(lVar3 + _DAT_113090ab8) = param_4;
    puVar1 = PTR_s_init_1125d9248;
    lStack_80 = lVar3;
    lStack_78 = lVar4;
    _swift_bridgeObjectRetain(param_4);
    plVar2 = &lStack_80;
    _objc_msgSendSuper2(plVar2,puVar1);
    FUN_1047078fc(param_1,param_2);
    FUN_1047078fc(param_3,param_4);
  }
  *(long **)(unaff_x20 + _DAT_113090af8) = plVar2;
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104813d20; end: 104813d53; -[SCAdPageTransitionConfig hash] */

undefined8 FUN_104813d20(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001048137ac();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104813d54; end: 104813dd3; -[SCAdPageTransitionConfig isEqual:] */

uint FUN_104813d54(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104813950(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104813dd4; end: 104813dd7; -[SCAdPageTransitionConfig copyWithZone:] */

void FUN_104813dd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104813dd8; end: 104813eab; -[SCAdPageTransitionConfig encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104813dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f2101c0);
  func_0x00010bf93020(param_3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f2101e0);
  func_0x00010bf93020(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104813eac; end: 104813eeb;  */

undefined8 FUN_104813eac(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  func_0x0001048140d0(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104813eec; end: 104813f27; -[SCAdPageTransitionConfig initWithCoder:] */

undefined8 FUN_104813eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001048140d0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104813f28; end: 104813f67; -[SCAdPageTransitionConfig description] */

void FUN_104813f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10481401c();
  FUN_1047078fc();
  FUN_1047078fc(param_3,param_4);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104813f68; end: 104813fe3; -[SCAdPageTransitionConfig init] */

void FUN_104813f68(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdPageTransitionConfigWrapper.swift",0x2f,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104813fb0);
  (*pcVar1)();
}



/* Entry: 104813fe4; end: 10481401b; -[SCAdPageTransitionConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104813fe4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113090af0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113090af8));
  return;
}



/* Entry: 10481401c; end: 104814297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10481401c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113090af0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_113090ab0);
    _swift_bridgeObjectRetain(*(undefined8 *)(lVar1 + _DAT_113090ab8));
  }
  if (*(long *)(param_1 + _DAT_113090af8) != 0) {
    _swift_bridgeObjectRetain(*(undefined8 *)(*(long *)(param_1 + _DAT_113090af8) + _DAT_113090ab8))
    ;
  }
  return uVar2;
}



/* Entry: 104814298; end: 1048142b7;  */

void FUN_104814298(void)

{
  _objc_opt_self(&PTR_PTR_1129d8d70);
  return;
}



/* Entry: 1048142b8; end: 1048142c7; -[SCAdPdpContextValue productId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048142b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113090b28);
}



/* Entry: 1048142c8; end: 10481433b; -[SCAdPdpContextValue organicAdToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048142c8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_113090b30))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113090b30);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10481433c; end: 10481433f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10481433c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090b28) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090b30);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104814340; end: 1048143e3; -[SCAdPdpContextValue initWithProductId:organicAdToken:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104814340(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_2 = -0x1000000000000000;
  }
  else {
    lVar3 = param_4;
    _objc_retain(param_4);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar3);
  }
  *(undefined8 *)(param_1 + _DAT_113090b28) = param_3;
  plVar1 = (long *)(param_1 + _DAT_113090b30);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048143e4; end: 10481444f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048143e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090b28) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090b30);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104814450; end: 104814517; -[SCAdPdpContextValue hash] */

undefined8 FUN_104814450(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104814484();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104814518; end: 1048146cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104814518(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar8 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
    return 0;
  }
  plVar5 = &lStack_78;
  _swift_dynamicCast(plVar5,auStack_70,PTR___sypN_11034f1a8 + 8,lVar8,6);
  if (((ulong)plVar5 & 1) == 0) {
    return 0;
  }
  lVar8 = *(long *)(unaff_x20 + _DAT_113090b28);
  lVar9 = *(long *)(lStack_78 + _DAT_113090b28);
  uVar1 = *(undefined8 *)(lStack_78 + _DAT_113090b30);
  uVar3 = ((undefined8 *)(lStack_78 + _DAT_113090b30))[1];
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090b30);
  uVar4 = ((undefined8 *)(unaff_x20 + _DAT_113090b30))[1];
  if (uVar4 >> 0x3c < 0xf) {
    func_0x000100de78a0(uVar1,uVar3);
    if (uVar3 >> 0x3c < 0xf) {
      func_0x000100de78a0(uVar1,uVar3);
      func_0x000100de78a0(uVar2,uVar4);
      uVar6 = uVar2;
      func_0x000100e25fcc(uVar2,uVar4,uVar1,uVar3);
      uVar7 = (uint)uVar6;
      func_0x0001000b44c0(uVar1,uVar3);
      _objc_release(lStack_78);
      func_0x0001000b44c0(uVar1,uVar3);
      func_0x0001000b44c0(uVar2,uVar4);
      goto LAB_1048146a4;
    }
    func_0x000100de78a0(uVar2,uVar4);
    _objc_release(lStack_78);
  }
  else {
    func_0x000100de78a0(uVar1,uVar3);
    func_0x000100de78a0(uVar2,uVar4);
    _objc_release(lStack_78);
    if (0xe < uVar3 >> 0x3c) {
      func_0x0001000b44c0(uVar2,uVar4);
      uVar7 = 1;
      goto LAB_1048146a4;
    }
  }
  func_0x0001000b44c0(uVar2,uVar4);
  func_0x0001000b44c0(uVar1,uVar3);
  uVar7 = 0;
LAB_1048146a4:
  return lVar8 == lVar9 & uVar7;
}



/* Entry: 1048146cc; end: 10481474b; -[SCAdPdpContextValue isEqual:] */

uint FUN_1048146cc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104814518(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10481474c; end: 10481474f; -[SCAdPdpContextValue copyWithZone:] */

void FUN_10481474c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104814750; end: 104814823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104814750(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x5f544355444f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544355444f5250,0xea00000000004449);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_113090b30))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090b30);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
  }
  else {
    uVar1 = 0;
  }
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210230);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104814824; end: 104814873; -[SCAdPdpContextValue encodeWithCoder:] */

void FUN_104814824(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104814750(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104814874; end: 1048148a3;  */

void FUN_104814874(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1048148a4(param_1);
  return;
}



/* Entry: 1048148a4; end: 104814a23;  */

undefined8 FUN_1048148a4(long param_1)

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
  uVar1 = 0x5f544355444f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544355444f5250,0xea00000000004449);
  func_0x00010bf66f40(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f210230);
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
    _swift_dynamicCast(&uStack_90,&uStack_60,PTR___sypN_11034f1a8 + 8,
                       PTR___s10Foundation4DataVN_110350ae0,6);
    if ((uVar3 & 1) != 0) {
      func_0x00010006c00c(uStack_90,uStack_88);
      uVar1 = uStack_90;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uStack_90,uStack_88);
      func_0x00010006c090(uStack_90,uStack_88);
      goto LAB_1048149d8;
    }
  }
  uVar1 = 0;
  uStack_90 = 0;
  uStack_88 = 0xf000000000000000;
LAB_1048149d8:
  func_0x00010c03a640();
  func_0x0001000b44c0(uStack_90,uStack_88);
  _objc_release(uVar1);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 104814a24; end: 104814a4b; -[SCAdPdpContextValue initWithCoder:] */

void FUN_104814a24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1048148a4();
  return;
}



/* Entry: 104814a4c; end: 104814a97; -[SCAdPdpContextValue description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104814a4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113090b30);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113090b30))[1];
  func_0x000100de78a0(uVar1,uVar2);
  func_0x0001000b44c0(uVar1,uVar2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104814a98; end: 104814b13; -[SCAdPdpContextValue init] */

void FUN_104814a98(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdPdpContextValueWrapper.swift",
             0x2a,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104814ae0);
  (*pcVar1)();
}



/* Entry: 104814b14; end: 104814b27; -[SCAdPdpContextValue .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104814b14(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = *(ulong *)(param_1 + _DAT_113090b30);
  uVar1 = ((ulong *)(param_1 + _DAT_113090b30))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 104814b28; end: 104814b47;  */

void FUN_104814b28(void)

{
  _objc_opt_self(&PTR_PTR_1129d8e48);
  return;
}



/* Entry: 104814b48; end: 104814b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104814b48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113090b28) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090b30);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104814b4c; end: 104814d4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104814b4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113090b60);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113090b60))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113090b68))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113090b68);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104814d4c; end: 104814d97; -[SCAdStoreContextValue storeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104814d4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113090b60);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113090b60))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104814d98; end: 104814df3; -[SCAdStoreContextValue categoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104814d98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113090b68))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113090b68);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104814df4; end: 104814df7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104814df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090b60);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090b68);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104814df8; end: 104814e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104814df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090b60);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113090b68);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104814e74; end: 104814f13; -[SCAdStoreContextValue initWithStoreId:categoryId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104814e74(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_4 == 0) {
    param_4 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_113090b60);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  plVar2 = (long *)(param_1 + _DAT_113090b68);
  *plVar2 = param_4;
  plVar2[1] = lVar4;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104814f14; end: 104814f47; -[SCAdStoreContextValue hash] */

undefined8 FUN_104814f14(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104814b4c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104814f48; end: 104814fc7; -[SCAdStoreContextValue isEqual:] */

uint FUN_104814f48(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x000104814c00(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}


